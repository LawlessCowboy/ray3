/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj2.c lines 47–126 */
/* addr: 0x002a28a0  size: 2112 bytes */
void GEO_xComputeObjectNormals(/* function pointer */ int p_stObj, /* function pointer */ int p_stLocalElementFMD, /* function pointer */ int p_stITLastFMD, /* function pointer */ int param3, /* function pointer */ int p_stLocalElement, /* function pointer */ int p_stITLast, /* function pointer */ int param6, /* function pointer */ int param7, /* function pointer */ int p_stVertex)
{
    float xNorm;
    float xNorm;
    float xNorm;
    short xIndex;
    /* aggregate */ int stNormalResult;
    /* line map: */
    /*   line 47 @ +0x000 */
    /*   line 53 @ +0x000 */
    /*   line 56 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 61 @ +0x000 */
    /*   line 65 @ +0x000 */
    /*   line 70 @ +0x000 */
    /*   line 70 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj2.c lines 75–213 */
/* addr: 0x002a30e0  size: 3568 bytes */
void GEO_vComputeObjectParallelBox(/* function pointer */ int hObject, short xParallelBox, /* function pointer */ int hParallelBox, /* function pointer */ int p_stMaxPoint, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stESt, /* function pointer */ int p_stEC, /* function pointer */ int p_stEAB, /* function pointer */ int p_stES, /* function pointer */ int p_stEL, /* function pointer */ int p_stEIP, /* function pointer */ int p_stEFMD, /* function pointer */ int p_stETIT)
{
    int bInit;
    short xIndexInElement;
    short xIndexElement;
    /* line map: */
    /*   line 75 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 86 @ +0x000 */
    /*   line 89 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 95 @ +0x000 */
    /*   line 98 @ +0x000 */
    /* TODO: decompile from asm/... */
}
