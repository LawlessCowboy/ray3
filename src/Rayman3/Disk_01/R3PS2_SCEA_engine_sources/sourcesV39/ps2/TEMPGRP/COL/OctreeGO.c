/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c lines 912–924 */
/* addr: 0x00257bc0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 912
 *   +0x0008 -> line 914
 *   +0x000c -> line 915
 *   +0x0010 -> line 918
 *   +0x0018 -> line 921
 *   +0x0020 -> line 924
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vExploreOctreeWithSegment(COL_tdstOctree_* p_stOctree, MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, COL_tdstOctreeNode_** d_pstSelectedNode, float* d_xSelectedT, short* p_xNumberOfSelectedNodes)
{
    *p_xNumberOfSelectedNodes = 0;
    COL_g_xSelectedDepth = 0;
    COL_g_xDepth = 0;
    if (p_stOctree != NULL)
        COL_fn_vExploreRecursiveOctreeWithSegment(p_stOctree->p_stOctreeRoot, p_stVertexA, p_stVectAB, d_pstSelectedNode, d_xSelectedT, p_xNumberOfSelectedNodes);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c lines 861–894 */
/* addr: 0x00257bf0  size: 600 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 861
 *   +0x0034 -> line 864
 *   +0x003c -> line 866
 *   +0x0050 -> line 864
 *   +0x0054 -> line 866
 *   +0x0064 -> line 871
 *   +0x0070 -> line 874
 *   +0x008c -> line 875
 *   +0x00ac -> line 876
 *   +0x00cc -> line 877
 *   +0x00ec -> line 878
 *   +0x010c -> line 879
 *   +0x012c -> line 880
 *   +0x014c -> line 881
 *   +0x016c -> line 882
 *   +0x0174 -> line 885
 *   +0x0180 -> line 888
 *   +0x0220 -> line 889
 *   +0x0228 -> line 893
 *   +0x0234 -> line 894
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vExploreRecursiveOctreeWithSegment(COL_tdstOctreeNode_* p_stNodeToBeExplored, MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, COL_tdstOctreeNode_** d_pstSelectedNode, float* d_xSelectedT, short* p_xNumberOfSelectedNodes)
{
    float xT;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c lines 790–802 */
/* addr: 0x00257e50  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 790
 *   +0x0008 -> line 792
 *   +0x000c -> line 793
 *   +0x0010 -> line 796
 *   +0x0018 -> line 799
 *   +0x0020 -> line 802
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vExploreOctreeWithBox(COL_tdstOctree_* p_stOctree, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, COL_tdstOctreeNode_** d_pstSelectedNode, short* p_xNumberOfSelectedNodes)
{
    *p_xNumberOfSelectedNodes = 0;
    COL_g_xSelectedDepth = 0;
    COL_g_xDepth = 0;
    if (p_stOctree != NULL)
        COL_fn_vExploreRecursiveOctreeWithBox(p_stOctree->p_stOctreeRoot, p_stMinPoint, p_stMaxPoint, d_pstSelectedNode, p_xNumberOfSelectedNodes);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c lines 696–773 */
/* addr: 0x00257e80  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 696
 *   +0x002c -> line 697
 *   +0x0034 -> line 699
 *   +0x0044 -> line 697
 *   +0x0048 -> line 699
 *   +0x0058 -> line 703
 *   +0x0064 -> line 706
 *   +0x007c -> line 707
 *   +0x0098 -> line 708
 *   +0x00b4 -> line 709
 *   +0x00d0 -> line 710
 *   +0x00ec -> line 711
 *   +0x0108 -> line 712
 *   +0x0124 -> line 713
 *   +0x0140 -> line 714
 *   +0x0148 -> line 717
 *   +0x0154 -> line 720
 *   +0x0164 -> line 722
 *   +0x0170 -> line 723
 *   +0x017c -> line 724
 *   +0x0184 -> line 772
 *   +0x0190 -> line 773
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
