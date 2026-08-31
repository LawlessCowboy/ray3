/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 35–48 */
/* addr: 0x002a19e0  size: 180 bytes */
void GEO_vCreateElementIndexedTriangles(/* function pointer */ int hObject, short* p_hElement, short xNbFaces, short xNbElementUV, short xNbUVStages)
{
    short xElementToBuild;
    /* line map: */
    /*   line 35 @ +0x000 */
    /*   line 35 @ +0x000 */
    /*   line 40 @ +0x000 */
    /*   line 45 @ +0x000 */
    /*   line 45 @ +0x000 */
    /*   line 45 @ +0x000 */
    /*   line 48 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 1032–1061 */
/* addr: 0x002a1aa0  size: 288 bytes */
short GEO_xGetParallelBoxIndexOfElement(/* function pointer */ int hObject, short xIndexElement)
{
    /* line map: */
    /*   line 1032 @ +0x000 */
    /*   line 1038 @ +0x000 */
    /*   line 1044 @ +0x000 */
    /*   line 1050 @ +0x000 */
    /*   line 1056 @ +0x000 */
    /*   line 1061 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 1015–1015 */
/* addr: 0x002a1bc0  size: 44 bytes */
void GEO_hGetParallelBox(/* function pointer */ int hObject, short xParallelBox)
{
    /* line map: */
    /*   line 1015 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 953–974 */
/* addr: 0x002a1bf0  size: 216 bytes */
void GEO_vCreateObjectListOfParallelBox(/* function pointer */ int hObject, short xNumberOfParallelBoxes)
{
    short xIndex;
    /* line map: */
    /*   line 953 @ +0x000 */
    /*   line 958 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 973 @ +0x000 */
    /*   line 972 @ +0x000 */
    /*   line 974 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 859–938 */
/* addr: 0x002a1cd0  size: 608 bytes */
unsigned char GEO_vGetFaceSurfaceSpeed(/* function pointer */ int hObject, short xElement, short xFace, /* function pointer */ int p_vSpeed, int lMTIndex, /* function pointer */ int param5, /* function pointer */ int p_uvB, /* function pointer */ int p_uvA, /* function pointer */ int p_vC, /* function pointer */ int p_vB, /* function pointer */ int p_vA, /* function pointer */ int p_stListOfTripled, /* function pointer */ int p_stElement)
{
    float det;
    float xVSpeed;
    float xUSpeed;
    int bScrollMode;
    /* line map: */
    /*   line 859 @ +0x000 */
    /*   line 859 @ +0x000 */
    /*   line 859 @ +0x000 */
    /*   line 859 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 867 @ +0x000 */
    /*   line 878 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 667–681 */
/* addr: 0x002a1f30  size: 244 bytes */
void GEO_vGetNormalOfGeometricObjectElement(/* function pointer */ int hObject, short xElementIndex, short xDataElementIndex, /* function pointer */ int p_stNormal, /* function pointer */ int param4, /* function pointer */ int param5)
{
    /* line map: */
    /*   line 667 @ +0x000 */
    /*   line 667 @ +0x000 */
    /*   line 667 @ +0x000 */
    /*   line 672 @ +0x000 */
    /*   line 672 @ +0x000 */
    /*   line 676 @ +0x000 */
    /*   line 676 @ +0x000 */
    /*   line 681 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 589–605 */
/* addr: 0x002a2030  size: 204 bytes */
void GEO_vEndModifyObject(/* function pointer */ int hObject)
{
    /* line map: */
    /*   line 589 @ +0x000 */
    /*   line 591 @ +0x000 */
    /*   line 600 @ +0x000 */
    /*   line 597 @ +0x000 */
    /*   line 599 @ +0x000 */
    /*   line 605 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 391–391 */
/* addr: 0x002a2100  size: 56 bytes */
void GEO_vGetPointOfObject(/* function pointer */ int hObject, /* function pointer */ int p_stPoint, short xIndexOfPoint)
{
    /* line map: */
    /*   line 391 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 379–379 */
/* addr: 0x002a2140  size: 56 bytes */
void GEO_vSetPointOfObject(/* function pointer */ int hObject, /* function pointer */ int p_stPoint, short xIndexOfPoint)
{
    /* line map: */
    /*   line 379 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 348–350 */
/* addr: 0x002a2180  size: 464 bytes */
void GEO_vCreateGeometricObject(/* function pointer */ int p_hObject, short xNbPoints, short xNbElements)
{
    /* line map: */
    /*   line 348 @ +0x000 */
    /*   line 348 @ +0x000 */
    /*   line 348 @ +0x000 */
    /*   line 350 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 311–330 */
/* addr: 0x002a2350  size: 272 bytes */
void GEO_vInitGeometricObject(/* function pointer */ int p_stObjectToCreate, short xNbElements)
{
    short xInitCount;
    /* line map: */
    /*   line 311 @ +0x000 */
    /*   line 311 @ +0x000 */
    /*   line 314 @ +0x000 */
    /*   line 315 @ +0x000 */
    /*   line 325 @ +0x000 */
    /*   line 330 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 169–227 */
/* addr: 0x002a2460  size: 1080 bytes */
void GEO_xComputeIndexUsedByElements(/* function pointer */ int p_stObj, /* function pointer */ int p_stLocalElement)
{
    unsigned char aDEF_ulCountBuffer[625];
    unsigned int xIndexCounter;
    unsigned int xObjIndex;
    short xTriangleIndex;
    short xIndex;
    /* line map: */
    /*   line 169 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 179 @ +0x000 */
    /*   line 187 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 184 @ +0x000 */
    /*   line 186 @ +0x000 */
    /* TODO: decompile from asm/... */
}
