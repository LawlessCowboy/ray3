/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GLI_tdstTexturePS2GL_ GLI_tdstTexturePS2GL_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_1 anon_1;
typedef struct anon_0 anon_0;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;

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

struct GLI_tdstTexturePS2GL_ {
    unsigned int TextureID; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_0 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
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
    anon_0 a_stMultiMaterial[4]; /* +0x88 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

int GLI_g_pArrayOfVisualMaterial;
unsigned int GLI_g_ulNumberOfVisualMaterials;
char szTexturePath[256];
int GLI_g_StaticCopyOfArrayOfVisualMaterial[256];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c lines 93–112 */
/* addr: 0x002a9300  size: 352 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 105
 *   +0x0004 -> line 93
 *   +0x0008 -> line 105
 *   +0x000c -> line 101
 *   +0x0010 -> line 100
 *   +0x0014 -> line 102
 *   +0x0018 -> line 103
 *   +0x0020 -> line 106
 *   +0x0024 -> line 100
 *   +0x0044 -> line 101
 *   +0x0048 -> line 100
 *   +0x006c -> line 101
 *   +0x0078 -> line 102
 *   +0x0088 -> line 103
 *   +0x0098 -> line 104
 *   +0x00ac -> line 106
 *   +0x00b4 -> line 108
 *   +0x00e4 -> line 109
 *   +0x0114 -> line 110
 *   +0x0144 -> line 111
 *   +0x0158 -> line 112
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSerialLinearOp(int lNbOfVertex, MTH3D_tdstVector_* p_stSource, GLI_tdstAligned3DVector_* p_stDest, MAT_tdstTransformation_* p_stMatrix)
{
    float fSwapValue;
    GLI_tdstAligned3DVector_* param0;
    MTH3D_tdstVector_ stTrans;
    MTH3D_tdstVector_ stZ;
    MTH3D_tdstVector_ stY;
    MTH3D_tdstVector_ stX;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c lines 2467–2503 */
/* addr: 0x002a9460  size: 456 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2467
 *   +0x0018 -> line 2471
 *   +0x0020 -> line 2473
 *   +0x002c -> line 2475
 *   +0x0034 -> line 2479
 *   +0x0044 -> line 2481
 *   +0x0050 -> line 2483
 *   +0x0090 -> line 2485
 *   +0x009c -> line 2486
 *   +0x00a0 -> line 2487
 *   +0x00e0 -> line 2489
 *   +0x00ec -> line 2490
 *   +0x00f0 -> line 2491
 *   +0x0130 -> line 2493
 *   +0x013c -> line 2494
 *   +0x0140 -> line 2495
 *   +0x0180 -> line 2497
 *   +0x018c -> line 2498
 *   +0x0190 -> line 2500
 *   +0x019c -> line 2502
 *   +0x01b0 -> line 2503
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fnvPrecalculateStuffForAllMaterials(void)
{
    GLI_tdstMaterial_* pMat;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c lines 2376–2419 */
/* addr: 0x002a9630  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2376
 *   +0x0008 -> line 2378
 *   +0x0014 -> line 2382
 *   +0x001c -> line 2384
 *   +0x0040 -> line 2389
 *   +0x0048 -> line 2390
 *   +0x0060 -> line 2393
 *   +0x006c -> line 2397
 *   +0x0078 -> line 2399
 *   +0x00ac -> line 2404
 *   +0x00b4 -> line 2405
 *   +0x00d0 -> line 2409
 *   +0x00d8 -> line 2410
 *   +0x00e0 -> line 2412
 *   +0x00e4 -> line 2419
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_Precalc_IsMaterialTransparent(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_0* pMat;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    int ReturnValue;
    /* TODO: decompile from asm/... */
}
