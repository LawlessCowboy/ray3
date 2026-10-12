/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Init_Gli.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstElementInList_ GLI_tdstElementInList_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstGliCaps_ tdstGliCaps_;
typedef struct GLI_tdst_Z_List_ GLI_tdst_Z_List_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GLI_tdstAligned3DVector_ GLI_tdstAligned3DVector_;
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
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
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
    GLI_tdstElementInList_* g_d_pstFreeElements; /* +0x14 */
    int g_aDEF_pstViewingList[1]; /* +0x18 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GLI_tdstAligned3DVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float ALIGN; /* +0xc */
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
MAT_tdstTransformation_ g_aDEF_stMatrixStack[1];
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

extern char g_bForceWhiteFog;
extern float Fog_RandomValue;
extern tdstFogParams_* GLI_gp_stCurrentFog;
extern tdstFogParams_* GLI_gp_stLastFog;
extern tdstFogParams_ GLI_ga_stFogTable[16];
void GLI_vSetFogParameters(float start, float end, float* color);

void GLI_vSetFog2(float xBlendStart, float xDepthStart, float xBlendEnd, float xDepthEnd, float xInfinite, GEO_tdstColor_* p_stFogColor)
{
    float A;
    float B;
    float xZDepthStart2;
    float xZDepthEnd;
    float xZDepthConstant;
    float xFogIntensityStart;
    float xFogIntensityEnd;

    if (g_bForceWhiteFog)
    {
        GLI_gp_stCurrentFog->stColor.xR = 1.0f;
        GLI_gp_stCurrentFog->stColor.xG = 1.0f;
        GLI_gp_stCurrentFog->stColor.xB = 1.0f;
        GLI_gp_stCurrentFog->stColor.xA = 1.0f;
        xDepthEnd = 60.0f + 40.0f * Fog_RandomValue;
        xDepthStart = 0.0f;
        xBlendStart = 10.0f;
        xBlendEnd = 150.0f + 55.0f * Fog_RandomValue;
    }

    if (xDepthEnd < xDepthStart)
    {
        GLI_gp_stCurrentFog->xDepthStart = xDepthEnd;
        GLI_gp_stCurrentFog->xDepthEnd = xDepthStart;
    }
    else
    {
        GLI_gp_stCurrentFog->xDepthStart = xDepthStart;
        GLI_gp_stCurrentFog->xDepthEnd = xDepthEnd;
    }

    if (xInfinite < GLI_gp_stCurrentFog->xDepthEnd)
        GLI_gp_stCurrentFog->xInfinite = xDepthEnd;
    else
        GLI_gp_stCurrentFog->xInfinite = xInfinite;

    if (xBlendStart < 0.0f)
        xBlendStart = 0.0f;
    else if (xBlendStart > 255.0f)
        xBlendStart = 255.0f;

    if (xBlendEnd < 0.0f)
        xBlendEnd = 0.0f;
    else if (xBlendEnd > 255.0f)
        xBlendEnd = 255.0f;

    GLI_gp_stCurrentFog->xBlendStart = xBlendStart;
    GLI_gp_stCurrentFog->xBlendEnd = xBlendEnd;
    GLI_gp_stCurrentFog->stColor = *p_stFogColor;

    xFogIntensityStart = (1.0f / 255.0f) * xBlendStart;
    xFogIntensityEnd = (1.0f / 255.0f) * xBlendEnd;

    xZDepthConstant = xDepthEnd - xDepthStart;
    if (xZDepthConstant)
    {
        A = (xFogIntensityEnd - xFogIntensityStart) / xZDepthConstant;
        B = xFogIntensityStart - A * xDepthStart;
        xZDepthStart2 = -B / A;
        xZDepthEnd = (1.0f - B) / A;
    }
    else
    {
        xZDepthStart2 = 0.0f;
        xZDepthEnd = xDepthEnd;
    }

    if (p_stFogColor->xR < 0.0f) p_stFogColor->xR = 0.0f; else if (p_stFogColor->xR > 1.0f) p_stFogColor->xR = 1.0f;
    if (p_stFogColor->xG < 0.0f) p_stFogColor->xG = 0.0f; else if (p_stFogColor->xG > 1.0f) p_stFogColor->xG = 1.0f;
    if (p_stFogColor->xB < 0.0f) p_stFogColor->xB = 0.0f; else if (p_stFogColor->xB > 1.0f) p_stFogColor->xB = 1.0f;

    GLI_vSetFogParameters(xZDepthStart2, xZDepthEnd, (float*)p_stFogColor);

    GLI_BIG_GLOBALS_p_stActiveFog = (int)GLI_gp_stCurrentFog;
    GLI_gp_stCurrentFog++;
    if (GLI_gp_stCurrentFog == GLI_gp_stLastFog)
        GLI_gp_stCurrentFog = GLI_ga_stFogTable;
}

void GLI_vSignalCurrentMemoryChannel(int ucCurrentChannel)
{
    GLI_TEX_vSignalCurrentMemoryChannel(ucCurrentChannel);
}

void GLI_vEndofGeometricLoad(void)
{
    GLI_vComputeTextures();
}

int GLI_xIsGliInit(void)
{
    return GLI_gsIsInit;
}
