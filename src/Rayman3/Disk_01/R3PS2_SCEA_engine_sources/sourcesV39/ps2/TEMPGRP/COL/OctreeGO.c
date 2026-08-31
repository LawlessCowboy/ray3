/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c lines 42–66 */
/* addr: 0x00257a20  size: 408 bytes */
void INT_fn_vViewAndAddFaceElementInList(short xNbMaxElements, short* p_xNbElements, /* function pointer */ int d_stDataOfElement, /* function pointer */ int p_stVertexA, unsigned char bBack, /* function pointer */ int p_stHit, short xElements, short xDataElementIndex)
{
    short xFaceIndex;
    /* line map: */
    /*   line 42 @ +0x000 */
    /*   line 47 @ +0x000 */
    /*   line 47 @ +0x000 */
    /*   line 50 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 62 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c lines 914–924 */
/* addr: 0x00257bc0  size: 44 bytes */
void COL_fn_vExploreOctreeWithSegment(/* function pointer */ int p_stOctree, /* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int d_pstSelectedNode, float* d_xSelectedT, short* p_xNumberOfSelectedNodes)
{
    /* line map: */
    /*   line 914 @ +0x000 */
    /*   line 918 @ +0x000 */
    /*   line 924 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\OctreeGO.c lines 864–894 */
/* addr: 0x00257bf0  size: 600 bytes */
void COL_fn_vExploreRecursiveOctreeWithSegment(/* function pointer */ int p_stNodeToBeExplored, /* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int d_pstSelectedNode, float* d_xSelectedT, short* p_xNumberOfSelectedNodes)
{
    float xT;
    /* line map: */
    /*   line 864 @ +0x000 */
    /*   line 864 @ +0x000 */
    /*   line 871 @ +0x000 */
    /*   line 875 @ +0x000 */
    /*   line 877 @ +0x000 */
    /*   line 879 @ +0x000 */
    /*   line 881 @ +0x000 */
    /*   line 885 @ +0x000 */
    /* TODO: decompile from asm/... */
}
