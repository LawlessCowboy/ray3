/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

static int gs_pstGeoObject;
static /* aggregate */ int gs_aGeoITElements;
int gs_hVisualMaterial;

/* addr: 0x0024da10  size: 8 bytes */
void COL_fn_vResetNbCollidedEdges(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1831–1912 */
/* addr: 0x0024da20  size: 652 bytes */
void COL_fn_hTransformTableOfObjectInOneObjectForGAM(/* function pointer */ int _hGeoObj, /* function pointer */ int a_hTableOfGeoObj, short xNbOfObjects, /* function pointer */ int p_hGeoObjInTableEnd, /* function pointer */ int p_hGeoObjInTableAtIndex, /* function pointer */ int p_stIBTargetEnd, /* function pointer */ int p_stIBTarget, /* function pointer */ int p_stEBTarget, /* function pointer */ int param8, /* function pointer */ int p_stISTargetEnd, /* function pointer */ int p_stISTarget, /* function pointer */ int p_stESTarget)
{
    unsigned int ulSize;
    short* p_xCurrentElementTypeSource;
    short xNbSubElt;
    void** p_hCurrentElementSourceEnd;
    void** p_hCurrentElementSource;
    short xNbP;
    short xNbPoints;
    /* line map: */
    /*   line 1847 @ +0x000 */
    /*   line 1847 @ +0x000 */
    /*   line 1847 @ +0x000 */
    /*   line 1847 @ +0x000 */
    /*   line 1831 @ +0x000 */
    /*   line 1846 @ +0x000 */
    /*   line 1833 @ +0x000 */
    /*   line 1836 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1765–1799 */
/* addr: 0x0024dcb0  size: 384 bytes */
void COL_fn_vAddObjectToSphere(/* function pointer */ int _hGeometricObject, /* function pointer */ int _p_stSphereCenter, float* _p_xSphereRadius, /* function pointer */ int p_stLocalElementSphere, /* function pointer */ int p_stVertex)
{
    /* aggregate */ int stSphereCenterLocal;
    int lElementCounter;
    int i;
    /* line map: */
    /*   line 1765 @ +0x000 */
    /*   line 1768 @ +0x000 */
    /*   line 1780 @ +0x000 */
    /*   line 1783 @ +0x000 */
    /*   line 1783 @ +0x000 */
    /*   line 1786 @ +0x000 */
    /*   line 1786 @ +0x000 */
    /*   line 1797 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1722–1742 */
/* addr: 0x0024de30  size: 276 bytes */
void COL_fn_vComputeBoundingSphereOfTwoSpheres(/* function pointer */ int _p_stReturnedSphereCenter, float* _p_xReturnedSphereRadius, /* function pointer */ int _p_stFirstSphereCenter, float _xFirstSphereRadius, /* function pointer */ int _p_stSecondSphereCenter, float _xSecondSphereRadius)
{
    float xAlpha;
    /* line map: */
    /*   line 1722 @ +0x000 */
    /*   line 1725 @ +0x000 */
    /*   line 1729 @ +0x000 */
    /*   line 1733 @ +0x000 */
    /*   line 1740 @ +0x000 */
    /*   line 1739 @ +0x000 */
    /*   line 1739 @ +0x000 */
    /*   line 1742 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1674–1686 */
/* addr: 0x0024df50  size: 216 bytes */
void COL_fn_vComputeBoundingSphereOfOneSphereAndOnePoint(/* function pointer */ int _p_stReturnedSphereCenter, float* _p_xReturnedSphereRadius, /* function pointer */ int _p_stFirstSphereCenter, float _xFirstSphereRadius, /* function pointer */ int _p_stSecondSphereCenter)
{
    float xAlpha;
    /* line map: */
    /*   line 1674 @ +0x000 */
    /*   line 1677 @ +0x000 */
    /*   line 1684 @ +0x000 */
    /*   line 1686 @ +0x000 */
    /*   line 1686 @ +0x000 */
    /*   line 1686 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1621–1624 */
/* addr: 0x0024e030  size: 72 bytes */
void COL_fn_vGetInfoFromGeometricSphere(/* function pointer */ int _p_stSphereCenter, float* _p_xSphereRadius, /* function pointer */ int _hBoundingVolume, /* function pointer */ int p_stOneSphere, /* function pointer */ int p_stCenter)
{
    /* line map: */
    /*   line 1621 @ +0x000 */
    /*   line 1621 @ +0x000 */
    /*   line 1624 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0024e080  size: 8 bytes */
void COL_fn_pGetMaxPointOfParallelBox(/* function pointer */ int _p_stParallelBox)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0024e090  size: 8 bytes */
void COL_fn_pGetMinPointOfParallelBox(/* function pointer */ int _p_stParallelBox)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1535–1540 */
/* addr: 0x0024e0a0  size: 148 bytes */
void COL_vGetNormalOfGeometricObjectElement(/* function pointer */ int hObject, short xElementIndex, short xDataElementIndex, /* function pointer */ int p_stNormal, /* function pointer */ int param4)
{
    /* line map: */
    /*   line 1535 @ +0x000 */
    /*   line 1535 @ +0x000 */
    /*   line 1535 @ +0x000 */
    /*   line 1540 @ +0x000 */
    /*   line 1540 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1512–1518 */
/* addr: 0x0024e140  size: 144 bytes */
short COL_xGetParallelBoxIndexOfElement(/* function pointer */ int hObject, short xIndexElement)
{
    /* line map: */
    /*   line 1512 @ +0x000 */
    /*   line 1518 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0024e1d0  size: 8 bytes */
short COL_xGetCollideObjectNumberOfElementsMax(/* function pointer */ int hObject)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0024e1e0  size: 8 bytes */
short COL_xGetCollideObjectNumberOfPoints(/* function pointer */ int hObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1405–1407 */
/* addr: 0x0024e1f0  size: 424 bytes */
void COL_vCreateCollideObject(/* function pointer */ int p_hObject, short xNbPoints, short xNbElements)
{
    /* line map: */
    /*   line 1405 @ +0x000 */
    /*   line 1405 @ +0x000 */
    /*   line 1407 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1390–1390 */
/* addr: 0x0024e3a0  size: 56 bytes */
void COL_vGetPointOfObject(/* function pointer */ int hObject, /* function pointer */ int p_stPoint, short xIndexOfPoint)
{
    /* line map: */
    /*   line 1390 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1369–1369 */
/* addr: 0x0024e3e0  size: 56 bytes */
void COL_vSetPointOfObject(/* function pointer */ int hObject, /* function pointer */ int p_stPoint, short xIndexOfPoint)
{
    /* line map: */
    /*   line 1369 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1353–1353 */
/* addr: 0x0024e420  size: 28 bytes */
short COL_xGetElementType(/* function pointer */ int hObject, short xElement)
{
    /* line map: */
    /*   line 1353 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1180–1192 */
/* addr: 0x0024e440  size: 188 bytes */
void COL_vEndModifyObject(/* function pointer */ int hObject)
{
    /* line map: */
    /*   line 1180 @ +0x000 */
    /*   line 1186 @ +0x000 */
    /*   line 1183 @ +0x000 */
    /*   line 1185 @ +0x000 */
    /*   line 1192 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 216–272 */
/* addr: 0x0024e500  size: 1632 bytes */
void COL_vComputeObjectParallelBox(/* function pointer */ int hObject, short xParallelBox, /* function pointer */ int hParallelBox, /* function pointer */ int p_stMaxPoint, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stEAB, /* function pointer */ int p_stES, /* function pointer */ int p_stETIT)
{
    int bInit;
    short xIndexInElement;
    short xIndexElement;
    /* line map: */
    /*   line 216 @ +0x000 */
    /*   line 216 @ +0x000 */
    /*   line 221 @ +0x000 */
    /*   line 216 @ +0x000 */
    /*   line 221 @ +0x000 */
    /*   line 225 @ +0x000 */
    /*   line 228 @ +0x000 */
    /*   line 233 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 177–196 */
/* addr: 0x0024eb60  size: 216 bytes */
void COL_vCreateObjectListOfParallelBox(/* function pointer */ int hObject)
{
    short xIndex;
    /* line map: */
    /*   line 177 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 191 @ +0x000 */
    /*   line 191 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 194 @ +0x000 */
    /*   line 196 @ +0x000 */
    /* TODO: decompile from asm/... */
}
