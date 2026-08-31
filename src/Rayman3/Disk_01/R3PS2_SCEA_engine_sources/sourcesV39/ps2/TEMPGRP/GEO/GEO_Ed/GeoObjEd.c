/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 188–207 */
/* addr: 0x002a4530  size: 276 bytes */
void GEO_fn_vComputeBoundingSphereOfTwoSpheres(/* function pointer */ int _p_stReturnedSphereCenter, float* _p_xReturnedSphereRadius, /* function pointer */ int _p_stFirstSphereCenter, float _xFirstSphereRadius, /* function pointer */ int _p_stSecondSphereCenter, float _xSecondSphereRadius)
{
    float xAlpha;
    /* line map: */
    /*   line 188 @ +0x000 */
    /*   line 191 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 199 @ +0x000 */
    /*   line 205 @ +0x000 */
    /*   line 204 @ +0x000 */
    /*   line 204 @ +0x000 */
    /*   line 207 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 887–966 */
/* addr: 0x002a4650  size: 1332 bytes */
void GEO_vTurnLookAt(/* function pointer */ int p_stObj, /* function pointer */ int hVpt, /* function pointer */ int _pstCameraFromPushBuffer, /* function pointer */ int p_stCurrentMatrix)
{
    float xNorm;
    float xNorm;
    float xNorm;
    float xNorm;
    float xNorm;
    /* aggregate */ int stZ;
    /* aggregate */ int stY;
    /* aggregate */ int stX;
    /* aggregate */ int hCameraPosInv;
    /* line map: */
    /*   line 887 @ +0x000 */
    /*   line 891 @ +0x000 */
    /*   line 891 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 922 @ +0x000 */
    /*   line 922 @ +0x000 */
    /*   line 924 @ +0x000 */
    /*   line 928 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a4b90  size: 8 bytes */
unsigned char GEO_bIsLookAt(/* function pointer */ int p_stObj)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 148–150 */
/* addr: 0x002a4ba0  size: 152 bytes */
void GEO_vCreateTMPGeometricObjectWithEdges(/* function pointer */ int p_hObject, short xNbPoints, short xNbElements, short xNbEdges)
{
    /* line map: */
    /*   line 148 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 150 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 141–143 */
/* addr: 0x002a4c40  size: 228 bytes */
void GEO_vCreateTMPGeometricObject(/* function pointer */ int p_hObject, short xNbPoints, short xNbElements)
{
    /* line map: */
    /*   line 141 @ +0x000 */
    /*   line 141 @ +0x000 */
    /*   line 143 @ +0x000 */
    /* TODO: decompile from asm/... */
}
