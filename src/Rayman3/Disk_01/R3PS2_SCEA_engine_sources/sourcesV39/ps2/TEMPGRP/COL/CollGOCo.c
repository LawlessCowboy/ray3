/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct COL_tdstCollisionCase_ COL_tdstCollisionCase_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct COL_tdstGVForCollision_ COL_tdstGVForCollision_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct anon_0 anon_0;

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
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstCollisionCase_ {
    float xCollisionTime; /* +0x0 */
    MTH3D_tdstVector_ stCollisionNormal; /* +0x4 */
    MTH3D_tdstVector_ stCollisionPoint; /* +0x10 */
    GMT_tdstGameMaterial_* hDynamicMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hStaticMaterial; /* +0x20 */
    int p_vParameter1; /* +0x24 */
    int sParameter2; /* +0x28 */
    short xDynamicGeomEntity; /* +0x2c */
    short xStaticGeomEntity; /* +0x2e */
    MTH3D_tdstVector_ stTranslation; /* +0x30 */
    MTH3D_tdstVector_ stMovement; /* +0x3c */
    MTH3D_tdstVector_ stEndPosition; /* +0x48 */
    float xSphereRadius; /* +0x54 */
    float m_xSlide1; /* +0x58 */
    float m_xRebound1; /* +0x5c */
    float m_xSlide2; /* +0x60 */
    float m_xRebound2; /* +0x64 */
};

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
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

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
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

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
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

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_* p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
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

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
};

struct COL_tdstElementAlignedBoxes_ {
    COL_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct anon_0 {
    MTH3D_tdstVector_ A; /* +0x0 */
    MTH3D_tdstVector_ B; /* +0xc */
    int Ind; /* +0x18 */
};

int COL_g_stCollisionCaseReal;
int COL_g_lNbElementsInTable;
int g_NbCollidedEdges;
int g_pstGV;
anon_0 g_aCollidedEdges[50];
COL_tdstGVForCollision_ COL_g_stGVForCol;
COL_tdstCollisionCase_ COL_g_stCollisionCase[75];
int COL_g_lMaxNumberOfCollisions;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c lines 120–267 */
/* addr: 0x0024d2e0  size: 1728 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 120
 *   +0x0040 -> line 136
 *   +0x0044 -> line 120
 *   +0x005c -> line 136
 *   +0x0068 -> line 139
 *   +0x008c -> line 142
 *   +0x0098 -> line 143
 *   +0x00c0 -> line 145
 *   +0x00c8 -> line 148
 *   +0x00e8 -> line 155
 *   +0x00f8 -> line 153
 *   +0x00fc -> line 155
 *   +0x0110 -> line 160
 *   +0x0204 -> line 167
 *   +0x020c -> line 168
 *   +0x0214 -> line 173
 *   +0x0218 -> line 174
 *   +0x022c -> line 175
 *   +0x0230 -> line 179
 *   +0x0234 -> line 181
 *   +0x0250 -> line 183
 *   +0x026c -> line 186
 *   +0x0284 -> line 191
 *   +0x0288 -> line 188
 *   +0x028c -> line 191
 *   +0x02a0 -> line 193
 *   +0x02d0 -> line 195
 *   +0x02e4 -> line 197
 *   +0x02ec -> line 199
 *   +0x030c -> line 200
 *   +0x0358 -> line 203
 *   +0x0360 -> line 208
 *   +0x0370 -> line 213
 *   +0x0374 -> line 210
 *   +0x0378 -> line 213
 *   +0x038c -> line 216
 *   +0x03b8 -> line 217
 *   +0x03cc -> line 219
 *   +0x03d4 -> line 221
 *   +0x03f4 -> line 222
 *   +0x0440 -> line 224
 *   +0x0448 -> line 228
 *   +0x044c -> line 229
 *   +0x0460 -> line 231
 *   +0x046c -> line 242
 *   +0x0470 -> line 243
 *   +0x0488 -> line 244
 *   +0x04a0 -> line 245
 *   +0x04b8 -> line 246
 *   +0x04dc -> line 247
 *   +0x0500 -> line 248
 *   +0x0504 -> line 249
 *   +0x0508 -> line 250
 *   +0x0510 -> line 251
 *   +0x0518 -> line 252
 *   +0x051c -> line 253
 *   +0x0520 -> line 254
 *   +0x0528 -> line 258
 *   +0x0538 -> line 262
 *   +0x053c -> line 263
 *   +0x0554 -> line 265
 *   +0x0688 -> line 267
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vAddInStaticCollisionTable(float _xT, MTH3D_tdstVector_* _p_stTranslation, MTH3D_tdstVector_* _p_stHit, MTH3D_tdstVector_* _p_stNormal, GMT_tdstGameMaterial_* _hDynMat, GMT_tdstGameMaterial_* _hStatMat, short _xDynamicGeomEntity, short _xStaticGeomEntity, void* _p_vParameter1, short _sParameter2, MTH3D_tdstVector_* _p_stMovement, float _xSphereRadius, MTH3D_tdstVector_* _p_stEndPosition)
{
    COL_tdstCollisionCase_* end;
    COL_tdstCollisionCase_* p;
    int iNumberOfElementToCopy;
    COL_tdstCollisionCase_* end;
    COL_tdstCollisionCase_* p;
    int iNumberOfElementToCopy;
    GMT_tdstCollideMaterial_* hCollideMaterial;
    COL_tdstCollisionCase_* p_stCollisionCase;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c lines 80–83 */
/* addr: 0x0024d9a0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 *   +0x0014 -> line 82
 *   +0x0018 -> line 80
 *   +0x001c -> line 82
 *   +0x0020 -> line 80
 *   +0x0024 -> line 82
 *   +0x0028 -> line 80
 *   +0x003c -> line 81
 *   +0x0054 -> line 82
 *   +0x0058 -> line 83
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vGetCollidedEgde(int Ind, MTH3D_tdstVector_* _pV1, MTH3D_tdstVector_* _pV2, int* i)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c lines 76–76 */
/* addr: 0x0024da00  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 76
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int COL_fn_iNbCollidedEdges(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c lines 71–71 */
/* addr: 0x0024da10  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 71
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vResetNbCollidedEdges(void)
{
    /* TODO: decompile from asm/... */
}
