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
} __attribute__((aligned(16)));

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
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdstDataOfElement_ GLI_tdstDataOfElement_;

typedef enum PIC_tdeModePicking_ {
    PIC_C_ModePickingFace = 0,
    PIC_C_ModePickingEdge = 1,
    PIC_C_ModePickingPoint = 2,
} PIC_tdeModePicking_;

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    int eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct GLI_tdstDataOfElement_ {
    MTH3D_tdstVector_ stHit; /* +0x0 */
    float xDistance; /* +0xc */
    short xElements; /* +0x10 */
    short xIndexOfFace; /* +0x12 */
    short xIndexOfEdge; /* +0x14 */
    short xIndexOfPoint; /* +0x16 */
};

struct PIC_tdstPickedObject_ {
    PIC_tdeModePicking_ xModePicking; /* +0x0 */
    short xNbElements; /* +0x4 */
    GLI_tdstDataOfElement_ aDEF_stDataOfElement[3]; /* +0x8 */
};

extern MAT_tdstTransformation_* g_p_stCurrentMatrix;
unsigned char INT_fn_bIntersectSegmentWithFaceOfCollideObject(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVertexB, MTH3D_tdstVector_* p_stVectAB, COL_tdstCollideObject_* p_stGeomObj, short xNbMaxElements, short* p_xNbElements, GLI_tdstDataOfElement_* d_stDataOfElement);

#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x }                  \
    asm { madda.s _y, _y }                 \
    asm { madd.s _result, _z, _z }

#define MTH3D_M_vAddVector(VectDest, VectA, VectB) \
    { (VectDest)->xX = (VectA)->xX + (VectB)->xX; \
      (VectDest)->xY = (VectA)->xY + (VectB)->xY; \
      (VectDest)->xZ = (VectA)->xZ + (VectB)->xZ; }

/* MTH3D inline: distance between two points (R5900 accumulator and sqrt.s
 * have no C form; same helper macros as DNMCame.c). */
inline float MTH3D_M_xVectorGap(MTH3D_tdstVector_* VectA, MTH3D_tdstVector_* VectB)
{
    float xX;
    float xY;
    float xZ;
    float xResult;

    xX = VectA->xX - VectB->xX;
    xY = VectA->xY - VectB->xY;
    xZ = VectA->xZ - VectB->xZ;
    MTH_SQR3_TO(xResult, xX, xY, xZ);
    MTH_SQRT_TO(xResult, xResult);
    return xResult;
}

/* MatSp.h inline: the VU0 macro-mode instructions have no C form. */
inline void MAT_fn_vApplyOnVertex(MTH3D_tdstVector_* VectDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* VectA)
{
    MTH4D_tdstVector_ Vtmp;
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstVector_* p_stVtmp;

    p_stMatrix = &_hTransform->stTransformMatrix; p_stVtmp = &Vtmp;
    *(unsigned int*)&Vtmp.xX = ((unsigned int*)VectA)[0]; *(unsigned int*)&Vtmp.xY = ((unsigned int*)VectA)[1]; *(unsigned int*)&Vtmp.xZ = ((unsigned int*)VectA)[2];
    asm {
        lqc2 vf1, 0x0(p_stVtmp)
        lqc2 vf2, 0x0(p_stMatrix)
        lqc2 vf3, 0x10(p_stMatrix)
        lqc2 vf4, 0x20(p_stMatrix)
        lqc2 vf5, 0x30(p_stMatrix)
        vmulax.xyzw ACC, vf2, vf1x
        vmadday.xyzw ACC, vf3, vf1y
        vmaddaz.xyzw ACC, vf4, vf1z
        vmaddw.xyzw vf6, vf5, vf0w
        nop
        nop
        sqc2 vf6, 0x0(p_stVtmp)
    }
    *(unsigned int*)&VectDest->xX = *(unsigned int*)&Vtmp.xX; *(unsigned int*)&VectDest->xY = *(unsigned int*)&Vtmp.xY; *(unsigned int*)&VectDest->xZ = *(unsigned int*)&Vtmp.xZ;
}

int PIC_bIntersectSegmentWithCollideObject(MTH3D_tdstVector_* p_stCameraPos, MTH3D_tdstVector_* p_stVertex12, COL_tdstCollideObject_* p_stObject, PIC_tdstPickedObject_* p_stPickedObject)
{
    short i;
    MTH3D_tdstVector_ stSouris3D;
    MTH3D_tdstVector_ stTemp;
    int bReturn;
    int bTest;
    short xNbElements;

    MTH3D_M_vAddVector(&stSouris3D, p_stCameraPos, p_stVertex12);
    bReturn = 0;
    bTest = INT_fn_bIntersectSegmentWithFaceOfCollideObject(p_stCameraPos, &stSouris3D, p_stVertex12, p_stObject, 3, &xNbElements, p_stPickedObject->aDEF_stDataOfElement);
    if (bTest)
    {
        MAT_fn_vApplyOnVertex(&stTemp, g_p_stCurrentMatrix, p_stCameraPos);
        for (i = 0; i < xNbElements; i++)
        {
            MAT_fn_vApplyOnVertex(&p_stPickedObject->aDEF_stDataOfElement[i].stHit, g_p_stCurrentMatrix, &p_stPickedObject->aDEF_stDataOfElement[i].stHit);
            p_stPickedObject->aDEF_stDataOfElement[i].xDistance = MTH3D_M_xVectorGap(&stTemp, &p_stPickedObject->aDEF_stDataOfElement[i].stHit);
        }
        p_stPickedObject->xNbElements = xNbElements;
        bReturn = 1;
        p_stPickedObject->xModePicking = PIC_C_ModePickingFace;
    }
    return bReturn;
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
