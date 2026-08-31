/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Init_Gli.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstGliCaps_ tdstGliCaps_;
typedef struct GLI_tdst_Z_List_ GLI_tdst_Z_List_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tdstFogParams_ tdstFogParams_;

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

struct tdstGliCaps_ {
    unsigned int ulSize; /* +0x0 */
    unsigned int ulDriverCaps; /* +0x4 */
    unsigned int ulTextureCaps; /* +0x8 */
    unsigned int ulSurfaceCaps; /* +0xc */
    unsigned int ulMemoryCaps; /* +0x10 */
    unsigned int ulTextureMaxSize; /* +0x14 */
    unsigned int ulTotalTextureMemory; /* +0x18 */
    unsigned int ulTotalVideoMemory; /* +0x1c */
    unsigned int ulTotalAGPMemory; /* +0x20 */
    unsigned int ulTexturePerChannelMemory[4]; /* +0x24 */
    unsigned char ucPrimarySurfacePixelFormat; /* +0x34 */
    float fRefreshRate; /* +0x38 */
};

struct GLI_tdst_Z_List_ {
    int g_d_ucFreeDisplayRooms; /* +0x0 */
    int g_lFreeDisplayRoomsCounter; /* +0x4 */
    int g_lFreeDisplayRoomsCounterMax; /* +0x8 */
    int g_lDisplayCounterMin; /* +0xc */
    int g_lDisplayCounterMax; /* +0x10 */
    int g_d_pstFreeElements; /* +0x14 */
    /* aggregate */ int g_aDEF_pstViewingList; /* +0x18 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct tdstFogParams_ {
    float xDepthStart; /* +0x0 */
    float xDepthEnd; /* +0x4 */
    float xInfinite; /* +0x8 */
    float xBlendStart; /* +0xc */
    float xBlendEnd; /* +0x10 */
    GEO_tdstColor_ stColor; /* +0x14 */
};

static int GLI_gsIsInit;
int g_lNbMatrixInStack;
/* array */ int g_aDEF_stMatrixStack[1];
int g_p_stCurrentMatrix;
int GLI_gp_CurrentZ_ListForBuild;
GLI_tdst_Z_List_ GLI_g_a2_stZ_List[1];
float g_xVideoFrameDurationInSeconds;
tdstGliCaps_ GLI_g_stCaps;
int gs_hDefaultMaterial;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int GLI_BIG_GLOBALS_xFogIsOn;
int GLI_BIG_GLOBALS_p_stActiveFog;
int GLI_BIG_GLOBALS_GLI_aDEF_stEnvUV;
int GLI_BIG_GLOBALS_GLI_TurnedScaledDisplecedPoint;
int gs_aDEFTableOfTextureAlreadyRead;
int gs_aDEFTableOfTextureMemoryChannels;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Init_Gli.c lines 130–232 */
/* addr: 0x002a85d0  size: 728 bytes */
void GLI_vSetFog2(float xBlendStart, float xDepthStart, float xBlendEnd, float xDepthEnd, float xInfinite, GEO_tdstColor_* p_stFogColor)
{
    float xFogIntensityEnd;
    float xFogIntensityStart;
    float xZDepthConstant;
    float xZDepthEnd;
    float xZDepthStart2;
    float B;
    float A;
    /* line map: */
    /*   line 130 @ +0x000 */
    /*   line 132 @ +0x000 */
    /*   line 136 @ +0x000 */
    /*   line 132 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 136 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a88b0  size: 8 bytes */
void GLI_vSignalCurrentMemoryChannel(unsigned char ucCurrentChannel)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a88c0  size: 8 bytes */
void GLI_vEndofGeometricLoad(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a88d0  size: 8 bytes */
int GLI_xIsGliInit(void)
{
    /* TODO: decompile from asm/... */
}
