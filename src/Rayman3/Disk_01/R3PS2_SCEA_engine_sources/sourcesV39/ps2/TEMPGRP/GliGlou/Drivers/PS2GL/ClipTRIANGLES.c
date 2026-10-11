/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\ClipTRIANGLES.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

typedef struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16))) MTH4D_tdstVector_;

/* Layout as in GeoObj.c. */
struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    short* d_xListOfElementsTypes; /* +0xc */
    void** d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
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

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void* memset(void* dst, int c, size_t n);

GEO_tdstGeometricObject_* GEO_hAllocTMPGeometricObject(short xNbPoints, short xNbElements)
{
    GEO_tdstGeometricObject_* p_stObjectToCreate;

    p_stObjectToCreate = (GEO_tdstGeometricObject_*)HMU_fn_p_vMalloc(sizeof(GEO_tdstGeometricObject_), 1);
    p_stObjectToCreate->xNbElements = xNbElements;
    p_stObjectToCreate->xNbPoints = xNbPoints;
    p_stObjectToCreate->d_xListOfElementsTypes = (short*)HMU_fn_p_vMalloc(xNbElements * sizeof(short), 1);
    p_stObjectToCreate->d_stListOfElements = (void**)HMU_fn_p_vMalloc(xNbElements * sizeof(void*), 1);
    p_stObjectToCreate->d_stListOfPoints = (MTH3D_tdstVector_*)HMU_fn_p_vMalloc(xNbPoints * sizeof(MTH3D_tdstVector_), 1);
    memset(p_stObjectToCreate->d_stListOfPoints, 0, xNbPoints * sizeof(MTH3D_tdstVector_));
    p_stObjectToCreate->d_stListOfPointsNormals = NULL;
    p_stObjectToCreate->d_dfVertexTransparency = 0;
    p_stObjectToCreate->d_stListOfEdges = NULL;
    return p_stObjectToCreate;
}

void GLI_fn_vDrawMirror(void)
{
}

void GLI_DRV_xSendListToViewport(void)
{
}
