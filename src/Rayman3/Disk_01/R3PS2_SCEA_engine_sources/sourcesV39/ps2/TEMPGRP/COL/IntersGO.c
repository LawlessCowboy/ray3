/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

unsigned int g_xMask;
/* array */ int COL_g_a12_stBoxEdges[12];
int COL_g_d_lTaggedFacesTable;
int COL_g_lFacesTagCounter;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 442–490 */
/* addr: 0x002555f0  size: 244 bytes */
unsigned char INT_fn_bFastRejectIntersectSemiaxeWithSphere(/* function pointer */ int p_stVertex1, /* function pointer */ int p_stVect12, /* function pointer */ int p_stSphereCenter, float xSphereRadius)
{
    float xMax;
    float xMin;
    /* line map: */
    /*   line 442 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 447 @ +0x000 */
    /*   line 450 @ +0x000 */
    /*   line 456 @ +0x000 */
    /*   line 458 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 463 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 2879–3086 */
/* addr: 0x002556f0  size: 3056 bytes */
unsigned char INT_fn_bDetectIntersectGeomObjWithGeomObj(/* function pointer */ int p_stGeomObj1, /* function pointer */ int _p_stMatrix1, /* function pointer */ int p_stGeomObj2, /* function pointer */ int _p_stMatrix2, /* function pointer */ int _p_hMat1, /* function pointer */ int _p_hMat2, /* function pointer */ int p_stIndexedAlignedBox2, /* function pointer */ int p_stIndexedSphere2, /* function pointer */ int p_stElementAlignedBoxes2, /* function pointer */ int p_stElementSpheres2, /* function pointer */ int p_stIndexedAlignedBox1, /* function pointer */ int p_stIndexedSphere1, /* function pointer */ int p_stElementAlignedBoxes1, /* function pointer */ int p_stElementSpheres1)
{
    short xEdgeIndex;
    short xVertexIndex;
    /* aggregate */ int stEdgeVector;
    /* array */ int a8_st8VBox1in2[8];
    /* array */ int a8_st8VBox1[8];
    /* array */ int a8_st8VBox2in1[8];
    /* array */ int a8_st8VBox2[8];
    /* aggregate */ int stCenter2;
    /* aggregate */ int stCenter1;
    /* aggregate */ int stCenter2in1;
    /* aggregate */ int stCenter1in2;
    short xDataElementIndex2;
    short xElementIndex2;
    short xDataElementIndex1;
    short xElementIndex1;
    /* aggregate */ int st21TransformMatrix;
    /* aggregate */ int st12TransformMatrix;
    /* aggregate */ int stInvMatrix2;
    /* line map: */
    /*   line 2879 @ +0x000 */
    /*   line 2879 @ +0x000 */
    /*   line 2882 @ +0x000 */
    /*   line 2886 @ +0x000 */
    /*   line 2890 @ +0x000 */
    /*   line 2890 @ +0x000 */
    /*   line 2893 @ +0x000 */
    /*   line 2893 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 2059–2140 */
/* addr: 0x002562e0  size: 808 bytes */
unsigned char INT_fn_bGetInclusionPointInCollideObject(/* function pointer */ int p_stPoint, /* function pointer */ int p_stGeomObj, /* function pointer */ int p_stNormal, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stIndexedAlignedBox, /* function pointer */ int p_stIndexedSphere, /* function pointer */ int p_stElementAlignedBoxes, /* function pointer */ int p_stElementSpheres, /* function pointer */ int p_stElementIndexedTriangles)
{
    short xNbIntersect;
    /* aggregate */ int stZNormal;
    /* aggregate */ int stHit;
    float xT;
    short xDataElementIndex;
    short xElementIndex;
    /* line map: */
    /*   line 2059 @ +0x000 */
    /*   line 2063 @ +0x000 */
    /*   line 2059 @ +0x000 */
    /*   line 2065 @ +0x000 */
    /*   line 2068 @ +0x000 */
    /*   line 2073 @ +0x000 */
    /*   line 2073 @ +0x000 */
    /*   line 2081 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 1182–1458 */
/* addr: 0x00256610  size: 1940 bytes */
unsigned char INT_fn_bDetectIntersectSegmentWithFaceOfCollideObject(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int p_stGeomObj, /* function pointer */ int hCollidedCollideMaterial, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stIndexedAlignedBox, /* function pointer */ int p_stIndexedSphere, /* function pointer */ int p_stNormal, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stElementAlignedBoxes, /* function pointer */ int p_stElementSpheres, /* function pointer */ int p_stElementIndexedTriangles)
{
    short xData;
    short xData;
    short xNbElements;
    float aDEF_xSelectedT[100];
    /* aggregate */ int aDEF_pstSelectedNode;
    short xNumberOfSelectedNodes;
    unsigned char xIndex;
    short xNodeIndex;
    unsigned char* p_xListIndex;
    short xDataElementIndex;
    short xElementIndex;
    /* line map: */
    /*   line 1182 @ +0x000 */
    /*   line 1187 @ +0x000 */
    /*   line 1191 @ +0x000 */
    /*   line 1194 @ +0x000 */
    /*   line 1205 @ +0x000 */
    /*   line 1205 @ +0x000 */
    /*   line 1213 @ +0x000 */
    /*   line 1213 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 429–524 */
/* addr: 0x00256db0  size: 948 bytes */
unsigned char INT_fn_bIntersectSegmentWithFaceOfGeometricObject(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVertexB, /* function pointer */ int p_stVectAB, /* function pointer */ int p_stGeomObj, short xNbMaxElements, short* p_xNbElements, /* function pointer */ int d_stDataOfElement, /* function pointer */ int p_stIndexedAlignedBox, /* function pointer */ int p_stIndexedSphere, /* function pointer */ int p_stNormal, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stElementAlignedBoxes, /* function pointer */ int p_stElementSpheres, /* function pointer */ int p_stElementIndexedTriangles)
{
    /* aggregate */ int stHit;
    float xT;
    /* aggregate */ int stNormal;
    short xDataElementIndex;
    short xElementIndex;
    /* line map: */
    /*   line 429 @ +0x000 */
    /*   line 429 @ +0x000 */
    /*   line 435 @ +0x000 */
    /*   line 435 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 441 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 119–392 */
/* addr: 0x00257170  size: 2216 bytes */
unsigned char INT_fn_bIntersectSegmentWithFaceOfCollideObject(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVertexB, /* function pointer */ int p_stVectAB, /* function pointer */ int p_stGeomObj, short xNbMaxElements, short* p_xNbElements, /* function pointer */ int d_stDataOfElement, /* function pointer */ int hCM, /* function pointer */ int hCM, /* function pointer */ int hMaterial, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stIndexedAlignedBox, /* function pointer */ int p_stIndexedSphere, /* function pointer */ int p_stNormal, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stElementAlignedBoxes, /* function pointer */ int p_stElementSpheres, /* function pointer */ int p_stElementIndexedTriangles)
{
    short xData;
    short xData;
    short xNbElements;
    float aDEF_xSelectedT[100];
    /* aggregate */ int aDEF_pstSelectedNode;
    short xNumberOfSelectedNodes;
    /* aggregate */ int stHit;
    float xT;
    /* aggregate */ int stNormal;
    short xIndex;
    short xNodeIndex;
    short xDataElementIndex;
    unsigned char* p_xListIndex;
    short xElementIndex;
    /* line map: */
    /*   line 119 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 129 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 141 @ +0x000 */
    /*   line 151 @ +0x000 */
    /*   line 151 @ +0x000 */
    /* TODO: decompile from asm/... */
}
