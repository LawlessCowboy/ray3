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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\ClipTRIANGLES.c lines 75–118 */
/* addr: 0x002a4d30  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 75
 *   +0x0018 -> line 79
 *   +0x0028 -> line 85
 *   +0x002c -> line 81
 *   +0x0030 -> line 85
 *   +0x0034 -> line 82
 *   +0x0038 -> line 79
 *   +0x003c -> line 85
 *   +0x0048 -> line 87
 *   +0x004c -> line 85
 *   +0x0050 -> line 87
 *   +0x0058 -> line 90
 *   +0x005c -> line 87
 *   +0x0060 -> line 90
 *   +0x0080 -> line 91
 *   +0x0090 -> line 98
 *   +0x0094 -> line 117
 *   +0x0098 -> line 102
 *   +0x009c -> line 104
 *   +0x00a0 -> line 118
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\ClipTRIANGLES.c lines 148–148 */
/* addr: 0x002a5070  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 148
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vDrawMirror(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\ClipTRIANGLES.c lines 115–115 */
/* addr: 0x002a5080  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 115
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_DRV_xSendListToViewport(void)
{
}
