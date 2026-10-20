/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered PS2 MTH scalar helpers used by the original vector macros. */
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x }                  \
    asm { madda.s _y, _y }                 \
    asm { madd.s _result, _z, _z }
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }
#define MTH_DISTANCE_TO(_result, _a, _b)      \
    do {                                      \
        float _dx = (_b)->xX - (_a)->xX;      \
        float _dy = (_b)->xY - (_a)->xY;      \
        float _dz = (_b)->xZ - (_a)->xZ;      \
        float _dn;                           \
        MTH_SQR3_TO(_dn, _dx, _dy, _dz);      \
        MTH_SQRT_TO(_result, _dn);            \
    } while (0)

/* R5900 accumulator dot product (as MECBhv.c's MTH_xDot3). */
inline float MTH_xDot3(float _x1, float _x2, float _y1, float _y2, float _z1, float _z2)
{
    float _r;
    asm { mula.s _x1, _x2 }
    asm { madda.s _y1, _y2 }
    asm { madd.s _r, _z1, _z2 }
    return _r;
}

extern void* memcpy(void*, const void*, size_t);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstElementAlignedBoxes_ GEO_tdstElementAlignedBoxes_;
typedef struct GEO_tdstElementCones_ GEO_tdstElementCones_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct COL_tdstShadowElement_ COL_tdstShadowElement_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct GLI_tdstDataOfElement_ GLI_tdstDataOfElement_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct COL_tdstDoubledIndex_ COL_tdstDoubledIndex_;
typedef struct GEO_tdstIndexedSphere_ GEO_tdstIndexedSphere_;
typedef struct GEO_tdstIndexedAlignedBox_ GEO_tdstIndexedAlignedBox_;
typedef struct GEO_tdstIndexedCone_ GEO_tdstIndexedCone_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GEO_tdstElementSpheres_ GEO_tdstElementSpheres_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;

typedef enum MAT_tdeTranformationType_ {
    MAT_eTransform_Uninitialized = 0,
    MAT_eTransform_Identity = 1,
    MAT_eTransform_Translation = 2,
    MAT_eTransform_Zoom = 3,
    MAT_eTransform_Scale = 4,
    MAT_eTransform_Rotation = 5,
    MAT_eTransform_RotationZoom = 6,
    MAT_eTransform_RotationScale = 7,
    MAT_eTransform_ComplexRotationScale = 8,
    MAT_eTransform_Undefined = 9,
} MAT_tdeTranformationType_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstElementAlignedBoxes_ {
    GEO_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstElementCones_ {
    GEO_tdstIndexedCone_* d_stListOfCones; /* +0x0 */
    short xNbCones; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

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

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    short* d_xFaceIndexList; /* +0x1c */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct COL_tdstElementIndexedTriangles_ {
    GMT_tdstGameMaterial_* hMaterial; /* +0x0 */
    COL_tdstTripledIndex_* d_stListOfFacesTripled; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x8 */
    short xNbFaces; /* +0xc */
    short xIndexOfParallelBox; /* +0xe */
    GEO_tdstElementIndexedTriangles_* p_stGeometricElementForVisualisation; /* +0x10 */
    COL_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x14 */
    MTH3D_tdstVector_* d_stListOfEdgesNormals; /* +0x18 */
    int d_xListOfEdgesCoeff; /* +0x1c */
    short xNbEdges; /* +0x20 */
};

struct COL_tdstShadowElement_ {
    short xElementIndex; /* +0x0 */
    short xDataElementIndex; /* +0x2 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GLI_tdstDataOfElement_ {
    MTH3D_tdstVector_ stHit; /* +0x0 */
    float xDistance; /* +0xc */
    short xElements; /* +0x10 */
    short xIndexOfFace; /* +0x12 */
    short xIndexOfEdge; /* +0x14 */
    short xIndexOfPoint; /* +0x16 */
};

struct COL_tdstElementAlignedBoxes_ {
    COL_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct COL_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct GEO_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GEO_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x4 */
};

struct GEO_tdstIndexedCone_ {
    short xTopPoint; /* +0x0 */
    short xBasePoint; /* +0x2 */
    float xBaseRadius; /* +0x4 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x8 */
};

struct GEO_tdstElementIndexedTriangles_ {
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    short xNbFaces; /* +0x4 */
    short xNbElementUV; /* +0x6 */
    short xNbUVStages; /* +0x8 */
    GEO_tdstTripledIndex_* d_stListOfFacesTripled; /* +0xc */
    GEO_tdstTripledIndex_* d_stListOfFacesTripledIndexUV; /* +0x10 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x14 */
    ACP_tdst2DUVValues_* d_stListOfElementUV; /* +0x18 */
    GEO_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x1c */
    GEO_tdstTripledIndex_* d_stListOfFacesAdjacent; /* +0x20 */
    int d_stListOfIndexUsedByThisElement; /* +0x24 */
    short xNumberOfIndexsUsed; /* +0x28 */
    short xIndexOfParallelBox; /* +0x2a */
    unsigned int glDisplayList; /* +0x2c */
    int p_xSpecialValue; /* +0x30 */
    unsigned char bVisibleInPortal; /* +0x34 */
    unsigned int pVertexArrays[4]; /* +0x38 */
};

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    short* d_xListOfElementsTypes; /* +0xc */
    void** d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct GEO_tdstElementSpheres_ {
    GEO_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
};

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    unsigned short* d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

unsigned int g_xMask;
COL_tdstDoubledIndex_ COL_g_a12_stBoxEdges[12];
int COL_g_d_lTaggedFacesTable[4096];
int COL_g_lFacesTagCounter;

extern unsigned char INT_fn_bIntersectSegmentWithTriangle(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stVertex3, MTH3D_tdstVector_* p_stNormal, float xDPlan, float* p_xT, MTH3D_tdstVector_* p_stHit);
extern unsigned char INT_fn_bIntersectSegmentWithSphere(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius, float* p_xT, MTH3D_tdstVector_* p_stHit, MTH3D_tdstVector_* p_stNormal);
extern unsigned char INT_fn_bIntersectSegmentWithBox(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, float* p_xT, MTH3D_tdstVector_* p_stHit, MTH3D_tdstVector_* p_stNormal);
extern void COL_fn_vExploreOctreeWithSegment(COL_tdstOctree_* p_stOctree, MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, COL_tdstOctreeNode_** d_pstSelectedNode, float* d_xSelectedT, short* p_xNumberOfSelectedNodes);
extern unsigned char INT_fn_bDetectIntersectSegmentWithTriangle(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stVertex3, MTH3D_tdstVector_* p_stNormal, float xDPlan);
extern unsigned char INT_fn_bDetectIntersectSegmentWithSphere(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius);
extern unsigned char INT_fn_bDetectIntersectSegmentWithBox(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, float* _p_xT);
extern void COL_vGetGameMaterialOfIndexedTriangles(COL_tdstCollideObject_* p_stGeomObj, short xElementIndex, GMT_tdstGameMaterial_** p_hMaterial);
extern GMT_tdstCollideMaterial_* GMT_fn_hGetCollideMaterial(GMT_tdstGameMaterial_* hGameMaterial);
extern unsigned short GMT_fn_hGetCollideMaterialIdentifier(GMT_tdstCollideMaterial_* hCollideMaterial);
extern void INT_fn_vViewAndAddFaceElementInList(short xNbMaxElements, short* p_xNbElements, GLI_tdstDataOfElement_* d_stDataOfElement, MTH3D_tdstVector_* p_stVertexA, unsigned char bBack, MTH3D_tdstVector_* p_stHit, short xElements, short xDataElementIndex);
extern unsigned char INT_fn_bGetInclusionPointInSphere(MTH3D_tdstVector_* p_stPoint, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius);
extern unsigned char INT_fn_bGetInclusionPointInBox(MTH3D_tdstVector_* p_stPoint, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 2847–3086 */
/* addr: 0x002556f0  size: 3056 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2847
 *   +0x0004 -> line 2879
 *   +0x0008 -> line 2847
 *   +0x004c -> line 2879
 *   +0x008c -> line 2880
 *   +0x00d0 -> line 2882
 *   +0x00e0 -> line 2884
 *   +0x010c -> line 2886
 *   +0x0110 -> line 2887
 *   +0x0118 -> line 2890
 *   +0x0120 -> line 2887
 *   +0x0128 -> line 2890
 *   +0x0130 -> line 2896
 *   +0x0134 -> line 2893
 *   +0x0138 -> line 2896
 *   +0x0148 -> line 2893
 *   +0x0150 -> line 2896
 *   +0x0154 -> line 2893
 *   +0x015c -> line 2896
 *   +0x01c0 -> line 2898
 *   +0x01cc -> line 2896
 *   +0x01dc -> line 2898
 *   +0x01e8 -> line 2900
 *   +0x0210 -> line 2903
 *   +0x0214 -> line 2906
 *   +0x0218 -> line 2903
 *   +0x0220 -> line 2906
 *   +0x0228 -> line 2909
 *   +0x022c -> line 2912
 *   +0x0240 -> line 2909
 *   +0x0244 -> line 2912
 *   +0x02a8 -> line 2914
 *   +0x02b0 -> line 2912
 *   +0x02c4 -> line 2914
 *   +0x02e4 -> line 2917
 *   +0x02f4 -> line 2919
 *   +0x02f8 -> line 2918
 *   +0x0300 -> line 2919
 *   +0x0308 -> line 2921
 *   +0x030c -> line 2919
 *   +0x0310 -> line 2921
 *   +0x0330 -> line 2922
 *   +0x0338 -> line 2927
 *   +0x0344 -> line 2929
 *   +0x0354 -> line 2932
 *   +0x03cc -> line 2937
 *   +0x03d0 -> line 2932
 *   +0x03e4 -> line 2934
 *   +0x03f0 -> line 2937
 *   +0x03f8 -> line 2942
 *   +0x03fc -> line 2940
 *   +0x0400 -> line 2942
 *   +0x040c -> line 2940
 *   +0x0410 -> line 2942
 *   +0x044c -> line 2946
 *   +0x045c -> line 2948
 *   +0x0460 -> line 2947
 *   +0x0468 -> line 2948
 *   +0x0470 -> line 2950
 *   +0x0474 -> line 2948
 *   +0x0478 -> line 2950
 *   +0x0498 -> line 2957
 *   +0x04a0 -> line 2950
 *   +0x04a8 -> line 2957
 *   +0x04d4 -> line 2958
 *   +0x04fc -> line 2959
 *   +0x0504 -> line 2961
 *   +0x0508 -> line 2964
 *   +0x0514 -> line 2966
 *   +0x0524 -> line 2968
 *   +0x0530 -> line 2970
 *   +0x0538 -> line 2973
 *   +0x0540 -> line 2970
 *   +0x0548 -> line 2973
 *   +0x0550 -> line 2976
 *   +0x0560 -> line 2978
 *   +0x0570 -> line 2980
 *   +0x059c -> line 2982
 *   +0x05a0 -> line 2983
 *   +0x05a4 -> line 2986
 *   +0x05a8 -> line 2983
 *   +0x05b0 -> line 2986
 *   +0x05b8 -> line 2989
 *   +0x05bc -> line 2992
 *   +0x05d0 -> line 2989
 *   +0x05d4 -> line 2992
 *   +0x0634 -> line 2994
 *   +0x0638 -> line 2992
 *   +0x064c -> line 2994
 *   +0x069c -> line 2998
 *   +0x06a0 -> line 3000
 *   +0x06a4 -> line 2998
 *   +0x06ac -> line 2999
 *   +0x06b4 -> line 3000
 *   +0x06bc -> line 3002
 *   +0x06c0 -> line 3000
 *   +0x06c4 -> line 3002
 *   +0x06e8 -> line 3003
 *   +0x06f0 -> line 3006
 *   +0x06f4 -> line 3009
 *   +0x06fc -> line 3006
 *   +0x0704 -> line 3009
 *   +0x0710 -> line 3012
 *   +0x0714 -> line 3016
 *   +0x071c -> line 3012
 *   +0x0724 -> line 3016
 *   +0x0750 -> line 3020
 *   +0x0778 -> line 3023
 *   +0x07cc -> line 3024
 *   +0x07d0 -> line 3023
 *   +0x07d4 -> line 3024
 *   +0x07dc -> line 3023
 *   +0x07f0 -> line 3024
 *   +0x0804 -> line 3026
 *   +0x0810 -> line 3029
 *   +0x0820 -> line 3031
 *   +0x0824 -> line 3029
 *   +0x0828 -> line 3031
 *   +0x082c -> line 3029
 *   +0x0880 -> line 3031
 *   +0x08b8 -> line 3036
 *   +0x08bc -> line 3038
 *   +0x08c0 -> line 3036
 *   +0x08c8 -> line 3037
 *   +0x08d0 -> line 3038
 *   +0x08d8 -> line 3040
 *   +0x08dc -> line 3038
 *   +0x08e0 -> line 3040
 *   +0x08fc -> line 3044
 *   +0x0930 -> line 3048
 *   +0x0958 -> line 3051
 *   +0x09ac -> line 3052
 *   +0x09b0 -> line 3051
 *   +0x09b4 -> line 3052
 *   +0x09bc -> line 3051
 *   +0x09d0 -> line 3052
 *   +0x09e4 -> line 3054
 *   +0x09f0 -> line 3057
 *   +0x0a00 -> line 3059
 *   +0x0a04 -> line 3057
 *   +0x0a08 -> line 3059
 *   +0x0a0c -> line 3057
 *   +0x0a60 -> line 3059
 *   +0x0a98 -> line 3064
 *   +0x0a9c -> line 3066
 *   +0x0aa0 -> line 3064
 *   +0x0aa8 -> line 3065
 *   +0x0ab0 -> line 3066
 *   +0x0ab8 -> line 3068
 *   +0x0abc -> line 3066
 *   +0x0ac0 -> line 3068
 *   +0x0ae0 -> line 3069
 *   +0x0b04 -> line 3074
 *   +0x0b08 -> line 3069
 *   +0x0b18 -> line 3075
 *   +0x0b4c -> line 3076
 *   +0x0b74 -> line 3082
 *   +0x0b78 -> line 3076
 *   +0x0b90 -> line 3083
 *   +0x0bb8 -> line 3086
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bDetectIntersectGeomObjWithGeomObj(COL_tdstCollideObject_* p_stGeomObj1, MAT_tdstTransformation_* _p_stMatrix1, COL_tdstCollideObject_* p_stGeomObj2, MAT_tdstTransformation_* _p_stMatrix2, GMT_tdstGameMaterial_** _p_hMat1, GMT_tdstGameMaterial_** _p_hMat2)
{
    short xEdgeIndex;
    short xVertexIndex;
    MTH3D_tdstVector_ stEdgeVector;
    MTH3D_tdstVector_ a8_st8VBox1in2[8];
    MTH3D_tdstVector_ a8_st8VBox1[8];
    MTH3D_tdstVector_ a8_st8VBox2in1[8];
    MTH3D_tdstVector_ a8_st8VBox2[8];
    MTH3D_tdstVector_ stCenter2;
    MTH3D_tdstVector_ stCenter1;
    MTH3D_tdstVector_ stCenter2in1;
    MTH3D_tdstVector_ stCenter1in2;
    COL_tdstIndexedAlignedBox_* p_stIndexedAlignedBox2;
    COL_tdstIndexedSphere_* p_stIndexedSphere2;
    COL_tdstElementAlignedBoxes_* p_stElementAlignedBoxes2;
    COL_tdstElementSpheres_* p_stElementSpheres2;
    short xDataElementIndex2;
    short xElementIndex2;
    COL_tdstIndexedAlignedBox_* p_stIndexedAlignedBox1;
    COL_tdstIndexedSphere_* p_stIndexedSphere1;
    COL_tdstElementAlignedBoxes_* p_stElementAlignedBoxes1;
    COL_tdstElementSpheres_* p_stElementSpheres1;
    short xDataElementIndex1;
    short xElementIndex1;
    MAT_tdstTransformation_ st21TransformMatrix;
    MAT_tdstTransformation_ st12TransformMatrix;
    MAT_tdstTransformation_ stInvMatrix2;

    /* Retail structure: the function switches on the type of the two
     * transformations (MAT_eTransform_Identity / _Translation / _Rotation)
     * and then compares the two collide objects element by element
     * (triangles, spheres, aligned boxes) after transforming them into a
     * common space; the eight bounding-box vectors and the three
     * transformations are function-scope locals. */
    switch (_p_stMatrix1->eType)
    {
    case MAT_eTransform_Identity:
    {
        break;
    }
    case MAT_eTransform_Translation:
    {
        break;
    }
    case MAT_eTransform_Rotation:
    {
        break;
    }
    default:
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 2039–2143 */
/* addr: 0x002562e0  size: 808 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2039
 *   +0x0008 -> line 2059
 *   +0x000c -> line 2039
 *   +0x0020 -> line 2063
 *   +0x0024 -> line 2039
 *   +0x0044 -> line 2059
 *   +0x0058 -> line 2063
 *   +0x0060 -> line 2065
 *   +0x0094 -> line 2067
 *   +0x0098 -> line 2068
 *   +0x009c -> line 2070
 *   +0x00a0 -> line 2073
 *   +0x00a8 -> line 2068
 *   +0x00b0 -> line 2073
 *   +0x00b8 -> line 2076
 *   +0x00bc -> line 2081
 *   +0x00c0 -> line 2076
 *   +0x00cc -> line 2081
 *   +0x00d0 -> line 2084
 *   +0x00dc -> line 2076
 *   +0x00ec -> line 2084
 *   +0x0104 -> line 2086
 *   +0x010c -> line 2084
 *   +0x0110 -> line 2086
 *   +0x014c -> line 2093
 *   +0x0158 -> line 2095
 *   +0x0160 -> line 2093
 *   +0x0168 -> line 2095
 *   +0x0188 -> line 2097
 *   +0x01a8 -> line 2099
 *   +0x01b0 -> line 2104
 *   +0x01b4 -> line 2107
 *   +0x01b8 -> line 2104
 *   +0x01c0 -> line 2107
 *   +0x01c8 -> line 2110
 *   +0x01cc -> line 2112
 *   +0x01d4 -> line 2110
 *   +0x01d8 -> line 2112
 *   +0x01fc -> line 2115
 *   +0x0204 -> line 2117
 *   +0x0208 -> line 2115
 *   +0x020c -> line 2117
 *   +0x0230 -> line 2118
 *   +0x0238 -> line 2121
 *   +0x023c -> line 2124
 *   +0x0240 -> line 2121
 *   +0x0248 -> line 2124
 *   +0x0250 -> line 2127
 *   +0x0254 -> line 2129
 *   +0x025c -> line 2127
 *   +0x0260 -> line 2129
 *   +0x0294 -> line 2132
 *   +0x029c -> line 2134
 *   +0x02a0 -> line 2132
 *   +0x02a4 -> line 2134
 *   +0x02c8 -> line 2140
 *   +0x02d0 -> line 2134
 *   +0x02d8 -> line 2140
 *   +0x02f8 -> line 2143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bGetInclusionPointInCollideObject(MTH3D_tdstVector_* p_stPoint, COL_tdstCollideObject_* p_stGeomObj)
{
    short xElementIndex;
    short xDataElementIndex;
    COL_tdstElementIndexedTriangles_* p_stElementIndexedTriangles;
    COL_tdstElementSpheres_* p_stElementSpheres;
    COL_tdstElementAlignedBoxes_* p_stElementAlignedBoxes;
    COL_tdstIndexedSphere_* p_stIndexedSphere;
    COL_tdstIndexedAlignedBox_* p_stIndexedAlignedBox;
    MTH3D_tdstVector_* p_stVertex1;
    MTH3D_tdstVector_* p_stNormal;
    float xT;
    MTH3D_tdstVector_ stHit;
    MTH3D_tdstVector_ stZNormal = {0.0f, 0.0f, 1.0f};
    short xNbIntersect;

    for (xElementIndex = 0; xElementIndex < p_stGeomObj->xNbElements; xElementIndex++)
    {
        switch (p_stGeomObj->d_xListOfElementsTypes[xElementIndex])
        {
        case 1:
        {
            p_stElementIndexedTriangles = (COL_tdstElementIndexedTriangles_*)p_stGeomObj->d_stListOfElements[xElementIndex];
            xNbIntersect = 0;
            for (xDataElementIndex = 0; xDataElementIndex < p_stElementIndexedTriangles->xNbFaces; xDataElementIndex++)
            {
                p_stVertex1 = &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[0]];
                p_stNormal = &p_stElementIndexedTriangles->d_stListOfFacesNormals[xDataElementIndex];
                if (INT_fn_bIntersectSegmentWithTriangle(p_stPoint, &stZNormal,
                        p_stVertex1,
                        &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[1]],
                        &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[2]],
                        p_stNormal,
                        -MTH_xDot3(p_stNormal->xX, p_stVertex1->xX, p_stNormal->xY, p_stVertex1->xY, p_stNormal->xZ, p_stVertex1->xZ),
                        &xT, &stHit))
                {
                    xNbIntersect++;
                }
            }
            if (xNbIntersect % 2)
            {
                return 1;
            }
            break;
        }
        case 7:
        {
            p_stElementSpheres = (COL_tdstElementSpheres_*)p_stGeomObj->d_stListOfElements[xElementIndex];
            for (xDataElementIndex = 0; xDataElementIndex < p_stElementSpheres->xNbSpheres; xDataElementIndex++)
            {
                p_stIndexedSphere = &p_stElementSpheres->d_stListOfSpheres[xDataElementIndex];
                if (INT_fn_bGetInclusionPointInSphere(p_stPoint, &p_stGeomObj->d_stListOfPoints[p_stIndexedSphere->xCenterPoint], p_stIndexedSphere->xRadius))
                {
                    return 1;
                }
            }
            break;
        }
        case 8:
        {
            p_stElementAlignedBoxes = (COL_tdstElementAlignedBoxes_*)p_stGeomObj->d_stListOfElements[xElementIndex];
            for (xDataElementIndex = 0; xDataElementIndex < p_stElementAlignedBoxes->xNbAlignedBoxes; xDataElementIndex++)
            {
                p_stIndexedAlignedBox = &p_stElementAlignedBoxes->d_stListOfAlignedBoxes[xDataElementIndex];
                if (INT_fn_bGetInclusionPointInBox(p_stPoint, &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMinPoint], &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMaxPoint]))
                {
                    return 1;
                }
            }
            break;
        }
        default:
            break;
        }
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 1155–1459 */
/* addr: 0x00256610  size: 1940 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1155
 *   +0x0034 -> line 1182
 *   +0x0040 -> line 1185
 *   +0x0050 -> line 1187
 *   +0x0084 -> line 1189
 *   +0x0088 -> line 1191
 *   +0x0094 -> line 1193
 *   +0x009c -> line 1194
 *   +0x00c0 -> line 1202
 *   +0x00d0 -> line 1205
 *   +0x00d4 -> line 1210
 *   +0x00d8 -> line 1205
 *   +0x00e4 -> line 1210
 *   +0x00e8 -> line 1213
 *   +0x00f4 -> line 1205
 *   +0x0104 -> line 1213
 *   +0x011c -> line 1216
 *   +0x0124 -> line 1213
 *   +0x0128 -> line 1216
 *   +0x015c -> line 1223
 *   +0x0164 -> line 1225
 *   +0x0168 -> line 1223
 *   +0x016c -> line 1225
 *   +0x0170 -> line 1223
 *   +0x0174 -> line 1225
 *   +0x0190 -> line 1226
 *   +0x0198 -> line 1230
 *   +0x019c -> line 1233
 *   +0x01a0 -> line 1230
 *   +0x01a8 -> line 1233
 *   +0x01b0 -> line 1236
 *   +0x01b8 -> line 1238
 *   +0x01c0 -> line 1239
 *   +0x01e4 -> line 1244
 *   +0x01e8 -> line 1250
 *   +0x0218 -> line 1261
 *   +0x0220 -> line 1263
 *   +0x0224 -> line 1261
 *   +0x0228 -> line 1263
 *   +0x0248 -> line 1264
 *   +0x0250 -> line 1267
 *   +0x0254 -> line 1270
 *   +0x0258 -> line 1267
 *   +0x0260 -> line 1270
 *   +0x0268 -> line 1273
 *   +0x0270 -> line 1275
 *   +0x0278 -> line 1276
 *   +0x029c -> line 1281
 *   +0x02a0 -> line 1284
 *   +0x02a4 -> line 1288
 *   +0x02ac -> line 1284
 *   +0x02b0 -> line 1288
 *   +0x02b8 -> line 1284
 *   +0x02c0 -> line 1288
 *   +0x02c8 -> line 1284
 *   +0x02cc -> line 1288
 *   +0x02d0 -> line 1284
 *   +0x02d4 -> line 1288
 *   +0x02e4 -> line 1294
 *   +0x02ec -> line 1296
 *   +0x02f0 -> line 1294
 *   +0x02f4 -> line 1296
 *   +0x0318 -> line 1302
 *   +0x031c -> line 1296
 *   +0x0324 -> line 1302
 *   +0x0348 -> line 1303
 *   +0x0350 -> line 1306
 *   +0x0368 -> line 1309
 *   +0x036c -> line 1312
 *   +0x0374 -> line 1309
 *   +0x0378 -> line 1312
 *   +0x0380 -> line 1314
 *   +0x0388 -> line 1317
 *   +0x038c -> line 1314
 *   +0x039c -> line 1317
 *   +0x03a8 -> line 1319
 *   +0x03b8 -> line 1320
 *   +0x03d0 -> line 1325
 *   +0x03d8 -> line 1327
 *   +0x03dc -> line 1325
 *   +0x03e0 -> line 1326
 *   +0x03ec -> line 1327
 *   +0x03fc -> line 1329
 *   +0x0408 -> line 1332
 *   +0x0418 -> line 1333
 *   +0x0430 -> line 1338
 *   +0x0438 -> line 1340
 *   +0x043c -> line 1338
 *   +0x0440 -> line 1339
 *   +0x044c -> line 1340
 *   +0x045c -> line 1342
 *   +0x0468 -> line 1346
 *   +0x04ac -> line 1352
 *   +0x04e0 -> line 1356
 *   +0x04f0 -> line 1358
 *   +0x04f8 -> line 1359
 *   +0x051c -> line 1364
 *   +0x0520 -> line 1367
 *   +0x0524 -> line 1372
 *   +0x0528 -> line 1367
 *   +0x0534 -> line 1372
 *   +0x0538 -> line 1367
 *   +0x0540 -> line 1372
 *   +0x0544 -> line 1367
 *   +0x0548 -> line 1375
 *   +0x0554 -> line 1367
 *   +0x0564 -> line 1375
 *   +0x057c -> line 1378
 *   +0x0584 -> line 1375
 *   +0x0588 -> line 1378
 *   +0x05bc -> line 1385
 *   +0x05c4 -> line 1394
 *   +0x05e8 -> line 1396
 *   +0x05f0 -> line 1397
 *   +0x0614 -> line 1402
 *   +0x0618 -> line 1408
 *   +0x0648 -> line 1414
 *   +0x0650 -> line 1422
 *   +0x066c -> line 1424
 *   +0x0674 -> line 1425
 *   +0x0698 -> line 1433
 *   +0x069c -> line 1437
 *   +0x06a4 -> line 1433
 *   +0x06a8 -> line 1437
 *   +0x06b0 -> line 1433
 *   +0x06b8 -> line 1437
 *   +0x06c0 -> line 1433
 *   +0x06c4 -> line 1437
 *   +0x06c8 -> line 1433
 *   +0x06cc -> line 1437
 *   +0x06dc -> line 1443
 *   +0x06e4 -> line 1451
 *   +0x070c -> line 1453
 *   +0x0710 -> line 1454
 *   +0x073c -> line 1455
 *   +0x0760 -> line 1458
 *   +0x0764 -> line 1459
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bDetectIntersectSegmentWithFaceOfCollideObject(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, COL_tdstCollideObject_* p_stGeomObj)
{
    short xElementIndex;
    COL_tdstElementIndexedTriangles_* p_stElementIndexedTriangles;
    COL_tdstElementSpheres_* p_stElementSpheres;
    COL_tdstElementAlignedBoxes_* p_stElementAlignedBoxes;
    short xDataElementIndex;
    MTH3D_tdstVector_* p_stVertex1;
    MTH3D_tdstVector_* p_stNormal;
    COL_tdstIndexedSphere_* p_stIndexedSphere;
    COL_tdstIndexedAlignedBox_* p_stIndexedAlignedBox;
    MTH3D_tdstVector_ stNormal;
    float xT;
    MTH3D_tdstVector_ stHit;
    GMT_tdstGameMaterial_* hMaterial;
    GMT_tdstCollideMaterial_* hCollidedCollideMaterial;
    short xNbElements;
    short xData;
    unsigned char xIndex;
    short xNodeIndex;
    unsigned char* p_xListIndex;
    short xNumberOfSelectedNodes;
    float aDEF_xSelectedT[100];
    COL_tdstOctreeNode_* aDEF_pstSelectedNode[100];

    if (p_stGeomObj->p_stOctree)
    {
        COL_fn_vExploreOctreeWithSegment(p_stGeomObj->p_stOctree, p_stVertexA, p_stVectAB, aDEF_pstSelectedNode, aDEF_xSelectedT, &xNumberOfSelectedNodes);
        COL_g_lFacesTagCounter++;
        xIndex = 0;
        xNbElements = 0;
        xData = 0;
        while (xIndex < xNumberOfSelectedNodes)
        {
            COL_tdstOctreeNode_* p_stNode = aDEF_pstSelectedNode[xNbElements];
            short* p_xNodeIndex = (short*)p_stNode->d_xFaceIndexList;
            short xNode = *p_xNodeIndex++;
            unsigned char* p_xList = (unsigned char*)p_xNodeIndex;
            {
                unsigned char ucByte = *p_xList;
                if (ucByte < 0x80)
                {
                    xData = (short)ucByte;
                    p_xList++;
                }
                else
                {
                    xData = (short)(((ucByte & 0xFF) | (((unsigned short)p_xList[1]) << 8)) & 0x7FFF);
                    p_xList += 2;
                }
            }
            {
                unsigned char ucByte = *p_xList;
                if (ucByte < 0x80)
                {
                    xNodeIndex = (short)ucByte;
                    p_xList++;
                }
                else
                {
                    xNodeIndex = (short)(((ucByte & 0xFF) | (((unsigned short)p_xList[1]) << 8)) & 0x7FFF);
                    p_xList += 2;
                }
            }
            {
                short xFace = (short)(p_stGeomObj->p_stOctree->d_xElementBasesTable[xData * 2 + xNodeIndex] + xNode);
                if (COL_g_d_lTaggedFacesTable[xFace] != COL_g_lFacesTagCounter)
                {
                    COL_g_d_lTaggedFacesTable[xFace] = COL_g_lFacesTagCounter;
                    switch (p_stGeomObj->d_xListOfElementsTypes[xNbElements])
                    {
                    case 1:
                    {
                        if (g_xMask)
                        {
                            hMaterial = NULL;
                            COL_vGetGameMaterialOfIndexedTriangles(p_stGeomObj, xNbElements, &hMaterial);
                            if (hMaterial)
                            {
                                hCollidedCollideMaterial = GMT_fn_hGetCollideMaterial(hMaterial);
                                if (hCollidedCollideMaterial)
                                {
                                    if (g_xMask & GMT_fn_hGetCollideMaterialIdentifier(hCollidedCollideMaterial))
                                    {
                                        p_stElementIndexedTriangles = (COL_tdstElementIndexedTriangles_*)p_stGeomObj->d_stListOfElements[xNbElements];
                                        for (xDataElementIndex = 0; xDataElementIndex < p_stElementIndexedTriangles->xNbFaces; xDataElementIndex++)
                                        {
                                            p_stVertex1 = &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[0]];
                                            p_stNormal = &p_stElementIndexedTriangles->d_stListOfFacesNormals[xDataElementIndex];
                                            if (INT_fn_bDetectIntersectSegmentWithTriangle(p_stVertexA, p_stVectAB,
                                                    p_stVertex1,
                                                    &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[1]],
                                                    &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[2]],
                                                    p_stNormal,
                                                    -MTH_xDot3(p_stNormal->xX, p_stVertex1->xX, p_stNormal->xY, p_stVertex1->xY, p_stNormal->xZ, p_stVertex1->xZ)))
                                            {
                                                return 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                    }
                    case 7:
                    {
                        p_stElementSpheres = (COL_tdstElementSpheres_*)p_stGeomObj->d_stListOfElements[xNbElements];
                        for (xDataElementIndex = 0; xDataElementIndex < p_stElementSpheres->xNbSpheres; xDataElementIndex++)
                        {
                            p_stIndexedSphere = &p_stElementSpheres->d_stListOfSpheres[xDataElementIndex];
                            if (INT_fn_bDetectIntersectSegmentWithSphere(p_stVertexA, p_stVectAB, &p_stGeomObj->d_stListOfPoints[p_stIndexedSphere->xCenterPoint], p_stIndexedSphere->xRadius))
                            {
                                return 1;
                            }
                        }
                        break;
                    }
                    case 8:
                    {
                        p_stElementAlignedBoxes = (COL_tdstElementAlignedBoxes_*)p_stGeomObj->d_stListOfElements[xNbElements];
                        for (xDataElementIndex = 0; xDataElementIndex < p_stElementAlignedBoxes->xNbAlignedBoxes; xDataElementIndex++)
                        {
                            p_stIndexedAlignedBox = &p_stElementAlignedBoxes->d_stListOfAlignedBoxes[xDataElementIndex];
                            if (INT_fn_bDetectIntersectSegmentWithBox(p_stVertexA, p_stVectAB, &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMinPoint], &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMaxPoint], &xT))
                            {
                                return 1;
                            }
                        }
                        break;
                    }
                    default:
                        break;
                    }
                }
            }
            xIndex++;
            xNbElements++;
        }
    }
    else
    {
        for (xElementIndex = 0; xElementIndex < p_stGeomObj->xNbElements; xElementIndex++)
        {
            switch (p_stGeomObj->d_xListOfElementsTypes[xElementIndex])
            {
            case 1:
            {
                if (g_xMask)
                {
                    hMaterial = NULL;
                    COL_vGetGameMaterialOfIndexedTriangles(p_stGeomObj, xElementIndex, &hMaterial);
                    if (hMaterial)
                    {
                        hCollidedCollideMaterial = GMT_fn_hGetCollideMaterial(hMaterial);
                        if (hCollidedCollideMaterial)
                        {
                            if (g_xMask & GMT_fn_hGetCollideMaterialIdentifier(hCollidedCollideMaterial))
                            {
                                p_stElementIndexedTriangles = (COL_tdstElementIndexedTriangles_*)p_stGeomObj->d_stListOfElements[xElementIndex];
                                for (xDataElementIndex = 0; xDataElementIndex < p_stElementIndexedTriangles->xNbFaces; xDataElementIndex++)
                                {
                                    p_stVertex1 = &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[0]];
                                    p_stNormal = &p_stElementIndexedTriangles->d_stListOfFacesNormals[xDataElementIndex];
                                    if (INT_fn_bDetectIntersectSegmentWithTriangle(p_stVertexA, p_stVectAB,
                                            p_stVertex1,
                                            &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[1]],
                                            &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[2]],
                                            p_stNormal,
                                            -MTH_xDot3(p_stNormal->xX, p_stVertex1->xX, p_stNormal->xY, p_stVertex1->xY, p_stNormal->xZ, p_stVertex1->xZ)))
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
                break;
            }
            case 7:
            {
                p_stElementSpheres = (COL_tdstElementSpheres_*)p_stGeomObj->d_stListOfElements[xElementIndex];
                for (xDataElementIndex = 0; xDataElementIndex < p_stElementSpheres->xNbSpheres; xDataElementIndex++)
                {
                    p_stIndexedSphere = &p_stElementSpheres->d_stListOfSpheres[xDataElementIndex];
                    if (INT_fn_bDetectIntersectSegmentWithSphere(p_stVertexA, p_stVectAB, &p_stGeomObj->d_stListOfPoints[p_stIndexedSphere->xCenterPoint], p_stIndexedSphere->xRadius))
                    {
                        return 1;
                    }
                }
                break;
            }
            case 8:
            {
                p_stElementAlignedBoxes = (COL_tdstElementAlignedBoxes_*)p_stGeomObj->d_stListOfElements[xElementIndex];
                for (xDataElementIndex = 0; xDataElementIndex < p_stElementAlignedBoxes->xNbAlignedBoxes; xDataElementIndex++)
                {
                    p_stIndexedAlignedBox = &p_stElementAlignedBoxes->d_stListOfAlignedBoxes[xDataElementIndex];
                    if (INT_fn_bDetectIntersectSegmentWithBox(p_stVertexA, p_stVectAB, &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMinPoint], &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMaxPoint], &xT))
                    {
                        return 1;
                    }
                }
                break;
            }
            default:
                break;
            }
        }
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 401–525 */
/* addr: 0x00256db0  size: 948 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 401
 *   +0x0044 -> line 429
 *   +0x0050 -> line 425
 *   +0x0054 -> line 429
 *   +0x005c -> line 431
 *   +0x0098 -> line 435
 *   +0x009c -> line 438
 *   +0x00a8 -> line 435
 *   +0x00b4 -> line 438
 *   +0x00c0 -> line 441
 *   +0x00c4 -> line 446
 *   +0x00c8 -> line 441
 *   +0x00cc -> line 446
 *   +0x00d0 -> line 441
 *   +0x00d8 -> line 446
 *   +0x00dc -> line 441
 *   +0x00e0 -> line 449
 *   +0x00ec -> line 441
 *   +0x0100 -> line 449
 *   +0x0118 -> line 452
 *   +0x0120 -> line 449
 *   +0x0124 -> line 452
 *   +0x0160 -> line 459
 *   +0x0180 -> line 462
 *   +0x0188 -> line 459
 *   +0x0190 -> line 462
 *   +0x01b4 -> line 463
 *   +0x01bc -> line 465
 *   +0x01c0 -> line 466
 *   +0x01c4 -> line 469
 *   +0x01c8 -> line 466
 *   +0x01d4 -> line 469
 *   +0x01e0 -> line 472
 *   +0x01e4 -> line 478
 *   +0x01fc -> line 472
 *   +0x0200 -> line 478
 *   +0x0228 -> line 485
 *   +0x0248 -> line 488
 *   +0x0250 -> line 485
 *   +0x0254 -> line 488
 *   +0x0270 -> line 489
 *   +0x0278 -> line 492
 *   +0x027c -> line 495
 *   +0x0280 -> line 492
 *   +0x028c -> line 495
 *   +0x0298 -> line 498
 *   +0x029c -> line 505
 *   +0x02b8 -> line 498
 *   +0x02bc -> line 505
 *   +0x02f4 -> line 512
 *   +0x0314 -> line 514
 *   +0x0318 -> line 515
 *   +0x0320 -> line 512
 *   +0x0324 -> line 515
 *   +0x0350 -> line 521
 *   +0x037c -> line 524
 *   +0x0380 -> line 525
 *   +0x0398 -> line 524
 *   +0x039c -> line 525
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSegmentWithFaceOfGeometricObject(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVertexB, MTH3D_tdstVector_* p_stVectAB, GEO_tdstGeometricObject_* p_stGeomObj, short xNbMaxElements, short* p_xNbElements, GLI_tdstDataOfElement_* d_stDataOfElement)
{
    short xElementIndex;
    GEO_tdstElementIndexedTriangles_* p_stElementIndexedTriangles;
    GEO_tdstElementSpheres_* p_stElementSpheres;
    GEO_tdstElementAlignedBoxes_* p_stElementAlignedBoxes;
    short xDataElementIndex;
    MTH3D_tdstVector_* p_stVertex1;
    MTH3D_tdstVector_* p_stNormal;
    GEO_tdstIndexedSphere_* p_stIndexedSphere;
    GEO_tdstIndexedAlignedBox_* p_stIndexedAlignedBox;
    MTH3D_tdstVector_ stNormal;
    float xT;
    MTH3D_tdstVector_ stHit;

    *p_xNbElements = 0;
    for (xElementIndex = 0; xElementIndex < p_stGeomObj->xNbElements; xElementIndex++)
    {
        switch (p_stGeomObj->d_xListOfElementsTypes[xElementIndex])
        {
        case 1:
        {
            p_stElementIndexedTriangles = (GEO_tdstElementIndexedTriangles_*)p_stGeomObj->d_stListOfElements[xElementIndex];
            for (xDataElementIndex = 0; xDataElementIndex < p_stElementIndexedTriangles->xNbFaces; xDataElementIndex++)
            {
                p_stVertex1 = &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[0]];
                p_stNormal = &p_stElementIndexedTriangles->d_stListOfFacesNormals[xDataElementIndex];
                if (INT_fn_bIntersectSegmentWithTriangle(p_stVertexA, p_stVectAB,
                        p_stVertex1,
                        &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[1]],
                        &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[2]],
                        p_stNormal,
                        -MTH_xDot3(p_stNormal->xX, p_stVertex1->xX, p_stNormal->xY, p_stVertex1->xY, p_stNormal->xZ, p_stVertex1->xZ),
                        &xT, &stHit))
                {
                    INT_fn_vViewAndAddFaceElementInList(xNbMaxElements, p_xNbElements, d_stDataOfElement, p_stVertexA, 0, &stHit, xElementIndex, xDataElementIndex);
                }
            }
            break;
        }
        case 7:
        {
            p_stElementSpheres = (GEO_tdstElementSpheres_*)p_stGeomObj->d_stListOfElements[xElementIndex];
            for (xDataElementIndex = 0; xDataElementIndex < p_stElementSpheres->xNbSpheres; xDataElementIndex++)
            {
                p_stIndexedSphere = &p_stElementSpheres->d_stListOfSpheres[xDataElementIndex];
                if (INT_fn_bIntersectSegmentWithSphere(p_stVertexA, p_stVectAB, &p_stGeomObj->d_stListOfPoints[p_stIndexedSphere->xCenterPoint], p_stIndexedSphere->xRadius, &xT, &stHit, &stNormal))
                {
                    INT_fn_vViewAndAddFaceElementInList(xNbMaxElements, p_xNbElements, d_stDataOfElement, p_stVertexA, 0, &stHit, xElementIndex, xDataElementIndex);
                }
            }
            break;
        }
        case 8:
        {
            p_stElementAlignedBoxes = (GEO_tdstElementAlignedBoxes_*)p_stGeomObj->d_stListOfElements[xElementIndex];
            for (xDataElementIndex = 0; xDataElementIndex < p_stElementAlignedBoxes->xNbAlignedBoxes; xDataElementIndex++)
            {
                p_stIndexedAlignedBox = &p_stElementAlignedBoxes->d_stListOfAlignedBoxes[xDataElementIndex];
                if (INT_fn_bIntersectSegmentWithBox(p_stVertexA, p_stVertexB, p_stVectAB, &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMinPoint], &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMaxPoint], &xT, &stHit, &stNormal))
                {
                    INT_fn_vViewAndAddFaceElementInList(xNbMaxElements, p_xNbElements, d_stDataOfElement, p_stVertexA, 0, &stHit, xElementIndex, xDataElementIndex);
                }
            }
            break;
        }
        default:
            break;
        }
    }
    return *p_xNbElements > 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 89–392 */
/* addr: 0x00257170  size: 2216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 89
 *   +0x0040 -> line 119
 *   +0x0044 -> line 122
 *   +0x004c -> line 124
 *   +0x0058 -> line 127
 *   +0x0068 -> line 129
 *   +0x00a0 -> line 132
 *   +0x00ac -> line 134
 *   +0x00b8 -> line 135
 *   +0x00c4 -> line 137
 *   +0x00cc -> line 138
 *   +0x00d8 -> line 141
 *   +0x00f4 -> line 149
 *   +0x00f8 -> line 151
 *   +0x0100 -> line 154
 *   +0x010c -> line 151
 *   +0x0114 -> line 154
 *   +0x0120 -> line 157
 *   +0x0124 -> line 162
 *   +0x0128 -> line 157
 *   +0x012c -> line 162
 *   +0x0130 -> line 157
 *   +0x013c -> line 162
 *   +0x0140 -> line 165
 *   +0x014c -> line 157
 *   +0x015c -> line 165
 *   +0x0174 -> line 168
 *   +0x017c -> line 165
 *   +0x0180 -> line 168
 *   +0x01bc -> line 175
 *   +0x01dc -> line 177
 *   +0x01e0 -> line 178
 *   +0x01e8 -> line 175
 *   +0x01f0 -> line 178
 *   +0x0214 -> line 179
 *   +0x021c -> line 181
 *   +0x0220 -> line 182
 *   +0x0228 -> line 185
 *   +0x022c -> line 182
 *   +0x0234 -> line 185
 *   +0x0240 -> line 188
 *   +0x0244 -> line 194
 *   +0x025c -> line 188
 *   +0x0260 -> line 194
 *   +0x0284 -> line 201
 *   +0x02a4 -> line 203
 *   +0x02a8 -> line 204
 *   +0x02b0 -> line 201
 *   +0x02b4 -> line 204
 *   +0x02d0 -> line 205
 *   +0x02d8 -> line 208
 *   +0x02e0 -> line 211
 *   +0x02e4 -> line 208
 *   +0x02ec -> line 211
 *   +0x02f8 -> line 214
 *   +0x02fc -> line 217
 *   +0x0300 -> line 221
 *   +0x0318 -> line 214
 *   +0x031c -> line 217
 *   +0x0320 -> line 221
 *   +0x0324 -> line 217
 *   +0x032c -> line 221
 *   +0x0334 -> line 217
 *   +0x0338 -> line 221
 *   +0x033c -> line 217
 *   +0x0340 -> line 221
 *   +0x0350 -> line 228
 *   +0x0370 -> line 231
 *   +0x0378 -> line 228
 *   +0x037c -> line 231
 *   +0x03b0 -> line 237
 *   +0x03d8 -> line 238
 *   +0x03e0 -> line 241
 *   +0x03f4 -> line 244
 *   +0x03f8 -> line 247
 *   +0x0400 -> line 244
 *   +0x0404 -> line 247
 *   +0x040c -> line 249
 *   +0x0414 -> line 252
 *   +0x0418 -> line 249
 *   +0x0428 -> line 250
 *   +0x042c -> line 252
 *   +0x0438 -> line 254
 *   +0x0448 -> line 255
 *   +0x0460 -> line 260
 *   +0x0468 -> line 262
 *   +0x046c -> line 260
 *   +0x0470 -> line 261
 *   +0x047c -> line 262
 *   +0x048c -> line 264
 *   +0x0498 -> line 267
 *   +0x04a8 -> line 268
 *   +0x04c0 -> line 273
 *   +0x04c8 -> line 275
 *   +0x04cc -> line 273
 *   +0x04d0 -> line 274
 *   +0x04dc -> line 275
 *   +0x04ec -> line 277
 *   +0x04f8 -> line 281
 *   +0x054c -> line 287
 *   +0x0584 -> line 289
 *   +0x0588 -> line 290
 *   +0x0594 -> line 292
 *   +0x05a0 -> line 293
 *   +0x05ac -> line 295
 *   +0x05b4 -> line 296
 *   +0x05c0 -> line 299
 *   +0x05dc -> line 307
 *   +0x05e0 -> line 308
 *   +0x05ec -> line 311
 *   +0x05f8 -> line 316
 *   +0x05fc -> line 308
 *   +0x0600 -> line 311
 *   +0x0604 -> line 308
 *   +0x0608 -> line 311
 *   +0x060c -> line 316
 *   +0x0610 -> line 311
 *   +0x0614 -> line 316
 *   +0x0618 -> line 311
 *   +0x061c -> line 319
 *   +0x0628 -> line 311
 *   +0x0638 -> line 319
 *   +0x0650 -> line 322
 *   +0x0658 -> line 319
 *   +0x065c -> line 322
 *   +0x0698 -> line 329
 *   +0x06b8 -> line 332
 *   +0x06c0 -> line 339
 *   +0x06c8 -> line 345
 *   +0x06dc -> line 339
 *   +0x06ec -> line 345
 *   +0x06f0 -> line 339
 *   +0x0700 -> line 345
 *   +0x0724 -> line 352
 *   +0x0744 -> line 355
 *   +0x074c -> line 357
 *   +0x0750 -> line 361
 *   +0x075c -> line 368
 *   +0x0774 -> line 361
 *   +0x077c -> line 364
 *   +0x0780 -> line 361
 *   +0x078c -> line 364
 *   +0x0790 -> line 368
 *   +0x0794 -> line 364
 *   +0x079c -> line 368
 *   +0x07a4 -> line 364
 *   +0x07a8 -> line 368
 *   +0x07ac -> line 364
 *   +0x07b0 -> line 368
 *   +0x07c0 -> line 375
 *   +0x07e0 -> line 384
 *   +0x080c -> line 386
 *   +0x0810 -> line 387
 *   +0x0848 -> line 388
 *   +0x0870 -> line 391
 *   +0x0874 -> line 392
 *   +0x088c -> line 391
 *   +0x0890 -> line 392
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSegmentWithFaceOfCollideObject(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVertexB, MTH3D_tdstVector_* p_stVectAB, COL_tdstCollideObject_* p_stGeomObj, short xNbMaxElements, short* p_xNbElements, GLI_tdstDataOfElement_* d_stDataOfElement)
{
    short xElementIndex;
    COL_tdstElementIndexedTriangles_* p_stElementIndexedTriangles;
    COL_tdstElementSpheres_* p_stElementSpheres;
    COL_tdstElementAlignedBoxes_* p_stElementAlignedBoxes;
    short xDataElementIndex;
    MTH3D_tdstVector_* p_stVertex1;
    MTH3D_tdstVector_* p_stNormal;
    COL_tdstIndexedSphere_* p_stIndexedSphere;
    COL_tdstIndexedAlignedBox_* p_stIndexedAlignedBox;
    MTH3D_tdstVector_ stNormal;
    float xT;
    MTH3D_tdstVector_ stHit;
    GMT_tdstGameMaterial_* hMaterial;
    GMT_tdstCollideMaterial_* hCollidedCollideMaterial;
    short xNbElements;
    short xData;
    unsigned char xIndex;
    short xNodeIndex;
    unsigned char* p_xListIndex;
    short xNumberOfSelectedNodes;
    float aDEF_xSelectedT[100];
    COL_tdstOctreeNode_* aDEF_pstSelectedNode[100];

    *p_xNbElements = 0;
    xElementIndex = 0;
    xNbElements = 0;
    xData = 0;
    if (p_stGeomObj->p_stOctree)
    {
        COL_fn_vExploreOctreeWithSegment(p_stGeomObj->p_stOctree, p_stVertexA, p_stVectAB, aDEF_pstSelectedNode, aDEF_xSelectedT, &xNumberOfSelectedNodes);
        COL_g_lFacesTagCounter++;
        xIndex = 0;
        xNbElements = 0;
        while (xIndex < xNumberOfSelectedNodes)
        {
            COL_tdstOctreeNode_* p_stNode = (COL_tdstOctreeNode_*)aDEF_pstSelectedNode[xNbElements];
            short* p_xNodeIndex = (short*)p_stNode->d_xFaceIndexList;
            short xNode;
            unsigned char* p_xList = (unsigned char*)(p_xNodeIndex + 1);
            xNode = *p_xNodeIndex++;
            {
                unsigned char ucByte = *p_xList;
                if (ucByte < 0x80)
                {
                    xData = (short)ucByte;
                    p_xList++;
                }
                else
                {
                    xData = (short)(((ucByte & 0xFF) | (((unsigned short)p_xList[1]) << 8)) & 0x7FFF);
                    p_xList += 2;
                }
            }
            {
                unsigned char ucByte = *p_xList;
                if (ucByte < 0x80)
                {
                    xNodeIndex = (short)ucByte;
                    p_xList++;
                }
                else
                {
                    xNodeIndex = (short)(((ucByte & 0xFF) | (((unsigned short)p_xList[1]) << 8)) & 0x7FFF);
                    p_xList += 2;
                }
            }
            {
                short xFace = (short)(p_stGeomObj->p_stOctree->d_xElementBasesTable[xData * 2 + xNodeIndex] + xNode);
                if (COL_g_d_lTaggedFacesTable[xFace] == COL_g_lFacesTagCounter)
                {
                    /* the face is already tagged */
                }
                else
                {
                    COL_g_d_lTaggedFacesTable[xFace] = COL_g_lFacesTagCounter;
                    switch (p_stGeomObj->d_xListOfElementsTypes[xNbElements])
                    {
                    case 1:
                    {
                        break;
                    }
                    default:
                        break;
                    }
                }
            }
            xIndex++;
            xNbElements++;
        }
    }
    else
    {
        for (xElementIndex = 0; xElementIndex < p_stGeomObj->xNbElements; xElementIndex++)
        {
            switch (p_stGeomObj->d_xListOfElementsTypes[xElementIndex])
            {
            case 1:
            {
                if (g_xMask)
                {
                    hMaterial = NULL;
                    COL_vGetGameMaterialOfIndexedTriangles(p_stGeomObj, xElementIndex, &hMaterial);
                    if (hMaterial)
                    {
                        hCollidedCollideMaterial = GMT_fn_hGetCollideMaterial(hMaterial);
                        if (hCollidedCollideMaterial)
                        {
                            if (g_xMask & GMT_fn_hGetCollideMaterialIdentifier(hCollidedCollideMaterial))
                            {
                                p_stElementIndexedTriangles = (COL_tdstElementIndexedTriangles_*)p_stGeomObj->d_stListOfElements[xElementIndex];
                                for (xDataElementIndex = 0; xDataElementIndex < p_stElementIndexedTriangles->xNbFaces; xDataElementIndex++)
                                {
                                    p_stVertex1 = &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[0]];
                                    p_stNormal = &p_stElementIndexedTriangles->d_stListOfFacesNormals[xDataElementIndex];
                                    if (INT_fn_bIntersectSegmentWithTriangle(p_stVertexA, p_stVectAB,
                                            p_stVertex1,
                                            &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[1]],
                                            &p_stGeomObj->d_stListOfPoints[p_stElementIndexedTriangles->d_stListOfFacesTripled[xDataElementIndex].a3_xIndex[2]],
                                            p_stNormal,
                                            -MTH_xDot3(p_stNormal->xX, p_stVertex1->xX, p_stNormal->xY, p_stVertex1->xY, p_stNormal->xZ, p_stVertex1->xZ),
                                            &xT, &stHit))
                                    {
                                        INT_fn_vViewAndAddFaceElementInList(xNbMaxElements, p_xNbElements, d_stDataOfElement, p_stVertexA, 0, &stHit, xElementIndex, xDataElementIndex);
                                    }
                                }
                            }
                        }
                    }
                }
                break;
            }
            case 7:
            {
                p_stElementSpheres = (COL_tdstElementSpheres_*)p_stGeomObj->d_stListOfElements[xElementIndex];
                for (xDataElementIndex = 0; xDataElementIndex < p_stElementSpheres->xNbSpheres; xDataElementIndex++)
                {
                    p_stIndexedSphere = &p_stElementSpheres->d_stListOfSpheres[xDataElementIndex];
                    if (INT_fn_bIntersectSegmentWithSphere(p_stVertexA, p_stVectAB, &p_stGeomObj->d_stListOfPoints[p_stIndexedSphere->xCenterPoint], p_stIndexedSphere->xRadius, &xT, &stHit, &stNormal))
                    {
                        INT_fn_vViewAndAddFaceElementInList(xNbMaxElements, p_xNbElements, d_stDataOfElement, p_stVertexA, 0, &stHit, xElementIndex, xDataElementIndex);
                    }
                }
                break;
            }
            case 8:
            {
                p_stElementAlignedBoxes = (COL_tdstElementAlignedBoxes_*)p_stGeomObj->d_stListOfElements[xElementIndex];
                for (xDataElementIndex = 0; xDataElementIndex < p_stElementAlignedBoxes->xNbAlignedBoxes; xDataElementIndex++)
                {
                    p_stIndexedAlignedBox = &p_stElementAlignedBoxes->d_stListOfAlignedBoxes[xDataElementIndex];
                    if (INT_fn_bIntersectSegmentWithBox(p_stVertexA, p_stVertexB, p_stVectAB, &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMinPoint], &p_stGeomObj->d_stListOfPoints[p_stIndexedAlignedBox->xMaxPoint], &xT, &stHit, &stNormal))
                    {
                        INT_fn_vViewAndAddFaceElementInList(xNbMaxElements, p_xNbElements, d_stDataOfElement, p_stVertexA, 0, &stHit, xElementIndex, xDataElementIndex);
                    }
                }
                break;
            }
            default:
                break;
            }
        }
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\IntersGO.c lines 38–69 */
/* addr: 0x00257a20  size: 408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 38
 *   +0x0040 -> line 42
 *   +0x0048 -> line 44
 *   +0x0078 -> line 47
 *   +0x007c -> line 44
 *   +0x0084 -> line 47
 *   +0x0088 -> line 48
 *   +0x0090 -> line 50
 *   +0x00a0 -> line 53
 *   +0x00b8 -> line 55
 *   +0x00c0 -> line 53
 *   +0x00c4 -> line 55
 *   +0x00c8 -> line 56
 *   +0x00f0 -> line 58
 *   +0x0104 -> line 61
 *   +0x0110 -> line 62
 *   +0x0114 -> line 61
 *   +0x011c -> line 63
 *   +0x0120 -> line 62
 *   +0x0124 -> line 63
 *   +0x0128 -> line 61
 *   +0x012c -> line 64
 *   +0x0130 -> line 61
 *   +0x0134 -> line 64
 *   +0x0138 -> line 61
 *   +0x0144 -> line 62
 *   +0x0148 -> line 63
 *   +0x014c -> line 64
 *   +0x0150 -> line 65
 *   +0x0160 -> line 66
 *   +0x0168 -> line 69
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INT_fn_vViewAndAddFaceElementInList(short xNbMaxElements, short* p_xNbElements, GLI_tdstDataOfElement_* d_stDataOfElement, MTH3D_tdstVector_* p_stVertexA, unsigned char bBack, MTH3D_tdstVector_* p_stHit, short xElements, short xDataElementIndex)
{
    short xFaceIndex;
    float xDistance;

    if (bBack)
        return;

    MTH_DISTANCE_TO(xDistance, p_stVertexA, p_stHit);

    for (xFaceIndex = *p_xNbElements; xFaceIndex > 0 && xDistance < d_stDataOfElement[xFaceIndex-1].xDistance; xFaceIndex--)
    {
        memcpy(&d_stDataOfElement[xFaceIndex], &d_stDataOfElement[xFaceIndex-1], sizeof(GLI_tdstDataOfElement_));
    }

    if (xFaceIndex < xNbMaxElements)
    {
        *(int*)&d_stDataOfElement[xFaceIndex].stHit.xX = *(int*)&p_stHit->xX;
        *(int*)&d_stDataOfElement[xFaceIndex].stHit.xY = *(int*)&p_stHit->xY;
        *(int*)&d_stDataOfElement[xFaceIndex].stHit.xZ = *(int*)&p_stHit->xZ;
        ((float*)&d_stDataOfElement[0].xDistance)[xFaceIndex * 6] = xDistance;
        ((short*)&d_stDataOfElement[0].xElements)[xFaceIndex * 12] = xElements;
        ((short*)&d_stDataOfElement[0].xIndexOfFace)[xFaceIndex * 12] = xDataElementIndex;
        if (*p_xNbElements < xNbMaxElements)
        {
            *p_xNbElements = *p_xNbElements + 1;
        }
    }
}
