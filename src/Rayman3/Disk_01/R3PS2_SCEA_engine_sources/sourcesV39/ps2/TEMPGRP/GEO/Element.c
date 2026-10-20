/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Element.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/MTH.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstIndexedCone_ GEO_tdstIndexedCone_;
typedef struct GEO_tdstInteriorPoints_ GEO_tdstInteriorPoints_;
typedef struct GEO_tdstElementDeformationSetInfo_ GEO_tdstElementDeformationSetInfo_;
typedef struct GEO_tdstElementCones_ GEO_tdstElementCones_;
typedef struct GEO_tdstElementIndexedQuads_ GEO_tdstElementIndexedQuads_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstQuadIndex_ GEO_tdstQuadIndex_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstDeformationInfluence_ GEO_tdstDeformationInfluence_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GEO_tdstDeformationBorder_ GEO_tdstDeformationBorder_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GEO_tdstElementPoints_ GEO_tdstElementPoints_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GEO_tdstElementAlignedBoxes_ GEO_tdstElementAlignedBoxes_;
typedef struct GEO_tdstDeformationVertex_ GEO_tdstDeformationVertex_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct GEO_tdstElementSpheres_ GEO_tdstElementSpheres_;
typedef struct GEO_tdstIndexedSphere_ GEO_tdstIndexedSphere_;
typedef struct GEO_tdstIndexedAlignedBox_ GEO_tdstIndexedAlignedBox_;

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    /* The element-type table is an array of shorts (the retail code loads it
       with 'lh' and stores the type with 'sh'), not a plain int. */
    short* d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x30 */
    GEO_tdstDoubledIndex_* d_stListOfEdgesDI; /* +0x40 */
    short xNbEdgesDI; /* +0x44 */
    short xNbOctreeEdges; /* +0x46 */
    int bUsedForShadowDrawing; /* +0x48 */
    int bUsedForShadowCreating; /* +0x4c */
    int pSDC_Data; /* +0x50 */
    unsigned int bIsStatic; /* +0x54 */
    unsigned int glDisplayList; /* +0x58 */
    unsigned char bVTForSinus; /* +0x5c */
};

struct GEO_tdstIndexedCone_ {
    short xTopPoint; /* +0x0 */
    short xBasePoint; /* +0x2 */
    float xBaseRadius; /* +0x4 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x8 */
};

struct GEO_tdstInteriorPoints_ {
    MTH3D_tdstVector_ st_4Points[4]; /* +0x0 */
};

struct GEO_tdstElementDeformationSetInfo_ {
    GEO_tdstDeformationVertex_* p_stDeformationVertexTable; /* +0x0 */
    GEO_tdstDeformationBorder_* p_stBorderTable; /* +0x4 */
    short xNumberOfDeformationVertex; /* +0x8 */
    unsigned char ucNumberOfLinks; /* +0xa */
    unsigned char Align; /* +0xb */
};

struct GEO_tdstElementCones_ {
    GEO_tdstIndexedCone_* d_stListOfCones; /* +0x0 */
    short xNbCones; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstElementIndexedQuads_ {
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    short xNbFaces; /* +0x4 */
    short xNbElementUV; /* +0x6 */
    GEO_tdstQuadIndex_* d_stListOfFacesQuad; /* +0x8 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0xc */
    GEO_tdstQuadIndex_* d_stListOfFacesQuadIndexUV; /* +0x10 */
    ACP_tdst2DUVValues_* d_stListOfElementUV; /* +0x14 */
    GEO_tdstInteriorPoints_* d_stListOfInteriorPoints; /* +0x18 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstQuadIndex_ {
    short a4_xIndex[4]; /* +0x0 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstDeformationInfluence_ {
    unsigned short uwInfluence; /* +0x0 */
    unsigned char ucLinkNumber; /* +0x2 */
    unsigned char Align; /* +0x3 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GEO_tdstDeformationBorder_ {
    MTH3D_tdstVector_ stLinkNeutralPosition; /* +0x0 */
    MTH3D_tdstMatrix_ stLinkNeutralOrientation; /* +0xc */
    int p_xVertexTable; /* +0x30 */
    unsigned short uwNumberOfVertices; /* +0x34 */
    unsigned char ucLinkIndex; /* +0x36 */
    unsigned char Align; /* +0x37 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct GEO_tdstElementPoints_ {
    float xFatness; /* +0x0 */
    int d_xListOfPointIndex; /* +0x4 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x8 */
    short xNbPoints; /* +0xc */
    short xIndexOfParallelBox; /* +0xe */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct GEO_tdstElementAlignedBoxes_ {
    GEO_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstDeformationVertex_ {
    GEO_tdstDeformationInfluence_* p_stInfluenceTable; /* +0x0 */
    short xVertexIndex; /* +0x4 */
    unsigned char ucNumberOfInfluences; /* +0x6 */
    unsigned char Align; /* +0x7 */
};

struct GEO_tdstElementIndexedTriangles_ {
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    short xNbFaces; /* +0x4 */
    short xNbElementUV; /* +0x6 */
    short xNbUVStages; /* +0x8 */
    GEO_tdstTripledIndex_* d_stListOfFacesTripled; /* +0xc */
    GEO_tdstTripledIndex_* d_stListOfFacesTripledIndexUV; /* +0x10 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x14 */
    ACP_tdst2DUVValues_* d_stListOfElementUV; /* +0x18 */
    GEO_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x1c */
    GEO_tdstTripledIndex_* d_stListOfFacesAdjacent; /* +0x20 */
    int d_stListOfIndexUsedByThisElement; /* +0x24 */
    short xNumberOfIndexsUsed; /* +0x28 */
    short xIndexOfParallelBox; /* +0x2a */
    unsigned int glDisplayList; /* +0x2c */
    int p_xSpecialValue; /* +0x30 */
    unsigned char bVisibleInPortal; /* +0x34 */
    unsigned int pVertexArrays[4]; /* +0x38 */
};

struct GEO_tdstElementSpheres_ {
    GEO_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GEO_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x4 */
};

unsigned char g_ucGEOModuleId;

/* Defined by the GEO culling module; shared by the element helpers. */
extern float GEO_g_xZFar;

extern void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
extern void Erm_fn_ClearLastError(unsigned int ulChannelId);
extern void Erm_fn_v_UpdateLastError(unsigned short uwStartOfWarningsId, unsigned char ucModuleId, unsigned int ulChannelId, unsigned short uwErrNum, int lDebugInfo, unsigned char ucOpenInfoWindow, unsigned char ucStopForDebug, char* szPersonalMsg);

float GEO_xGetZFar(void)
{
    return GEO_g_xZFar;
}

void GEO_vSetVisualMaterialOfIndexedCone(GEO_tdstGeometricObject_* hObject, short hElement, short xNumberOfCone, GLI_tdstMaterial_* hVisualMaterial)
{
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    pc = (char*)(*(GEO_tdstElementCones_***)&hObject->d_stListOfElements)[hElement]->d_stListOfCones;
    pc = pc + 8;
    ((GLI_tdstMaterial_**)pc)[iIndex = (int)xNumberOfCone * 3] = hVisualMaterial;
}

void GEO_vSetRadiusOfIndexedCone(GEO_tdstGeometricObject_* hObject, short hElement, short xNumberOfCone, float xRadius)
{
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    pc = (char*)(*(GEO_tdstElementCones_***)&hObject->d_stListOfElements)[hElement]->d_stListOfCones;
    pc = pc + 4;
    ((float*)pc)[iIndex = (int)xNumberOfCone * 3] = xRadius;
}

void GEO_vSetPointsOfIndexedCone(GEO_tdstGeometricObject_* hObject, short hElement, short xNumberOfCone, short xTopPoint, short xBasePoint)
{
    ((short *)((char *)(*(GEO_tdstElementCones_***)&hObject->d_stListOfElements)[hElement]->d_stListOfCones))[xNumberOfCone * 6] = xTopPoint;
    ((short *)((char *)(*(GEO_tdstElementCones_***)&hObject->d_stListOfElements)[hElement]->d_stListOfCones + 2))[xNumberOfCone * 6] = xBasePoint;
}

void GEO_vCreateElementCones(GEO_tdstGeometricObject_* hObject, short* p_hElement, short xNbCones)
{
    GEO_tdstElementCones_* p_stElement;
    short xElementToBuild;

    for (xElementToBuild = 0; xElementToBuild < hObject->xNbElements; xElementToBuild++)
    {
        if (hObject->d_xListOfElementsTypes[xElementToBuild] == 0) break;
    }
    if (xElementToBuild == hObject->xNbElements) return;
    hObject->d_xListOfElementsTypes[xElementToBuild] = 9;
    *p_hElement = xElementToBuild;
    /* The retail source allocated and filled the new element in a single
       statement group on one source line (retail line 567). */
    p_stElement = (GEO_tdstElementCones_*)HMU_fn_p_vMalloc(sizeof(GEO_tdstElementCones_), 0); p_stElement->d_stListOfCones = (GEO_tdstIndexedCone_*)HMU_fn_p_vMalloc(xNbCones * sizeof(GEO_tdstIndexedCone_), 0); p_stElement->xNbCones = xNbCones; p_stElement->xIndexOfParallelBox = -1; (*(GEO_tdstElementCones_***)&hObject->d_stListOfElements)[xElementToBuild] = p_stElement;
}

void GEO_vSetVisualMaterialOfIndexedSphere(GEO_tdstGeometricObject_* hObject, short hElement, short xNumberOfSphere, GLI_tdstMaterial_* hVisualMaterial)
{
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    pc = (char*)(*(GEO_tdstElementSpheres_***)&hObject->d_stListOfElements)[hElement]->d_stListOfSpheres;
    pc = pc + 4;
    ((GLI_tdstMaterial_**)pc)[iIndex = (int)xNumberOfSphere * 3] = hVisualMaterial;
}

void GEO_vSetRadiusOfIndexedSphere(GEO_tdstGeometricObject_* hObject, short hElement, short xNumberOfSphere, float xRadius)
{
    (*(GEO_tdstElementSpheres_***)&hObject->d_stListOfElements)[hElement]->d_stListOfSpheres[xNumberOfSphere].xRadius = xRadius;
}

void GEO_vSetCenterPointOfIndexedSphere(GEO_tdstGeometricObject_* hObject, short hElement, short xNumberOfSphere, short xIndexOfPoint)
{
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    pc = (char*)(*(GEO_tdstElementSpheres_***)&hObject->d_stListOfElements)[hElement]->d_stListOfSpheres;
    pc = pc + 8;
    ((short*)pc)[iIndex = (int)xNumberOfSphere * 6] = xIndexOfPoint;
}

void GEO_vCreateElementSpheres(GEO_tdstGeometricObject_* hObject, short* p_hElement, short xNbSpheres)
{
    GEO_tdstElementSpheres_* p_stElement;
    short xElementToBuild;

    for (xElementToBuild = 0; xElementToBuild < hObject->xNbElements; xElementToBuild++)
    {
        if (hObject->d_xListOfElementsTypes[xElementToBuild] == 0) break;
    }
    if (xElementToBuild == hObject->xNbElements) return;
    hObject->d_xListOfElementsTypes[xElementToBuild] = 7;
    *p_hElement = xElementToBuild;
    /* The retail source allocated and filled the new element in a single
       statement group on one source line (retail line 263). */
    p_stElement = (GEO_tdstElementSpheres_*)HMU_fn_p_vMalloc(sizeof(GEO_tdstElementSpheres_), 0); p_stElement->d_stListOfSpheres = (GEO_tdstIndexedSphere_*)HMU_fn_p_vMalloc(xNbSpheres * sizeof(GEO_tdstIndexedSphere_), 0); p_stElement->xNbSpheres = xNbSpheres; p_stElement->xIndexOfParallelBox = -1; (*(GEO_tdstElementSpheres_***)&hObject->d_stListOfElements)[xElementToBuild] = p_stElement;
}

GEO_tdstElementIndexedTriangles_* GEO_p_stAllocElementIndexedTriangles(short xNbFaces, short xNbElementUV, short xNbUVStages)
{
    GEO_tdstElementIndexedTriangles_* p_stLocalElement;

    p_stLocalElement = (GEO_tdstElementIndexedTriangles_*)HMU_fn_p_vMalloc(sizeof(GEO_tdstElementIndexedTriangles_), 0);
    if (xNbFaces)
    {
        p_stLocalElement->d_stListOfFacesTripled = (GEO_tdstTripledIndex_*)HMU_fn_p_vMalloc(xNbFaces * sizeof(GEO_tdstTripledIndex_), 0);
        if (xNbUVStages)
        {
            p_stLocalElement->d_stListOfFacesTripledIndexUV = (GEO_tdstTripledIndex_*)HMU_fn_p_vMalloc(xNbUVStages * (xNbFaces * sizeof(GEO_tdstTripledIndex_)), 0);
        }
        else
        {
            p_stLocalElement->d_stListOfFacesTripledIndexUV = NULL;
        }
        p_stLocalElement->d_stListOfFacesNormals = (MTH3D_tdstVector_*)HMU_fn_p_vMalloc(xNbFaces * sizeof(MTH3D_tdstVector_), 0);
    }
    else
    {
        p_stLocalElement->d_stListOfFacesTripled = NULL;
        p_stLocalElement->d_stListOfFacesTripledIndexUV = NULL;
        p_stLocalElement->d_stListOfFacesNormals = NULL;
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(4, g_ucGEOModuleId, 0, 9, -1, 255, 255, NULL);
    }
    if (xNbElementUV)
    {
        p_stLocalElement->d_stListOfElementUV = (ACP_tdst2DUVValues_*)HMU_fn_p_vMalloc(xNbElementUV * sizeof(ACP_tdst2DUVValues_), 0);
    }
    else
    {
        p_stLocalElement->d_stListOfElementUV = NULL;
    }
    p_stLocalElement->xNbElementUV = xNbElementUV;
    p_stLocalElement->xNbUVStages = xNbUVStages;
    p_stLocalElement->xNbFaces = xNbFaces;
    p_stLocalElement->xNumberOfIndexsUsed = 0;
    p_stLocalElement->d_stListOfIndexUsedByThisElement = NULL;
    p_stLocalElement->xIndexOfParallelBox = -1;
    p_stLocalElement->bVisibleInPortal = 1;
    return p_stLocalElement;
}
