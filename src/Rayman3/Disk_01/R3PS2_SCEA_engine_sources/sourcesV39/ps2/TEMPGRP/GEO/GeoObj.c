/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GEO_tdstElementCones_ GEO_tdstElementCones_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstIndexedAlignedBox_ GEO_tdstIndexedAlignedBox_;
typedef struct GEO_tdstIndexedCone_ GEO_tdstIndexedCone_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GEO_tdstFaceMapTriangle_ GEO_tdstFaceMapTriangle_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GEO_tdstElementFaceMapDescriptors_ GEO_tdstElementFaceMapDescriptors_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GEO_tdstElementPoints_ GEO_tdstElementPoints_;
typedef struct GEO_tdstElementLines_ GEO_tdstElementLines_;
typedef struct GEO_tdstFaceMapDescriptor_ GEO_tdstFaceMapDescriptor_;
typedef struct GEO_tdstIndexedSphere_ GEO_tdstIndexedSphere_;
typedef struct GEO_tdstElementSpheres_ GEO_tdstElementSpheres_;
typedef struct GEO_tdstElementAlignedBoxes_ GEO_tdstElementAlignedBoxes_;
typedef struct GEO_tdstElementSprite_ GEO_tdstElementSprite_;
typedef struct GEO_tdstElementTMeshes_ GEO_tdstElementTMeshes_;

struct GEO_tdstElementCones_ {
    GEO_tdstIndexedCone_* d_stListOfCones; /* +0x0 */
    short xNbCones; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
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
    short* d_stListOfIndexUsedByThisElement; /* +0x24 */
    short xNumberOfIndexsUsed; /* +0x28 */
    short xIndexOfParallelBox; /* +0x2a */
    unsigned int glDisplayList; /* +0x2c */
    int p_xSpecialValue; /* +0x30 */
    unsigned char bVisibleInPortal; /* +0x34 */
    unsigned int pVertexArrays[4]; /* +0x38 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct GEO_tdstFaceMapTriangle_ {
    GEO_tdstTripledIndex_ stFaceTripled; /* +0x0 */
    GEO_tdstFaceMapDescriptor_* hFaceMapDescriptor; /* +0x8 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct GEO_tdstElementFaceMapDescriptors_ {
    short xNbFaces; /* +0x0 */
    GEO_tdstFaceMapTriangle_* d_stListOfFacesQuadrupled; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x8 */
    short xIndexOfParallelBox; /* +0xc */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GEO_tdstElementPoints_ {
    float xFatness; /* +0x0 */
    int d_xListOfPointIndex; /* +0x4 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x8 */
    short xNbPoints; /* +0xc */
    short xIndexOfParallelBox; /* +0xe */
};

struct GEO_tdstElementLines_ {
    float xThickness; /* +0x0 */
    GEO_tdstDoubledIndex_* d_stListOfLineIndex; /* +0x4 */
    GLI_tdstMaterial_** d_hListOfLinesVisualMaterial; /* +0x8 */
    GEO_tdstColor_* d_stListOfLinesReceivedLightIntensity; /* +0xc */
    short xNbLines; /* +0x10 */
    short xIndexOfParallelBox; /* +0x12 */
};

struct GEO_tdstFaceMapDescriptor_ {
    ACP_tdst2DUVValues_ stUVValues[3]; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x18 */
};

struct GEO_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GEO_tdstElementSpheres_ {
    GEO_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstElementAlignedBoxes_ {
    GEO_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

typedef struct GEO_tdstIndexedSprite_ GEO_tdstIndexedSprite_;

struct GEO_tdstElementSprite_ {
    GEO_tdstIndexedSprite_* d_stListOfSprites; /* +0x0 */
    short xNbSprites; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
    char cFastDraw; /* +0x8 */
    int p_stOwnerObject; /* +0xc */
};

struct GEO_tdstElementTMeshes_ {
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    short xNbMeshAtoms; /* +0x4 */
    short xNbFaces; /* +0x6 */
    short xNbUV; /* +0x8 */
    int d_stListOfMeshAtoms; /* +0xc */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x10 */
    ACP_tdst2DUVValues_* d_stListOfElementUV; /* +0x14 */
    short xIndexOfParallelBox; /* +0x18 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 28–49 */
/* addr: 0x002a19e0  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 28
 *   +0x0004 -> line 35
 *   +0x0008 -> line 28
 *   +0x0018 -> line 35
 *   +0x0024 -> line 38
 *   +0x003c -> line 40
 *   +0x0060 -> line 43
 *   +0x0068 -> line 45
 *   +0x0070 -> line 48
 *   +0x0074 -> line 45
 *   +0x0078 -> line 48
 *   +0x007c -> line 45
 *   +0x0084 -> line 46
 *   +0x0088 -> line 48
 *   +0x00a0 -> line 49
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* GEO_p_stAllocElementIndexedTriangles(short xNbFaces, short xNbElementUV, short xNbUVStages);

void GEO_vCreateElementIndexedTriangles(GEO_tdstGeometricObject_* hObject, short* p_hElement, short xNbFaces, short xNbElementUV, short xNbUVStages)
{
    short xElementToBuild;

    for (xElementToBuild = 0; xElementToBuild < hObject->xNbElements; xElementToBuild++)
    {
        if (hObject->d_xListOfElementsTypes[xElementToBuild] == 0)
            break;
    }
    if (xElementToBuild == hObject->xNbElements)
        return;
    hObject->d_xListOfElementsTypes[xElementToBuild] = 1;
    *p_hElement = xElementToBuild;
    hObject->d_stListOfElements[xElementToBuild] = GEO_p_stAllocElementIndexedTriangles(xNbFaces, xNbElementUV, xNbUVStages);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 1029–1061 */
/* addr: 0x002a1aa0  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1029
 *   +0x003c -> line 1032
 *   +0x0054 -> line 1035
 *   +0x006c -> line 1038
 *   +0x0084 -> line 1041
 *   +0x009c -> line 1044
 *   +0x00b4 -> line 1047
 *   +0x00cc -> line 1050
 *   +0x00e4 -> line 1053
 *   +0x00fc -> line 1056
 *   +0x0114 -> line 1059
 *   +0x0118 -> line 1061
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short GEO_xGetParallelBoxIndexOfElement(GEO_tdstGeometricObject_* hObject, short xIndexElement)
{
    switch (hObject->d_xListOfElementsTypes[xIndexElement])
    {
        case 1:
            return ((GEO_tdstElementIndexedTriangles_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 2:
            return ((GEO_tdstElementFaceMapDescriptors_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 3:
            return ((GEO_tdstElementSprite_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 4:
            return ((GEO_tdstElementTMeshes_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 5:
            return ((GEO_tdstElementPoints_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 6:
            return ((GEO_tdstElementLines_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 7:
            return ((GEO_tdstElementSpheres_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 8:
            return ((GEO_tdstElementAlignedBoxes_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 9:
            return ((GEO_tdstElementCones_*)hObject->d_stListOfElements[xIndexElement])->xIndexOfParallelBox;
        case 0:
        default:
            return -1;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 1012–1015 */
/* addr: 0x002a1bc0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1012
 *   +0x0024 -> line 1015
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GEO_tdstParallelBox_* GEO_hGetParallelBox(GEO_tdstGeometricObject_* hObject, short xParallelBox)
{
    if (xParallelBox < hObject->xNbParallelBoxes)
        return hObject->d_stListOfParallelBoxes + xParallelBox;
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 950–974 */
/* addr: 0x002a1bf0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 950
 *   +0x000c -> line 953
 *   +0x0014 -> line 955
 *   +0x0020 -> line 958
 *   +0x002c -> line 967
 *   +0x0038 -> line 969
 *   +0x003c -> line 967
 *   +0x0040 -> line 969
 *   +0x0058 -> line 971
 *   +0x005c -> line 973
 *   +0x0068 -> line 971
 *   +0x0088 -> line 972
 *   +0x00b0 -> line 973
 *   +0x00c8 -> line 974
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void* memset(void* dst, int c, size_t n);

void GEO_vCreateObjectListOfParallelBox(GEO_tdstGeometricObject_* hObject, short xNumberOfParallelBoxes)
{
    short xIndex;

    hObject->xNbParallelBoxes = xNumberOfParallelBoxes;
    if (hObject->xNbParallelBoxes != 0)
    {
        if (hObject->d_stListOfParallelBoxes == NULL)
        {
            hObject->d_stListOfParallelBoxes = (GEO_tdstParallelBox_*)HMU_fn_p_vMalloc(hObject->xNbParallelBoxes * sizeof(GEO_tdstParallelBox_), 0);
            for (xIndex = 0; xIndex < hObject->xNbParallelBoxes; xIndex++)
            {
                hObject->d_stListOfParallelBoxes[xIndex].stMinPoint.xX = 3.402822e38f; hObject->d_stListOfParallelBoxes[xIndex].stMinPoint.xY = 3.402822e38f; hObject->d_stListOfParallelBoxes[xIndex].stMinPoint.xZ = 3.402822e38f;
                hObject->d_stListOfParallelBoxes[xIndex].stMaxPoint.xX = -3.402822e38f; hObject->d_stListOfParallelBoxes[xIndex].stMaxPoint.xY = -3.402822e38f; hObject->d_stListOfParallelBoxes[xIndex].stMaxPoint.xZ = -3.402822e38f;
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 846–938 */
/* addr: 0x002a1cd0  size: 608 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 846
 *   +0x0020 -> line 859
 *   +0x0024 -> line 846
 *   +0x0028 -> line 859
 *   +0x002c -> line 856
 *   +0x0030 -> line 859
 *   +0x0034 -> line 856
 *   +0x0040 -> line 859
 *   +0x0058 -> line 860
 *   +0x0060 -> line 863
 *   +0x0068 -> line 866
 *   +0x006c -> line 863
 *   +0x0070 -> line 866
 *   +0x0078 -> line 867
 *   +0x0098 -> line 880
 *   +0x009c -> line 878
 *   +0x00a4 -> line 883
 *   +0x00b0 -> line 884
 *   +0x00b8 -> line 887
 *   +0x00c0 -> line 891
 *   +0x00c4 -> line 887
 *   +0x00c8 -> line 891
 *   +0x00cc -> line 888
 *   +0x00d0 -> line 891
 *   +0x00d8 -> line 887
 *   +0x00dc -> line 891
 *   +0x00e0 -> line 887
 *   +0x00e8 -> line 888
 *   +0x00f4 -> line 891
 *   +0x00f8 -> line 916
 *   +0x00fc -> line 896
 *   +0x0100 -> line 916
 *   +0x0104 -> line 897
 *   +0x0108 -> line 929
 *   +0x010c -> line 892
 *   +0x0110 -> line 891
 *   +0x0114 -> line 892
 *   +0x0118 -> line 896
 *   +0x011c -> line 893
 *   +0x0120 -> line 894
 *   +0x0124 -> line 897
 *   +0x0128 -> line 892
 *   +0x0130 -> line 898
 *   +0x0134 -> line 893
 *   +0x013c -> line 897
 *   +0x0144 -> line 892
 *   +0x014c -> line 893
 *   +0x0154 -> line 910
 *   +0x0158 -> line 899
 *   +0x015c -> line 898
 *   +0x0164 -> line 910
 *   +0x0170 -> line 927
 *   +0x0174 -> line 899
 *   +0x017c -> line 911
 *   +0x0180 -> line 894
 *   +0x0184 -> line 911
 *   +0x0188 -> line 894
 *   +0x018c -> line 927
 *   +0x0190 -> line 894
 *   +0x0194 -> line 910
 *   +0x0198 -> line 894
 *   +0x019c -> line 911
 *   +0x01a4 -> line 927
 *   +0x01ac -> line 910
 *   +0x01b0 -> line 928
 *   +0x01b4 -> line 927
 *   +0x01bc -> line 928
 *   +0x01c4 -> line 914
 *   +0x01c8 -> line 928
 *   +0x01cc -> line 914
 *   +0x01d0 -> line 916
 *   +0x01d4 -> line 914
 *   +0x01d8 -> line 916
 *   +0x01e0 -> line 927
 *   +0x01e8 -> line 928
 *   +0x01ec -> line 916
 *   +0x01f0 -> line 927
 *   +0x01f4 -> line 928
 *   +0x01f8 -> line 914
 *   +0x01fc -> line 916
 *   +0x020c -> line 933
 *   +0x0238 -> line 936
 *   +0x023c -> line 933
 *   +0x0240 -> line 938
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Partially reconstructed: the control flow, the scrolling-coefficient call and
   the determinant/gradient structure follow the target, but the floating point
   expression tree does not.  The target keeps a 0.0f constant in the callee
   saved $fs0 and evaluates the three speed components through the R5900
   accumulator chain (mula.s / madda.s / madd.s) with a 0x70 frame; this
   candidate folds the third product away and uses a 0x60 frame.  The first
   difference is at +0x0 (the frame size / the missing $fs0 save). */
void GLI_xGetMaterialTextureScrollingCoef(GLI_tdstMaterial_* hMaterial, int lUnused, int* p_bSwitch, float* p_fUSpeed, float* p_fVSpeed);

unsigned char GEO_vGetFaceSurfaceSpeed(GEO_tdstGeometricObject_* hObject, short xElement, short xFace, MTH3D_tdstVector_* p_vSpeed, int lMTIndex)
{
    float det;
    float xVSpeed;
    float xUSpeed;
    int bScrollMode;
    ACP_tdst2DUVValues_* param0;
    ACP_tdst2DUVValues_* p_uvB;
    ACP_tdst2DUVValues_* p_uvA;
    MTH3D_tdstVector_* p_vC;
    MTH3D_tdstVector_* p_vB;
    MTH3D_tdstVector_* p_vA;
    GEO_tdstTripledIndex_* p_stListOfTripled;
    GEO_tdstElementIndexedTriangles_* p_stElement;

    p_vSpeed->xX = 0.0f;
    p_vSpeed->xY = 0.0f;
    p_vSpeed->xZ = 0.0f;
    if (hObject->d_xListOfElementsTypes[xElement] != 1)
        return 0;
    p_stElement = (GEO_tdstElementIndexedTriangles_*)hObject->d_stListOfElements[xElement];
    bScrollMode = 0;
    xVSpeed = 0.0f;
    xUSpeed = 0.0f;
    if (lMTIndex == -1)
        GLI_xGetMaterialTextureScrollingCoef(p_stElement->hVisualMaterial, 0, &bScrollMode, &xUSpeed, &xVSpeed);
    if (bScrollMode == 0)
        return 0;
    xUSpeed = 60.0f * -xUSpeed;
    xVSpeed = 60.0f * -xVSpeed;
    p_stListOfTripled = p_stElement->d_stListOfFacesTripled;
    p_vA = &hObject->d_stListOfPoints[p_stListOfTripled[xFace].a3_xIndex[0]];
    p_vB = &hObject->d_stListOfPoints[p_stListOfTripled[xFace].a3_xIndex[1]];
    p_vC = &hObject->d_stListOfPoints[p_stListOfTripled[xFace].a3_xIndex[2]];
    p_uvA = &p_stElement->d_stListOfElementUV[p_stElement->d_stListOfFacesTripledIndexUV[xFace].a3_xIndex[0]];
    p_uvB = &p_stElement->d_stListOfElementUV[p_stElement->d_stListOfFacesTripledIndexUV[xFace].a3_xIndex[1]];
    param0 = &p_stElement->d_stListOfElementUV[p_stElement->d_stListOfFacesTripledIndexUV[xFace].a3_xIndex[2]];
    det = (p_uvB->xU - p_uvA->xU) * (param0->xV - p_uvA->xV) - (p_uvB->xV - p_uvA->xV) * (param0->xU - p_uvA->xU);
    xUSpeed = xUSpeed * ((param0->xV - p_uvA->xV) / det) + xVSpeed * (-(param0->xU - p_uvA->xU) / det);
    xVSpeed = xUSpeed * (-(p_uvB->xV - p_uvA->xV) / det) + xVSpeed * ((p_uvB->xU - p_uvA->xU) * (param0->xV - p_uvA->xV) / det);
    p_vSpeed->xX = (p_vB->xX - p_vA->xX) * xUSpeed + (p_vC->xX - p_vA->xX) * xVSpeed + 0.0f * 0.0f;
    p_vSpeed->xY = (p_vB->xY - p_vA->xY) * xUSpeed + (p_vC->xY - p_vA->xY) * xVSpeed + 0.0f * 0.0f;
    p_vSpeed->xZ = (p_vB->xZ - p_vA->xZ) * xUSpeed + (p_vC->xZ - p_vA->xZ) * xVSpeed + 0.0f * 0.0f;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 665–681 */
/* addr: 0x002a1f30  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 665
 *   +0x0004 -> line 667
 *   +0x0008 -> line 665
 *   +0x000c -> line 667
 *   +0x0010 -> line 665
 *   +0x0014 -> line 667
 *   +0x0040 -> line 670
 *   +0x0048 -> line 672
 *   +0x005c -> line 670
 *   +0x0064 -> line 672
 *   +0x0090 -> line 673
 *   +0x0098 -> line 676
 *   +0x00a0 -> line 678
 *   +0x00b4 -> line 676
 *   +0x00bc -> line 678
 *   +0x00ec -> line 681
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#define MTH3D_M_vCopyVector(_d, _s) { *(int*)&(_d)->xX = *(int*)&(_s)->xX; *(int*)&(_d)->xY = *(int*)&(_s)->xY; *(int*)&(_d)->xZ = *(int*)&(_s)->xZ; }

void GEO_vGetNormalOfGeometricObjectElement(GEO_tdstGeometricObject_* hObject, short xElementIndex, short xDataElementIndex, MTH3D_tdstVector_* p_stNormal)
{
    GEO_tdstElementFaceMapDescriptors_* param0;
    GEO_tdstElementIndexedTriangles_* param1;

    p_stNormal->xX = 0.0f; p_stNormal->xY = 0.0f; p_stNormal->xZ = 0.0f;

    switch (hObject->d_xListOfElementsTypes[xElementIndex]) {
        case 1:
            param1 = (GEO_tdstElementIndexedTriangles_*)hObject->d_stListOfElements[xElementIndex];
            MTH3D_M_vCopyVector(p_stNormal, &param1->d_stListOfFacesNormals[xDataElementIndex]);
            break;
        case 2:
            param0 = (GEO_tdstElementFaceMapDescriptors_*)hObject->d_stListOfElements[xElementIndex];
            MTH3D_M_vCopyVector(p_stNormal, &param0->d_stListOfFacesNormals[xDataElementIndex]);
            break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 588–606 */
/* addr: 0x002a2030  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 588
 *   +0x0010 -> line 589
 *   +0x0018 -> line 590
 *   +0x0020 -> line 591
 *   +0x0078 -> line 597
 *   +0x007c -> line 600
 *   +0x0080 -> line 605
 *   +0x008c -> line 597
 *   +0x0094 -> line 598
 *   +0x00a0 -> line 599
 *   +0x00ac -> line 600
 *   +0x00b0 -> line 605
 *   +0x00b8 -> line 606
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_xComputeObjectNormals(GEO_tdstGeometricObject_* hObject);
void GEO_vComputeObjectParallelBox(GEO_tdstGeometricObject_* hObject, short xIndex);
void GEO_fn_vAddObjectToSphere(GEO_tdstGeometricObject_* hObject, MTH4D_tdstVector_* p_stCenter, float* p_xRadius);
void GEO_xComputeIndexUsedByElements(GEO_tdstGeometricObject_* p_stObj);

void GEO_vEndModifyObject(GEO_tdstGeometricObject_* hObject)
{
    GEO_xComputeObjectNormals(hObject);
    GEO_xComputeIndexUsedByElements(hObject);
    if (hObject->xNbParallelBoxes)
    {
        short i;

        if (hObject->d_stListOfParallelBoxes == NULL)
            GEO_vCreateObjectListOfParallelBox(hObject, hObject->xNbParallelBoxes);
        for (i = 0; i < hObject->xNbParallelBoxes; i++)
            GEO_vComputeObjectParallelBox(hObject, i);
    }
    hObject->xBoudingSphereCenter.xX = hObject->d_stListOfPoints->xX;
    hObject->xBoudingSphereCenter.xY = hObject->d_stListOfPoints->xY;
    hObject->xBoudingSphereCenter.xZ = hObject->d_stListOfPoints->xZ;
    hObject->xBoudingSphereCenter.xW = 1.0f;
    hObject->xBoudingSphereRadius = 0.0f;
    GEO_fn_vAddObjectToSphere(hObject, &hObject->xBoudingSphereCenter, &hObject->xBoudingSphereRadius);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 390–391 */
/* addr: 0x002a2100  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 390
 *   +0x0030 -> line 391
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vGetPointOfObject(GEO_tdstGeometricObject_* hObject, MTH3D_tdstVector_* p_stPoint, short xIndexOfPoint)
{
    *p_stPoint = hObject->d_stListOfPoints[xIndexOfPoint];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 378–379 */
/* addr: 0x002a2140  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 378
 *   +0x0030 -> line 379
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vSetPointOfObject(GEO_tdstGeometricObject_* hObject, MTH3D_tdstVector_* p_stPoint, short xIndexOfPoint)
{
    hObject->d_stListOfPoints[xIndexOfPoint] = *p_stPoint;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 347–351 */
/* addr: 0x002a2180  size: 464 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 347
 *   +0x0018 -> line 348
 *   +0x001c -> line 347
 *   +0x0028 -> line 348
 *   +0x0098 -> line 349
 *   +0x009c -> line 348
 *   +0x00ac -> line 349
 *   +0x01ac -> line 350
 *   +0x01b4 -> line 351
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vInitGeometricObject(GEO_tdstGeometricObject_* p_stObjectToCreate, short xNbPoints, short xNbElements);

void GEO_vCreateGeometricObject(GEO_tdstGeometricObject_** p_hObject, short xNbPoints, short xNbElements)
{
    GEO_tdstGeometricObject_* p_stObj; p_stObj = (GEO_tdstGeometricObject_*)HMU_fn_p_vMalloc(sizeof(GEO_tdstGeometricObject_), 0); p_stObj->xNbElements = xNbElements; p_stObj->xNbPoints = xNbPoints; p_stObj->d_xListOfElementsTypes = (short*)HMU_fn_p_vMalloc(xNbElements * sizeof(short), 0); p_stObj->d_stListOfElements = (void**)HMU_fn_p_vMalloc(xNbElements * sizeof(void*), 0); p_stObj->d_stListOfPoints = (MTH3D_tdstVector_*)HMU_fn_p_vMalloc(xNbPoints * sizeof(MTH3D_tdstVector_), 0); p_stObj->d_stListOfPointsNormals = (MTH3D_tdstVector_*)HMU_fn_p_vMalloc(xNbPoints * sizeof(MTH3D_tdstVector_), 0); p_stObj->d_stListOfEdges = NULL; p_stObj->bIsStatic = 0; p_stObj->glDisplayList = 0; *p_hObject = p_stObj;
    GEO_vInitGeometricObject(*p_hObject, xNbPoints, xNbElements);
    (*p_hObject)->xNbEdges = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 310–338 */
/* addr: 0x002a2350  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 310
 *   +0x0024 -> line 311
 *   +0x00a8 -> line 310
 *   +0x00b0 -> line 311
 *   +0x00e8 -> line 313
 *   +0x00ec -> line 314
 *   +0x00f0 -> line 325
 *   +0x00f4 -> line 315
 *   +0x00f8 -> line 316
 *   +0x00fc -> line 325
 *   +0x0100 -> line 326
 *   +0x0104 -> line 330
 *   +0x0108 -> line 338
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma auto_inline on

void GEO_vInitGeometricObject(GEO_tdstGeometricObject_* p_stObjectToCreate, short xNbPoints, short xNbElements)
{
    short xInitCount;

    for (xInitCount = 0; xInitCount < xNbElements; xInitCount++)
        p_stObjectToCreate->d_xListOfElementsTypes[xInitCount] = 0;

    p_stObjectToCreate->xNbParallelBoxes = 0;
    p_stObjectToCreate->d_stListOfParallelBoxes = NULL;
    p_stObjectToCreate->ulType = 0;
    p_stObjectToCreate->d_dfVertexTransparency = 0;
    p_stObjectToCreate->bUsedForShadowDrawing = 1;
    p_stObjectToCreate->bUsedForShadowCreating = 1;
    p_stObjectToCreate->bIsStatic = 0;
    p_stObjectToCreate->glDisplayList = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj.c lines 149–227 */
/* addr: 0x002a2460  size: 1080 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 149
 *   +0x0028 -> line 169
 *   +0x0030 -> line 171
 *   +0x0048 -> line 173
 *   +0x004c -> line 176
 *   +0x0058 -> line 173
 *   +0x0060 -> line 176
 *   +0x006c -> line 179
 *   +0x0080 -> line 181
 *   +0x0084 -> line 187
 *   +0x0090 -> line 181
 *   +0x0098 -> line 182
 *   +0x00b8 -> line 183
 *   +0x00c4 -> line 184
 *   +0x00e4 -> line 185
 *   +0x00f0 -> line 186
 *   +0x0114 -> line 187
 *   +0x0130 -> line 190
 *   +0x0134 -> line 191
 *   +0x0140 -> line 193
 *   +0x0160 -> line 194
 *   +0x0180 -> line 195
 *   +0x01a0 -> line 196
 *   +0x01c0 -> line 197
 *   +0x01e0 -> line 198
 *   +0x0200 -> line 199
 *   +0x0220 -> line 200
 *   +0x0240 -> line 201
 *   +0x0260 -> line 210
 *   +0x0274 -> line 213
 *   +0x0278 -> line 214
 *   +0x0288 -> line 216
 *   +0x02b0 -> line 217
 *   +0x02d8 -> line 218
 *   +0x0300 -> line 219
 *   +0x0328 -> line 220
 *   +0x0350 -> line 221
 *   +0x0378 -> line 222
 *   +0x03a0 -> line 223
 *   +0x03cc -> line 224
 *   +0x03e8 -> line 226
 *   +0x03f0 -> line 224
 *   +0x03f8 -> line 226
 *   +0x0418 -> line 227
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_xComputeIndexUsedByElements(GEO_tdstGeometricObject_* p_stObj)
{
    unsigned char aDEF_ulCountBuffer[625];
    unsigned int xIndexCounter;
    unsigned int xObjIndex;
    short xTriangleIndex;
    GEO_tdstElementIndexedTriangles_* p_stLocalElement;
    short xIndex;

    for (xIndex = 0; xIndex < p_stObj->xNbElements; xIndex++)
    {
        if (p_stObj->d_xListOfElementsTypes[xIndex] == 1)
        {
            p_stLocalElement = (GEO_tdstElementIndexedTriangles_*)p_stObj->d_stListOfElements[xIndex];
            memset(aDEF_ulCountBuffer, 0, (p_stObj->xNbPoints + 7) >> 3);
            for (xTriangleIndex = 0; xTriangleIndex < p_stLocalElement->xNbFaces; xTriangleIndex++)
            {
                ((unsigned char*)aDEF_ulCountBuffer)[(unsigned int)p_stLocalElement->d_stListOfFacesTripled[xTriangleIndex].a3_xIndex[0] / 8] |= (unsigned char)(1 << (p_stLocalElement->d_stListOfFacesTripled[xTriangleIndex].a3_xIndex[0] & 7));
                ((unsigned char*)aDEF_ulCountBuffer)[(unsigned int)p_stLocalElement->d_stListOfFacesTripled[xTriangleIndex].a3_xIndex[1] / 8] |= (unsigned char)(1 << (p_stLocalElement->d_stListOfFacesTripled[xTriangleIndex].a3_xIndex[1] & 7));
                ((unsigned char*)aDEF_ulCountBuffer)[(unsigned int)p_stLocalElement->d_stListOfFacesTripled[xTriangleIndex].a3_xIndex[2] / 8] |= (unsigned char)(1 << (p_stLocalElement->d_stListOfFacesTripled[xTriangleIndex].a3_xIndex[2] & 7));
            }
            p_stLocalElement->xNumberOfIndexsUsed = 0;
            for (xObjIndex = 0; xObjIndex < ((unsigned int)p_stObj->xNbPoints + 7) >> 3; xObjIndex++)
            {
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 1) p_stLocalElement->xNumberOfIndexsUsed++;
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 2) p_stLocalElement->xNumberOfIndexsUsed++;
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 4) p_stLocalElement->xNumberOfIndexsUsed++;
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 8) p_stLocalElement->xNumberOfIndexsUsed++;
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 0x10) p_stLocalElement->xNumberOfIndexsUsed++;
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 0x20) p_stLocalElement->xNumberOfIndexsUsed++;
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 0x40) p_stLocalElement->xNumberOfIndexsUsed++;
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 0x80) p_stLocalElement->xNumberOfIndexsUsed++;
            }
            p_stLocalElement->d_stListOfIndexUsedByThisElement = (short*)HMU_fn_p_vMalloc(p_stLocalElement->xNumberOfIndexsUsed * 2, 0);
            xIndexCounter = 0;
            for (xObjIndex = 0; xObjIndex < ((unsigned int)p_stObj->xNbPoints + 7) >> 3; xObjIndex++)
            {
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 1) { p_stLocalElement->d_stListOfIndexUsedByThisElement[xIndexCounter] = xObjIndex * 8; xIndexCounter++; }
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 2) { p_stLocalElement->d_stListOfIndexUsedByThisElement[xIndexCounter] = xObjIndex * 8 + 1; xIndexCounter++; }
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 4) { p_stLocalElement->d_stListOfIndexUsedByThisElement[xIndexCounter] = xObjIndex * 8 + 2; xIndexCounter++; }
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 8) { p_stLocalElement->d_stListOfIndexUsedByThisElement[xIndexCounter] = xObjIndex * 8 + 3; xIndexCounter++; }
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 0x10) { p_stLocalElement->d_stListOfIndexUsedByThisElement[xIndexCounter] = xObjIndex * 8 + 4; xIndexCounter++; }
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 0x20) { p_stLocalElement->d_stListOfIndexUsedByThisElement[xIndexCounter] = xObjIndex * 8 + 5; xIndexCounter++; }
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 0x40) { p_stLocalElement->d_stListOfIndexUsedByThisElement[xIndexCounter] = xObjIndex * 8 + 6; xIndexCounter++; }
                if (((unsigned char*)aDEF_ulCountBuffer)[xObjIndex] & 0x80) { p_stLocalElement->d_stListOfIndexUsedByThisElement[xIndexCounter] = xObjIndex * 8 + 7; xIndexCounter++; }
            }
        }
    }
}
