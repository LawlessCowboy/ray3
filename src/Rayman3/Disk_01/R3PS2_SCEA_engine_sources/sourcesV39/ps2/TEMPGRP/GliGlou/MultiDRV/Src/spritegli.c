/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\spritegli.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

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

struct anon_0 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_1 {
    int pst_Texture; /* +0x0 */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

int gp_vLensFlareRef;
float GLI_g_fZValueForSprite;
char g_GLI_bForceAAAColor;
unsigned char g_GLI_ForcedAAAColor[3];
/* aggregate */ int g_stLensFlare;
char g_bCanResize2DSpriteWithPercentAccordingToViewportRatio;
int gs_hDefaultMaterial;
int GLI_gs_lBackGroundColor;
int g_bDrawingBlackFrame;
int GLI_g_AnimatedTextureToUse;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\spritegli.c lines 142–153 */
/* addr: 0x002b0640  size: 136 bytes */
void GLI_vCleanSpecificStructure(/* function pointer */ int pTemp)
{
    /* line map: */
    /*   line 142 @ +0x000 */
    /*   line 146 @ +0x000 */
    /*   line 149 @ +0x000 */
    /*   line 151 @ +0x000 */
    /*   line 153 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\spritegli.c lines 790–811 */
/* addr: 0x002b06d0  size: 200 bytes */
void GLI_vClearViewportRegion(void)
{
    float f_SaveAlpha;
    float OldZValue;
    /* line map: */
    /*   line 790 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 797 @ +0x000 */
    /*   line 807 @ +0x000 */
    /*   line 800 @ +0x000 */
    /*   line 808 @ +0x000 */
    /*   line 811 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\spritegli.c lines 761–782 */
/* addr: 0x002b07a0  size: 192 bytes */
void GLI_vDisplayFrame(float* a3_fPosition, float* a3_fDirection, float _f_Transparency, /* function pointer */ int _p_stViewport)
{
    float f_SaveAlpha;
    /* line map: */
    /*   line 761 @ +0x000 */
    /*   line 765 @ +0x000 */
    /*   line 773 @ +0x000 */
    /*   line 770 @ +0x000 */
    /*   line 771 @ +0x000 */
    /*   line 777 @ +0x000 */
    /*   line 782 @ +0x000 */
    /* TODO: decompile from asm/... */
}
