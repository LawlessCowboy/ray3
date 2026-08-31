/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct AGO_Light_ AGO_Light_;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct C_SdlRef C_SdlRef;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct sceGifTag sceGifTag;
typedef struct tagGLlistnode tagGLlistnode;
typedef union unFunction unFunction;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
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
    int p_TextureOfSubstitution; /* +0x44 */
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

struct tagGLlistcalls {
    int pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
};

struct tagGLprimbuf {
    int pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    int pData; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
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
    unsigned long 8 : 4; /* bit None, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

float g_ffFrameTimeLastFrame;
/* aggregate */ int GLI_G_pProcessSDLs;
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 46–50 */
/* addr: 0x002d7720  size: 72 bytes */
void C_SdlCache::AddSdlInstance(_SDC_Instance_* pInstance, /* function pointer */ int p)
{
    /* line map: */
    /*   line 46 @ +0x000 */
    /*   line 48 @ +0x000 */
    /*   line 50 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 466–475 */
/* addr: 0x002d7770  size: 100 bytes */
void GLI_vUpdateAllSPORefs(void)
{
    unsigned int i;
    /* line map: */
    /*   line 466 @ +0x000 */
    /*   line 469 @ +0x000 */
    /*   line 475 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 460–460 */
/* addr: 0x002d77e0  size: 52 bytes */
void fn_vAddSdlToProcessLater(/* function pointer */ int pSdl)
{
    /* line map: */
    /*   line 460 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7820  size: 16 bytes */
void C_SdlRef_::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7830  size: 16 bytes */
void C_SdlRef_::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 430–432 */
/* addr: 0x002d7840  size: 40 bytes */
void C_SdlRef_::Process(void)
{
    /* line map: */
    /*   line 430 @ +0x000 */
    /*   line 432 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7870  size: 16 bytes */
void C_SdlRef_TextureOffset::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 402–417 */
/* addr: 0x002d7880  size: 152 bytes */
void C_SdlRef_TextureOffset::ProcessWithInterpol(void)
{
    float dt;
    float dv;
    float du;
    /* line map: */
    /*   line 402 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 410 @ +0x000 */
    /*   line 411 @ +0x000 */
    /*   line 410 @ +0x000 */
    /*   line 413 @ +0x000 */
    /*   line 417 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 379–391 */
/* addr: 0x002d7920  size: 128 bytes */
void C_SdlRef_TextureOffset::Process(void)
{
    float dt;
    float dv;
    float du;
    /* line map: */
    /*   line 379 @ +0x000 */
    /*   line 383 @ +0x000 */
    /*   line 387 @ +0x000 */
    /*   line 386 @ +0x000 */
    /*   line 388 @ +0x000 */
    /*   line 391 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d79a0  size: 16 bytes */
void C_SdlRef_TextureIdMatrix::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d79b0  size: 16 bytes */
void C_SdlRef_TextureIdMatrix::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 342–355 */
/* addr: 0x002d79c0  size: 56 bytes */
void C_SdlRef_TextureIdMatrix::Process(float (*) param0[4])
{
    /* line map: */
    /*   line 342 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 347 @ +0x000 */
    /*   line 349 @ +0x000 */
    /*   line 351 @ +0x000 */
    /*   line 355 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7a00  size: 16 bytes */
void C_SdlRef_TextureMatrix::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7a10  size: 16 bytes */
void C_SdlRef_TextureMatrix::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 262–325 */
/* addr: 0x002d7a20  size: 172 bytes */
void C_SdlRef_TextureMatrix::Process(void)
{
    /* line map: */
    /*   line 262 @ +0x000 */
    /*   line 264 @ +0x000 */
    /*   line 266 @ +0x000 */
    /*   line 269 @ +0x000 */
    /*   line 272 @ +0x000 */
    /*   line 274 @ +0x000 */
    /*   line 278 @ +0x000 */
    /*   line 281 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 237–246 */
/* addr: 0x002d7ad0  size: 96 bytes */
void C_SdlRef_LocalMatrix::ProcessWithInterpol(/* array */ int (*) pSrc[4], /* array */ int (*) pDest[4])
{
    /* line map: */
    /*   line 237 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 246 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 221–231 */
/* addr: 0x002d7b30  size: 116 bytes */
void C_SdlRef_LocalMatrix::ProcessNoInterpol(/* array */ int (*) pSrc[4], /* array */ int (*) pDest[4])
{
    /* line map: */
    /*   line 221 @ +0x000 */
    /*   line 225 @ +0x000 */
    /*   line 231 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 202–211 */
/* addr: 0x002d7bb0  size: 96 bytes */
void C_SdlRef_LocalMatrix::Process(/* array */ int (*) pDest[4])
{
    /* line map: */
    /*   line 202 @ +0x000 */
    /*   line 206 @ +0x000 */
    /*   line 211 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 149–156 */
/* addr: 0x002d7c10  size: 136 bytes */
void C_SdlRef_LocalMatrix::ProcessNoInterpol(/* array */ int (*) pSrc[4], /* array */ int (*) pDest[4])
{
    /* line map: */
    /*   line 149 @ +0x000 */
    /*   line 152 @ +0x000 */
    /*   line 152 @ +0x000 */
    /*   line 156 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 128–143 */
/* addr: 0x002d7ca0  size: 152 bytes */
void C_SdlRef_LocalMatrix::ProcessWithInterpol(void)
{
    /* line map: */
    /*   line 128 @ +0x000 */
    /*   line 132 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 143 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 116–120 */
/* addr: 0x002d7d40  size: 112 bytes */
void C_SdlRef_LocalMatrix::Process(void)
{
    /* line map: */
    /*   line 116 @ +0x000 */
    /*   line 120 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7db0  size: 16 bytes */
void C_SdlRef_PointLighting::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7dc0  size: 16 bytes */
void C_SdlRef_PointLighting::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLRefs.cpp lines 62–72 */
/* addr: 0x002d7dd0  size: 176 bytes */
void C_SdlRef_PointLighting::Process(AGO_Light_* pLgt)
{
    unsigned int CurrentLight;
    float* pDestEnd;
    float* pDest;
    /* line map: */
    /*   line 62 @ +0x000 */
    /*   line 62 @ +0x000 */
    /*   line 66 @ +0x000 */
    /*   line 66 @ +0x000 */
    /*   line 68 @ +0x000 */
    /*   line 70 @ +0x000 */
    /*   line 72 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7e80  size: 12 bytes */
void C_SdlRef::ProcessNoInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7e90  size: 12 bytes */
/*type_0x00*/ int C_SdlRef::ProcessWithInterpol(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7ea0  size: 12 bytes */
void C_SdlRef::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d7eb0  size: 12 bytes */
void C_SdlRef::__dl(void* ptr)
{
    /* TODO: decompile from asm/... */
}
