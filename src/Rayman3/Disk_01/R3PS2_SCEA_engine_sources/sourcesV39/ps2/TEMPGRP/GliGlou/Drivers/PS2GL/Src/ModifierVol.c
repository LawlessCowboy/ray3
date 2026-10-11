/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct GLI_tdstAligned3DVector_ GLI_tdstAligned3DVector_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct tagGLtexname tagGLtexname;
typedef struct GEO_tdstDoubledIndexDWORD_ GEO_tdstDoubledIndexDWORD_;
typedef struct anon_2 anon_2;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct tagListData tagListData;
typedef struct anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_7 anon_7;
typedef struct anon_8 anon_8;
typedef struct anon_9 anon_9;
typedef struct anon_11 anon_11;
typedef struct anon_22 anon_22;
typedef struct anon_27 anon_27;
typedef struct anon_19 anon_19;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct anon_10 anon_10;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_14 anon_14;
typedef struct anon_21 anon_21;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct anon_12 anon_12;
typedef struct anon_13 anon_13;
typedef struct anon_35 anon_35;
typedef struct anon_41 anon_41;
typedef struct anon_30 anon_30;
typedef struct anon_36 anon_36;
typedef struct anon_25 anon_25;
typedef struct tagGsSetTex tagGsSetTex;
typedef union anon_15 anon_15;
typedef struct anon_16 anon_16;
typedef struct anon_17 anon_17;
typedef struct anon_18 anon_18;
typedef struct anon_20 anon_20;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GEO_tdstTripledIndexDWORD_ GEO_tdstTripledIndexDWORD_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct anon_23 anon_23;
typedef struct tagListNode tagListNode;
typedef struct anon_24 anon_24;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_26 anon_26;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct anon_28 anon_28;
typedef struct anon_29 anon_29;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct anon_31 anon_31;
typedef struct anon_32 anon_32;
typedef struct anon_33 anon_33;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_34 anon_34;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct anon_42 anon_42;
typedef struct anon_38 anon_38;
typedef struct anon_37 anon_37;
typedef struct anon_40 anon_40;
typedef struct anon_39 anon_39;
typedef struct tagGScontext tagGScontext;
typedef struct tag_GLlight tag_GLlight;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;

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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
} __attribute__((aligned(16)));

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

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

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GLI_tdstCamera_ {
    int lCameraMode; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ stMatrix; /* +0x10 */
    float xAlphaX; /* +0x70 */
    float xAlphaY; /* +0x74 */
    float xNear; /* +0x78 */
    float xFar; /* +0x7c */
    float xScreen; /* +0x80 */
    GLI_tdst2DVertex_ stScale; /* +0x84 */
    GLI_tdst2DVertex_ stTrans; /* +0x90 */
    float xXProjectionRatio; /* +0x9c */
    float xYProjectionRatio; /* +0xa0 */
    MTH3D_tdstVector_ stNormPlaneLeft; /* +0xa4 */
    float xDistPlaneLeft; /* +0xb0 */
    MTH3D_tdstVector_ stNormPlaneRight; /* +0xb4 */
    float xDistPlaneRight; /* +0xc0 */
    MTH3D_tdstVector_ stNormPlaneUp; /* +0xc4 */
    float xDistPlaneUp; /* +0xd0 */
    MTH3D_tdstVector_ stNormPlaneDown; /* +0xd4 */
    float xDistPlaneDown; /* +0xe0 */
    float xRatio; /* +0xe4 */
    unsigned char ucCameraTransparency; /* +0xe8 */
    float xTranspDist; /* +0xec */
    unsigned char bCameraIsMirrored; /* +0xf0 */
};

struct GLI_tdstAligned3DVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float ALIGN; /* +0xc */
};

struct anon_0 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_1 {
    unsigned long pad00 : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct tagGLtexname {
    unsigned char bAllocated; /* +0x0 */
    unsigned char bResident; /* +0x1 */
    float fPrioritize; /* +0x4 */
    unsigned int eDimension; /* +0x8 */
    int iTexBlock; /* +0xc */
    tag_GLtexture* pTex1D; /* +0x10 */
    tag_GLtexture* pTex2D; /* +0x14 */
    tag_GLtexture* pTexCube; /* +0x18 */
};

struct GEO_tdstDoubledIndexDWORD_ {
    int a2_xIndex[2]; /* +0x0 */
};

struct anon_2 {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
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

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct tag_GLtexture {
    float vTexBorderColor[4]; /* +0x0 */
    unsigned int eDimension; /* +0x10 */
    unsigned int eTexFilterMin; /* +0x14 */
    unsigned int eTexFilterMag; /* +0x18 */
    unsigned int eTexWrapS; /* +0x1c */
    unsigned int eTexWrapT; /* +0x20 */
    int Image[7]; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    int clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
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

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*pDmaBuffer)[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct anon_3 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_4 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_5 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_6 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    anon_2 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_7 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_8 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_9 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_11 {
    unsigned long SBP : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long SBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long SPSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long DBP : 14; /* bit 32, byte +0x0 */
    unsigned long pad46 : 2; /* bit 46, byte +0x0 */
    unsigned long DBW : 6; /* bit 48, byte +0x0 */
    unsigned long pad54 : 2; /* bit 54, byte +0x0 */
    unsigned long DPSM : 6; /* bit 56, byte +0x0 */
    unsigned long pad62 : 2; /* bit 62, byte +0x0 */
};

struct anon_22 {
    unsigned long SSAX : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SSAY : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long DSAX : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long DSAY : 11; /* bit 48, byte +0x0 */
    unsigned long DIR : 2; /* bit 59, byte +0x0 */
    unsigned long pad61 : 3; /* bit 61, byte +0x0 */
};

struct anon_27 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_19 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_2 gifTag; /* +0x0 */
    anon_11 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_22 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_27 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_19 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct tag_GLtexture_set {
    float vTexEnvColor[4]; /* +0x0 */
    unsigned int eTexEnvMode; /* +0x10 */
    unsigned int nTexGenBits; /* +0x14 */
    unsigned short nTexGenModeS; /* +0x18 */
    unsigned short nTexGenModeT; /* +0x1a */
    unsigned short nTexGenModeR; /* +0x1c */
    unsigned short nTexGenModeQ; /* +0x1e */
    float vTexGenCoeffS[4]; /* +0x20 */
    float vTexGenCoeffT[4]; /* +0x30 */
    float vTexGenCoeffR[4]; /* +0x40 */
    float vTexGenCoeffQ[4]; /* +0x50 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct anon_10 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_14 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_21 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_14 st_UVStaticPos; /* +0xc */
    anon_14 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    anon_21 a_stMultiMaterial[4]; /* +0x88 */
};

struct anon_12 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_13 {
    unsigned long pad00; /* +0x0 */
};

struct anon_35 {
    unsigned long TBP0 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW : 6; /* bit 14, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long TW : 4; /* bit 26, byte +0x0 */
    unsigned long TH : 4; /* bit 30, byte +0x0 */
    unsigned long TCC : 1; /* bit 34, byte +0x0 */
    unsigned long TFX : 2; /* bit 35, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_41 {
    unsigned long LCM : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 1; /* bit 1, byte +0x0 */
    unsigned long MXL : 3; /* bit 2, byte +0x0 */
    unsigned long MMAG : 1; /* bit 5, byte +0x0 */
    unsigned long MMIN : 3; /* bit 6, byte +0x0 */
    unsigned long MTBA : 1; /* bit 9, byte +0x0 */
    unsigned long pad10 : 9; /* bit 10, byte +0x0 */
    unsigned long L : 2; /* bit 19, byte +0x0 */
    unsigned long pad21 : 11; /* bit 21, byte +0x0 */
    unsigned long K : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_30 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_36 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_25 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_2 gifTag; /* +0x0 */
    anon_13 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_35 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_41 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_30 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_36 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_25 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

union anon_15 {
    signed char bData[16]; /* +0x0 */
    unsigned char ubData[16]; /* +0x0 */
    short sData[8]; /* +0x0 */
    unsigned short usData[8]; /* +0x0 */
    int iData[4]; /* +0x0 */
    unsigned int uiData[4]; /* +0x0 */
    long i64Data[2]; /* +0x0 */
    unsigned long u64Data[2]; /* +0x0 */
    float fData[4]; /* +0x0 */
    double dData[2]; /* +0x0 */
};

struct anon_16 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct anon_17 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_18 {
    unsigned long PRIM_Modified : 1; /* bit 0, byte +0x0 */
    unsigned long RGBAQ_Modified : 1; /* bit 1, byte +0x0 */
    unsigned long ST_Modified : 1; /* bit 2, byte +0x0 */
    unsigned long UV_Modified : 1; /* bit 3, byte +0x0 */
    unsigned long XYZF2_Modified : 1; /* bit 4, byte +0x0 */
    unsigned long XYZ2_Modified : 1; /* bit 5, byte +0x0 */
    unsigned long TEX0_1_Modified : 1; /* bit 6, byte +0x0 */
    unsigned long TEX0_2_Modified : 1; /* bit 7, byte +0x0 */
    unsigned long CLAMP_1_Modified : 1; /* bit 8, byte +0x0 */
    unsigned long CLAMP_2_Modified : 1; /* bit 9, byte +0x0 */
    unsigned long FOG_Modified : 1; /* bit 10, byte +0x0 */
    unsigned long XYZF3_Modified : 1; /* bit 11, byte +0x0 */
    unsigned long XYZ3_Modified : 1; /* bit 12, byte +0x0 */
    unsigned long TEX1_1_Modified : 1; /* bit 13, byte +0x0 */
    unsigned long TEX1_2_Modified : 1; /* bit 14, byte +0x0 */
    unsigned long TEX2_1_Modified : 1; /* bit 15, byte +0x0 */
    unsigned long TEX2_2_Modified : 1; /* bit 16, byte +0x0 */
    unsigned long XYOFFSET_1_Modified : 1; /* bit 17, byte +0x0 */
    unsigned long XYOFFSET_2_Modified : 1; /* bit 18, byte +0x0 */
    unsigned long PRMODECONT_Modified : 1; /* bit 19, byte +0x0 */
    unsigned long PRMODE_Modified : 1; /* bit 20, byte +0x0 */
    unsigned long TEXCLUT_Modified : 1; /* bit 21, byte +0x0 */
    unsigned long SCANMSK_Modified : 1; /* bit 22, byte +0x0 */
    unsigned long MIPTBP1_1_Modified : 1; /* bit 23, byte +0x0 */
    unsigned long MIPTBP1_2_Modified : 1; /* bit 24, byte +0x0 */
    unsigned long MIPTBP2_1_Modified : 1; /* bit 25, byte +0x0 */
    unsigned long MIPTBP2_2_Modified : 1; /* bit 26, byte +0x0 */
    unsigned long TEXA_Modified : 1; /* bit 27, byte +0x0 */
    unsigned long FOGCOL_Modified : 1; /* bit 28, byte +0x0 */
    unsigned long TEXFLUSH_Modified : 1; /* bit 29, byte +0x0 */
    unsigned long SCISSOR_1_Modified : 1; /* bit 30, byte +0x0 */
    unsigned long SCISSOR_2_Modified : 1; /* bit 31, byte +0x0 */
    unsigned long ALPHA_1_Modified : 1; /* bit 32, byte +0x0 */
    unsigned long ALPHA_2_Modified : 1; /* bit 33, byte +0x0 */
    unsigned long DIMX_Modified : 1; /* bit 34, byte +0x0 */
    unsigned long DTHE_Modified : 1; /* bit 35, byte +0x0 */
    unsigned long COLCLAMP_Modified : 1; /* bit 36, byte +0x0 */
    unsigned long TEST_1_Modified : 1; /* bit 37, byte +0x0 */
    unsigned long TEST_2_Modified : 1; /* bit 38, byte +0x0 */
    unsigned long PABE_Modified : 1; /* bit 39, byte +0x0 */
    unsigned long FBA_1_Modified : 1; /* bit 40, byte +0x0 */
    unsigned long FBA_2_Modified : 1; /* bit 41, byte +0x0 */
    unsigned long FRAME_1_Modified : 1; /* bit 42, byte +0x0 */
    unsigned long FRAME_2_Modified : 1; /* bit 43, byte +0x0 */
    unsigned long ZBUF_1_Modified : 1; /* bit 44, byte +0x0 */
    unsigned long ZBUF_2_Modified : 1; /* bit 45, byte +0x0 */
    unsigned long BITBLTBUF_Modified : 1; /* bit 46, byte +0x0 */
    unsigned long TRXPOS_Modified : 1; /* bit 47, byte +0x0 */
    unsigned long TRXREG_Modified : 1; /* bit 48, byte +0x0 */
    unsigned long TRXDIR_Modified : 1; /* bit 49, byte +0x0 */
    unsigned long HWREG_Modified : 1; /* bit 50, byte +0x0 */
    unsigned long SIGNAL_Modified : 1; /* bit 51, byte +0x0 */
    unsigned long FINISH_Modified : 1; /* bit 52, byte +0x0 */
    unsigned long LABEL_Modified : 1; /* bit 53, byte +0x0 */
};

struct anon_20 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct GEO_tdstTripledIndexDWORD_ {
    int a3_xIndex[3]; /* +0x0 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct anon_23 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct anon_24 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
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

struct tag_GLtexture_image {
    unsigned int target; /* +0x0 */
    int inputComponents; /* +0x4 */
    int width; /* +0x8 */
    int height; /* +0xc */
    unsigned int format; /* +0x10 */
    int pixels; /* +0x14 */
    int pixelsAux; /* +0x18 */
    int cbPixels; /* +0x1c */
    int cbPixelsAux; /* +0x20 */
    unsigned char pixelsChanged; /* +0x24 */
    unsigned char bConverted; /* +0x25 */
    unsigned char bUserMaintain; /* +0x26 */
    unsigned int uiSpan; /* +0x28 */
};

struct anon_26 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct anon_28 {
    unsigned long ATE : 1; /* bit 0, byte +0x0 */
    unsigned long ATST : 3; /* bit 1, byte +0x0 */
    unsigned long AREF : 8; /* bit 4, byte +0x0 */
    unsigned long AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned long DATE : 1; /* bit 14, byte +0x0 */
    unsigned long DATM : 1; /* bit 15, byte +0x0 */
    unsigned long ZTE : 1; /* bit 16, byte +0x0 */
    unsigned long ZTST : 2; /* bit 17, byte +0x0 */
    unsigned long pad19 : 45; /* bit 19, byte +0x0 */
};

struct anon_29 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct anon_31 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_32 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_33 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_34 {
    unsigned long DIMX00 : 3; /* bit 0, byte +0x0 */
    unsigned long pad00 : 1; /* bit 3, byte +0x0 */
    unsigned long DIMX01 : 3; /* bit 4, byte +0x0 */
    unsigned long pad01 : 1; /* bit 7, byte +0x0 */
    unsigned long DIMX02 : 3; /* bit 8, byte +0x0 */
    unsigned long pad02 : 1; /* bit 11, byte +0x0 */
    unsigned long DIMX03 : 3; /* bit 12, byte +0x0 */
    unsigned long pad03 : 1; /* bit 15, byte +0x0 */
    unsigned long DIMX10 : 3; /* bit 16, byte +0x0 */
    unsigned long pad10 : 1; /* bit 19, byte +0x0 */
    unsigned long DIMX11 : 3; /* bit 20, byte +0x0 */
    unsigned long pad11 : 1; /* bit 23, byte +0x0 */
    unsigned long DIMX12 : 3; /* bit 24, byte +0x0 */
    unsigned long pad12 : 1; /* bit 27, byte +0x0 */
    unsigned long DIMX13 : 3; /* bit 28, byte +0x0 */
    unsigned long pad13 : 1; /* bit 31, byte +0x0 */
    unsigned long DIMX20 : 3; /* bit 32, byte +0x0 */
    unsigned long pad20 : 1; /* bit 35, byte +0x0 */
    unsigned long DIMX21 : 3; /* bit 36, byte +0x0 */
    unsigned long pad21 : 1; /* bit 39, byte +0x0 */
    unsigned long DIMX22 : 3; /* bit 40, byte +0x0 */
    unsigned long pad22 : 1; /* bit 43, byte +0x0 */
    unsigned long DIMX23 : 3; /* bit 44, byte +0x0 */
    unsigned long pad23 : 1; /* bit 47, byte +0x0 */
    unsigned long DIMX30 : 3; /* bit 48, byte +0x0 */
    unsigned long pad30 : 1; /* bit 51, byte +0x0 */
    unsigned long DIMX31 : 3; /* bit 52, byte +0x0 */
    unsigned long pad31 : 1; /* bit 55, byte +0x0 */
    unsigned long DIMX32 : 3; /* bit 56, byte +0x0 */
    unsigned long pad32 : 1; /* bit 59, byte +0x0 */
    unsigned long DIMX33 : 3; /* bit 60, byte +0x0 */
    unsigned long pad33 : 1; /* bit 63, byte +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct anon_42 {
    unsigned long PRIM : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct anon_38 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_37 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_40 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_39 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct tagGScontext {
    anon_42 PRIM; /* +0x0 */
    anon_7 RGBAQ; /* +0x8 */
    anon_26 ST; /* +0x10 */
    anon_31 UV; /* +0x18 */
    anon_38 XYZF2; /* +0x20 */
    anon_37 XYZ2; /* +0x28 */
    anon_35 TEX0_1; /* +0x30 */
    anon_35 TEX0_2; /* +0x38 */
    anon_25 CLAMP_1; /* +0x40 */
    anon_25 CLAMP_2; /* +0x48 */
    anon_12 FOG; /* +0x50 */
    anon_38 XYZF3; /* +0x58 */
    anon_37 XYZ3; /* +0x60 */
    anon_41 TEX1_1; /* +0x68 */
    anon_41 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_33 XYOFFSET_1; /* +0x88 */
    anon_33 XYOFFSET_2; /* +0x90 */
    anon_4 PRMODECONT; /* +0x98 */
    anon_1 PRMODE; /* +0xa0 */
    anon_9 TEXCLUT; /* +0xa8 */
    anon_10 SCANMSK; /* +0xb0 */
    anon_30 MIPTBP1_1; /* +0xb8 */
    anon_30 MIPTBP1_2; /* +0xc0 */
    anon_36 MIPTBP2_1; /* +0xc8 */
    anon_36 MIPTBP2_2; /* +0xd0 */
    anon_3 TEXA; /* +0xd8 */
    anon_20 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_17 SCISSOR_1; /* +0xf0 */
    anon_17 SCISSOR_2; /* +0xf8 */
    anon_5 ALPHA_1; /* +0x100 */
    anon_5 ALPHA_2; /* +0x108 */
    anon_34 DIMX; /* +0x110 */
    anon_6 DTHE; /* +0x118 */
    anon_32 COLCLAMP; /* +0x120 */
    anon_28 TEST_1; /* +0x128 */
    anon_28 TEST_2; /* +0x130 */
    anon_40 PABE; /* +0x138 */
    anon_8 FBA_1; /* +0x140 */
    anon_8 FBA_2; /* +0x148 */
    anon_23 FRAME_1; /* +0x150 */
    anon_23 FRAME_2; /* +0x158 */
    anon_39 ZBUF_1; /* +0x160 */
    anon_39 ZBUF_2; /* +0x168 */
    anon_11 BITBLTBUF; /* +0x170 */
    anon_22 TRXPOS; /* +0x178 */
    anon_27 TRXREG; /* +0x180 */
    anon_19 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_24 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_29 LABEL; /* +0x1a8 */
    anon_18 ModFlgs; /* +0x1b0 */
    anon_18 GlobalModFlgs; /* +0x1b8 */
    anon_15 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_15* pqCurrent; /* +0x2224 */
    anon_2* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct tag_GLlight {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vPosition[4]; /* +0x30 */
    float vDirection[4]; /* +0x40 */
    float fSpotExponent; /* +0x50 */
    float fSpotCutoff; /* +0x54 */
    float fCosCutoff; /* +0x58 */
    float fConstantAttenuation; /* +0x5c */
    float fLinearAttenuation; /* +0x60 */
    float fQuadraticAttenuation; /* +0x64 */
} __attribute__((aligned(16)));

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct tagGLcontext {
    unsigned int nEnableBits; /* +0x0 */
    float fPointSize; /* +0x4 */
    int iLineFactor; /* +0x8 */
    unsigned short nLineMask; /* +0xc */
    float fLineWidth; /* +0x10 */
    unsigned int eCullFaceMode; /* +0x14 */
    unsigned int eFrontFaceMode; /* +0x18 */
    unsigned int ePolygonMode[2]; /* +0x1c */
    unsigned char aPolygonMask[128]; /* +0x24 */
    unsigned int eClippingFunction; /* +0xa4 */
    unsigned int eSPRMode; /* +0xa8 */
    unsigned char bSPRSynchronization; /* +0xac */
    unsigned int eTexConvMode; /* +0xb0 */
    unsigned int eClutConvMode; /* +0xb4 */
    unsigned int eTexUserMaintainMode; /* +0xb8 */
    unsigned int uiMotionBlurIntensity; /* +0xbc */
    unsigned short iAccumDepth; /* +0xc0 */
    unsigned char bAlphaChannelReduce; /* +0xc2 */
    unsigned int uiCurrentDmaBuffer; /* +0xc4 */
    unsigned short usDontUpdateBits; /* +0xc8 */
    unsigned int uiFastPathBits; /* +0xcc */
    unsigned int uiDmaOmitDataBits; /* +0xd0 */
    unsigned int uiBoundingSphereBits; /* +0xd4 */
    unsigned int uiStaticDisplayListMaxSize; /* +0xd8 */
    unsigned int uiStaticDisplayListBits; /* +0xdc */
    signed char ucSDLObjectReserveSize; /* +0xe0 */
    unsigned char _extractor_padding_08[15]; /* explicit retail gap; +0xe1..0xef */
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x10c..0x10f */
    float vAccumClearValue[4]; /* +0x110 */
    unsigned int eBlendSrcFactor; /* +0x120 */
    unsigned int eBlendDstFactor; /* +0x124 */
    unsigned int eDrawBuffer; /* +0x128 */
    unsigned int eBufferReadMode; /* +0x12c */
    float vColorClearValue[4]; /* +0x130 */
    unsigned char abColorMask[4]; /* +0x140 */
    unsigned int eDepthFunc; /* +0x144 */
    float fDepthClearValue; /* +0x148 */
    unsigned char eDepthWriteMask; /* +0x14c */
    unsigned int eStencilFunc; /* +0x150 */
    int iStencilRef; /* +0x154 */
    unsigned int nStencilValueMask; /* +0x158 */
    unsigned int nStencilWriteMask; /* +0x15c */
    unsigned int eOpFail; /* +0x160 */
    unsigned int eOpZFail; /* +0x164 */
    unsigned int eOpZPass; /* +0x168 */
    int iStencilClearValue; /* +0x16c */
    unsigned int eLogicOpCode; /* +0x170 */
    unsigned int nLightBits; /* +0x174 */
    unsigned int bPointLighting; /* +0x178 */
    unsigned int nTextureEnableBits; /* +0x17c */
    tag_GLtexture_set TextureSet[2]; /* +0x180 */
    tag_GLtexture_set* pCurTexture; /* +0x240 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x244..0x24f */
    tagGsLoadImage stGsLoadImage; /* +0x250 */
    tagGsSetTex astGsSetTex[2]; /* +0x2a0 */
    tagGsSetTex* pstCurGsSetTex; /* +0x380 */
    unsigned int anCurTexName1D[2]; /* +0x384 */
    unsigned int anCurTexName2D[2]; /* +0x38c */
    unsigned int nCurTexNameCube; /* +0x394 */
    tagGLtexname aTexName[512]; /* +0x398 */
    unsigned int eTexLastBindTarget; /* +0x3b98 */
    unsigned int nTexLastBindName; /* +0x3b9c */
    int iMaxTexBlockCount; /* +0x3ba0 */
    tagGLtexblock aBlockMap[604]; /* +0x3ba4 */
    unsigned int nTexMemBegin; /* +0x4514 */
    unsigned int nTexMemEnd; /* +0x4518 */
    int aTexLevelCount[10]; /* +0x451c */
    tagGLtexindex aTexLevelIndex[1203]; /* +0x4544 */
    int iClutSize; /* +0x5810 */
    unsigned char bClutResident; /* +0x5814 */
    int clut; /* +0x5818 */
    unsigned char bMatrixChanged; /* +0x581c */
    unsigned char bBSParamChanged; /* +0x581d */
    unsigned char bLightsChanged; /* +0x581e */
    unsigned char bMaterialChanged; /* +0x581f */
    unsigned char bFogChanged; /* +0x5820 */
    unsigned char bCullfaceChanged; /* +0x5821 */
    unsigned int eOldBeginMode; /* +0x5824 */
    unsigned char abTex1DChanged[2]; /* +0x5828 */
    unsigned char abTex2DChanged[2]; /* +0x582a */
    unsigned char bTexCubeChanged; /* +0x582c */
    int pfnLastCall; /* +0x5830 */
    unsigned int nEvaluatorBits; /* +0x5834 */
    unsigned char bNeedNormal; /* +0x5838 */
    tag_GLlight Lights[8]; /* +0x5840 */
    unsigned char bLocalViewer; /* +0x5bc0 */
    unsigned char bLightModelTwoSide; /* +0x5bc1 */
    unsigned char _extractor_padding_09[14]; /* explicit retail gap; +0x5bc2..0x5bcf */
    float vAmbient[4]; /* +0x5bd0 */
    unsigned int eColorControl; /* +0x5be0 */
    unsigned char bLightModelDiffuseOnly; /* +0x5be4 */
    tag_GLmaterial Materials[2]; /* +0x5bf0 */
    unsigned int eColorMaterialFace; /* +0x5c90 */
    unsigned int eColorMaterialMode; /* +0x5c94 */
    unsigned int eShadeModel; /* +0x5c98 */
    unsigned int eFogMode; /* +0x5c9c */
    int ivFogColor[4]; /* +0x5ca0 */
    float fFogDensity; /* +0x5cb0 */
    float fFogLinearStart; /* +0x5cb4 */
    float fFogLinearEnd; /* +0x5cb8 */
    float fFogIndex; /* +0x5cbc */
    unsigned int eHintPerspectiveCorrection; /* +0x5cc0 */
    unsigned int eHintSmoothPoint; /* +0x5cc4 */
    unsigned int eHintSmoothLine; /* +0x5cc8 */
    unsigned int eHintSmoothPolygon; /* +0x5ccc */
    unsigned int eHintFog; /* +0x5cd0 */
    unsigned int uiListBase; /* +0x5cd4 */
    tagListData* pCurListData; /* +0x5cd8 */
    tagGLlistcalls* pCurListCalls; /* +0x5cdc */
    tagGLlistcalls* pPreListCalls; /* +0x5ce0 */
    tagGLprimbuf* pCurPrimBuf; /* +0x5ce4 */
    anon_16* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf** ppCurPrimBufHead; /* +0x5cec */
    float (*pCurListVData)[4]; /* +0x5cf0 */
    int pCurListVCode; /* +0x5cf4 */
    int pCurListTexUnit; /* +0x5cf8 */
    tagGLlistpool ListPool; /* +0x5cfc */
    unsigned int nClientEnableBits; /* +0x5f08 */
    tagGLArrayInfo VertexArray; /* +0x5f0c */
    tagGLArrayInfo ColorArray[2]; /* +0x5f1c */
    tagGLArrayInfo NormalArray; /* +0x5f3c */
    tagGLArrayInfo TexArray[2]; /* +0x5f4c */
    tagGLArrayInfo IndexArray; /* +0x5f6c */
    tagGLArrayInfo EdgeFlagArray; /* +0x5f7c */
    unsigned int iCurClientTextureSet; /* +0x5f8c */
    unsigned int iFrameCount; /* +0x5f90 */
    unsigned int iDepthBuffer; /* +0x5f94 */
    unsigned int iDepthBufferBitDepth; /* +0x5f98 */
    unsigned int iFrameBufferBitDepth; /* +0x5f9c */
    unsigned int iFrameBuffer0; /* +0x5fa0 */
    unsigned int iFrameBuffer1; /* +0x5fa4 */
    unsigned int iFrameBufferFront; /* +0x5fa8 */
    unsigned int iFrameBufferBack; /* +0x5fac */
    int iPackAlignment; /* +0x5fb0 */
    unsigned char bFrameMode; /* +0x5fb4 */
    int iMipMapCoeff; /* +0x5fb8 */
    int iAlignMask; /* +0x5fbc */
    unsigned char bMapColor; /* +0x5fc0 */
    unsigned char bMapStencil; /* +0x5fc1 */
    int iIndexShift; /* +0x5fc4 */
    int iIndexOffset; /* +0x5fc8 */
    float fRedBias; /* +0x5fcc */
    float fRedScale; /* +0x5fd0 */
    float fGreenBias; /* +0x5fd4 */
    float fGreenScale; /* +0x5fd8 */
    float fBlueBias; /* +0x5fdc */
    float fBlueScale; /* +0x5fe0 */
    float fAlphaBias; /* +0x5fe4 */
    float fAlphaScale; /* +0x5fe8 */
    float fDepthBias; /* +0x5fec */
    float fDepthScale; /* +0x5ff0 */
    float fPixelZoomX; /* +0x5ff4 */
    float fPixelZoomY; /* +0x5ff8 */
    unsigned int nClipBits; /* +0x5ffc */
    int iMaxClipPlanes; /* +0x6000 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x6004..0x600f */
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*pCurMatrix)[4][4]; /* +0x6074 */
    float (*pCurStack)[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    unsigned char _extractor_padding_10[8]; /* explicit retail gap; +0x6088..0x608f */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    unsigned char _extractor_padding_11[8]; /* explicit retail gap; +0x60a8..0x60af */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    unsigned char _extractor_padding_12[7]; /* explicit retail gap; +0x6119..0x611f */
    float valistColor[2][4]; /* +0x6120 */
    float (*pvlistColor)[4]; /* +0x6140 */
    unsigned char _extractor_padding_04[12]; /* implicitly added by extractor; +0x6144..0x614f */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*pvlistTexCoord)[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*pvRasterTexCoord)[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    unsigned char _extractor_padding_13[11]; /* explicit retail gap; +0x61e5..0x61ef */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*pfvPackaeBSs)[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    unsigned char _extractor_padding_05[12]; /* implicitly added by extractor; +0x6334..0x633f */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    unsigned char _extractor_padding_06[12]; /* implicitly added by extractor; +0x67c4..0x67cf */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    unsigned char _extractor_padding_14[8]; /* explicit retail gap; +0x6978..0x697f */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*pTextureMatrix)[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*pTextureStack)[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*pVBuf)[4]; /* +0x6b9c */
    float (*pCBuf)[4]; /* +0x6ba0 */
    float (*pNBuf)[4]; /* +0x6ba4 */
    float (*pTBuf)[4]; /* +0x6ba8 */
    float (*pCBuf_b)[4]; /* +0x6bac */
    float (*pTBuf_b)[4]; /* +0x6bb0 */
    float (*pVIFDMABuf)[4]; /* +0x6bb4 */
    float (*pVIFDMABufUnaligned)[4]; /* +0x6bb8 */
    float (*pVIFInBuf)[4]; /* +0x6bbc */
    float (*pVIFOutBuf)[4]; /* +0x6bc0 */
    float (*pVIFIBufTail)[4]; /* +0x6bc4 */
    float (*pVIFOBufTail)[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*pmClipping)[4][4]; /* +0x6bdc */
    float (*pmNormal)[4][4]; /* +0x6be0 */
    float (*pmClippingScreen)[4][4]; /* +0x6be4 */
    float (*pmLocalScreen)[4][4]; /* +0x6be8 */
    float (*pmModelView)[4][4]; /* +0x6bec */
    float (*pvClampLimit)[4]; /* +0x6bf0 */
    int (*pClippingFlags)[4]; /* +0x6bf4 */
    anon_2* pGifTagFan; /* +0x6bf8 */
    float (*pmD)[4][4]; /* +0x6bfc */
    float (*pmVP)[4][4]; /* +0x6c00 */
    float (*pmS)[4][4]; /* +0x6c04 */
    float (*pmh)[4][4]; /* +0x6c08 */
    float (*pvAmbient)[4]; /* +0x6c0c */
    float (*pvEmission)[4]; /* +0x6c10 */
    float (*pvScreenScale)[4]; /* +0x6c14 */
    float (*pvColorRange)[4]; /* +0x6c18 */
    int pfAlpha; /* +0x6c1c */
    int pfShininess; /* +0x6c20 */
    int pnColorMatMasks; /* +0x6c24 */
    int pbFogging; /* +0x6c28 */
    int peFogMode; /* +0x6c2c */
    int pfFogDensity; /* +0x6c30 */
    int pfFogLinearStart; /* +0x6c34 */
    int pfFogLinearEnd; /* +0x6c38 */
    int pbTriangleFan; /* +0x6c3c */
    int pnClipMask; /* +0x6c40 */
    int piClipStep; /* +0x6c44 */
    int pbNormalize; /* +0x6c48 */
    int piReturnAddress; /* +0x6c4c */
    int piEntryAddress; /* +0x6c50 */
    int peClippingMode; /* +0x6c54 */
    int peUseClippingMode; /* +0x6c58 */
    anon_2* pGifTagBuf0; /* +0x6c5c */
    anon_2* pGifTagBuf1; /* +0x6c60 */
    int iCurBuf; /* +0x6c64 */
    float (*pVBuf0)[4]; /* +0x6c68 */
    float (*pNBuf0)[4]; /* +0x6c6c */
    float (*pCBuf0)[4]; /* +0x6c70 */
    float (*pTBuf0)[4]; /* +0x6c74 */
    float (*pCBuf0_b)[4]; /* +0x6c78 */
    float (*pTBuf0_b)[4]; /* +0x6c7c */
    float (*pVBuf1)[4]; /* +0x6c80 */
    float (*pNBuf1)[4]; /* +0x6c84 */
    float (*pCBuf1)[4]; /* +0x6c88 */
    float (*pTBuf1)[4]; /* +0x6c8c */
    float (*pCBuf1_b)[4]; /* +0x6c90 */
    float (*pTBuf1_b)[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char _extractor_padding_07[4]; /* implicitly added by extractor; +0x6c9c..0x6c9f */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

int totocam;
unsigned char GLI_g_bOutlineModeIsOn;
unsigned int GLI_g_ulOutlineColor;
float GLI_g_fOutLineWidth;
long GLI_bModifierVolumeActivated;
static MTH3D_tdstVector_ GLI_gs_stShadowLightDirectionWorld;
static unsigned int GLI_g_ulDynShadowLevel;
static float GLI_g_fDynShadowLenght;
static unsigned char GLI_g_bDynShadowClosed;
unsigned int GLI_g_ulDynShadowCpt;
unsigned char GLI_g_bDynShadowIsOn;
float GLI_g_a4fContourColor[4];
unsigned int GLI_g_CurrentShadowArray;
int GLI_g_CurrentShadowVertexArrayFront;
int GLI_g_CurrentShadowVertexArrayBack;
int GLI_g_GlobalShadowColorArray;
unsigned int GLI_g_GlobalShadowNextPointFront;
unsigned int GLI_g_GlobalShadowNextPointBack;
float g_fSize;
float GLI_g_EndOfCone[4];
int GLI_g_GlobalShadowVertexArray[2][2];
float GLI_a16_fTempWorldMatrix[16];
static unsigned int GLI_g_ulDynShadowBackFace;
float GLI_gs_stShadowLightDirectionObjMulLow[4];
float GLI_gs_stShadowLightDirectionObjMulHigh[4];
static float GLI_gs_stShadowLightDirectionObj[4];
static MTH3D_tdstVector_ GLI_gs_stShadowLightDirectionObjF;
static MTH3D_tdstVector_ GLI_gs_stShadowLightDirectionObjN;
static unsigned short GLI_gs_xShadowNumber;
MAT_tdstTransformation_ TOTOCAMMAT;
int GLI_g_hMaterialFor2Triangles;
tagGScontext g_gsContext;
tagGLcontext g_PS2glContext;
int GLI_g_HasVertexTransparency;
int GLI_g_hVAContainer;
int VAC_g_CurrentpT;
int VAC_g_CurrentpC;
int VAC_g_CurrentpV;
unsigned int VAC_g_CurrentNbSprites;
int VAC_g_NbSpritesLefts;
int AGO_g_WeirdAura;
float g_LeftHandedIdentityMatrix[16];
unsigned int GLI_g_ProjectionMode;
int GLI_BIG_GLOBALS_p_stObj;
int GLI_BIG_GLOBALS_GLI_aDEF_stEnvUV;
int GLI_BIG_GLOBALS_GLI_TurnedScaledDisplecedPoint;
MAT_tdstTransformation_ GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix;
int GLI_BIG_GLOBALS_gs_st_CurrentMatrix;
int g_p_stCurrentMatrix;
int GLI_BIG_GLOBALS_lHierachDrawMask;
int GLI_BIG_GLOBALS_p_stVpt;
int GLI_BIG_GLOBALS_gs_st_CameraMatrix;
int GLI_BIG_GLOBALS_p_stCurrentCamera;
unsigned int SCT_g_DrawingMirrored;
void (*PS2glLiberator)(void*);
int PS2glAllocator64;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 22–53 */
/* addr: 0x002b2260  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 22
 *   +0x0018 -> line 24
 *   +0x0028 -> line 25
 *   +0x0034 -> line 28
 *   +0x0038 -> line 30
 *   +0x0074 -> line 34
 *   +0x007c -> line 35
 *   +0x0080 -> line 36
 *   +0x0088 -> line 40
 *   +0x0094 -> line 41
 *   +0x009c -> line 48
 *   +0x00a4 -> line 49
 *   +0x00ac -> line 48
 *   +0x00b0 -> line 49
 *   +0x00b8 -> line 50
 *   +0x00cc -> line 53
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xCreateCamera(GLI_tdstCamera_** h_stCam, int lCameraMode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 914–1203 */
/* addr: 0x002b2340  size: 1104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 914
 *   +0x0004 -> line 940
 *   +0x0008 -> line 914
 *   +0x000c -> line 948
 *   +0x0010 -> line 914
 *   +0x0024 -> line 929
 *   +0x0028 -> line 914
 *   +0x002c -> line 933
 *   +0x0030 -> line 914
 *   +0x0040 -> line 940
 *   +0x0044 -> line 929
 *   +0x004c -> line 930
 *   +0x0054 -> line 947
 *   +0x0058 -> line 935
 *   +0x005c -> line 941
 *   +0x0060 -> line 929
 *   +0x0064 -> line 941
 *   +0x0068 -> line 929
 *   +0x0070 -> line 930
 *   +0x007c -> line 945
 *   +0x0080 -> line 940
 *   +0x0084 -> line 942
 *   +0x0088 -> line 948
 *   +0x008c -> line 942
 *   +0x0090 -> line 941
 *   +0x0094 -> line 943
 *   +0x009c -> line 942
 *   +0x00a0 -> line 943
 *   +0x00a4 -> line 945
 *   +0x00a8 -> line 948
 *   +0x00b0 -> line 951
 *   +0x00b4 -> line 957
 *   +0x00b8 -> line 956
 *   +0x00bc -> line 951
 *   +0x00c0 -> line 960
 *   +0x00c8 -> line 962
 *   +0x00d0 -> line 965
 *   +0x00d8 -> line 967
 *   +0x00dc -> line 968
 *   +0x00e0 -> line 969
 *   +0x00e4 -> line 970
 *   +0x00e8 -> line 971
 *   +0x00ec -> line 970
 *   +0x00f0 -> line 972
 *   +0x00f4 -> line 971
 *   +0x00f8 -> line 972
 *   +0x00fc -> line 977
 *   +0x0100 -> line 978
 *   +0x0104 -> line 979
 *   +0x0108 -> line 980
 *   +0x010c -> line 982
 *   +0x0110 -> line 983
 *   +0x0114 -> line 986
 *   +0x0118 -> line 987
 *   +0x011c -> line 990
 *   +0x0120 -> line 991
 *   +0x0124 -> line 992
 *   +0x0128 -> line 993
 *   +0x012c -> line 994
 *   +0x0130 -> line 995
 *   +0x0134 -> line 997
 *   +0x0138 -> line 998
 *   +0x013c -> line 1000
 *   +0x0140 -> line 1001
 *   +0x0144 -> line 1003
 *   +0x0148 -> line 1005
 *   +0x014c -> line 1006
 *   +0x0150 -> line 1010
 *   +0x0154 -> line 1013
 *   +0x0158 -> line 1014
 *   +0x015c -> line 1015
 *   +0x0160 -> line 1016
 *   +0x0164 -> line 1017
 *   +0x0168 -> line 1022
 *   +0x016c -> line 1023
 *   +0x0170 -> line 1024
 *   +0x0174 -> line 1025
 *   +0x0178 -> line 1028
 *   +0x017c -> line 1029
 *   +0x0180 -> line 1030
 *   +0x0184 -> line 1032
 *   +0x0188 -> line 1033
 *   +0x018c -> line 1035
 *   +0x0190 -> line 1036
 *   +0x0194 -> line 1038
 *   +0x0198 -> line 1039
 *   +0x019c -> line 1042
 *   +0x01a0 -> line 1043
 *   +0x01a4 -> line 1044
 *   +0x01a8 -> line 1045
 *   +0x01ac -> line 1046
 *   +0x01b0 -> line 1047
 *   +0x01b4 -> line 1048
 *   +0x01b8 -> line 1057
 *   +0x01bc -> line 1059
 *   +0x01c0 -> line 1061
 *   +0x01c4 -> line 1064
 *   +0x01fc -> line 1065
 *   +0x0230 -> line 1066
 *   +0x0264 -> line 1070
 *   +0x0268 -> line 1071
 *   +0x026c -> line 1072
 *   +0x0278 -> line 1095
 *   +0x027c -> line 1084
 *   +0x0280 -> line 1085
 *   +0x0288 -> line 1084
 *   +0x028c -> line 1086
 *   +0x0294 -> line 1085
 *   +0x0298 -> line 1087
 *   +0x02a0 -> line 1086
 *   +0x02a4 -> line 1088
 *   +0x02ac -> line 1087
 *   +0x02b0 -> line 1089
 *   +0x02b8 -> line 1088
 *   +0x02bc -> line 1090
 *   +0x02c4 -> line 1089
 *   +0x02c8 -> line 1091
 *   +0x02d0 -> line 1090
 *   +0x02d4 -> line 1097
 *   +0x02dc -> line 1115
 *   +0x02e4 -> line 1128
 *   +0x02ec -> line 1099
 *   +0x02f8 -> line 1101
 *   +0x0300 -> line 1102
 *   +0x0308 -> line 1105
 *   +0x030c -> line 1106
 *   +0x0310 -> line 1104
 *   +0x0314 -> line 1106
 *   +0x031c -> line 1105
 *   +0x0320 -> line 1104
 *   +0x0324 -> line 1105
 *   +0x0328 -> line 1107
 *   +0x0330 -> line 1110
 *   +0x0334 -> line 1111
 *   +0x0338 -> line 1110
 *   +0x033c -> line 1111
 *   +0x0340 -> line 1110
 *   +0x0344 -> line 1111
 *   +0x0348 -> line 1116
 *   +0x034c -> line 1117
 *   +0x0350 -> line 1118
 *   +0x0354 -> line 1119
 *   +0x0358 -> line 1120
 *   +0x035c -> line 1121
 *   +0x0360 -> line 1122
 *   +0x0364 -> line 1130
 *   +0x0368 -> line 1132
 *   +0x036c -> line 1133
 *   +0x0370 -> line 1134
 *   +0x0374 -> line 1136
 *   +0x0378 -> line 1137
 *   +0x037c -> line 1140
 *   +0x0380 -> line 1141
 *   +0x0384 -> line 1142
 *   +0x0388 -> line 1145
 *   +0x038c -> line 1146
 *   +0x0390 -> line 1147
 *   +0x0394 -> line 1148
 *   +0x0398 -> line 1149
 *   +0x039c -> line 1152
 *   +0x03a0 -> line 1154
 *   +0x03a4 -> line 1155
 *   +0x03a8 -> line 1156
 *   +0x03ac -> line 1157
 *   +0x03b0 -> line 1159
 *   +0x03b4 -> line 1160
 *   +0x03b8 -> line 1161
 *   +0x03bc -> line 1163
 *   +0x03c0 -> line 1164
 *   +0x03c4 -> line 1166
 *   +0x03c8 -> line 1167
 *   +0x03cc -> line 1168
 *   +0x03d0 -> line 1169
 *   +0x03d4 -> line 1171
 *   +0x03d8 -> line 1172
 *   +0x03dc -> line 1174
 *   +0x03e0 -> line 1175
 *   +0x03e4 -> line 1176
 *   +0x03e8 -> line 1177
 *   +0x03ec -> line 1178
 *   +0x03f0 -> line 1179
 *   +0x03f4 -> line 1180
 *   +0x03f8 -> line 1181
 *   +0x03fc -> line 1182
 *   +0x0400 -> line 1183
 *   +0x0404 -> line 1185
 *   +0x0408 -> line 1198
 *   +0x040c -> line 1195
 *   +0x0410 -> line 1198
 *   +0x0418 -> line 1200
 *   +0x041c -> line 1201
 *   +0x0420 -> line 1203
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawDynamicShadowElem_OnlyLonelyEdges(GEO_tdstElementIndexedTriangles_* p_stEIT)
{
    float Local_GLI_g_EndOfCone[4];
    float Local_GLI_gs_stShadowLightDirectionObjMulLow[4];
    char* p_xEdgeListMustDraw;
    char cValue;
    int retval;
    unsigned int* p_stPointIndexDW;
    unsigned short* param0;
    unsigned int ADC;
    unsigned int Local_GlobalShadowNextPointBack;
    unsigned int Local_GlobalShadowNextPointFront;
    float (*pBack)[4];
    float (*pFront)[4];
    GLI_tdstAligned3DVector_* pTurnedPoints;
    unsigned int NbEdgesLoop;
    GEO_tdstDoubledIndexDWORD_* p_ObjEdges;
    GEO_tdstDoubledIndexDWORD_* p_stEdges;
    float a4_stVecTable[6][4];
    unsigned int xIndexE3;
    unsigned int xIndexE2;
    unsigned int xIndexE1;
    unsigned int xIndexC;
    unsigned int xIndexB;
    unsigned int xIndexA;
    float Local_GLI_gs_stShadowLightDirectionObj[4];
    float (*pPointC)[4];
    float (*pPointB)[4];
    float (*pPointA)[4];
    char* p_cEdgeListFlags;
    char* p_cEdgeListDirection;
    unsigned int ulFaceCpt;
    /* TODO: decompile from asm/... */
}

void GLI_vDrawDynamicShadow(void);
MAT_tdstTransformation_* HIE_fn_pGetCurrentInCamCoordsMatrix(void);

static inline void GLI_vDrawObjectDynamicShadow(int p_stObj)
{
    GLI_BIG_GLOBALS_p_stObj = p_stObj;
    GLI_BIG_GLOBALS_gs_st_CameraMatrix = (int)&((GLI_tdstCamera_*)GLI_BIG_GLOBALS_p_stCurrentCamera)->stMatrix;
    TOTOCAMMAT = ((GLI_tdstCamera_*)GLI_BIG_GLOBALS_p_stCurrentCamera)->stMatrix;
    totocam = 1;
    GLI_BIG_GLOBALS_lHierachDrawMask = -1;
    GLI_BIG_GLOBALS_p_stObj = p_stObj;
    GLI_BIG_GLOBALS_p_stVpt = 0;
    GLI_BIG_GLOBALS_gs_st_CurrentMatrix = g_p_stCurrentMatrix;
    GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix = *HIE_fn_pGetCurrentInCamCoordsMatrix();
    GLI_vDrawDynamicShadow();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 869–871 */
/* addr: 0x002b2790  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 869
 *   +0x0004 -> line 870
 *   +0x0008 -> line 869
 *   +0x000c -> line 870
 *   +0x00b8 -> line 871
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawVisualSetDynamicShadow(GEO_tdstVisualSet_* p_stVisualSet)
{
    GLI_vDrawObjectDynamicShadow(*(int*)p_stVisualSet->d_p_stLodDefinitions);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 618–795 */
/* addr: 0x002b2860  size: 916 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 618
 *   +0x001c -> line 634
 *   +0x0020 -> line 629
 *   +0x0024 -> line 634
 *   +0x002c -> line 648
 *   +0x0034 -> line 649
 *   +0x0040 -> line 651
 *   +0x0050 -> line 700
 *   +0x0054 -> line 702
 *   +0x0058 -> line 700
 *   +0x0060 -> line 701
 *   +0x0068 -> line 702
 *   +0x0074 -> line 705
 *   +0x00e0 -> line 711
 *   +0x00f8 -> line 716
 *   +0x00fc -> line 718
 *   +0x0100 -> line 716
 *   +0x0104 -> line 745
 *   +0x0108 -> line 724
 *   +0x010c -> line 718
 *   +0x0110 -> line 724
 *   +0x0114 -> line 718
 *   +0x0118 -> line 725
 *   +0x011c -> line 745
 *   +0x0120 -> line 725
 *   +0x0124 -> line 731
 *   +0x0128 -> line 726
 *   +0x0130 -> line 731
 *   +0x0134 -> line 727
 *   +0x013c -> line 713
 *   +0x0140 -> line 745
 *   +0x0144 -> line 713
 *   +0x0148 -> line 714
 *   +0x0150 -> line 730
 *   +0x0154 -> line 715
 *   +0x015c -> line 722
 *   +0x0164 -> line 713
 *   +0x016c -> line 714
 *   +0x0174 -> line 715
 *   +0x017c -> line 719
 *   +0x0184 -> line 720
 *   +0x018c -> line 730
 *   +0x0194 -> line 722
 *   +0x0198 -> line 721
 *   +0x01a0 -> line 722
 *   +0x01a8 -> line 719
 *   +0x01b4 -> line 720
 *   +0x01c0 -> line 721
 *   +0x01cc -> line 731
 *   +0x01d8 -> line 730
 *   +0x01f0 -> line 731
 *   +0x0208 -> line 745
 *   +0x0218 -> line 754
 *   +0x0224 -> line 757
 *   +0x0228 -> line 763
 *   +0x0234 -> line 754
 *   +0x0238 -> line 755
 *   +0x0240 -> line 754
 *   +0x0244 -> line 756
 *   +0x024c -> line 754
 *   +0x0254 -> line 755
 *   +0x0264 -> line 756
 *   +0x0268 -> line 757
 *   +0x026c -> line 756
 *   +0x0270 -> line 757
 *   +0x0274 -> line 756
 *   +0x0278 -> line 759
 *   +0x027c -> line 763
 *   +0x0284 -> line 766
 *   +0x029c -> line 768
 *   +0x02a8 -> line 770
 *   +0x02e0 -> line 772
 *   +0x02fc -> line 774
 *   +0x0304 -> line 775
 *   +0x0318 -> line 789
 *   +0x0320 -> line 775
 *   +0x0328 -> line 789
 *   +0x034c -> line 791
 *   +0x0364 -> line 792
 *   +0x0374 -> line 795
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawDynamicShadow(void)
{
    float xNorm;
    unsigned int FirstPointOfShadowBack;
    unsigned int FirstPointOfShadowFront;
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    short xElementCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 419–429 */
/* addr: 0x002b2c00  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 419
 *   +0x0008 -> line 420
 *   +0x0014 -> line 422
 *   +0x0020 -> line 423
 *   +0x0030 -> line 424
 *   +0x0040 -> line 425
 *   +0x0050 -> line 426
 *   +0x005c -> line 427
 *   +0x0060 -> line 429
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vClearShadowVolumes(void)
{
    if (GLI_g_GlobalShadowColorArray)
    {
        PS2glLiberator((void*)GLI_g_GlobalShadowVertexArray[0][0]);
        PS2glLiberator((void*)GLI_g_GlobalShadowVertexArray[0][1]);
        PS2glLiberator((void*)GLI_g_GlobalShadowVertexArray[1][0]);
        PS2glLiberator((void*)GLI_g_GlobalShadowVertexArray[1][1]);
        PS2glLiberator((void*)GLI_g_GlobalShadowColorArray);
        GLI_g_GlobalShadowColorArray = 0;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 337–416 */
/* addr: 0x002b2c70  size: 1220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 337
 *   +0x0008 -> line 338
 *   +0x0014 -> line 342
 *   +0x0028 -> line 343
 *   +0x0038 -> line 346
 *   +0x004c -> line 347
 *   +0x005c -> line 349
 *   +0x0068 -> line 350
 *   +0x006c -> line 351
 *   +0x0074 -> line 355
 *   +0x0088 -> line 356
 *   +0x0098 -> line 358
 *   +0x00a4 -> line 359
 *   +0x00b4 -> line 360
 *   +0x00bc -> line 361
 *   +0x00c0 -> line 362
 *   +0x00c8 -> line 365
 *   +0x00dc -> line 366
 *   +0x00ec -> line 368
 *   +0x00f8 -> line 369
 *   +0x0108 -> line 370
 *   +0x0118 -> line 371
 *   +0x0120 -> line 372
 *   +0x0128 -> line 373
 *   +0x012c -> line 374
 *   +0x0134 -> line 377
 *   +0x0144 -> line 378
 *   +0x0150 -> line 380
 *   +0x0160 -> line 381
 *   +0x0170 -> line 382
 *   +0x0180 -> line 383
 *   +0x0190 -> line 384
 *   +0x0198 -> line 385
 *   +0x01a0 -> line 386
 *   +0x01a8 -> line 387
 *   +0x01ac -> line 388
 *   +0x01b4 -> line 393
 *   +0x01b8 -> line 395
 *   +0x01bc -> line 399
 *   +0x01c4 -> line 396
 *   +0x01c8 -> line 395
 *   +0x01cc -> line 396
 *   +0x01d4 -> line 401
 *   +0x01dc -> line 404
 *   +0x01e0 -> line 401
 *   +0x01e4 -> line 404
 *   +0x01e8 -> line 401
 *   +0x01ec -> line 402
 *   +0x01f0 -> line 401
 *   +0x01f4 -> line 402
 *   +0x01fc -> line 403
 *   +0x0200 -> line 402
 *   +0x0204 -> line 403
 *   +0x020c -> line 404
 *   +0x0210 -> line 403
 *   +0x0214 -> line 404
 *   +0x03f4 -> line 401
 *   +0x03f8 -> line 404
 *   +0x03fc -> line 405
 *   +0x0400 -> line 404
 *   +0x0404 -> line 405
 *   +0x0408 -> line 404
 *   +0x0440 -> line 405
 *   +0x0448 -> line 408
 *   +0x044c -> line 410
 *   +0x0450 -> line 412
 *   +0x0498 -> line 413
 *   +0x049c -> line 412
 *   +0x04a0 -> line 413
 *   +0x04a4 -> line 412
 *   +0x04a8 -> line 413
 *   +0x04b8 -> line 416
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vStartDrawingShadowVolume(void)
{
    unsigned int* pColor;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 329–332 */
/* addr: 0x002b3140  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 329
 *   +0x0004 -> line 330
 *   +0x0008 -> line 331
 *   +0x000c -> line 330
 *   +0x0010 -> line 331
 *   +0x0014 -> line 329
 *   +0x001c -> line 330
 *   +0x0028 -> line 331
 *   +0x002c -> line 330
 *   +0x0034 -> line 331
 *   +0x0038 -> line 332
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SwapShadowBuffers(void)
{
    GLI_g_CurrentShadowArray ^= 1;
    GLI_g_CurrentShadowVertexArrayFront = GLI_g_GlobalShadowVertexArray[GLI_g_CurrentShadowArray][0];
    GLI_g_CurrentShadowVertexArrayBack = GLI_g_GlobalShadowVertexArray[GLI_g_CurrentShadowArray][1];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 191–235 */
/* addr: 0x002b3180  size: 884 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 191
 *   +0x0024 -> line 200
 *   +0x0028 -> line 191
 *   +0x0030 -> line 202
 *   +0x0034 -> line 204
 *   +0x003c -> line 207
 *   +0x0054 -> line 209
 *   +0x0060 -> line 211
 *   +0x0098 -> line 215
 *   +0x00a0 -> line 213
 *   +0x00a4 -> line 215
 *   +0x00b8 -> line 218
 *   +0x00c0 -> line 220
 *   +0x0168 -> line 221
 *   +0x016c -> line 220
 *   +0x0170 -> line 221
 *   +0x0218 -> line 222
 *   +0x021c -> line 221
 *   +0x0220 -> line 222
 *   +0x02c8 -> line 224
 *   +0x02cc -> line 222
 *   +0x02d0 -> line 226
 *   +0x02d4 -> line 225
 *   +0x02d8 -> line 226
 *   +0x02e8 -> line 229
 *   +0x02f0 -> line 226
 *   +0x02f8 -> line 229
 *   +0x031c -> line 230
 *   +0x032c -> line 232
 *   +0x0330 -> line 230
 *   +0x0334 -> line 232
 *   +0x0344 -> line 234
 *   +0x034c -> line 235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vComputeEdges(void)
{
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    short xElementCounter;
    GEO_tdstDoubledIndexDWORD_* p_stListOfEdges;
    GEO_tdstTripledIndexDWORD_* p_stEdgeIndex;
    GEO_tdstTripledIndex_* p_stPointIndex;
    unsigned int ulNbrEdge;
    unsigned int ulFaceIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 154–159 */
/* addr: 0x002b3500  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 154
 *   +0x0004 -> line 157
 *   +0x0008 -> line 156
 *   +0x000c -> line 159
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetDynShadowParam(unsigned char bOnOff, void* pUnused, float fNewLenght, unsigned int ulNewLevel, unsigned char bCloseState)
{
    GLI_g_bDynShadowIsOn = bOnOff;
    GLI_g_fDynShadowLenght = fNewLenght;
    GLI_g_ulDynShadowLevel = ulNewLevel;
    GLI_g_bDynShadowClosed = bCloseState;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\ModifierVol.c lines 148–148 */
/* addr: 0x002b3520  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 148
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetDynShadowState(unsigned char bOnOff)
{
    GLI_g_bDynShadowIsOn = bOnOff;
}
