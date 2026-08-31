/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c */
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
    int pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_1 st_UVStaticPos; /* +0xc */
    anon_1 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

int GLI_g_pArrayOfVisualMaterial;
unsigned int GLI_g_ulNumberOfVisualMaterials;
char szTexturePath[256];
/* aggregate */ int GLI_g_StaticCopyOfArrayOfVisualMaterial;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c lines 93–111 */
/* addr: 0x002a9300  size: 352 bytes */
void GLI_xSerialLinearOp(int lNbOfVertex, /* function pointer */ int p_stSource, /* function pointer */ int p_stDest, /* function pointer */ int p_stMatrix, /* function pointer */ int param4)
{
    float fSwapValue;
    /* aggregate */ int stTrans;
    /* aggregate */ int stZ;
    /* aggregate */ int stY;
    /* aggregate */ int stX;
    /* line map: */
    /*   line 93 @ +0x000 */
    /*   line 101 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 106 @ +0x000 */
    /*   line 101 @ +0x000 */
    /*   line 101 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 106 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c lines 2471–2502 */
/* addr: 0x002a9460  size: 456 bytes */
void GLI_fnvPrecalculateStuffForAllMaterials(/* function pointer */ int pMat)
{
    int i;
    /* line map: */
    /*   line 2471 @ +0x000 */
    /*   line 2475 @ +0x000 */
    /*   line 2481 @ +0x000 */
    /*   line 2485 @ +0x000 */
    /*   line 2487 @ +0x000 */
    /*   line 2490 @ +0x000 */
    /*   line 2493 @ +0x000 */
    /*   line 2495 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c lines 2378–2412 */
/* addr: 0x002a9630  size: 236 bytes */
int GLI_Precalc_IsMaterialTransparent(/* function pointer */ int hVisualMaterial, anon_0* pMat, /* function pointer */ int p_stSpecParam)
{
    int ReturnValue;
    /* line map: */
    /*   line 2378 @ +0x000 */
    /*   line 2384 @ +0x000 */
    /*   line 2390 @ +0x000 */
    /*   line 2397 @ +0x000 */
    /*   line 2404 @ +0x000 */
    /*   line 2409 @ +0x000 */
    /*   line 2412 @ +0x000 */
    /* TODO: decompile from asm/... */
}
