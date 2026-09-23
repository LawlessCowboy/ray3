/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoBdvEd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstElementSprite_ GEO_tdstElementSprite_;
typedef struct GEO_tdstSprite_ GEO_tdstSprite_;
typedef struct GEO_tdstBoundingSphere_ GEO_tdstBoundingSphere_;
typedef struct MTH2D_tdstVector_ MTH2D_tdstVector_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GEO_tdstIndexedSprite_ GEO_tdstIndexedSprite_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GEO_tdstIndexedSphere_ GEO_tdstIndexedSphere_;
typedef struct GEO_tdstElementSpheres_ GEO_tdstElementSpheres_;

struct GEO_tdstElementIndexedTriangles_ {
    unsigned char _padding[12];
    volatile short* d_stListOfFaces;
};

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

struct GEO_tdstElementSprite_ {
    GEO_tdstIndexedSprite_* d_stListOfSprites; /* +0x0 */
    short xNbSprites; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
    char cFastDraw; /* +0x8 */
    int p_stOwnerObject; /* +0xc */
};

struct GEO_tdstSprite_ {
    short xNbSprites; /* +0x0 */
    int d_xSpriteDrawMode; /* +0x4 */
    int d_xThresholds; /* +0x8 */
    MTH2D_tdstVector_* d_xSizeOfSprite; /* +0xc */
    MTH2D_tdstVector_* d_xDisplacementOfSprite; /* +0x10 */
    GLI_tdstMaterial_** d_hVisualMaterial; /* +0x14 */
};

struct GEO_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct MTH2D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GEO_tdstIndexedSprite_ {
    GEO_tdstSprite_* hSprite; /* +0x0 */
    MTH2D_tdstVector_ stSize; /* +0x4 */
    MTH3D_tdstVector_ stAxe; /* +0xc */
    ACP_tdst2DUVValues_ stUVpos; /* +0x18 */
    ACP_tdst2DUVValues_ stUVsize; /* +0x20 */
    short xCenterPoint; /* +0x28 */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    GEO_tdstElementIndexedTriangles_** d_stListOfElements; /* +0x10 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
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

struct GEO_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GEO_tdstElementSpheres_ {
    GEO_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

int gs_hVisualMaterial;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoBdvEd.c lines 190–197 */
/* addr: 0x002a4170  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 190
 *   +0x0010 -> line 194
 *   +0x0024 -> line 190
 *   +0x002c -> line 194
 *   +0x0038 -> line 195
 *   +0x0048 -> line 196
 *   +0x0054 -> line 197
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vSetFaceOfIndexedTriangles(GEO_tdstGeometricObject_* hObject, short hElement, short xIndexOfFace, short xPoint1, short xPoint2, short xPoint3)
{
    GEO_tdstElementIndexedTriangles_* param0;
    param0 = hObject->d_stListOfElements[hElement];
    *(short*)((char*)param0->d_stListOfFaces + xIndexOfFace * 6) = xPoint1;
    *(short*)((char*)param0->d_stListOfFaces + xIndexOfFace * 6 + 2) = xPoint2;
    *(short*)((char*)param0->d_stListOfFaces + xIndexOfFace * 6 + 4) = xPoint3;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoBdvEd.c lines 273–342 */
/* addr: 0x002a41d0  size: 632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 273
 *   +0x0038 -> line 284
 *   +0x003c -> line 285
 *   +0x0044 -> line 287
 *   +0x005c -> line 296
 *   +0x007c -> line 299
 *   +0x0084 -> line 300
 *   +0x00c0 -> line 304
 *   +0x00c4 -> line 305
 *   +0x00c8 -> line 304
 *   +0x00d0 -> line 305
 *   +0x00d8 -> line 307
 *   +0x00dc -> line 308
 *   +0x00e4 -> line 309
 *   +0x00f0 -> line 307
 *   +0x0108 -> line 308
 *   +0x010c -> line 307
 *   +0x0114 -> line 308
 *   +0x0124 -> line 307
 *   +0x012c -> line 308
 *   +0x0138 -> line 307
 *   +0x0140 -> line 308
 *   +0x014c -> line 307
 *   +0x0160 -> line 309
 *   +0x0164 -> line 307
 *   +0x016c -> line 309
 *   +0x0178 -> line 318
 *   +0x0190 -> line 319
 *   +0x0198 -> line 321
 *   +0x019c -> line 322
 *   +0x01a0 -> line 321
 *   +0x01a8 -> line 322
 *   +0x01b0 -> line 324
 *   +0x01bc -> line 326
 *   +0x01c4 -> line 324
 *   +0x01f4 -> line 326
 *   +0x0210 -> line 335
 *   +0x0230 -> line 341
 *   +0x0248 -> line 342
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_fn_vAddObjectToSphere(GEO_tdstGeometricObject_* _hGeometricObject, MTH3D_tdstVector_* _p_stSphereCenter, float* _p_xSphereRadius)
{
    MTH3D_tdstVector_ stSphereCenterLocal;
    GEO_tdstElementSprite_* p_stLocalElementSprite;
    GEO_tdstElementSpheres_* p_stLocalElementSphere;
    int lElementCounter;
    int i;
    MTH3D_tdstVector_* p_stVertex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoBdvEd.c lines 227–241 */
/* addr: 0x002a4450  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 227
 *   +0x0024 -> line 228
 *   +0x003c -> line 229
 *   +0x004c -> line 231
 *   +0x0064 -> line 233
 *   +0x006c -> line 237
 *   +0x0084 -> line 238
 *   +0x0090 -> line 239
 *   +0x0094 -> line 238
 *   +0x00a0 -> line 239
 *   +0x00a4 -> line 238
 *   +0x00cc -> line 239
 *   +0x00d0 -> line 241
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_fn_vComputeBoundingSphereOfOneSphereAndOnePoint(MTH3D_tdstVector_* _p_stReturnedSphereCenter, float* _p_xReturnedSphereRadius, MTH3D_tdstVector_* _p_stFirstSphereCenter, float _xFirstSphereRadius, MTH3D_tdstVector_* _p_stSecondSphereCenter)
{
    float xAlpha;
    /* TODO: decompile from asm/... */
}
