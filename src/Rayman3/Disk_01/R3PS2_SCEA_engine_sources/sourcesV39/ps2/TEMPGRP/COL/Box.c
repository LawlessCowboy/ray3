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
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

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
    if ((_p_stSecondBoxMaxPoint->xX > _p_stFirstBoxMinPoint->xX) && (_p_stSecondBoxMinPoint->xX < _p_stFirstBoxMaxPoint->xX) && (_p_stSecondBoxMaxPoint->xY > _p_stFirstBoxMinPoint->xY) && (_p_stSecondBoxMinPoint->xY < _p_stFirstBoxMaxPoint->xY) && (_p_stSecondBoxMaxPoint->xZ > _p_stFirstBoxMinPoint->xZ) && (_p_stSecondBoxMinPoint->xZ < _p_stFirstBoxMaxPoint->xZ))
    {
        return 1;
    }

    return 0;
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
    p_stMinBounding->xX = p_stSphereCenter->xX - xSphereRadius;
    p_stMinBounding->xY = p_stSphereCenter->xY - xSphereRadius;
    p_stMinBounding->xZ = p_stSphereCenter->xZ - xSphereRadius;
    p_stMaxBounding->xX = p_stSphereCenter->xX + xSphereRadius;
    p_stMaxBounding->xY = p_stSphereCenter->xY + xSphereRadius;
    p_stMaxBounding->xZ = p_stSphereCenter->xZ + xSphereRadius;
    if (p_stMinPoint->xX < p_stMinBounding->xX) {
        p_stMinBounding->xX = p_stMinPoint->xX;
    }
    if (p_stMinPoint->xY < p_stMinBounding->xY) {
        p_stMinBounding->xY = p_stMinPoint->xY;
    }
    if (p_stMinPoint->xZ < p_stMinBounding->xZ) {
        p_stMinBounding->xZ = p_stMinPoint->xZ;
    }
    if (p_stMaxPoint->xX > p_stMaxBounding->xX) {
        p_stMaxBounding->xX = p_stMaxPoint->xX;
    }
    if (p_stMaxPoint->xY > p_stMaxBounding->xY) {
        p_stMaxBounding->xY = p_stMaxPoint->xY;
    }
    if (p_stMaxPoint->xZ > p_stMaxBounding->xZ) {
        p_stMaxBounding->xZ = p_stMaxPoint->xZ;
    }
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
    p_stMinBounding->xX = p_stSphereCenter->xX - xSphereRadius;
    p_stMinBounding->xY = p_stSphereCenter->xY - xSphereRadius;
    p_stMinBounding->xZ = p_stSphereCenter->xZ - xSphereRadius;
    p_stMaxBounding->xX = p_stSphereCenter->xX + xSphereRadius;
    p_stMaxBounding->xY = p_stSphereCenter->xY + xSphereRadius;
    p_stMaxBounding->xZ = p_stSphereCenter->xZ + xSphereRadius;
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
    a8_stBoxDest[0] = p_stMinPoint[0];
    a8_stBoxDest[1] = p_stMinPoint[1];
    a8_stBoxDest[2] = p_stMinPoint[2];
    a8_stBoxDest[3] = p_stMinPoint[0];
    a8_stBoxDest[4] = p_stMinPoint[1];
    a8_stBoxDest[5] = p_stMaxPoint[2];
    a8_stBoxDest[6] = p_stMinPoint[0];
    a8_stBoxDest[7] = p_stMaxPoint[1];
    a8_stBoxDest[8] = p_stMaxPoint[2];
    a8_stBoxDest[9] = p_stMinPoint[0];
    a8_stBoxDest[10] = p_stMinPoint[1];
    a8_stBoxDest[11] = p_stMinPoint[2];
    a8_stBoxDest[12] = p_stMinPoint[0];
    a8_stBoxDest[13] = p_stMaxPoint[1];
    a8_stBoxDest[14] = p_stMinPoint[2];
    a8_stBoxDest[15] = p_stMaxPoint[0];
    a8_stBoxDest[16] = p_stMinPoint[1];
    a8_stBoxDest[17] = p_stMinPoint[2];
    a8_stBoxDest[18] = p_stMaxPoint[0];
    a8_stBoxDest[19] = p_stMaxPoint[1];
    a8_stBoxDest[20] = p_stMinPoint[2];
    a8_stBoxDest[21] = p_stMaxPoint[0];
    a8_stBoxDest[22] = p_stMinPoint[1];
    a8_stBoxDest[23] = p_stMaxPoint[2];
    a8_stBoxDest[24] = p_stMaxPoint[0];
    a8_stBoxDest[25] = p_stMinPoint[1];
    a8_stBoxDest[26] = p_stMaxPoint[2];
    a8_stBoxDest[27] = p_stMaxPoint[0];
    a8_stBoxDest[28] = p_stMinPoint[1];
    a8_stBoxDest[29] = p_stMinPoint[2];
    a8_stBoxDest[30] = p_stMaxPoint[0];
    a8_stBoxDest[31] = p_stMaxPoint[1];
    a8_stBoxDest[32] = p_stMaxPoint[2];
    a8_stBoxDest[33] = p_stMaxPoint[0];
    a8_stBoxDest[34] = p_stMaxPoint[1];
    a8_stBoxDest[35] = p_stMinPoint[2];
    a8_stBoxDest[36] = p_stMinPoint[0];
    a8_stBoxDest[37] = p_stMaxPoint[1];
    a8_stBoxDest[38] = p_stMinPoint[2];
    a8_stBoxDest[39] = p_stMinPoint[0];
    a8_stBoxDest[40] = p_stMaxPoint[1];
    a8_stBoxDest[41] = p_stMaxPoint[2];
    a8_stBoxDest[42] = p_stMaxPoint[0];
    a8_stBoxDest[43] = p_stMinPoint[1];
    a8_stBoxDest[44] = p_stMinPoint[2];
    a8_stBoxDest[45] = p_stMaxPoint[0];
    a8_stBoxDest[46] = p_stMinPoint[1];
    a8_stBoxDest[47] = p_stMaxPoint[2];
    a8_stBoxDest[48] = p_stMaxPoint[0];
    a8_stBoxDest[49] = p_stMaxPoint[1];
    a8_stBoxDest[50] = p_stMinPoint[2];
    a8_stBoxDest[51] = p_stMaxPoint[0];
    a8_stBoxDest[52] = p_stMaxPoint[1];
    a8_stBoxDest[53] = p_stMaxPoint[2];
    a8_stBoxDest[54] = p_stMinPoint[0];
    a8_stBoxDest[55] = p_stMinPoint[1];
    a8_stBoxDest[56] = p_stMaxPoint[2];
    a8_stBoxDest[57] = p_stMinPoint[0];
    a8_stBoxDest[58] = p_stMaxPoint[1];
    a8_stBoxDest[59] = p_stMaxPoint[2];
    a8_stBoxDest[60] = p_stMinPoint[0];
    a8_stBoxDest[61] = p_stMaxPoint[1];
    a8_stBoxDest[62] = p_stMinPoint[2];
}
