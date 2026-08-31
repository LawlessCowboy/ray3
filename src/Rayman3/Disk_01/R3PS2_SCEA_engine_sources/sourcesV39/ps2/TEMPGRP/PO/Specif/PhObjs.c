/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PO\Specif\PhObjs.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PO\Specif\PhObjs.c lines 187–222 */
/* addr: 0x00317fd0  size: 520 bytes */
int PIC_bIntersectSegmentWithCollideObject(/* function pointer */ int p_stCameraPos, /* function pointer */ int p_stVertex12, /* function pointer */ int p_stObject, /* function pointer */ int p_stPickedObject)
{
    short i;
    /* aggregate */ int stTemp;
    /* aggregate */ int stSouris3D;
    int bReturn;
    int bTest;
    short xNbElements;
    /* line map: */
    /*   line 192 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 187 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 205 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x003181e0  size: 8 bytes */
void PO_fn_hGetCollideSet(/* function pointer */ int _hPhysicalObject)
{
    /* TODO: decompile from asm/... */
}
