/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\effect.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstFootPath_ tdstFootPath_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct tdstWaterStreakEffect_ tdstWaterStreakEffect_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct tdstWaterFoam_ tdstWaterFoam_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstFootPath_ {
    short xNumberOfAlphaLevels; /* +0x0 */
    float a8_xAlphaColor[8]; /* +0x4 */
    short a8_xNumberOfPoints[8]; /* +0x24 */
    short a8_xMaxNumberOfFaces[8]; /* +0x34 */
    short a8_xNumberOfFaces[8]; /* +0x44 */
    short a8_xNextFaces[8]; /* +0x54 */
    MTH3D_tdstVector_ a2_stOffset[2]; /* +0x64 */
    float a2_xScale[2]; /* +0x7c */
    int a8_hGeomObj[8]; /* +0x84 */
    GLI_tdstMaterial_* hFootPrintVisualMaterial; /* +0xa4 */
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

struct tdstWaterStreakEffect_ {
    int lNbFoams; /* +0x0 */
    int lNbGraphicFoams; /* +0x4 */
    tdstWaterFoam_* a_stFoams; /* +0x8 */
    unsigned int ulLastTimeOfShift; /* +0xc */
    float xFoamXZoom; /* +0x10 */
    float xFoamYZoom; /* +0x14 */
    int lFoamFrameCounter; /* +0x18 */
    GEO_tdstGeometricObject_** a_hFoamObjectTable; /* +0x1c */
    float xAttenuationCoeff; /* +0x20 */
    float xLifeTimeFrequency; /* +0x24 */
    int lLifeTime; /* +0x28 */
    int lTimeBetweenTwoShifts; /* +0x2c */
    float xTimeWindow; /* +0x30 */
    float xGap; /* +0x34 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct tdstWaterFoam_ {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    unsigned char bFoamIsActive; /* +0xc */
    int lLifeTime; /* +0x10 */
};

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

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x30 */
    GEO_tdstDoubledIndex_* d_stListOfEdgesDI; /* +0x40 */
    short xNbEdgesDI; /* +0x44 */
    short xNbOctreeEdges; /* +0x46 */
    int bUsedForShadowDrawing; /* +0x48 */
    int bUsedForShadowCreating; /* +0x4c */
    int pSDC_Data; /* +0x50 */
    unsigned int bIsStatic; /* +0x54 */
    unsigned int glDisplayList; /* +0x58 */
    unsigned char bVTForSinus; /* +0x5c */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
int HIE_g_a_hMatrixStack[50];
int HIE_g_lNbMatrixInStack;
int gp_stLight;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\effect.c lines 86–207 */
/* addr: 0x0025ef40  size: 340 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 86
 *   +0x002c -> line 97
 *   +0x0034 -> line 123
 *   +0x0050 -> line 125
 *   +0x0054 -> line 138
 *   +0x005c -> line 142
 *   +0x007c -> line 148
 *   +0x0080 -> line 153
 *   +0x0088 -> line 155
 *   +0x00a8 -> line 159
 *   +0x00b8 -> line 166
 *   +0x00bc -> line 169
 *   +0x00c8 -> line 177
 *   +0x00d0 -> line 178
 *   +0x00d8 -> line 181
 *   +0x00e4 -> line 182
 *   +0x00f0 -> line 189
 *   +0x00f4 -> line 185
 *   +0x00f8 -> line 189
 *   +0x00fc -> line 188
 *   +0x0100 -> line 189
 *   +0x0104 -> line 185
 *   +0x0108 -> line 186
 *   +0x0110 -> line 189
 *   +0x0130 -> line 206
 *   +0x0134 -> line 207
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int COL_lHaveITakeSThgIntoTheMug(DNM_stMecObstacle* _a_stResultObstacle, HIE_tdstSuperObject_* _p_stSupObj, MAT_tdstTransformation_* _p_stStartPosition, MAT_tdstTransformation_* _p_stEndPosition)
{
    DNM_stMecObstacle* p_stCurrentResultObstacle;
    int lParameter2;
    int lResult;
    short i;
    float xReboundCoef;
    float xSlideCoef;
    /* TODO: decompile from asm/... */
}
