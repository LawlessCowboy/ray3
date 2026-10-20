/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/GMT.h"
#include "r3/MTH.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    short* d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
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

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstElementAlignedBoxes_ {
    COL_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
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

extern void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);

/* Element type ids stored in COL_tdstCollideObject_.d_xListOfElementsTypes. */
#define COL_ELEMENTTYPE_SPHERES 7
#define COL_ELEMENTTYPE_ALIGNEDBOXES 8

short COL_lGetAlignedBoxNbBoxes(COL_tdstCollideObject_* hObject, short hElement)
{
    return *(short *)((char *)(*(COL_tdstElementAlignedBoxes_***)&hObject->d_stListOfElements)[hElement] + 4);
}

GMT_tdstGameMaterial_* COL_hGetGameMaterialOfIndexedAlignedBox(COL_tdstCollideObject_* hObject, short hElement, short xNumberOfAlignedBox)
{
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    pc = (char*)(*(COL_tdstElementAlignedBoxes_***)&hObject->d_stListOfElements)[hElement]->d_stListOfAlignedBoxes;
    pc = pc + 4;
    return ((GMT_tdstGameMaterial_**)pc)[iIndex = (int)xNumberOfAlignedBox * 2];
}

void COL_vGetMinMaxPointOfIndexedAlignedBox(COL_tdstCollideObject_* hObject, short hElement, short xNumberOfAlignedBox, short* p_xMinPoint, short* p_xMaxPoint)
{
    *p_xMinPoint = (*(COL_tdstElementAlignedBoxes_***)&hObject->d_stListOfElements)[hElement]->d_stListOfAlignedBoxes[xNumberOfAlignedBox].xMinPoint;
    *p_xMaxPoint = ((short *)((char *)(*(COL_tdstElementAlignedBoxes_***)&hObject->d_stListOfElements)[hElement]->d_stListOfAlignedBoxes + 2))[xNumberOfAlignedBox * 4];
}

void COL_vCreateElementAlignedBoxes(COL_tdstCollideObject_* hObject, short* p_hElement, short xNbAlignedBoxes)
{
    short xElementToBuild;
    COL_tdstElementAlignedBoxes_* p_stElement;

    for (xElementToBuild = 0; xElementToBuild < hObject->xNbElements; xElementToBuild++)
    {
        if (hObject->d_xListOfElementsTypes[xElementToBuild] == 0)
        {
            break;
        }
    }

    if (xElementToBuild != hObject->xNbElements)
    {
        hObject->d_xListOfElementsTypes[xElementToBuild] = COL_ELEMENTTYPE_ALIGNEDBOXES;
        *p_hElement = xElementToBuild;
        p_stElement = (COL_tdstElementAlignedBoxes_*)HMU_fn_p_vMalloc(sizeof(COL_tdstElementAlignedBoxes_), 0); p_stElement->d_stListOfAlignedBoxes = (COL_tdstIndexedAlignedBox_*)HMU_fn_p_vMalloc(xNbAlignedBoxes * sizeof(COL_tdstIndexedAlignedBox_), 0); p_stElement->xNbAlignedBoxes = xNbAlignedBoxes; p_stElement->xIndexOfParallelBox = -1; (*(COL_tdstElementAlignedBoxes_***)&hObject->d_stListOfElements)[xElementToBuild] = p_stElement;
    }
}

void COL_vSetRadiusOfIndexedSphere(COL_tdstCollideObject_* hObject, short hElement, short xNumberOfSphere, float xRadius)
{
    (*(COL_tdstElementSpheres_***)&hObject->d_stListOfElements)[hElement]->d_stListOfSpheres[xNumberOfSphere].xRadius = xRadius;
}

short COL_lGetIndexedSphereNbSpheres(COL_tdstCollideObject_* _hObject, short hElement)
{
    return (*(COL_tdstElementSpheres_***)&_hObject->d_stListOfElements)[hElement]->xNbSpheres;
}

GMT_tdstGameMaterial_* COL_hGetGameMaterialOfIndexedSphere(COL_tdstCollideObject_* hObject, short hElement, short xNumberOfSphere)
{
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    pc = (char*)(*(COL_tdstElementSpheres_***)&hObject->d_stListOfElements)[hElement]->d_stListOfSpheres;
    pc = pc + 4;
    return ((GMT_tdstGameMaterial_**)pc)[iIndex = xNumberOfSphere * 3];
}

void COL_vCreateElementSpheres(COL_tdstCollideObject_* hObject, short* p_hElement, short xNbSpheres)
{
    short xElementToBuild;
    COL_tdstElementSpheres_* p_stElement;

    for (xElementToBuild = 0; xElementToBuild < hObject->xNbElements; xElementToBuild++)
    {
        if (hObject->d_xListOfElementsTypes[xElementToBuild] == 0)
        {
            break;
        }
    }

    if (xElementToBuild != hObject->xNbElements)
    {
        hObject->d_xListOfElementsTypes[xElementToBuild] = COL_ELEMENTTYPE_SPHERES;
        *p_hElement = xElementToBuild;
        p_stElement = (COL_tdstElementSpheres_*)HMU_fn_p_vMalloc(sizeof(COL_tdstElementSpheres_), 0); p_stElement->d_stListOfSpheres = (COL_tdstIndexedSphere_*)HMU_fn_p_vMalloc(xNbSpheres * sizeof(COL_tdstIndexedSphere_), 0); p_stElement->xNbSpheres = xNbSpheres; p_stElement->xIndexOfParallelBox = -1; (*(COL_tdstElementSpheres_***)&hObject->d_stListOfElements)[xElementToBuild] = p_stElement;
    }
}

void COL_vGetGameMaterialOfIndexedTriangles(COL_tdstCollideObject_* hObject, short hElement, GMT_tdstGameMaterial_** p_hMaterial)
{
    *(GMT_tdstGameMaterial_**)p_hMaterial = (*(COL_tdstElementIndexedTriangles_***)&hObject->d_stListOfElements)[hElement]->hMaterial;
}
