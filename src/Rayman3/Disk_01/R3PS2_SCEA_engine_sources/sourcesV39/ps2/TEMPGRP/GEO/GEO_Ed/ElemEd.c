/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GEO_tdstFaceMapTriangle_ GEO_tdstFaceMapTriangle_;
typedef struct GEO_tdstSprite_ GEO_tdstSprite_;
typedef struct GEO_tdstFaceMapDescriptor_ GEO_tdstFaceMapDescriptor_;
typedef struct GEO_tdstElementFaceMapDescriptors_ GEO_tdstElementFaceMapDescriptors_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct MTH2D_tdstVector_ MTH2D_tdstVector_;
typedef struct GEO_tdstIndexedSprite_ GEO_tdstIndexedSprite_;
typedef struct GEO_tdstElementSprite_ GEO_tdstElementSprite_;
typedef struct GEO_tdstElementLines_ GEO_tdstElementLines_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstElementTMeshes_ GEO_tdstElementTMeshes_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct MAT_tdstTransformation_ {
    int eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstVector_ stTransformMatrix[4]; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    GEO_tdstElementIndexedTriangles_** d_stListOfElements; /* +0x10 */
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

struct GEO_tdstFaceMapTriangle_ {
    GEO_tdstTripledIndex_ stFaceTripled; /* +0x0 */
    GEO_tdstFaceMapDescriptor_* hFaceMapDescriptor; /* +0x8 */
};

struct GEO_tdstSprite_ {
    short xNbSprites; /* +0x0 */
    int d_xSpriteDrawMode; /* +0x4 */
    int d_xThresholds; /* +0x8 */
    MTH2D_tdstVector_* d_xSizeOfSprite; /* +0xc */
    MTH2D_tdstVector_* d_xDisplacementOfSprite; /* +0x10 */
    GLI_tdstMaterial_** d_hVisualMaterial; /* +0x14 */
};

struct GEO_tdstFaceMapDescriptor_ {
    ACP_tdst2DUVValues_ stUVValues[3]; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x18 */
};

struct GEO_tdstElementFaceMapDescriptors_ {
    short xNbFaces; /* +0x0 */
    GEO_tdstFaceMapTriangle_* d_stListOfFacesQuadrupled; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x8 */
    short xIndexOfParallelBox; /* +0xc */
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

struct GEO_tdstElementSprite_ {
    GEO_tdstIndexedSprite_* d_stListOfSprites; /* +0x0 */
    short xNbSprites; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
    char cFastDraw; /* +0x8 */
    int p_stOwnerObject; /* +0xc */
};

struct GEO_tdstElementLines_ {
    float xThickness; /* +0x0 */
    GEO_tdstDoubledIndex_* d_stListOfLineIndex; /* +0x4 */
    GLI_tdstMaterial_** d_hListOfLinesVisualMaterial; /* +0x8 */
    GEO_tdstColor_* d_stListOfLinesReceivedLightIntensity; /* +0xc */
    short xNbLines; /* +0x10 */
    short xIndexOfParallelBox; /* +0x12 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 174–187 */
/* addr: 0x002a3f80  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 174
 *   +0x002c -> line 183
 *   +0x0044 -> line 186
 *   +0x0060 -> line 187
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GEO_lCullingSphere(GLD_tdstViewportAttributes_* p_stVpt, MTH3D_tdstVector_* p_stSphereCenter, float xRadius, MAT_tdstTransformation_* p_stMatrix, int _lCullingResult)
{
    MAT_tdstTransformation_ stTempMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 1168–1169 */
/* addr: 0x002a4000  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1168
 *   +0x0018 -> line 1169
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vSetElementVisibleInPortalFlag(GEO_tdstGeometricObject_* hObject, short hElement, unsigned char bVisible)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 351–352 */
/* addr: 0x002a4020  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 351
 *   +0x0018 -> line 352
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vSetVisualMaterialOfIndexedTriangles(GEO_tdstGeometricObject_* hObject, short hElement, GLI_tdstMaterial_* hVisualMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 325–326 */
/* addr: 0x002a4040  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 325
 *   +0x0038 -> line 326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vSetUVOfIndexedTriangles(GEO_tdstGeometricObject_* hObject, short hElement, short xIndexOfUV, ACP_tdst2DUVValues_* p_stUV)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 310–311 */
/* addr: 0x002a4080  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 310
 *   +0x0018 -> line 311
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GEO_lGetIndexedTriangleNbFaces(GEO_tdstGeometricObject_* hObject, short hElement)
{
    return hObject->d_stListOfElements[hElement]->xNbFaces;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 228–235 */
/* addr: 0x002a40a0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 228
 *   +0x0010 -> line 232
 *   +0x0024 -> line 228
 *   +0x002c -> line 232
 *   +0x0038 -> line 233
 *   +0x0048 -> line 234
 *   +0x0054 -> line 235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vSetIndexedUVOfFaceOfIndexedTriangles(GEO_tdstGeometricObject_* hObject, short hElement, short xIndexOfFace, short xUV1, short xUV2, short xUV3)
{
    GEO_tdstElementIndexedTriangles_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 209–216 */
/* addr: 0x002a4100  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 209
 *   +0x0010 -> line 213
 *   +0x0024 -> line 209
 *   +0x002c -> line 213
 *   +0x003c -> line 214
 *   +0x0050 -> line 215
 *   +0x0060 -> line 216
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vGetFaceOfIndexedTriangles(GEO_tdstGeometricObject_* hObject, short hElement, short xIndexOfFace, short* p_xPoint1, short* p_xPoint2, short* p_xPoint3)
{
    GEO_tdstElementIndexedTriangles_* param0;
    /* TODO: decompile from asm/... */
}
