/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct C_Sdl C_Sdl;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct AGO_Light_ AGO_Light_;
typedef struct C_SdlRef_LocalMatrix C_SdlRef_LocalMatrix;
typedef struct C_SdlRef_TextureIdMatrix C_SdlRef_TextureIdMatrix;
typedef struct GLI_tdstUVTransformation GLI_tdstUVTransformation;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct tagListData tagListData;
typedef struct C_SdlRef_LocalMatrixForCheap C_SdlRef_LocalMatrixForCheap;
typedef struct C_SdlRef_PointLighting C_SdlRef_PointLighting;
typedef struct GLI_tdstMultiTextureMaterial GLI_tdstMultiTextureMaterial;
typedef struct C_SdlRef_TextureMatrix C_SdlRef_TextureMatrix;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct C_SdlRef_FogParameters C_SdlRef_FogParameters;
typedef struct C_SdlRef C_SdlRef;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct sceGifTag sceGifTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct C_SdlRef_TextureOffset C_SdlRef_TextureOffset;
typedef struct tag_stVU1Parameters tag_stVU1Parameters;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;

struct C_Sdl {
    int m_SDL_Size; /* +0x0 */
    unsigned int m_SDL_InitSize; /* +0x4 */
    unsigned int m_bReduce; /* +0x8 */
    unsigned int m_DisplayList; /* +0xc */
    tagListData* m_pListData; /* +0x10 */
    unsigned int m_NbRefs; /* +0x14 */
    unsigned int m_NbReservedRefs; /* +0x18 */
    unsigned int m_NbFaces; /* +0x1c */
    unsigned int m_NbElements; /* +0x20 */
    C_SdlRef* m_ppRefs; /* +0x24 */
    tag_stVU1Parameters* m_ppP; /* +0x28 */
    unsigned int m_LastFrameUsed; /* +0x2c */
    unsigned int m_LastFrameInterpolated; /* +0x30 */
    unsigned int m_bIsTransparent; /* +0x34 */
    unsigned int m_bNoInterpolation; /* +0x38 */
    int m_SkinIndex; /* +0x3c */
    GLI_tdstMaterial_* m_SkinMaterial; /* +0x40 */
    int m_bIsBlinking; /* +0x44 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct AGO_Light_ {
    float Position[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float SqFar; /* +0x20 */
    float Far; /* +0x24 */
    float AlreadyComputed; /* +0x28 */
    float Distance; /* +0x2c */
};

struct C_SdlRef_LocalMatrix {
    /* C++ base C_SdlRef at +0x0. */
    float OldMat[4][4]; /* +0x20 */
    int m_bNoInterpolation; /* +0x60 */
};

struct C_SdlRef_TextureIdMatrix {
    /* C++ base C_SdlRef at +0x0. */
};

struct GLI_tdstUVTransformation {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*) pDmaBuffer[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*) pLastExecDmaBuffer[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct C_SdlRef_LocalMatrixForCheap {
    /* C++ base C_SdlRef at +0x0. */
    int m_pcActivity; /* +0x14 */
    float OldMat[4][4]; /* +0x20 */
};

struct C_SdlRef_PointLighting {
    /* C++ base C_SdlRef at +0x0. */
};

struct GLI_tdstMultiTextureMaterial {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    GLI_tdstUVTransformation st_UVStaticPos; /* +0xc */
    GLI_tdstUVTransformation st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct C_SdlRef_TextureMatrix {
    /* C++ base C_SdlRef at +0x0. */
    int m_fpOffsetU; /* +0x14 */
    int m_fpOffsetV; /* +0x18 */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct C_SdlRef_FogParameters {
    /* C++ base C_SdlRef at +0x0. */
    int m_pDestFogColor; /* +0x14 */
    int m_pDestFogStart; /* +0x18 */
    int m_pDestFogEnd; /* +0x1c */
};

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct sceGifTag {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*) pData[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct C_SdlRef_TextureOffset {
    /* C++ base C_SdlRef at +0x0. */
    GLI_tdstMaterial_* m_hMaterial; /* +0x14 */
    float m_du; /* +0x18 */
    float m_dv; /* +0x1c */
    int m_fpOffsetU; /* +0x20 */
    int m_fpOffsetV; /* +0x24 */
};

struct tag_stVU1Parameters {
    int tagDMA[4]; /* +0x0 */
    int ivUnpackCode[4]; /* +0x10 */
    float vAmbient[4]; /* +0x20 */
    float vScreenScale[4]; /* +0x30 */
    float vScreenOrg[4]; /* +0x40 */
    float vColorRange[4]; /* +0x50 */
    float fAlpha; /* +0x60 */
    float fShininess; /* +0x64 */
    unsigned int nColorMatMasks; /* +0x68 */
    unsigned int bFogging; /* +0x6c */
    unsigned int eFogMode; /* +0x70 */
    float fFogDensity; /* +0x74 */
    float fFogLinearStart; /* +0x78 */
    float fFogLinearEnd; /* +0x7c */
    unsigned int bTriangleFan; /* +0x80 */
    unsigned int uiClippingMask; /* +0x84 */
    unsigned int uiClippingStep; /* +0x88 */
    unsigned int bAutoNormalize; /* +0x8c */
    unsigned int uiNurbsReturnAddr; /* +0x90 */
    unsigned int ui_TandL_Entrance; /* +0x94 */
    unsigned int uiNurbsRowCount; /* +0x98 */
    unsigned int eClippingMode; /* +0x9c */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    GLI_tdstMultiTextureMaterial a_stMultiMaterial[4]; /* +0x88 */
};

float g_ffFrameTimeLastFrame;
int GLI_G_pProcessSDLs[2048];
unsigned int GLI_G_iNbSdlsInThisFrame;
anon_0 __vt__22C_SdlRef_FogParameters;
float g_fFogEnd;
float GLI_g_OOStartMinusEnd;
unsigned int GLI_g_CurrentSDLFogColor;
float g_ffFrameTime;
float GLI_g_SDL_pHalfVect[4];
float GLI_g_SDL_pInterpolatedCameraMatrix[4][4];
unsigned int GLI_g_SDLIsBlinking;
unsigned int AGO_g_ulNbLights;
AGO_Light_ AGO_g_pLightList[8];
int PS2glLiberator;
int PS2glAllocator64;
anon_4 __vt__22C_SdlRef_TextureOffset;
anon_6 __vt__24C_SdlRef_TextureIdMatrix;
anon_7 __vt__22C_SdlRef_TextureMatrix;
anon_3 __vt__28C_SdlRef_LocalMatrixForCheap;
anon_2 __vt__20C_SdlRef_LocalMatrix;
anon_5 __vt__22C_SdlRef_PointLighting;
anon_1 __vt__8C_SdlRef;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 42–50 */
/* addr: 0x002d7720  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 42
 *   +0x0014 -> line 46
 *   +0x0024 -> line 47
 *   +0x0028 -> line 48
 *   +0x0030 -> line 49
 *   +0x0034 -> line 50
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlCache::AddSdlInstance(_SDC_Instance_* pInstance)
{
    tdstSDLCacheEntry_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 464–475 */
/* addr: 0x002d7770  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 464
 *   +0x0014 -> line 466
 *   +0x001c -> line 468
 *   +0x0030 -> line 469
 *   +0x003c -> line 470
 *   +0x0050 -> line 475
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUpdateAllSPORefs(void)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 459–461 */
/* addr: 0x002d77e0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 459
 *   +0x0010 -> line 460
 *   +0x002c -> line 461
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vAddSdlToProcessLater(C_Sdl* pSdl)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 441–441 */
/* addr: 0x002d7820  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 441
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 436–436 */
/* addr: 0x002d7830  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 436
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 429–432 */
/* addr: 0x002d7840  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 429
 *   +0x000c -> line 430
 *   +0x0018 -> line 431
 *   +0x0020 -> line 432
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 421–421 */
/* addr: 0x002d7870  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 421
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureOffset::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 400–417 */
/* addr: 0x002d7880  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 400
 *   +0x000c -> line 402
 *   +0x0028 -> line 405
 *   +0x002c -> line 406
 *   +0x0034 -> line 409
 *   +0x0044 -> line 410
 *   +0x0048 -> line 409
 *   +0x0050 -> line 411
 *   +0x0054 -> line 409
 *   +0x0064 -> line 410
 *   +0x0068 -> line 411
 *   +0x006c -> line 413
 *   +0x007c -> line 414
 *   +0x0090 -> line 417
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureOffset::ProcessWithInterpol(void)
{
    float dt;
    float dv;
    float du;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 377–393 */
/* addr: 0x002d7920  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 377
 *   +0x000c -> line 379
 *   +0x0028 -> line 382
 *   +0x002c -> line 383
 *   +0x0034 -> line 386
 *   +0x0040 -> line 387
 *   +0x0044 -> line 388
 *   +0x0048 -> line 386
 *   +0x004c -> line 387
 *   +0x0050 -> line 388
 *   +0x0054 -> line 390
 *   +0x0064 -> line 391
 *   +0x0078 -> line 393
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureOffset::Process(void)
{
    float dt;
    float dv;
    float du;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 365–365 */
/* addr: 0x002d79a0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 365
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureIdMatrix::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 359–359 */
/* addr: 0x002d79b0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 359
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureIdMatrix::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 340–355 */
/* addr: 0x002d79c0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 340
 *   +0x0004 -> line 342
 *   +0x000c -> line 344
 *   +0x0010 -> line 345
 *   +0x0014 -> line 346
 *   +0x0018 -> line 347
 *   +0x001c -> line 348
 *   +0x0020 -> line 349
 *   +0x0024 -> line 350
 *   +0x0028 -> line 351
 *   +0x002c -> line 352
 *   +0x0030 -> line 355
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureIdMatrix::Process(void)
{
    float (*) param0[4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 334–334 */
/* addr: 0x002d7a00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 334
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureMatrix::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 329–329 */
/* addr: 0x002d7a10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 329
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureMatrix::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 258–325 */
/* addr: 0x002d7a20  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 258
 *   +0x0018 -> line 262
 *   +0x002c -> line 263
 *   +0x0030 -> line 264
 *   +0x0034 -> line 265
 *   +0x0038 -> line 266
 *   +0x003c -> line 268
 *   +0x0040 -> line 269
 *   +0x0044 -> line 270
 *   +0x0048 -> line 272
 *   +0x004c -> line 273
 *   +0x0050 -> line 274
 *   +0x0054 -> line 277
 *   +0x0058 -> line 278
 *   +0x005c -> line 279
 *   +0x0060 -> line 281
 *   +0x0064 -> line 282
 *   +0x0068 -> line 283
 *   +0x006c -> line 285
 *   +0x0070 -> line 286
 *   +0x0074 -> line 287
 *   +0x0078 -> line 289
 *   +0x007c -> line 290
 *   +0x0080 -> line 291
 *   +0x0084 -> line 293
 *   +0x0088 -> line 294
 *   +0x008c -> line 295
 *   +0x0090 -> line 299
 *   +0x009c -> line 300
 *   +0x00a4 -> line 325
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_TextureMatrix::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 235–250 */
/* addr: 0x002d7ad0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 235
 *   +0x0010 -> line 237
 *   +0x0014 -> line 240
 *   +0x001c -> line 242
 *   +0x0024 -> line 244
 *   +0x0034 -> line 246
 *   +0x0050 -> line 250
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_LocalMatrix::ProcessWithInterpol(void)
{
    float (*) pSrc[4][4];
    float (*) pDest[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 218–231 */
/* addr: 0x002d7b30  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 218
 *   +0x0004 -> line 221
 *   +0x000c -> line 223
 *   +0x0040 -> line 225
 *   +0x0050 -> line 227
 *   +0x006c -> line 231
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_LocalMatrix::ProcessNoInterpol(void)
{
    float (*) pSrc[4][4];
    float (*) pDest[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 200–211 */
/* addr: 0x002d7bb0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 200
 *   +0x0004 -> line 202
 *   +0x000c -> line 204
 *   +0x002c -> line 206
 *   +0x003c -> line 208
 *   +0x0058 -> line 211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_LocalMatrix::Process(void)
{
    float (*) pDest[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 149–159 */
/* addr: 0x002d7c10  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 150
 *   +0x0004 -> line 149
 *   +0x0008 -> line 150
 *   +0x000c -> line 152
 *   +0x0010 -> line 150
 *   +0x0014 -> line 152
 *   +0x0044 -> line 154
 *   +0x0064 -> line 156
 *   +0x0080 -> line 159
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_LocalMatrix::ProcessNoInterpol(void)
{
    float (*) pSrc[4][4];
    float (*) pDest[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 126–143 */
/* addr: 0x002d7ca0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 126
 *   +0x000c -> line 128
 *   +0x0018 -> line 130
 *   +0x0028 -> line 132
 *   +0x0030 -> line 135
 *   +0x0048 -> line 137
 *   +0x006c -> line 139
 *   +0x0088 -> line 143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_LocalMatrix::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 110–120 */
/* addr: 0x002d7d40  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 *   +0x0028 -> line 116
 *   +0x004c -> line 118
 *   +0x0068 -> line 120
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_LocalMatrix::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 81–81 */
/* addr: 0x002d7db0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 81
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_PointLighting::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 76–76 */
/* addr: 0x002d7dc0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 76
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_PointLighting::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 58–72 */
/* addr: 0x002d7dd0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 58
 *   +0x0004 -> line 62
 *   +0x0010 -> line 59
 *   +0x0014 -> line 62
 *   +0x001c -> line 70
 *   +0x0020 -> line 66
 *   +0x0024 -> line 69
 *   +0x0028 -> line 66
 *   +0x003c -> line 67
 *   +0x0044 -> line 68
 *   +0x0064 -> line 69
 *   +0x0068 -> line 70
 *   +0x0078 -> line 71
 *   +0x00a8 -> line 72
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef_PointLighting::Process(void)
{
    unsigned int CurrentLight;
    float* pDestEnd;
    float* pDest;
    AGO_Light_* pLgt;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 44–44 */
/* addr: 0x002d7e80  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 44
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 39–39 */
/* addr: 0x002d7e90  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 39
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 34–34 */
/* addr: 0x002d7ea0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 34
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 23–23 */
/* addr: 0x002d7eb0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 23
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef::__dl(void* ptr)
{
    /* TODO: decompile from asm/... */
}
