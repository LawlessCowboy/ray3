/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

static float COL_g_xEdgeCoeffForNewComputations;
int COL_g_p_stEdgeNormalForNewComputations;
int g_pstGV;
int COL_g_d_lTaggedFacesTable;
int COL_g_lFacesTagCounter;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 74–80 */
/* addr: 0x0024ee80  size: 196 bytes */
void COL_fn_vMinMaxBox2VerticesBox(/* function pointer */ int a8_stBoxDest, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stMaxPoint)
{
    /* line map: */
    /*   line 74 @ +0x000 */
    /*   line 76 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 80 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1461–1768 */
/* addr: 0x0024ef50  size: 2028 bytes */
void COL_fn_vCollideStaticSphereWithStaticAlignedBox(/* function pointer */ int p_stGV)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int tempNormal;
    /* aggregate */ int tempHit;
    float tempTime;
    unsigned char bCollide;
    float zHalfEdge;
    float yHalfEdge;
    float xHalfEdge;
    /* aggregate */ int stEndPosition;
    short xIndex;
    short xIndexClosest;
    float a6_Distance[6];
    float xTrans;
    /* aggregate */ int stMovementVector;
    /* aggregate */ int stTrans;
    /* aggregate */ int stNormal;
    /* aggregate */ int stPointBox;
    /* aggregate */ int stVectCenterHit;
    /* aggregate */ int stHitPoint;
    /* line map: */
    /*   line 1479 @ +0x000 */
    /*   line 1479 @ +0x000 */
    /*   line 1498 @ +0x000 */
    /*   line 1498 @ +0x000 */
    /*   line 1461 @ +0x000 */
    /*   line 1482 @ +0x000 */
    /*   line 1483 @ +0x000 */
    /*   line 1488 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1365–1423 */
/* addr: 0x0024f740  size: 588 bytes */
void COL_fn_vCollideStaticElementSpheresWithStaticElementAlignedBoxes(/* function pointer */ int p_stGV)
{
    short xStaticIndexedBoxIndex;
    short xDynamicIndexedSphereIndex;
    /* line map: */
    /*   line 1365 @ +0x000 */
    /*   line 1400 @ +0x000 */
    /*   line 1371 @ +0x000 */
    /*   line 1390 @ +0x000 */
    /*   line 1392 @ +0x000 */
    /*   line 1391 @ +0x000 */
    /*   line 1392 @ +0x000 */
    /*   line 1391 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1282–1335 */
/* addr: 0x0024f990  size: 1028 bytes */
unsigned char COL_fn_bCollideStaticElementSpheresWithStaticBoundingVolumes(/* function pointer */ int p_stGV, int* _aDEF_lBitsFieldInCollision, unsigned char _bPartialResult, /* function pointer */ int param3, /* function pointer */ int p_stMaxPointBox, /* function pointer */ int p_stMinPointBox, /* function pointer */ int hBox)
{
    unsigned char bResult;
    /* aggregate */ int stMaxPointLocalSphere;
    /* aggregate */ int stMinPointLocalSphere;
    /* aggregate */ int stMaxPointSphere;
    /* aggregate */ int stMinPointSphere;
    /* aggregate */ int stFirstCenter;
    int* p_lCurrentBitsField;
    short xIndexSphere;
    short xIndexBox;
    /* line map: */
    /*   line 1286 @ +0x000 */
    /*   line 1286 @ +0x000 */
    /*   line 1286 @ +0x000 */
    /*   line 1282 @ +0x000 */
    /*   line 1285 @ +0x000 */
    /*   line 1290 @ +0x000 */
    /*   line 1290 @ +0x000 */
    /*   line 1296 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1196–1259 */
/* addr: 0x0024fda0  size: 500 bytes */
void COL_fn_vCollideStaticElementSpheresWithStaticElements(/* function pointer */ int p_stGV)
{
    short xIndexBox;
    int a_DEF_lBitsFieldOfCollisionsWithBoundingBox[50];
    /* line map: */
    /*   line 1196 @ +0x000 */
    /*   line 1207 @ +0x000 */
    /*   line 1212 @ +0x000 */
    /*   line 1215 @ +0x000 */
    /*   line 1215 @ +0x000 */
    /*   line 1218 @ +0x000 */
    /*   line 1221 @ +0x000 */
    /*   line 1226 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 1020–1179 */
/* addr: 0x0024ffa0  size: 1628 bytes */
void COL_fn_vCollideStaticElementSpheresWithStaticOctree(/* function pointer */ int p_stGV, /* function pointer */ int p_stEdgeNormal, /* function pointer */ int param2, /* function pointer */ int pV3, /* function pointer */ int pV2, /* function pointer */ int pV1)
{
    short xData;
    short xData;
    short xStaticEdgeIndex;
    short xDynamicIndexedSphereIndex;
    short xNbElements;
    /* aggregate */ int stMaxPoint;
    /* aggregate */ int stMinPoint;
    short xDataElementIndex;
    unsigned char xIndex;
    short xNodeIndex;
    unsigned char* p_xListIndex;
    /* line map: */
    /*   line 1020 @ +0x000 */
    /*   line 1032 @ +0x000 */
    /*   line 1032 @ +0x000 */
    /*   line 1026 @ +0x000 */
    /*   line 1032 @ +0x000 */
    /*   line 1032 @ +0x000 */
    /*   line 1038 @ +0x000 */
    /*   line 1036 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 963–993 */
/* addr: 0x00250600  size: 580 bytes */
void COL_fn_vCollideStaticElementSpheresWithStaticElementSpheres(/* function pointer */ int p_stGV)
{
    short xStaticIndexedSphereIndex;
    short xDynamicIndexedSphereIndex;
    /* line map: */
    /*   line 963 @ +0x000 */
    /*   line 975 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 975 @ +0x000 */
    /*   line 975 @ +0x000 */
    /*   line 981 @ +0x000 */
    /*   line 979 @ +0x000 */
    /*   line 984 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 820–945 */
/* addr: 0x00250850  size: 1612 bytes */
void COL_fn_vCollideStaticSphereWithStaticSphere(/* function pointer */ int p_stGV)
{
    /* aggregate */ int stEndPosition;
    /* aggregate */ int stTempDistance;
    /* aggregate */ int stTempNormal;
    /* aggregate */ int stTempHit;
    /* aggregate */ int stNormal;
    /* aggregate */ int stHit;
    float xT;
    float xNorm;
    /* aggregate */ int stEndPosition;
    /* aggregate */ int stTempDistance;
    /* aggregate */ int stTempHit;
    /* aggregate */ int stTempNormal;
    /* aggregate */ int stCenterToCenter;
    /* aggregate */ int stMovementVector;
    float xRadiusSum;
    /* line map: */
    /*   line 820 @ +0x000 */
    /*   line 833 @ +0x000 */
    /*   line 836 @ +0x000 */
    /*   line 836 @ +0x000 */
    /*   line 849 @ +0x000 */
    /*   line 849 @ +0x000 */
    /*   line 855 @ +0x000 */
    /*   line 859 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 735–804 */
/* addr: 0x00250ea0  size: 1068 bytes */
void COL_fn_vCollideStaticElementSpheresWithStaticElementIndexedTriangles(/* function pointer */ int p_stGV, /* function pointer */ int p_stEdgeNormal)
{
    short xStaticEdgeIndex;
    short xDynamicIndexedSphereIndex;
    /* line map: */
    /*   line 735 @ +0x000 */
    /*   line 742 @ +0x000 */
    /*   line 742 @ +0x000 */
    /*   line 748 @ +0x000 */
    /*   line 748 @ +0x000 */
    /*   line 757 @ +0x000 */
    /*   line 752 @ +0x000 */
    /*   line 757 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 576–717 */
/* addr: 0x002512d0  size: 1996 bytes */
unsigned char COL_fn_bCollideStaticSphereWithStaticIndexedTriangle(/* function pointer */ int p_stGV, /* function pointer */ int p_stNormal, /* function pointer */ int p_stVertex3, /* function pointer */ int p_stVertex2, /* function pointer */ int p_stVertex1)
{
    /* aggregate */ int stEndPosition;
    /* aggregate */ int stTempDistance;
    /* aggregate */ int stTempNormal;
    /* aggregate */ int stTempHit;
    /* aggregate */ int stHit;
    float xT;
    /* aggregate */ int stT1Center;
    /* aggregate */ int stEndPosition;
    /* aggregate */ int stTempNormal;
    /* aggregate */ int stTempHit;
    /* aggregate */ int stTempDistance;
    float xDistance;
    /* aggregate */ int stMovementVector;
    /* aggregate */ int stSegmentVector;
    /* aggregate */ int stSegmentStartPoint;
    /* line map: */
    /*   line 576 @ +0x000 */
    /*   line 576 @ +0x000 */
    /*   line 576 @ +0x000 */
    /*   line 577 @ +0x000 */
    /*   line 577 @ +0x000 */
    /*   line 584 @ +0x000 */
    /*   line 576 @ +0x000 */
    /*   line 584 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 387–552 */
/* addr: 0x00251aa0  size: 524 bytes */
unsigned char COL_fn_bIsCollisionPossibleStaticSphereWithStaticIndexedTriangle(/* function pointer */ int p_stGV, /* function pointer */ int pVertex, /* function pointer */ int param2, /* function pointer */ int p_stNormal, /* function pointer */ int p_stVertex3, /* function pointer */ int p_stVertex2, /* function pointer */ int p_stVertex1)
{
    short* pTriIndex;
    int result;
    float xRadius;
    /* line map: */
    /*   line 387 @ +0x000 */
    /*   line 395 @ +0x000 */
    /*   line 408 @ +0x000 */
    /*   line 399 @ +0x000 */
    /*   line 402 @ +0x000 */
    /*   line 402 @ +0x000 */
    /*   line 405 @ +0x000 */
    /*   line 404 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CsSphElt.c lines 220–363 */
/* addr: 0x00251cb0  size: 2136 bytes */
void COL_fn_vCollideStaticSphereWithStaticEdge(/* function pointer */ int p_stGV, /* function pointer */ int p_stNormal)
{
    short xEdgeEntity;
    /* aggregate */ int stEndPosition;
    /* aggregate */ int stTempNormal;
    /* aggregate */ int stTempDistance;
    /* aggregate */ int stTempHit;
    /* aggregate */ int stNormal;
    /* aggregate */ int stHit;
    /* aggregate */ int stTempVector;
    float xT;
    float xNorm;
    /* aggregate */ int stTemporaryForDotProduct;
    short xEdgeEntity;
    /* aggregate */ int stEndPosition;
    /* aggregate */ int stTempDistance;
    /* aggregate */ int stTempNormal;
    /* aggregate */ int stTempHit;
    float xDotProduct;
    /* aggregate */ int stMovementVector;
    /* line map: */
    /*   line 220 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 260 @ +0x000 */
    /* TODO: decompile from asm/... */
}
