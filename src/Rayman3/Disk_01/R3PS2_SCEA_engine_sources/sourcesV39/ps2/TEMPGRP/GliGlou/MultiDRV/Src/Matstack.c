/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Matstack.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;

typedef enum MAT_tdeTranformationType_ {
    MAT_eTransform_Uninitialized = 0,
    MAT_eTransform_Identity = 1,
    MAT_eTransform_Translation = 2,
    MAT_eTransform_Zoom = 3,
    MAT_eTransform_Scale = 4,
    MAT_eTransform_Rotation = 5,
    MAT_eTransform_RotationZoom = 6,
    MAT_eTransform_RotationScale = 7,
    MAT_eTransform_ComplexRotationScale = 8,
    MAT_eTransform_Undefined = 9,
} MAT_tdeTranformationType_;

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

int g_lNbMatrixInStack;
int g_p_stCurrentMatrix;
MAT_tdstTransformation_ g_aDEF_stMatrixStack[1];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Matstack.c lines 87–117 */
/* addr: 0x002aa0f0  size: 304 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 87
 *   +0x0004 -> line 89
 *   +0x0008 -> line 87
 *   +0x0014 -> line 89
 *   +0x0020 -> line 99
 *   +0x0024 -> line 91
 *   +0x0028 -> line 92
 *   +0x0030 -> line 104
 *   +0x0034 -> line 95
 *   +0x0038 -> line 114
 *   +0x003c -> line 95
 *   +0x0040 -> line 114
 *   +0x0044 -> line 91
 *   +0x0048 -> line 92
 *   +0x0050 -> line 93
 *   +0x0058 -> line 95
 *   +0x0060 -> line 96
 *   +0x0068 -> line 97
 *   +0x0070 -> line 99
 *   +0x0078 -> line 100
 *   +0x0080 -> line 101
 *   +0x0088 -> line 103
 *   +0x0090 -> line 104
 *   +0x0098 -> line 105
 *   +0x00a0 -> line 107
 *   +0x00a8 -> line 108
 *   +0x00b0 -> line 109
 *   +0x00b8 -> line 110
 *   +0x00c4 -> line 111
 *   +0x00d0 -> line 112
 *   +0x00d8 -> line 114
 *   +0x0120 -> line 117
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;

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

extern float gs_fCoefOfMultiplicationForAnimatedTexture;
extern unsigned int gs_lActualRefreshNumberForScolledTextures;

void* HMU_fn_p_vMalloc(unsigned int ulSize, unsigned char ucMode);
void* memset(void* p, int c, size_t n);

void GLI_xCreateMaterial(GLI_tdstMaterial_** hMaterial)
{
    *hMaterial = (GLI_tdstMaterial_*)HMU_fn_p_vMalloc(sizeof(GLI_tdstMaterial_), 0);

    (*hMaterial)->stAmbient.xR = 0.0f;
    (*hMaterial)->stAmbient.xG = 0.1f;
    (*hMaterial)->stAmbient.xB = 0.1f;

    (*hMaterial)->stDiffuse.xR = 0.8f;
    (*hMaterial)->stDiffuse.xG = 0.8f;
    (*hMaterial)->stDiffuse.xB = 0.8f;

    (*hMaterial)->stColor.xR = 1.0f;
    (*hMaterial)->stColor.xG = 0.0f;
    (*hMaterial)->stColor.xB = 1.0f;

    (*hMaterial)->p_stTexture = NULL;
    (*hMaterial)->xMaterialType = 0xFFFFFFFF;
    (*hMaterial)->lIncrementIsEnable = 0;

    (*hMaterial)->p_stFistAnimatedTExtureNode = NULL;
    (*hMaterial)->p_stActualAnimatedTExtureNode = NULL;
    (*hMaterial)->lNumberOfDisplayNode = 0;
    (*hMaterial)->xActualDisplayTimeSinceStartOfLastTexture = gs_fCoefOfMultiplicationForAnimatedTexture;
    (*hMaterial)->lActualRefreshNumber = gs_lActualRefreshNumberForScolledTextures;
    (*hMaterial)->xIsLocked = 0;

    { GLI_tdstMaterial_* p_stMat = *hMaterial; anon_0* p_stLast; anon_0* p_stMulti; memset(p_stMat->a_stMultiMaterial, 0, sizeof(p_stMat->a_stMultiMaterial)); p_stMat->ulNbTextureStages = 0; for (p_stMulti = p_stMat->a_stMultiMaterial, p_stLast = p_stMulti + 4; p_stMulti < p_stLast; p_stMulti++) { p_stMulti->st_UVStaticPos.stMat[0][0] = 1.0f; p_stMulti->st_UVStaticPos.stMat[1][1] = 1.0f; p_stMulti->st_UVDynamicPos.stMat[0][0] = 1.0f; p_stMulti->st_UVDynamicPos.stMat[1][1] = 1.0f; } }
}
