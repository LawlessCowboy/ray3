/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersEd.c */
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

short COL_g_xDepth;
short COL_g_xSelectedDepth;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersEd.c lines 51–91 */
/* addr: 0x00255160  size: 232 bytes */
short INT_fn_xTrinomeResolution(float xA, float xB, float xC, float* p_xT1, float* p_xT2)
{
    float xDiv;
    float xDelta;
    /* line map: */
    /*   line 51 @ +0x000 */
    /*   line 54 @ +0x000 */
    /*   line 59 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 57 @ +0x000 */
    /*   line 57 @ +0x000 */
    /*   line 57 @ +0x000 */
    /*   line 63 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersEd.c lines 518–572 */
/* addr: 0x00255250  size: 916 bytes */
unsigned char INT_fn_bIntersectSemiAxeWithSphere(/* function pointer */ int p_stVertex1, /* function pointer */ int p_stVect12, /* function pointer */ int p_stSphereCenter, float xSphereRadius, unsigned char* bBack, float* p_xT, /* function pointer */ int p_stHit, /* function pointer */ int p_stNormal)
{
    float xInvR;
    float xT2;
    float xT1;
    float xB;
    /* line map: */
    /*   line 518 @ +0x000 */
    /*   line 521 @ +0x000 */
    /*   line 521 @ +0x000 */
    /*   line 521 @ +0x000 */
    /*   line 524 @ +0x000 */
    /*   line 526 @ +0x000 */
    /*   line 526 @ +0x000 */
    /*   line 532 @ +0x000 */
    /* TODO: decompile from asm/... */
}
