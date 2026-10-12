/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    void* d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

int g_p_stLightMapUForNextObjectToDraw;
int g_p_stRawRLIsForThisObject;
int g_p_stRLIForNextObjectToDraw;

void* ISI_hComputeBlendRLI(void* hRLI1, void* hRLI2, short xNumISILOD, float xPercent);
ISI_tdstColor_* ISI_fn_dGetVertexRLILOD(void* _hISI, short _xNumISILOD);
int ISI_fn_dGetVertexRLILODLightMapU(void* _hISI, short _xNumISILOD);
void GLI_xSendObjectToViewportWithLightsFlag(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstGeometricObject_* p_stObj, int lDrawModeMask, unsigned int ulSuperObjectFlag);

void TEX_vSetTextureQualityLevel(GLI_tdstTexture_* p_stTexture, char ucTextQuality)
{
    *(int *)((char *)p_stTexture + 4) = ucTextQuality;
}

void* GLI_hComputeBlendRLI(GEO_tdstVisualSet_* hVisualSet, unsigned char ucIndex1, unsigned char ucIndex2, short xNumISILOD, float xPercent)
{
    if ((ucIndex1 < hVisualSet->lNumberOfRLI) && (ucIndex2 < hVisualSet->lNumberOfRLI))
        return ISI_hComputeBlendRLI(((void**)hVisualSet->d_hRLI)[ucIndex1], ((void**)hVisualSet->d_hRLI)[ucIndex2], xNumISILOD, xPercent);
    return NULL;
}

int GLI_hGetRLI(GEO_tdstVisualSet_* hVisualSet, unsigned char ucIndex)
{
    return (ucIndex < hVisualSet->lNumberOfRLI) ? ((int*)hVisualSet->d_hRLI)[ucIndex] : 0;
}

void GLI_lSendVisualSetToViewport2(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstVisualSet_* p_stVisualSet, int lUnused, int lDrawModeMask)
{
    g_p_stRLIForNextObjectToDraw = 0;
    g_p_stRawRLIsForThisObject = 0;
    g_p_stLightMapUForNextObjectToDraw = 0;
    if (p_stVisualSet->d_p_stLodDefinitions->p_stGeometricObject)
        GLI_xSendObjectToViewportWithLights(p_stVpt, p_stVisualSet->d_p_stLodDefinitions->p_stGeometricObject, lDrawModeMask);
}

void GLI_lSendVisualSetToViewportWithRLI2Flag(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstVisualSet_* p_stVisualSet, int lUnused, int lDrawModeMask, void* hISI, unsigned int ulSuperObjectFlag)
{
    if (hISI)
    {
        g_p_stRLIForNextObjectToDraw = (int)ISI_fn_dGetVertexRLILOD(hISI, 0);
        g_p_stRawRLIsForThisObject = (int)ISI_fn_dGetVertexRLILOD(hISI, 0);
        g_p_stLightMapUForNextObjectToDraw = ISI_fn_dGetVertexRLILODLightMapU(hISI, 0);
    }
    else
    {
        g_p_stRLIForNextObjectToDraw = 0;
        g_p_stRawRLIsForThisObject = 0;
        g_p_stLightMapUForNextObjectToDraw = 0;
    }
    if (p_stVisualSet->d_p_stLodDefinitions->p_stGeometricObject)
        GLI_xSendObjectToViewportWithLightsFlag(p_stVpt, p_stVisualSet->d_p_stLodDefinitions->p_stGeometricObject, lDrawModeMask, ulSuperObjectFlag);
    g_p_stRLIForNextObjectToDraw = 0;
    g_p_stRawRLIsForThisObject = 0;
    g_p_stLightMapUForNextObjectToDraw = 0;
}

void GLI_lSendVisualSetToViewportWithRLI2(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstVisualSet_* p_stVisualSet, int lUnused, int lDrawModeMask, void* hISI)
{
    if (hISI)
    {
        g_p_stRLIForNextObjectToDraw = (int)ISI_fn_dGetVertexRLILOD(hISI, 0);
        g_p_stRawRLIsForThisObject = (int)ISI_fn_dGetVertexRLILOD(hISI, 0);
        g_p_stLightMapUForNextObjectToDraw = ISI_fn_dGetVertexRLILODLightMapU(hISI, 0);
    }
    else
    {
        g_p_stRLIForNextObjectToDraw = 0;
        g_p_stRawRLIsForThisObject = 0;
        g_p_stLightMapUForNextObjectToDraw = 0;
    }
    if (p_stVisualSet->d_p_stLodDefinitions->p_stGeometricObject)
        GLI_xSendObjectToViewportWithLights(p_stVpt, p_stVisualSet->d_p_stLodDefinitions->p_stGeometricObject, lDrawModeMask);
    g_p_stRLIForNextObjectToDraw = 0;
    g_p_stRawRLIsForThisObject = 0;
    g_p_stLightMapUForNextObjectToDraw = 0;
}

int GLI_lGetVisualSetNumbertOfLOD(GEO_tdstVisualSet_* p_stVisualSet)
{
    return p_stVisualSet->xNbLodDefinitions;
}

GEO_tdstGeometricObject_* GLI_hGetVisualSetGeometricForADistance(GEO_tdstVisualSet_* p_stVSE, float xThreshold)
{
    int lLod;
    int lOffset;
    lLod = 0;
    lOffset = 0;
    while (lLod < p_stVSE->xNbLodDefinitions - 1) {
        if (*(float*)((char*)p_stVSE->d_xThresholdsTable + lOffset + 4) > xThreshold)
            break;
        lOffset += 4;
        lLod++;
    }
    return p_stVSE->d_p_stLodDefinitions[lLod].p_stGeometricObject;
}

void GLI_vGetVisualSetLOD(GEO_tdstVisualSet_* p_stVisualSet, int lNumberOfLodToGet, float* p_xThreshold, GEO_tdstGeometricObject_** h_stObject)
{
    if (lNumberOfLodToGet < p_stVisualSet->xNbLodDefinitions) {
        *p_xThreshold = ((float*)p_stVisualSet->d_xThresholdsTable)[lNumberOfLodToGet];
        *(GEO_tdstGeometricObject_**)h_stObject = ((GEO_tduVSObject_*)p_stVisualSet->d_p_stLodDefinitions)[lNumberOfLodToGet].p_stGeometricObject;
    }
}
