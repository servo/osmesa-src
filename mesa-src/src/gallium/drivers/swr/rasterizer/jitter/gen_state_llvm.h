/****************************************************************************
* Copyright (C) 2014-2018 Intel Corporation.   All Rights Reserved.
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
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*
* @file gen_state_llvm.h
*
* @brief auto-generated file
*
* DO NOT EDIT
*
* Generation Command Line:
*   ./rasterizer/codegen/gen_llvm_types.py
*     --input
*     ./rasterizer/core/state.h
*     --output
*     rasterizer/jitter/gen_state_llvm.h
*
******************************************************************************/
#pragma once

namespace SwrJit
{
    using namespace llvm;

    INLINE static StructType *Gen_simdvertex(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("simdvertex");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* attrib */ ArrayType::get(ArrayType::get(VectorType::get(Type::getFloatTy(ctx), 8), 4), SWR_VTX_NUM_SLOTS),
            };

            pRetType = StructType::create(members, "simdvertex", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("attrib", 199),
            };
            pJitMgr->CreateDebugStructType(pRetType, "simdvertex", pFile, 197, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t simdvertex_attrib = 0;

    INLINE static StructType *Gen_simd16vertex(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("simd16vertex");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* attrib */ ArrayType::get(ArrayType::get(VectorType::get(Type::getFloatTy(ctx), 16), 4), SWR_VTX_NUM_SLOTS),
            };

            pRetType = StructType::create(members, "simd16vertex", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("attrib", 205),
            };
            pJitMgr->CreateDebugStructType(pRetType, "simd16vertex", pFile, 203, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t simd16vertex_attrib = 0;

    INLINE static StructType *Gen_SIMDVERTEX_T(JitManager* pJitMgr)
    {
        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SIMDVERTEX_T");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
            };

            pRetType = StructType::create(members, "SIMDVERTEX_T", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
            };
            pJitMgr->CreateDebugStructType(pRetType, "SIMDVERTEX_T", pFile, 211, dbgMembers);
        }

        return pRetType;
    }


    INLINE static StructType *Gen_SWR_VS_CONTEXT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_VS_CONTEXT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* pVin            */ PointerType::get(Gen_simdvertex(pJitMgr), 0),
                /* pVout           */ PointerType::get(Gen_simdvertex(pJitMgr), 0),
                /* InstanceID      */ Type::getInt32Ty(ctx),
                /* VertexID        */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* mask            */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* AlternateOffset */ Type::getInt32Ty(ctx),
                /* mask16          */ VectorType::get(Type::getInt32Ty(ctx), 16),
                /* VertexID16      */ VectorType::get(Type::getInt32Ty(ctx), 16),
            };

            pRetType = StructType::create(members, "SWR_VS_CONTEXT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("pVin",            222),
                std::make_pair("pVout",           223),
                std::make_pair("InstanceID",      225),
                std::make_pair("VertexID",        226),
                std::make_pair("mask",            227),
                std::make_pair("AlternateOffset", 229),
                std::make_pair("mask16",          231),
                std::make_pair("VertexID16",      232),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_VS_CONTEXT", pFile, 220, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_VS_CONTEXT_pVin            = 0;
    static const uint32_t SWR_VS_CONTEXT_pVout           = 1;
    static const uint32_t SWR_VS_CONTEXT_InstanceID      = 2;
    static const uint32_t SWR_VS_CONTEXT_VertexID        = 3;
    static const uint32_t SWR_VS_CONTEXT_mask            = 4;
    static const uint32_t SWR_VS_CONTEXT_AlternateOffset = 5;
    static const uint32_t SWR_VS_CONTEXT_mask16          = 6;
    static const uint32_t SWR_VS_CONTEXT_VertexID16      = 7;

    INLINE static StructType *Gen_ScalarAttrib(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("ScalarAttrib");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* x */ Type::getFloatTy(ctx),
                /* y */ Type::getFloatTy(ctx),
                /* z */ Type::getFloatTy(ctx),
                /* w */ Type::getFloatTy(ctx),
            };

            pRetType = StructType::create(members, "ScalarAttrib", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("x", 244),
                std::make_pair("y", 245),
                std::make_pair("z", 246),
                std::make_pair("w", 247),
            };
            pJitMgr->CreateDebugStructType(pRetType, "ScalarAttrib", pFile, 242, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t ScalarAttrib_x = 0;
    static const uint32_t ScalarAttrib_y = 1;
    static const uint32_t ScalarAttrib_z = 2;
    static const uint32_t ScalarAttrib_w = 3;

    INLINE static StructType *Gen_ScalarCPoint(JitManager* pJitMgr)
    {
        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("ScalarCPoint");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* attrib */ ArrayType::get(Gen_ScalarAttrib(pJitMgr), SWR_VTX_NUM_SLOTS),
            };

            pRetType = StructType::create(members, "ScalarCPoint", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("attrib", 252),
            };
            pJitMgr->CreateDebugStructType(pRetType, "ScalarCPoint", pFile, 250, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t ScalarCPoint_attrib = 0;

    INLINE static StructType *Gen_SWR_TESSELLATION_FACTORS(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_TESSELLATION_FACTORS");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* OuterTessFactors */ ArrayType::get(Type::getFloatTy(ctx), SWR_NUM_OUTER_TESS_FACTORS),
                /* InnerTessFactors */ ArrayType::get(Type::getFloatTy(ctx), SWR_NUM_INNER_TESS_FACTORS),
            };

            pRetType = StructType::create(members, "SWR_TESSELLATION_FACTORS", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("OuterTessFactors", 261),
                std::make_pair("InnerTessFactors", 262),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_TESSELLATION_FACTORS", pFile, 259, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_TESSELLATION_FACTORS_OuterTessFactors = 0;
    static const uint32_t SWR_TESSELLATION_FACTORS_InnerTessFactors = 1;

    INLINE static StructType *Gen_ScalarPatch(JitManager* pJitMgr)
    {
        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("ScalarPatch");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* tessFactors */ Gen_SWR_TESSELLATION_FACTORS(pJitMgr),
                /* cp          */ ArrayType::get(Gen_ScalarCPoint(pJitMgr), MAX_NUM_VERTS_PER_PRIM),
                /* patchData   */ Gen_ScalarCPoint(pJitMgr),
            };

            pRetType = StructType::create(members, "ScalarPatch", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("tessFactors", 268),
                std::make_pair("cp",          269),
                std::make_pair("patchData",   270),
            };
            pJitMgr->CreateDebugStructType(pRetType, "ScalarPatch", pFile, 266, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t ScalarPatch_tessFactors = 0;
    static const uint32_t ScalarPatch_cp          = 1;
    static const uint32_t ScalarPatch_patchData   = 2;

    INLINE static StructType *Gen_SWR_HS_CONTEXT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_HS_CONTEXT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* vert        */ ArrayType::get(Gen_simdvertex(pJitMgr), MAX_NUM_VERTS_PER_PRIM),
                /* PrimitiveID */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* mask        */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* pCPout      */ PointerType::get(Gen_ScalarPatch(pJitMgr), 0),
            };

            pRetType = StructType::create(members, "SWR_HS_CONTEXT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("vert",        279),
                std::make_pair("PrimitiveID", 280),
                std::make_pair("mask",        281),
                std::make_pair("pCPout",      282),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_HS_CONTEXT", pFile, 277, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_HS_CONTEXT_vert        = 0;
    static const uint32_t SWR_HS_CONTEXT_PrimitiveID = 1;
    static const uint32_t SWR_HS_CONTEXT_mask        = 2;
    static const uint32_t SWR_HS_CONTEXT_pCPout      = 3;

    INLINE static StructType *Gen_SWR_DS_CONTEXT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_DS_CONTEXT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* PrimitiveID           */ Type::getInt32Ty(ctx),
                /* vectorOffset          */ Type::getInt32Ty(ctx),
                /* vectorStride          */ Type::getInt32Ty(ctx),
                /* outVertexAttribOffset */ Type::getInt32Ty(ctx),
                /* pCpIn                 */ PointerType::get(Gen_ScalarPatch(pJitMgr), 0),
                /* pDomainU              */ PointerType::get(VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth), 0),
                /* pDomainV              */ PointerType::get(VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth), 0),
                /* mask                  */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* pOutputData           */ PointerType::get(VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth), 0),
            };

            pRetType = StructType::create(members, "SWR_DS_CONTEXT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("PrimitiveID",           292),
                std::make_pair("vectorOffset",          293),
                std::make_pair("vectorStride",          294),
                std::make_pair("outVertexAttribOffset", 295),
                std::make_pair("pCpIn",                 296),
                std::make_pair("pDomainU",              297),
                std::make_pair("pDomainV",              298),
                std::make_pair("mask",                  299),
                std::make_pair("pOutputData",           300),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_DS_CONTEXT", pFile, 290, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_DS_CONTEXT_PrimitiveID           = 0;
    static const uint32_t SWR_DS_CONTEXT_vectorOffset          = 1;
    static const uint32_t SWR_DS_CONTEXT_vectorStride          = 2;
    static const uint32_t SWR_DS_CONTEXT_outVertexAttribOffset = 3;
    static const uint32_t SWR_DS_CONTEXT_pCpIn                 = 4;
    static const uint32_t SWR_DS_CONTEXT_pDomainU              = 5;
    static const uint32_t SWR_DS_CONTEXT_pDomainV              = 6;
    static const uint32_t SWR_DS_CONTEXT_mask                  = 7;
    static const uint32_t SWR_DS_CONTEXT_pOutputData           = 8;

    INLINE static StructType *Gen_SWR_GS_CONTEXT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_GS_CONTEXT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* pVerts          */ PointerType::get(ArrayType::get(VectorType::get(Type::getFloatTy(ctx), 8), 4), 0),
                /* inputVertStride */ Type::getInt32Ty(ctx),
                /* PrimitiveID     */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* InstanceID      */ Type::getInt32Ty(ctx),
                /* mask            */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* pStreams        */ ArrayType::get(PointerType::get(Type::getInt8Ty(ctx), 0), KNOB_SIMD_WIDTH),
            };

            pRetType = StructType::create(members, "SWR_GS_CONTEXT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("pVerts",          309),
                std::make_pair("inputVertStride", 310),
                std::make_pair("PrimitiveID",     311),
                std::make_pair("InstanceID",      312),
                std::make_pair("mask",            313),
                std::make_pair("pStreams",        314),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_GS_CONTEXT", pFile, 307, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_GS_CONTEXT_pVerts          = 0;
    static const uint32_t SWR_GS_CONTEXT_inputVertStride = 1;
    static const uint32_t SWR_GS_CONTEXT_PrimitiveID     = 2;
    static const uint32_t SWR_GS_CONTEXT_InstanceID      = 3;
    static const uint32_t SWR_GS_CONTEXT_mask            = 4;
    static const uint32_t SWR_GS_CONTEXT_pStreams        = 5;

    INLINE static StructType *Gen_PixelPositions(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("PixelPositions");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* UL       */ VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth),
                /* center   */ VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth),
                /* sample   */ VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth),
                /* centroid */ VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth),
            };

            pRetType = StructType::create(members, "PixelPositions", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("UL",       319),
                std::make_pair("center",   320),
                std::make_pair("sample",   321),
                std::make_pair("centroid", 322),
            };
            pJitMgr->CreateDebugStructType(pRetType, "PixelPositions", pFile, 317, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t PixelPositions_UL       = 0;
    static const uint32_t PixelPositions_center   = 1;
    static const uint32_t PixelPositions_sample   = 2;
    static const uint32_t PixelPositions_centroid = 3;

    INLINE static StructType *Gen_SWR_PS_CONTEXT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_PS_CONTEXT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* vX                     */ Gen_PixelPositions(pJitMgr),
                /* vY                     */ Gen_PixelPositions(pJitMgr),
                /* vZ                     */ VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth),
                /* activeMask             */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* inputMask              */ VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth),
                /* oMask                  */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* vI                     */ Gen_PixelPositions(pJitMgr),
                /* vJ                     */ Gen_PixelPositions(pJitMgr),
                /* vOneOverW              */ Gen_PixelPositions(pJitMgr),
                /* pAttribs               */ PointerType::get(Type::getFloatTy(ctx), 0),
                /* pPerspAttribs          */ PointerType::get(Type::getFloatTy(ctx), 0),
                /* pRecipW                */ PointerType::get(Type::getFloatTy(ctx), 0),
                /* I                      */ PointerType::get(Type::getFloatTy(ctx), 0),
                /* J                      */ PointerType::get(Type::getFloatTy(ctx), 0),
                /* recipDet               */ Type::getFloatTy(ctx),
                /* pSamplePosX            */ PointerType::get(Type::getFloatTy(ctx), 0),
                /* pSamplePosY            */ PointerType::get(Type::getFloatTy(ctx), 0),
                /* shaded                 */ ArrayType::get(ArrayType::get(VectorType::get(Type::getFloatTy(ctx), 8), 4), SWR_NUM_RENDERTARGETS),
                /* frontFace              */ Type::getInt32Ty(ctx),
                /* sampleIndex            */ Type::getInt32Ty(ctx),
                /* renderTargetArrayIndex */ Type::getInt32Ty(ctx),
                /* rasterizerSampleCount  */ Type::getInt32Ty(ctx),
                /* pColorBuffer           */ ArrayType::get(PointerType::get(Type::getInt8Ty(ctx), 0), SWR_NUM_RENDERTARGETS),
            };

            pRetType = StructType::create(members, "SWR_PS_CONTEXT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("vX",                     333),
                std::make_pair("vY",                     334),
                std::make_pair("vZ",                     335),
                std::make_pair("activeMask",             336),
                std::make_pair("inputMask",              337),
                std::make_pair("oMask",                  338),
                std::make_pair("vI",                     340),
                std::make_pair("vJ",                     341),
                std::make_pair("vOneOverW",              342),
                std::make_pair("pAttribs",               344),
                std::make_pair("pPerspAttribs",          345),
                std::make_pair("pRecipW",                346),
                std::make_pair("I",                      347),
                std::make_pair("J",                      348),
                std::make_pair("recipDet",               349),
                std::make_pair("pSamplePosX",            350),
                std::make_pair("pSamplePosY",            351),
                std::make_pair("shaded",                 352),
                std::make_pair("frontFace",              355),
                std::make_pair("sampleIndex",            356),
                std::make_pair("renderTargetArrayIndex", 357),
                std::make_pair("rasterizerSampleCount",  358),
                std::make_pair("pColorBuffer",           360),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_PS_CONTEXT", pFile, 331, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_PS_CONTEXT_vX                     = 0;
    static const uint32_t SWR_PS_CONTEXT_vY                     = 1;
    static const uint32_t SWR_PS_CONTEXT_vZ                     = 2;
    static const uint32_t SWR_PS_CONTEXT_activeMask             = 3;
    static const uint32_t SWR_PS_CONTEXT_inputMask              = 4;
    static const uint32_t SWR_PS_CONTEXT_oMask                  = 5;
    static const uint32_t SWR_PS_CONTEXT_vI                     = 6;
    static const uint32_t SWR_PS_CONTEXT_vJ                     = 7;
    static const uint32_t SWR_PS_CONTEXT_vOneOverW              = 8;
    static const uint32_t SWR_PS_CONTEXT_pAttribs               = 9;
    static const uint32_t SWR_PS_CONTEXT_pPerspAttribs          = 10;
    static const uint32_t SWR_PS_CONTEXT_pRecipW                = 11;
    static const uint32_t SWR_PS_CONTEXT_I                      = 12;
    static const uint32_t SWR_PS_CONTEXT_J                      = 13;
    static const uint32_t SWR_PS_CONTEXT_recipDet               = 14;
    static const uint32_t SWR_PS_CONTEXT_pSamplePosX            = 15;
    static const uint32_t SWR_PS_CONTEXT_pSamplePosY            = 16;
    static const uint32_t SWR_PS_CONTEXT_shaded                 = 17;
    static const uint32_t SWR_PS_CONTEXT_frontFace              = 18;
    static const uint32_t SWR_PS_CONTEXT_sampleIndex            = 19;
    static const uint32_t SWR_PS_CONTEXT_renderTargetArrayIndex = 20;
    static const uint32_t SWR_PS_CONTEXT_rasterizerSampleCount  = 21;
    static const uint32_t SWR_PS_CONTEXT_pColorBuffer           = 22;

    INLINE static StructType *Gen_SWR_CS_CONTEXT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_CS_CONTEXT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* tileCounter         */ Type::getInt32Ty(ctx),
                /* dispatchDims        */ ArrayType::get(Type::getInt32Ty(ctx), 3),
                /* pTGSM               */ PointerType::get(Type::getInt8Ty(ctx), 0),
                /* pSpillFillBuffer    */ PointerType::get(Type::getInt8Ty(ctx), 0),
                /* pScratchSpace       */ PointerType::get(Type::getInt8Ty(ctx), 0),
                /* scratchSpacePerSimd */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_CS_CONTEXT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("tileCounter",         389),
                std::make_pair("dispatchDims",        392),
                std::make_pair("pTGSM",               394),
                std::make_pair("pSpillFillBuffer",    396),
                std::make_pair("pScratchSpace",       398),
                std::make_pair("scratchSpacePerSimd", 401),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_CS_CONTEXT", pFile, 367, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_CS_CONTEXT_tileCounter         = 0;
    static const uint32_t SWR_CS_CONTEXT_dispatchDims        = 1;
    static const uint32_t SWR_CS_CONTEXT_pTGSM               = 2;
    static const uint32_t SWR_CS_CONTEXT_pSpillFillBuffer    = 3;
    static const uint32_t SWR_CS_CONTEXT_pScratchSpace       = 4;
    static const uint32_t SWR_CS_CONTEXT_scratchSpacePerSimd = 5;

    INLINE static StructType *Gen_SWR_SURFACE_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_SURFACE_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* xpBaseAddress       */ Type::getInt64Ty(ctx),
                /* type                */ Type::getInt32Ty(ctx),
                /* format              */ Type::getInt32Ty(ctx),
                /* width               */ Type::getInt32Ty(ctx),
                /* height              */ Type::getInt32Ty(ctx),
                /* depth               */ Type::getInt32Ty(ctx),
                /* numSamples          */ Type::getInt32Ty(ctx),
                /* samplePattern       */ Type::getInt32Ty(ctx),
                /* pitch               */ Type::getInt32Ty(ctx),
                /* qpitch              */ Type::getInt32Ty(ctx),
                /* minLod              */ Type::getInt32Ty(ctx),
                /* maxLod              */ Type::getInt32Ty(ctx),
                /* resourceMinLod      */ Type::getFloatTy(ctx),
                /* lod                 */ Type::getInt32Ty(ctx),
                /* arrayIndex          */ Type::getInt32Ty(ctx),
                /* tileMode            */ Type::getInt32Ty(ctx),
                /* halign              */ Type::getInt32Ty(ctx),
                /* valign              */ Type::getInt32Ty(ctx),
                /* xOffset             */ Type::getInt32Ty(ctx),
                /* yOffset             */ Type::getInt32Ty(ctx),
                /* lodOffsets          */ ArrayType::get(ArrayType::get(Type::getInt32Ty(ctx), 15), 2),
                /* xpAuxBaseAddress    */ Type::getInt64Ty(ctx),
                /* auxMode             */ Type::getInt32Ty(ctx),
                /* bInterleavedSamples */ Type::getInt8Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_SURFACE_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("xpBaseAddress",       521),
                std::make_pair("type",                522),
                std::make_pair("format",              523),
                std::make_pair("width",               524),
                std::make_pair("height",              525),
                std::make_pair("depth",               526),
                std::make_pair("numSamples",          527),
                std::make_pair("samplePattern",       528),
                std::make_pair("pitch",               529),
                std::make_pair("qpitch",              530),
                std::make_pair("minLod",              531),
                std::make_pair("maxLod",              532),
                std::make_pair("resourceMinLod",      533),
                std::make_pair("lod",                 534),
                std::make_pair("arrayIndex",          535),
                std::make_pair("tileMode",            536),
                std::make_pair("halign",              537),
                std::make_pair("valign",              538),
                std::make_pair("xOffset",             539),
                std::make_pair("yOffset",             540),
                std::make_pair("lodOffsets",          542),
                std::make_pair("xpAuxBaseAddress",    544),
                std::make_pair("auxMode",             545),
                std::make_pair("bInterleavedSamples", 548),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_SURFACE_STATE", pFile, 519, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_SURFACE_STATE_xpBaseAddress       = 0;
    static const uint32_t SWR_SURFACE_STATE_type                = 1;
    static const uint32_t SWR_SURFACE_STATE_format              = 2;
    static const uint32_t SWR_SURFACE_STATE_width               = 3;
    static const uint32_t SWR_SURFACE_STATE_height              = 4;
    static const uint32_t SWR_SURFACE_STATE_depth               = 5;
    static const uint32_t SWR_SURFACE_STATE_numSamples          = 6;
    static const uint32_t SWR_SURFACE_STATE_samplePattern       = 7;
    static const uint32_t SWR_SURFACE_STATE_pitch               = 8;
    static const uint32_t SWR_SURFACE_STATE_qpitch              = 9;
    static const uint32_t SWR_SURFACE_STATE_minLod              = 10;
    static const uint32_t SWR_SURFACE_STATE_maxLod              = 11;
    static const uint32_t SWR_SURFACE_STATE_resourceMinLod      = 12;
    static const uint32_t SWR_SURFACE_STATE_lod                 = 13;
    static const uint32_t SWR_SURFACE_STATE_arrayIndex          = 14;
    static const uint32_t SWR_SURFACE_STATE_tileMode            = 15;
    static const uint32_t SWR_SURFACE_STATE_halign              = 16;
    static const uint32_t SWR_SURFACE_STATE_valign              = 17;
    static const uint32_t SWR_SURFACE_STATE_xOffset             = 18;
    static const uint32_t SWR_SURFACE_STATE_yOffset             = 19;
    static const uint32_t SWR_SURFACE_STATE_lodOffsets          = 20;
    static const uint32_t SWR_SURFACE_STATE_xpAuxBaseAddress    = 21;
    static const uint32_t SWR_SURFACE_STATE_auxMode             = 22;
    static const uint32_t SWR_SURFACE_STATE_bInterleavedSamples = 23;

    INLINE static StructType *Gen_SWR_VERTEX_BUFFER_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_VERTEX_BUFFER_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* xpData              */ Type::getInt64Ty(ctx),
                /* index               */ Type::getInt32Ty(ctx),
                /* pitch               */ Type::getInt32Ty(ctx),
                /* size                */ Type::getInt32Ty(ctx),
                /* minVertex           */ Type::getInt32Ty(ctx),
                /* maxVertex           */ Type::getInt32Ty(ctx),
                /* partialInboundsSize */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_VERTEX_BUFFER_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("xpData",              556),
                std::make_pair("index",               557),
                std::make_pair("pitch",               558),
                std::make_pair("size",                559),
                std::make_pair("minVertex",           560),
                std::make_pair("maxVertex",           561),
                std::make_pair("partialInboundsSize", 562),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_VERTEX_BUFFER_STATE", pFile, 554, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_VERTEX_BUFFER_STATE_xpData              = 0;
    static const uint32_t SWR_VERTEX_BUFFER_STATE_index               = 1;
    static const uint32_t SWR_VERTEX_BUFFER_STATE_pitch               = 2;
    static const uint32_t SWR_VERTEX_BUFFER_STATE_size                = 3;
    static const uint32_t SWR_VERTEX_BUFFER_STATE_minVertex           = 4;
    static const uint32_t SWR_VERTEX_BUFFER_STATE_maxVertex           = 5;
    static const uint32_t SWR_VERTEX_BUFFER_STATE_partialInboundsSize = 6;

    INLINE static StructType *Gen_SWR_INDEX_BUFFER_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_INDEX_BUFFER_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* pIndices */ PointerType::get(Type::getInt32Ty(ctx), 0),
                /* format   */ Type::getInt32Ty(ctx),
                /* size     */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_INDEX_BUFFER_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("pIndices", 567),
                std::make_pair("format",   569),
                std::make_pair("size",     570),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_INDEX_BUFFER_STATE", pFile, 565, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_INDEX_BUFFER_STATE_pIndices = 0;
    static const uint32_t SWR_INDEX_BUFFER_STATE_format   = 1;
    static const uint32_t SWR_INDEX_BUFFER_STATE_size     = 2;

    INLINE static StructType *Gen_SWR_FETCH_CONTEXT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_FETCH_CONTEXT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* pStreams      */ PointerType::get(Gen_SWR_VERTEX_BUFFER_STATE(pJitMgr), 0),
                /* pIndices      */ PointerType::get(Type::getInt32Ty(ctx), 0),
                /* pLastIndex    */ PointerType::get(Type::getInt32Ty(ctx), 0),
                /* CurInstance   */ Type::getInt32Ty(ctx),
                /* BaseVertex    */ Type::getInt32Ty(ctx),
                /* StartVertex   */ Type::getInt32Ty(ctx),
                /* StartInstance */ Type::getInt32Ty(ctx),
                /* VertexID      */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* CutMask       */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* VertexID2     */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
                /* CutMask2      */ VectorType::get(Type::getInt32Ty(ctx), pJitMgr->mVWidth),
            };

            pRetType = StructType::create(members, "SWR_FETCH_CONTEXT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("pStreams",      582),
                std::make_pair("pIndices",      583),
                std::make_pair("pLastIndex",    584),
                std::make_pair("CurInstance",   585),
                std::make_pair("BaseVertex",    586),
                std::make_pair("StartVertex",   587),
                std::make_pair("StartInstance", 588),
                std::make_pair("VertexID",      589),
                std::make_pair("CutMask",       590),
                std::make_pair("VertexID2",     594),
                std::make_pair("CutMask2",      595),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_FETCH_CONTEXT", pFile, 580, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_FETCH_CONTEXT_pStreams      = 0;
    static const uint32_t SWR_FETCH_CONTEXT_pIndices      = 1;
    static const uint32_t SWR_FETCH_CONTEXT_pLastIndex    = 2;
    static const uint32_t SWR_FETCH_CONTEXT_CurInstance   = 3;
    static const uint32_t SWR_FETCH_CONTEXT_BaseVertex    = 4;
    static const uint32_t SWR_FETCH_CONTEXT_StartVertex   = 5;
    static const uint32_t SWR_FETCH_CONTEXT_StartInstance = 6;
    static const uint32_t SWR_FETCH_CONTEXT_VertexID      = 7;
    static const uint32_t SWR_FETCH_CONTEXT_CutMask       = 8;
    static const uint32_t SWR_FETCH_CONTEXT_VertexID2     = 9;
    static const uint32_t SWR_FETCH_CONTEXT_CutMask2      = 10;

    INLINE static StructType *Gen_SWR_STREAMOUT_BUFFER(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_STREAMOUT_BUFFER");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* pBuffer       */ PointerType::get(Type::getInt32Ty(ctx), 0),
                /* pWriteOffset  */ PointerType::get(Type::getInt32Ty(ctx), 0),
                /* enable        */ Type::getInt8Ty(ctx),
                /* soWriteEnable */ Type::getInt8Ty(ctx),
                /* bufferSize    */ Type::getInt32Ty(ctx),
                /* pitch         */ Type::getInt32Ty(ctx),
                /* streamOffset  */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_STREAMOUT_BUFFER", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("pBuffer",       649),
                std::make_pair("pWriteOffset",  652),
                std::make_pair("enable",        654),
                std::make_pair("soWriteEnable", 655),
                std::make_pair("bufferSize",    658),
                std::make_pair("pitch",         661),
                std::make_pair("streamOffset",  664),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_STREAMOUT_BUFFER", pFile, 646, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_STREAMOUT_BUFFER_pBuffer       = 0;
    static const uint32_t SWR_STREAMOUT_BUFFER_pWriteOffset  = 1;
    static const uint32_t SWR_STREAMOUT_BUFFER_enable        = 2;
    static const uint32_t SWR_STREAMOUT_BUFFER_soWriteEnable = 3;
    static const uint32_t SWR_STREAMOUT_BUFFER_bufferSize    = 4;
    static const uint32_t SWR_STREAMOUT_BUFFER_pitch         = 5;
    static const uint32_t SWR_STREAMOUT_BUFFER_streamOffset  = 6;

    INLINE static StructType *Gen_SWR_STREAMOUT_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_STREAMOUT_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* soEnable           */ Type::getInt8Ty(ctx),
                /* streamEnable       */ ArrayType::get(Type::getInt8Ty(ctx), MAX_SO_STREAMS),
                /* rasterizerDisable  */ Type::getInt8Ty(ctx),
                /* streamToRasterizer */ Type::getInt32Ty(ctx),
                /* streamMasks        */ ArrayType::get(Type::getInt32Ty(ctx), MAX_SO_STREAMS),
                /* streamNumEntries   */ ArrayType::get(Type::getInt32Ty(ctx), MAX_SO_STREAMS),
                /* vertexAttribOffset */ ArrayType::get(Type::getInt32Ty(ctx), MAX_SO_STREAMS),
            };

            pRetType = StructType::create(members, "SWR_STREAMOUT_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("soEnable",           673),
                std::make_pair("streamEnable",       676),
                std::make_pair("rasterizerDisable",  679),
                std::make_pair("streamToRasterizer", 682),
                std::make_pair("streamMasks",        687),
                std::make_pair("streamNumEntries",   691),
                std::make_pair("vertexAttribOffset", 694),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_STREAMOUT_STATE", pFile, 670, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_STREAMOUT_STATE_soEnable           = 0;
    static const uint32_t SWR_STREAMOUT_STATE_streamEnable       = 1;
    static const uint32_t SWR_STREAMOUT_STATE_rasterizerDisable  = 2;
    static const uint32_t SWR_STREAMOUT_STATE_streamToRasterizer = 3;
    static const uint32_t SWR_STREAMOUT_STATE_streamMasks        = 4;
    static const uint32_t SWR_STREAMOUT_STATE_streamNumEntries   = 5;
    static const uint32_t SWR_STREAMOUT_STATE_vertexAttribOffset = 6;

    INLINE static StructType *Gen_SWR_STREAMOUT_CONTEXT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_STREAMOUT_CONTEXT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* pPrimData            */ PointerType::get(Type::getInt32Ty(ctx), 0),
                /* pBuffer              */ ArrayType::get(PointerType::get(Gen_SWR_STREAMOUT_BUFFER(pJitMgr), 0), MAX_SO_STREAMS),
                /* numPrimsWritten      */ Type::getInt32Ty(ctx),
                /* numPrimStorageNeeded */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_STREAMOUT_CONTEXT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("pPrimData",            702),
                std::make_pair("pBuffer",              703),
                std::make_pair("numPrimsWritten",      706),
                std::make_pair("numPrimStorageNeeded", 709),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_STREAMOUT_CONTEXT", pFile, 700, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_STREAMOUT_CONTEXT_pPrimData            = 0;
    static const uint32_t SWR_STREAMOUT_CONTEXT_pBuffer              = 1;
    static const uint32_t SWR_STREAMOUT_CONTEXT_numPrimsWritten      = 2;
    static const uint32_t SWR_STREAMOUT_CONTEXT_numPrimStorageNeeded = 3;

    INLINE static StructType *Gen_SWR_GS_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_GS_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* gsEnable              */ Type::getInt8Ty(ctx),
                /* isSingleStream        */ Type::getInt8Ty(ctx),
                /* numInputAttribs       */ Type::getInt32Ty(ctx),
                /* inputVertStride       */ Type::getInt32Ty(ctx),
                /* outputTopology        */ Type::getInt32Ty(ctx),
                /* maxNumVerts           */ Type::getInt32Ty(ctx),
                /* instanceCount         */ Type::getInt32Ty(ctx),
                /* singleStreamID        */ Type::getInt32Ty(ctx),
                /* allocationSize        */ Type::getInt32Ty(ctx),
                /* vertexAttribOffset    */ Type::getInt32Ty(ctx),
                /* srcVertexAttribOffset */ Type::getInt32Ty(ctx),
                /* controlDataSize       */ Type::getInt32Ty(ctx),
                /* controlDataOffset     */ Type::getInt32Ty(ctx),
                /* outputVertexSize      */ Type::getInt32Ty(ctx),
                /* outputVertexOffset    */ Type::getInt32Ty(ctx),
                /* staticVertexCount     */ Type::getInt32Ty(ctx),
                /* pad                   */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_GS_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("gsEnable",              717),
                std::make_pair("isSingleStream",        722),
                std::make_pair("numInputAttribs",       726),
                std::make_pair("inputVertStride",       729),
                std::make_pair("outputTopology",        732),
                std::make_pair("maxNumVerts",           735),
                std::make_pair("instanceCount",         738),
                std::make_pair("singleStreamID",        742),
                std::make_pair("allocationSize",        745),
                std::make_pair("vertexAttribOffset",    748),
                std::make_pair("srcVertexAttribOffset", 751),
                std::make_pair("controlDataSize",       755),
                std::make_pair("controlDataOffset",     758),
                std::make_pair("outputVertexSize",      761),
                std::make_pair("outputVertexOffset",    764),
                std::make_pair("staticVertexCount",     768),
                std::make_pair("pad",                   770),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_GS_STATE", pFile, 715, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_GS_STATE_gsEnable              = 0;
    static const uint32_t SWR_GS_STATE_isSingleStream        = 1;
    static const uint32_t SWR_GS_STATE_numInputAttribs       = 2;
    static const uint32_t SWR_GS_STATE_inputVertStride       = 3;
    static const uint32_t SWR_GS_STATE_outputTopology        = 4;
    static const uint32_t SWR_GS_STATE_maxNumVerts           = 5;
    static const uint32_t SWR_GS_STATE_instanceCount         = 6;
    static const uint32_t SWR_GS_STATE_singleStreamID        = 7;
    static const uint32_t SWR_GS_STATE_allocationSize        = 8;
    static const uint32_t SWR_GS_STATE_vertexAttribOffset    = 9;
    static const uint32_t SWR_GS_STATE_srcVertexAttribOffset = 10;
    static const uint32_t SWR_GS_STATE_controlDataSize       = 11;
    static const uint32_t SWR_GS_STATE_controlDataOffset     = 12;
    static const uint32_t SWR_GS_STATE_outputVertexSize      = 13;
    static const uint32_t SWR_GS_STATE_outputVertexOffset    = 14;
    static const uint32_t SWR_GS_STATE_staticVertexCount     = 15;
    static const uint32_t SWR_GS_STATE_pad                   = 16;

    INLINE static StructType *Gen_SWR_TS_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_TS_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* tsEnable             */ Type::getInt8Ty(ctx),
                /* tsOutputTopology     */ Type::getInt32Ty(ctx),
                /* partitioning         */ Type::getInt32Ty(ctx),
                /* domain               */ Type::getInt32Ty(ctx),
                /* postDSTopology       */ Type::getInt32Ty(ctx),
                /* numHsInputAttribs    */ Type::getInt32Ty(ctx),
                /* numHsOutputAttribs   */ Type::getInt32Ty(ctx),
                /* numDsOutputAttribs   */ Type::getInt32Ty(ctx),
                /* dsAllocationSize     */ Type::getInt32Ty(ctx),
                /* dsOutVtxAttribOffset */ Type::getInt32Ty(ctx),
                /* vertexAttribOffset   */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_TS_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("tsEnable",             818),
                std::make_pair("tsOutputTopology",     820),
                std::make_pair("partitioning",         821),
                std::make_pair("domain",               822),
                std::make_pair("postDSTopology",       824),
                std::make_pair("numHsInputAttribs",    826),
                std::make_pair("numHsOutputAttribs",   827),
                std::make_pair("numDsOutputAttribs",   828),
                std::make_pair("dsAllocationSize",     829),
                std::make_pair("dsOutVtxAttribOffset", 830),
                std::make_pair("vertexAttribOffset",   833),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_TS_STATE", pFile, 816, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_TS_STATE_tsEnable             = 0;
    static const uint32_t SWR_TS_STATE_tsOutputTopology     = 1;
    static const uint32_t SWR_TS_STATE_partitioning         = 2;
    static const uint32_t SWR_TS_STATE_domain               = 3;
    static const uint32_t SWR_TS_STATE_postDSTopology       = 4;
    static const uint32_t SWR_TS_STATE_numHsInputAttribs    = 5;
    static const uint32_t SWR_TS_STATE_numHsOutputAttribs   = 6;
    static const uint32_t SWR_TS_STATE_numDsOutputAttribs   = 7;
    static const uint32_t SWR_TS_STATE_dsAllocationSize     = 8;
    static const uint32_t SWR_TS_STATE_dsOutVtxAttribOffset = 9;
    static const uint32_t SWR_TS_STATE_vertexAttribOffset   = 10;

    INLINE static StructType *Gen_SWR_RENDER_TARGET_BLEND_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_RENDER_TARGET_BLEND_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* writeDisableRed   */ Type::getInt8Ty(ctx),
                /* writeDisableGreen */ Type::getInt8Ty(ctx),
                /* writeDisableBlue  */ Type::getInt8Ty(ctx),
                /* writeDisableAlpha */ Type::getInt8Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_RENDER_TARGET_BLEND_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("writeDisableRed",   839),
                std::make_pair("writeDisableGreen", 840),
                std::make_pair("writeDisableBlue",  841),
                std::make_pair("writeDisableAlpha", 842),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_RENDER_TARGET_BLEND_STATE", pFile, 837, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_RENDER_TARGET_BLEND_STATE_writeDisableRed   = 0;
    static const uint32_t SWR_RENDER_TARGET_BLEND_STATE_writeDisableGreen = 1;
    static const uint32_t SWR_RENDER_TARGET_BLEND_STATE_writeDisableBlue  = 2;
    static const uint32_t SWR_RENDER_TARGET_BLEND_STATE_writeDisableAlpha = 3;

    INLINE static StructType *Gen_SWR_BLEND_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_BLEND_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* constantColor      */ ArrayType::get(Type::getFloatTy(ctx), 4),
                /* alphaTestReference */ Type::getInt32Ty(ctx),
                /* sampleMask         */ Type::getInt32Ty(ctx),
                /* sampleCount        */ Type::getInt32Ty(ctx),
                /* renderTarget       */ ArrayType::get(Gen_SWR_RENDER_TARGET_BLEND_STATE(pJitMgr), SWR_NUM_RENDERTARGETS),
            };

            pRetType = StructType::create(members, "SWR_BLEND_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("constantColor",      866),
                std::make_pair("alphaTestReference", 869),
                std::make_pair("sampleMask",         870),
                std::make_pair("sampleCount",        873),
                std::make_pair("renderTarget",       875),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_BLEND_STATE", pFile, 863, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_BLEND_STATE_constantColor      = 0;
    static const uint32_t SWR_BLEND_STATE_alphaTestReference = 1;
    static const uint32_t SWR_BLEND_STATE_sampleMask         = 2;
    static const uint32_t SWR_BLEND_STATE_sampleCount        = 3;
    static const uint32_t SWR_BLEND_STATE_renderTarget       = 4;

    INLINE static StructType *Gen_SWR_FRONTEND_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_FRONTEND_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* vpTransformDisable */ Type::getInt8Ty(ctx),
                /* bEnableCutIndex    */ Type::getInt8Ty(ctx),
                /* triFan             */ Type::getInt32Ty(ctx),
                /* lineStripList      */ Type::getInt32Ty(ctx),
                /* triStripList       */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_FRONTEND_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("vpTransformDisable", 909),
                std::make_pair("bEnableCutIndex",    910),
                std::make_pair("triFan",             915),
                std::make_pair("lineStripList",      916),
                std::make_pair("triStripList",       917),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_FRONTEND_STATE", pFile, 905, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_FRONTEND_STATE_vpTransformDisable = 0;
    static const uint32_t SWR_FRONTEND_STATE_bEnableCutIndex    = 1;
    static const uint32_t SWR_FRONTEND_STATE_triFan             = 2;
    static const uint32_t SWR_FRONTEND_STATE_lineStripList      = 3;
    static const uint32_t SWR_FRONTEND_STATE_triStripList       = 4;

    INLINE static StructType *Gen_SWR_VIEWPORT_MATRIX(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_VIEWPORT_MATRIX");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* m00 */ Type::getFloatTy(ctx),
                /* m11 */ Type::getFloatTy(ctx),
                /* m22 */ Type::getFloatTy(ctx),
                /* m30 */ Type::getFloatTy(ctx),
                /* m31 */ Type::getFloatTy(ctx),
                /* m32 */ Type::getFloatTy(ctx),
            };

            pRetType = StructType::create(members, "SWR_VIEWPORT_MATRIX", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("m00", 933),
                std::make_pair("m11", 934),
                std::make_pair("m22", 935),
                std::make_pair("m30", 936),
                std::make_pair("m31", 937),
                std::make_pair("m32", 938),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_VIEWPORT_MATRIX", pFile, 931, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_VIEWPORT_MATRIX_m00 = 0;
    static const uint32_t SWR_VIEWPORT_MATRIX_m11 = 1;
    static const uint32_t SWR_VIEWPORT_MATRIX_m22 = 2;
    static const uint32_t SWR_VIEWPORT_MATRIX_m30 = 3;
    static const uint32_t SWR_VIEWPORT_MATRIX_m31 = 4;
    static const uint32_t SWR_VIEWPORT_MATRIX_m32 = 5;

    INLINE static StructType *Gen_SWR_VIEWPORT_MATRICES(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_VIEWPORT_MATRICES");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* m00 */ ArrayType::get(Type::getFloatTy(ctx), KNOB_NUM_VIEWPORTS_SCISSORS),
                /* m11 */ ArrayType::get(Type::getFloatTy(ctx), KNOB_NUM_VIEWPORTS_SCISSORS),
                /* m22 */ ArrayType::get(Type::getFloatTy(ctx), KNOB_NUM_VIEWPORTS_SCISSORS),
                /* m30 */ ArrayType::get(Type::getFloatTy(ctx), KNOB_NUM_VIEWPORTS_SCISSORS),
                /* m31 */ ArrayType::get(Type::getFloatTy(ctx), KNOB_NUM_VIEWPORTS_SCISSORS),
                /* m32 */ ArrayType::get(Type::getFloatTy(ctx), KNOB_NUM_VIEWPORTS_SCISSORS),
            };

            pRetType = StructType::create(members, "SWR_VIEWPORT_MATRICES", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("m00", 946),
                std::make_pair("m11", 947),
                std::make_pair("m22", 948),
                std::make_pair("m30", 949),
                std::make_pair("m31", 950),
                std::make_pair("m32", 951),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_VIEWPORT_MATRICES", pFile, 944, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_VIEWPORT_MATRICES_m00 = 0;
    static const uint32_t SWR_VIEWPORT_MATRICES_m11 = 1;
    static const uint32_t SWR_VIEWPORT_MATRICES_m22 = 2;
    static const uint32_t SWR_VIEWPORT_MATRICES_m30 = 3;
    static const uint32_t SWR_VIEWPORT_MATRICES_m31 = 4;
    static const uint32_t SWR_VIEWPORT_MATRICES_m32 = 5;

    INLINE static StructType *Gen_SWR_VIEWPORT(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_VIEWPORT");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* x      */ Type::getFloatTy(ctx),
                /* y      */ Type::getFloatTy(ctx),
                /* width  */ Type::getFloatTy(ctx),
                /* height */ Type::getFloatTy(ctx),
                /* minZ   */ Type::getFloatTy(ctx),
                /* maxZ   */ Type::getFloatTy(ctx),
            };

            pRetType = StructType::create(members, "SWR_VIEWPORT", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("x",      959),
                std::make_pair("y",      960),
                std::make_pair("width",  961),
                std::make_pair("height", 962),
                std::make_pair("minZ",   963),
                std::make_pair("maxZ",   964),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_VIEWPORT", pFile, 957, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_VIEWPORT_x      = 0;
    static const uint32_t SWR_VIEWPORT_y      = 1;
    static const uint32_t SWR_VIEWPORT_width  = 2;
    static const uint32_t SWR_VIEWPORT_height = 3;
    static const uint32_t SWR_VIEWPORT_minZ   = 4;
    static const uint32_t SWR_VIEWPORT_maxZ   = 5;

    INLINE static StructType *Gen_SWR_MULTISAMPLE_POS(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_MULTISAMPLE_POS");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* _xi                */ ArrayType::get(Type::getInt32Ty(ctx), SWR_MAX_NUM_MULTISAMPLES),
                /* _yi                */ ArrayType::get(Type::getInt32Ty(ctx), SWR_MAX_NUM_MULTISAMPLES),
                /* _x                 */ ArrayType::get(Type::getFloatTy(ctx), SWR_MAX_NUM_MULTISAMPLES),
                /* _y                 */ ArrayType::get(Type::getFloatTy(ctx), SWR_MAX_NUM_MULTISAMPLES),
                /* _vXi               */ ArrayType::get(VectorType::get(Type::getInt32Ty(ctx), 4), SWR_MAX_NUM_MULTISAMPLES),
                /* _vYi               */ ArrayType::get(VectorType::get(Type::getInt32Ty(ctx), 4), SWR_MAX_NUM_MULTISAMPLES),
                /* _vX                */ ArrayType::get(VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth), SWR_MAX_NUM_MULTISAMPLES),
                /* _vY                */ ArrayType::get(VectorType::get(Type::getFloatTy(ctx), pJitMgr->mVWidth), SWR_MAX_NUM_MULTISAMPLES),
                /* tileSampleOffsetsX */ VectorType::get(Type::getInt32Ty(ctx), 4),
                /* tileSampleOffsetsY */ VectorType::get(Type::getInt32Ty(ctx), 4),
            };

            pRetType = StructType::create(members, "SWR_MULTISAMPLE_POS", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("_xi",                1028),
                std::make_pair("_yi",                1029),
                std::make_pair("_x",                 1030),
                std::make_pair("_y",                 1031),
                std::make_pair("_vXi",               1034),
                std::make_pair("_vYi",               1035),
                std::make_pair("_vX",                1036),
                std::make_pair("_vY",                1037),
                std::make_pair("tileSampleOffsetsX", 1038),
                std::make_pair("tileSampleOffsetsY", 1039),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_MULTISAMPLE_POS", pFile, 999, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_MULTISAMPLE_POS__xi                = 0;
    static const uint32_t SWR_MULTISAMPLE_POS__yi                = 1;
    static const uint32_t SWR_MULTISAMPLE_POS__x                 = 2;
    static const uint32_t SWR_MULTISAMPLE_POS__y                 = 3;
    static const uint32_t SWR_MULTISAMPLE_POS__vXi               = 4;
    static const uint32_t SWR_MULTISAMPLE_POS__vYi               = 5;
    static const uint32_t SWR_MULTISAMPLE_POS__vX                = 6;
    static const uint32_t SWR_MULTISAMPLE_POS__vY                = 7;
    static const uint32_t SWR_MULTISAMPLE_POS_tileSampleOffsetsX = 8;
    static const uint32_t SWR_MULTISAMPLE_POS_tileSampleOffsetsY = 9;

    INLINE static StructType *Gen_SWR_RASTSTATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_RASTSTATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* cullMode             */ Type::getInt32Ty(ctx),
                /* fillMode             */ Type::getInt32Ty(ctx),
                /* frontWinding         */ Type::getInt32Ty(ctx),
                /* scissorEnable        */ Type::getInt32Ty(ctx),
                /* depthClipEnable      */ Type::getInt32Ty(ctx),
                /* clipHalfZ            */ Type::getInt32Ty(ctx),
                /* pointParam           */ Type::getInt32Ty(ctx),
                /* pointSpriteEnable    */ Type::getInt32Ty(ctx),
                /* pointSpriteTopOrigin */ Type::getInt32Ty(ctx),
                /* forcedSampleCount    */ Type::getInt32Ty(ctx),
                /* pixelOffset          */ Type::getInt32Ty(ctx),
                /* depthBiasPreAdjusted */ Type::getInt32Ty(ctx),
                /* conservativeRast     */ Type::getInt32Ty(ctx),
                /* pointSize            */ Type::getFloatTy(ctx),
                /* lineWidth            */ Type::getFloatTy(ctx),
                /* depthBias            */ Type::getFloatTy(ctx),
                /* slopeScaledDepthBias */ Type::getFloatTy(ctx),
                /* depthBiasClamp       */ Type::getFloatTy(ctx),
                /* depthFormat          */ Type::getInt32Ty(ctx),
                /* sampleCount          */ Type::getInt32Ty(ctx),
                /* pixelLocation        */ Type::getInt32Ty(ctx),
                /* samplePositions      */ ArrayType::get(Type::getInt8Ty(ctx), sizeof(SWR_MULTISAMPLE_POS)),
                /* bIsCenterPattern     */ Type::getInt32Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_RASTSTATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("cullMode",             1047),
                std::make_pair("fillMode",             1048),
                std::make_pair("frontWinding",         1049),
                std::make_pair("scissorEnable",        1050),
                std::make_pair("depthClipEnable",      1051),
                std::make_pair("clipHalfZ",            1052),
                std::make_pair("pointParam",           1053),
                std::make_pair("pointSpriteEnable",    1054),
                std::make_pair("pointSpriteTopOrigin", 1055),
                std::make_pair("forcedSampleCount",    1056),
                std::make_pair("pixelOffset",          1057),
                std::make_pair("depthBiasPreAdjusted", 1058),
                std::make_pair("conservativeRast",     1059),
                std::make_pair("pointSize",            1061),
                std::make_pair("lineWidth",            1062),
                std::make_pair("depthBias",            1064),
                std::make_pair("slopeScaledDepthBias", 1065),
                std::make_pair("depthBiasClamp",       1066),
                std::make_pair("depthFormat",          1067),
                std::make_pair("sampleCount",          1070),
                std::make_pair("pixelLocation",        1071),
                std::make_pair("samplePositions",      1072),
                std::make_pair("bIsCenterPattern",     1073),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_RASTSTATE", pFile, 1045, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_RASTSTATE_cullMode             = 0;
    static const uint32_t SWR_RASTSTATE_fillMode             = 1;
    static const uint32_t SWR_RASTSTATE_frontWinding         = 2;
    static const uint32_t SWR_RASTSTATE_scissorEnable        = 3;
    static const uint32_t SWR_RASTSTATE_depthClipEnable      = 4;
    static const uint32_t SWR_RASTSTATE_clipHalfZ            = 5;
    static const uint32_t SWR_RASTSTATE_pointParam           = 6;
    static const uint32_t SWR_RASTSTATE_pointSpriteEnable    = 7;
    static const uint32_t SWR_RASTSTATE_pointSpriteTopOrigin = 8;
    static const uint32_t SWR_RASTSTATE_forcedSampleCount    = 9;
    static const uint32_t SWR_RASTSTATE_pixelOffset          = 10;
    static const uint32_t SWR_RASTSTATE_depthBiasPreAdjusted = 11;
    static const uint32_t SWR_RASTSTATE_conservativeRast     = 12;
    static const uint32_t SWR_RASTSTATE_pointSize            = 13;
    static const uint32_t SWR_RASTSTATE_lineWidth            = 14;
    static const uint32_t SWR_RASTSTATE_depthBias            = 15;
    static const uint32_t SWR_RASTSTATE_slopeScaledDepthBias = 16;
    static const uint32_t SWR_RASTSTATE_depthBiasClamp       = 17;
    static const uint32_t SWR_RASTSTATE_depthFormat          = 18;
    static const uint32_t SWR_RASTSTATE_sampleCount          = 19;
    static const uint32_t SWR_RASTSTATE_pixelLocation        = 20;
    static const uint32_t SWR_RASTSTATE_samplePositions      = 21;
    static const uint32_t SWR_RASTSTATE_bIsCenterPattern     = 22;

    INLINE static StructType *Gen_SWR_ATTRIB_SWIZZLE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_ATTRIB_SWIZZLE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* sourceAttrib          */ Type::getInt16Ty(ctx),
                /* constantSource        */ Type::getInt16Ty(ctx),
                /* componentOverrideMask */ Type::getInt16Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_ATTRIB_SWIZZLE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("sourceAttrib",          1087),
                std::make_pair("constantSource",        1088),
                std::make_pair("componentOverrideMask", 1089),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_ATTRIB_SWIZZLE", pFile, 1085, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_ATTRIB_SWIZZLE_sourceAttrib          = 0;
    static const uint32_t SWR_ATTRIB_SWIZZLE_constantSource        = 1;
    static const uint32_t SWR_ATTRIB_SWIZZLE_componentOverrideMask = 2;

    INLINE static StructType *Gen_SWR_BACKEND_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_BACKEND_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* constantInterpolationMask  */ Type::getInt32Ty(ctx),
                /* pointSpriteTexCoordMask    */ Type::getInt32Ty(ctx),
                /* swizzleEnable              */ Type::getInt8Ty(ctx),
                /* numAttributes              */ Type::getInt8Ty(ctx),
                /* numComponents              */ ArrayType::get(Type::getInt8Ty(ctx), 32),
                /* readRenderTargetArrayIndex */ Type::getInt8Ty(ctx),
                /* readViewportArrayIndex     */ Type::getInt8Ty(ctx),
                /* cullDistanceMask           */ Type::getInt8Ty(ctx),
                /* clipDistanceMask           */ Type::getInt8Ty(ctx),
                /* pad                        */ ArrayType::get(Type::getInt8Ty(ctx), 10),
                /* vertexAttribOffset         */ Type::getInt32Ty(ctx),
                /* vertexClipCullOffset       */ Type::getInt32Ty(ctx),
                /* swizzleMap                 */ ArrayType::get(Gen_SWR_ATTRIB_SWIZZLE(pJitMgr), 32),
            };

            pRetType = StructType::create(members, "SWR_BACKEND_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("constantInterpolationMask",  1095),
                std::make_pair("pointSpriteTexCoordMask",    1096),
                std::make_pair("swizzleEnable",              1098),
                std::make_pair("numAttributes",              1101),
                std::make_pair("numComponents",              1102),
                std::make_pair("readRenderTargetArrayIndex", 1104),
                std::make_pair("readViewportArrayIndex",     1105),
                std::make_pair("cullDistanceMask",           1108),
                std::make_pair("clipDistanceMask",           1109),
                std::make_pair("pad",                        1113),
                std::make_pair("vertexAttribOffset",         1116),
                std::make_pair("vertexClipCullOffset",       1119),
                std::make_pair("swizzleMap",                 1121),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_BACKEND_STATE", pFile, 1093, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_BACKEND_STATE_constantInterpolationMask  = 0;
    static const uint32_t SWR_BACKEND_STATE_pointSpriteTexCoordMask    = 1;
    static const uint32_t SWR_BACKEND_STATE_swizzleEnable              = 2;
    static const uint32_t SWR_BACKEND_STATE_numAttributes              = 3;
    static const uint32_t SWR_BACKEND_STATE_numComponents              = 4;
    static const uint32_t SWR_BACKEND_STATE_readRenderTargetArrayIndex = 5;
    static const uint32_t SWR_BACKEND_STATE_readViewportArrayIndex     = 6;
    static const uint32_t SWR_BACKEND_STATE_cullDistanceMask           = 7;
    static const uint32_t SWR_BACKEND_STATE_clipDistanceMask           = 8;
    static const uint32_t SWR_BACKEND_STATE_pad                        = 9;
    static const uint32_t SWR_BACKEND_STATE_vertexAttribOffset         = 10;
    static const uint32_t SWR_BACKEND_STATE_vertexClipCullOffset       = 11;
    static const uint32_t SWR_BACKEND_STATE_swizzleMap                 = 12;

    INLINE static StructType *Gen_SWR_PS_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_PS_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* pfnPixelShader   */ PointerType::get(Type::getInt8Ty(ctx), 0),
                /* killsPixel       */ Type::getInt32Ty(ctx),
                /* inputCoverage    */ Type::getInt32Ty(ctx),
                /* writesODepth     */ Type::getInt32Ty(ctx),
                /* usesSourceDepth  */ Type::getInt32Ty(ctx),
                /* shadingRate      */ Type::getInt32Ty(ctx),
                /* posOffset        */ Type::getInt32Ty(ctx),
                /* barycentricsMask */ Type::getInt32Ty(ctx),
                /* usesUAV          */ Type::getInt32Ty(ctx),
                /* forceEarlyZ      */ Type::getInt32Ty(ctx),
                /* renderTargetMask */ Type::getInt8Ty(ctx),
            };

            pRetType = StructType::create(members, "SWR_PS_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("pfnPixelShader",   1196),
                std::make_pair("killsPixel",       1199),
                std::make_pair("inputCoverage",    1200),
                std::make_pair("writesODepth",     1201),
                std::make_pair("usesSourceDepth",  1202),
                std::make_pair("shadingRate",      1203),
                std::make_pair("posOffset",        1204),
                std::make_pair("barycentricsMask", 1205),
                std::make_pair("usesUAV",          1206),
                std::make_pair("forceEarlyZ",      1207),
                std::make_pair("renderTargetMask", 1209),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_PS_STATE", pFile, 1193, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_PS_STATE_pfnPixelShader   = 0;
    static const uint32_t SWR_PS_STATE_killsPixel       = 1;
    static const uint32_t SWR_PS_STATE_inputCoverage    = 2;
    static const uint32_t SWR_PS_STATE_writesODepth     = 3;
    static const uint32_t SWR_PS_STATE_usesSourceDepth  = 4;
    static const uint32_t SWR_PS_STATE_shadingRate      = 5;
    static const uint32_t SWR_PS_STATE_posOffset        = 6;
    static const uint32_t SWR_PS_STATE_barycentricsMask = 7;
    static const uint32_t SWR_PS_STATE_usesUAV          = 8;
    static const uint32_t SWR_PS_STATE_forceEarlyZ      = 9;
    static const uint32_t SWR_PS_STATE_renderTargetMask = 10;

    INLINE static StructType *Gen_SWR_DEPTH_BOUNDS_STATE(JitManager* pJitMgr)
    {
        LLVMContext& ctx = pJitMgr->mContext;

        StructType* pRetType = pJitMgr->mpCurrentModule->getTypeByName("SWR_DEPTH_BOUNDS_STATE");
        if (pRetType == nullptr)
        {
            std::vector<Type*> members =
            {
                /* depthBoundsTestEnable   */ Type::getInt8Ty(ctx),
                /* depthBoundsTestMinValue */ Type::getFloatTy(ctx),
                /* depthBoundsTestMaxValue */ Type::getFloatTy(ctx),
            };

            pRetType = StructType::create(members, "SWR_DEPTH_BOUNDS_STATE", false);

            // Compute debug metadata
            llvm::DIBuilder builder(*pJitMgr->mpCurrentModule);
            llvm::DIFile* pFile = builder.createFile("state.h", "rasterizer/core");

            std::vector<std::pair<std::string, uint32_t>> dbgMembers =
            {
                std::make_pair("depthBoundsTestEnable",   1215),
                std::make_pair("depthBoundsTestMinValue", 1216),
                std::make_pair("depthBoundsTestMaxValue", 1217),
            };
            pJitMgr->CreateDebugStructType(pRetType, "SWR_DEPTH_BOUNDS_STATE", pFile, 1213, dbgMembers);
        }

        return pRetType;
    }

    static const uint32_t SWR_DEPTH_BOUNDS_STATE_depthBoundsTestEnable   = 0;
    static const uint32_t SWR_DEPTH_BOUNDS_STATE_depthBoundsTestMinValue = 1;
    static const uint32_t SWR_DEPTH_BOUNDS_STATE_depthBoundsTestMaxValue = 2;

} // ns SwrJit


