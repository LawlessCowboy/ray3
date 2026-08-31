/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Box.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct COL_tdstDoubledIndex_ COL_tdstDoubledIndex_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_* p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct COL_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

MTH3D_tdstVector_ COL_g_a6_stBoxSidesNormal[6];
COL_tdstDoubledIndex_ COL_g_a12_stBoxEdges[12];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Box.c lines 225–235 */
/* addr: 0x0024ecf0  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 225
 *   +0x0090 -> line 231
 *   +0x0098 -> line 233
 *   +0x009c -> line 235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char COL_fn_bDetectCollisionBetweenTwoParallelBoxes(MTH3D_tdstVector_* _p_stFirstBoxMaxPoint, MTH3D_tdstVector_* _p_stFirstBoxMinPoint, MTH3D_tdstVector_* _p_stSecondBoxMaxPoint, MTH3D_tdstVector_* _p_stSecondBoxMinPoint)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Box.c lines 164–171 */
/* addr: 0x0024eda0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 164
 *   +0x0018 -> line 165
 *   +0x0030 -> line 166
 *   +0x0048 -> line 168
 *   +0x0060 -> line 169
 *   +0x0078 -> line 170
 *   +0x0088 -> line 171
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vComputeBoundingBoxOfSphereAndBox(MTH3D_tdstVector_* p_stMinBounding, MTH3D_tdstVector_* p_stMaxBounding, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Box.c lines 144–146 */
/* addr: 0x0024ee30  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 144
 *   +0x0024 -> line 145
 *   +0x0044 -> line 146
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vComputeBoundingBoxOfSphere(MTH3D_tdstVector_* p_stMinBounding, MTH3D_tdstVector_* p_stMaxBounding, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Box.c lines 73–81 */
/* addr: 0x0024ee80  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 73
 *   +0x0018 -> line 74
 *   +0x0030 -> line 75
 *   +0x0048 -> line 76
 *   +0x0060 -> line 77
 *   +0x0078 -> line 78
 *   +0x0090 -> line 79
 *   +0x00a8 -> line 80
 *   +0x00bc -> line 81
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_fn_vMinMaxBox2VerticesBox(MTH3D_tdstVector_* a8_stBoxDest, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint)
{
    /* TODO: decompile from asm/... */
}
