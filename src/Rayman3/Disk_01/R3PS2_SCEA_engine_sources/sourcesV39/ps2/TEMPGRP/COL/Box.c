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

unsigned char COL_fn_bDetectCollisionBetweenTwoParallelBoxes(MTH3D_tdstVector_* _p_stFirstBoxMaxPoint, MTH3D_tdstVector_* _p_stFirstBoxMinPoint, MTH3D_tdstVector_* _p_stSecondBoxMaxPoint, MTH3D_tdstVector_* _p_stSecondBoxMinPoint)
{
    if ((_p_stSecondBoxMaxPoint->xX > _p_stFirstBoxMinPoint->xX) && (_p_stSecondBoxMinPoint->xX < _p_stFirstBoxMaxPoint->xX) && (_p_stSecondBoxMaxPoint->xY > _p_stFirstBoxMinPoint->xY) && (_p_stSecondBoxMinPoint->xY < _p_stFirstBoxMaxPoint->xY) && (_p_stSecondBoxMaxPoint->xZ > _p_stFirstBoxMinPoint->xZ) && (_p_stSecondBoxMinPoint->xZ < _p_stFirstBoxMaxPoint->xZ))
    {
        return 1;
    }

    return 0;
}

/* R5900 min.s/max.s; MWCC compiles the C comparison as compare-and-branch. */
inline float MTH_M_xMin(float _xA, float _xB)
{
    float _xResult;
    asm { min.s _xResult, _xA, _xB }
    return _xResult;
}

inline float MTH_M_xMax(float _xA, float _xB)
{
    float _xResult;
    asm { max.s _xResult, _xA, _xB }
    return _xResult;
}

void COL_fn_vComputeBoundingBoxOfSphereAndBox(MTH3D_tdstVector_* p_stMinBounding, MTH3D_tdstVector_* p_stMaxBounding, MTH3D_tdstVector_* p_stSphereCenter, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, float xSphereRadius)
{
    float xValue;
    xValue = p_stSphereCenter->xX - xSphereRadius;
    p_stMinBounding->xX = MTH_M_xMin(xValue, p_stMinPoint->xX);
    xValue = p_stSphereCenter->xY - xSphereRadius;
    p_stMinBounding->xY = MTH_M_xMin(xValue, p_stMinPoint->xY);
    xValue = p_stSphereCenter->xZ - xSphereRadius;
    p_stMinBounding->xZ = MTH_M_xMin(xValue, p_stMinPoint->xZ);
    xValue = p_stSphereCenter->xX + xSphereRadius;
    p_stMaxBounding->xX = MTH_M_xMax(xValue, p_stMaxPoint->xX);
    xValue = p_stSphereCenter->xY + xSphereRadius;
    p_stMaxBounding->xY = MTH_M_xMax(xValue, p_stMaxPoint->xY);
    xValue = p_stSphereCenter->xZ + xSphereRadius;
    p_stMaxBounding->xZ = MTH_M_xMax(xValue, p_stMaxPoint->xZ);
}

void COL_fn_vComputeBoundingBoxOfSphere(MTH3D_tdstVector_* p_stMinBounding, MTH3D_tdstVector_* p_stMaxBounding, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius)
{
    p_stMinBounding->xX = p_stSphereCenter->xX - xSphereRadius;
    p_stMinBounding->xY = p_stSphereCenter->xY - xSphereRadius;
    p_stMinBounding->xZ = p_stSphereCenter->xZ - xSphereRadius;
    p_stMaxBounding->xX = p_stSphereCenter->xX + xSphereRadius;
    p_stMaxBounding->xY = p_stSphereCenter->xY + xSphereRadius;
    p_stMaxBounding->xZ = p_stSphereCenter->xZ + xSphereRadius;
}

void COL_fn_vMinMaxBox2VerticesBox(MTH3D_tdstVector_* a8_stBoxDest, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint)
{
    a8_stBoxDest[0].xX = p_stMinPoint->xX; a8_stBoxDest[0].xY = p_stMinPoint->xY; a8_stBoxDest[0].xZ = p_stMinPoint->xZ;
    a8_stBoxDest[1].xX = p_stMinPoint->xX; a8_stBoxDest[1].xY = p_stMinPoint->xY; a8_stBoxDest[1].xZ = p_stMaxPoint->xZ;
    a8_stBoxDest[2].xX = p_stMinPoint->xX; a8_stBoxDest[2].xY = p_stMaxPoint->xY; a8_stBoxDest[2].xZ = p_stMinPoint->xZ;
    a8_stBoxDest[3].xX = p_stMinPoint->xX; a8_stBoxDest[3].xY = p_stMaxPoint->xY; a8_stBoxDest[3].xZ = p_stMaxPoint->xZ;
    a8_stBoxDest[4].xX = p_stMaxPoint->xX; a8_stBoxDest[4].xY = p_stMinPoint->xY; a8_stBoxDest[4].xZ = p_stMinPoint->xZ;
    a8_stBoxDest[5].xX = p_stMaxPoint->xX; a8_stBoxDest[5].xY = p_stMinPoint->xY; a8_stBoxDest[5].xZ = p_stMaxPoint->xZ;
    a8_stBoxDest[6].xX = p_stMaxPoint->xX; a8_stBoxDest[6].xY = p_stMaxPoint->xY; a8_stBoxDest[6].xZ = p_stMinPoint->xZ;
    a8_stBoxDest[7].xX = p_stMaxPoint->xX; a8_stBoxDest[7].xY = p_stMaxPoint->xY; a8_stBoxDest[7].xZ = p_stMaxPoint->xZ;
}
