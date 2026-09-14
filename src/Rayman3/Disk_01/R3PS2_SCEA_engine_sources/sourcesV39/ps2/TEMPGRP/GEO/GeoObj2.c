/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GEO_tdstFaceMapTriangle_ GEO_tdstFaceMapTriangle_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GEO_tdstFaceMapDescriptor_ GEO_tdstFaceMapDescriptor_;
typedef struct GEO_tdstIndexedCone_ GEO_tdstIndexedCone_;
typedef struct GEO_tdstElementFaceMapDescriptors_ GEO_tdstElementFaceMapDescriptors_;
typedef struct GEO_tdstElementPoints_ GEO_tdstElementPoints_;
typedef struct GEO_tdstElementLines_ GEO_tdstElementLines_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstElementCones_ GEO_tdstElementCones_;
typedef struct GEO_tdstElementSpheres_ GEO_tdstElementSpheres_;
typedef struct GEO_tdstElementAlignedBoxes_ GEO_tdstElementAlignedBoxes_;
typedef struct MTH2D_tdstVector_ MTH2D_tdstVector_;
typedef struct GEO_tdstIndexedSprite_ GEO_tdstIndexedSprite_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstElementSprite_ GEO_tdstElementSprite_;
typedef struct GEO_tdstSprite_ GEO_tdstSprite_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GEO_tdstIndexedSphere_ GEO_tdstIndexedSphere_;
typedef struct GEO_tdstIndexedAlignedBox_ GEO_tdstIndexedAlignedBox_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct GEO_tdstFaceMapTriangle_ {
    GEO_tdstTripledIndex_ stFaceTripled; /* +0x0 */
    GEO_tdstFaceMapDescriptor_* hFaceMapDescriptor; /* +0x8 */
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

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GEO_tdstFaceMapDescriptor_ {
    ACP_tdst2DUVValues_ stUVValues[3]; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x18 */
};

struct GEO_tdstIndexedCone_ {
    short xTopPoint; /* +0x0 */
    short xBasePoint; /* +0x2 */
    float xBaseRadius; /* +0x4 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x8 */
};

struct GEO_tdstElementFaceMapDescriptors_ {
    short xNbFaces; /* +0x0 */
    GEO_tdstFaceMapTriangle_* d_stListOfFacesQuadrupled; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x8 */
    short xIndexOfParallelBox; /* +0xc */
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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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

struct GEO_tdstElementCones_ {
    GEO_tdstIndexedCone_* d_stListOfCones; /* +0x0 */
    short xNbCones; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
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

struct MTH2D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
};

struct GEO_tdstIndexedSprite_ {
    GEO_tdstSprite_* hSprite; /* +0x0 */
    MTH2D_tdstVector_ stSize; /* +0x4 */
    MTH3D_tdstVector_ stAxe; /* +0xc */
    ACP_tdst2DUVValues_ stUVpos; /* +0x18 */
    ACP_tdst2DUVValues_ stUVsize; /* +0x20 */
    short xCenterPoint; /* +0x28 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstElementSprite_ {
    GEO_tdstIndexedSprite_* d_stListOfSprites; /* +0x0 */
    short xNbSprites; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
    char cFastDraw; /* +0x8 */
    int p_stOwnerObject; /* +0xc */
};

struct GEO_tdstSprite_ {
    short xNbSprites; /* +0x0 */
    int d_xSpriteDrawMode; /* +0x4 */
    int d_xThresholds; /* +0x8 */
    MTH2D_tdstVector_* d_xSizeOfSprite; /* +0xc */
    MTH2D_tdstVector_* d_xDisplacementOfSprite; /* +0x10 */
    GLI_tdstMaterial_** d_hVisualMaterial; /* +0x14 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj2.c lines 38–126 */
/* addr: 0x002a28a0  size: 2112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 38
 *   +0x0010 -> line 47
 *   +0x001c -> line 50
 *   +0x0028 -> line 53
 *   +0x0040 -> line 57
 *   +0x0044 -> line 56
 *   +0x0048 -> line 57
 *   +0x0058 -> line 58
 *   +0x0064 -> line 60
 *   +0x0070 -> line 61
 *   +0x0088 -> line 63
 *   +0x0098 -> line 65
 *   +0x00b0 -> line 67
 *   +0x00bc -> line 70
 *   +0x00c0 -> line 69
 *   +0x00c4 -> line 70
 *   +0x00d4 -> line 71
 *   +0x00e0 -> line 81
 *   +0x00e4 -> line 73
 *   +0x00e8 -> line 81
 *   +0x00ec -> line 73
 *   +0x00f0 -> line 81
 *   +0x00f4 -> line 74
 *   +0x00f8 -> line 73
 *   +0x0198 -> line 74
 *   +0x01b8 -> line 76
 *   +0x01f8 -> line 78
 *   +0x026c -> line 79
 *   +0x02dc -> line 80
 *   +0x034c -> line 81
 *   +0x03c4 -> line 82
 *   +0x03c8 -> line 83
 *   +0x03d8 -> line 84
 *   +0x03e0 -> line 85
 *   +0x03ec -> line 87
 *   +0x03f8 -> line 90
 *   +0x03fc -> line 89
 *   +0x0400 -> line 90
 *   +0x0410 -> line 91
 *   +0x041c -> line 107
 *   +0x0420 -> line 93
 *   +0x0424 -> line 107
 *   +0x0428 -> line 93
 *   +0x042c -> line 107
 *   +0x0430 -> line 100
 *   +0x0434 -> line 91
 *   +0x0438 -> line 93
 *   +0x04d8 -> line 100
 *   +0x04f8 -> line 102
 *   +0x0538 -> line 104
 *   +0x05ac -> line 105
 *   +0x061c -> line 106
 *   +0x068c -> line 107
 *   +0x0704 -> line 108
 *   +0x0708 -> line 109
 *   +0x0718 -> line 111
 *   +0x0720 -> line 109
 *   +0x0728 -> line 111
 *   +0x0748 -> line 114
 *   +0x074c -> line 113
 *   +0x0750 -> line 114
 *   +0x0760 -> line 115
 *   +0x076c -> line 123
 *   +0x0774 -> line 117
 *   +0x07b0 -> line 119
 *   +0x07b8 -> line 120
 *   +0x07c0 -> line 123
 *   +0x081c -> line 124
 *   +0x0820 -> line 125
 *   +0x0830 -> line 126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_xComputeObjectNormals(GEO_tdstGeometricObject_* p_stObj)
{
    float xNorm;
    short xIndex;
    GEO_tdstElementFaceMapDescriptors_* p_stLocalElementFMD;
    GEO_tdstFaceMapTriangle_* p_stITLastFMD;
    GEO_tdstFaceMapTriangle_* param0;
    GEO_tdstElementIndexedTriangles_* p_stLocalElement;
    GEO_tdstTripledIndex_* p_stITLast;
    MTH3D_tdstVector_ stNormalResult;
    MTH3D_tdstVector_* p_stVertex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoObj2.c lines 60–214 */
/* addr: 0x002a30e0  size: 3568 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 60
 *   +0x0034 -> line 75
 *   +0x0040 -> line 77
 *   +0x0048 -> line 82
 *   +0x0058 -> line 84
 *   +0x007c -> line 86
 *   +0x00ac -> line 88
 *   +0x00b0 -> line 89
 *   +0x00bc -> line 90
 *   +0x00d4 -> line 92
 *   +0x00d8 -> line 94
 *   +0x00e0 -> line 92
 *   +0x0148 -> line 93
 *   +0x01b4 -> line 95
 *   +0x01b8 -> line 96
 *   +0x01c8 -> line 98
 *   +0x01f4 -> line 99
 *   +0x0220 -> line 100
 *   +0x024c -> line 101
 *   +0x0250 -> line 100
 *   +0x0254 -> line 101
 *   +0x0278 -> line 102
 *   +0x0280 -> line 104
 *   +0x028c -> line 105
 *   +0x02a4 -> line 107
 *   +0x02a8 -> line 109
 *   +0x02b0 -> line 107
 *   +0x0318 -> line 108
 *   +0x0384 -> line 110
 *   +0x0388 -> line 111
 *   +0x0398 -> line 113
 *   +0x03c4 -> line 114
 *   +0x03f0 -> line 115
 *   +0x041c -> line 116
 *   +0x0420 -> line 115
 *   +0x0424 -> line 116
 *   +0x0448 -> line 117
 *   +0x0450 -> line 119
 *   +0x045c -> line 121
 *   +0x0474 -> line 123
 *   +0x0478 -> line 125
 *   +0x0480 -> line 123
 *   +0x04e8 -> line 124
 *   +0x0554 -> line 126
 *   +0x0558 -> line 127
 *   +0x0568 -> line 129
 *   +0x0594 -> line 130
 *   +0x0598 -> line 129
 *   +0x059c -> line 130
 *   +0x05c0 -> line 140
 *   +0x05c8 -> line 144
 *   +0x05d4 -> line 145
 *   +0x05ec -> line 147
 *   +0x05f0 -> line 149
 *   +0x05f8 -> line 147
 *   +0x0660 -> line 148
 *   +0x06cc -> line 150
 *   +0x06d0 -> line 151
 *   +0x06e0 -> line 153
 *   +0x070c -> line 154
 *   +0x0710 -> line 153
 *   +0x0714 -> line 154
 *   +0x0738 -> line 155
 *   +0x0740 -> line 157
 *   +0x074c -> line 158
 *   +0x0764 -> line 160
 *   +0x0768 -> line 162
 *   +0x0770 -> line 160
 *   +0x07d8 -> line 161
 *   +0x0844 -> line 163
 *   +0x0848 -> line 164
 *   +0x0858 -> line 166
 *   +0x0884 -> line 167
 *   +0x08b0 -> line 168
 *   +0x08b4 -> line 167
 *   +0x08b8 -> line 168
 *   +0x08d8 -> line 169
 *   +0x08e0 -> line 171
 *   +0x08ec -> line 172
 *   +0x0904 -> line 174
 *   +0x0908 -> line 176
 *   +0x0910 -> line 174
 *   +0x0978 -> line 175
 *   +0x09e4 -> line 177
 *   +0x09e8 -> line 178
 *   +0x09f8 -> line 180
 *   +0x0a24 -> line 181
 *   +0x0a28 -> line 180
 *   +0x0a2c -> line 181
 *   +0x0a50 -> line 182
 *   +0x0a58 -> line 184
 *   +0x0a64 -> line 185
 *   +0x0a7c -> line 187
 *   +0x0a80 -> line 189
 *   +0x0a88 -> line 187
 *   +0x0af0 -> line 188
 *   +0x0b5c -> line 190
 *   +0x0b60 -> line 191
 *   +0x0b70 -> line 193
 *   +0x0b9c -> line 194
 *   +0x0bc8 -> line 195
 *   +0x0bcc -> line 194
 *   +0x0bd0 -> line 195
 *   +0x0bf0 -> line 196
 *   +0x0bf8 -> line 198
 *   +0x0c04 -> line 199
 *   +0x0c1c -> line 201
 *   +0x0c20 -> line 203
 *   +0x0c28 -> line 201
 *   +0x0c90 -> line 202
 *   +0x0cfc -> line 204
 *   +0x0d00 -> line 205
 *   +0x0d10 -> line 207
 *   +0x0d3c -> line 208
 *   +0x0d68 -> line 209
 *   +0x0d6c -> line 208
 *   +0x0d70 -> line 209
 *   +0x0d90 -> line 213
 *   +0x0d98 -> line 209
 *   +0x0da0 -> line 213
 *   +0x0dc0 -> line 214
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vComputeObjectParallelBox(GEO_tdstGeometricObject_* hObject, short xParallelBox)
{
    int bInit;
    GEO_tdstParallelBox_* hParallelBox;
    MTH3D_tdstVector_* p_stMaxPoint;
    MTH3D_tdstVector_* p_stMinPoint;
    short xIndexInElement;
    short xIndexElement;
    GEO_tdstElementSprite_* p_stESt;
    GEO_tdstElementCones_* p_stEC;
    GEO_tdstElementAlignedBoxes_* p_stEAB;
    GEO_tdstElementSpheres_* p_stES;
    GEO_tdstElementLines_* p_stEL;
    GEO_tdstElementPoints_* p_stEIP;
    GEO_tdstElementFaceMapDescriptors_* p_stEFMD;
    GEO_tdstElementIndexedTriangles_* p_stETIT;
    /* TODO: decompile from asm/... */
}
