/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\spritegli.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_SpecificPS2GL_Structure_ GLI_SpecificPS2GL_Structure_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct stLensFlareTab_ stLensFlareTab_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;

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

struct stLensFlareTab_ {
    int p_vReference[10]; /* +0x0 */
    int lApparitionTrame[10]; /* +0x28 */
    int lCounter[10]; /* +0x50 */
    char bIntersect[10]; /* +0x78 */
    int lNumberOfLensFlare; /* +0x84 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_0 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_1 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_0 st_UVStaticPos; /* +0xc */
    anon_0 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
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
    anon_1 a_stMultiMaterial[4]; /* +0x88 */
};

int gp_vLensFlareRef;
float GLI_g_fZValueForSprite;
char g_GLI_bForceAAAColor;
unsigned char g_GLI_ForcedAAAColor[3];
stLensFlareTab_ g_stLensFlare;
char g_bCanResize2DSpriteWithPercentAccordingToViewportRatio;
GLI_tdstMaterial_* gs_hDefaultMaterial;
int GLI_gs_lBackGroundColor;
int g_bDrawingBlackFrame;
int GLI_g_AnimatedTextureToUse;

struct GLI_SpecificPS2GL_Structure_ {
    unsigned int Flags; /* +0x0 */
    int pVertexArrayHandles; /* +0x4 */
    int glDisplayLists; /* +0x8 */
    unsigned short NbStages; /* +0xc */
    unsigned short WasOutlinedOrDynamicallyLit; /* +0xe */
    unsigned int LastFrame; /* +0x10 */
    float stMin[3]; /* +0x14 */
    float stMax[3]; /* +0x20 */
    unsigned int BoundingBoxValid; /* +0x2c */
    int pTempVAPos[4]; /* +0x30 */
    int pTempVAOther[4]; /* +0x40 */
    unsigned int SpriteGenArray; /* +0x50 */
};

extern void (*PS2glLiberator)(void*);

void GLI_vCleanSpecificStructure(GLI_SpecificPS2GL_Structure_* pTemp)
{
    if (pTemp)
    {
        pTemp->Flags = 0;
        if (pTemp->SpriteGenArray)
            PS2glLiberator((void*)pTemp->SpriteGenArray);
        pTemp->SpriteGenArray = 0;
        if (pTemp->glDisplayLists)
            PS2glLiberator((void*)pTemp->glDisplayLists);
        if (pTemp->pVertexArrayHandles)
            PS2glLiberator((void*)pTemp->pVertexArrayHandles);
        pTemp->pVertexArrayHandles = 0;
        PS2glLiberator(pTemp);
    }
}

float GLI_vGetGlobalAlpha(void);
void GLI_vSetGlobalAlpha(float Alpha);

void GLI_vClearViewportRegion(void)
{
    float OldZValue;
    float f_SaveAlpha;

    OldZValue = GLI_g_fZValueForSprite;
    GLI_g_fZValueForSprite = 0.0f;
    f_SaveAlpha = GLI_vGetGlobalAlpha();
    GLI_vSetGlobalAlpha(255.0f);
    g_GLI_bForceAAAColor = 0;
    gs_hDefaultMaterial->stAmbient.xR = (float)(GLI_gs_lBackGroundColor & 0xff) / 255.0f;
    gs_hDefaultMaterial->stAmbient.xG = (float)((GLI_gs_lBackGroundColor >> 8) & 0xff) / 255.0f;
    gs_hDefaultMaterial->stAmbient.xB = (float)((GLI_gs_lBackGroundColor >> 16) & 0xff) / 255.0f;
    g_bCanResize2DSpriteWithPercentAccordingToViewportRatio = 1;
    GLI_vSetGlobalAlpha(f_SaveAlpha);
    GLI_g_fZValueForSprite = OldZValue;
}

void GLI_vEndWorldSprites(void);
void GLI_vDraw2DSpriteWithPercent(GLD_tdstViewportAttributes_* p_stVpt, float xMinX, float xMinY, float xMaxX, float xMaxY, GLI_tdstMaterial_* hMaterial);
void GLI_vEndNewSprite(void);
float GLI_vGetGlobalAlpha(void);
void GLI_vSetGlobalAlpha(float Alpha);

void GLI_vDisplayFrame(float* a3_fPosition, float* a3_fDirection, float _f_Transparency, GLD_tdstViewportAttributes_* _p_stViewport)
{
    float f_SaveAlpha;

    GLI_vEndWorldSprites();

    f_SaveAlpha = GLI_vGetGlobalAlpha();
    GLI_vSetGlobalAlpha(_f_Transparency);

    gs_hDefaultMaterial->stAmbient.xR = gs_hDefaultMaterial->stAmbient.xG = gs_hDefaultMaterial->stAmbient.xB = 0.0f;

    gs_hDefaultMaterial->p_stTexture = NULL;
    GLI_g_AnimatedTextureToUse = 0;

    g_bDrawingBlackFrame = 1;

    GLI_vDraw2DSpriteWithPercent(_p_stViewport, a3_fPosition[0], a3_fPosition[1], a3_fDirection[0], a3_fDirection[1], gs_hDefaultMaterial);

    GLI_vEndNewSprite();

    g_bDrawingBlackFrame = 0;
    GLI_vSetGlobalAlpha(f_SaveAlpha);
}
