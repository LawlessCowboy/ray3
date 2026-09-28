/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGO.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct COL_tdstGVForCollision_ COL_tdstGVForCollision_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;

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

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct COL_tdstGVForCollision_ {
    MTH3D_tdstVector_* p_stVertex1; /* +0x0 */
    MTH3D_tdstVector_ stEdgeVector; /* +0x4 */
    MTH3D_tdstVector_* p_stVertex2; /* +0x10 */
    MTH3D_tdstVector_ stDinST0Point; /* +0x14 */
    float xDynamicRadius; /* +0x20 */
    MAT_tdstTransformation_* p_stStaticGeomObjMatrix; /* +0x24 */
    MTH3D_tdstVector_ stDinST1Point; /* +0x28 */
    MTH3D_tdstVector_ stDinST01Vector; /* +0x34 */
    GMT_tdstGameMaterial_* hDynamicMaterial; /* +0x40 */
    GMT_tdstGameMaterial_* hStaticMaterial; /* +0x44 */
    int p_vParameter1; /* +0x48 */
    short sParameter2; /* +0x4c */
    COL_tdstCollideObject_* p_stStaticColObj; /* +0x50 */
    COL_tdstElementIndexedTriangles_* p_stStaticElementIndexedTriangles; /* +0x54 */
    unsigned int ulSelectedCollisionCases; /* +0x58 */
    short xStaticElementIndex; /* +0x5c */
    short xStaticIndexedTriangleIndex; /* +0x5e */
    COL_tdstIndexedSphere_* p_stDynamicIndexedSphere; /* +0x60 */
    COL_tdstOctree_* p_stOctree; /* +0x64 */
    unsigned char bStaticGeomObjHasNoTransformationMatrix; /* +0x68 */
    unsigned char bDynamicGeomObjHasZoomInsteadOfScale; /* +0x69 */
    COL_tdstCollideObject_* p_stDynamicColObj; /* +0x6c */
    MAT_tdstTransformation_* p_stT0DynamicGeomObjMatrix; /* +0x70 */
    MAT_tdstTransformation_* p_stT1DynamicGeomObjMatrix; /* +0x74 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x78..0x7f */
    MAT_tdstTransformation_ stInvMatrix; /* +0x80 */
    MAT_tdstTransformation_ stD2ST0TransformMatrix; /* +0xe0 */
    MAT_tdstTransformation_ stD2ST1TransformMatrix; /* +0x140 */
    MAT_tdstTransformation_ stS2DT0TransformMatrix; /* +0x1a0 */
    MAT_tdstTransformation_ stS2DT1TransformMatrix; /* +0x200 */
    float xStaticScale; /* +0x260 */
    COL_tdstElementSpheres_* p_stDynamicElementSpheres; /* +0x264 */
    COL_tdstElementSpheres_* p_stStaticElementSpheres; /* +0x268 */
    int lBitsFieldOfIndexedSpheresInCollision; /* +0x26c */
    COL_tdstIndexedSphere_* p_stStaticIndexedSphere; /* +0x270 */
    MTH3D_tdstVector_ stSwapDinST0Point; /* +0x274 */
    MTH3D_tdstVector_* p_stDynamicCenter; /* +0x280 */
    MTH3D_tdstVector_* p_stStaticCenter; /* +0x284 */
    float xSwapRadius; /* +0x288 */
    unsigned char bUseEnlargeSphere; /* +0x28c */
    short xNumberOfSelectedNodes; /* +0x28e */
    int aDEF_pstSelectedNode[100]; /* +0x290 */
    float aDEF_xSelectedT[100]; /* +0x420 */
    COL_tdstElementAlignedBoxes_* p_stDynamicElementAlignedBoxes; /* +0x5b0 */
    short xDynamicIndexedAlignedBoxIndex; /* +0x5b4 */
    COL_tdstIndexedAlignedBox_* p_stDynamicIndexedAlignedBox; /* +0x5b8 */
    MTH3D_tdstVector_* p_stDynamicMinPoint; /* +0x5bc */
    MTH3D_tdstVector_* p_stDynamicMaxPoint; /* +0x5c0 */
    MTH3D_tdstVector_ stDinST0MaxPoint; /* +0x5c4 */
    MTH3D_tdstVector_ stDinST0MinPoint; /* +0x5d0 */
    MTH3D_tdstVector_ stDinST1MaxPoint; /* +0x5dc */
    MTH3D_tdstVector_ stDinST1MinPoint; /* +0x5e8 */
    MTH3D_tdstVector_ a8_stDinST08VBox[8]; /* +0x5f4 */
    MTH3D_tdstVector_ a8_stDinST18VBox[8]; /* +0x654 */
    MTH3D_tdstVector_ a8_stDinST01Vect[8]; /* +0x6b4 */
    short xStaticIndexedSphereIndex; /* +0x714 */
    COL_tdstElementAlignedBoxes_* p_stStaticElementAlignedBoxes; /* +0x718 */
    COL_tdstIndexedAlignedBox_* p_stStaticIndexedBox; /* +0x71c */
    MTH3D_tdstVector_* p_stStaticMinPoint; /* +0x720 */
    MTH3D_tdstVector_* p_stStaticMaxPoint; /* +0x724 */
    MTH3D_tdstVector_ StaticMinPoint; /* +0x728 */
    MTH3D_tdstVector_ StaticMaxPoint; /* +0x734 */
    MTH3D_tdstVector_ a8_stStatic8VBox[8]; /* +0x740 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct COL_tdstElementIndexedTriangles_ {
    GMT_tdstGameMaterial_* hMaterial; /* +0x0 */
    COL_tdstTripledIndex_* d_stListOfFacesTripled; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x8 */
    short xNbFaces; /* +0xc */
    short xIndexOfParallelBox; /* +0xe */
    GEO_tdstElementIndexedTriangles_* p_stGeometricElementForVisualisation; /* +0x10 */
    COL_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x14 */
    MTH3D_tdstVector_* d_stListOfEdgesNormals; /* +0x18 */
    int d_xListOfEdgesCoeff; /* +0x1c */
    short xNbEdges; /* +0x20 */
};

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GEO_tdstElementIndexedTriangles_ {
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    short xNbFaces; /* +0x4 */
    short xNbElementUV; /* +0x6 */
    short xNbUVStages; /* +0x8 */
    GEO_tdstTripledIndex_* d_stListOfFacesTripled; /* +0xc */
    GEO_tdstTripledIndex_* d_stListOfFacesTripledIndexUV; /* +0x10 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x14 */
    ACP_tdst2DUVValues_* d_stListOfElementUV; /* +0x18 */
    GEO_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x1c */
    GEO_tdstTripledIndex_* d_stListOfFacesAdjacent; /* +0x20 */
    int d_stListOfIndexUsedByThisElement; /* +0x24 */
    short xNumberOfIndexsUsed; /* +0x28 */
    short xIndexOfParallelBox; /* +0x2a */
    unsigned int glDisplayList; /* +0x2c */
    int p_xSpecialValue; /* +0x30 */
    unsigned char bVisibleInPortal; /* +0x34 */
    unsigned int pVertexArrays[4]; /* +0x38 */
};

struct COL_tdstElementAlignedBoxes_ {
    COL_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
};

COL_tdstGVForCollision_ COL_g_stGVForCol;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGO.c lines 477–502 */
/* addr: 0x0024ccb0  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 477
 *   +0x0004 -> line 486
 *   +0x0008 -> line 477
 *   +0x000c -> line 479
 *   +0x0010 -> line 477
 *   +0x0014 -> line 486
 *   +0x0018 -> line 477
 *   +0x0020 -> line 479
 *   +0x0024 -> line 482
 *   +0x002c -> line 483
 *   +0x0034 -> line 485
 *   +0x003c -> line 486
 *   +0x0044 -> line 487
 *   +0x0048 -> line 480
 *   +0x004c -> line 487
 *   +0x0050 -> line 488
 *   +0x0058 -> line 481
 *   +0x0060 -> line 484
 *   +0x0068 -> line 480
 *   +0x006c -> line 491
 *   +0x00ac -> line 498
 *   +0x00b4 -> line 501
 *   +0x0198 -> line 502
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticGeomObj1WithStaticGeomObj2(COL_tdstCollideObject_* _hGeometricObject1, MAT_tdstTransformation_* _p_stGeometricObjectStartMatrix1, MAT_tdstTransformation_* _p_stGeometricObjectEndMatrix1, COL_tdstCollideObject_* _hGeometricObject2, MAT_tdstTransformation_* _p_stGeometricObjectMatrix2, void* _p_vParameter1, short _sParameter2, unsigned char _bStaticGeomObjHasNoTransformationMatrix, unsigned char _bDynamicGeomObjHasZoomInsteadOfScale)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGO.c lines 350–406 */
/* addr: 0x0024ce60  size: 372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 350
 *   +0x0010 -> line 356
 *   +0x0018 -> line 357
 *   +0x0020 -> line 358
 *   +0x0028 -> line 359
 *   +0x0030 -> line 360
 *   +0x0038 -> line 365
 *   +0x0044 -> line 368
 *   +0x0054 -> line 373
 *   +0x0064 -> line 378
 *   +0x00e4 -> line 380
 *   +0x00ec -> line 384
 *   +0x00f0 -> line 381
 *   +0x00f4 -> line 382
 *   +0x00f8 -> line 383
 *   +0x00fc -> line 384
 *   +0x0100 -> line 380
 *   +0x0108 -> line 381
 *   +0x0114 -> line 382
 *   +0x0120 -> line 383
 *   +0x012c -> line 384
 *   +0x0138 -> line 390
 *   +0x0144 -> line 397
 *   +0x0150 -> line 400
 *   +0x0158 -> line 403
 *   +0x0164 -> line 406
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vInitCollideStaticGeomObjWithStaticGeomObj(COL_tdstGVForCollision_* p_stGV)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGO.c lines 180–309 */
/* addr: 0x0024cfe0  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 180
 *   +0x0020 -> line 188
 *   +0x0024 -> line 180
 *   +0x0034 -> line 189
 *   +0x0038 -> line 190
 *   +0x003c -> line 191
 *   +0x0040 -> line 192
 *   +0x0044 -> line 193
 *   +0x0048 -> line 195
 *   +0x004c -> line 196
 *   +0x0050 -> line 197
 *   +0x0054 -> line 203
 *   +0x005c -> line 206
 *   +0x0064 -> line 208
 *   +0x0068 -> line 209
 *   +0x006c -> line 210
 *   +0x0070 -> line 213
 *   +0x0078 -> line 217
 *   +0x007c -> line 218
 *   +0x0080 -> line 219
 *   +0x0084 -> line 220
 *   +0x0088 -> line 221
 *   +0x008c -> line 223
 *   +0x0090 -> line 224
 *   +0x0094 -> line 225
 *   +0x0098 -> line 226
 *   +0x009c -> line 231
 *   +0x00d0 -> line 235
 *   +0x00d4 -> line 236
 *   +0x00d8 -> line 237
 *   +0x00dc -> line 238
 *   +0x00e0 -> line 240
 *   +0x00e4 -> line 241
 *   +0x00ec -> line 245
 *   +0x010c -> line 254
 *   +0x011c -> line 268
 *   +0x0120 -> line 266
 *   +0x0124 -> line 268
 *   +0x0128 -> line 271
 *   +0x012c -> line 273
 *   +0x0130 -> line 274
 *   +0x0134 -> line 275
 *   +0x0138 -> line 277
 *   +0x013c -> line 279
 *   +0x0140 -> line 280
 *   +0x0144 -> line 281
 *   +0x0148 -> line 282
 *   +0x014c -> line 283
 *   +0x0150 -> line 284
 *   +0x0154 -> line 287
 *   +0x0158 -> line 288
 *   +0x015c -> line 289
 *   +0x0160 -> line 292
 *   +0x0164 -> line 302
 *   +0x0178 -> line 309
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char COL_fn_bDetectCollisionStaticGeomObjWithStaticGeomObj(COL_tdstBoundingSphere_* _hDynamicGeometricObject, MAT_tdstTransformation_* _p_stDynamicGeometricObjectMatrix, void* _hStaticGeometricObject, MAT_tdstTransformation_* _p_stStaticGeometricObjectMatrix, unsigned char _bStaticGeomObjHasNoTransformationMatrix, unsigned char _bHasABoxBoundingVolume)
{
    float fGap;
    float xRadiusDinG;
    float xRadiusSum;
    MTH4D_tdstVector_* pResult;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGO.c lines 114–167 */
/* addr: 0x0024d180  size: 352 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 114
 *   +0x0008 -> line 121
 *   +0x0030 -> line 126
 *   +0x0038 -> line 127
 *   +0x0040 -> line 131
 *   +0x0048 -> line 140
 *   +0x006c -> line 141
 *   +0x008c -> line 143
 *   +0x0094 -> line 151
 *   +0x0098 -> line 147
 *   +0x009c -> line 151
 *   +0x00f4 -> line 154
 *   +0x0130 -> line 157
 *   +0x0138 -> line 158
 *   +0x0144 -> line 159
 *   +0x014c -> line 163
 *   +0x0154 -> line 167
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float MAT_fn_xGetMaxScaleTest(MAT_tdstTransformation_* _hTransform)
{
    MTH4D_tdstVector_* p_stScale;
    MTH4D_tdstMatrix_* p_stMatrix;
    float xMax;
    /* TODO: decompile from asm/... */
}
