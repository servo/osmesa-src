
#include "nir.h"
#include "nir_search.h"

#ifndef NIR_OPT_ALGEBRAIC_STRUCT_DEFS
#define NIR_OPT_ALGEBRAIC_STRUCT_DEFS

struct transform {
   const nir_search_expression *search;
   const nir_search_value *replace;
   unsigned condition_offset;
};

#endif

   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search109_0 = {
   { nir_search_value_variable, 32 },
   0, /* a */
   false,
   nir_type_bool32,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search109_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search109 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search109_0.value, &search109_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace109_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace109 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &replace109_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search119_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search119_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search119 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search119_0.value, &search119_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace119 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search120_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search120_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x1 /* -1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search120 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search120_0.value, &search120_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace120 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search121_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search121_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search121 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search121_0.value, &search121_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace121 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search129_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search129_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search129_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search129_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search129_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search129_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search129 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search129_0.value, &search129_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace129_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace129_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace129_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &replace129_0_0.value, &replace129_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace129 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &replace129_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search137_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff /* 255 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search137_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search137_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x18 /* 24 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search137_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search137_1_0.value, &search137_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search137 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search137_0.value, &search137_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace137_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace137_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x18 /* 24 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace137 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &replace137_0.value, &replace137_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search138_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xffff /* 65535 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search138_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search138_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search138_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search138_1_0.value, &search138_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search138 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search138_0.value, &search138_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace138_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace138_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace138 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &replace138_0.value, &replace138_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search183_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff /* 255 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search183_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search183_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search183_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search183_1_0.value, &search183_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search183 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search183_0.value, &search183_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace183_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace183_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x2 /* 2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace183 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &replace183_0.value, &replace183_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search184_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff /* 255 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search184_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search184_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search184_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search184_1_0.value, &search184_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search184 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search184_0.value, &search184_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace184_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace184_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace184 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &replace184_0.value, &replace184_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search185_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff /* 255 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search185_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search185 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search185_0.value, &search185_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace185_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace185_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace185 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &replace185_0.value, &replace185_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search187_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xffff /* 65535 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search187_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search187 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search187_0.value, &search187_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace187_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace187_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace187 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u16,
   { &replace187_0.value, &replace187_1.value },
};

static const struct transform nir_opt_algebraic_iand_xforms[] = {
   { &search109, &replace109.value, 0 },
   { &search119, &replace119.value, 0 },
   { &search120, &replace120.value, 0 },
   { &search121, &replace121.value, 0 },
   { &search129, &replace129.value, 0 },
   { &search137, &replace137.value, 0 },
   { &search138, &replace138.value, 0 },
   { &search183, &replace183.value, 17 },
   { &search184, &replace184.value, 17 },
   { &search185, &replace185.value, 17 },
   { &search187, &replace187.value, 18 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search175_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search175_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2i,
   { &search175_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search175 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_i2b,
   { &search175_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace175 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search178_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search178_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search178_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search178 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_i2b,
   { &search178_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace178_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace178 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_i2b,
   { &replace178_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search179_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search179_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &search179_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search179 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_i2b,
   { &search179_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace179_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace179 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_i2b,
   { &replace179_0.value },
};

static const struct transform nir_opt_algebraic_i2b_xforms[] = {
   { &search175, &replace175.value, 0 },
   { &search178, &replace178.value, 0 },
   { &search179, &replace179.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search126_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search126_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search126 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ixor,
   { &search126_0.value, &search126_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace126 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search127_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search127_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search127 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ixor,
   { &search127_0.value, &search127_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace127 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_ixor_xforms[] = {
   { &search126, &replace126.value, 0 },
   { &search127, &replace127.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search102_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search102_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search102 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_seq,
   { &search102_0.value, &search102_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace102_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace102_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace102_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace102_0_0.value, &replace102_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace102 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &replace102_0.value },
};

static const struct transform nir_opt_algebraic_seq_xforms[] = {
   { &search102, &replace102.value, 11 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search112_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search112_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search112 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &search112_0.value, &search112_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace112 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_FALSE /* False */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search237_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search237_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search237_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search237_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search237_0_0.value, &search237_0_1.value, &search237_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search237_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search237 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &search237_0.value, &search237_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace237_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace237_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace237_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace237_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &replace237_1_0.value, &replace237_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace237_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace237_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace237_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &replace237_2_0.value, &replace237_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace237 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace237_0.value, &replace237_1.value, &replace237_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search238_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search238_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search238_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search238_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search238_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search238_1_0.value, &search238_1_1.value, &search238_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search238 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &search238_0.value, &search238_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace238_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace238_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace238_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace238_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &replace238_1_0.value, &replace238_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace238_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace238_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace238_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &replace238_2_0.value, &replace238_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace238 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace238_0.value, &replace238_1.value, &replace238_2.value },
};

static const struct transform nir_opt_algebraic_ilt_xforms[] = {
   { &search112, &replace112.value, 0 },
   { &search237, &replace237.value, 0 },
   { &search238, &replace238.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search4_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search4_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search4 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umod,
   { &search4_0.value, &search4_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace4 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search9_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search9_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   (is_pos_power_of_two),
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search9 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umod,
   { &search9_0.value, &search9_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace9_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace9_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace9_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace9_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &replace9_1_0.value, &replace9_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace9 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &replace9_0.value, &replace9_1.value },
};

static const struct transform nir_opt_algebraic_umod_xforms[] = {
   { &search4, &replace4.value, 0 },
   { &search9, &replace9.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search0_1 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   true,
   nir_type_invalid,
   (is_pos_power_of_two),
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search0_0.value, &search0_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace0_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_find_lsb,
   { &replace0_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace0_0.value, &replace0_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search1_1 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   true,
   nir_type_invalid,
   (is_neg_power_of_two),
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search1_0.value, &search1_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace1_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace1_0_1_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace1_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &replace1_0_1_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace1_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_find_lsb,
   { &replace1_0_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace1_0_0.value, &replace1_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &replace1_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search30_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search30_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search30 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search30_0.value, &search30_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace30 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search34_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search34_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search34 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search34_0.value, &search34_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace34 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search36_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search36_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x1 /* -1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search36 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search36_0.value, &search36_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace36_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace36 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &replace36_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search106_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search106_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2i,
   { &search106_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search106_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search106_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2i,
   { &search106_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search106 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search106_0.value, &search106_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace106_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace106_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace106_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &replace106_0_0.value, &replace106_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace106 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2i,
   { &replace106_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search201_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search201_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search201_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search201_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search201 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search201_0.value, &search201_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace201_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace201_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace201_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace201_0_0.value, &replace201_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace201 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &replace201_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search203_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search203_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search203_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search203_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search203_1_0.value, &search203_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search203 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search203_0.value, &search203_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace203_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace203_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace203_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace203_0_0.value, &replace203_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace203_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace203 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace203_0.value, &replace203_1.value },
};

static const struct transform nir_opt_algebraic_imul_xforms[] = {
   { &search0, &replace0.value, 0 },
   { &search1, &replace1.value, 0 },
   { &search30, &replace30.value, 0 },
   { &search34, &replace34.value, 0 },
   { &search36, &replace36.value, 0 },
   { &search106, &replace106.value, 0 },
   { &search201, &replace201.value, 0 },
   { &search203, &replace203.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search117_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search117_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search117 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_uge,
   { &search117_0.value, &search117_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace117 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search247_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search247_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search247_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search247_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search247_0_0.value, &search247_0_1.value, &search247_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search247_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search247 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_uge,
   { &search247_0.value, &search247_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace247_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace247_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace247_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace247_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_uge,
   { &replace247_1_0.value, &replace247_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace247_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace247_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace247_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_uge,
   { &replace247_2_0.value, &replace247_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace247 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace247_0.value, &replace247_1.value, &replace247_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search248_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search248_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search248_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search248_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search248_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search248_1_0.value, &search248_1_1.value, &search248_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search248 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_uge,
   { &search248_0.value, &search248_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace248_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace248_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace248_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace248_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_uge,
   { &replace248_1_0.value, &replace248_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace248_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace248_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace248_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_uge,
   { &replace248_2_0.value, &replace248_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace248 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace248_0.value, &replace248_1.value, &replace248_2.value },
};

static const struct transform nir_opt_algebraic_uge_xforms[] = {
   { &search117, &replace117.value, 0 },
   { &search247, &replace247.value, 0 },
   { &search248, &replace248.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search11_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search11_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search11_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search11 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search11_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace11 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search195_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search195 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search195_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace195_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace195_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace195 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &replace195_0.value, &replace195_1.value },
};

static const struct transform nir_opt_algebraic_ineg_xforms[] = {
   { &search11, &replace11.value, 0 },
   { &search195, &replace195.value, 20 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search29_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search29_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search29 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fmul,
   { &search29_0.value, &search29_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace29 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search33_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search33_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search33 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search33_0.value, &search33_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace33 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search35_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search35_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0xbff0000000000000L /* -1.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search35 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search35_0.value, &search35_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace35_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace35 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace35_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search107_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search107_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search107_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search107_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search107_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search107_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search107 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search107_0.value, &search107_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace107_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace107_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace107_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &replace107_0_0.value, &replace107_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace107 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &replace107_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search157_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search157_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &search157_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search157_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search157_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &search157_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search157 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fmul,
   { &search157_0.value, &search157_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace157_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace157_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace157_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace157_0_0.value, &replace157_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace157 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &replace157_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search200_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search200_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search200_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search200_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search200 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search200_0.value, &search200_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace200_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace200_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace200_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace200_0_0.value, &replace200_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace200 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace200_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search202_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search202_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search202_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search202_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search202_1_0.value, &search202_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search202 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fmul,
   { &search202_0.value, &search202_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace202_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace202_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace202_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace202_0_0.value, &replace202_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace202_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace202 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace202_0.value, &replace202_1.value },
};

static const struct transform nir_opt_algebraic_fmul_xforms[] = {
   { &search29, &replace29.value, 0 },
   { &search33, &replace33.value, 0 },
   { &search35, &replace35.value, 0 },
   { &search107, &replace107.value, 0 },
   { &search157, &replace157.value, 0 },
   { &search200, &replace200.value, 0 },
   { &search202, &replace202.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search213_0 = {
   { nir_search_value_variable, 0 },
   0, /* value */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search213_1 = {
   { nir_search_value_variable, 0 },
   1, /* offset */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search213_2 = {
   { nir_search_value_variable, 0 },
   2, /* bits */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search213 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ubitfield_extract,
   { &search213_0.value, &search213_1.value, &search213_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace213_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1f /* 31 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace213_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* bits */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace213_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &replace213_0_0.value, &replace213_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace213_1 = {
   { nir_search_value_variable, 0 },
   0, /* value */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace213_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* value */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace213_2_1 = {
   { nir_search_value_variable, 0 },
   1, /* offset */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace213_2_2 = {
   { nir_search_value_variable, 0 },
   2, /* bits */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace213_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ubfe,
   { &replace213_2_0.value, &replace213_2_1.value, &replace213_2_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace213 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace213_0.value, &replace213_1.value, &replace213_2.value },
};

static const struct transform nir_opt_algebraic_ubitfield_extract_xforms[] = {
   { &search213, &replace213.value, 26 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search37_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search37_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search37_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search37 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_ffma,
   { &search37_0.value, &search37_1.value, &search37_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace37 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search38_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search38_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search38_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search38 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_ffma,
   { &search38_0.value, &search38_1.value, &search38_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace38 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search39_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search39_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search39_2 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search39 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_ffma,
   { &search39_0.value, &search39_1.value, &search39_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace39_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace39_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace39 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace39_0.value, &replace39_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search40_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search40_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search40_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search40 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ffma,
   { &search40_0.value, &search40_1.value, &search40_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace40_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace40_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace40 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace40_0.value, &replace40_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search41_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search41_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search41_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search41 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ffma,
   { &search41_0.value, &search41_1.value, &search41_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace41_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace41_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace41 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace41_0.value, &replace41_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search56_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search56_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search56_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search56 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ffma,
   { &search56_0.value, &search56_1.value, &search56_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace56_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace56_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace56_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace56_0_0.value, &replace56_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace56_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace56 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace56_0.value, &replace56_1.value },
};

static const struct transform nir_opt_algebraic_ffma_xforms[] = {
   { &search37, &replace37.value, 0 },
   { &search38, &replace38.value, 0 },
   { &search39, &replace39.value, 0 },
   { &search40, &replace40.value, 0 },
   { &search41, &replace41.value, 0 },
   { &search56, &replace56.value, 7 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search80_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search80_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search80 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umin,
   { &search80_0.value, &search80_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace80 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search88_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search88_0_0_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search88_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umax,
   { &search88_0_0_0_0.value, &search88_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search88_0_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search88_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umin,
   { &search88_0_0_0.value, &search88_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search88_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search88_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umax,
   { &search88_0_0.value, &search88_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search88_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search88 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umin,
   { &search88_0.value, &search88_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace88_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace88_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace88_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umax,
   { &replace88_0_0.value, &replace88_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace88_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace88 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umin,
   { &replace88_0.value, &replace88_1.value },
};

static const struct transform nir_opt_algebraic_umin_xforms[] = {
   { &search80, &replace80.value, 0 },
   { &search88, &replace88.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search81_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search81_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search81 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umax,
   { &search81_0.value, &search81_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace81 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_umax_xforms[] = {
   { &search81, &replace81.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search71_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search71_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search71_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search71_0_0.value, &search71_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search71_1 = {
   { nir_search_value_variable, 0 },
   0, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search71_2 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search71 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search71_0.value, &search71_1.value, &search71_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace71_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace71_1 = {
   { nir_search_value_variable, 0 },
   0, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace71 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace71_0.value, &replace71_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search72_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search72_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search72_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search72_0_0.value, &search72_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search72_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search72_2 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search72 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search72_0.value, &search72_1.value, &search72_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace72_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace72_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace72 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace72_0.value, &replace72_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search73_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search73_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search73_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search73_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search73_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search73 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search73_0.value, &search73_1.value, &search73_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace73_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace73_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace73_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace73 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace73_0.value, &replace73_1.value, &replace73_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search74_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search74_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search74_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search74_1_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search74_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search74_1_0.value, &search74_1_1.value, &search74_1_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search74_2 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search74 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search74_0.value, &search74_1.value, &search74_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace74_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace74_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace74_2 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace74 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace74_0.value, &replace74_1.value, &replace74_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search75_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search75_1 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search75_2 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   false,
   nir_type_bool32,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search75 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search75_0.value, &search75_1.value, &search75_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace75_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace75_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace75 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &replace75_0.value, &replace75_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search168_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search168_1 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search168_2 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_FALSE /* False */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search168 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search168_0.value, &search168_1.value, &search168_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace168 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search169_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search169_1 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_FALSE /* False */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search169_2 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search169 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search169_0.value, &search169_1.value, &search169_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace169_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace169 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &replace169_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search170_0 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search170_1 = {
   { nir_search_value_variable, 0 },
   0, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search170_2 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search170 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search170_0.value, &search170_1.value, &search170_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace170 = {
   { nir_search_value_variable, 0 },
   0, /* b */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search171_0 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_FALSE /* False */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search171_1 = {
   { nir_search_value_variable, 0 },
   0, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search171_2 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search171 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search171_0.value, &search171_1.value, &search171_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace171 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search172_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search172_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search172_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search172 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search172_0.value, &search172_1.value, &search172_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace172_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace172_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace172_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &replace172_0_0.value, &replace172_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace172_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace172_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace172 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace172_0.value, &replace172_1.value, &replace172_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search173_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search173_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search173_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search173 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search173_0.value, &search173_1.value, &search173_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace173 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_bcsel_xforms[] = {
   { &search71, &replace71.value, 0 },
   { &search72, &replace72.value, 0 },
   { &search73, &replace73.value, 0 },
   { &search74, &replace74.value, 0 },
   { &search75, &replace75.value, 0 },
   { &search168, &replace168.value, 0 },
   { &search169, &replace169.value, 0 },
   { &search170, &replace170.value, 0 },
   { &search171, &replace171.value, 0 },
   { &search172, &replace172.value, 0 },
   { &search173, &replace173.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search101_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search101_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search101 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_sge,
   { &search101_0.value, &search101_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace101_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace101_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace101_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace101_0_0.value, &replace101_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace101 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &replace101_0.value },
};

static const struct transform nir_opt_algebraic_sge_xforms[] = {
   { &search101, &replace101.value, 11 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search150_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search150_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &search150_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search150 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fsqrt,
   { &search150_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace150_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3fe0000000000000 /* 0.5 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace150_0_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace150_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace150_0_0.value, &replace150_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace150 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &replace150_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search162_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search162 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsqrt,
   { &search162_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace162_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace162_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frsq,
   { &replace162_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace162 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frcp,
   { &replace162_0.value },
};

static const struct transform nir_opt_algebraic_fsqrt_xforms[] = {
   { &search150, &replace150.value, 0 },
   { &search162, &replace162.value, 15 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search18_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search18_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search18 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search18_0.value, &search18_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace18 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search22_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search22_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search22_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search22_0_0.value, &search22_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search22_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search22_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search22_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search22_1_0.value, &search22_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search22 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search22_0.value, &search22_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace22_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace22_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace22_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace22_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace22_1_0.value, &replace22_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace22 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace22_0.value, &replace22_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search24_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search24_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search24_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search24_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search24 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search24_0.value, &search24_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace24 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search25_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search25_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search25_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search25_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search25_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search25_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search25_1_0.value, &search25_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search25 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search25_0.value, &search25_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace25 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search26_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search26_1_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search26_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search26_1_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search26_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search26_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search26_1_0.value, &search26_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search26 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search26_0.value, &search26_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace26 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search197_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search197_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search197_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search197_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &search197_1_0.value, &search197_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search197 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search197_0.value, &search197_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace197_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace197_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace197 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &replace197_0.value, &replace197_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search205_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search205_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search205_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search205_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search205_1_0.value, &search205_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search205 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search205_0.value, &search205_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace205_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace205_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace205_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace205_0_0.value, &replace205_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace205_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace205 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace205_0.value, &replace205_1.value },
};

static const struct transform nir_opt_algebraic_iadd_xforms[] = {
   { &search18, &replace18.value, 0 },
   { &search22, &replace22.value, 0 },
   { &search24, &replace24.value, 0 },
   { &search25, &replace25.value, 0 },
   { &search26, &replace26.value, 0 },
   { &search197, &replace197.value, 0 },
   { &search205, &replace205.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search218_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search218 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_unorm_2x16,
   { &search218_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace218_0_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace218_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &replace218_0_0_0_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace218_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x40efffe000000000 /* 65535.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace218_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace218_0_0_0_0.value, &replace218_0_0_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace218_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fround_even,
   { &replace218_0_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace218_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_f2u,
   { &replace218_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace218 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_uvec2_to_uint,
   { &replace218_0.value },
};

static const struct transform nir_opt_algebraic_pack_unorm_2x16_xforms[] = {
   { &search218, &replace218.value, 29 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search219_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search219 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_unorm_4x8,
   { &search219_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace219_0_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace219_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &replace219_0_0_0_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace219_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x406fe00000000000 /* 255.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace219_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace219_0_0_0_0.value, &replace219_0_0_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace219_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fround_even,
   { &replace219_0_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace219_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_f2u,
   { &replace219_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace219 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_uvec4_to_uint,
   { &replace219_0.value },
};

static const struct transform nir_opt_algebraic_pack_unorm_4x8_xforms[] = {
   { &search219, &replace219.value, 30 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search221_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search221 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_snorm_4x8,
   { &search221_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace221_0_0_0_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace221_0_0_0_0_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0xbff0000000000000L /* -1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace221_0_0_0_0_1_1 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace221_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace221_0_0_0_0_1_0.value, &replace221_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace221_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace221_0_0_0_0_0.value, &replace221_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace221_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x405fc00000000000 /* 127.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace221_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace221_0_0_0_0.value, &replace221_0_0_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace221_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fround_even,
   { &replace221_0_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace221_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_f2i,
   { &replace221_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace221 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_uvec4_to_uint,
   { &replace221_0.value },
};

static const struct transform nir_opt_algebraic_pack_snorm_4x8_xforms[] = {
   { &search221, &replace221.value, 32 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search118_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search118_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search118 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fand,
   { &search118_0.value, &search118_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace118 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

static const struct transform nir_opt_algebraic_fand_xforms[] = {
   { &search118, &replace118.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search12_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search12_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search12_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search12 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search12_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace12_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace12 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &replace12_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search13_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search13_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search13_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search13 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search13_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace13_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace13 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &replace13_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search14_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search14_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_u2f,
   { &search14_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search14 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search14_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace14_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace14 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_u2f,
   { &replace14_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search96_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search96_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search96_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_slt,
   { &search96_0_0.value, &search96_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search96 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search96_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace96_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace96_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace96 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_slt,
   { &replace96_0.value, &replace96_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search97_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search97_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search97_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_sge,
   { &search97_0_0.value, &search97_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search97 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search97_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace97_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace97_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace97 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_sge,
   { &replace97_0.value, &replace97_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search98_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search98_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search98_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_seq,
   { &search98_0_0.value, &search98_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search98 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search98_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace98_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace98_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace98 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_seq,
   { &replace98_0.value, &replace98_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search99_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search99_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search99_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_sne,
   { &search99_0_0.value, &search99_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search99 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search99_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace99_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace99_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace99 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_sne,
   { &replace99_0.value, &replace99_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search180_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search180_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search180_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search180 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search180_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace180_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace180 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &replace180_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search198_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search198_0_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search198_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &search198_0_0.value, &search198_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search198 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search198_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace198_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace198 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &replace198_0.value },
};

static const struct transform nir_opt_algebraic_fabs_xforms[] = {
   { &search12, &replace12.value, 0 },
   { &search13, &replace13.value, 0 },
   { &search14, &replace14.value, 0 },
   { &search96, &replace96.value, 0 },
   { &search97, &replace97.value, 0 },
   { &search98, &replace98.value, 0 },
   { &search99, &replace99.value, 0 },
   { &search180, &replace180.value, 0 },
   { &search198, &replace198.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search5_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search5_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search5 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imod,
   { &search5_0.value, &search5_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace5 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

static const struct transform nir_opt_algebraic_imod_xforms[] = {
   { &search5, &replace5.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search114_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search114_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search114 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &search114_0.value, &search114_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace114 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search164_0 = {
   { nir_search_value_variable, 32 },
   0, /* a */
   false,
   nir_type_bool32,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search164_1 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search164 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &search164_0.value, &search164_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace164 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search167_0 = {
   { nir_search_value_variable, 32 },
   0, /* a */
   false,
   nir_type_bool32,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search167_1 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_FALSE /* False */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search167 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &search167_0.value, &search167_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace167_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace167 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &replace167_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search241_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search241_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search241_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search241_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search241_0_0.value, &search241_0_1.value, &search241_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search241_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search241 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &search241_0.value, &search241_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace241_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace241_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace241_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace241_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &replace241_1_0.value, &replace241_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace241_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace241_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace241_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &replace241_2_0.value, &replace241_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace241 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace241_0.value, &replace241_1.value, &replace241_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search242_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search242_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search242_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search242_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search242_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search242_1_0.value, &search242_1_1.value, &search242_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search242 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &search242_0.value, &search242_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace242_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace242_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace242_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace242_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &replace242_1_0.value, &replace242_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace242_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace242_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace242_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &replace242_2_0.value, &replace242_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace242 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace242_0.value, &replace242_1.value, &replace242_2.value },
};

static const struct transform nir_opt_algebraic_ieq_xforms[] = {
   { &search114, &replace114.value, 0 },
   { &search164, &replace164.value, 0 },
   { &search167, &replace167.value, 0 },
   { &search241, &replace241.value, 0 },
   { &search242, &replace242.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search78_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search78_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search78 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &search78_0.value, &search78_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace78 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search87_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search87_0_0_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search87_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &search87_0_0_0_0.value, &search87_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search87_0_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search87_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &search87_0_0_0.value, &search87_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search87_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search87_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &search87_0_0.value, &search87_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search87_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search87 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &search87_0.value, &search87_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace87_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace87_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace87_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &replace87_0_0.value, &replace87_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace87_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace87 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &replace87_0.value, &replace87_1.value },
};

static const struct transform nir_opt_algebraic_imin_xforms[] = {
   { &search78, &replace78.value, 0 },
   { &search87, &replace87.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search152_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search152_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &search152_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search152 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_frsq,
   { &search152_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace152_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0xbfe0000000000000L /* -0.5 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace152_0_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace152_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace152_0_0.value, &replace152_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace152 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &replace152_0.value },
};

static const struct transform nir_opt_algebraic_frsq_xforms[] = {
   { &search152, &replace152.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search19_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search19_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search19 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_usadd_4x8,
   { &search19_0.value, &search19_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace19 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search20_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search20_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x1 /* -1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search20 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_usadd_4x8,
   { &search20_0.value, &search20_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace20 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x1 /* -1 */ },
};

static const struct transform nir_opt_algebraic_usadd_4x8_xforms[] = {
   { &search19, &replace19.value, 0 },
   { &search20, &replace20.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search3_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search3_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search3 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_idiv,
   { &search3_0.value, &search3_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace3 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search7_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search7_1 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   true,
   nir_type_invalid,
   (is_pos_power_of_two),
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search7 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_idiv,
   { &search7_0.value, &search7_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace7_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace7_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isign,
   { &replace7_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace7_1_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace7_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &replace7_1_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace7_1_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace7_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_find_lsb,
   { &replace7_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace7_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &replace7_1_0.value, &replace7_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace7 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace7_0.value, &replace7_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search8_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search8_1 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   true,
   nir_type_invalid,
   (is_neg_power_of_two),
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search8 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_idiv,
   { &search8_0.value, &search8_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace8_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace8_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isign,
   { &replace8_0_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace8_0_1_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace8_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &replace8_0_1_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace8_0_1_1_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace8_0_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &replace8_0_1_1_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace8_0_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_find_lsb,
   { &replace8_0_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace8_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &replace8_0_1_0.value, &replace8_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace8_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace8_0_0.value, &replace8_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace8 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &replace8_0.value },
};

static const struct transform nir_opt_algebraic_idiv_xforms[] = {
   { &search3, &replace3.value, 0 },
   { &search7, &replace7.value, 1 },
   { &search8, &replace8.value, 1 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search91_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search91_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search91_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &search91_0_0_0.value, &search91_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search91_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff /* 255 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search91_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &search91_0_0.value, &search91_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search91_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search91 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &search91_0.value, &search91_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace91_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace91_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace91_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &replace91_0_0.value, &replace91_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace91_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff /* 255 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace91 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &replace91_0.value, &replace91_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search215_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search215_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search215 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &search215_0.value, &search215_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace215_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace215_0_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace215_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace215_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace215_0_1_0.value, &replace215_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace215_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &replace215_0_0.value, &replace215_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace215_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff /* 255 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace215 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &replace215_0.value, &replace215_1.value },
};

static const struct transform nir_opt_algebraic_extract_u8_xforms[] = {
   { &search91, &replace91.value, 0 },
   { &search215, &replace215.value, 27 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search220_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search220 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_snorm_2x16,
   { &search220_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace220_0_0_0_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace220_0_0_0_0_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0xbff0000000000000L /* -1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace220_0_0_0_0_1_1 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace220_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace220_0_0_0_0_1_0.value, &replace220_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace220_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace220_0_0_0_0_0.value, &replace220_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace220_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x40dfffc000000000 /* 32767.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace220_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace220_0_0_0_0.value, &replace220_0_0_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace220_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fround_even,
   { &replace220_0_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace220_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_f2i,
   { &replace220_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace220 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_uvec2_to_uint,
   { &replace220_0.value },
};

static const struct transform nir_opt_algebraic_pack_snorm_2x16_xforms[] = {
   { &search220, &replace220.value, 31 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search141_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search141_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search141 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fpow,
   { &search141_0.value, &search141_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace141_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace141_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &replace141_0_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace141_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace141_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace141_0_0.value, &replace141_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace141 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &replace141_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search144_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search144_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search144 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fpow,
   { &search144_0.value, &search144_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace144 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search145_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search145_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x4000000000000000 /* 2.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search145 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fpow,
   { &search145_0.value, &search145_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace145_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace145_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace145 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace145_0.value, &replace145_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search146_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search146_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x4010000000000000 /* 4.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search146 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fpow,
   { &search146_0.value, &search146_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace146_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace146_0_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace146_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace146_0_0.value, &replace146_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace146_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace146_1_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace146_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace146_1_0.value, &replace146_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace146 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace146_0.value, &replace146_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search147_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x4000000000000000 /* 2.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search147_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search147 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fpow,
   { &search147_0.value, &search147_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace147_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace147 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &replace147_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search148_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search148_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x400199999999999a /* 2.2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search148_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fpow,
   { &search148_0_0.value, &search148_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search148_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3fdd1743e963dc48 /* 0.454545 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search148 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fpow,
   { &search148_0.value, &search148_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace148 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search149_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search149_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x400199999999999a /* 2.2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search149_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fpow,
   { &search149_0_0_0.value, &search149_0_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search149_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search149_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search149_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3fdd1743e963dc48 /* 0.454545 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search149 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fpow,
   { &search149_0.value, &search149_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace149_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace149 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &replace149_0.value },
};

static const struct transform nir_opt_algebraic_fpow_xforms[] = {
   { &search141, &replace141.value, 12 },
   { &search144, &replace144.value, 0 },
   { &search145, &replace145.value, 0 },
   { &search146, &replace146.value, 0 },
   { &search147, &replace147.value, 0 },
   { &search148, &replace148.value, 0 },
   { &search149, &replace149.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search113_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search113_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search113 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &search113_0.value, &search113_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace113 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search239_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search239_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search239_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search239_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search239_0_0.value, &search239_0_1.value, &search239_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search239_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search239 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &search239_0.value, &search239_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace239_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace239_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace239_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace239_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &replace239_1_0.value, &replace239_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace239_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace239_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace239_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &replace239_2_0.value, &replace239_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace239 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace239_0.value, &replace239_1.value, &replace239_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search240_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search240_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search240_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search240_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search240_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search240_1_0.value, &search240_1_1.value, &search240_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search240 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &search240_0.value, &search240_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace240_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace240_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace240_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace240_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &replace240_1_0.value, &replace240_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace240_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace240_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace240_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &replace240_2_0.value, &replace240_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace240 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace240_0.value, &replace240_1.value, &replace240_2.value },
};

static const struct transform nir_opt_algebraic_ige_xforms[] = {
   { &search113, &replace113.value, 0 },
   { &search239, &replace239.value, 0 },
   { &search240, &replace240.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search158_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search158_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search158 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fdiv,
   { &search158_0.value, &search158_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace158_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace158 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frcp,
   { &replace158_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search159_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search159_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search159 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdiv,
   { &search159_0.value, &search159_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace159_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace159_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace159_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frcp,
   { &replace159_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace159 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace159_0.value, &replace159_1.value },
};

static const struct transform nir_opt_algebraic_fdiv_xforms[] = {
   { &search158, &replace158.value, 0 },
   { &search159, &replace159.value, 14 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search49_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search49 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ffract,
   { &search49_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace49_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace49_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace49_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ffloor,
   { &replace49_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace49 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &replace49_0.value, &replace49_1.value },
};

static const struct transform nir_opt_algebraic_ffract_xforms[] = {
   { &search49, &replace49.value, 4 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search17_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search17_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search17 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search17_0.value, &search17_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace17 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search21_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search21_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search21_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search21_0_0.value, &search21_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search21_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search21_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search21_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search21_1_0.value, &search21_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search21 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search21_0.value, &search21_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace21_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace21_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace21_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace21_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace21_1_0.value, &replace21_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace21 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace21_0.value, &replace21_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search23_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search23_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search23_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search23_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search23 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search23_0.value, &search23_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace23 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search27_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search27_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search27_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search27_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search27_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search27_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search27_1_0.value, &search27_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search27 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search27_0.value, &search27_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace27 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search28_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search28_1_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search28_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search28_1_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search28_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search28_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search28_1_0.value, &search28_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search28 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search28_0.value, &search28_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace28 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search50_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search50_0_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search50_0_1_1_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search50_0_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search50_0_1_1_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search50_0_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search50_0_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search50_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search50_0_1_0.value, &search50_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search50_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search50_0_0.value, &search50_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search50_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search50_1_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search50_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search50_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search50_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search50_1_0.value, &search50_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search50 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search50_0.value, &search50_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace50_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace50_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace50_2 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace50 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace50_0.value, &replace50_1.value, &replace50_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search51_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search51_0_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search51_0_1_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search51_0_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search51_0_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search51_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search51_0_1_0.value, &search51_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search51_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search51_0_0.value, &search51_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search51_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search51_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search51_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search51_1_0.value, &search51_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search51 = {
   { nir_search_value_expression, 32 },
   true,
   nir_op_fadd,
   { &search51_0.value, &search51_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace51_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace51_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace51_2 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace51 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flrp,
   { &replace51_0.value, &replace51_1.value, &replace51_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search52_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search52_0_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search52_0_1_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search52_0_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search52_0_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search52_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search52_0_1_0.value, &search52_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search52_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search52_0_0.value, &search52_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search52_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search52_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search52_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search52_1_0.value, &search52_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search52 = {
   { nir_search_value_expression, 64 },
   true,
   nir_op_fadd,
   { &search52_0.value, &search52_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace52_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace52_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace52_2 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace52 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flrp,
   { &replace52_0.value, &replace52_1.value, &replace52_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search53_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search53_1_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search53_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search53_1_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search53_1_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search53_1_1_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search53_1_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search53_1_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search53_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search53_1_1_0.value, &search53_1_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search53_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search53_1_0.value, &search53_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search53 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search53_0.value, &search53_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace53_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace53_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace53_2 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace53 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace53_0.value, &replace53_1.value, &replace53_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search54_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search54_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search54_1_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search54_1_1_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search54_1_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search54_1_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search54_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search54_1_1_0.value, &search54_1_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search54_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search54_1_0.value, &search54_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search54 = {
   { nir_search_value_expression, 32 },
   true,
   nir_op_fadd,
   { &search54_0.value, &search54_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace54_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace54_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace54_2 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace54 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flrp,
   { &replace54_0.value, &replace54_1.value, &replace54_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search55_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search55_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search55_1_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search55_1_1_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search55_1_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search55_1_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search55_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search55_1_1_0.value, &search55_1_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search55_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search55_1_0.value, &search55_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search55 = {
   { nir_search_value_expression, 64 },
   true,
   nir_op_fadd,
   { &search55_0.value, &search55_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace55_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace55_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace55_2 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace55 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flrp,
   { &replace55_0.value, &replace55_1.value, &replace55_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search57_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search57_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search57_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search57_0_0.value, &search57_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search57_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search57 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search57_0.value, &search57_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace57_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace57_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace57_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace57 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ffma,
   { &replace57_0.value, &replace57_1.value, &replace57_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search196_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search196_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search196_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search196_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &search196_1_0.value, &search196_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search196 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search196_0.value, &search196_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace196_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace196_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace196 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &replace196_0.value, &replace196_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search204_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search204_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search204_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search204_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search204_1_0.value, &search204_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search204 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fadd,
   { &search204_0.value, &search204_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace204_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace204_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace204_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace204_0_0.value, &replace204_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace204_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace204 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace204_0.value, &replace204_1.value },
};

static const struct transform nir_opt_algebraic_fadd_xforms[] = {
   { &search17, &replace17.value, 0 },
   { &search21, &replace21.value, 0 },
   { &search23, &replace23.value, 0 },
   { &search27, &replace27.value, 0 },
   { &search28, &replace28.value, 0 },
   { &search50, &replace50.value, 2 },
   { &search51, &replace51.value, 5 },
   { &search52, &replace52.value, 6 },
   { &search53, &replace53.value, 2 },
   { &search54, &replace54.value, 5 },
   { &search55, &replace55.value, 6 },
   { &search57, &replace57.value, 8 },
   { &search196, &replace196.value, 0 },
   { &search204, &replace204.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search58_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search58_0_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search58_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search58_0_0_0.value, &search58_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search58_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search58_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &search58_0_0.value, &search58_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search58_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search58 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search58_0.value, &search58_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace58_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace58_0_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace58_0_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace58_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace58_0_1_0.value, &replace58_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace58_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace58_0_0.value, &replace58_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace58_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace58_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace58_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace58_1_0.value, &replace58_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace58 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace58_0.value, &replace58_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search59_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search59_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search59_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &search59_0_0.value, &search59_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search59_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search59 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search59_0.value, &search59_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace59_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace59_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace59_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace59_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace59_1_0.value, &replace59_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace59 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace59_0.value, &replace59_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search131_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search131_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search131 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search131_0.value, &search131_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace131 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search132_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search132_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search132 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search132_0.value, &search132_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace132 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_ishl_xforms[] = {
   { &search58, &replace58.value, 0 },
   { &search59, &replace59.value, 0 },
   { &search131, &replace131.value, 0 },
   { &search132, &replace132.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search210_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search210_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search210 = {
   { nir_search_value_expression, 32 },
   false,
   nir_op_usub_borrow,
   { &search210_0.value, &search210_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace210_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace210_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace210_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &replace210_0_0.value, &replace210_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace210 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2i,
   { &replace210_0.value },
};

static const struct transform nir_opt_algebraic_usub_borrow_xforms[] = {
   { &search210, &replace210.value, 24 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search140_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search140_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &search140_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search140 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flog2,
   { &search140_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace140 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search153_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search153_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsqrt,
   { &search153_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search153 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flog2,
   { &search153_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace153_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3fe0000000000000 /* 0.5 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace153_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace153_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &replace153_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace153 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace153_0.value, &replace153_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search154_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search154_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frcp,
   { &search154_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search154 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flog2,
   { &search154_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace154_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace154_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &replace154_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace154 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace154_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search155_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search155_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frsq,
   { &search155_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search155 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flog2,
   { &search155_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace155_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0xbfe0000000000000L /* -0.5 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace155_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace155_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &replace155_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace155 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace155_0.value, &replace155_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search156_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search156_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search156_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fpow,
   { &search156_0_0.value, &search156_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search156 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flog2,
   { &search156_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace156_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace156_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace156_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &replace156_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace156 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace156_0.value, &replace156_1.value },
};

static const struct transform nir_opt_algebraic_flog2_xforms[] = {
   { &search140, &replace140.value, 0 },
   { &search153, &replace153.value, 0 },
   { &search154, &replace154.value, 0 },
   { &search155, &replace155.value, 0 },
   { &search156, &replace156.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search60_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search60_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search60_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search60_0_0.value, &search60_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search60 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_inot,
   { &search60_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace60_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace60_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace60 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace60_0.value, &replace60_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search61_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search61_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search61_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search61_0_0.value, &search61_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search61 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_inot,
   { &search61_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace61_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace61_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace61 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace61_0.value, &replace61_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search62_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search62_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search62_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &search62_0_0.value, &search62_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search62 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_inot,
   { &search62_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace62_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace62_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace62 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace62_0.value, &replace62_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search63_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search63_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search63_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &search63_0_0.value, &search63_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search63 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_inot,
   { &search63_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace63_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace63_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace63 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace63_0.value, &replace63_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search64_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search64_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search64_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &search64_0_0.value, &search64_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search64 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search64_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace64_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace64_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace64 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &replace64_0.value, &replace64_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search65_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search65_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search65_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ige,
   { &search65_0_0.value, &search65_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search65 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search65_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace65_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace65_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace65 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &replace65_0.value, &replace65_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search66_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search66_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search66_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &search66_0_0.value, &search66_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search66 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search66_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace66_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace66_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace66 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &replace66_0.value, &replace66_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search67_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search67_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search67_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &search67_0_0.value, &search67_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search67 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search67_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace67_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace67_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace67 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ieq,
   { &replace67_0.value, &replace67_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search128_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search128_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search128_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search128 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search128_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace128 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_inot_xforms[] = {
   { &search60, &replace60.value, 0 },
   { &search61, &replace61.value, 0 },
   { &search62, &replace62.value, 0 },
   { &search63, &replace63.value, 0 },
   { &search64, &replace64.value, 0 },
   { &search65, &replace65.value, 0 },
   { &search66, &replace66.value, 0 },
   { &search67, &replace67.value, 0 },
   { &search128, &replace128.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search103_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search103_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search103 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_sne,
   { &search103_0.value, &search103_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace103_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace103_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace103_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace103_0_0.value, &replace103_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace103 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &replace103_0.value },
};

static const struct transform nir_opt_algebraic_sne_xforms[] = {
   { &search103, &replace103.value, 11 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search206_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search206_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search206 = {
   { nir_search_value_expression, 32 },
   false,
   nir_op_fmod,
   { &search206_0.value, &search206_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace206_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace206_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace206_1_1_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace206_1_1_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace206_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdiv,
   { &replace206_1_1_0_0.value, &replace206_1_1_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace206_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ffloor,
   { &replace206_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace206_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace206_1_0.value, &replace206_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace206 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &replace206_0.value, &replace206_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search207_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search207_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search207 = {
   { nir_search_value_expression, 64 },
   false,
   nir_op_fmod,
   { &search207_0.value, &search207_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace207_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace207_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace207_1_1_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace207_1_1_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace207_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdiv,
   { &replace207_1_1_0_0.value, &replace207_1_1_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace207_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ffloor,
   { &replace207_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace207_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace207_1_0.value, &replace207_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace207 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &replace207_0.value, &replace207_1.value },
};

static const struct transform nir_opt_algebraic_fmod_xforms[] = {
   { &search206, &replace206.value, 21 },
   { &search207, &replace207.value, 22 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search177_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search177_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ftrunc,
   { &search177_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search177 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_f2u,
   { &search177_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace177_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace177 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_f2u,
   { &replace177_0.value },
};

static const struct transform nir_opt_algebraic_f2u_xforms[] = {
   { &search177, &replace177.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search174_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search174_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search174_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search174 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fcsel,
   { &search174_0.value, &search174_1.value, &search174_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace174 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_fcsel_xforms[] = {
   { &search174, &replace174.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search189_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search189_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search189_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search189_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &search189_1_0.value, &search189_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search189 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &search189_0.value, &search189_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace189_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace189_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace189 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace189_0.value, &replace189_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search193_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search193_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search193 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &search193_0.value, &search193_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace193_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace193_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace193_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &replace193_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace193 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace193_0.value, &replace193_1.value },
};

static const struct transform nir_opt_algebraic_isub_xforms[] = {
   { &search189, &replace189.value, 0 },
   { &search193, &replace193.value, 19 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search77_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search77_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search77 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &search77_0.value, &search77_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace77 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search83_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search83_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search83_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &search83_0_0.value, &search83_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search83_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search83 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fmax,
   { &search83_0.value, &search83_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace83_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace83 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &replace83_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search89_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search89_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &search89_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search89_1 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   true,
   nir_type_invalid,
   (is_zero_to_one),
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search89 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &search89_0.value, &search89_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace89_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace89_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace89_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace89_0_0.value, &replace89_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace89 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &replace89_0.value },
};

static const struct transform nir_opt_algebraic_fmax_xforms[] = {
   { &search77, &replace77.value, 0 },
   { &search83, &replace83.value, 9 },
   { &search89, &replace89.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search31_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search31_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search31 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umul_unorm_4x8,
   { &search31_0.value, &search31_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace31 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search32_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search32_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x1 /* -1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search32 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_umul_unorm_4x8,
   { &search32_0.value, &search32_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace32 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_umul_unorm_4x8_xforms[] = {
   { &search31, &replace31.value, 0 },
   { &search32, &replace32.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search211_0 = {
   { nir_search_value_variable, 0 },
   0, /* base */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search211_1 = {
   { nir_search_value_variable, 0 },
   1, /* insert */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search211_2 = {
   { nir_search_value_variable, 0 },
   2, /* offset */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search211_3 = {
   { nir_search_value_variable, 0 },
   3, /* bits */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search211 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bitfield_insert,
   { &search211_0.value, &search211_1.value, &search211_2.value, &search211_3.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace211_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1f /* 31 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace211_0_1 = {
   { nir_search_value_variable, 0 },
   3, /* bits */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace211_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &replace211_0_0.value, &replace211_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace211_1 = {
   { nir_search_value_variable, 0 },
   1, /* insert */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace211_2_0_0 = {
   { nir_search_value_variable, 0 },
   3, /* bits */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace211_2_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* offset */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace211_2_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bfm,
   { &replace211_2_0_0.value, &replace211_2_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace211_2_1 = {
   { nir_search_value_variable, 0 },
   1, /* insert */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace211_2_2 = {
   { nir_search_value_variable, 0 },
   0, /* base */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace211_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bfi,
   { &replace211_2_0.value, &replace211_2_1.value, &replace211_2_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace211 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace211_0.value, &replace211_1.value, &replace211_2.value },
};

static const struct transform nir_opt_algebraic_bitfield_insert_xforms[] = {
   { &search211, &replace211.value, 25 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search105_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search105_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search105_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search105_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search105 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &search105_0.value, &search105_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace105_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace105_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace105 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace105_0.value, &replace105_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search233_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search233_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search233_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search233_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search233_0_0.value, &search233_0_1.value, &search233_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search233_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search233 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &search233_0.value, &search233_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace233_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace233_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace233_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace233_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace233_1_0.value, &replace233_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace233_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace233_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace233_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace233_2_0.value, &replace233_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace233 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace233_0.value, &replace233_1.value, &replace233_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search234_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search234_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search234_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search234_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search234_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search234_1_0.value, &search234_1_1.value, &search234_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search234 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &search234_0.value, &search234_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace234_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace234_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace234_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace234_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace234_1_0.value, &replace234_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace234_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace234_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace234_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace234_2_0.value, &replace234_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace234 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace234_0.value, &replace234_1.value, &replace234_2.value },
};

static const struct transform nir_opt_algebraic_feq_xforms[] = {
   { &search105, &replace105.value, 0 },
   { &search233, &replace233.value, 0 },
   { &search234, &replace234.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search42_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search42_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search42_2 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search42 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flrp,
   { &search42_0.value, &search42_1.value, &search42_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace42 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search43_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search43_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search43_2 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search43 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flrp,
   { &search43_0.value, &search43_1.value, &search43_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace43 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search44_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search44_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search44_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search44 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flrp,
   { &search44_0.value, &search44_1.value, &search44_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace44 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search45_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search45_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search45_2 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search45 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flrp,
   { &search45_0.value, &search45_1.value, &search45_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace45_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace45_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace45 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace45_0.value, &replace45_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search46_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search46_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search46_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search46_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search46_2_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search46 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_flrp,
   { &search46_0.value, &search46_1.value, &search46_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace46_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace46_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace46_2 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace46 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace46_0.value, &replace46_1.value, &replace46_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search47_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search47_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search47_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search47 = {
   { nir_search_value_expression, 32 },
   false,
   nir_op_flrp,
   { &search47_0.value, &search47_1.value, &search47_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace47_0_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace47_0_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace47_0_1_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace47_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &replace47_0_1_0.value, &replace47_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace47_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace47_0_0.value, &replace47_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace47_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace47 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace47_0.value, &replace47_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search48_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search48_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search48_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search48 = {
   { nir_search_value_expression, 64 },
   false,
   nir_op_flrp,
   { &search48_0.value, &search48_1.value, &search48_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace48_0_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace48_0_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace48_0_1_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace48_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &replace48_0_1_0.value, &replace48_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace48_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace48_0_0.value, &replace48_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace48_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace48 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace48_0.value, &replace48_1.value },
};

static const struct transform nir_opt_algebraic_flrp_xforms[] = {
   { &search42, &replace42.value, 0 },
   { &search43, &replace43.value, 0 },
   { &search44, &replace44.value, 0 },
   { &search45, &replace45.value, 0 },
   { &search46, &replace46.value, 2 },
   { &search47, &replace47.value, 2 },
   { &search48, &replace48.value, 3 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search92_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search92_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search92_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search92_0_0.value, &search92_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search92_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search92_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search92_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search92_1_0.value, &search92_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search92 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_ior,
   { &search92_0.value, &search92_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace92_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace92_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace92_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace92_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace92_1_0.value, &replace92_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace92 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace92_0.value, &replace92_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search93_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search93_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search93_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search93_0_0.value, &search93_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search93_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search93_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search93_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search93_1_0.value, &search93_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search93 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_ior,
   { &search93_0.value, &search93_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace93_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace93_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace93_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace93_0_0.value, &replace93_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace93_1 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace93 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace93_0.value, &replace93_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search94_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search94_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search94_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search94_0_0.value, &search94_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search94_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search94_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search94_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search94_1_0.value, &search94_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search94 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_ior,
   { &search94_0.value, &search94_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace94_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace94_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace94_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace94_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace94_1_0.value, &replace94_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace94 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace94_0.value, &replace94_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search95_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search95_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search95_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search95_0_0.value, &search95_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search95_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search95_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search95_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search95_1_0.value, &search95_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search95 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_ior,
   { &search95_0.value, &search95_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace95_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace95_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace95_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace95_0_0.value, &replace95_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace95_1 = {
   { nir_search_value_variable, 0 },
   1, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace95 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace95_0.value, &replace95_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search122_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search122_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search122 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search122_0.value, &search122_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace122 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search123_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search123_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search123 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search123_0.value, &search123_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace123 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search124_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search124_1 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search124 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search124_0.value, &search124_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace124 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search130_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search130_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search130_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search130_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search130_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &search130_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search130 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search130_0.value, &search130_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace130_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace130_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace130_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &replace130_0_0.value, &replace130_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace130 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &replace130_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_0_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_0_0_0_0_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_0_0_0_0_0_0_0_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_0_0_0_0_0_0_0_0_0_1_0.value, &search228_0_0_0_0_0_0_0_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_0_0_0_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff /* 16711935 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_0_0_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_0_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_0_0_0_0_0_0_1_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_0_0_0_0_0_0_1_0_0_0_0.value, &search228_0_0_0_0_0_0_0_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_0_0_0_0_0_0_1_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_0_0_0_0_0_0_1_0_0_1_0.value, &search228_0_0_0_0_0_0_0_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_0_0_0_0_0_0_1_0_0_0.value, &search228_0_0_0_0_0_0_0_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff00 /* 4278255360 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_0_0_0_0_0_0_1_0_0.value, &search228_0_0_0_0_0_0_0_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_0_0_0_0_0_0_1_0.value, &search228_0_0_0_0_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xf0f0f0f /* 252645135 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x4 /* 4 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_0_0_0_1_0_0_0_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_0_0_0_1_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_1_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_0_0_0_1_0_0_0_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_0_0_0_1_0_0_0_0_0_1_0.value, &search228_0_0_0_0_0_0_1_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_0_0_0_1_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_1_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff /* 16711935 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_0_0_0_1_0_0_0_0_0.value, &search228_0_0_0_0_0_0_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_0_0_0_1_0_0_0_0.value, &search228_0_0_0_0_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_0_0_0_1_0_0_1_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_0_0_0_1_0_0_1_0_0_0_0.value, &search228_0_0_0_0_0_0_1_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_0_0_0_1_0_0_1_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_0_0_0_1_0_0_1_0_0_1_0.value, &search228_0_0_0_0_0_0_1_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_0_0_0_1_0_0_1_0_0_0.value, &search228_0_0_0_0_0_0_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff00 /* 4278255360 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_0_0_0_1_0_0_1_0_0.value, &search228_0_0_0_0_0_0_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_0_0_0_1_0_0_1_0.value, &search228_0_0_0_0_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_0_0_0_1_0_0_0.value, &search228_0_0_0_0_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xf0f0f0f0 /* 4042322160 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_0_0_0_1_0_0.value, &search228_0_0_0_0_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x4 /* 4 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_0_0_0_1_0.value, &search228_0_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_0_0_0_0.value, &search228_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x33333333 /* 858993459 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_0_0_0.value, &search228_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x2 /* 2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_0_0.value, &search228_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_1_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_1_0_0_0_0_0_0_0_0_0_0.value, &search228_0_0_0_1_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_1_0_0_0_0_0_0_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_1_0_0_0_0_0_0_0_0_1_0.value, &search228_0_0_0_1_0_0_0_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_1_0_0_0_0_0_0_0_0_0.value, &search228_0_0_0_1_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff /* 16711935 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_1_0_0_0_0_0_0_0_0.value, &search228_0_0_0_1_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_1_0_0_0_0_0_0_0.value, &search228_0_0_0_1_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_1_0_0_0_0_0_1_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_1_0_0_0_0_0_1_0_0_0_0.value, &search228_0_0_0_1_0_0_0_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_1_0_0_0_0_0_1_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_1_0_0_0_0_0_1_0_0_1_0.value, &search228_0_0_0_1_0_0_0_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_1_0_0_0_0_0_1_0_0_0.value, &search228_0_0_0_1_0_0_0_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff00 /* 4278255360 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_1_0_0_0_0_0_1_0_0.value, &search228_0_0_0_1_0_0_0_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_1_0_0_0_0_0_1_0.value, &search228_0_0_0_1_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_1_0_0_0_0_0_0.value, &search228_0_0_0_1_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xf0f0f0f /* 252645135 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_1_0_0_0_0_0.value, &search228_0_0_0_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x4 /* 4 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_1_0_0_0_0.value, &search228_0_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_1_0_0_1_0_0_0_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_1_0_0_1_0_0_0_0_0_0_0.value, &search228_0_0_0_1_0_0_1_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_1_0_0_1_0_0_0_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_1_0_0_1_0_0_0_0_0_1_0.value, &search228_0_0_0_1_0_0_1_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_1_0_0_1_0_0_0_0_0_0.value, &search228_0_0_0_1_0_0_1_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff /* 16711935 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_1_0_0_1_0_0_0_0_0.value, &search228_0_0_0_1_0_0_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_1_0_0_1_0_0_0_0.value, &search228_0_0_0_1_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_1_0_0_1_0_0_1_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0_0_1_0_0_1_0_0_1_0_0_0_0.value, &search228_0_0_0_1_0_0_1_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_0_0_0_1_0_0_1_0_0_1_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_1_0_0_1_0_0_1_0_0_1_0.value, &search228_0_0_0_1_0_0_1_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_1_0_0_1_0_0_1_0_0_0.value, &search228_0_0_0_1_0_0_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff00 /* 4278255360 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_1_0_0_1_0_0_1_0_0.value, &search228_0_0_0_1_0_0_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_1_0_0_1_0_0_1_0.value, &search228_0_0_0_1_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_1_0_0_1_0_0_0.value, &search228_0_0_0_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xf0f0f0f0 /* 4042322160 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_1_0_0_1_0_0.value, &search228_0_0_0_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x4 /* 4 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_1_0_0_1_0.value, &search228_0_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_1_0_0_0.value, &search228_0_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xcccccccc /* 3435973836 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0_1_0_0.value, &search228_0_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x2 /* 2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_0_0_0_1_0.value, &search228_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0_0_0_0.value, &search228_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x55555555 /* 1431655765 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_0_0_0.value, &search228_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_0_0.value, &search228_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_0_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_0_0_0_0_0_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_0_0_0_0_0_0_0_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_0_0_0_0_0_0_0_0_0_1_0.value, &search228_1_0_0_0_0_0_0_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_0_0_0_0_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff /* 16711935 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_0_0_0_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_0_0_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_0_0_0_0_0_0_1_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_0_0_0_0_0_0_1_0_0_0_0.value, &search228_1_0_0_0_0_0_0_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_0_0_0_0_0_0_1_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_0_0_0_0_0_0_1_0_0_1_0.value, &search228_1_0_0_0_0_0_0_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_0_0_0_0_0_0_1_0_0_0.value, &search228_1_0_0_0_0_0_0_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff00 /* 4278255360 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_0_0_0_0_0_0_1_0_0.value, &search228_1_0_0_0_0_0_0_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_0_0_0_0_0_0_1_0.value, &search228_1_0_0_0_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_0_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xf0f0f0f /* 252645135 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x4 /* 4 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_0_0_0_1_0_0_0_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_0_0_0_1_0_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_1_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_0_0_0_1_0_0_0_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_0_0_0_1_0_0_0_0_0_1_0.value, &search228_1_0_0_0_0_0_1_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_0_0_0_1_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_1_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff /* 16711935 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_0_0_0_1_0_0_0_0_0.value, &search228_1_0_0_0_0_0_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_0_0_0_1_0_0_0_0.value, &search228_1_0_0_0_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_0_0_0_1_0_0_1_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_0_0_0_1_0_0_1_0_0_0_0.value, &search228_1_0_0_0_0_0_1_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_0_0_0_1_0_0_1_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_0_0_0_1_0_0_1_0_0_1_0.value, &search228_1_0_0_0_0_0_1_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_0_0_0_1_0_0_1_0_0_0.value, &search228_1_0_0_0_0_0_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff00 /* 4278255360 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_0_0_0_1_0_0_1_0_0.value, &search228_1_0_0_0_0_0_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_0_0_0_1_0_0_1_0.value, &search228_1_0_0_0_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_0_0_0_1_0_0_0.value, &search228_1_0_0_0_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xf0f0f0f0 /* 4042322160 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_0_0_0_1_0_0.value, &search228_1_0_0_0_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x4 /* 4 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_0_0_0_1_0.value, &search228_1_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_0_0_0_0.value, &search228_1_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x33333333 /* 858993459 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_0_0_0.value, &search228_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x2 /* 2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_0_0.value, &search228_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_1_0_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_1_0_0_0_0_0_0_0_0_0_0.value, &search228_1_0_0_1_0_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_1_0_0_0_0_0_0_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_1_0_0_0_0_0_0_0_0_1_0.value, &search228_1_0_0_1_0_0_0_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_1_0_0_0_0_0_0_0_0_0.value, &search228_1_0_0_1_0_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff /* 16711935 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_1_0_0_0_0_0_0_0_0.value, &search228_1_0_0_1_0_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_1_0_0_0_0_0_0_0.value, &search228_1_0_0_1_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_1_0_0_0_0_0_1_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_1_0_0_0_0_0_1_0_0_0_0.value, &search228_1_0_0_1_0_0_0_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_1_0_0_0_0_0_1_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_1_0_0_0_0_0_1_0_0_1_0.value, &search228_1_0_0_1_0_0_0_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_1_0_0_0_0_0_1_0_0_0.value, &search228_1_0_0_1_0_0_0_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff00 /* 4278255360 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_1_0_0_0_0_0_1_0_0.value, &search228_1_0_0_1_0_0_0_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_1_0_0_0_0_0_1_0.value, &search228_1_0_0_1_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_1_0_0_0_0_0_0.value, &search228_1_0_0_1_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xf0f0f0f /* 252645135 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_1_0_0_0_0_0.value, &search228_1_0_0_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x4 /* 4 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_1_0_0_0_0.value, &search228_1_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_1_0_0_1_0_0_0_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_0_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_1_0_0_1_0_0_0_0_0_0_0.value, &search228_1_0_0_1_0_0_1_0_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_1_0_0_1_0_0_0_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_0_0_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_0_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_1_0_0_1_0_0_0_0_0_1_0.value, &search228_1_0_0_1_0_0_1_0_0_0_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_1_0_0_1_0_0_0_0_0_0.value, &search228_1_0_0_1_0_0_1_0_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff /* 16711935 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_1_0_0_1_0_0_0_0_0.value, &search228_1_0_0_1_0_0_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_1_0_0_1_0_0_0_0.value, &search228_1_0_0_1_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_1_0_0_1_0_0_1_0_0_0_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &search228_1_0_0_1_0_0_1_0_0_1_0_0_0_0.value, &search228_1_0_0_1_0_0_1_0_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search228_1_0_0_1_0_0_1_0_0_1_0_0_1_0 = {
   { nir_search_value_variable, 32 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_1_0_0_1_0_0_1_0_0_1_0.value, &search228_1_0_0_1_0_0_1_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_1_0_0_1_0_0_1_0_0_0.value, &search228_1_0_0_1_0_0_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xff00ff00 /* 4278255360 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_1_0_0_1_0_0_1_0_0.value, &search228_1_0_0_1_0_0_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_1_0_0_1_0_0_1_0.value, &search228_1_0_0_1_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_1_0_0_1_0_0_0.value, &search228_1_0_0_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xf0f0f0f0 /* 4042322160 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_1_0_0_1_0_0.value, &search228_1_0_0_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x4 /* 4 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_1_0_0_1_0.value, &search228_1_0_0_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_1_0_0_0.value, &search228_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xcccccccc /* 3435973836 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0_1_0_0.value, &search228_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x2 /* 2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0_0_1_0.value, &search228_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_1_0_0_0.value, &search228_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xaaaaaaaa /* 2863311530 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &search228_1_0_0.value, &search228_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search228_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search228_1_0.value, &search228_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search228 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &search228_0.value, &search228_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace228_0 = {
   { nir_search_value_variable, 0 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace228 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bitfield_reverse,
   { &replace228_0.value },
};

static const struct transform nir_opt_algebraic_ior_xforms[] = {
   { &search92, &replace92.value, 0 },
   { &search93, &replace93.value, 0 },
   { &search94, &replace94.value, 0 },
   { &search95, &replace95.value, 0 },
   { &search122, &replace122.value, 0 },
   { &search123, &replace123.value, 0 },
   { &search124, &replace124.value, 0 },
   { &search130, &replace130.value, 0 },
   { &search228, &replace228.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search190_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search190_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search190 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ussub_4x8,
   { &search190_0.value, &search190_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace190 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search191_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search191_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x1 /* -1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search191 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ussub_4x8,
   { &search191_0.value, &search191_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace191 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

static const struct transform nir_opt_algebraic_ussub_4x8_xforms[] = {
   { &search190, &replace190.value, 0 },
   { &search191, &replace191.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search225_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search225 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_unpack_snorm_4x8,
   { &search225_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace225_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace225_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0xbff0000000000000L /* -1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace225_1_1_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace225_1_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225_1_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_i8,
   { &replace225_1_1_0_0_0_0.value, &replace225_1_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace225_1_1_0_0_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace225_1_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225_1_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_i8,
   { &replace225_1_1_0_0_1_0.value, &replace225_1_1_0_0_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace225_1_1_0_0_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace225_1_1_0_0_2_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x2 /* 2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225_1_1_0_0_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_i8,
   { &replace225_1_1_0_0_2_0.value, &replace225_1_1_0_0_2_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace225_1_1_0_0_3_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace225_1_1_0_0_3_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x3 /* 3 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225_1_1_0_0_3 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_i8,
   { &replace225_1_1_0_0_3_0.value, &replace225_1_1_0_0_3_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225_1_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_vec4,
   { &replace225_1_1_0_0_0.value, &replace225_1_1_0_0_1.value, &replace225_1_1_0_0_2.value, &replace225_1_1_0_0_3.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_i2f,
   { &replace225_1_1_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace225_1_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x405fc00000000000 /* 127.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdiv,
   { &replace225_1_1_0.value, &replace225_1_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace225_1_0.value, &replace225_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace225 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace225_0.value, &replace225_1.value },
};

static const struct transform nir_opt_algebraic_unpack_snorm_4x8_xforms[] = {
   { &search225, &replace225.value, 36 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search208_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search208_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search208 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frem,
   { &search208_0.value, &search208_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace208_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace208_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace208_1_1_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace208_1_1_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace208_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdiv,
   { &replace208_1_1_0_0.value, &replace208_1_1_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace208_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ftrunc,
   { &replace208_1_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace208_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace208_1_0.value, &replace208_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace208 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &replace208_0.value, &replace208_1.value },
};

static const struct transform nir_opt_algebraic_frem_xforms[] = {
   { &search208, &replace208.value, 21 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search222_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search222 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_unpack_unorm_2x16,
   { &search222_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace222_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace222_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace222_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u16,
   { &replace222_0_0_0_0.value, &replace222_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace222_0_0_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace222_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace222_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u16,
   { &replace222_0_0_1_0.value, &replace222_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace222_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_vec2,
   { &replace222_0_0_0.value, &replace222_0_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace222_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_u2f,
   { &replace222_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace222_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x40efffe000000000 /* 65535.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace222 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdiv,
   { &replace222_0.value, &replace222_1.value },
};

static const struct transform nir_opt_algebraic_unpack_unorm_2x16_xforms[] = {
   { &search222, &replace222.value, 33 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search224_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search224 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_unpack_snorm_2x16,
   { &search224_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace224_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace224_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0xbff0000000000000L /* -1.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace224_1_1_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace224_1_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace224_1_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_i16,
   { &replace224_1_1_0_0_0_0.value, &replace224_1_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace224_1_1_0_0_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace224_1_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace224_1_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_i16,
   { &replace224_1_1_0_0_1_0.value, &replace224_1_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace224_1_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_vec2,
   { &replace224_1_1_0_0_0.value, &replace224_1_1_0_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace224_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_i2f,
   { &replace224_1_1_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace224_1_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x40dfffc000000000 /* 32767.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace224_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdiv,
   { &replace224_1_1_0.value, &replace224_1_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace224_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace224_1_0.value, &replace224_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace224 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace224_0.value, &replace224_1.value },
};

static const struct transform nir_opt_algebraic_unpack_snorm_2x16_xforms[] = {
   { &search224, &replace224.value, 35 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search79_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search79_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search79 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &search79_0.value, &search79_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace79 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_imax_xforms[] = {
   { &search79, &replace79.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search84_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search84 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &search84_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace84_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace84_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace84_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace84_0_0.value, &replace84_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace84_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace84 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace84_0.value, &replace84_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search85_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search85_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &search85_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search85 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &search85_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace85_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace85 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &replace85_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search108_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search108_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search108_0_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search108_0_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search108_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search108_0_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search108_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search108_0_0.value, &search108_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search108 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &search108_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace108_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace108_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace108_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ior,
   { &replace108_0_0.value, &replace108_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace108 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &replace108_0.value },
};

static const struct transform nir_opt_algebraic_fsat_xforms[] = {
   { &search84, &replace84.value, 10 },
   { &search85, &replace85.value, 0 },
   { &search108, &replace108.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search217_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search217_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search217 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u16,
   { &search217_0.value, &search217_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace217_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace217_0_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace217_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace217_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace217_0_1_0.value, &replace217_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace217_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &replace217_0_0.value, &replace217_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace217_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xffff /* 65535 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace217 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iand,
   { &replace217_0.value, &replace217_1.value },
};

static const struct transform nir_opt_algebraic_extract_u16_xforms[] = {
   { &search217, &replace217.value, 28 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search68_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search68_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search68_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search68_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search68 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search68_0.value, &search68_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace68_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace68 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &replace68_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search70_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search70_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search70_0_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search70_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search70_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search70_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search70 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search70_0.value, &search70_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace70_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace70_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace70 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace70_0.value, &replace70_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search231_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search231_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search231_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search231_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search231_0_0.value, &search231_0_1.value, &search231_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search231_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search231 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search231_0.value, &search231_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace231_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace231_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace231_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace231_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace231_1_0.value, &replace231_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace231_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace231_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace231_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace231_2_0.value, &replace231_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace231 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace231_0.value, &replace231_1.value, &replace231_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search232_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search232_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search232_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search232_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search232_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search232_1_0.value, &search232_1_1.value, &search232_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search232 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &search232_0.value, &search232_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace232_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace232_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace232_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace232_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace232_1_0.value, &replace232_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace232_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace232_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace232_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace232_2_0.value, &replace232_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace232 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace232_0.value, &replace232_1.value, &replace232_2.value },
};

static const struct transform nir_opt_algebraic_fge_xforms[] = {
   { &search68, &replace68.value, 0 },
   { &search70, &replace70.value, 0 },
   { &search231, &replace231.value, 0 },
   { &search232, &replace232.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search151_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search151_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &search151_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search151 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_frcp,
   { &search151_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace151_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace151_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace151_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace151 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fexp2,
   { &replace151_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search160_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search160_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frcp,
   { &search160_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search160 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_frcp,
   { &search160_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace160 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search161_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search161_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsqrt,
   { &search161_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search161 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_frcp,
   { &search161_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace161_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace161 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frsq,
   { &replace161_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search163_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search163_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_frsq,
   { &search163_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search163 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_frcp,
   { &search163_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace163_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace163 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsqrt,
   { &replace163_0.value },
};

static const struct transform nir_opt_algebraic_frcp_xforms[] = {
   { &search151, &replace151.value, 0 },
   { &search160, &replace160.value, 0 },
   { &search161, &replace161.value, 0 },
   { &search163, &replace163.value, 16 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search125_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search125_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search125 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fxor,
   { &search125_0.value, &search125_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace125 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

static const struct transform nir_opt_algebraic_fxor_xforms[] = {
   { &search125, &replace125.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search135_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search135_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search135 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search135_0.value, &search135_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace135 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search136_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search136_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search136 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search136_0.value, &search136_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace136 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search182_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search182_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x18 /* 24 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search182 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search182_0.value, &search182_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace182_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace182_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x3 /* 3 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace182 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &replace182_0.value, &replace182_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search186_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search186_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search186 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &search186_0.value, &search186_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace186_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace186_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace186 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u16,
   { &replace186_0.value, &replace186_1.value },
};

static const struct transform nir_opt_algebraic_ushr_xforms[] = {
   { &search135, &replace135.value, 0 },
   { &search136, &replace136.value, 0 },
   { &search182, &replace182.value, 17 },
   { &search186, &replace186.value, 18 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search139_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search139_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &search139_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search139 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fexp2,
   { &search139_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace139 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search142_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search142_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &search142_0_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search142_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search142_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search142_0_0.value, &search142_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search142 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fexp2,
   { &search142_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace142_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace142_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace142 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fpow,
   { &replace142_0.value, &replace142_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search143_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search143_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &search143_0_0_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search143_0_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search143_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search143_0_0_0.value, &search143_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search143_0_1_0_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search143_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flog2,
   { &search143_0_1_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search143_0_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search143_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &search143_0_1_0.value, &search143_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search143_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search143_0_0.value, &search143_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search143 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fexp2,
   { &search143_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace143_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace143_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace143_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fpow,
   { &replace143_0_0.value, &replace143_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace143_1_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace143_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace143_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fpow,
   { &replace143_1_0.value, &replace143_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace143 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fmul,
   { &replace143_0.value, &replace143_1.value },
};

static const struct transform nir_opt_algebraic_fexp2_xforms[] = {
   { &search139, &replace139.value, 0 },
   { &search142, &replace142.value, 13 },
   { &search143, &replace143.value, 13 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search133_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search133_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search133 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishr,
   { &search133_0.value, &search133_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace133 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search134_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search134_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search134 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishr,
   { &search134_0.value, &search134_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace134 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

static const struct transform nir_opt_algebraic_ishr_xforms[] = {
   { &search133, &replace133.value, 0 },
   { &search134, &replace134.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search100_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search100_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search100 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_slt,
   { &search100_0.value, &search100_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace100_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace100_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace100_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace100_0_0.value, &replace100_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace100 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &replace100_0.value },
};

static const struct transform nir_opt_algebraic_slt_xforms[] = {
   { &search100, &replace100.value, 11 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search176_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search176_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ftrunc,
   { &search176_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search176 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_f2i,
   { &search176_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace176_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace176 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_f2i,
   { &replace176_0.value },
};

static const struct transform nir_opt_algebraic_f2i_xforms[] = {
   { &search176, &replace176.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search69_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search69_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search69_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fabs,
   { &search69_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search69 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search69_0.value, &search69_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace69_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace69_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace69 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace69_0.value, &replace69_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search110_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search110_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search110_0_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search110_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search110_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search110_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search110 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search110_0.value, &search110_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace110 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search111_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search111_0_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search111_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2f,
   { &search111_0_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search111_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &search111_0_0.value, &search111_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search111_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search111 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search111_0.value, &search111_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace111 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search229_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search229_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search229_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search229_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search229_0_0.value, &search229_0_1.value, &search229_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search229_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search229 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search229_0.value, &search229_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace229_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace229_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace229_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace229_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace229_1_0.value, &replace229_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace229_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace229_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace229_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace229_2_0.value, &replace229_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace229 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace229_0.value, &replace229_1.value, &replace229_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search230_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search230_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search230_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search230_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search230_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search230_1_0.value, &search230_1_1.value, &search230_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search230 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search230_0.value, &search230_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace230_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace230_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace230_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace230_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace230_1_0.value, &replace230_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace230_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace230_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace230_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace230_2_0.value, &replace230_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace230 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace230_0.value, &replace230_1.value, &replace230_2.value },
};

static const struct transform nir_opt_algebraic_flt_xforms[] = {
   { &search69, &replace69.value, 0 },
   { &search110, &replace110.value, 0 },
   { &search111, &replace111.value, 0 },
   { &search229, &replace229.value, 0 },
   { &search230, &replace230.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search116_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search116_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search116 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &search116_0.value, &search116_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace116 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_FALSE /* False */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search245_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search245_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search245_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search245_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search245_0_0.value, &search245_0_1.value, &search245_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search245_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search245 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &search245_0.value, &search245_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace245_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace245_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace245_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace245_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &replace245_1_0.value, &replace245_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace245_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace245_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace245_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &replace245_2_0.value, &replace245_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace245 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace245_0.value, &replace245_1.value, &replace245_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search246_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search246_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search246_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search246_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search246_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search246_1_0.value, &search246_1_1.value, &search246_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search246 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &search246_0.value, &search246_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace246_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace246_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace246_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace246_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &replace246_1_0.value, &replace246_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace246_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace246_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace246_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &replace246_2_0.value, &replace246_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace246 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace246_0.value, &replace246_1.value, &replace246_2.value },
};

static const struct transform nir_opt_algebraic_ult_xforms[] = {
   { &search116, &replace116.value, 0 },
   { &search245, &replace245.value, 0 },
   { &search246, &replace246.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search188_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search188_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search188_1_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search188_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &search188_1_0.value, &search188_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search188 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fsub,
   { &search188_0.value, &search188_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace188_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace188_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace188 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace188_0.value, &replace188_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search192_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search192_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search192 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &search192_0.value, &search192_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace192_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace192_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace192_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace192_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace192 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &replace192_0.value, &replace192_1.value },
};

static const struct transform nir_opt_algebraic_fsub_xforms[] = {
   { &search188, &replace188.value, 0 },
   { &search192, &replace192.value, 19 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search10_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search10_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search10_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search10 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search10_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace10 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search194_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search194 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search194_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace194_0 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace194_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace194 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsub,
   { &replace194_0.value, &replace194_1.value },
};

static const struct transform nir_opt_algebraic_fneg_xforms[] = {
   { &search10, &replace10.value, 0 },
   { &search194, &replace194.value, 20 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search104_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search104_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &search104_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search104_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search104 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &search104_0.value, &search104_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace104_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace104_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace104 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace104_0.value, &replace104_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search235_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search235_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search235_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search235_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search235_0_0.value, &search235_0_1.value, &search235_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search235_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search235 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &search235_0.value, &search235_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace235_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace235_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace235_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace235_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace235_1_0.value, &replace235_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace235_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace235_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace235_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace235_2_0.value, &replace235_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace235 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace235_0.value, &replace235_1.value, &replace235_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search236_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search236_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search236_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search236_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search236_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search236_1_0.value, &search236_1_1.value, &search236_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search236 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &search236_0.value, &search236_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace236_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace236_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace236_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace236_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace236_1_0.value, &replace236_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace236_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace236_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace236_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace236_2_0.value, &replace236_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace236 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace236_0.value, &replace236_1.value, &replace236_2.value },
};

static const struct transform nir_opt_algebraic_fne_xforms[] = {
   { &search104, &replace104.value, 0 },
   { &search235, &replace235.value, 0 },
   { &search236, &replace236.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search15_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search15_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &search15_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search15 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &search15_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace15_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace15 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &replace15_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search16_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search16_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ineg,
   { &search16_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search16 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &search16_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace16_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace16 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &replace16_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search181_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search181_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2i,
   { &search181_0_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search181 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &search181_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace181_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace181 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2i,
   { &replace181_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search199_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search199_0_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search199_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &search199_0_0.value, &search199_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search199 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &search199_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace199_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace199 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iabs,
   { &replace199_0.value },
};

static const struct transform nir_opt_algebraic_iabs_xforms[] = {
   { &search15, &replace15.value, 0 },
   { &search16, &replace16.value, 0 },
   { &search181, &replace181.value, 0 },
   { &search199, &replace199.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search223_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search223 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_unpack_unorm_4x8,
   { &search223_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace223_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace223_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace223_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &replace223_0_0_0_0.value, &replace223_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace223_0_0_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace223_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace223_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &replace223_0_0_1_0.value, &replace223_0_0_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace223_0_0_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace223_0_0_2_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x2 /* 2 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace223_0_0_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &replace223_0_0_2_0.value, &replace223_0_0_2_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace223_0_0_3_0 = {
   { nir_search_value_variable, 0 },
   0, /* v */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace223_0_0_3_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x3 /* 3 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace223_0_0_3 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_u8,
   { &replace223_0_0_3_0.value, &replace223_0_0_3_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace223_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_vec4,
   { &replace223_0_0_0.value, &replace223_0_0_1.value, &replace223_0_0_2.value, &replace223_0_0_3.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace223_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_u2f,
   { &replace223_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace223_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x406fe00000000000 /* 255.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace223 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdiv,
   { &replace223_0.value, &replace223_1.value },
};

static const struct transform nir_opt_algebraic_unpack_unorm_4x8_xforms[] = {
   { &search223, &replace223.value, 34 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search76_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search76_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search76 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &search76_0.value, &search76_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace76 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search82_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search82_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search82_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &search82_0_0.value, &search82_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search82_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x3ff0000000000000 /* 1.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search82 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fmin,
   { &search82_0.value, &search82_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace82_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace82 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &replace82_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search86_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search86_0_0_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search86_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &search86_0_0_0_0.value, &search86_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search86_0_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search86_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &search86_0_0_0.value, &search86_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search86_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search86_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &search86_0_0.value, &search86_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search86_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search86 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &search86_0.value, &search86_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace86_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace86_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace86_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmax,
   { &replace86_0_0.value, &replace86_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace86_1 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace86 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace86_0.value, &replace86_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search90_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search90_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &search90_0_0.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search90_1 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   true,
   nir_type_invalid,
   (is_zero_to_one),
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search90 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &search90_0.value, &search90_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace90_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace90_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace90_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmin,
   { &replace90_0_0.value, &replace90_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace90 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fsat,
   { &replace90_0.value },
};

static const struct transform nir_opt_algebraic_fmin_xforms[] = {
   { &search76, &replace76.value, 0 },
   { &search82, &replace82.value, 9 },
   { &search86, &replace86.value, 0 },
   { &search90, &replace90.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search115_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search115_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search115 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &search115_0.value, &search115_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace115 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_FALSE /* False */ },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search165_0 = {
   { nir_search_value_variable, 32 },
   0, /* a */
   false,
   nir_type_bool32,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search165_1 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_TRUE /* True */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search165 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &search165_0.value, &search165_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace165_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace165 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_inot,
   { &replace165_0.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search166_0 = {
   { nir_search_value_variable, 32 },
   0, /* a */
   false,
   nir_type_bool32,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search166_1 = {
   { nir_search_value_constant, 32 },
   nir_type_bool32, { NIR_FALSE /* False */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search166 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &search166_0.value, &search166_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace166 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search243_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search243_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search243_0_2 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search243_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search243_0_0.value, &search243_0_1.value, &search243_0_2.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search243_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search243 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &search243_0.value, &search243_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace243_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace243_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace243_1_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace243_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &replace243_1_0.value, &replace243_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace243_2_0 = {
   { nir_search_value_variable, 0 },
   2, /* c */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace243_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* d */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace243_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &replace243_2_0.value, &replace243_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace243 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace243_0.value, &replace243_1.value, &replace243_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search244_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search244_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search244_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   true,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search244_1_2 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   true,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search244_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &search244_1_0.value, &search244_1_1.value, &search244_1_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search244 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &search244_0.value, &search244_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace244_0 = {
   { nir_search_value_variable, 0 },
   1, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace244_1_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace244_1_1 = {
   { nir_search_value_variable, 0 },
   2, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace244_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &replace244_1_0.value, &replace244_1_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace244_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* d */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace244_2_1 = {
   { nir_search_value_variable, 0 },
   3, /* c */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace244_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ine,
   { &replace244_2_0.value, &replace244_2_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace244 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace244_0.value, &replace244_1.value, &replace244_2.value },
};

static const struct transform nir_opt_algebraic_ine_xforms[] = {
   { &search115, &replace115.value, 0 },
   { &search165, &replace165.value, 0 },
   { &search166, &replace166.value, 0 },
   { &search243, &replace243.value, 0 },
   { &search244, &replace244.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search2_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search2_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_udiv,
   { &search2_0.value, &search2_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace2 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search6_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search6_1 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   true,
   nir_type_invalid,
   (is_pos_power_of_two),
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search6 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_udiv,
   { &search6_0.value, &search6_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace6_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace6_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace6_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_find_lsb,
   { &replace6_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace6 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ushr,
   { &replace6_0.value, &replace6_1.value },
};

static const struct transform nir_opt_algebraic_udiv_xforms[] = {
   { &search2, &replace2.value, 0 },
   { &search6, &replace6.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search214_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search214_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search214 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_i8,
   { &search214_0.value, &search214_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace214_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace214_0_1_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x3 /* 3 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace214_0_1_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace214_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &replace214_0_1_0_0.value, &replace214_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace214_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x8 /* 8 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace214_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace214_0_1_0.value, &replace214_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace214_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace214_0_0.value, &replace214_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace214_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x18 /* 24 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace214 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishr,
   { &replace214_0.value, &replace214_1.value },
};

static const struct transform nir_opt_algebraic_extract_i8_xforms[] = {
   { &search214, &replace214.value, 27 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search209_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search209_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search209 = {
   { nir_search_value_expression, 32 },
   false,
   nir_op_uadd_carry,
   { &search209_0.value, &search209_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace209_0_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace209_0_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace209_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace209_0_0_0.value, &replace209_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace209_0_1 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace209_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ult,
   { &replace209_0_0.value, &replace209_0_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace209 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_b2i,
   { &replace209_0.value },
};

static const struct transform nir_opt_algebraic_uadd_carry_xforms[] = {
   { &search209, &replace209.value, 23 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search212_0 = {
   { nir_search_value_variable, 0 },
   0, /* value */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search212_1 = {
   { nir_search_value_variable, 0 },
   1, /* offset */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search212_2 = {
   { nir_search_value_variable, 0 },
   2, /* bits */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search212 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ibitfield_extract,
   { &search212_0.value, &search212_1.value, &search212_2.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace212_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1f /* 31 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace212_0_1 = {
   { nir_search_value_variable, 0 },
   2, /* bits */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace212_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ilt,
   { &replace212_0_0.value, &replace212_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace212_1 = {
   { nir_search_value_variable, 0 },
   0, /* value */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace212_2_0 = {
   { nir_search_value_variable, 0 },
   0, /* value */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace212_2_1 = {
   { nir_search_value_variable, 0 },
   1, /* offset */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace212_2_2 = {
   { nir_search_value_variable, 0 },
   2, /* bits */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace212_2 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ibfe,
   { &replace212_2_0.value, &replace212_2_1.value, &replace212_2_2.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace212 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_bcsel,
   { &replace212_0.value, &replace212_1.value, &replace212_2.value },
};

static const struct transform nir_opt_algebraic_ibitfield_extract_xforms[] = {
   { &search212, &replace212.value, 26 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search226_0 = {
   { nir_search_value_variable, 0 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search226_1 = {
   { nir_search_value_variable, 0 },
   1, /* exp */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search226 = {
   { nir_search_value_expression, 32 },
   false,
   nir_op_ldexp,
   { &search226_0.value, &search226_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace226_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace226_0_1_0_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* exp */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_0_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0xfc /* -252 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_0_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &replace226_0_1_0_0_0_0_0.value, &replace226_0_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_0_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xfe /* 254 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_0_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &replace226_0_1_0_0_0_0.value, &replace226_0_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_0_1_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishr,
   { &replace226_0_1_0_0_0.value, &replace226_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x7f /* 127 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace226_0_1_0_0.value, &replace226_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x17 /* 23 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace226_0_1_0.value, &replace226_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace226_0_0.value, &replace226_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace226_1_0_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* exp */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0xfc /* -252 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &replace226_1_0_0_0_0_0.value, &replace226_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xfe /* 254 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &replace226_1_0_0_0_0.value, &replace226_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace226_1_0_0_1_0_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* exp */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_1_0_0_1_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0xfc /* -252 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &replace226_1_0_0_1_0_0_0.value, &replace226_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0xfe /* 254 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &replace226_1_0_0_1_0_0.value, &replace226_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishr,
   { &replace226_1_0_0_1_0.value, &replace226_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &replace226_1_0_0_0.value, &replace226_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x7f /* 127 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace226_1_0_0.value, &replace226_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace226_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x17 /* 23 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace226_1_0.value, &replace226_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace226 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace226_0.value, &replace226_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search227_0 = {
   { nir_search_value_variable, 0 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search227_1 = {
   { nir_search_value_variable, 0 },
   1, /* exp */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search227 = {
   { nir_search_value_expression, 64 },
   false,
   nir_op_ldexp,
   { &search227_0.value, &search227_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace227_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* x */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_0_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace227_0_1_1_0_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* exp */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_0_1_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x7fc /* -2044 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_0_1_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &replace227_0_1_1_0_0_0_0_0.value, &replace227_0_1_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_0_1_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x7fe /* 2046 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_0_1_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &replace227_0_1_1_0_0_0_0.value, &replace227_0_1_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_0_1_1_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_0_1_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishr,
   { &replace227_0_1_1_0_0_0.value, &replace227_0_1_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_0_1_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x3ff /* 1023 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_0_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace227_0_1_1_0_0.value, &replace227_0_1_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_0_1_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x14 /* 20 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_0_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace227_0_1_1_0.value, &replace227_0_1_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_double_2x32_split,
   { &replace227_0_1_0.value, &replace227_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace227_0_0.value, &replace227_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_1_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x0 /* 0 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace227_1_1_0_0_0_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* exp */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_1_1_0_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x7fc /* -2044 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1_1_0_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &replace227_1_1_0_0_0_0_0.value, &replace227_1_1_0_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_1_1_0_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x7fe /* 2046 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1_1_0_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &replace227_1_1_0_0_0_0.value, &replace227_1_1_0_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace227_1_1_0_0_1_0_0_0 = {
   { nir_search_value_variable, 0 },
   1, /* exp */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_1_1_0_0_1_0_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { -0x7fc /* -2044 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1_1_0_0_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imax,
   { &replace227_1_1_0_0_1_0_0_0.value, &replace227_1_1_0_0_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_1_1_0_0_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x7fe /* 2046 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1_1_0_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imin,
   { &replace227_1_1_0_0_1_0_0.value, &replace227_1_1_0_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_1_1_0_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1_1_0_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishr,
   { &replace227_1_1_0_0_1_0.value, &replace227_1_1_0_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1_1_0_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &replace227_1_1_0_0_0.value, &replace227_1_1_0_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_1_1_0_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x3ff /* 1023 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_iadd,
   { &replace227_1_1_0_0.value, &replace227_1_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace227_1_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x14 /* 20 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace227_1_1_0.value, &replace227_1_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_pack_double_2x32_split,
   { &replace227_1_0.value, &replace227_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace227 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fmul,
   { &replace227_0.value, &replace227_1.value },
};

static const struct transform nir_opt_algebraic_ldexp_xforms[] = {
   { &search226, &replace226.value, 0 },
   { &search227, &replace227.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search216_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search216_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search216 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_extract_i16,
   { &search216_0.value, &search216_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace216_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace216_0_1_0_0 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x1 /* 1 */ },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace216_0_1_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace216_0_1_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_isub,
   { &replace216_0_1_0_0.value, &replace216_0_1_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace216_0_1_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace216_0_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_imul,
   { &replace216_0_1_0.value, &replace216_0_1_1.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace216_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishl,
   { &replace216_0_0.value, &replace216_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant replace216_1 = {
   { nir_search_value_constant, 0 },
   nir_type_int, { 0x10 /* 16 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace216 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_ishr,
   { &replace216_0.value, &replace216_1.value },
};

static const struct transform nir_opt_algebraic_extract_i16_xforms[] = {
   { &search216, &replace216.value, 28 },
};

static bool
nir_opt_algebraic_block(nir_block *block, const bool *condition_flags,
                   void *mem_ctx)
{
   bool progress = false;

   nir_foreach_instr_reverse_safe(instr, block) {
      if (instr->type != nir_instr_type_alu)
         continue;

      nir_alu_instr *alu = nir_instr_as_alu(instr);
      if (!alu->dest.dest.is_ssa)
         continue;

      switch (alu->op) {
      case nir_op_iand:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_iand_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_iand_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_i2b:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_i2b_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_i2b_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ixor:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ixor_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ixor_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_seq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_seq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_seq_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ilt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ilt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ilt_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_umod:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_umod_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_umod_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_imul:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_imul_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_imul_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_uge:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_uge_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_uge_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ineg:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ineg_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ineg_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fmul:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fmul_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fmul_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ubitfield_extract:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ubitfield_extract_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ubitfield_extract_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ffma:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ffma_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ffma_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_umin:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_umin_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_umin_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_umax:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_umax_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_umax_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_bcsel:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_bcsel_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_bcsel_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_sge:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_sge_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_sge_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fsqrt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fsqrt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fsqrt_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_iadd:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_iadd_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_iadd_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_pack_unorm_2x16:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_pack_unorm_2x16_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_pack_unorm_2x16_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_pack_unorm_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_pack_unorm_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_pack_unorm_4x8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_pack_snorm_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_pack_snorm_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_pack_snorm_4x8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fand:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fand_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fand_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fabs:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fabs_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fabs_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_imod:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_imod_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_imod_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ieq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ieq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ieq_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_imin:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_imin_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_imin_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_frsq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_frsq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_frsq_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_usadd_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_usadd_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_usadd_4x8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_idiv:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_idiv_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_idiv_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_extract_u8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_extract_u8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_extract_u8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_pack_snorm_2x16:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_pack_snorm_2x16_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_pack_snorm_2x16_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fpow:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fpow_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fpow_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ige:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ige_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ige_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fdiv:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fdiv_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fdiv_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ffract:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ffract_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ffract_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fadd:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fadd_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fadd_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ishl:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ishl_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ishl_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_usub_borrow:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_usub_borrow_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_usub_borrow_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_flog2:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_flog2_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_flog2_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_inot:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_inot_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_inot_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_sne:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_sne_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_sne_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fmod:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fmod_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fmod_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_f2u:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_f2u_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_f2u_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fcsel:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fcsel_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fcsel_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_isub:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_isub_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_isub_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fmax:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fmax_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fmax_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_umul_unorm_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_umul_unorm_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_umul_unorm_4x8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_bitfield_insert:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_bitfield_insert_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_bitfield_insert_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_feq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_feq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_feq_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_flrp:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_flrp_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_flrp_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ior:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ior_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ior_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ussub_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ussub_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ussub_4x8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_unpack_snorm_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_unpack_snorm_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_unpack_snorm_4x8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_frem:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_frem_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_frem_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_unpack_unorm_2x16:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_unpack_unorm_2x16_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_unpack_unorm_2x16_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_unpack_snorm_2x16:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_unpack_snorm_2x16_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_unpack_snorm_2x16_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_imax:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_imax_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_imax_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fsat:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fsat_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fsat_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_extract_u16:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_extract_u16_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_extract_u16_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fge:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fge_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fge_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_frcp:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_frcp_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_frcp_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fxor:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fxor_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fxor_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ushr:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ushr_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ushr_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fexp2:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fexp2_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fexp2_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ishr:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ishr_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ishr_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_slt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_slt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_slt_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_f2i:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_f2i_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_f2i_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_flt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_flt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_flt_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ult:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ult_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ult_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fsub:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fsub_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fsub_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fneg:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fneg_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fneg_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fne:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fne_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fne_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_iabs:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_iabs_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_iabs_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_unpack_unorm_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_unpack_unorm_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_unpack_unorm_4x8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fmin:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fmin_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fmin_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ine:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ine_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ine_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_udiv:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_udiv_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_udiv_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_extract_i8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_extract_i8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_extract_i8_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_uadd_carry:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_uadd_carry_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_uadd_carry_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ibitfield_extract:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ibitfield_extract_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ibitfield_extract_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_ldexp:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ldexp_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ldexp_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_extract_i16:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_extract_i16_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_extract_i16_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      default:
         break;
      }
   }

   return progress;
}

static bool
nir_opt_algebraic_impl(nir_function_impl *impl, const bool *condition_flags)
{
   void *mem_ctx = ralloc_parent(impl);
   bool progress = false;

   nir_foreach_block_reverse(block, impl) {
      progress |= nir_opt_algebraic_block(block, condition_flags, mem_ctx);
   }

   if (progress)
      nir_metadata_preserve(impl, nir_metadata_block_index |
                                  nir_metadata_dominance);

   return progress;
}


bool
nir_opt_algebraic(nir_shader *shader)
{
   bool progress = false;
   bool condition_flags[37];
   const nir_shader_compiler_options *options = shader->options;
   (void) options;

   condition_flags[0] = true;
   condition_flags[1] = options->lower_idiv;
   condition_flags[2] = options->lower_flrp32;
   condition_flags[3] = options->lower_flrp64;
   condition_flags[4] = options->lower_ffract;
   condition_flags[5] = !options->lower_flrp32;
   condition_flags[6] = !options->lower_flrp64;
   condition_flags[7] = options->lower_ffma;
   condition_flags[8] = options->fuse_ffma;
   condition_flags[9] = !options->lower_fsat;
   condition_flags[10] = options->lower_fsat;
   condition_flags[11] = options->lower_scmp;
   condition_flags[12] = options->lower_fpow;
   condition_flags[13] = !options->lower_fpow;
   condition_flags[14] = options->lower_fdiv;
   condition_flags[15] = options->lower_fsqrt;
   condition_flags[16] = !options->lower_fsqrt;
   condition_flags[17] = !options->lower_extract_byte;
   condition_flags[18] = !options->lower_extract_word;
   condition_flags[19] = options->lower_sub;
   condition_flags[20] = options->lower_negate;
   condition_flags[21] = options->lower_fmod32;
   condition_flags[22] = options->lower_fmod64;
   condition_flags[23] = options->lower_uadd_carry;
   condition_flags[24] = options->lower_usub_borrow;
   condition_flags[25] = options->lower_bitfield_insert;
   condition_flags[26] = options->lower_bitfield_extract;
   condition_flags[27] = options->lower_extract_byte;
   condition_flags[28] = options->lower_extract_word;
   condition_flags[29] = options->lower_pack_unorm_2x16;
   condition_flags[30] = options->lower_pack_unorm_4x8;
   condition_flags[31] = options->lower_pack_snorm_2x16;
   condition_flags[32] = options->lower_pack_snorm_4x8;
   condition_flags[33] = options->lower_unpack_unorm_2x16;
   condition_flags[34] = options->lower_unpack_unorm_4x8;
   condition_flags[35] = options->lower_unpack_snorm_2x16;
   condition_flags[36] = options->lower_unpack_snorm_4x8;

   nir_foreach_function(function, shader) {
      if (function->impl)
         progress |= nir_opt_algebraic_impl(function->impl, condition_flags);
   }

   return progress;
}


#include "nir.h"
#include "nir_search.h"

#ifndef NIR_OPT_ALGEBRAIC_STRUCT_DEFS
#define NIR_OPT_ALGEBRAIC_STRUCT_DEFS

struct transform {
   const nir_search_expression *search;
   const nir_search_value *replace;
   unsigned condition_offset;
};

#endif

   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search255_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search255_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search255 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdot4,
   { &search255_0.value, &search255_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace255_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace255_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace255 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdot_replicated4,
   { &replace255_0.value, &replace255_1.value },
};

static const struct transform nir_opt_algebraic_late_fdot4_xforms[] = {
   { &search255, &replace255.value, 37 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search249_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search249_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search249_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search249_0_0.value, &search249_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search249_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search249 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &search249_0.value, &search249_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace249_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace249_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace249_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace249_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace249 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_flt,
   { &replace249_0.value, &replace249_1.value },
};

static const struct transform nir_opt_algebraic_late_flt_xforms[] = {
   { &search249, &replace249.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search253_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search253_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search253 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdot2,
   { &search253_0.value, &search253_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace253_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace253_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace253 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdot_replicated2,
   { &replace253_0.value, &replace253_1.value },
};

static const struct transform nir_opt_algebraic_late_fdot2_xforms[] = {
   { &search253, &replace253.value, 37 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search254_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search254_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search254 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdot3,
   { &search254_0.value, &search254_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace254_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace254_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace254 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdot_replicated3,
   { &replace254_0.value, &replace254_1.value },
};

static const struct transform nir_opt_algebraic_late_fdot3_xforms[] = {
   { &search254, &replace254.value, 37 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search252_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search252_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search252_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search252_0_0.value, &search252_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search252_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search252 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fne,
   { &search252_0.value, &search252_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace252_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace252_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace252_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace252_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace252 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fne,
   { &replace252_0.value, &replace252_1.value },
};

static const struct transform nir_opt_algebraic_late_fne_xforms[] = {
   { &search252, &replace252.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search251_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search251_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search251_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search251_0_0.value, &search251_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search251_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search251 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_feq,
   { &search251_0.value, &search251_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace251_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace251_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace251_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace251_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace251 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_feq,
   { &replace251_0.value, &replace251_1.value },
};

static const struct transform nir_opt_algebraic_late_feq_xforms[] = {
   { &search251, &replace251.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search250_0_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search250_0_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search250_0 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fadd,
   { &search250_0_0.value, &search250_0_1.value },
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_constant search250_1 = {
   { nir_search_value_constant, 0 },
   nir_type_float, { 0x0 /* 0.0 */ },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search250 = {
   { nir_search_value_expression, 0 },
   true,
   nir_op_fge,
   { &search250_0.value, &search250_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace250_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace250_1_0 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace250_1 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fneg,
   { &replace250_1_0.value },
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace250 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fge,
   { &replace250_0.value, &replace250_1.value },
};

static const struct transform nir_opt_algebraic_late_fge_xforms[] = {
   { &search250, &replace250.value, 0 },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search256_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable search256_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression search256 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdph,
   { &search256_0.value, &search256_1.value },
};
   
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace256_0 = {
   { nir_search_value_variable, 0 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
};

#include "compiler/nir/nir_search_helpers.h"
static const nir_search_variable replace256_1 = {
   { nir_search_value_variable, 0 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
};
#include "compiler/nir/nir_search_helpers.h"
static const nir_search_expression replace256 = {
   { nir_search_value_expression, 0 },
   false,
   nir_op_fdph_replicated,
   { &replace256_0.value, &replace256_1.value },
};

static const struct transform nir_opt_algebraic_late_fdph_xforms[] = {
   { &search256, &replace256.value, 37 },
};

static bool
nir_opt_algebraic_late_block(nir_block *block, const bool *condition_flags,
                   void *mem_ctx)
{
   bool progress = false;

   nir_foreach_instr_reverse_safe(instr, block) {
      if (instr->type != nir_instr_type_alu)
         continue;

      nir_alu_instr *alu = nir_instr_as_alu(instr);
      if (!alu->dest.dest.is_ssa)
         continue;

      switch (alu->op) {
      case nir_op_fdot4:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fdot4_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fdot4_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_flt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_flt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_flt_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fdot2:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fdot2_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fdot2_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fdot3:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fdot3_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fdot3_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fne:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fne_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fne_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_feq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_feq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_feq_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fge:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fge_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fge_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      case nir_op_fdph:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fdph_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fdph_xforms[i];
            if (condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  mem_ctx)) {
               progress = true;
               break;
            }
         }
         break;
      default:
         break;
      }
   }

   return progress;
}

static bool
nir_opt_algebraic_late_impl(nir_function_impl *impl, const bool *condition_flags)
{
   void *mem_ctx = ralloc_parent(impl);
   bool progress = false;

   nir_foreach_block_reverse(block, impl) {
      progress |= nir_opt_algebraic_late_block(block, condition_flags, mem_ctx);
   }

   if (progress)
      nir_metadata_preserve(impl, nir_metadata_block_index |
                                  nir_metadata_dominance);

   return progress;
}


bool
nir_opt_algebraic_late(nir_shader *shader)
{
   bool progress = false;
   bool condition_flags[38];
   const nir_shader_compiler_options *options = shader->options;
   (void) options;

   condition_flags[0] = true;
   condition_flags[1] = options->lower_idiv;
   condition_flags[2] = options->lower_flrp32;
   condition_flags[3] = options->lower_flrp64;
   condition_flags[4] = options->lower_ffract;
   condition_flags[5] = !options->lower_flrp32;
   condition_flags[6] = !options->lower_flrp64;
   condition_flags[7] = options->lower_ffma;
   condition_flags[8] = options->fuse_ffma;
   condition_flags[9] = !options->lower_fsat;
   condition_flags[10] = options->lower_fsat;
   condition_flags[11] = options->lower_scmp;
   condition_flags[12] = options->lower_fpow;
   condition_flags[13] = !options->lower_fpow;
   condition_flags[14] = options->lower_fdiv;
   condition_flags[15] = options->lower_fsqrt;
   condition_flags[16] = !options->lower_fsqrt;
   condition_flags[17] = !options->lower_extract_byte;
   condition_flags[18] = !options->lower_extract_word;
   condition_flags[19] = options->lower_sub;
   condition_flags[20] = options->lower_negate;
   condition_flags[21] = options->lower_fmod32;
   condition_flags[22] = options->lower_fmod64;
   condition_flags[23] = options->lower_uadd_carry;
   condition_flags[24] = options->lower_usub_borrow;
   condition_flags[25] = options->lower_bitfield_insert;
   condition_flags[26] = options->lower_bitfield_extract;
   condition_flags[27] = options->lower_extract_byte;
   condition_flags[28] = options->lower_extract_word;
   condition_flags[29] = options->lower_pack_unorm_2x16;
   condition_flags[30] = options->lower_pack_unorm_4x8;
   condition_flags[31] = options->lower_pack_snorm_2x16;
   condition_flags[32] = options->lower_pack_snorm_4x8;
   condition_flags[33] = options->lower_unpack_unorm_2x16;
   condition_flags[34] = options->lower_unpack_unorm_4x8;
   condition_flags[35] = options->lower_unpack_snorm_2x16;
   condition_flags[36] = options->lower_unpack_snorm_4x8;
   condition_flags[37] = options->fdot_replicates;

   nir_foreach_function(function, shader) {
      if (function->impl)
         progress |= nir_opt_algebraic_late_impl(function->impl, condition_flags);
   }

   return progress;
}

