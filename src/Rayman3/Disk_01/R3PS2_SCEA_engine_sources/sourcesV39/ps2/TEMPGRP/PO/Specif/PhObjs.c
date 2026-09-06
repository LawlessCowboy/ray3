/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PO\Specif\PhObjs.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct PIC_tdstPickedObject_ PIC_tdstPickedObject_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
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

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    int d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PO\Specif\PhObjs.c lines 185–223 */
/* addr: 0x00317fd0  size: 520 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 185
 *   +0x000c -> line 192
 *   +0x0010 -> line 185
 *   +0x0014 -> line 192
 *   +0x0018 -> line 185
 *   +0x001c -> line 192
 *   +0x0020 -> line 185
 *   +0x0028 -> line 190
 *   +0x0034 -> line 192
 *   +0x003c -> line 187
 *   +0x0040 -> line 190
 *   +0x0060 -> line 192
 *   +0x0064 -> line 190
 *   +0x0068 -> line 192
 *   +0x0074 -> line 200
 *   +0x007c -> line 205
 *   +0x00dc -> line 207
 *   +0x00f0 -> line 205
 *   +0x0100 -> line 207
 *   +0x0108 -> line 209
 *   +0x017c -> line 213
 *   +0x01ac -> line 215
 *   +0x01b0 -> line 213
 *   +0x01b4 -> line 215
 *   +0x01b8 -> line 213
 *   +0x01bc -> line 215
 *   +0x01c0 -> line 213
 *   +0x01c4 -> line 215
 *   +0x01e0 -> line 216
 *   +0x01e4 -> line 219
 *   +0x01e8 -> line 217
 *   +0x01ec -> line 222
 *   +0x01f0 -> line 223
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PIC_bIntersectSegmentWithCollideObject(MTH3D_tdstVector_* p_stCameraPos, MTH3D_tdstVector_* p_stVertex12, COL_tdstCollideObject_* p_stObject, PIC_tdstPickedObject_* p_stPickedObject)
{
    short i;
    MTH3D_tdstVector_ stTemp;
    MTH3D_tdstVector_ stSouris3D;
    int bReturn;
    int bTest;
    short xNbElements;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PO\Specif\PhObjs.c lines 81–81 */
/* addr: 0x003181e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 81
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstPhysicalCollSet_* PO_fn_hGetCollideSet(PO_tdstPhysicalObject_* _hPhysicalObject)
{
    return _hPhysicalObject->_hCollideSet;
}
