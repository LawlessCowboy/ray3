/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersEd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct GLI_tdstDataOfElement_ GLI_tdstDataOfElement_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GEO_tdstElementPoints_ GEO_tdstElementPoints_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct GEO_tdstElementSpheres_ GEO_tdstElementSpheres_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;
typedef struct GEO_tdstElementLines_ GEO_tdstElementLines_;
typedef struct GEO_tdstElementAlignedBoxes_ GEO_tdstElementAlignedBoxes_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct GEO_tdstIndexedSphere_ GEO_tdstIndexedSphere_;
typedef struct GEO_tdstIndexedAlignedBox_ GEO_tdstIndexedAlignedBox_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_* p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
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

struct GLI_tdstDataOfElement_ {
    MTH3D_tdstVector_ stHit; /* +0x0 */
    float xDistance; /* +0xc */
    short xElements; /* +0x10 */
    short xIndexOfFace; /* +0x12 */
    short xIndexOfEdge; /* +0x14 */
    short xIndexOfPoint; /* +0x16 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
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

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GEO_tdstElementPoints_ {
    float xFatness; /* +0x0 */
    int d_xListOfPointIndex; /* +0x4 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x8 */
    short xNbPoints; /* +0xc */
    short xIndexOfParallelBox; /* +0xe */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
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

struct GEO_tdstElementSpheres_ {
    GEO_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
};

struct GEO_tdstElementLines_ {
    float xThickness; /* +0x0 */
    GEO_tdstDoubledIndex_* d_stListOfLineIndex; /* +0x4 */
    GLI_tdstMaterial_* d_hListOfLinesVisualMaterial; /* +0x8 */
    GEO_tdstColor_* d_stListOfLinesReceivedLightIntensity; /* +0xc */
    short xNbLines; /* +0x10 */
    short xIndexOfParallelBox; /* +0x12 */
};

struct GEO_tdstElementAlignedBoxes_ {
    GEO_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct COL_tdstElementAlignedBoxes_ {
    COL_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct GEO_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GEO_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x4 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

short COL_g_xDepth;
short COL_g_xSelectedDepth;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersEd.c lines 509–573 */
/* addr: 0x00255250  size: 916 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 509
 *   +0x0044 -> line 518
 *   +0x0054 -> line 519
 *   +0x005c -> line 521
 *   +0x0074 -> line 523
 *   +0x0078 -> line 521
 *   +0x007c -> line 523
 *   +0x0084 -> line 521
 *   +0x008c -> line 523
 *   +0x0098 -> line 524
 *   +0x00a4 -> line 525
 *   +0x00a8 -> line 526
 *   +0x00b0 -> line 529
 *   +0x00b4 -> line 526
 *   +0x00b8 -> line 529
 *   +0x00e8 -> line 532
 *   +0x00fc -> line 533
 *   +0x0118 -> line 535
 *   +0x011c -> line 538
 *   +0x0120 -> line 536
 *   +0x0124 -> line 538
 *   +0x0128 -> line 536
 *   +0x016c -> line 537
 *   +0x019c -> line 539
 *   +0x01bc -> line 540
 *   +0x01c4 -> line 544
 *   +0x01d8 -> line 545
 *   +0x01ec -> line 547
 *   +0x01f0 -> line 550
 *   +0x01f4 -> line 548
 *   +0x01f8 -> line 550
 *   +0x01fc -> line 548
 *   +0x0240 -> line 549
 *   +0x0270 -> line 551
 *   +0x0290 -> line 552
 *   +0x0298 -> line 557
 *   +0x02b4 -> line 559
 *   +0x02b8 -> line 563
 *   +0x02bc -> line 560
 *   +0x02c0 -> line 563
 *   +0x02c4 -> line 560
 *   +0x02c8 -> line 561
 *   +0x030c -> line 562
 *   +0x033c -> line 564
 *   +0x035c -> line 565
 *   +0x0364 -> line 572
 *   +0x0368 -> line 573
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSemiAxeWithSphere(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius, unsigned char* bBack, float* p_xT, MTH3D_tdstVector_* p_stHit, MTH3D_tdstVector_* p_stNormal)
{
    float xInvR;
    float xT2;
    float xT1;
    float xB;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersEd.c lines 439–490 */
/* addr: 0x002555f0  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 439
 *   +0x001c -> line 442
 *   +0x0020 -> line 441
 *   +0x0024 -> line 443
 *   +0x002c -> line 446
 *   +0x0030 -> line 447
 *   +0x0034 -> line 446
 *   +0x0038 -> line 450
 *   +0x0048 -> line 452
 *   +0x0050 -> line 456
 *   +0x006c -> line 459
 *   +0x0070 -> line 458
 *   +0x0074 -> line 460
 *   +0x007c -> line 463
 *   +0x0080 -> line 464
 *   +0x0084 -> line 463
 *   +0x0088 -> line 467
 *   +0x0098 -> line 469
 *   +0x00a0 -> line 473
 *   +0x00bc -> line 476
 *   +0x00c0 -> line 475
 *   +0x00c4 -> line 477
 *   +0x00cc -> line 480
 *   +0x00d0 -> line 481
 *   +0x00d4 -> line 480
 *   +0x00d8 -> line 484
 *   +0x00e8 -> line 486
 *   +0x00ec -> line 490
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bFastRejectIntersectSemiaxeWithSphere(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius)
{
    float xMax;
    float xMin;
    /* TODO: decompile from asm/... */
}
