/*
 * Copyright (C) 2018 Alyssa Rosenzweig
 * Copyright (C) 2020 Collabora Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "util/macros.h"
#include "util/u_prim.h"
#include "util/u_vbuf.h"

#include "panfrost-quirks.h"

#include "pan_pool.h"
#include "pan_bo.h"
#include "pan_cmdstream.h"
#include "pan_context.h"
#include "pan_job.h"

/* If a BO is accessed for a particular shader stage, will it be in the primary
 * batch (vertex/tiler) or the secondary batch (fragment)? Anything but
 * fragment will be primary, e.g. compute jobs will be considered
 * "vertex/tiler" by analogy */

static inline uint32_t
panfrost_bo_access_for_stage(enum pipe_shader_type stage)
{
        assert(stage == PIPE_SHADER_FRAGMENT ||
               stage == PIPE_SHADER_VERTEX ||
               stage == PIPE_SHADER_COMPUTE);

        return stage == PIPE_SHADER_FRAGMENT ?
               PAN_BO_ACCESS_FRAGMENT :
               PAN_BO_ACCESS_VERTEX_TILER;
}

static void
panfrost_vt_emit_shared_memory(struct panfrost_context *ctx,
                               struct mali_vertex_tiler_postfix *postfix)
{
        struct panfrost_device *dev = pan_device(ctx->base.screen);
        struct panfrost_batch *batch = panfrost_get_batch_for_fbo(ctx);

        struct mali_shared_memory shared = {
                .shared_workgroup_count = ~0,
        };

        if (batch->stack_size) {
                struct panfrost_bo *stack =
                        panfrost_batch_get_scratchpad(batch, batch->stack_size,
                                        dev->thread_tls_alloc,
                                        dev->core_count);

                shared.stack_shift = panfrost_get_stack_shift(batch->stack_size);
                shared.scratchpad = stack->gpu;
        }

        postfix->shared_memory = panfrost_pool_upload_aligned(&batch->pool, &shared, sizeof(shared), 64);
}

static void
panfrost_vt_attach_framebuffer(struct panfrost_context *ctx,
                               struct mali_vertex_tiler_postfix *postfix)
{
        struct panfrost_batch *batch = panfrost_get_batch_for_fbo(ctx);
        postfix->shared_memory = panfrost_batch_reserve_framebuffer(batch);
}

static void
panfrost_vt_update_rasterizer(struct panfrost_rasterizer *rasterizer,
                              struct mali_vertex_tiler_prefix *prefix,
                              struct mali_vertex_tiler_postfix *postfix)
{
        postfix->gl_enables |= 0x7;
        SET_BIT(postfix->gl_enables, MALI_FRONT_CCW_TOP,
                rasterizer->base.front_ccw);
        SET_BIT(postfix->gl_enables, MALI_CULL_FACE_FRONT,
                (rasterizer->base.cull_face & PIPE_FACE_FRONT));
        SET_BIT(postfix->gl_enables, MALI_CULL_FACE_BACK,
                (rasterizer->base.cull_face & PIPE_FACE_BACK));
        SET_BIT(prefix->unknown_draw, MALI_DRAW_FLATSHADE_FIRST,
                rasterizer->base.flatshade_first);
}

void
panfrost_vt_update_primitive_size(struct panfrost_context *ctx,
                                  struct mali_vertex_tiler_prefix *prefix,
                                  union midgard_primitive_size *primitive_size)
{
        struct panfrost_rasterizer *rasterizer = ctx->rasterizer;

        if (!panfrost_writes_point_size(ctx)) {
                float val = (prefix->draw_mode == MALI_DRAW_MODE_POINTS) ?
                              rasterizer->base.point_size :
                              rasterizer->base.line_width;

                primitive_size->constant = val;
        }
}

static void
panfrost_vt_update_occlusion_query(struct panfrost_context *ctx,
                                   struct mali_vertex_tiler_postfix *postfix)
{
        SET_BIT(postfix->gl_enables, MALI_OCCLUSION_QUERY, ctx->occlusion_query);
        if (ctx->occlusion_query) {
                postfix->occlusion_counter = ctx->occlusion_query->bo->gpu;
                panfrost_batch_add_bo(ctx->batch, ctx->occlusion_query->bo,
                                      PAN_BO_ACCESS_SHARED |
                                      PAN_BO_ACCESS_RW |
                                      PAN_BO_ACCESS_FRAGMENT);
        } else {
                postfix->occlusion_counter = 0;
        }
}

void
panfrost_vt_init(struct panfrost_context *ctx,
                 enum pipe_shader_type stage,
                 struct mali_vertex_tiler_prefix *prefix,
                 struct mali_vertex_tiler_postfix *postfix)
{
        struct panfrost_device *device = pan_device(ctx->base.screen);

        if (!ctx->shader[stage])
                return;

        memset(prefix, 0, sizeof(*prefix));
        memset(postfix, 0, sizeof(*postfix));

        if (device->quirks & IS_BIFROST) {
                postfix->gl_enables = 0x2;
                panfrost_vt_emit_shared_memory(ctx, postfix);
        } else {
                postfix->gl_enables = 0x6;
                panfrost_vt_attach_framebuffer(ctx, postfix);
        }

        if (stage == PIPE_SHADER_FRAGMENT) {
                panfrost_vt_update_occlusion_query(ctx, postfix);
                panfrost_vt_update_rasterizer(ctx->rasterizer, prefix, postfix);
        }
}

static unsigned
panfrost_translate_index_size(unsigned size)
{
        switch (size) {
        case 1:
                return MALI_DRAW_INDEXED_UINT8;

        case 2:
                return MALI_DRAW_INDEXED_UINT16;

        case 4:
                return MALI_DRAW_INDEXED_UINT32;

        default:
                unreachable("Invalid index size");
        }
}

/* Gets a GPU address for the associated index buffer. Only gauranteed to be
 * good for the duration of the draw (transient), could last longer. Also get
 * the bounds on the index buffer for the range accessed by the draw. We do
 * these operations together because there are natural optimizations which
 * require them to be together. */

static mali_ptr
panfrost_get_index_buffer_bounded(struct panfrost_context *ctx,
                                  const struct pipe_draw_info *info,
                                  unsigned *min_index, unsigned *max_index)
{
        struct panfrost_resource *rsrc = pan_resource(info->index.resource);
        struct panfrost_batch *batch = panfrost_get_batch_for_fbo(ctx);
        off_t offset = info->start * info->index_size;
        bool needs_indices = true;
        mali_ptr out = 0;

        if (info->max_index != ~0u) {
                *min_index = info->min_index;
                *max_index = info->max_index;
                needs_indices = false;
        }

        if (!info->has_user_indices) {
                /* Only resources can be directly mapped */
                panfrost_batch_add_bo(batch, rsrc->bo,
                                      PAN_BO_ACCESS_SHARED |
                                      PAN_BO_ACCESS_READ |
                                      PAN_BO_ACCESS_VERTEX_TILER);
                out = rsrc->bo->gpu + offset;

                /* Check the cache */
                needs_indices = !panfrost_minmax_cache_get(rsrc->index_cache,
                                                           info->start,
                                                           info->count,
                                                           min_index,
                                                           max_index);
        } else {
                /* Otherwise, we need to upload to transient memory */
                const uint8_t *ibuf8 = (const uint8_t *) info->index.user;
                struct panfrost_transfer T =
                        panfrost_pool_alloc_aligned(&batch->pool,
                                info->count * info->index_size,
                                info->index_size);

                memcpy(T.cpu, ibuf8 + offset, info->count * info->index_size);
                out = T.gpu;
        }

        if (needs_indices) {
                /* Fallback */
                u_vbuf_get_minmax_index(&ctx->base, info, min_index, max_index);

                if (!info->has_user_indices)
                        panfrost_minmax_cache_add(rsrc->index_cache,
                                                  info->start, info->count,
                                                  *min_index, *max_index);
        }

        return out;
}

void
panfrost_vt_set_draw_info(struct panfrost_context *ctx,
                          const struct pipe_draw_info *info,
                          enum mali_draw_mode draw_mode,
                          struct mali_vertex_tiler_postfix *vertex_postfix,
                          struct mali_vertex_tiler_prefix *tiler_prefix,
                          struct mali_vertex_tiler_postfix *tiler_postfix,
                          unsigned *vertex_count,
                          unsigned *padded_count)
{
        tiler_prefix->draw_mode = draw_mode;

        unsigned draw_flags = 0;

        if (panfrost_writes_point_size(ctx))
                draw_flags |= MALI_DRAW_VARYING_SIZE;

        if (info->primitive_restart)
                draw_flags |= MALI_DRAW_PRIMITIVE_RESTART_FIXED_INDEX;

        /* These doesn't make much sense */

        draw_flags |= 0x3000;

        if (info->index_size) {
                unsigned min_index = 0, max_index = 0;

                tiler_prefix->indices = panfrost_get_index_buffer_bounded(ctx,
                                                                       info,
                                                                       &min_index,
                                                                       &max_index);

                /* Use the corresponding values */
                *vertex_count = max_index - min_index + 1;
                tiler_postfix->offset_start = vertex_postfix->offset_start = min_index + info->index_bias;
                tiler_prefix->offset_bias_correction = -min_index;
                tiler_prefix->index_count = MALI_POSITIVE(info->count);
                draw_flags |= panfrost_translate_index_size(info->index_size);
        } else {
                tiler_prefix->indices = 0;
                *vertex_count = ctx->vertex_count;
                tiler_postfix->offset_start = vertex_postfix->offset_start = info->start;
                tiler_prefix->offset_bias_correction = 0;
                tiler_prefix->index_count = MALI_POSITIVE(ctx->vertex_count);
        }

        tiler_prefix->unknown_draw = draw_flags;

        /* Encode the padded vertex count */

        if (info->instance_count > 1) {
                *padded_count = panfrost_padded_vertex_count(*vertex_count);

                unsigned shift = __builtin_ctz(ctx->padded_count);
                unsigned k = ctx->padded_count >> (shift + 1);

                tiler_postfix->instance_shift = vertex_postfix->instance_shift = shift;
                tiler_postfix->instance_odd = vertex_postfix->instance_odd = k;
        } else {
                *padded_count = *vertex_count;

                /* Reset instancing state */
                tiler_postfix->instance_shift = vertex_postfix->instance_shift = 0;
                tiler_postfix->instance_odd = vertex_postfix->instance_odd = 0;
        }
}

static unsigned
translate_tex_wrap(enum pipe_tex_wrap w)
{
        switch (w) {
        case PIPE_TEX_WRAP_REPEAT: return MALI_WRAP_MODE_REPEAT;
        case PIPE_TEX_WRAP_CLAMP: return MALI_WRAP_MODE_CLAMP;
        case PIPE_TEX_WRAP_CLAMP_TO_EDGE: return MALI_WRAP_MODE_CLAMP_TO_EDGE;
        case PIPE_TEX_WRAP_CLAMP_TO_BORDER: return MALI_WRAP_MODE_CLAMP_TO_BORDER;
        case PIPE_TEX_WRAP_MIRROR_REPEAT: return MALI_WRAP_MODE_MIRRORED_REPEAT;
        case PIPE_TEX_WRAP_MIRROR_CLAMP: return MALI_WRAP_MODE_MIRRORED_CLAMP;
        case PIPE_TEX_WRAP_MIRROR_CLAMP_TO_EDGE: return MALI_WRAP_MODE_MIRRORED_CLAMP_TO_EDGE;
        case PIPE_TEX_WRAP_MIRROR_CLAMP_TO_BORDER: return MALI_WRAP_MODE_MIRRORED_CLAMP_TO_BORDER;
        default: unreachable("Invalid wrap");
        }
}

/* The hardware compares in the wrong order order, so we have to flip before
 * encoding. Yes, really. */

static enum mali_func
panfrost_sampler_compare_func(const struct pipe_sampler_state *cso)
{
        if (!cso->compare_mode)
                return MALI_FUNC_NEVER;

        enum mali_func f = panfrost_translate_compare_func(cso->compare_func);
        return panfrost_flip_compare_func(f);
}

static enum mali_mipmap_mode
pan_pipe_to_mipmode(enum pipe_tex_mipfilter f)
{
        switch (f) {
        case PIPE_TEX_MIPFILTER_NEAREST: return MALI_MIPMAP_MODE_NEAREST;
        case PIPE_TEX_MIPFILTER_LINEAR: return MALI_MIPMAP_MODE_TRILINEAR;
        case PIPE_TEX_MIPFILTER_NONE: return MALI_MIPMAP_MODE_NONE;
        default: unreachable("Invalid");
        }
}

void panfrost_sampler_desc_init(const struct pipe_sampler_state *cso,
                                struct mali_midgard_sampler_packed *hw)
{
        pan_pack(hw, MIDGARD_SAMPLER, cfg) {
                cfg.magnify_nearest = cso->mag_img_filter == PIPE_TEX_FILTER_NEAREST;
                cfg.minify_nearest = cso->min_img_filter == PIPE_TEX_FILTER_NEAREST;
                cfg.mipmap_mode = (cso->min_mip_filter == PIPE_TEX_MIPFILTER_LINEAR) ?
                        MALI_MIPMAP_MODE_TRILINEAR : MALI_MIPMAP_MODE_NEAREST;
                cfg.normalized_coordinates = cso->normalized_coords;

                cfg.lod_bias = FIXED_16(cso->lod_bias, true);

                cfg.minimum_lod = FIXED_16(cso->min_lod, false);

                /* If necessary, we disable mipmapping in the sampler descriptor by
                 * clamping the LOD as tight as possible (from 0 to epsilon,
                 * essentially -- remember these are fixed point numbers, so
                 * epsilon=1/256) */

                cfg.maximum_lod = (cso->min_mip_filter == PIPE_TEX_MIPFILTER_NONE) ?
                        cfg.minimum_lod + 1 :
                        FIXED_16(cso->max_lod, false);

                cfg.wrap_mode_s = translate_tex_wrap(cso->wrap_s);
                cfg.wrap_mode_t = translate_tex_wrap(cso->wrap_t);
                cfg.wrap_mode_r = translate_tex_wrap(cso->wrap_r);

                cfg.compare_function = panfrost_sampler_compare_func(cso);
                cfg.seamless_cube_map = cso->seamless_cube_map;

                cfg.border_color_r = cso->border_color.f[0];
                cfg.border_color_g = cso->border_color.f[1];
                cfg.border_color_b = cso->border_color.f[2];
                cfg.border_color_a = cso->border_color.f[3];
        }
}

void panfrost_sampler_desc_init_bifrost(const struct pipe_sampler_state *cso,
                                        struct mali_bifrost_sampler_packed *hw)
{
        pan_pack(hw, BIFROST_SAMPLER, cfg) {
                cfg.magnify_linear = cso->mag_img_filter == PIPE_TEX_FILTER_LINEAR;
                cfg.minify_linear = cso->min_img_filter == PIPE_TEX_FILTER_LINEAR;
                cfg.mipmap_mode = pan_pipe_to_mipmode(cso->min_mip_filter);
                cfg.normalized_coordinates = cso->normalized_coords;

                cfg.lod_bias = FIXED_16(cso->lod_bias, true);
                cfg.minimum_lod = FIXED_16(cso->min_lod, false);
                cfg.maximum_lod = FIXED_16(cso->max_lod, false);

                cfg.wrap_mode_s = translate_tex_wrap(cso->wrap_s);
                cfg.wrap_mode_t = translate_tex_wrap(cso->wrap_t);
                cfg.wrap_mode_r = translate_tex_wrap(cso->wrap_r);

                cfg.compare_function = panfrost_sampler_compare_func(cso);
                cfg.seamless_cube_map = cso->seamless_cube_map;
        }
}

static bool
panfrost_fs_required(
                struct panfrost_shader_state *fs,
                struct panfrost_blend_final *blend,
                unsigned rt_count)
{
        /* If we generally have side effects */
        if (fs->fs_sidefx)
                return true;

        /* If colour is written we need to execute */
        for (unsigned i = 0; i < rt_count; ++i) {
                if (!blend[i].no_colour)
                        return true;
        }

        /* If depth is written and not implied we need to execute.
         * TODO: Predicate on Z/S writes being enabled */
        return (fs->writes_depth || fs->writes_stencil);
}

static void
panfrost_emit_blend(struct panfrost_batch *batch, void *rts,
                struct panfrost_blend_final *blend)
{
        const struct panfrost_device *dev = pan_device(batch->ctx->base.screen);
        struct panfrost_shader_state *fs = panfrost_get_shader_state(batch->ctx, PIPE_SHADER_FRAGMENT);
        unsigned rt_count = batch->key.nr_cbufs;

        struct bifrost_blend_rt *brts = rts;
        struct midgard_blend_rt *mrts = rts;

        /* Disable blending for depth-only on Bifrost */

        if (rt_count == 0 && dev->quirks & IS_BIFROST)
                brts[0].unk2 = 0x3;

        for (unsigned i = 0; i < rt_count; ++i) {
                unsigned flags = 0;

                pan_pack(&flags, BLEND_FLAGS, cfg) {
                        if (blend[i].no_colour) {
                                cfg.enable = false;
                                break;
                        }

                        batch->draws |= (PIPE_CLEAR_COLOR0 << i);

                        cfg.srgb = util_format_is_srgb(batch->key.cbufs[i]->format);
                        cfg.load_destination = blend[i].load_dest;
                        cfg.dither_disable = !batch->ctx->blend->base.dither;

                        if (!(dev->quirks & IS_BIFROST))
                                cfg.midgard_blend_shader = blend[i].is_shader;
                }

                if (dev->quirks & IS_BIFROST) {
                        brts[i].flags = flags;

                        if (blend[i].is_shader) {
                                /* The blend shader's address needs to be at
                                 * the same top 32 bit as the fragment shader.
                                 * TODO: Ensure that's always the case.
                                 */
                                assert((blend[i].shader.gpu & (0xffffffffull << 32)) ==
                                       (fs->bo->gpu & (0xffffffffull << 32)));
                                brts[i].shader = blend[i].shader.gpu;
                                brts[i].unk2 = 0x0;
                        } else {
                                enum pipe_format format = batch->key.cbufs[i]->format;
                                const struct util_format_description *format_desc;
                                format_desc = util_format_description(format);

                                brts[i].equation = blend[i].equation.equation;

                                /* TODO: this is a bit more complicated */
                                brts[i].constant = blend[i].equation.constant;

                                brts[i].format = panfrost_format_to_bifrost_blend(format_desc);

                                /* 0x19 disables blending and forces REPLACE
                                 * mode (equivalent to rgb_mode = alpha_mode =
                                 * x122, colour mask = 0xF). 0x1a allows
                                 * blending. */
                                brts[i].unk2 = blend[i].opaque ? 0x19 : 0x1a;

                                brts[i].shader_type = fs->blend_types[i];
                        }
                } else {
                        memcpy(&mrts[i].flags, &flags, sizeof(flags));

                        if (blend[i].is_shader) {
                                mrts[i].blend.shader = blend[i].shader.gpu | blend[i].shader.first_tag;
                        } else {
                                mrts[i].blend.equation = blend[i].equation.equation;
                                mrts[i].blend.constant = blend[i].equation.constant;
                        }
                }
        }
}

static void
panfrost_emit_frag_shader(struct panfrost_context *ctx,
                               struct mali_state_packed *fragmeta,
                               struct panfrost_blend_final *blend)
{
        const struct panfrost_device *dev = pan_device(ctx->base.screen);
        struct panfrost_shader_state *fs = panfrost_get_shader_state(ctx, PIPE_SHADER_FRAGMENT);
        struct pipe_rasterizer_state *rast = &ctx->rasterizer->base;
        const struct panfrost_zsa_state *zsa = ctx->depth_stencil;
        unsigned rt_count = ctx->pipe_framebuffer.nr_cbufs;
        bool alpha_to_coverage = ctx->blend->base.alpha_to_coverage;

        /* Built up here */
        struct mali_shader_packed shader = fs->shader;
        struct mali_preload_packed preload = fs->preload;
        uint32_t properties;
        struct mali_multisample_misc_packed multisample_misc;
        struct mali_stencil_mask_misc_packed stencil_mask_misc;
        union midgard_blend sfbd_blend = { 0 };

        if (!panfrost_fs_required(fs, blend, rt_count)) {
                if (dev->quirks & IS_BIFROST) {
                        pan_pack(&shader, SHADER, cfg) {}

                        pan_pack(&properties, BIFROST_PROPERTIES, cfg) {
                                cfg.unknown = 0x950020; /* XXX */
                                cfg.early_z_enable = true;
                        }

                        preload.opaque[0] = 0;
                } else {
                        pan_pack(&shader, SHADER, cfg) {
                                cfg.shader = 0x1;
                        }

                        pan_pack(&properties, MIDGARD_PROPERTIES, cfg) {
                                cfg.work_register_count = 1;
                                cfg.depth_source = MALI_DEPTH_SOURCE_FIXED_FUNCTION;
                                cfg.early_z_enable = true;
                        }
                }
        } else if (dev->quirks & IS_BIFROST) {
                bool no_blend = true;

                for (unsigned i = 0; i < rt_count; ++i)
                        no_blend &= (!blend[i].load_dest | blend[i].no_colour);

                pan_pack(&properties, BIFROST_PROPERTIES, cfg) {
                        cfg.early_z_enable = !fs->can_discard && !fs->writes_depth && no_blend;
                }

                /* Combine with prepacked properties */
                properties |= fs->properties.opaque[0];
        } else {
                /* Reasons to disable early-Z from a shader perspective */
                bool late_z = fs->can_discard || fs->writes_global ||
                        fs->writes_depth || fs->writes_stencil;

                /* If either depth or stencil is enabled, discard matters */
                bool zs_enabled =
                        (zsa->base.depth.enabled && zsa->base.depth.func != PIPE_FUNC_ALWAYS) ||
                        zsa->base.stencil[0].enabled;

                bool has_blend_shader = false;

                for (unsigned c = 0; c < rt_count; ++c)
                        has_blend_shader |= blend[c].is_shader;

                pan_pack(&properties, MIDGARD_PROPERTIES, cfg) {
                        /* TODO: Reduce this limit? */
                        if (has_blend_shader)
                                cfg.work_register_count = MAX2(fs->work_reg_count, 8);
                        else
                                cfg.work_register_count = fs->work_reg_count;

                        cfg.early_z_enable = !(late_z || alpha_to_coverage);
                        cfg.reads_tilebuffer = fs->outputs_read || (!zs_enabled && fs->can_discard);
                        cfg.reads_depth_stencil = zs_enabled && fs->can_discard;
                }

                properties |= fs->properties.opaque[0];
        }

        pan_pack(&multisample_misc, MULTISAMPLE_MISC, cfg) {
                bool msaa = rast->multisample;
                cfg.multisample_enable = msaa;
                cfg.sample_mask = (msaa ? ctx->sample_mask : ~0) & 0xFFFF;

                /* EXT_shader_framebuffer_fetch requires per-sample */
                bool per_sample = ctx->min_samples > 1 || fs->outputs_read;
                cfg.evaluate_per_sample = msaa && per_sample;

                if (dev->quirks & MIDGARD_SFBD) {
                        cfg.sfbd_load_destination = blend[0].load_dest;
                        cfg.sfbd_blend_shader = blend[0].is_shader;
                }

                cfg.depth_function = zsa->base.depth.enabled ?
                        panfrost_translate_compare_func(zsa->base.depth.func) :
                        MALI_FUNC_ALWAYS;

                cfg.depth_write_mask = zsa->base.depth.writemask;
                cfg.near_discard = rast->depth_clip_near;
                cfg.far_discard = rast->depth_clip_far;
                cfg.unknown_2 = true;
        }

        pan_pack(&stencil_mask_misc, STENCIL_MASK_MISC, cfg) {
                cfg.stencil_mask_front = zsa->stencil_mask_front;
                cfg.stencil_mask_back = zsa->stencil_mask_back;
                cfg.stencil_enable = zsa->base.stencil[0].enabled;
                cfg.alpha_to_coverage = alpha_to_coverage;

                if (dev->quirks & MIDGARD_SFBD) {
                        cfg.sfbd_write_enable = !blend[0].no_colour;
                        cfg.sfbd_srgb = util_format_is_srgb(ctx->pipe_framebuffer.cbufs[0]->format);
                        cfg.sfbd_dither_disable = !ctx->blend->base.dither;
                }

                cfg.unknown_1 = 0x7;
                cfg.depth_range_1 = cfg.depth_range_2 = rast->offset_tri;
                cfg.single_sampled_lines = !rast->multisample;
        }

        if (dev->quirks & MIDGARD_SFBD) {
                if (blend[0].is_shader) {
                        sfbd_blend.shader = blend[0].shader.gpu |
                                blend[0].shader.first_tag;
                } else {
                        sfbd_blend.equation = blend[0].equation.equation;
                        sfbd_blend.constant = blend[0].equation.constant;
                }
        } else if (!(dev->quirks & IS_BIFROST)) {
                /* Bug where MRT-capable hw apparently reads the last blend
                 * shader from here instead of the usual location? */

                for (signed rt = ((signed) rt_count - 1); rt >= 0; --rt) {
                        if (!blend[rt].is_shader)
                                continue;

                        sfbd_blend.shader = blend[rt].shader.gpu |
                                                 blend[rt].shader.first_tag;
                        break;
                }
        }

        pan_pack(fragmeta, STATE_OPAQUE, cfg) {
                cfg.shader = fs->shader;
                cfg.properties = properties;
                cfg.depth_units = rast->offset_units * 2.0f;
                cfg.depth_factor = rast->offset_scale;
                cfg.multisample_misc = multisample_misc;
                cfg.stencil_mask_misc = stencil_mask_misc;

                cfg.stencil_front = zsa->stencil_front;
                cfg.stencil_back = zsa->stencil_back;

                /* Bottom bits for stencil ref, exactly one word */
                bool back_enab = zsa->base.stencil[1].enabled;
                cfg.stencil_front.opaque[0] |= ctx->stencil_ref.ref_value[0];
                cfg.stencil_back.opaque[0] |= ctx->stencil_ref.ref_value[back_enab ? 1 : 0];

                if (dev->quirks & IS_BIFROST)
                        cfg.preload = preload;
                else
                        memcpy(&cfg.sfbd_blend, &sfbd_blend, sizeof(sfbd_blend));
        }
}

mali_ptr
panfrost_emit_compute_shader_meta(struct panfrost_batch *batch, enum pipe_shader_type stage)
{
        struct panfrost_shader_state *ss = panfrost_get_shader_state(batch->ctx, stage);

        panfrost_batch_add_bo(batch, ss->bo,
                              PAN_BO_ACCESS_PRIVATE |
                              PAN_BO_ACCESS_READ |
                              PAN_BO_ACCESS_VERTEX_TILER);

        panfrost_batch_add_bo(batch, pan_resource(ss->upload.rsrc)->bo,
                              PAN_BO_ACCESS_PRIVATE |
                              PAN_BO_ACCESS_READ |
                              PAN_BO_ACCESS_VERTEX_TILER);

        return pan_resource(ss->upload.rsrc)->bo->gpu + ss->upload.offset;
}

mali_ptr
panfrost_emit_frag_shader_meta(struct panfrost_batch *batch)
{
        struct panfrost_context *ctx = batch->ctx;
        struct panfrost_shader_state *ss = panfrost_get_shader_state(ctx, PIPE_SHADER_FRAGMENT);

        /* Add the shader BO to the batch. */
        panfrost_batch_add_bo(batch, ss->bo,
                              PAN_BO_ACCESS_PRIVATE |
                              PAN_BO_ACCESS_READ |
                              PAN_BO_ACCESS_FRAGMENT);

        struct panfrost_device *dev = pan_device(ctx->base.screen);
        unsigned rt_count = MAX2(ctx->pipe_framebuffer.nr_cbufs, 1);
        void *rts = NULL;
        struct panfrost_transfer xfer;
        unsigned rt_size;

        if (dev->quirks & MIDGARD_SFBD)
                rt_size = 0;
        else if (dev->quirks & IS_BIFROST)
                rt_size = sizeof(struct bifrost_blend_rt);
        else
                rt_size = sizeof(struct midgard_blend_rt);

        unsigned desc_size = MALI_STATE_LENGTH + rt_size * rt_count;

        if (rt_size)
                rts = rzalloc_size(ctx, rt_size * rt_count);

        struct panfrost_blend_final blend[PIPE_MAX_COLOR_BUFS];

        for (unsigned c = 0; c < ctx->pipe_framebuffer.nr_cbufs; ++c)
                blend[c] = panfrost_get_blend_for_context(ctx, c);

        if (!(dev->quirks & MIDGARD_SFBD))
                panfrost_emit_blend(batch, rts, blend);
        else
                batch->draws |= PIPE_CLEAR_COLOR0;

        xfer = panfrost_pool_alloc_aligned(&batch->pool, desc_size, MALI_STATE_LENGTH);

        panfrost_emit_frag_shader(ctx, (struct mali_state_packed *) xfer.cpu, blend);

        memcpy(xfer.cpu + MALI_STATE_LENGTH, rts, rt_size * rt_count);

        if (rt_size)
                ralloc_free(rts);

        return xfer.gpu;
}

void
panfrost_emit_viewport(struct panfrost_batch *batch,
                       struct mali_vertex_tiler_postfix *tiler_postfix)
{
        struct panfrost_context *ctx = batch->ctx;
        const struct pipe_viewport_state *vp = &ctx->pipe_viewport;
        const struct pipe_scissor_state *ss = &ctx->scissor;
        const struct pipe_rasterizer_state *rast = &ctx->rasterizer->base;
        const struct pipe_framebuffer_state *fb = &ctx->pipe_framebuffer;

        /* Derive min/max from translate/scale. Note since |x| >= 0 by
         * definition, we have that -|x| <= |x| hence translate - |scale| <=
         * translate + |scale|, so the ordering is correct here. */
        float vp_minx = (int) (vp->translate[0] - fabsf(vp->scale[0]));
        float vp_maxx = (int) (vp->translate[0] + fabsf(vp->scale[0]));
        float vp_miny = (int) (vp->translate[1] - fabsf(vp->scale[1]));
        float vp_maxy = (int) (vp->translate[1] + fabsf(vp->scale[1]));
        float minz = (vp->translate[2] - fabsf(vp->scale[2]));
        float maxz = (vp->translate[2] + fabsf(vp->scale[2]));

        /* Scissor to the intersection of viewport and to the scissor, clamped
         * to the framebuffer */

        unsigned minx = MIN2(fb->width, vp_minx);
        unsigned maxx = MIN2(fb->width, vp_maxx);
        unsigned miny = MIN2(fb->height, vp_miny);
        unsigned maxy = MIN2(fb->height, vp_maxy);

        if (ss && rast->scissor) {
                minx = MAX2(ss->minx, minx);
                miny = MAX2(ss->miny, miny);
                maxx = MIN2(ss->maxx, maxx);
                maxy = MIN2(ss->maxy, maxy);
        }

        struct panfrost_transfer T = panfrost_pool_alloc(&batch->pool, MALI_VIEWPORT_LENGTH);

        pan_pack(T.cpu, VIEWPORT, cfg) {
                cfg.scissor_minimum_x = minx;
                cfg.scissor_minimum_y = miny;
                cfg.scissor_maximum_x = maxx - 1;
                cfg.scissor_maximum_y = maxy - 1;

                cfg.minimum_z = rast->depth_clip_near ? minz : -INFINITY;
                cfg.maximum_z = rast->depth_clip_far ? maxz : INFINITY;
        }

        tiler_postfix->viewport = T.gpu;
        panfrost_batch_union_scissor(batch, minx, miny, maxx, maxy);
}

static mali_ptr
panfrost_map_constant_buffer_gpu(struct panfrost_batch *batch,
                                 enum pipe_shader_type st,
                                 struct panfrost_constant_buffer *buf,
                                 unsigned index)
{
        struct pipe_constant_buffer *cb = &buf->cb[index];
        struct panfrost_resource *rsrc = pan_resource(cb->buffer);

        if (rsrc) {
                panfrost_batch_add_bo(batch, rsrc->bo,
                                      PAN_BO_ACCESS_SHARED |
                                      PAN_BO_ACCESS_READ |
                                      panfrost_bo_access_for_stage(st));

                /* Alignment gauranteed by
                 * PIPE_CAP_CONSTANT_BUFFER_OFFSET_ALIGNMENT */
                return rsrc->bo->gpu + cb->buffer_offset;
        } else if (cb->user_buffer) {
                return panfrost_pool_upload_aligned(&batch->pool,
                                                 cb->user_buffer +
                                                 cb->buffer_offset,
                                                 cb->buffer_size, 16);
        } else {
                unreachable("No constant buffer");
        }
}

struct sysval_uniform {
        union {
                float f[4];
                int32_t i[4];
                uint32_t u[4];
                uint64_t du[2];
        };
};

static void
panfrost_upload_viewport_scale_sysval(struct panfrost_batch *batch,
                                      struct sysval_uniform *uniform)
{
        struct panfrost_context *ctx = batch->ctx;
        const struct pipe_viewport_state *vp = &ctx->pipe_viewport;

        uniform->f[0] = vp->scale[0];
        uniform->f[1] = vp->scale[1];
        uniform->f[2] = vp->scale[2];
}

static void
panfrost_upload_viewport_offset_sysval(struct panfrost_batch *batch,
                                       struct sysval_uniform *uniform)
{
        struct panfrost_context *ctx = batch->ctx;
        const struct pipe_viewport_state *vp = &ctx->pipe_viewport;

        uniform->f[0] = vp->translate[0];
        uniform->f[1] = vp->translate[1];
        uniform->f[2] = vp->translate[2];
}

static void panfrost_upload_txs_sysval(struct panfrost_batch *batch,
                                       enum pipe_shader_type st,
                                       unsigned int sysvalid,
                                       struct sysval_uniform *uniform)
{
        struct panfrost_context *ctx = batch->ctx;
        unsigned texidx = PAN_SYSVAL_ID_TO_TXS_TEX_IDX(sysvalid);
        unsigned dim = PAN_SYSVAL_ID_TO_TXS_DIM(sysvalid);
        bool is_array = PAN_SYSVAL_ID_TO_TXS_IS_ARRAY(sysvalid);
        struct pipe_sampler_view *tex = &ctx->sampler_views[st][texidx]->base;

        assert(dim);
        uniform->i[0] = u_minify(tex->texture->width0, tex->u.tex.first_level);

        if (dim > 1)
                uniform->i[1] = u_minify(tex->texture->height0,
                                         tex->u.tex.first_level);

        if (dim > 2)
                uniform->i[2] = u_minify(tex->texture->depth0,
                                         tex->u.tex.first_level);

        if (is_array)
                uniform->i[dim] = tex->texture->array_size;
}

static void
panfrost_upload_ssbo_sysval(struct panfrost_batch *batch,
                            enum pipe_shader_type st,
                            unsigned ssbo_id,
                            struct sysval_uniform *uniform)
{
        struct panfrost_context *ctx = batch->ctx;

        assert(ctx->ssbo_mask[st] & (1 << ssbo_id));
        struct pipe_shader_buffer sb = ctx->ssbo[st][ssbo_id];

        /* Compute address */
        struct panfrost_bo *bo = pan_resource(sb.buffer)->bo;

        panfrost_batch_add_bo(batch, bo,
                              PAN_BO_ACCESS_SHARED | PAN_BO_ACCESS_RW |
                              panfrost_bo_access_for_stage(st));

        /* Upload address and size as sysval */
        uniform->du[0] = bo->gpu + sb.buffer_offset;
        uniform->u[2] = sb.buffer_size;
}

static void
panfrost_upload_sampler_sysval(struct panfrost_batch *batch,
                               enum pipe_shader_type st,
                               unsigned samp_idx,
                               struct sysval_uniform *uniform)
{
        struct panfrost_context *ctx = batch->ctx;
        struct pipe_sampler_state *sampl = &ctx->samplers[st][samp_idx]->base;

        uniform->f[0] = sampl->min_lod;
        uniform->f[1] = sampl->max_lod;
        uniform->f[2] = sampl->lod_bias;

        /* Even without any errata, Midgard represents "no mipmapping" as
         * fixing the LOD with the clamps; keep behaviour consistent. c.f.
         * panfrost_create_sampler_state which also explains our choice of
         * epsilon value (again to keep behaviour consistent) */

        if (sampl->min_mip_filter == PIPE_TEX_MIPFILTER_NONE)
                uniform->f[1] = uniform->f[0] + (1.0/256.0);
}

static void
panfrost_upload_num_work_groups_sysval(struct panfrost_batch *batch,
                                       struct sysval_uniform *uniform)
{
        struct panfrost_context *ctx = batch->ctx;

        uniform->u[0] = ctx->compute_grid->grid[0];
        uniform->u[1] = ctx->compute_grid->grid[1];
        uniform->u[2] = ctx->compute_grid->grid[2];
}

static void
panfrost_upload_sysvals(struct panfrost_batch *batch, void *buf,
                        struct panfrost_shader_state *ss,
                        enum pipe_shader_type st)
{
        struct sysval_uniform *uniforms = (void *)buf;

        for (unsigned i = 0; i < ss->sysval_count; ++i) {
                int sysval = ss->sysval[i];

                switch (PAN_SYSVAL_TYPE(sysval)) {
                case PAN_SYSVAL_VIEWPORT_SCALE:
                        panfrost_upload_viewport_scale_sysval(batch,
                                                              &uniforms[i]);
                        break;
                case PAN_SYSVAL_VIEWPORT_OFFSET:
                        panfrost_upload_viewport_offset_sysval(batch,
                                                               &uniforms[i]);
                        break;
                case PAN_SYSVAL_TEXTURE_SIZE:
                        panfrost_upload_txs_sysval(batch, st,
                                                   PAN_SYSVAL_ID(sysval),
                                                   &uniforms[i]);
                        break;
                case PAN_SYSVAL_SSBO:
                        panfrost_upload_ssbo_sysval(batch, st,
                                                    PAN_SYSVAL_ID(sysval),
                                                    &uniforms[i]);
                        break;
                case PAN_SYSVAL_NUM_WORK_GROUPS:
                        panfrost_upload_num_work_groups_sysval(batch,
                                                               &uniforms[i]);
                        break;
                case PAN_SYSVAL_SAMPLER:
                        panfrost_upload_sampler_sysval(batch, st,
                                                       PAN_SYSVAL_ID(sysval),
                                                       &uniforms[i]);
                        break;
                default:
                        assert(0);
                }
        }
}

static const void *
panfrost_map_constant_buffer_cpu(struct panfrost_constant_buffer *buf,
                                 unsigned index)
{
        struct pipe_constant_buffer *cb = &buf->cb[index];
        struct panfrost_resource *rsrc = pan_resource(cb->buffer);

        if (rsrc)
                return rsrc->bo->cpu;
        else if (cb->user_buffer)
                return cb->user_buffer;
        else
                unreachable("No constant buffer");
}

void
panfrost_emit_const_buf(struct panfrost_batch *batch,
                        enum pipe_shader_type stage,
                        struct mali_vertex_tiler_postfix *postfix)
{
        struct panfrost_context *ctx = batch->ctx;
        struct panfrost_shader_variants *all = ctx->shader[stage];

        if (!all)
                return;

        struct panfrost_constant_buffer *buf = &ctx->constant_buffer[stage];

        struct panfrost_shader_state *ss = &all->variants[all->active_variant];

        /* Uniforms are implicitly UBO #0 */
        bool has_uniforms = buf->enabled_mask & (1 << 0);

        /* Allocate room for the sysval and the uniforms */
        size_t sys_size = sizeof(float) * 4 * ss->sysval_count;
        size_t uniform_size = has_uniforms ? (buf->cb[0].buffer_size) : 0;
        size_t size = sys_size + uniform_size;
        struct panfrost_transfer transfer =
                panfrost_pool_alloc_aligned(&batch->pool, size, 16);

        /* Upload sysvals requested by the shader */
        panfrost_upload_sysvals(batch, transfer.cpu, ss, stage);

        /* Upload uniforms */
        if (has_uniforms && uniform_size) {
                const void *cpu = panfrost_map_constant_buffer_cpu(buf, 0);
                memcpy(transfer.cpu + sys_size, cpu, uniform_size);
        }

        /* Next up, attach UBOs. UBO #0 is the uniforms we just
         * uploaded, so it's always included. The count is the highest UBO
         * addressable -- gaps are included. */

        unsigned ubo_count = 32 - __builtin_clz(buf->enabled_mask | 1);

        size_t sz = MALI_UNIFORM_BUFFER_LENGTH * ubo_count;
        struct panfrost_transfer ubos =
                panfrost_pool_alloc_aligned(&batch->pool, sz,
                                MALI_UNIFORM_BUFFER_LENGTH);

        uint64_t *ubo_ptr = (uint64_t *) ubos.cpu;

        /* Upload uniforms as a UBO */

        if (size) {
                pan_pack(ubo_ptr, UNIFORM_BUFFER, cfg) {
                        cfg.entries = DIV_ROUND_UP(size, 16);
                        cfg.pointer = transfer.gpu;
                }
        } else {
                *ubo_ptr = 0;
        }

        /* The rest are honest-to-goodness UBOs */

        for (unsigned ubo = 1; ubo < ubo_count; ++ubo) {
                size_t usz = buf->cb[ubo].buffer_size;
                bool enabled = buf->enabled_mask & (1 << ubo);
                bool empty = usz == 0;

                if (!enabled || empty) {
                        ubo_ptr[ubo] = 0;
                        continue;
                }

                pan_pack(ubo_ptr + ubo, UNIFORM_BUFFER, cfg) {
                        cfg.entries = DIV_ROUND_UP(usz, 16);
                        cfg.pointer = panfrost_map_constant_buffer_gpu(batch,
                                        stage, buf, ubo);
                }
        }

        postfix->uniforms = transfer.gpu;
        postfix->uniform_buffers = ubos.gpu;

        buf->dirty_mask = 0;
}

void
panfrost_emit_shared_memory(struct panfrost_batch *batch,
                            const struct pipe_grid_info *info,
                            struct midgard_payload_vertex_tiler *vtp)
{
        struct panfrost_context *ctx = batch->ctx;
        struct panfrost_device *dev = pan_device(ctx->base.screen);
        struct panfrost_shader_variants *all = ctx->shader[PIPE_SHADER_COMPUTE];
        struct panfrost_shader_state *ss = &all->variants[all->active_variant];
        unsigned single_size = util_next_power_of_two(MAX2(ss->shared_size,
                                                           128));

        unsigned log2_instances =
                util_logbase2_ceil(info->grid[0]) +
                util_logbase2_ceil(info->grid[1]) +
                util_logbase2_ceil(info->grid[2]);

        unsigned shared_size = single_size * (1 << log2_instances) * dev->core_count;
        struct panfrost_bo *bo = panfrost_batch_get_shared_memory(batch,
                                                                  shared_size,
                                                                  1);

        struct mali_shared_memory shared = {
                .shared_memory = bo->gpu,
                .shared_workgroup_count = log2_instances,
                .shared_shift = util_logbase2(single_size) + 1
        };

        vtp->postfix.shared_memory = panfrost_pool_upload_aligned(&batch->pool, &shared,
                                                               sizeof(shared), 64);
}

static mali_ptr
panfrost_get_tex_desc(struct panfrost_batch *batch,
                      enum pipe_shader_type st,
                      struct panfrost_sampler_view *view)
{
        if (!view)
                return (mali_ptr) 0;

        struct pipe_sampler_view *pview = &view->base;
        struct panfrost_resource *rsrc = pan_resource(pview->texture);

        /* Add the BO to the job so it's retained until the job is done. */

        panfrost_batch_add_bo(batch, rsrc->bo,
                              PAN_BO_ACCESS_SHARED | PAN_BO_ACCESS_READ |
                              panfrost_bo_access_for_stage(st));

        panfrost_batch_add_bo(batch, view->bo,
                              PAN_BO_ACCESS_SHARED | PAN_BO_ACCESS_READ |
                              panfrost_bo_access_for_stage(st));

        return view->bo->gpu;
}

static void
panfrost_update_sampler_view(struct panfrost_sampler_view *view,
                             struct pipe_context *pctx)
{
        struct panfrost_resource *rsrc = pan_resource(view->base.texture);
        if (view->texture_bo != rsrc->bo->gpu ||
            view->modifier != rsrc->modifier) {
                panfrost_bo_unreference(view->bo);
                panfrost_create_sampler_view_bo(view, pctx, &rsrc->base);
        }
}

void
panfrost_emit_texture_descriptors(struct panfrost_batch *batch,
                                  enum pipe_shader_type stage,
                                  struct mali_vertex_tiler_postfix *postfix)
{
        struct panfrost_context *ctx = batch->ctx;
        struct panfrost_device *device = pan_device(ctx->base.screen);

        if (!ctx->sampler_view_count[stage])
                return;

        if (device->quirks & IS_BIFROST) {
                struct panfrost_transfer T = panfrost_pool_alloc_aligned(&batch->pool,
                                MALI_BIFROST_TEXTURE_LENGTH *
                                ctx->sampler_view_count[stage],
                                MALI_BIFROST_TEXTURE_LENGTH);

                struct mali_bifrost_texture_packed *out =
                        (struct mali_bifrost_texture_packed *) T.cpu;

                for (int i = 0; i < ctx->sampler_view_count[stage]; ++i) {
                        struct panfrost_sampler_view *view = ctx->sampler_views[stage][i];
                        struct pipe_sampler_view *pview = &view->base;
                        struct panfrost_resource *rsrc = pan_resource(pview->texture);

                        panfrost_update_sampler_view(view, &ctx->base);
                        out[i] = view->bifrost_descriptor;

                        /* Add the BOs to the job so they are retained until the job is done. */

                        panfrost_batch_add_bo(batch, rsrc->bo,
                                              PAN_BO_ACCESS_SHARED | PAN_BO_ACCESS_READ |
                                              panfrost_bo_access_for_stage(stage));

                        panfrost_batch_add_bo(batch, view->bo,
                                              PAN_BO_ACCESS_SHARED | PAN_BO_ACCESS_READ |
                                              panfrost_bo_access_for_stage(stage));
                }

                postfix->textures = T.gpu;
        } else {
                uint64_t trampolines[PIPE_MAX_SHADER_SAMPLER_VIEWS];

                for (int i = 0; i < ctx->sampler_view_count[stage]; ++i) {
                        struct panfrost_sampler_view *view = ctx->sampler_views[stage][i];

                        panfrost_update_sampler_view(view, &ctx->base);

                        trampolines[i] = panfrost_get_tex_desc(batch, stage, view);
                }

                postfix->textures = panfrost_pool_upload_aligned(&batch->pool,
                                                              trampolines,
                                                              sizeof(uint64_t) *
                                                              ctx->sampler_view_count[stage],
                                                              sizeof(uint64_t));
        }
}

void
panfrost_emit_sampler_descriptors(struct panfrost_batch *batch,
                                  enum pipe_shader_type stage,
                                  struct mali_vertex_tiler_postfix *postfix)
{
        struct panfrost_context *ctx = batch->ctx;

        if (!ctx->sampler_count[stage])
                return;

        size_t desc_size = MALI_BIFROST_SAMPLER_LENGTH;
        assert(MALI_BIFROST_SAMPLER_LENGTH == MALI_MIDGARD_SAMPLER_LENGTH);

        size_t sz = desc_size * ctx->sampler_count[stage];
        struct panfrost_transfer T = panfrost_pool_alloc_aligned(&batch->pool, sz, desc_size);
        struct mali_midgard_sampler_packed *out = (struct mali_midgard_sampler_packed *) T.cpu;

        for (unsigned i = 0; i < ctx->sampler_count[stage]; ++i)
                out[i] = ctx->samplers[stage][i]->hw;

        postfix->sampler_descriptor = T.gpu;
}

void
panfrost_emit_vertex_data(struct panfrost_batch *batch,
                          struct mali_vertex_tiler_postfix *vertex_postfix)
{
        struct panfrost_context *ctx = batch->ctx;
        struct panfrost_vertex_state *so = ctx->vertex;
        struct panfrost_shader_state *vs = panfrost_get_shader_state(ctx, PIPE_SHADER_VERTEX);

        unsigned instance_shift = vertex_postfix->instance_shift;
        unsigned instance_odd = vertex_postfix->instance_odd;

        /* Worst case: everything is NPOT, which is only possible if instancing
         * is enabled. Otherwise single record is gauranteed */
        bool could_npot = instance_shift || instance_odd;

        struct panfrost_transfer S = panfrost_pool_alloc_aligned(&batch->pool,
                        MALI_ATTRIBUTE_BUFFER_LENGTH * vs->attribute_count *
                        (could_npot ? 2 : 1),
                        MALI_ATTRIBUTE_BUFFER_LENGTH * 2);

        struct panfrost_transfer T = panfrost_pool_alloc_aligned(&batch->pool,
                        MALI_ATTRIBUTE_LENGTH * vs->attribute_count,
                        MALI_ATTRIBUTE_LENGTH);

        struct mali_attribute_buffer_packed *bufs =
                (struct mali_attribute_buffer_packed *) S.cpu;

        struct mali_attribute_packed *out =
                (struct mali_attribute_packed *) T.cpu;

        unsigned attrib_to_buffer[PIPE_MAX_ATTRIBS] = { 0 };
        unsigned k = 0;

        for (unsigned i = 0; i < so->num_elements; ++i) {
                /* We map buffers 1:1 with the attributes, which
                 * means duplicating some vertex buffers (who cares? aside from
                 * maybe some caching implications but I somehow doubt that
                 * matters) */

                struct pipe_vertex_element *elem = &so->pipe[i];
                unsigned vbi = elem->vertex_buffer_index;
                attrib_to_buffer[i] = k;

                if (!(ctx->vb_mask & (1 << vbi)))
                        continue;

                struct pipe_vertex_buffer *buf = &ctx->vertex_buffers[vbi];
                struct panfrost_resource *rsrc;

                rsrc = pan_resource(buf->buffer.resource);
                if (!rsrc)
                        continue;

                /* Add a dependency of the batch on the vertex buffer */
                panfrost_batch_add_bo(batch, rsrc->bo,
                                      PAN_BO_ACCESS_SHARED |
                                      PAN_BO_ACCESS_READ |
                                      PAN_BO_ACCESS_VERTEX_TILER);

                /* Mask off lower bits, see offset fixup below */
                mali_ptr raw_addr = rsrc->bo->gpu + buf->buffer_offset;
                mali_ptr addr = raw_addr & ~63;

                /* Since we advanced the base pointer, we shrink the buffer
                 * size, but add the offset we subtracted */
                unsigned size = rsrc->base.width0 + (raw_addr - addr)
                        - buf->buffer_offset;

                /* When there is a divisor, the hardware-level divisor is
                 * the product of the instance divisor and the padded count */
                unsigned divisor = elem->instance_divisor;
                unsigned hw_divisor = ctx->padded_count * divisor;
                unsigned stride = buf->stride;

                /* If there's a divisor(=1) but no instancing, we want every
                 * attribute to be the same */

                if (divisor && ctx->instance_count == 1)
                        stride = 0;

                if (!divisor || ctx->instance_count <= 1) {
                        pan_pack(bufs + k, ATTRIBUTE_BUFFER, cfg) {
                                if (ctx->instance_count > 1)
                                        cfg.type = MALI_ATTRIBUTE_TYPE_1D_MODULUS;

                                cfg.pointer = addr;
                                cfg.stride = stride;
                                cfg.size = size;
                                cfg.divisor_r = instance_shift;
                                cfg.divisor_p = instance_odd;
                        }
                } else if (util_is_power_of_two_or_zero(hw_divisor)) {
                        pan_pack(bufs + k, ATTRIBUTE_BUFFER, cfg) {
                                cfg.type = MALI_ATTRIBUTE_TYPE_1D_POT_DIVISOR;
                                cfg.pointer = addr;
                                cfg.stride = stride;
                                cfg.size = size;
                                cfg.divisor_r = __builtin_ctz(hw_divisor);
                        }

                } else {
                        unsigned shift = 0, extra_flags = 0;

                        unsigned magic_divisor =
                                panfrost_compute_magic_divisor(hw_divisor, &shift, &extra_flags);

                        pan_pack(bufs + k, ATTRIBUTE_BUFFER, cfg) {
                                cfg.type = MALI_ATTRIBUTE_TYPE_1D_NPOT_DIVISOR;
                                cfg.pointer = addr;
                                cfg.stride = stride;
                                cfg.size = size;

                                cfg.divisor_r = shift;
                                cfg.divisor_e = extra_flags;
                        }

                        pan_pack(bufs + k + 1, ATTRIBUTE_BUFFER_CONTINUATION_NPOT, cfg) {
                                cfg.divisor_numerator = magic_divisor;
                                cfg.divisor = divisor;
                        }

                        ++k;
                }

                ++k;
        }

        /* Add special gl_VertexID/gl_InstanceID buffers */

        if (unlikely(vs->attribute_count >= PAN_VERTEX_ID)) {
                panfrost_vertex_id(ctx->padded_count, &bufs[k], ctx->instance_count > 1);

                pan_pack(out + PAN_VERTEX_ID, ATTRIBUTE, cfg) {
                        cfg.buffer_index = k++;
                        cfg.format = so->formats[PAN_VERTEX_ID];
                }

                panfrost_instance_id(ctx->padded_count, &bufs[k], ctx->instance_count > 1);

                pan_pack(out + PAN_INSTANCE_ID, ATTRIBUTE, cfg) {
                        cfg.buffer_index = k++;
                        cfg.format = so->formats[PAN_INSTANCE_ID];
                }
        }

        /* Attribute addresses require 64-byte alignment, so let:
         *
         *      base' = base & ~63 = base - (base & 63)
         *      offset' = offset + (base & 63)
         *
         * Since base' + offset' = base + offset, these are equivalent
         * addressing modes and now base is 64 aligned.
         */

        unsigned start = vertex_postfix->offset_start;

        for (unsigned i = 0; i < so->num_elements; ++i) {
                unsigned vbi = so->pipe[i].vertex_buffer_index;
                struct pipe_vertex_buffer *buf = &ctx->vertex_buffers[vbi];

                /* Adjust by the masked off bits of the offset. Make sure we
                 * read src_offset from so->hw (which is not GPU visible)
                 * rather than target (which is) due to caching effects */

                unsigned src_offset = so->pipe[i].src_offset;

                /* BOs aligned to 4k so guaranteed aligned to 64 */
                src_offset += (buf->buffer_offset & 63);

                /* Also, somewhat obscurely per-instance data needs to be
                 * offset in response to a delayed start in an indexed draw */

                if (so->pipe[i].instance_divisor && ctx->instance_count > 1 && start)
                        src_offset -= buf->stride * start;

                pan_pack(out + i, ATTRIBUTE, cfg) {
                        cfg.buffer_index = attrib_to_buffer[i];
                        cfg.format = so->formats[i];
                        cfg.offset = src_offset;
                }
        }

        vertex_postfix->attributes = S.gpu;
        vertex_postfix->attribute_meta = T.gpu;
}

static mali_ptr
panfrost_emit_varyings(struct panfrost_batch *batch,
                struct mali_attribute_buffer_packed *slot,
                unsigned stride, unsigned count)
{
        unsigned size = stride * count;
        mali_ptr ptr = panfrost_pool_alloc_aligned(&batch->invisible_pool, size, 64).gpu;

        pan_pack(slot, ATTRIBUTE_BUFFER, cfg) {
                cfg.stride = stride;
                cfg.size = size;
                cfg.pointer = ptr;
        }

        return ptr;
}

static unsigned
panfrost_streamout_offset(unsigned stride, unsigned offset,
                        struct pipe_stream_output_target *target)
{
        return (target->buffer_offset + (offset * stride * 4)) & 63;
}

static void
panfrost_emit_streamout(struct panfrost_batch *batch,
                        struct mali_attribute_buffer_packed *slot,
                        unsigned stride_words, unsigned offset, unsigned count,
                        struct pipe_stream_output_target *target)
{
        unsigned stride = stride_words * 4;
        unsigned max_size = target->buffer_size;
        unsigned expected_size = stride * count;

        /* Grab the BO and bind it to the batch */
        struct panfrost_bo *bo = pan_resource(target->buffer)->bo;

        /* Varyings are WRITE from the perspective of the VERTEX but READ from
         * the perspective of the TILER and FRAGMENT.
         */
        panfrost_batch_add_bo(batch, bo,
                              PAN_BO_ACCESS_SHARED |
                              PAN_BO_ACCESS_RW |
                              PAN_BO_ACCESS_VERTEX_TILER |
                              PAN_BO_ACCESS_FRAGMENT);

        /* We will have an offset applied to get alignment */
        mali_ptr addr = bo->gpu + target->buffer_offset + (offset * stride);

        pan_pack(slot, ATTRIBUTE_BUFFER, cfg) {
                cfg.pointer = (addr & ~63);
                cfg.stride = stride;
                cfg.size = MIN2(max_size, expected_size) + (addr & 63);
        }
}

static bool
has_point_coord(unsigned mask, gl_varying_slot loc)
{
        if ((loc >= VARYING_SLOT_TEX0) && (loc <= VARYING_SLOT_TEX7))
                return (mask & (1 << (loc - VARYING_SLOT_TEX0)));
        else if (loc == VARYING_SLOT_PNTC)
                return (mask & (1 << 8));
        else
                return false;
}

/* Helpers for manipulating stream out information so we can pack varyings
 * accordingly. Compute the src_offset for a given captured varying */

static struct pipe_stream_output *
pan_get_so(struct pipe_stream_output_info *info, gl_varying_slot loc)
{
        for (unsigned i = 0; i < info->num_outputs; ++i) {
                if (info->output[i].register_index == loc)
                        return &info->output[i];
        }

        unreachable("Varying not captured");
}

static unsigned
pan_varying_size(enum mali_format fmt)
{
        unsigned type = MALI_EXTRACT_TYPE(fmt);
        unsigned chan = MALI_EXTRACT_CHANNELS(fmt);
        unsigned bits = MALI_EXTRACT_BITS(fmt);
        unsigned bpc = 0;

        if (bits == MALI_CHANNEL_FLOAT) {
                /* No doubles */
                bool fp16 = (type == MALI_FORMAT_SINT);
                assert(fp16 || (type == MALI_FORMAT_UNORM));

                bpc = fp16 ? 2 : 4;
        } else {
                assert(type >= MALI_FORMAT_SNORM && type <= MALI_FORMAT_SINT);

                /* See the enums */
                bits = 1 << bits;
                assert(bits >= 8);
                bpc = bits / 8;
        }

        return bpc * chan;
}

/* Indices for named (non-XFB) varyings that are present. These are packed
 * tightly so they correspond to a bitfield present (P) indexed by (1 <<
 * PAN_VARY_*). This has the nice property that you can lookup the buffer index
 * of a given special field given a shift S by:
 *
 *      idx = popcount(P & ((1 << S) - 1))
 *
 * That is... look at all of the varyings that come earlier and count them, the
 * count is the new index since plus one. Likewise, the total number of special
 * buffers required is simply popcount(P)
 */

enum pan_special_varying {
        PAN_VARY_GENERAL = 0,
        PAN_VARY_POSITION = 1,
        PAN_VARY_PSIZ = 2,
        PAN_VARY_PNTCOORD = 3,
        PAN_VARY_FACE = 4,
        PAN_VARY_FRAGCOORD = 5,

        /* Keep last */
        PAN_VARY_MAX,
};

/* Given a varying, figure out which index it correpsonds to */

static inline unsigned
pan_varying_index(unsigned present, enum pan_special_varying v)
{
        unsigned mask = (1 << v) - 1;
        return util_bitcount(present & mask);
}

/* Get the base offset for XFB buffers, which by convention come after
 * everything else. Wrapper function for semantic reasons; by construction this
 * is just popcount. */

static inline unsigned
pan_xfb_base(unsigned present)
{
        return util_bitcount(present);
}

/* Computes the present mask for varyings so we can start emitting varying records */

static inline unsigned
pan_varying_present(
        struct panfrost_shader_state *vs,
        struct panfrost_shader_state *fs,
        unsigned quirks)
{
        /* At the moment we always emit general and position buffers. Not
         * strictly necessary but usually harmless */

        unsigned present = (1 << PAN_VARY_GENERAL) | (1 << PAN_VARY_POSITION);

        /* Enable special buffers by the shader info */

        if (vs->writes_point_size)
                present |= (1 << PAN_VARY_PSIZ);

        if (fs->reads_point_coord)
                present |= (1 << PAN_VARY_PNTCOORD);

        if (fs->reads_face)
                present |= (1 << PAN_VARY_FACE);

        if (fs->reads_frag_coord && !(quirks & IS_BIFROST))
                present |= (1 << PAN_VARY_FRAGCOORD);

        /* Also, if we have a point sprite, we need a point coord buffer */

        for (unsigned i = 0; i < fs->varying_count; i++)  {
                gl_varying_slot loc = fs->varyings_loc[i];

                if (has_point_coord(fs->point_sprite_mask, loc))
                        present |= (1 << PAN_VARY_PNTCOORD);
        }

        return present;
}

/* Emitters for varying records */

static void
pan_emit_vary(struct mali_attribute_packed *out,
                unsigned present, enum pan_special_varying buf,
                unsigned quirks, enum mali_format format,
                unsigned offset)
{
        unsigned nr_channels = MALI_EXTRACT_CHANNELS(format);
        unsigned swizzle = quirks & HAS_SWIZZLES ?
                        panfrost_get_default_swizzle(nr_channels) :
                        panfrost_bifrost_swizzle(nr_channels);

        pan_pack(out, ATTRIBUTE, cfg) {
                cfg.buffer_index = pan_varying_index(present, buf);
                cfg.unknown = quirks & IS_BIFROST ? 0x0 : 0x1;
                cfg.format = (format << 12) | swizzle;
                cfg.offset = offset;
        }
}

/* General varying that is unused */

static void
pan_emit_vary_only(struct mali_attribute_packed *out,
                unsigned present, unsigned quirks)
{
        pan_emit_vary(out, present, 0, quirks, MALI_VARYING_DISCARD, 0);
}

/* Special records */

static const enum mali_format pan_varying_formats[PAN_VARY_MAX] = {
        [PAN_VARY_POSITION]     = MALI_VARYING_POS,
        [PAN_VARY_PSIZ]         = MALI_R16F,
        [PAN_VARY_PNTCOORD]     = MALI_R16F,
        [PAN_VARY_FACE]         = MALI_R32I,
        [PAN_VARY_FRAGCOORD]    = MALI_RGBA32F
};

static void
pan_emit_vary_special(struct mali_attribute_packed *out,
                unsigned present, enum pan_special_varying buf,
                unsigned quirks)
{
        assert(buf < PAN_VARY_MAX);
        pan_emit_vary(out, present, buf, quirks, pan_varying_formats[buf], 0);
}

static enum mali_format
pan_xfb_format(enum mali_format format, unsigned nr)
{
        if (MALI_EXTRACT_BITS(format) == MALI_CHANNEL_FLOAT)
                return MALI_R32F | MALI_NR_CHANNELS(nr);
        else
                return MALI_EXTRACT_TYPE(format) | MALI_NR_CHANNELS(nr) | MALI_CHANNEL_32;
}

/* Transform feedback records. Note struct pipe_stream_output is (if packed as
 * a bitfield) 32-bit, smaller than a 64-bit pointer, so may as well pass by
 * value. */

static void
pan_emit_vary_xfb(struct mali_attribute_packed *out,
                unsigned present,
                unsigned max_xfb,
                unsigned *streamout_offsets,
                unsigned quirks,
                enum mali_format format,
                struct pipe_stream_output o)
{
        unsigned swizzle = quirks & HAS_SWIZZLES ?
                        panfrost_get_default_swizzle(o.num_components) :
                        panfrost_bifrost_swizzle(o.num_components);

        pan_pack(out, ATTRIBUTE, cfg) {
                /* XFB buffers come after everything else */
                cfg.buffer_index = pan_xfb_base(present) + o.output_buffer;
                cfg.unknown = quirks & IS_BIFROST ? 0x0 : 0x1;

                /* Override number of channels and precision to highp */
                cfg.format = (pan_xfb_format(format, o.num_components) << 12) | swizzle;

                /* Apply given offsets together */
                cfg.offset = (o.dst_offset * 4) /* dwords */
                        + streamout_offsets[o.output_buffer];
        }
}

/* Determine if we should capture a varying for XFB. This requires actually
 * having a buffer for it. If we don't capture it, we'll fallback to a general
 * varying path (linked or unlinked, possibly discarding the write) */

static bool
panfrost_xfb_captured(struct panfrost_shader_state *xfb,
                unsigned loc, unsigned max_xfb)
{
        if (!(xfb->so_mask & (1ll << loc)))
                return false;

        struct pipe_stream_output *o = pan_get_so(&xfb->stream_output, loc);
        return o->output_buffer < max_xfb;
}

static void
pan_emit_general_varying(struct mali_attribute_packed *out,
                struct panfrost_shader_state *other,
                struct panfrost_shader_state *xfb,
                gl_varying_slot loc,
                enum mali_format format,
                unsigned present,
                unsigned quirks,
                unsigned *gen_offsets,
                enum mali_format *gen_formats,
                unsigned *gen_stride,
                unsigned idx,
                bool should_alloc)
{
        /* Check if we're linked */
        signed other_idx = -1;

        for (unsigned j = 0; j < other->varying_count; ++j) {
                if (other->varyings_loc[j] == loc) {
                        other_idx = j;
                        break;
                }
        }

        if (other_idx < 0) {
                pan_emit_vary_only(out, present, quirks);
                return;
        }

        unsigned offset = gen_offsets[other_idx];

        if (should_alloc) {
                /* We're linked, so allocate a space via a watermark allocation */
                enum mali_format alt = other->varyings[other_idx];

                /* Do interpolation at minimum precision */
                unsigned size_main = pan_varying_size(format);
                unsigned size_alt = pan_varying_size(alt);
                unsigned size = MIN2(size_main, size_alt);

                /* If a varying is marked for XFB but not actually captured, we
                 * should match the format to the format that would otherwise
                 * be used for XFB, since dEQP checks for invariance here. It's
                 * unclear if this is required by the spec. */

                if (xfb->so_mask & (1ull << loc)) {
                        struct pipe_stream_output *o = pan_get_so(&xfb->stream_output, loc);
                        format = pan_xfb_format(format, o->num_components);
                        size = pan_varying_size(format);
                } else if (size == size_alt) {
                        format = alt;
                }

                gen_offsets[idx] = *gen_stride;
                gen_formats[other_idx] = format;
                offset = *gen_stride;
                *gen_stride += size;
        }

        pan_emit_vary(out, present, PAN_VARY_GENERAL, quirks, format, offset);
}

/* Higher-level wrapper around all of the above, classifying a varying into one
 * of the above types */

static void
panfrost_emit_varying(
                struct mali_attribute_packed *out,
                struct panfrost_shader_state *stage,
                struct panfrost_shader_state *other,
                struct panfrost_shader_state *xfb,
                unsigned present,
                unsigned max_xfb,
                unsigned *streamout_offsets,
                unsigned quirks,
                unsigned *gen_offsets,
                enum mali_format *gen_formats,
                unsigned *gen_stride,
                unsigned idx,
                bool should_alloc,
                bool is_fragment)
{
        gl_varying_slot loc = stage->varyings_loc[idx];
        enum mali_format format = stage->varyings[idx];

        /* Override format to match linkage */
        if (!should_alloc && gen_formats[idx])
                format = gen_formats[idx];

        if (has_point_coord(stage->point_sprite_mask, loc)) {
                pan_emit_vary_special(out, present, PAN_VARY_PNTCOORD, quirks);
        } else if (panfrost_xfb_captured(xfb, loc, max_xfb)) {
                struct pipe_stream_output *o = pan_get_so(&xfb->stream_output, loc);
                pan_emit_vary_xfb(out, present, max_xfb, streamout_offsets, quirks, format, *o);
        } else if (loc == VARYING_SLOT_POS) {
                if (is_fragment)
                        pan_emit_vary_special(out, present, PAN_VARY_FRAGCOORD, quirks);
                else
                        pan_emit_vary_special(out, present, PAN_VARY_POSITION, quirks);
        } else if (loc == VARYING_SLOT_PSIZ) {
                pan_emit_vary_special(out, present, PAN_VARY_PSIZ, quirks);
        } else if (loc == VARYING_SLOT_PNTC) {
                pan_emit_vary_special(out, present, PAN_VARY_PNTCOORD, quirks);
        } else if (loc == VARYING_SLOT_FACE) {
                pan_emit_vary_special(out, present, PAN_VARY_FACE, quirks);
        } else {
                pan_emit_general_varying(out, other, xfb, loc, format, present,
                                quirks, gen_offsets, gen_formats, gen_stride,
                                idx, should_alloc);
        }
}

static void
pan_emit_special_input(struct mali_attribute_buffer_packed *out,
                unsigned present,
                enum pan_special_varying v,
                unsigned special)
{
        if (present & (1 << v)) {
                unsigned idx = pan_varying_index(present, v);

                pan_pack(out + idx, ATTRIBUTE_BUFFER, cfg) {
                        cfg.special = special;
                        cfg.type = 0;
                }
        }
}

void
panfrost_emit_varying_descriptor(struct panfrost_batch *batch,
                                 unsigned vertex_count,
                                 struct mali_vertex_tiler_postfix *vertex_postfix,
                                 struct mali_vertex_tiler_postfix *tiler_postfix,
                                 union midgard_primitive_size *primitive_size)
{
        /* Load the shaders */
        struct panfrost_context *ctx = batch->ctx;
        struct panfrost_device *dev = pan_device(ctx->base.screen);
        struct panfrost_shader_state *vs, *fs;
        size_t vs_size, fs_size;

        /* Allocate the varying descriptor */

        vs = panfrost_get_shader_state(ctx, PIPE_SHADER_VERTEX);
        fs = panfrost_get_shader_state(ctx, PIPE_SHADER_FRAGMENT);
        vs_size = MALI_ATTRIBUTE_LENGTH * vs->varying_count;
        fs_size = MALI_ATTRIBUTE_LENGTH * fs->varying_count;

        struct panfrost_transfer trans = panfrost_pool_alloc_aligned(
                        &batch->pool, vs_size + fs_size, MALI_ATTRIBUTE_LENGTH);

        struct pipe_stream_output_info *so = &vs->stream_output;
        unsigned present = pan_varying_present(vs, fs, dev->quirks);

        /* Check if this varying is linked by us. This is the case for
         * general-purpose, non-captured varyings. If it is, link it. If it's
         * not, use the provided stream out information to determine the
         * offset, since it was already linked for us. */

        unsigned gen_offsets[32];
        enum mali_format gen_formats[32];
        memset(gen_offsets, 0, sizeof(gen_offsets));
        memset(gen_formats, 0, sizeof(gen_formats));

        unsigned gen_stride = 0;
        assert(vs->varying_count < ARRAY_SIZE(gen_offsets));
        assert(fs->varying_count < ARRAY_SIZE(gen_offsets));

        unsigned streamout_offsets[32];

        for (unsigned i = 0; i < ctx->streamout.num_targets; ++i) {
                streamout_offsets[i] = panfrost_streamout_offset(
                                        so->stride[i],
                                        ctx->streamout.offsets[i],
                                        ctx->streamout.targets[i]);
        }

        struct mali_attribute_packed *ovs = (struct mali_attribute_packed *)trans.cpu;
        struct mali_attribute_packed *ofs = ovs + vs->varying_count;

        for (unsigned i = 0; i < vs->varying_count; i++) {
                panfrost_emit_varying(ovs + i, vs, fs, vs, present,
                                ctx->streamout.num_targets, streamout_offsets,
                                dev->quirks,
                                gen_offsets, gen_formats, &gen_stride, i, true, false);
        }

        for (unsigned i = 0; i < fs->varying_count; i++) {
                panfrost_emit_varying(ofs + i, fs, vs, vs, present,
                                ctx->streamout.num_targets, streamout_offsets,
                                dev->quirks,
                                gen_offsets, gen_formats, &gen_stride, i, false, true);
        }

        unsigned xfb_base = pan_xfb_base(present);
        struct panfrost_transfer T = panfrost_pool_alloc_aligned(&batch->pool,
                        MALI_ATTRIBUTE_BUFFER_LENGTH * (xfb_base + ctx->streamout.num_targets),
                        MALI_ATTRIBUTE_BUFFER_LENGTH * 2);
        struct mali_attribute_buffer_packed *varyings =
                (struct mali_attribute_buffer_packed *) T.cpu;

        /* Emit the stream out buffers */

        unsigned out_count = u_stream_outputs_for_vertices(ctx->active_prim,
                                                           ctx->vertex_count);

        for (unsigned i = 0; i < ctx->streamout.num_targets; ++i) {
                panfrost_emit_streamout(batch, &varyings[xfb_base + i],
                                        so->stride[i],
                                        ctx->streamout.offsets[i],
                                        out_count,
                                        ctx->streamout.targets[i]);
        }

        panfrost_emit_varyings(batch,
                        &varyings[pan_varying_index(present, PAN_VARY_GENERAL)],
                        gen_stride, vertex_count);

        /* fp32 vec4 gl_Position */
        tiler_postfix->position_varying = panfrost_emit_varyings(batch,
                        &varyings[pan_varying_index(present, PAN_VARY_POSITION)],
                        sizeof(float) * 4, vertex_count);

        if (present & (1 << PAN_VARY_PSIZ)) {
                primitive_size->pointer = panfrost_emit_varyings(batch,
                                &varyings[pan_varying_index(present, PAN_VARY_PSIZ)],
                                2, vertex_count);
        }

        pan_emit_special_input(varyings, present, PAN_VARY_PNTCOORD, MALI_ATTRIBUTE_SPECIAL_POINT_COORD);
        pan_emit_special_input(varyings, present, PAN_VARY_FACE, MALI_ATTRIBUTE_SPECIAL_FRONT_FACING);
        pan_emit_special_input(varyings, present, PAN_VARY_FRAGCOORD, MALI_ATTRIBUTE_SPECIAL_FRAG_COORD);

        vertex_postfix->varyings = T.gpu;
        tiler_postfix->varyings = T.gpu;

        vertex_postfix->varying_meta = trans.gpu;
        tiler_postfix->varying_meta = trans.gpu + vs_size;
}

void
panfrost_emit_vertex_tiler_jobs(struct panfrost_batch *batch,
                                struct mali_vertex_tiler_prefix *vertex_prefix,
                                struct mali_vertex_tiler_postfix *vertex_postfix,
                                struct mali_vertex_tiler_prefix *tiler_prefix,
                                struct mali_vertex_tiler_postfix *tiler_postfix,
                                union midgard_primitive_size *primitive_size)
{
        struct panfrost_context *ctx = batch->ctx;
        struct panfrost_device *device = pan_device(ctx->base.screen);
        bool wallpapering = ctx->wallpaper_batch && batch->scoreboard.tiler_dep;
        struct bifrost_payload_vertex bifrost_vertex = {0,};
        struct bifrost_payload_tiler bifrost_tiler = {0,};
        struct midgard_payload_vertex_tiler midgard_vertex = {0,};
        struct midgard_payload_vertex_tiler midgard_tiler = {0,};
        void *vp, *tp;
        size_t vp_size, tp_size;

        if (device->quirks & IS_BIFROST) {
                bifrost_vertex.prefix = *vertex_prefix;
                bifrost_vertex.postfix = *vertex_postfix;
                vp = &bifrost_vertex;
                vp_size = sizeof(bifrost_vertex);

                bifrost_tiler.prefix = *tiler_prefix;
                bifrost_tiler.tiler.primitive_size = *primitive_size;
                bifrost_tiler.tiler.tiler_meta = panfrost_batch_get_tiler_meta(batch, ~0);
                bifrost_tiler.postfix = *tiler_postfix;
                tp = &bifrost_tiler;
                tp_size = sizeof(bifrost_tiler);
        } else {
                midgard_vertex.prefix = *vertex_prefix;
                midgard_vertex.postfix = *vertex_postfix;
                vp = &midgard_vertex;
                vp_size = sizeof(midgard_vertex);

                midgard_tiler.prefix = *tiler_prefix;
                midgard_tiler.postfix = *tiler_postfix;
                midgard_tiler.primitive_size = *primitive_size;
                tp = &midgard_tiler;
                tp_size = sizeof(midgard_tiler);
        }

        if (wallpapering) {
                /* Inject in reverse order, with "predicted" job indices.
                 * THIS IS A HACK XXX */
                panfrost_new_job(&batch->pool, &batch->scoreboard, MALI_JOB_TYPE_TILER, false,
                                 batch->scoreboard.job_index + 2, tp, tp_size, true);
                panfrost_new_job(&batch->pool, &batch->scoreboard, MALI_JOB_TYPE_VERTEX, false, 0,
                                 vp, vp_size, true);
                return;
        }

        /* If rasterizer discard is enable, only submit the vertex */

        unsigned vertex = panfrost_new_job(&batch->pool, &batch->scoreboard, MALI_JOB_TYPE_VERTEX, false, 0,
                                           vp, vp_size, false);

        if (ctx->rasterizer->base.rasterizer_discard)
                return;

        panfrost_new_job(&batch->pool, &batch->scoreboard, MALI_JOB_TYPE_TILER, false, vertex, tp, tp_size,
                         false);
}

/* TODO: stop hardcoding this */
mali_ptr
panfrost_emit_sample_locations(struct panfrost_batch *batch)
{
        uint16_t locations[] = {
            128, 128,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            0, 256,
            128, 128,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
            0, 0,
        };

        return panfrost_pool_upload_aligned(&batch->pool, locations, 96 * sizeof(uint16_t), 64);
}
