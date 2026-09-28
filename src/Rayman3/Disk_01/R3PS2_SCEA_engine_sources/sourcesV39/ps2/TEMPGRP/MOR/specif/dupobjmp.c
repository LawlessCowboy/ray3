/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\dupobjmp.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
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

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\dupobjmp.c lines 145–145 */
/* addr: 0x00314ee0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_cCheckAlignmentValidity(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\dupobjmp.c lines 250–263 */
/* addr: 0x00314ef0  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 250
 *   +0x0018 -> line 253
 *   +0x0020 -> line 255
 *   +0x002c -> line 256
 *   +0x0030 -> line 255
 *   +0x0034 -> line 256
 *   +0x0060 -> line 258
 *   +0x006c -> line 259
 *   +0x0080 -> line 261
 *   +0x008c -> line 262
 *   +0x0098 -> line 263
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MOR_fn_vDeletePhysicalObject(PO_tdstPhysicalObject_* _pPhysicalObject)
{
    short i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\dupobjmp.c lines 180–243 */
/* addr: 0x00314fa0  size: 508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 180
 *   +0x001c -> line 184
 *   +0x0024 -> line 188
 *   +0x002c -> line 189
 *   +0x0034 -> line 192
 *   +0x0040 -> line 194
 *   +0x0050 -> line 195
 *   +0x0080 -> line 200
 *   +0x0090 -> line 201
 *   +0x0098 -> line 203
 *   +0x00a8 -> line 204
 *   +0x00b0 -> line 206
 *   +0x00c0 -> line 207
 *   +0x00c8 -> line 209
 *   +0x00d8 -> line 210
 *   +0x00e0 -> line 212
 *   +0x00f0 -> line 213
 *   +0x00f8 -> line 215
 *   +0x0108 -> line 216
 *   +0x0110 -> line 218
 *   +0x0120 -> line 219
 *   +0x0128 -> line 221
 *   +0x0138 -> line 222
 *   +0x0140 -> line 224
 *   +0x0150 -> line 225
 *   +0x0158 -> line 227
 *   +0x0170 -> line 229
 *   +0x018c -> line 231
 *   +0x0194 -> line 235
 *   +0x01a4 -> line 236
 *   +0x01b4 -> line 237
 *   +0x01c4 -> line 238
 *   +0x01d0 -> line 240
 *   +0x01dc -> line 241
 *   +0x01e0 -> line 243
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MOR_fn_vDeleteGeometricObject(GEO_tdstGeometricObject_** p_hObj)
{
    GEO_tdstGeometricObject_* p_hObject;
    int lElementCounter;
    /* TODO: decompile from asm/... */
}
