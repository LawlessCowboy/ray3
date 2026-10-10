/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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

void ISI_hComputeBlendRLI(void* hRLI1, void* hRLI2, short xNumISILOD, float xPercent);
ISI_tdstColor_* ISI_fn_dGetVertexRLILOD(void* _hISI, short _xNumISILOD);
int ISI_fn_dGetVertexRLILODLightMapU(void* _hISI, short _xNumISILOD);
void GLI_xSendObjectToViewportWithLightsFlag(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstGeometricObject_* p_stObj, int lDrawModeMask, unsigned int ulSuperObjectFlag);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 116–117 */
/* addr: 0x002ab360  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 116
 *   +0x0008 -> line 117
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TEX_vSetTextureQualityLevel(GLI_tdstTexture_* p_stTexture, char ucTextQuality)
{
    *(int *)((char *)p_stTexture + 4) = ucTextQuality;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 460–466 */
/* addr: 0x002ab370  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 460
 *   +0x0004 -> line 461
 *   +0x0008 -> line 460
 *   +0x000c -> line 461
 *   +0x002c -> line 463
 *   +0x0058 -> line 465
 *   +0x005c -> line 466
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_hComputeBlendRLI(GEO_tdstVisualSet_* hVisualSet, unsigned char ucIndex1, unsigned char ucIndex2, short xNumISILOD, float xPercent)
{
    if (ucIndex1 >= hVisualSet->lNumberOfRLI)
        return;
    if (ucIndex2 >= hVisualSet->lNumberOfRLI)
        return;
    ISI_hComputeBlendRLI(((void**)hVisualSet->d_hRLI)[ucIndex1], ((void**)hVisualSet->d_hRLI)[ucIndex2], xNumISILOD, xPercent);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 449–452 */
/* addr: 0x002ab3e0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 449
 *   +0x0028 -> line 452
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_hGetRLI(GEO_tdstVisualSet_* hVisualSet, unsigned char ucIndex)
{
    return (ucIndex < hVisualSet->lNumberOfRLI) ? ((int*)hVisualSet->d_hRLI)[ucIndex] : 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 417–433 */
/* addr: 0x002ab410  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 417
 *   +0x0008 -> line 432
 *   +0x002c -> line 433
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_lSendVisualSetToViewport2(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstVisualSet_* p_stVisualSet, int lUnused, int lDrawModeMask)
{
    g_p_stRLIForNextObjectToDraw = 0;
    g_p_stRawRLIsForThisObject = 0;
    g_p_stLightMapUForNextObjectToDraw = 0;
    if (p_stVisualSet->d_p_stLodDefinitions->p_stGeometricObject)
        GLI_xSendObjectToViewportWithLights(p_stVpt, p_stVisualSet->d_p_stLodDefinitions->p_stGeometricObject, lDrawModeMask);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 341–359 */
/* addr: 0x002ab450  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 341
 *   +0x002c -> line 342
 *   +0x0034 -> line 344
 *   +0x0050 -> line 345
 *   +0x0054 -> line 344
 *   +0x0058 -> line 345
 *   +0x0060 -> line 346
 *   +0x0068 -> line 349
 *   +0x0070 -> line 350
 *   +0x0074 -> line 353
 *   +0x0084 -> line 355
 *   +0x0090 -> line 357
 *   +0x0098 -> line 358
 *   +0x009c -> line 359
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 229–252 */
/* addr: 0x002ab510  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 229
 *   +0x0024 -> line 236
 *   +0x002c -> line 238
 *   +0x0048 -> line 239
 *   +0x004c -> line 238
 *   +0x0050 -> line 239
 *   +0x0058 -> line 240
 *   +0x0060 -> line 243
 *   +0x0068 -> line 244
 *   +0x006c -> line 246
 *   +0x007c -> line 248
 *   +0x0084 -> line 250
 *   +0x008c -> line 251
 *   +0x0090 -> line 252
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 206–206 */
/* addr: 0x002ab5c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 206
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_lGetVisualSetNumbertOfLOD(GEO_tdstVisualSet_* p_stVisualSet)
{
    return p_stVisualSet->xNbLodDefinitions;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 189–195 */
/* addr: 0x002ab5d0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 189
 *   +0x0014 -> line 191
 *   +0x0034 -> line 193
 *   +0x0048 -> line 194
 *   +0x0054 -> line 195
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 178–183 */
/* addr: 0x002ab630  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 178
 *   +0x0010 -> line 180
 *   +0x0024 -> line 181
 *   +0x0034 -> line 183
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vGetVisualSetLOD(GEO_tdstVisualSet_* p_stVisualSet, int lNumberOfLodToGet, float* p_xThreshold, GEO_tdstGeometricObject_** h_stObject)
{
    if (lNumberOfLodToGet < p_stVisualSet->xNbLodDefinitions) {
        *p_xThreshold = ((float*)p_stVisualSet->d_xThresholdsTable)[lNumberOfLodToGet];
        *(GEO_tdstGeometricObject_**)h_stObject = ((GEO_tduVSObject_*)p_stVisualSet->d_p_stLodDefinitions)[lNumberOfLodToGet].p_stGeometricObject;
    }
}
