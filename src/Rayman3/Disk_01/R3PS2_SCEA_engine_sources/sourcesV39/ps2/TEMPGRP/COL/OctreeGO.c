/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
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

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
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

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
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

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
};

int COL_g_d_xSelectedFaceIndexList;
int COL_g_d_lTaggedFacesTable;
int COL_g_lFacesTagCounter;
int COL_g_lMaxNumberOfTaggedFaces;
short COL_g_xSelectedDepth;
int COL_g_lFacesInList;
int COL_g_lMemory;
short COL_g_xFinalNodeCounter;
short COL_g_xNodeCounter;
short COL_g_xDepth;
short COL_g_xOctreeMaxDepth;
short COL_g_xTotalNumberOfFacesLimit;
short COL_g_xNumberOfFacesLimit;

/* The recursive helpers are defined below their public entry points. */
void COL_fn_vExploreRecursiveOctreeWithSegment(COL_tdstOctreeNode_*, MTH3D_tdstVector_*, MTH3D_tdstVector_*, COL_tdstOctreeNode_**, float*, short*);
void COL_fn_vExploreRecursiveOctreeWithBox(COL_tdstOctreeNode_*, MTH3D_tdstVector_*, MTH3D_tdstVector_*, COL_tdstOctreeNode_**, short*);

void COL_fn_vExploreOctreeWithSegment(COL_tdstOctree_* p_stOctree, MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, COL_tdstOctreeNode_** d_pstSelectedNode, float* d_xSelectedT, short* p_xNumberOfSelectedNodes)
{
    *p_xNumberOfSelectedNodes = 0;
    COL_g_xSelectedDepth = 0;
    COL_g_xDepth = 0;
    if (p_stOctree != NULL)
        COL_fn_vExploreRecursiveOctreeWithSegment(p_stOctree->p_stOctreeRoot, p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
}

unsigned char INT_fn_bDetectIntersectSegmentWithBox(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, float* _p_xT);

/* Inlined sorted insertion (original name unknown): retail maps the whole
 * insertion loop to the single call line 888. */
static inline void COL_fn_vInsertNodeSortedByT(COL_tdstOctreeNode_* p_stNode, float xT, COL_tdstOctreeNode_** d_pstSelectedNode, float* d_xSelectedT, short* p_xNumberOfSelectedNodes)
{
    short i;

    for (i = *p_xNumberOfSelectedNodes; i > 0 && xT < d_xSelectedT[i - 1]; i--)
    {
        if (i < 100)
        {
            d_pstSelectedNode[i] = d_pstSelectedNode[i - 1];
            d_xSelectedT[i] = d_xSelectedT[i - 1];
        }
    }
    if (i < 100)
    {
        d_pstSelectedNode[i] = p_stNode;
        d_xSelectedT[i] = xT;
        if (*p_xNumberOfSelectedNodes < 100)
            (*p_xNumberOfSelectedNodes)++;
    }
}

void COL_fn_vExploreRecursiveOctreeWithSegment(COL_tdstOctreeNode_* p_stNodeToBeExplored, MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, COL_tdstOctreeNode_** d_pstSelectedNode, float* d_xSelectedT, short* p_xNumberOfSelectedNodes)
{
    float xT;

    COL_g_xDepth++;

    if (INT_fn_bDetectIntersectSegmentWithBox(p_stVertexA, p_stVectAB, &p_stNodeToBeExplored->stMinPart, &p_stNodeToBeExplored->stMaxPart, &xT))
    {
        if (p_stNodeToBeExplored->p_pstChildList)
        {
            COL_fn_vExploreRecursiveOctreeWithSegment(p_stNodeToBeExplored->p_pstChildList[0], p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithSegment(p_stNodeToBeExplored->p_pstChildList[1], p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithSegment(p_stNodeToBeExplored->p_pstChildList[2], p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithSegment(p_stNodeToBeExplored->p_pstChildList[3], p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithSegment(p_stNodeToBeExplored->p_pstChildList[4], p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithSegment(p_stNodeToBeExplored->p_pstChildList[5], p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithSegment(p_stNodeToBeExplored->p_pstChildList[6], p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithSegment(p_stNodeToBeExplored->p_pstChildList[7], p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
        }
        else if (p_stNodeToBeExplored->d_xFaceIndexList)
        {
            COL_fn_vInsertNodeSortedByT(p_stNodeToBeExplored, xT, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
            COL_g_xSelectedDepth = COL_g_xDepth;
        }
    }

    COL_g_xDepth--;
}

void COL_fn_vExploreOctreeWithBox(COL_tdstOctree_* p_stOctree, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, COL_tdstOctreeNode_** d_pstSelectedNode, short* p_xNumberOfSelectedNodes)
{
    *p_xNumberOfSelectedNodes = 0;
    COL_g_xSelectedDepth = 0;
    COL_g_xDepth = 0;
    if (p_stOctree != NULL)
        COL_fn_vExploreRecursiveOctreeWithBox(p_stOctree->p_stOctreeRoot, p_stMinPoint, p_stMaxPoint, d_pstSelectedNode, p_xNumberOfSelectedNodes);
}

unsigned char INT_fn_bIntersectBoxWithBox(MTH3D_tdstVector_* p_stMinPoint1, MTH3D_tdstVector_* p_stMaxPoint1, MTH3D_tdstVector_* p_stMinPoint2, MTH3D_tdstVector_* p_stMaxPoint2);

void COL_fn_vExploreRecursiveOctreeWithBox(COL_tdstOctreeNode_* p_stNodeToBeExplored, MTH3D_tdstVector_* p_stMinSituation, MTH3D_tdstVector_* p_stMaxSituation, COL_tdstOctreeNode_** d_pstSelectedNode, short* p_xNumberOfSelectedNodes)
{
    COL_g_xDepth++;

    if (INT_fn_bIntersectBoxWithBox(p_stMinSituation, p_stMaxSituation, &p_stNodeToBeExplored->stMinPart, &p_stNodeToBeExplored->stMaxPart))
    {
        if (p_stNodeToBeExplored->p_pstChildList)
        {
            COL_fn_vExploreRecursiveOctreeWithBox(p_stNodeToBeExplored->p_pstChildList[0], p_stMinSituation, p_stMaxSituation, d_pstSelectedNode, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithBox(p_stNodeToBeExplored->p_pstChildList[1], p_stMinSituation, p_stMaxSituation, d_pstSelectedNode, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithBox(p_stNodeToBeExplored->p_pstChildList[2], p_stMinSituation, p_stMaxSituation, d_pstSelectedNode, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithBox(p_stNodeToBeExplored->p_pstChildList[3], p_stMinSituation, p_stMaxSituation, d_pstSelectedNode, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithBox(p_stNodeToBeExplored->p_pstChildList[4], p_stMinSituation, p_stMaxSituation, d_pstSelectedNode, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithBox(p_stNodeToBeExplored->p_pstChildList[5], p_stMinSituation, p_stMaxSituation, d_pstSelectedNode, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithBox(p_stNodeToBeExplored->p_pstChildList[6], p_stMinSituation, p_stMaxSituation, d_pstSelectedNode, p_xNumberOfSelectedNodes);
            COL_fn_vExploreRecursiveOctreeWithBox(p_stNodeToBeExplored->p_pstChildList[7], p_stMinSituation, p_stMaxSituation, d_pstSelectedNode, p_xNumberOfSelectedNodes);
        }
        else if (p_stNodeToBeExplored->d_xFaceIndexList)
        {
            if (*p_xNumberOfSelectedNodes < 100)
            {
                d_pstSelectedNode[*p_xNumberOfSelectedNodes] = p_stNodeToBeExplored;
                (*p_xNumberOfSelectedNodes)++;
                COL_g_xSelectedDepth = COL_g_xDepth;
            }
        }
    }

    COL_g_xDepth--;
}
