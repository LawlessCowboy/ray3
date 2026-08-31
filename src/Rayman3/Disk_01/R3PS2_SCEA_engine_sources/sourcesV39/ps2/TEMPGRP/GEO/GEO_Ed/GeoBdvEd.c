/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoBdvEd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

int gs_hVisualMaterial;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoBdvEd.c lines 194–196 */
/* addr: 0x002a4170  size: 92 bytes */
void GEO_vSetFaceOfIndexedTriangles(/* function pointer */ int hObject, short hElement, short xIndexOfFace, short xPoint1, short xPoint2, short xPoint3, /* function pointer */ int param6)
{
    /* line map: */
    /*   line 194 @ +0x000 */
    /*   line 194 @ +0x000 */
    /*   line 196 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoBdvEd.c lines 284–341 */
/* addr: 0x002a41d0  size: 632 bytes */
void GEO_fn_vAddObjectToSphere(/* function pointer */ int _hGeometricObject, /* function pointer */ int _p_stSphereCenter, float* _p_xSphereRadius, /* function pointer */ int p_stLocalElementSprite, /* function pointer */ int p_stLocalElementSphere, /* function pointer */ int p_stVertex)
{
    /* aggregate */ int stSphereCenterLocal;
    int lElementCounter;
    int i;
    /* line map: */
    /*   line 284 @ +0x000 */
    /*   line 287 @ +0x000 */
    /*   line 299 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 307 @ +0x000 */
    /*   line 309 @ +0x000 */
    /*   line 308 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoBdvEd.c lines 228–239 */
/* addr: 0x002a4450  size: 216 bytes */
void GEO_fn_vComputeBoundingSphereOfOneSphereAndOnePoint(/* function pointer */ int _p_stReturnedSphereCenter, float* _p_xReturnedSphereRadius, /* function pointer */ int _p_stFirstSphereCenter, float _xFirstSphereRadius, /* function pointer */ int _p_stSecondSphereCenter)
{
    float xAlpha;
    /* line map: */
    /*   line 228 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 239 @ +0x000 */
    /* TODO: decompile from asm/... */
}
