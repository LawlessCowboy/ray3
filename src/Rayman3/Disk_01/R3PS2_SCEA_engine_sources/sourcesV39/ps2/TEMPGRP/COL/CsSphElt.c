/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct COL_tdstGVForCollision_ COL_tdstGVForCollision_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_* p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
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

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct COL_tdstElementAlignedBoxes_ {
    COL_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
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

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
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

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

static float COL_g_xEdgeCoeffForNewComputations;
int COL_g_p_stEdgeNormalForNewComputations;
int g_pstGV;
int COL_g_d_lTaggedFacesTable;
int COL_g_lFacesTagCounter;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1437–1768 */
/* addr: 0x0024ef50  size: 2028 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1437
 *   +0x0004 -> line 1479
 *   +0x0008 -> line 1437
 *   +0x000c -> line 1479
 *   +0x0010 -> line 1437
 *   +0x0020 -> line 1498
 *   +0x0024 -> line 1437
 *   +0x0028 -> line 1498
 *   +0x002c -> line 1468
 *   +0x0030 -> line 1461
 *   +0x0034 -> line 1479
 *   +0x006c -> line 1482
 *   +0x0070 -> line 1487
 *   +0x0074 -> line 1483
 *   +0x0078 -> line 1487
 *   +0x007c -> line 1488
 *   +0x0084 -> line 1489
 *   +0x0088 -> line 1484
 *   +0x008c -> line 1489
 *   +0x0090 -> line 1490
 *   +0x0098 -> line 1491
 *   +0x009c -> line 1492
 *   +0x00a0 -> line 1491
 *   +0x00a4 -> line 1492
 *   +0x00a8 -> line 1498
 *   +0x00b0 -> line 1506
 *   +0x00cc -> line 1511
 *   +0x013c -> line 1514
 *   +0x0148 -> line 1518
 *   +0x0150 -> line 1514
 *   +0x0170 -> line 1518
 *   +0x0184 -> line 1526
 *   +0x018c -> line 1528
 *   +0x01a8 -> line 1532
 *   +0x01b0 -> line 1535
 *   +0x020c -> line 1548
 *   +0x0210 -> line 1555
 *   +0x0218 -> line 1565
 *   +0x0230 -> line 1566
 *   +0x0238 -> line 1568
 *   +0x024c -> line 1569
 *   +0x0254 -> line 1573
 *   +0x025c -> line 1572
 *   +0x0260 -> line 1573
 *   +0x0264 -> line 1576
 *   +0x027c -> line 1577
 *   +0x0284 -> line 1579
 *   +0x0298 -> line 1580
 *   +0x02a0 -> line 1584
 *   +0x02a8 -> line 1583
 *   +0x02ac -> line 1584
 *   +0x02b0 -> line 1587
 *   +0x02c8 -> line 1588
 *   +0x02d0 -> line 1590
 *   +0x02e4 -> line 1591
 *   +0x02ec -> line 1595
 *   +0x02f4 -> line 1594
 *   +0x02f8 -> line 1595
 *   +0x02fc -> line 1598
 *   +0x0300 -> line 1601
 *   +0x0304 -> line 1598
 *   +0x0308 -> line 1601
 *   +0x030c -> line 1598
 *   +0x0310 -> line 1601
 *   +0x0314 -> line 1598
 *   +0x031c -> line 1601
 *   +0x0324 -> line 1607
 *   +0x0328 -> line 1610
 *   +0x032c -> line 1607
 *   +0x0338 -> line 1610
 *   +0x0344 -> line 1611
 *   +0x0358 -> line 1612
 *   +0x035c -> line 1615
 *   +0x0360 -> line 1616
 *   +0x0364 -> line 1615
 *   +0x0368 -> line 1616
 *   +0x0370 -> line 1615
 *   +0x0374 -> line 1616
 *   +0x037c -> line 1615
 *   +0x0384 -> line 1616
 *   +0x039c -> line 1617
 *   +0x03a0 -> line 1619
 *   +0x03a4 -> line 1620
 *   +0x03ac -> line 1619
 *   +0x03b0 -> line 1620
 *   +0x03bc -> line 1619
 *   +0x03c4 -> line 1620
 *   +0x03dc -> line 1621
 *   +0x03e0 -> line 1624
 *   +0x03e4 -> line 1625
 *   +0x03e8 -> line 1624
 *   +0x03ec -> line 1625
 *   +0x03f4 -> line 1624
 *   +0x03f8 -> line 1625
 *   +0x0400 -> line 1624
 *   +0x0408 -> line 1625
 *   +0x0420 -> line 1626
 *   +0x0424 -> line 1628
 *   +0x0428 -> line 1629
 *   +0x0430 -> line 1628
 *   +0x0434 -> line 1629
 *   +0x0440 -> line 1628
 *   +0x0448 -> line 1629
 *   +0x0460 -> line 1630
 *   +0x0464 -> line 1633
 *   +0x0490 -> line 1637
 *   +0x0498 -> line 1640
 *   +0x04a0 -> line 1643
 *   +0x04a8 -> line 1646
 *   +0x04b0 -> line 1649
 *   +0x04b8 -> line 1651
 *   +0x04bc -> line 1661
 *   +0x04f4 -> line 1665
 *   +0x0568 -> line 1667
 *   +0x0588 -> line 1671
 *   +0x059c -> line 1681
 *   +0x05a4 -> line 1686
 *   +0x05dc -> line 1690
 *   +0x0650 -> line 1694
 *   +0x067c -> line 1697
 *   +0x069c -> line 1701
 *   +0x06b4 -> line 1708
 *   +0x06b8 -> line 1718
 *   +0x06c0 -> line 1732
 *   +0x06cc -> line 1708
 *   +0x06ec -> line 1714
 *   +0x06f0 -> line 1718
 *   +0x0720 -> line 1732
 *   +0x0774 -> line 1753
 *   +0x0794 -> line 1732
 *   +0x07a8 -> line 1753
 *   +0x07d0 -> line 1768
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticSphereWithStaticAlignedBox(COL_tdstGVForCollision_* p_stGV)
{
    float xNorm;
    float xNorm;
    MTH3D_tdstVector_ tempNormal;
    MTH3D_tdstVector_ tempHit;
    float tempTime;
    unsigned char bCollide;
    float zHalfEdge;
    float yHalfEdge;
    float xHalfEdge;
    MTH3D_tdstVector_ stEndPosition;
    short xIndex;
    short xIndexClosest;
    float a6_Distance[6];
    float xTrans;
    MTH3D_tdstVector_ stMovementVector;
    MTH3D_tdstVector_ stTrans;
    MTH3D_tdstVector_ stNormal;
    MTH3D_tdstVector_ stPointBox;
    MTH3D_tdstVector_ stVectCenterHit;
    MTH3D_tdstVector_ stHitPoint;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1357–1423 */
/* addr: 0x0024f740  size: 588 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1357
 *   +0x0024 -> line 1365
 *   +0x002c -> line 1368
 *   +0x0030 -> line 1400
 *   +0x0034 -> line 1368
 *   +0x003c -> line 1371
 *   +0x0060 -> line 1374
 *   +0x0074 -> line 1390
 *   +0x0078 -> line 1391
 *   +0x007c -> line 1392
 *   +0x0080 -> line 1395
 *   +0x0084 -> line 1391
 *   +0x008c -> line 1395
 *   +0x0090 -> line 1392
 *   +0x0098 -> line 1395
 *   +0x009c -> line 1391
 *   +0x00a4 -> line 1395
 *   +0x00a8 -> line 1391
 *   +0x00ac -> line 1392
 *   +0x00b4 -> line 1395
 *   +0x00b8 -> line 1392
 *   +0x00bc -> line 1395
 *   +0x00c4 -> line 1392
 *   +0x00c8 -> line 1391
 *   +0x00cc -> line 1395
 *   +0x00d0 -> line 1392
 *   +0x00d4 -> line 1395
 *   +0x00ec -> line 1396
 *   +0x011c -> line 1397
 *   +0x0148 -> line 1400
 *   +0x0150 -> line 1404
 *   +0x0160 -> line 1408
 *   +0x0164 -> line 1417
 *   +0x0168 -> line 1408
 *   +0x0170 -> line 1411
 *   +0x0194 -> line 1412
 *   +0x01b8 -> line 1415
 *   +0x01c4 -> line 1416
 *   +0x01cc -> line 1417
 *   +0x01d4 -> line 1419
 *   +0x01d8 -> line 1417
 *   +0x01dc -> line 1419
 *   +0x0208 -> line 1421
 *   +0x022c -> line 1423
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticElementSpheresWithStaticElementAlignedBoxes(COL_tdstGVForCollision_* p_stGV)
{
    short xStaticIndexedBoxIndex;
    short xDynamicIndexedSphereIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1271–1336 */
/* addr: 0x0024f990  size: 1028 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1271
 *   +0x0008 -> line 1286
 *   +0x000c -> line 1271
 *   +0x0010 -> line 1286
 *   +0x0014 -> line 1271
 *   +0x0038 -> line 1286
 *   +0x003c -> line 1271
 *   +0x0044 -> line 1282
 *   +0x0048 -> line 1286
 *   +0x004c -> line 1285
 *   +0x0070 -> line 1286
 *   +0x00bc -> line 1290
 *   +0x00c8 -> line 1286
 *   +0x00e4 -> line 1290
 *   +0x0108 -> line 1293
 *   +0x0114 -> line 1296
 *   +0x0118 -> line 1297
 *   +0x0124 -> line 1296
 *   +0x0144 -> line 1297
 *   +0x0190 -> line 1301
 *   +0x01a4 -> line 1297
 *   +0x01c0 -> line 1301
 *   +0x01e8 -> line 1303
 *   +0x01ec -> line 1301
 *   +0x01f0 -> line 1303
 *   +0x0214 -> line 1306
 *   +0x0224 -> line 1315
 *   +0x0244 -> line 1317
 *   +0x0250 -> line 1320
 *   +0x0258 -> line 1321
 *   +0x0260 -> line 1320
 *   +0x0264 -> line 1321
 *   +0x0268 -> line 1320
 *   +0x0280 -> line 1321
 *   +0x02cc -> line 1325
 *   +0x02d8 -> line 1321
 *   +0x02f4 -> line 1325
 *   +0x031c -> line 1326
 *   +0x0338 -> line 1328
 *   +0x0340 -> line 1329
 *   +0x0344 -> line 1328
 *   +0x0348 -> line 1329
 *   +0x034c -> line 1328
 *   +0x0354 -> line 1330
 *   +0x0368 -> line 1332
 *   +0x036c -> line 1330
 *   +0x0370 -> line 1332
 *   +0x0394 -> line 1333
 *   +0x0398 -> line 1334
 *   +0x03cc -> line 1335
 *   +0x03d4 -> line 1336
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char COL_fn_bCollideStaticElementSpheresWithStaticBoundingVolumes(COL_tdstGVForCollision_* p_stGV, int* _aDEF_lBitsFieldInCollision, unsigned char _bPartialResult)
{
    unsigned char bResult;
    MTH3D_tdstVector_ stMaxPointLocalSphere;
    MTH3D_tdstVector_ stMinPointLocalSphere;
    MTH3D_tdstVector_ stMaxPointSphere;
    MTH3D_tdstVector_ stMinPointSphere;
    MTH3D_tdstVector_ stFirstCenter;
    MTH3D_tdstVector_* param0;
    MTH3D_tdstVector_* p_stMaxPointBox;
    MTH3D_tdstVector_* p_stMinPointBox;
    COL_tdstParallelBox_* hBox;
    int* p_lCurrentBitsField;
    short xIndexSphere;
    short xIndexBox;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1192–1259 */
/* addr: 0x0024fda0  size: 500 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1192
 *   +0x0010 -> line 1196
 *   +0x0014 -> line 1198
 *   +0x003c -> line 1207
 *   +0x0048 -> line 1210
 *   +0x0050 -> line 1212
 *   +0x005c -> line 1214
 *   +0x0068 -> line 1215
 *   +0x006c -> line 1214
 *   +0x0070 -> line 1215
 *   +0x0098 -> line 1217
 *   +0x00a4 -> line 1218
 *   +0x00b0 -> line 1219
 *   +0x00b8 -> line 1221
 *   +0x00f8 -> line 1224
 *   +0x010c -> line 1226
 *   +0x0114 -> line 1227
 *   +0x0118 -> line 1226
 *   +0x0120 -> line 1227
 *   +0x0128 -> line 1229
 *   +0x0130 -> line 1231
 *   +0x0144 -> line 1233
 *   +0x014c -> line 1234
 *   +0x0150 -> line 1233
 *   +0x0158 -> line 1234
 *   +0x0160 -> line 1236
 *   +0x0168 -> line 1242
 *   +0x017c -> line 1244
 *   +0x0184 -> line 1245
 *   +0x0188 -> line 1244
 *   +0x0190 -> line 1245
 *   +0x0198 -> line 1250
 *   +0x01c0 -> line 1251
 *   +0x01c8 -> line 1254
 *   +0x01dc -> line 1256
 *   +0x01e4 -> line 1259
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticElementSpheresWithStaticElements(COL_tdstGVForCollision_* p_stGV)
{
    short xIndexBox;
    int a_DEF_lBitsFieldOfCollisionsWithBoundingBox[50];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1005–1180 */
/* addr: 0x0024ffa0  size: 1628 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1005
 *   +0x0030 -> line 1020
 *   +0x003c -> line 1023
 *   +0x0040 -> line 1032
 *   +0x0044 -> line 1023
 *   +0x0048 -> line 1032
 *   +0x0054 -> line 1023
 *   +0x005c -> line 1026
 *   +0x0080 -> line 1029
 *   +0x0094 -> line 1032
 *   +0x00e4 -> line 1035
 *   +0x00f4 -> line 1032
 *   +0x0108 -> line 1035
 *   +0x0158 -> line 1038
 *   +0x015c -> line 1035
 *   +0x0170 -> line 1036
 *   +0x019c -> line 1038
 *   +0x01a4 -> line 1041
 *   +0x01b8 -> line 1044
 *   +0x01d0 -> line 1047
 *   +0x01d4 -> line 1050
 *   +0x01dc -> line 1047
 *   +0x01e0 -> line 1050
 *   +0x01e8 -> line 1053
 *   +0x01ec -> line 1056
 *   +0x01f0 -> line 1053
 *   +0x0200 -> line 1054
 *   +0x0204 -> line 1056
 *   +0x0210 -> line 1058
 *   +0x0220 -> line 1059
 *   +0x0230 -> line 1064
 *   +0x0238 -> line 1066
 *   +0x023c -> line 1064
 *   +0x0240 -> line 1065
 *   +0x024c -> line 1066
 *   +0x025c -> line 1068
 *   +0x0264 -> line 1069
 *   +0x0268 -> line 1071
 *   +0x0278 -> line 1072
 *   +0x0290 -> line 1077
 *   +0x0298 -> line 1079
 *   +0x029c -> line 1077
 *   +0x02a0 -> line 1078
 *   +0x02ac -> line 1079
 *   +0x02bc -> line 1081
 *   +0x02c8 -> line 1085
 *   +0x0308 -> line 1091
 *   +0x0334 -> line 1093
 *   +0x0338 -> line 1094
 *   +0x034c -> line 1096
 *   +0x0354 -> line 1104
 *   +0x0358 -> line 1096
 *   +0x0364 -> line 1098
 *   +0x0368 -> line 1100
 *   +0x0374 -> line 1101
 *   +0x037c -> line 1104
 *   +0x038c -> line 1108
 *   +0x039c -> line 1116
 *   +0x03a0 -> line 1118
 *   +0x03b0 -> line 1122
 *   +0x03c4 -> line 1125
 *   +0x03cc -> line 1122
 *   +0x03e4 -> line 1123
 *   +0x03e8 -> line 1124
 *   +0x03ec -> line 1122
 *   +0x03f4 -> line 1123
 *   +0x0400 -> line 1122
 *   +0x0404 -> line 1123
 *   +0x0408 -> line 1122
 *   +0x040c -> line 1124
 *   +0x0418 -> line 1125
 *   +0x0420 -> line 1141
 *   +0x0424 -> line 1129
 *   +0x0428 -> line 1141
 *   +0x042c -> line 1130
 *   +0x0430 -> line 1141
 *   +0x0434 -> line 1131
 *   +0x0438 -> line 1146
 *   +0x043c -> line 1131
 *   +0x0480 -> line 1133
 *   +0x0484 -> line 1135
 *   +0x0490 -> line 1136
 *   +0x049c -> line 1139
 *   +0x04a8 -> line 1140
 *   +0x04ac -> line 1139
 *   +0x04bc -> line 1140
 *   +0x04c0 -> line 1139
 *   +0x04c4 -> line 1140
 *   +0x04c8 -> line 1139
 *   +0x04cc -> line 1140
 *   +0x04d0 -> line 1139
 *   +0x04d8 -> line 1140
 *   +0x04dc -> line 1141
 *   +0x04e8 -> line 1146
 *   +0x04f0 -> line 1154
 *   +0x04f4 -> line 1158
 *   +0x04f8 -> line 1155
 *   +0x04fc -> line 1158
 *   +0x0500 -> line 1156
 *   +0x0504 -> line 1157
 *   +0x0508 -> line 1158
 *   +0x050c -> line 1157
 *   +0x0510 -> line 1158
 *   +0x0524 -> line 1160
 *   +0x052c -> line 1163
 *   +0x0530 -> line 1164
 *   +0x0544 -> line 1166
 *   +0x054c -> line 1169
 *   +0x0550 -> line 1166
 *   +0x055c -> line 1167
 *   +0x0568 -> line 1168
 *   +0x0570 -> line 1169
 *   +0x0578 -> line 1174
 *   +0x05a8 -> line 1177
 *   +0x05d4 -> line 1178
 *   +0x0604 -> line 1179
 *   +0x062c -> line 1180
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticElementSpheresWithStaticOctree(COL_tdstGVForCollision_* p_stGV)
{
    MTH3D_tdstVector_* p_stEdgeNormal;
    MTH3D_tdstVector_* param0;
    MTH3D_tdstVector_* pV3;
    MTH3D_tdstVector_* pV2;
    MTH3D_tdstVector_* pV1;
    short xData;
    short xData;
    short xStaticEdgeIndex;
    short xDynamicIndexedSphereIndex;
    short xNbElements;
    MTH3D_tdstVector_ stMaxPoint;
    MTH3D_tdstVector_ stMinPoint;
    short xDataElementIndex;
    unsigned char xIndex;
    short xNodeIndex;
    unsigned char* p_xListIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 957–994 */
/* addr: 0x00250600  size: 580 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 957
 *   +0x0020 -> line 963
 *   +0x0030 -> line 966
 *   +0x0034 -> line 975
 *   +0x0044 -> line 966
 *   +0x004c -> line 969
 *   +0x0070 -> line 972
 *   +0x0084 -> line 975
 *   +0x00d4 -> line 978
 *   +0x00e4 -> line 975
 *   +0x00f8 -> line 978
 *   +0x0148 -> line 981
 *   +0x014c -> line 978
 *   +0x0160 -> line 979
 *   +0x018c -> line 981
 *   +0x0194 -> line 984
 *   +0x01a0 -> line 987
 *   +0x01a4 -> line 991
 *   +0x01a8 -> line 987
 *   +0x01b0 -> line 989
 *   +0x01bc -> line 990
 *   +0x01c4 -> line 991
 *   +0x01cc -> line 992
 *   +0x01d0 -> line 991
 *   +0x01d4 -> line 992
 *   +0x0200 -> line 993
 *   +0x0224 -> line 994
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticElementSpheresWithStaticElementSpheres(COL_tdstGVForCollision_* p_stGV)
{
    short xStaticIndexedSphereIndex;
    short xDynamicIndexedSphereIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 816–945 */
/* addr: 0x00250850  size: 1612 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 816
 *   +0x001c -> line 820
 *   +0x0040 -> line 825
 *   +0x0064 -> line 833
 *   +0x0088 -> line 835
 *   +0x00f8 -> line 836
 *   +0x0100 -> line 839
 *   +0x0108 -> line 836
 *   +0x0110 -> line 839
 *   +0x0120 -> line 849
 *   +0x0130 -> line 852
 *   +0x0134 -> line 849
 *   +0x0168 -> line 852
 *   +0x01a4 -> line 855
 *   +0x01b4 -> line 856
 *   +0x022c -> line 859
 *   +0x0290 -> line 863
 *   +0x0298 -> line 860
 *   +0x029c -> line 863
 *   +0x02a0 -> line 860
 *   +0x02a8 -> line 863
 *   +0x02b4 -> line 866
 *   +0x02b8 -> line 859
 *   +0x02c0 -> line 860
 *   +0x02c8 -> line 863
 *   +0x02cc -> line 859
 *   +0x02d4 -> line 863
 *   +0x02d8 -> line 859
 *   +0x02dc -> line 860
 *   +0x0318 -> line 863
 *   +0x031c -> line 860
 *   +0x0328 -> line 863
 *   +0x0334 -> line 865
 *   +0x0364 -> line 866
 *   +0x0370 -> line 867
 *   +0x03d0 -> line 870
 *   +0x03f0 -> line 867
 *   +0x0404 -> line 870
 *   +0x0430 -> line 875
 *   +0x0438 -> line 888
 *   +0x0498 -> line 890
 *   +0x04ac -> line 888
 *   +0x04c0 -> line 890
 *   +0x04d4 -> line 895
 *   +0x04e8 -> line 896
 *   +0x04f4 -> line 895
 *   +0x0554 -> line 896
 *   +0x05a8 -> line 899
 *   +0x05ac -> line 896
 *   +0x05c0 -> line 899
 *   +0x05cc -> line 902
 *   +0x05d0 -> line 904
 *   +0x05d4 -> line 902
 *   +0x05dc -> line 904
 *   +0x05e8 -> line 906
 *   +0x0630 -> line 945
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticSphereWithStaticSphere(COL_tdstGVForCollision_* p_stGV)
{
    MTH3D_tdstVector_ stEndPosition;
    MTH3D_tdstVector_ stTempDistance;
    MTH3D_tdstVector_ stTempNormal;
    MTH3D_tdstVector_ stTempHit;
    MTH3D_tdstVector_ stNormal;
    MTH3D_tdstVector_ stHit;
    float xT;
    float xNorm;
    MTH3D_tdstVector_ stEndPosition;
    MTH3D_tdstVector_ stTempDistance;
    MTH3D_tdstVector_ stTempHit;
    MTH3D_tdstVector_ stTempNormal;
    MTH3D_tdstVector_ stCenterToCenter;
    MTH3D_tdstVector_ stMovementVector;
    float xRadiusSum;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 731–804 */
/* addr: 0x00250ea0  size: 1068 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 731
 *   +0x0020 -> line 735
 *   +0x002c -> line 737
 *   +0x0050 -> line 742
 *   +0x0054 -> line 748
 *   +0x0064 -> line 742
 *   +0x006c -> line 745
 *   +0x0090 -> line 748
 *   +0x00e0 -> line 751
 *   +0x00f0 -> line 748
 *   +0x0104 -> line 751
 *   +0x0154 -> line 757
 *   +0x0158 -> line 751
 *   +0x016c -> line 752
 *   +0x019c -> line 755
 *   +0x01b4 -> line 757
 *   +0x01bc -> line 760
 *   +0x01c8 -> line 762
 *   +0x01cc -> line 767
 *   +0x01d4 -> line 762
 *   +0x01dc -> line 763
 *   +0x01e4 -> line 767
 *   +0x01ec -> line 777
 *   +0x01f8 -> line 780
 *   +0x0200 -> line 779
 *   +0x0204 -> line 780
 *   +0x0208 -> line 779
 *   +0x020c -> line 783
 *   +0x0210 -> line 779
 *   +0x0214 -> line 792
 *   +0x0218 -> line 779
 *   +0x024c -> line 780
 *   +0x0274 -> line 783
 *   +0x0278 -> line 780
 *   +0x0298 -> line 781
 *   +0x02c0 -> line 783
 *   +0x02c4 -> line 781
 *   +0x02c8 -> line 783
 *   +0x02cc -> line 781
 *   +0x02e8 -> line 783
 *   +0x0328 -> line 786
 *   +0x0344 -> line 787
 *   +0x0348 -> line 786
 *   +0x0354 -> line 787
 *   +0x0358 -> line 786
 *   +0x035c -> line 787
 *   +0x0360 -> line 786
 *   +0x0364 -> line 787
 *   +0x0368 -> line 786
 *   +0x0370 -> line 787
 *   +0x0374 -> line 788
 *   +0x0390 -> line 792
 *   +0x0398 -> line 800
 *   +0x039c -> line 792
 *   +0x03a0 -> line 800
 *   +0x03bc -> line 801
 *   +0x03e0 -> line 803
 *   +0x03e8 -> line 801
 *   +0x03ec -> line 803
 *   +0x040c -> line 804
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticElementSpheresWithStaticElementIndexedTriangles(COL_tdstGVForCollision_* p_stGV)
{
    MTH3D_tdstVector_* p_stEdgeNormal;
    short xStaticEdgeIndex;
    short xDynamicIndexedSphereIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 564–719 */
/* addr: 0x002512d0  size: 1996 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 564
 *   +0x0034 -> line 576
 *   +0x0054 -> line 581
 *   +0x005c -> line 576
 *   +0x0060 -> line 577
 *   +0x0064 -> line 576
 *   +0x0068 -> line 581
 *   +0x006c -> line 577
 *   +0x0070 -> line 578
 *   +0x0074 -> line 577
 *   +0x0078 -> line 578
 *   +0x007c -> line 584
 *   +0x0088 -> line 578
 *   +0x008c -> line 576
 *   +0x009c -> line 577
 *   +0x00a0 -> line 584
 *   +0x00a4 -> line 577
 *   +0x00a8 -> line 584
 *   +0x00ac -> line 577
 *   +0x00b0 -> line 584
 *   +0x00b4 -> line 578
 *   +0x00bc -> line 577
 *   +0x00c0 -> line 578
 *   +0x00c8 -> line 584
 *   +0x00d4 -> line 586
 *   +0x0148 -> line 588
 *   +0x014c -> line 590
 *   +0x0150 -> line 588
 *   +0x0154 -> line 589
 *   +0x0158 -> line 588
 *   +0x015c -> line 589
 *   +0x0160 -> line 590
 *   +0x0164 -> line 592
 *   +0x0168 -> line 589
 *   +0x016c -> line 592
 *   +0x0170 -> line 588
 *   +0x0174 -> line 590
 *   +0x0178 -> line 592
 *   +0x0180 -> line 588
 *   +0x0184 -> line 592
 *   +0x018c -> line 589
 *   +0x0194 -> line 588
 *   +0x0198 -> line 589
 *   +0x019c -> line 590
 *   +0x01a0 -> line 589
 *   +0x01a8 -> line 588
 *   +0x01ac -> line 589
 *   +0x01b0 -> line 590
 *   +0x01b4 -> line 589
 *   +0x01bc -> line 590
 *   +0x01cc -> line 592
 *   +0x01e0 -> line 600
 *   +0x0250 -> line 601
 *   +0x0254 -> line 602
 *   +0x0258 -> line 601
 *   +0x025c -> line 606
 *   +0x0260 -> line 601
 *   +0x0264 -> line 606
 *   +0x0268 -> line 602
 *   +0x026c -> line 610
 *   +0x0270 -> line 601
 *   +0x0274 -> line 610
 *   +0x0278 -> line 602
 *   +0x027c -> line 610
 *   +0x0288 -> line 601
 *   +0x028c -> line 610
 *   +0x0290 -> line 601
 *   +0x0298 -> line 602
 *   +0x02b4 -> line 606
 *   +0x02b8 -> line 610
 *   +0x02bc -> line 606
 *   +0x02dc -> line 608
 *   +0x02fc -> line 610
 *   +0x030c -> line 624
 *   +0x0324 -> line 626
 *   +0x0328 -> line 624
 *   +0x032c -> line 626
 *   +0x0334 -> line 624
 *   +0x033c -> line 626
 *   +0x0348 -> line 627
 *   +0x034c -> line 634
 *   +0x0354 -> line 627
 *   +0x0358 -> line 634
 *   +0x0368 -> line 635
 *   +0x0370 -> line 638
 *   +0x0374 -> line 637
 *   +0x0390 -> line 638
 *   +0x039c -> line 641
 *   +0x03a8 -> line 646
 *   +0x03bc -> line 641
 *   +0x03dc -> line 642
 *   +0x0408 -> line 646
 *   +0x0418 -> line 647
 *   +0x0420 -> line 649
 *   +0x0488 -> line 652
 *   +0x048c -> line 649
 *   +0x04a0 -> line 652
 *   +0x04ac -> line 654
 *   +0x04bc -> line 655
 *   +0x051c -> line 664
 *   +0x053c -> line 655
 *   +0x0550 -> line 664
 *   +0x057c -> line 669
 *   +0x0584 -> line 679
 *   +0x05a8 -> line 684
 *   +0x05ac -> line 682
 *   +0x05b0 -> line 684
 *   +0x05b4 -> line 682
 *   +0x05b8 -> line 684
 *   +0x05d4 -> line 682
 *   +0x0618 -> line 684
 *   +0x0628 -> line 695
 *   +0x0688 -> line 697
 *   +0x068c -> line 695
 *   +0x06a0 -> line 697
 *   +0x06ac -> line 700
 *   +0x06b0 -> line 702
 *   +0x06b4 -> line 700
 *   +0x06bc -> line 702
 *   +0x06c8 -> line 703
 *   +0x0728 -> line 705
 *   +0x0740 -> line 703
 *   +0x0754 -> line 705
 *   +0x0784 -> line 710
 *   +0x078c -> line 712
 *   +0x0794 -> line 717
 *   +0x0798 -> line 719
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char COL_fn_bCollideStaticSphereWithStaticIndexedTriangle(COL_tdstGVForCollision_* p_stGV)
{
    MTH3D_tdstVector_ stEndPosition;
    MTH3D_tdstVector_ stTempDistance;
    MTH3D_tdstVector_ stTempNormal;
    MTH3D_tdstVector_ stTempHit;
    MTH3D_tdstVector_ stHit;
    float xT;
    MTH3D_tdstVector_ stT1Center;
    MTH3D_tdstVector_ stEndPosition;
    MTH3D_tdstVector_ stTempNormal;
    MTH3D_tdstVector_ stTempHit;
    MTH3D_tdstVector_ stTempDistance;
    float xDistance;
    MTH3D_tdstVector_ stMovementVector;
    MTH3D_tdstVector_ stSegmentVector;
    MTH3D_tdstVector_ stSegmentStartPoint;
    MTH3D_tdstVector_* p_stNormal;
    MTH3D_tdstVector_* p_stVertex3;
    MTH3D_tdstVector_* p_stVertex2;
    MTH3D_tdstVector_* p_stVertex1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 387–552 */
/* addr: 0x00251aa0  size: 524 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 398
 *   +0x0004 -> line 387
 *   +0x0008 -> line 398
 *   +0x000c -> line 395
 *   +0x0010 -> line 399
 *   +0x0014 -> line 408
 *   +0x0018 -> line 398
 *   +0x0024 -> line 399
 *   +0x0028 -> line 398
 *   +0x002c -> line 402
 *   +0x0030 -> line 398
 *   +0x0034 -> line 402
 *   +0x0038 -> line 404
 *   +0x003c -> line 405
 *   +0x0040 -> line 402
 *   +0x0044 -> line 404
 *   +0x004c -> line 406
 *   +0x0050 -> line 405
 *   +0x0058 -> line 404
 *   +0x005c -> line 405
 *   +0x0064 -> line 404
 *   +0x0068 -> line 406
 *   +0x0074 -> line 408
 *   +0x00d8 -> line 409
 *   +0x00f0 -> line 410
 *   +0x00f4 -> line 416
 *   +0x00f8 -> line 417
 *   +0x00fc -> line 418
 *   +0x0100 -> line 419
 *   +0x0104 -> line 420
 *   +0x010c -> line 421
 *   +0x0110 -> line 422
 *   +0x0114 -> line 423
 *   +0x0118 -> line 424
 *   +0x011c -> line 425
 *   +0x0120 -> line 426
 *   +0x0124 -> line 428
 *   +0x0128 -> line 429
 *   +0x012c -> line 430
 *   +0x0130 -> line 432
 *   +0x0134 -> line 433
 *   +0x0138 -> line 434
 *   +0x013c -> line 437
 *   +0x0140 -> line 438
 *   +0x0144 -> line 439
 *   +0x0148 -> line 440
 *   +0x014c -> line 441
 *   +0x0150 -> line 442
 *   +0x0154 -> line 443
 *   +0x0158 -> line 444
 *   +0x015c -> line 445
 *   +0x0160 -> line 446
 *   +0x0164 -> line 448
 *   +0x0168 -> line 449
 *   +0x016c -> line 450
 *   +0x0170 -> line 452
 *   +0x0174 -> line 453
 *   +0x0178 -> line 454
 *   +0x017c -> line 457
 *   +0x0180 -> line 458
 *   +0x0184 -> line 459
 *   +0x0188 -> line 460
 *   +0x018c -> line 461
 *   +0x0190 -> line 462
 *   +0x0194 -> line 463
 *   +0x0198 -> line 464
 *   +0x019c -> line 465
 *   +0x01a0 -> line 466
 *   +0x01a4 -> line 468
 *   +0x01a8 -> line 469
 *   +0x01ac -> line 470
 *   +0x01b0 -> line 472
 *   +0x01b4 -> line 473
 *   +0x01b8 -> line 474
 *   +0x01bc -> line 478
 *   +0x01c0 -> line 479
 *   +0x01c4 -> line 480
 *   +0x01c8 -> line 481
 *   +0x01cc -> line 482
 *   +0x01d0 -> line 483
 *   +0x01d4 -> line 484
 *   +0x01d8 -> line 486
 *   +0x01dc -> line 487
 *   +0x01e0 -> line 488
 *   +0x01e4 -> line 489
 *   +0x01e8 -> line 491
 *   +0x01ec -> line 492
 *   +0x01f0 -> line 493
 *   +0x01f4 -> line 496
 *   +0x01f8 -> line 545
 *   +0x0200 -> line 546
 *   +0x0204 -> line 552
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char COL_fn_bIsCollisionPossibleStaticSphereWithStaticIndexedTriangle(COL_tdstGVForCollision_* p_stGV)
{
    MTH3D_tdstVector_* pVertex;
    short* pTriIndex;
    int result;
    MTH3D_tdstVector_* param0;
    float xRadius;
    MTH3D_tdstVector_* p_stNormal;
    MTH3D_tdstVector_* p_stVertex3;
    MTH3D_tdstVector_* p_stVertex2;
    MTH3D_tdstVector_* p_stVertex1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 214–371 */
/* addr: 0x00251cb0  size: 2136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 214
 *   +0x0020 -> line 220
 *   +0x0094 -> line 223
 *   +0x00d8 -> line 226
 *   +0x00f4 -> line 234
 *   +0x0118 -> line 237
 *   +0x0188 -> line 239
 *   +0x01a4 -> line 253
 *   +0x01b4 -> line 254
 *   +0x01c0 -> line 253
 *   +0x01d8 -> line 254
 *   +0x01e4 -> line 255
 *   +0x01f0 -> line 258
 *   +0x01f4 -> line 255
 *   +0x01f8 -> line 258
 *   +0x021c -> line 260
 *   +0x023c -> line 262
 *   +0x0248 -> line 265
 *   +0x0250 -> line 262
 *   +0x0288 -> line 265
 *   +0x02b8 -> line 266
 *   +0x032c -> line 267
 *   +0x0350 -> line 269
 *   +0x0388 -> line 271
 *   +0x0394 -> line 272
 *   +0x039c -> line 275
 *   +0x03ac -> line 277
 *   +0x03b4 -> line 279
 *   +0x03c0 -> line 281
 *   +0x03d0 -> line 283
 *   +0x0404 -> line 285
 *   +0x041c -> line 289
 *   +0x0440 -> line 291
 *   +0x0458 -> line 289
 *   +0x045c -> line 291
 *   +0x04ac -> line 293
 *   +0x04b0 -> line 291
 *   +0x04c4 -> line 293
 *   +0x04d0 -> line 294
 *   +0x0530 -> line 302
 *   +0x0550 -> line 294
 *   +0x0564 -> line 302
 *   +0x0590 -> line 307
 *   +0x0598 -> line 322
 *   +0x05c4 -> line 329
 *   +0x05ec -> line 332
 *   +0x0600 -> line 329
 *   +0x0604 -> line 332
 *   +0x0650 -> line 337
 *   +0x0658 -> line 335
 *   +0x065c -> line 337
 *   +0x0660 -> line 335
 *   +0x0670 -> line 332
 *   +0x0674 -> line 335
 *   +0x0678 -> line 332
 *   +0x067c -> line 335
 *   +0x0680 -> line 332
 *   +0x0688 -> line 335
 *   +0x068c -> line 332
 *   +0x0690 -> line 335
 *   +0x06a8 -> line 336
 *   +0x06d8 -> line 337
 *   +0x06f0 -> line 339
 *   +0x0728 -> line 341
 *   +0x0734 -> line 342
 *   +0x073c -> line 345
 *   +0x074c -> line 347
 *   +0x0754 -> line 349
 *   +0x0760 -> line 353
 *   +0x0764 -> line 355
 *   +0x0768 -> line 353
 *   +0x0770 -> line 355
 *   +0x077c -> line 356
 *   +0x07dc -> line 363
 *   +0x07f4 -> line 356
 *   +0x0808 -> line 363
 *   +0x0838 -> line 371
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vCollideStaticSphereWithStaticEdge(COL_tdstGVForCollision_* p_stGV, MTH3D_tdstVector_* p_stNormal)
{
    short xEdgeEntity;
    MTH3D_tdstVector_ stEndPosition;
    MTH3D_tdstVector_ stTempNormal;
    MTH3D_tdstVector_ stTempDistance;
    MTH3D_tdstVector_ stTempHit;
    MTH3D_tdstVector_ stNormal;
    MTH3D_tdstVector_ stHit;
    MTH3D_tdstVector_ stTempVector;
    float xT;
    float xNorm;
    MTH3D_tdstVector_ stTemporaryForDotProduct;
    short xEdgeEntity;
    MTH3D_tdstVector_ stEndPosition;
    MTH3D_tdstVector_ stTempDistance;
    MTH3D_tdstVector_ stTempNormal;
    MTH3D_tdstVector_ stTempHit;
    float xDotProduct;
    MTH3D_tdstVector_ stMovementVector;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 134–164 */
/* addr: 0x00252510  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 134
 *   +0x0008 -> line 135
 *   +0x0020 -> line 138
 *   +0x0038 -> line 140
 *   +0x0058 -> line 143
 *   +0x0060 -> line 147
 *   +0x006c -> line 150
 *   +0x0070 -> line 157
 *   +0x0074 -> line 163
 *   +0x0078 -> line 150
 *   +0x0080 -> line 157
 *   +0x0084 -> line 158
 *   +0x0088 -> line 157
 *   +0x008c -> line 150
 *   +0x0098 -> line 158
 *   +0x00c0 -> line 161
 *   +0x00c4 -> line 163
 *   +0x00c8 -> line 164
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vEnlargeSphereIfNecessary(COL_tdstGVForCollision_* p_stGV)
{
    float xNewRadius;
    /* TODO: decompile from asm/... */
}
