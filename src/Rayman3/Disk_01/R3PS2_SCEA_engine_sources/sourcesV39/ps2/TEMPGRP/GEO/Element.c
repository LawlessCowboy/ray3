/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

unsigned char g_ucGEOModuleId;

/* addr: 0x002a1500  size: 8 bytes */
float GEO_xGetZFar(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 706–706 */
/* addr: 0x002a1510  size: 64 bytes */
void GEO_vSetVisualMaterialOfIndexedCone(/* function pointer */ int hObject, short hElement, short xNumberOfCone, /* function pointer */ int hVisualMaterial)
{
    /* line map: */
    /*   line 706 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 683–683 */
/* addr: 0x002a1550  size: 64 bytes */
void GEO_vSetRadiusOfIndexedCone(/* function pointer */ int hObject, short hElement, short xNumberOfCone, float xRadius)
{
    /* line map: */
    /*   line 683 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 636–636 */
/* addr: 0x002a1590  size: 88 bytes */
void GEO_vSetPointsOfIndexedCone(/* function pointer */ int hObject, short hElement, short xNumberOfCone, short xTopPoint, short xBasePoint)
{
    /* line map: */
    /*   line 636 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 557–567 */
/* addr: 0x002a15f0  size: 240 bytes */
void GEO_vCreateElementCones(/* function pointer */ int hObject, short* p_hElement, short xNbCones)
{
    short xElementToBuild;
    /* line map: */
    /*   line 557 @ +0x000 */
    /*   line 557 @ +0x000 */
    /*   line 559 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 567 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 398–398 */
/* addr: 0x002a16e0  size: 64 bytes */
void GEO_vSetVisualMaterialOfIndexedSphere(/* function pointer */ int hObject, short hElement, short xNumberOfSphere, /* function pointer */ int hVisualMaterial)
{
    /* line map: */
    /*   line 398 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 353–353 */
/* addr: 0x002a1720  size: 60 bytes */
void GEO_vSetRadiusOfIndexedSphere(/* function pointer */ int hObject, short hElement, short xNumberOfSphere, float xRadius)
{
    /* line map: */
    /*   line 353 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 312–312 */
/* addr: 0x002a1760  size: 64 bytes */
void GEO_vSetCenterPointOfIndexedSphere(/* function pointer */ int hObject, short hElement, short xNumberOfSphere, short xIndexOfPoint)
{
    /* line map: */
    /*   line 312 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 253–263 */
/* addr: 0x002a17a0  size: 240 bytes */
void GEO_vCreateElementSpheres(/* function pointer */ int hObject, short* p_hElement, short xNbSpheres)
{
    short xElementToBuild;
    /* line map: */
    /*   line 253 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 261 @ +0x000 */
    /*   line 261 @ +0x000 */
    /*   line 263 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c lines 59–115 */
/* addr: 0x002a1890  size: 332 bytes */
void GEO_p_stAllocElementIndexedTriangles(short xNbFaces, short xNbElementUV, short xNbUVStages, /* function pointer */ int p_stLocalElement)
{
    /* line map: */
    /*   line 59 @ +0x000 */
    /*   line 65 @ +0x000 */
    /*   line 69 @ +0x000 */
    /*   line 72 @ +0x000 */
    /*   line 76 @ +0x000 */
    /*   line 83 @ +0x000 */
    /*   line 83 @ +0x000 */
    /*   line 88 @ +0x000 */
    /* TODO: decompile from asm/... */
}
