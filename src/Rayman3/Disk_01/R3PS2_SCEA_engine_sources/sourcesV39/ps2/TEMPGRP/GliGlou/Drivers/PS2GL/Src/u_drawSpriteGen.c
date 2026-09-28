/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_0 anon_0;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_32 anon_32;
typedef struct anon_36 anon_36;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct J_ParticleSprite_ J_ParticleSprite_;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_3 anon_3;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct anon_4 anon_4;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct tagListNode tagListNode;
typedef struct anon_7 anon_7;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_14 anon_14;
typedef struct anon_20 anon_20;
typedef struct anon_25 anon_25;
typedef struct anon_19 anon_19;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_16 anon_16;
typedef struct anon_34 anon_34;
typedef struct anon_41 anon_41;
typedef struct anon_29 anon_29;
typedef struct anon_35 anon_35;
typedef struct anon_23 anon_23;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct anon_8 anon_8;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct anon_9 anon_9;
typedef union anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct J_New_ParticleFace_ J_New_ParticleFace_;
typedef struct anon_12 anon_12;
typedef struct anon_13 anon_13;
typedef struct anon_15 anon_15;
typedef struct anon_17 anon_17;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_SpecificPS2GL_Structure_ GLI_SpecificPS2GL_Structure_;
typedef struct anon_18 anon_18;
typedef struct anon_21 anon_21;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct anon_22 anon_22;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_24 anon_24;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct anon_26 anon_26;
typedef struct anon_27 anon_27;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct anon_28 anon_28;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_30 anon_30;
typedef struct tagListData tagListData;
typedef struct anon_42 anon_42;
typedef struct anon_38 anon_38;
typedef struct anon_37 anon_37;
typedef struct anon_31 anon_31;
typedef struct anon_33 anon_33;
typedef struct anon_40 anon_40;
typedef struct anon_39 anon_39;
typedef struct tagGScontext tagGScontext;
typedef struct J_ParticleFace_ J_ParticleFace_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;

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

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
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

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
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

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_32 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_36 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_32 st_UVStaticPos; /* +0xc */
    anon_32 st_UVDynamicPos; /* +0x24 */
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
    anon_36 a_stMultiMaterial[4]; /* +0x88 */
};

struct J_ParticleSprite_ {
    float Pos[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float FaceNormal[4]; /* +0x20 */
    unsigned int Flags; /* +0x30 */
    unsigned int bFirst; /* +0x34 */
    unsigned int Pad[2]; /* +0x38 */
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

struct anon_3 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
};

struct anon_4 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
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

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct anon_7 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
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

struct anon_14 {
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

struct anon_20 {
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

struct anon_25 {
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
    anon_14 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_20 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_25 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_19 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_16 {
    unsigned long pad00; /* +0x0 */
};

struct anon_34 {
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

struct anon_29 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_35 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_23 {
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
    anon_16 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_34 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_41 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_29 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_35 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_23 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
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

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
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
};

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
    anon_13* pCurParamBegin; /* +0x5ce8 */
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

struct anon_8 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct anon_9 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

union anon_10 {
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

struct anon_11 {
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

struct J_New_ParticleFace_ {
    float pPoints[3][4]; /* +0x0 */
    float pColors[3][4]; /* +0x30 */
    float pUVs[3][2]; /* +0x60 */
    unsigned int Pad[2]; /* +0x78 */
};

struct anon_12 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_13 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct anon_15 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
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

struct GLI_SpecificPS2GL_Structure_ {
    unsigned int Flags; /* +0x0 */
    int pVertexArrayHandles; /* +0x4 */
    int glDisplayLists; /* +0x8 */
    unsigned short NbStages; /* +0xc */
    unsigned short WasOutlinedOrDynamicallyLit; /* +0xe */
    unsigned int LastFrame; /* +0x10 */
    MTH3D_tdstVector_ stMin; /* +0x14 */
    MTH3D_tdstVector_ stMax; /* +0x20 */
    unsigned int BoundingBoxValid; /* +0x2c */
    int pTempVAPos[4]; /* +0x30 */
    int pTempVAOther[4]; /* +0x40 */
    unsigned int SpriteGenArray; /* +0x50 */
};

struct anon_18 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_21 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct anon_22 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
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

struct anon_24 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct anon_26 {
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

struct anon_27 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct anon_28 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_30 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
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

struct anon_31 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_33 {
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
    anon_24 ST; /* +0x10 */
    anon_28 UV; /* +0x18 */
    anon_38 XYZF2; /* +0x20 */
    anon_37 XYZ2; /* +0x28 */
    anon_34 TEX0_1; /* +0x30 */
    anon_34 TEX0_2; /* +0x38 */
    anon_23 CLAMP_1; /* +0x40 */
    anon_23 CLAMP_2; /* +0x48 */
    anon_15 FOG; /* +0x50 */
    anon_38 XYZF3; /* +0x58 */
    anon_37 XYZ3; /* +0x60 */
    anon_41 TEX1_1; /* +0x68 */
    anon_41 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_31 XYOFFSET_1; /* +0x88 */
    anon_31 XYOFFSET_2; /* +0x90 */
    anon_4 PRMODECONT; /* +0x98 */
    anon_1 PRMODE; /* +0xa0 */
    anon_9 TEXCLUT; /* +0xa8 */
    anon_12 SCANMSK; /* +0xb0 */
    anon_29 MIPTBP1_1; /* +0xb8 */
    anon_29 MIPTBP1_2; /* +0xc0 */
    anon_35 MIPTBP2_1; /* +0xc8 */
    anon_35 MIPTBP2_2; /* +0xd0 */
    anon_3 TEXA; /* +0xd8 */
    anon_18 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_17 SCISSOR_1; /* +0xf0 */
    anon_17 SCISSOR_2; /* +0xf8 */
    anon_5 ALPHA_1; /* +0x100 */
    anon_5 ALPHA_2; /* +0x108 */
    anon_33 DIMX; /* +0x110 */
    anon_6 DTHE; /* +0x118 */
    anon_30 COLCLAMP; /* +0x120 */
    anon_26 TEST_1; /* +0x128 */
    anon_26 TEST_2; /* +0x130 */
    anon_40 PABE; /* +0x138 */
    anon_8 FBA_1; /* +0x140 */
    anon_8 FBA_2; /* +0x148 */
    anon_21 FRAME_1; /* +0x150 */
    anon_21 FRAME_2; /* +0x158 */
    anon_39 ZBUF_1; /* +0x160 */
    anon_39 ZBUF_2; /* +0x168 */
    anon_14 BITBLTBUF; /* +0x170 */
    anon_20 TRXPOS; /* +0x178 */
    anon_25 TRXREG; /* +0x180 */
    anon_19 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_22 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_27 LABEL; /* +0x1a8 */
    anon_11 ModFlgs; /* +0x1b0 */
    anon_11 GlobalModFlgs; /* +0x1b8 */
    anon_10 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_10* pqCurrent; /* +0x2224 */
    anon_2* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct J_ParticleFace_ {
    float pPoints[3][4]; /* +0x0 */
    float pColors[3][4]; /* +0x30 */
    float pUVs[3][2]; /* +0x60 */
    unsigned int Pad[2]; /* +0x78 */
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

unsigned int GLI_g_Generate3DSpriteGens;
unsigned int g_AnimatedSpriteGen;
unsigned int g_UseFullMatrix;
unsigned int GLI_g_SpriteGenCheckDistance;
unsigned int GLI_g_SpriteGenCheckSame;
unsigned int GLI_SpriteGenMustSkipEvery;
unsigned int GLI_SpriteGenMustDisplayEvery;
unsigned int GLI_g_SpriteGenNotInitialized;
int GLI_g_CurrentSpriteGenIndex;
int GLI_g_CurrentSpriteGenFrame;
float GLIPS2_g_FastSpriteGenDisplayBuffers[2][40960][4];
int GLI_g_p_stCurrentCam;
float GLI_g_CameraPosition[3];
static int gs_keepit2;
static int gs_keepit1;
float GLI_g_stYVecta[4];
float GLI_g_stXVecta[4];
tagGLcontext g_PS2glContext;
float a64_fSinTable[1024];
float g_ffFrameTime;
float YRESf;
float XRESf;
tagGScontext g_gsContext;
int GLI_g_AnimatedTextureToUse;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int GLI_BIG_GLOBALS_gs_st_CurrentMatrix;
float GLI_g_NegVect[4];
int GLI_BIG_GLOBALS_hCurrentMaterial;
int PS2glAllocator64;
int g_p_stLightMapUForNextObjectToDraw;
float GLI_g_SpriteGenNorme;
MAT_tdstTransformation_ GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix;
int GLI_g_hVAContainer;
int VAC_g_CurrentpT;
int VAC_g_CurrentpC;
int VAC_g_CurrentpV;
unsigned int VAC_g_CurrentNbSprites;
int VAC_g_NbSpritesLefts;
MTH3D_tdstVector_ GLI_g_stYVect;
MTH3D_tdstVector_ GLI_g_stXVect;
int g_p_stCurrentViewport;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 135–184 */
/* addr: 0x002b93b0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 135
 *   +0x0004 -> line 138
 *   +0x0008 -> line 135
 *   +0x000c -> line 138
 *   +0x0018 -> line 139
 *   +0x0028 -> line 141
 *   +0x0030 -> line 145
 *   +0x0034 -> line 143
 *   +0x0038 -> line 145
 *   +0x003c -> line 146
 *   +0x0040 -> line 151
 *   +0x0044 -> line 146
 *   +0x004c -> line 147
 *   +0x0054 -> line 148
 *   +0x005c -> line 149
 *   +0x0060 -> line 148
 *   +0x0064 -> line 153
 *   +0x006c -> line 156
 *   +0x0074 -> line 163
 *   +0x0078 -> line 158
 *   +0x007c -> line 159
 *   +0x0080 -> line 160
 *   +0x0084 -> line 163
 *   +0x008c -> line 164
 *   +0x0094 -> line 165
 *   +0x009c -> line 168
 *   +0x00a4 -> line 169
 *   +0x00ac -> line 173
 *   +0x00b8 -> line 176
 *   +0x0168 -> line 178
 *   +0x0170 -> line 180
 *   +0x0178 -> line 182
 *   +0x0184 -> line 184
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_PS2GL_PrepareSpecificDataForLevel(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 1633–1754 */
/* addr: 0x002b9540  size: 1044 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1633
 *   +0x0004 -> line 1640
 *   +0x0008 -> line 1633
 *   +0x000c -> line 1640
 *   +0x0010 -> line 1633
 *   +0x002c -> line 1640
 *   +0x0030 -> line 1633
 *   +0x0038 -> line 1640
 *   +0x0050 -> line 1641
 *   +0x005c -> line 1643
 *   +0x0060 -> line 1645
 *   +0x006c -> line 1649
 *   +0x0078 -> line 1650
 *   +0x007c -> line 1653
 *   +0x0084 -> line 1649
 *   +0x0088 -> line 1653
 *   +0x00a4 -> line 1654
 *   +0x00c4 -> line 1657
 *   +0x00cc -> line 1659
 *   +0x00d4 -> line 1663
 *   +0x0120 -> line 1665
 *   +0x0128 -> line 1668
 *   +0x0134 -> line 1676
 *   +0x013c -> line 1678
 *   +0x0140 -> line 1682
 *   +0x0154 -> line 1684
 *   +0x015c -> line 1685
 *   +0x0164 -> line 1688
 *   +0x016c -> line 1691
 *   +0x0174 -> line 1692
 *   +0x017c -> line 1698
 *   +0x0180 -> line 1694
 *   +0x0184 -> line 1698
 *   +0x018c -> line 1694
 *   +0x0190 -> line 1698
 *   +0x0244 -> line 1699
 *   +0x0248 -> line 1698
 *   +0x0258 -> line 1699
 *   +0x025c -> line 1698
 *   +0x0260 -> line 1699
 *   +0x0264 -> line 1698
 *   +0x026c -> line 1699
 *   +0x0270 -> line 1698
 *   +0x027c -> line 1699
 *   +0x0284 -> line 1710
 *   +0x0288 -> line 1709
 *   +0x028c -> line 1710
 *   +0x0290 -> line 1709
 *   +0x0294 -> line 1710
 *   +0x02d0 -> line 1714
 *   +0x02d4 -> line 1710
 *   +0x02dc -> line 1724
 *   +0x02e0 -> line 1711
 *   +0x02ec -> line 1724
 *   +0x02f0 -> line 1720
 *   +0x02f4 -> line 1725
 *   +0x02f8 -> line 1720
 *   +0x02fc -> line 1725
 *   +0x0300 -> line 1714
 *   +0x0304 -> line 1724
 *   +0x0308 -> line 1714
 *   +0x030c -> line 1715
 *   +0x0310 -> line 1724
 *   +0x0318 -> line 1715
 *   +0x0320 -> line 1720
 *   +0x0324 -> line 1724
 *   +0x032c -> line 1720
 *   +0x0330 -> line 1724
 *   +0x033c -> line 1725
 *   +0x0348 -> line 1727
 *   +0x0398 -> line 1729
 *   +0x039c -> line 1727
 *   +0x03a8 -> line 1728
 *   +0x03ac -> line 1727
 *   +0x03b4 -> line 1728
 *   +0x03b8 -> line 1727
 *   +0x03bc -> line 1729
 *   +0x03c8 -> line 1744
 *   +0x03dc -> line 1746
 *   +0x03e4 -> line 1752
 *   +0x03f0 -> line 1754
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_New_DrawSpriteGenList(GLI_tdstMaterial_* pMat, float (*pParticleList)[4], unsigned int NbSprites)
{
    float CosValAdd;
    float CosVal;
    unsigned char zTst;
    void* pAnimaterTextureToUseSaved;
    int RemainingNbSprites;
    unsigned int i;
    float ModelView[4][4];
    float sy;
    float sx;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 1359–1627 */
/* addr: 0x002b9960  size: 1992 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1359
 *   +0x003c -> line 1374
 *   +0x0040 -> line 1359
 *   +0x0044 -> line 1366
 *   +0x0048 -> line 1359
 *   +0x005c -> line 1380
 *   +0x0068 -> line 1382
 *   +0x006c -> line 1384
 *   +0x0078 -> line 1386
 *   +0x007c -> line 1387
 *   +0x0080 -> line 1384
 *   +0x0084 -> line 1386
 *   +0x008c -> line 1387
 *   +0x00b8 -> line 1389
 *   +0x00c0 -> line 1392
 *   +0x00dc -> line 1394
 *   +0x00e8 -> line 1396
 *   +0x0100 -> line 1397
 *   +0x0118 -> line 1400
 *   +0x0120 -> line 1404
 *   +0x0128 -> line 1407
 *   +0x0174 -> line 1411
 *   +0x017c -> line 1414
 *   +0x0184 -> line 1420
 *   +0x0188 -> line 1424
 *   +0x0194 -> line 1420
 *   +0x0198 -> line 1422
 *   +0x019c -> line 1424
 *   +0x01b0 -> line 1425
 *   +0x01d4 -> line 1427
 *   +0x01d8 -> line 1429
 *   +0x01dc -> line 1432
 *   +0x01e0 -> line 1427
 *   +0x01e4 -> line 1429
 *   +0x01f8 -> line 1430
 *   +0x01fc -> line 1429
 *   +0x0200 -> line 1432
 *   +0x0208 -> line 1436
 *   +0x021c -> line 1437
 *   +0x0224 -> line 1439
 *   +0x0228 -> line 1441
 *   +0x0230 -> line 1439
 *   +0x0258 -> line 1441
 *   +0x0290 -> line 1442
 *   +0x02d8 -> line 1443
 *   +0x0320 -> line 1444
 *   +0x0328 -> line 1451
 *   +0x0340 -> line 1452
 *   +0x0358 -> line 1453
 *   +0x0370 -> line 1478
 *   +0x0380 -> line 1480
 *   +0x039c -> line 1481
 *   +0x03ac -> line 1482
 *   +0x03b8 -> line 1483
 *   +0x03c0 -> line 1489
 *   +0x0400 -> line 1492
 *   +0x0414 -> line 1494
 *   +0x0420 -> line 1496
 *   +0x042c -> line 1498
 *   +0x0438 -> line 1503
 *   +0x043c -> line 1502
 *   +0x0440 -> line 1504
 *   +0x0444 -> line 1503
 *   +0x0448 -> line 1502
 *   +0x044c -> line 1503
 *   +0x0454 -> line 1502
 *   +0x0458 -> line 1504
 *   +0x045c -> line 1502
 *   +0x0460 -> line 1504
 *   +0x0464 -> line 1506
 *   +0x0478 -> line 1507
 *   +0x0490 -> line 1508
 *   +0x04a8 -> line 1509
 *   +0x04c0 -> line 1510
 *   +0x04d8 -> line 1511
 *   +0x04f0 -> line 1514
 *   +0x0508 -> line 1515
 *   +0x0520 -> line 1516
 *   +0x0538 -> line 1518
 *   +0x0540 -> line 1519
 *   +0x0548 -> line 1520
 *   +0x054c -> line 1522
 *   +0x0578 -> line 1523
 *   +0x05a8 -> line 1524
 *   +0x05d8 -> line 1527
 *   +0x05e0 -> line 1528
 *   +0x05e4 -> line 1527
 *   +0x05e8 -> line 1528
 *   +0x05ec -> line 1529
 *   +0x05f4 -> line 1531
 *   +0x0610 -> line 1533
 *   +0x0624 -> line 1534
 *   +0x0648 -> line 1538
 *   +0x0688 -> line 1540
 *   +0x069c -> line 1580
 *   +0x06a0 -> line 1598
 *   +0x06a4 -> line 1586
 *   +0x06a8 -> line 1598
 *   +0x06c4 -> line 1586
 *   +0x06cc -> line 1587
 *   +0x06d8 -> line 1589
 *   +0x06e4 -> line 1590
 *   +0x06f0 -> line 1592
 *   +0x06fc -> line 1593
 *   +0x0704 -> line 1595
 *   +0x0708 -> line 1598
 *   +0x0714 -> line 1600
 *   +0x0718 -> line 1601
 *   +0x0734 -> line 1603
 *   +0x0740 -> line 1605
 *   +0x0748 -> line 1606
 *   +0x074c -> line 1605
 *   +0x0750 -> line 1608
 *   +0x0758 -> line 1612
 *   +0x075c -> line 1613
 *   +0x0760 -> line 1624
 *   +0x0764 -> line 1622
 *   +0x0768 -> line 1624
 *   +0x0770 -> line 1622
 *   +0x0774 -> line 1624
 *   +0x077c -> line 1626
 *   +0x0784 -> line 1627
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSendEITToSpriteGeneratorNewSimple(GEO_tdstElementIndexedTriangles_* p_stEIT, ISI_tdstColor_* pRLIs, float* pLightMap, float (*pV1)[4], float (*pU1)[4], float** pVertexTransparency)
{
    ISI_tdstColor_* p_SRCColors;
    int Lum;
    float fb;
    float fg;
    float fr;
    float (*pParticles)[4];
    float (*pV)[4];
    float LM3;
    float LM2;
    float LM1;
    unsigned int NoScroll;
    float NoiseLevel;
    GEO_tdstTripledIndex_* p_stListOfFacesTripled;
    GLI_SpecificPS2GL_Structure_* pSpecif;
    unsigned int I1[3];
    unsigned int* pNbGenSave;
    unsigned int NbGenerated;
    J_New_ParticleFace_ Face;
    float DV;
    float DU;
    unsigned int bAdditive;
    float fAddV;
    float fAddU;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 1015–1318 */
/* addr: 0x002ba130  size: 3404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1015
 *   +0x0050 -> line 1022
 *   +0x0054 -> line 1015
 *   +0x0074 -> line 1035
 *   +0x007c -> line 1039
 *   +0x0084 -> line 1041
 *   +0x00a0 -> line 1046
 *   +0x00a4 -> line 1048
 *   +0x00b8 -> line 1049
 *   +0x00c0 -> line 1051
 *   +0x00c4 -> line 1053
 *   +0x00d8 -> line 1054
 *   +0x00e0 -> line 1056
 *   +0x00e4 -> line 1058
 *   +0x00e8 -> line 1059
 *   +0x00ec -> line 1058
 *   +0x00f0 -> line 1059
 *   +0x011c -> line 1061
 *   +0x0124 -> line 1064
 *   +0x013c -> line 1066
 *   +0x0140 -> line 1067
 *   +0x015c -> line 1068
 *   +0x0164 -> line 1078
 *   +0x0180 -> line 1080
 *   +0x018c -> line 1082
 *   +0x01a4 -> line 1083
 *   +0x01bc -> line 1085
 *   +0x01c8 -> line 1087
 *   +0x01d0 -> line 1098
 *   +0x01d4 -> line 1102
 *   +0x01e0 -> line 1098
 *   +0x01e4 -> line 1100
 *   +0x01e8 -> line 1102
 *   +0x01fc -> line 1103
 *   +0x0220 -> line 1107
 *   +0x022c -> line 1105
 *   +0x0230 -> line 1110
 *   +0x0234 -> line 1112
 *   +0x0238 -> line 1107
 *   +0x0244 -> line 1108
 *   +0x0248 -> line 1107
 *   +0x024c -> line 1112
 *   +0x0254 -> line 1117
 *   +0x0258 -> line 1118
 *   +0x025c -> line 1120
 *   +0x0264 -> line 1122
 *   +0x0268 -> line 1123
 *   +0x026c -> line 1122
 *   +0x0270 -> line 1123
 *   +0x0274 -> line 1124
 *   +0x027c -> line 1122
 *   +0x0280 -> line 1123
 *   +0x0284 -> line 1124
 *   +0x028c -> line 1125
 *   +0x0290 -> line 1127
 *   +0x02a0 -> line 1128
 *   +0x02b0 -> line 1129
 *   +0x02c0 -> line 1131
 *   +0x02d0 -> line 1132
 *   +0x02e0 -> line 1133
 *   +0x02f0 -> line 1135
 *   +0x0300 -> line 1136
 *   +0x0310 -> line 1137
 *   +0x0320 -> line 1158
 *   +0x0330 -> line 1160
 *   +0x0340 -> line 1163
 *   +0x0344 -> line 1161
 *   +0x0348 -> line 1163
 *   +0x034c -> line 1161
 *   +0x0354 -> line 1162
 *   +0x0360 -> line 1163
 *   +0x036c -> line 1165
 *   +0x0378 -> line 1166
 *   +0x0384 -> line 1167
 *   +0x0390 -> line 1168
 *   +0x039c -> line 1173
 *   +0x03a8 -> line 1170
 *   +0x03b4 -> line 1171
 *   +0x03c0 -> line 1172
 *   +0x03c8 -> line 1174
 *   +0x03d0 -> line 1177
 *   +0x03d8 -> line 1178
 *   +0x03f0 -> line 1181
 *   +0x03f8 -> line 1183
 *   +0x03fc -> line 1178
 *   +0x0410 -> line 1183
 *   +0x0414 -> line 1179
 *   +0x0418 -> line 1183
 *   +0x0420 -> line 1179
 *   +0x0424 -> line 1183
 *   +0x0428 -> line 1179
 *   +0x0430 -> line 1183
 *   +0x0434 -> line 1179
 *   +0x0440 -> line 1180
 *   +0x044c -> line 1183
 *   +0x0450 -> line 1180
 *   +0x0464 -> line 1181
 *   +0x0468 -> line 1183
 *   +0x0474 -> line 1181
 *   +0x048c -> line 1183
 *   +0x0610 -> line 1185
 *   +0x0618 -> line 1186
 *   +0x0630 -> line 1191
 *   +0x0634 -> line 1189
 *   +0x063c -> line 1186
 *   +0x0650 -> line 1191
 *   +0x0654 -> line 1187
 *   +0x0658 -> line 1191
 *   +0x0660 -> line 1187
 *   +0x0664 -> line 1191
 *   +0x0668 -> line 1187
 *   +0x0670 -> line 1191
 *   +0x0674 -> line 1187
 *   +0x0680 -> line 1188
 *   +0x068c -> line 1191
 *   +0x0690 -> line 1188
 *   +0x06a4 -> line 1189
 *   +0x06a8 -> line 1191
 *   +0x06b4 -> line 1189
 *   +0x06cc -> line 1191
 *   +0x0850 -> line 1193
 *   +0x0858 -> line 1194
 *   +0x0870 -> line 1199
 *   +0x0874 -> line 1197
 *   +0x087c -> line 1194
 *   +0x0890 -> line 1199
 *   +0x0894 -> line 1195
 *   +0x0898 -> line 1199
 *   +0x08a0 -> line 1195
 *   +0x08a4 -> line 1199
 *   +0x08a8 -> line 1195
 *   +0x08b0 -> line 1199
 *   +0x08b4 -> line 1195
 *   +0x08c0 -> line 1196
 *   +0x08cc -> line 1199
 *   +0x08d0 -> line 1196
 *   +0x08e4 -> line 1197
 *   +0x08e8 -> line 1199
 *   +0x08f4 -> line 1197
 *   +0x090c -> line 1199
 *   +0x0a90 -> line 1245
 *   +0x0a94 -> line 1203
 *   +0x0a98 -> line 1245
 *   +0x0aa4 -> line 1203
 *   +0x0aa8 -> line 1245
 *   +0x0aac -> line 1203
 *   +0x0ab0 -> line 1245
 *   +0x0abc -> line 1203
 *   +0x0ac4 -> line 1204
 *   +0x0ad0 -> line 1245
 *   +0x0ad8 -> line 1204
 *   +0x0ae0 -> line 1206
 *   +0x0af4 -> line 1207
 *   +0x0b08 -> line 1209
 *   +0x0b1c -> line 1210
 *   +0x0b2c -> line 1212
 *   +0x0b30 -> line 1245
 *   +0x0b3c -> line 1247
 *   +0x0b40 -> line 1248
 *   +0x0b58 -> line 1251
 *   +0x0b64 -> line 1253
 *   +0x0b6c -> line 1256
 *   +0x0b78 -> line 1258
 *   +0x0b80 -> line 1259
 *   +0x0b84 -> line 1258
 *   +0x0b88 -> line 1261
 *   +0x0b90 -> line 1265
 *   +0x0b94 -> line 1266
 *   +0x0b98 -> line 1272
 *   +0x0bb4 -> line 1277
 *   +0x0bbc -> line 1282
 *   +0x0bc0 -> line 1281
 *   +0x0bc8 -> line 1282
 *   +0x0bcc -> line 1284
 *   +0x0c48 -> line 1290
 *   +0x0c4c -> line 1288
 *   +0x0c50 -> line 1290
 *   +0x0c58 -> line 1292
 *   +0x0c64 -> line 1294
 *   +0x0c70 -> line 1295
 *   +0x0c7c -> line 1296
 *   +0x0c84 -> line 1299
 *   +0x0c90 -> line 1300
 *   +0x0c9c -> line 1302
 *   +0x0ca4 -> line 1305
 *   +0x0cb0 -> line 1307
 *   +0x0cbc -> line 1308
 *   +0x0cc8 -> line 1309
 *   +0x0cd0 -> line 1312
 *   +0x0cdc -> line 1313
 *   +0x0ce8 -> line 1317
 *   +0x0cf0 -> line 1318
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSendEITToSpriteGeneratorNew(GEO_tdstElementIndexedTriangles_* p_stEIT, ISI_tdstColor_* pRLIs, float* LightMaps, float (*pV1)[4], float (*pU1)[4], float** pVertexTransparency)
{
    float ratio;
    ISI_tdstColor_* param0;
    float (*pV)[4];
    float* LightMapU;
    float LM3;
    float LM2;
    float LM1;
    unsigned int NoScroll;
    float Norme;
    float NoiseLevel;
    GEO_tdstTripledIndex_* p_stListOfFacesTripled;
    GLI_SpecificPS2GL_Structure_* pSpecif;
    unsigned int I3;
    unsigned int I2;
    unsigned int I1;
    unsigned int* pNbGenSave;
    unsigned int NbGenerated;
    J_ParticleFace_ Face;
    float TempParticleList[4096][4];
    J_ParticleSprite_* ParticleList;
    float DV;
    float DU;
    float fAddV;
    float fAddU;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 976–1008 */
/* addr: 0x002bae80  size: 1496 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 981
 *   +0x0004 -> line 976
 *   +0x0008 -> line 983
 *   +0x000c -> line 981
 *   +0x0014 -> line 983
 *   +0x0024 -> line 981
 *   +0x0038 -> line 983
 *   +0x00a0 -> line 984
 *   +0x00b8 -> line 988
 *   +0x00bc -> line 987
 *   +0x00c0 -> line 988
 *   +0x00c8 -> line 987
 *   +0x00dc -> line 988
 *   +0x0168 -> line 989
 *   +0x016c -> line 990
 *   +0x0180 -> line 989
 *   +0x0194 -> line 990
 *   +0x0220 -> line 991
 *   +0x0224 -> line 992
 *   +0x0238 -> line 991
 *   +0x024c -> line 992
 *   +0x02d8 -> line 993
 *   +0x02dc -> line 994
 *   +0x02f0 -> line 993
 *   +0x0304 -> line 994
 *   +0x0390 -> line 995
 *   +0x0394 -> line 996
 *   +0x03a8 -> line 995
 *   +0x03bc -> line 996
 *   +0x0448 -> line 997
 *   +0x044c -> line 998
 *   +0x0460 -> line 997
 *   +0x0474 -> line 998
 *   +0x0500 -> line 999
 *   +0x0504 -> line 1000
 *   +0x0510 -> line 999
 *   +0x0514 -> line 1000
 *   +0x0518 -> line 999
 *   +0x051c -> line 1000
 *   +0x0520 -> line 999
 *   +0x052c -> line 1000
 *   +0x05b8 -> line 1002
 *   +0x05c4 -> line 1004
 *   +0x05c8 -> line 1005
 *   +0x05cc -> line 1004
 *   +0x05d0 -> line 1008
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#define SPRITEGEN_TRANSFORM_VERTEX(dest, src) \
    do { \
        (dest)->xX = GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_0.xX * (src)->xX + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_1.xX * (src)->xY + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_2.xX * (src)->xZ + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_3.xX; \
        (dest)->xY = GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_0.xY * (src)->xX + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_1.xY * (src)->xY + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_2.xY * (src)->xZ + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_3.xY; \
        (dest)->xZ = GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_0.xZ * (src)->xX + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_1.xZ * (src)->xY + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_2.xZ * (src)->xZ + GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix.stTransformMatrix.stCol_3.xZ; \
    } while (0)

float SpriteGenCalculateNorm(MTH3D_tdstVector_* p_stMin, MTH3D_tdstVector_* p_stMax)
{
    float MinNorme;
    MTH3D_tdstVector_ SourceVect;
    MTH3D_tdstVector_ DistVect;

    SourceVect = *p_stMin;
    SPRITEGEN_TRANSFORM_VERTEX(&DistVect, &SourceVect);
    MinNorme = DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ;

    SourceVect.xX = p_stMax->xX;
    SourceVect.xY = p_stMax->xY;
    SourceVect.xZ = p_stMax->xZ;
    SPRITEGEN_TRANSFORM_VERTEX(&DistVect, &SourceVect);
    if (DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ < MinNorme)
        MinNorme = DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ;

    SourceVect.xX = p_stMin->xX;
    SourceVect.xY = p_stMax->xY;
    SourceVect.xZ = p_stMax->xZ;
    SPRITEGEN_TRANSFORM_VERTEX(&DistVect, &SourceVect);
    if (DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ < MinNorme)
        MinNorme = DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ;

    SourceVect.xX = p_stMin->xX;
    SourceVect.xY = p_stMin->xY;
    SourceVect.xZ = p_stMax->xZ;
    SPRITEGEN_TRANSFORM_VERTEX(&DistVect, &SourceVect);
    if (DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ < MinNorme)
        MinNorme = DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ;

    SourceVect.xX = p_stMax->xX;
    SourceVect.xY = p_stMin->xY;
    SourceVect.xZ = p_stMax->xZ;
    SPRITEGEN_TRANSFORM_VERTEX(&DistVect, &SourceVect);
    if (DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ < MinNorme)
        MinNorme = DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ;

    SourceVect.xX = p_stMax->xX;
    SourceVect.xY = p_stMax->xY;
    SourceVect.xZ = p_stMin->xZ;
    SPRITEGEN_TRANSFORM_VERTEX(&DistVect, &SourceVect);
    if (DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ < MinNorme)
        MinNorme = DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ;

    SourceVect.xX = p_stMax->xX;
    SourceVect.xY = p_stMin->xY;
    SourceVect.xZ = p_stMin->xZ;
    SPRITEGEN_TRANSFORM_VERTEX(&DistVect, &SourceVect);
    if (DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ < MinNorme)
        MinNorme = DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ;

    SourceVect.xX = p_stMin->xX;
    SourceVect.xY = p_stMax->xY;
    SourceVect.xZ = p_stMin->xZ;
    SPRITEGEN_TRANSFORM_VERTEX(&DistVect, &SourceVect);
    if (DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ < MinNorme)
        MinNorme = DistVect.xX * DistVect.xX + DistVect.xY * DistVect.xY + DistVect.xZ * DistVect.xZ;

    GLI_g_CurrentSpriteGenIndex = 0;
    GLI_g_SpriteGenNorme = 10000;
    return __builtin_sqrt(MinNorme);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 774–954 */
/* addr: 0x002bb460  size: 1524 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 774
 *   +0x003c -> line 778
 *   +0x0040 -> line 774
 *   +0x0048 -> line 785
 *   +0x0050 -> line 787
 *   +0x0080 -> line 790
 *   +0x008c -> line 791
 *   +0x0094 -> line 793
 *   +0x00a0 -> line 794
 *   +0x00a8 -> line 799
 *   +0x00f0 -> line 801
 *   +0x00f4 -> line 800
 *   +0x00f8 -> line 801
 *   +0x00fc -> line 802
 *   +0x0104 -> line 803
 *   +0x0110 -> line 804
 *   +0x011c -> line 805
 *   +0x0128 -> line 807
 *   +0x0170 -> line 808
 *   +0x01b4 -> line 811
 *   +0x021c -> line 816
 *   +0x0228 -> line 817
 *   +0x022c -> line 820
 *   +0x0234 -> line 816
 *   +0x0238 -> line 820
 *   +0x023c -> line 811
 *   +0x0240 -> line 820
 *   +0x0254 -> line 821
 *   +0x0278 -> line 823
 *   +0x0294 -> line 841
 *   +0x0298 -> line 848
 *   +0x029c -> line 842
 *   +0x02a0 -> line 848
 *   +0x02a4 -> line 843
 *   +0x02a8 -> line 848
 *   +0x02ac -> line 845
 *   +0x02b0 -> line 848
 *   +0x02b8 -> line 850
 *   +0x02c0 -> line 851
 *   +0x02c4 -> line 864
 *   +0x02c8 -> line 852
 *   +0x02cc -> line 853
 *   +0x02d0 -> line 854
 *   +0x02d4 -> line 855
 *   +0x02d8 -> line 850
 *   +0x02e0 -> line 857
 *   +0x02e8 -> line 851
 *   +0x02f4 -> line 852
 *   +0x0300 -> line 859
 *   +0x0308 -> line 853
 *   +0x0314 -> line 857
 *   +0x031c -> line 854
 *   +0x0328 -> line 855
 *   +0x0334 -> line 859
 *   +0x033c -> line 858
 *   +0x0344 -> line 857
 *   +0x0348 -> line 864
 *   +0x034c -> line 860
 *   +0x0350 -> line 858
 *   +0x0354 -> line 861
 *   +0x0358 -> line 859
 *   +0x035c -> line 864
 *   +0x0368 -> line 891
 *   +0x036c -> line 870
 *   +0x0370 -> line 891
 *   +0x0374 -> line 867
 *   +0x0378 -> line 866
 *   +0x037c -> line 867
 *   +0x0388 -> line 870
 *   +0x0394 -> line 874
 *   +0x0398 -> line 872
 *   +0x039c -> line 875
 *   +0x03a0 -> line 876
 *   +0x03a4 -> line 878
 *   +0x03a8 -> line 888
 *   +0x03ac -> line 878
 *   +0x03c4 -> line 879
 *   +0x03e0 -> line 880
 *   +0x03fc -> line 881
 *   +0x0400 -> line 888
 *   +0x0404 -> line 890
 *   +0x0408 -> line 881
 *   +0x0418 -> line 890
 *   +0x041c -> line 881
 *   +0x0424 -> line 890
 *   +0x0458 -> line 894
 *   +0x045c -> line 890
 *   +0x0460 -> line 891
 *   +0x0470 -> line 894
 *   +0x0480 -> line 897
 *   +0x0484 -> line 896
 *   +0x0488 -> line 898
 *   +0x048c -> line 897
 *   +0x0490 -> line 898
 *   +0x0494 -> line 899
 *   +0x0498 -> line 900
 *   +0x049c -> line 901
 *   +0x04a0 -> line 902
 *   +0x04a4 -> line 903
 *   +0x04a8 -> line 904
 *   +0x04ac -> line 905
 *   +0x04b0 -> line 906
 *   +0x04b4 -> line 907
 *   +0x04b8 -> line 912
 *   +0x04bc -> line 909
 *   +0x04c0 -> line 913
 *   +0x04c4 -> line 912
 *   +0x04c8 -> line 914
 *   +0x04cc -> line 913
 *   +0x04d0 -> line 914
 *   +0x04d4 -> line 918
 *   +0x04d8 -> line 915
 *   +0x04dc -> line 918
 *   +0x04e0 -> line 919
 *   +0x04e8 -> line 920
 *   +0x04f0 -> line 924
 *   +0x04f4 -> line 921
 *   +0x04f8 -> line 925
 *   +0x04fc -> line 943
 *   +0x0500 -> line 924
 *   +0x0504 -> line 926
 *   +0x0508 -> line 925
 *   +0x050c -> line 926
 *   +0x0510 -> line 927
 *   +0x0514 -> line 942
 *   +0x0518 -> line 930
 *   +0x051c -> line 931
 *   +0x0520 -> line 932
 *   +0x0524 -> line 933
 *   +0x0528 -> line 944
 *   +0x052c -> line 936
 *   +0x0530 -> line 937
 *   +0x0534 -> line 938
 *   +0x0538 -> line 939
 *   +0x053c -> line 942
 *   +0x0540 -> line 943
 *   +0x0544 -> line 944
 *   +0x0548 -> line 945
 *   +0x054c -> line 946
 *   +0x0550 -> line 948
 *   +0x0560 -> line 951
 *   +0x0578 -> line 952
 *   +0x057c -> line 951
 *   +0x0584 -> line 952
 *   +0x0588 -> line 951
 *   +0x05ac -> line 952
 *   +0x05b4 -> line 954
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_DrawSpriteGenListAnimated(GLI_tdstMaterial_* pMat, J_ParticleSprite_* pParticleList, unsigned int NbSprites)
{
    int CurrentLine;
    MAT_tdstTransformation_ TempMatrix;
    float DifZ;
    float DifY;
    float DifX;
    float SumZ;
    float SumY;
    float SumX;
    float PosZ;
    float PosY;
    float PosX;
    float (*pV)[4];
    float (*pColor)[4];
    float (*pUV)[4];
    unsigned int AnimationData;
    unsigned int NbSpriteMax;
    unsigned int NbLines;
    unsigned int NbColumns;
    float dv;
    float du;
    float v0;
    float u0;
    int CurrentSprite;
    MAT_tdstTransformation_ InvertedCam;
    unsigned int NbSpritesReal;
    J_ParticleSprite_* p;
    float sy;
    float sx;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 602–770 */
/* addr: 0x002bbab0  size: 1308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 602
 *   +0x0034 -> line 607
 *   +0x0038 -> line 602
 *   +0x0048 -> line 617
 *   +0x0054 -> line 619
 *   +0x0084 -> line 622
 *   +0x00a4 -> line 623
 *   +0x00b0 -> line 625
 *   +0x00bc -> line 626
 *   +0x00c4 -> line 631
 *   +0x010c -> line 633
 *   +0x0110 -> line 632
 *   +0x0114 -> line 633
 *   +0x0118 -> line 634
 *   +0x0124 -> line 635
 *   +0x0130 -> line 636
 *   +0x013c -> line 637
 *   +0x0150 -> line 639
 *   +0x0194 -> line 640
 *   +0x01d4 -> line 643
 *   +0x023c -> line 649
 *   +0x0240 -> line 650
 *   +0x0244 -> line 653
 *   +0x0248 -> line 643
 *   +0x024c -> line 649
 *   +0x0254 -> line 643
 *   +0x0258 -> line 649
 *   +0x025c -> line 653
 *   +0x0278 -> line 654
 *   +0x0298 -> line 657
 *   +0x02b4 -> line 671
 *   +0x02b8 -> line 674
 *   +0x02bc -> line 671
 *   +0x02c0 -> line 678
 *   +0x02c4 -> line 681
 *   +0x02c8 -> line 679
 *   +0x02cc -> line 675
 *   +0x02d0 -> line 676
 *   +0x02d4 -> line 681
 *   +0x02e4 -> line 683
 *   +0x02ec -> line 684
 *   +0x0300 -> line 686
 *   +0x030c -> line 689
 *   +0x0314 -> line 688
 *   +0x0318 -> line 689
 *   +0x0320 -> line 690
 *   +0x0330 -> line 691
 *   +0x0334 -> line 692
 *   +0x0338 -> line 693
 *   +0x033c -> line 694
 *   +0x0340 -> line 698
 *   +0x0350 -> line 703
 *   +0x0360 -> line 705
 *   +0x0398 -> line 706
 *   +0x03a0 -> line 705
 *   +0x03a4 -> line 709
 *   +0x03a8 -> line 706
 *   +0x03ac -> line 705
 *   +0x03b0 -> line 706
 *   +0x03bc -> line 709
 *   +0x03d0 -> line 726
 *   +0x03d4 -> line 712
 *   +0x03d8 -> line 711
 *   +0x03dc -> line 713
 *   +0x03e0 -> line 712
 *   +0x03e4 -> line 713
 *   +0x03e8 -> line 714
 *   +0x03ec -> line 715
 *   +0x03f0 -> line 716
 *   +0x03f4 -> line 717
 *   +0x03f8 -> line 718
 *   +0x03fc -> line 719
 *   +0x0400 -> line 720
 *   +0x0404 -> line 721
 *   +0x0408 -> line 722
 *   +0x040c -> line 724
 *   +0x0410 -> line 730
 *   +0x0414 -> line 731
 *   +0x0418 -> line 736
 *   +0x041c -> line 737
 *   +0x0420 -> line 738
 *   +0x0424 -> line 739
 *   +0x0428 -> line 742
 *   +0x042c -> line 743
 *   +0x0430 -> line 744
 *   +0x0434 -> line 745
 *   +0x0438 -> line 746
 *   +0x043c -> line 747
 *   +0x0440 -> line 750
 *   +0x0444 -> line 751
 *   +0x0448 -> line 752
 *   +0x044c -> line 753
 *   +0x0450 -> line 754
 *   +0x0454 -> line 755
 *   +0x0458 -> line 761
 *   +0x045c -> line 762
 *   +0x0460 -> line 764
 *   +0x0470 -> line 765
 *   +0x0488 -> line 768
 *   +0x04a0 -> line 769
 *   +0x04a4 -> line 768
 *   +0x04ac -> line 769
 *   +0x04b0 -> line 768
 *   +0x04d4 -> line 769
 *   +0x04dc -> line 770
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_Draw3DSpriteGenListAnimated(GLI_tdstMaterial_* pMat, J_ParticleSprite_* pParticleList, unsigned int NbSprites)
{
    int CurrentLine;
    unsigned int FirstCheck;
    float (*pV)[4];
    float (*pColor)[4];
    float (*pUV)[4];
    unsigned int NbSpriteMax;
    unsigned int NbLines;
    unsigned int NbColumns;
    unsigned int AnimationData;
    float dv;
    float du;
    float v0;
    float u0;
    int CurrentSprite;
    MAT_tdstTransformation_ InvertedCam;
    unsigned int NbSpritesReal;
    J_ParticleSprite_* p;
    float sy;
    float sx;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 456–591 */
/* addr: 0x002bbfd0  size: 1220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 456
 *   +0x0010 -> line 460
 *   +0x0014 -> line 456
 *   +0x0058 -> line 463
 *   +0x0060 -> line 467
 *   +0x006c -> line 468
 *   +0x0070 -> line 471
 *   +0x0078 -> line 467
 *   +0x007c -> line 471
 *   +0x0098 -> line 472
 *   +0x00bc -> line 474
 *   +0x00d8 -> line 479
 *   +0x014c -> line 481
 *   +0x0150 -> line 479
 *   +0x01a4 -> line 481
 *   +0x01ac -> line 483
 *   +0x01b4 -> line 485
 *   +0x01c0 -> line 486
 *   +0x01c8 -> line 504
 *   +0x01cc -> line 508
 *   +0x01d0 -> line 505
 *   +0x01d4 -> line 500
 *   +0x01d8 -> line 506
 *   +0x01dc -> line 508
 *   +0x01e8 -> line 510
 *   +0x01f0 -> line 511
 *   +0x0204 -> line 513
 *   +0x020c -> line 516
 *   +0x0218 -> line 515
 *   +0x021c -> line 516
 *   +0x0224 -> line 517
 *   +0x0234 -> line 518
 *   +0x023c -> line 517
 *   +0x0240 -> line 520
 *   +0x0244 -> line 518
 *   +0x024c -> line 519
 *   +0x0254 -> line 518
 *   +0x0258 -> line 521
 *   +0x025c -> line 519
 *   +0x0268 -> line 522
 *   +0x026c -> line 523
 *   +0x0270 -> line 525
 *   +0x0280 -> line 529
 *   +0x0284 -> line 540
 *   +0x0288 -> line 530
 *   +0x028c -> line 527
 *   +0x0290 -> line 531
 *   +0x0294 -> line 533
 *   +0x0298 -> line 544
 *   +0x029c -> line 533
 *   +0x02b4 -> line 534
 *   +0x02b8 -> line 545
 *   +0x02bc -> line 546
 *   +0x02c0 -> line 534
 *   +0x02d8 -> line 535
 *   +0x02dc -> line 550
 *   +0x02e0 -> line 556
 *   +0x02e4 -> line 535
 *   +0x02fc -> line 536
 *   +0x0300 -> line 574
 *   +0x0304 -> line 551
 *   +0x0308 -> line 536
 *   +0x0320 -> line 539
 *   +0x0324 -> line 552
 *   +0x0328 -> line 539
 *   +0x032c -> line 537
 *   +0x0330 -> line 539
 *   +0x033c -> line 557
 *   +0x0340 -> line 539
 *   +0x0344 -> line 540
 *   +0x0350 -> line 575
 *   +0x0354 -> line 540
 *   +0x0360 -> line 544
 *   +0x0364 -> line 541
 *   +0x0368 -> line 545
 *   +0x036c -> line 546
 *   +0x0370 -> line 547
 *   +0x0374 -> line 558
 *   +0x0378 -> line 550
 *   +0x037c -> line 551
 *   +0x0380 -> line 552
 *   +0x0384 -> line 553
 *   +0x0388 -> line 576
 *   +0x038c -> line 556
 *   +0x0390 -> line 557
 *   +0x0394 -> line 558
 *   +0x0398 -> line 559
 *   +0x039c -> line 562
 *   +0x03a0 -> line 563
 *   +0x03a4 -> line 564
 *   +0x03a8 -> line 565
 *   +0x03ac -> line 568
 *   +0x03b0 -> line 569
 *   +0x03b4 -> line 570
 *   +0x03b8 -> line 571
 *   +0x03bc -> line 574
 *   +0x03c0 -> line 575
 *   +0x03c4 -> line 576
 *   +0x03c8 -> line 577
 *   +0x03cc -> line 578
 *   +0x03d0 -> line 580
 *   +0x03e4 -> line 584
 *   +0x03e8 -> line 582
 *   +0x03fc -> line 583
 *   +0x0400 -> line 584
 *   +0x0410 -> line 585
 *   +0x0420 -> line 588
 *   +0x0438 -> line 589
 *   +0x043c -> line 588
 *   +0x0444 -> line 589
 *   +0x0448 -> line 588
 *   +0x046c -> line 589
 *   +0x0474 -> line 591
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_Draw3DSpriteGenList(GLI_tdstMaterial_* pMat, J_ParticleSprite_* pParticleList, unsigned int NbSprites)
{
    unsigned int j;
    unsigned int FirstCheck;
    float DifZ;
    float DifY;
    float DifX;
    float SumZ;
    float SumY;
    float SumX;
    float PosZ;
    float PosY;
    float PosX;
    float (*pV)[4];
    float (*pColor)[4];
    float (*pUV)[4];
    MAT_tdstTransformation_ InvertedCam;
    unsigned int NbSpritesReal;
    J_ParticleSprite_* p;
    float sy;
    float sx;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 423–449 */
/* addr: 0x002bc4a0  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 423
 *   +0x0004 -> line 428
 *   +0x0008 -> line 423
 *   +0x000c -> line 430
 *   +0x0010 -> line 423
 *   +0x0020 -> line 430
 *   +0x0028 -> line 428
 *   +0x0030 -> line 430
 *   +0x0034 -> line 426
 *   +0x0038 -> line 430
 *   +0x0040 -> line 434
 *   +0x0048 -> line 438
 *   +0x0050 -> line 434
 *   +0x0054 -> line 435
 *   +0x0060 -> line 438
 *   +0x0068 -> line 436
 *   +0x0074 -> line 438
 *   +0x00b0 -> line 439
 *   +0x0134 -> line 442
 *   +0x013c -> line 443
 *   +0x0144 -> line 442
 *   +0x0148 -> line 444
 *   +0x0150 -> line 443
 *   +0x0154 -> line 446
 *   +0x015c -> line 444
 *   +0x0160 -> line 447
 *   +0x0168 -> line 446
 *   +0x016c -> line 448
 *   +0x0174 -> line 447
 *   +0x0178 -> line 442
 *   +0x0180 -> line 443
 *   +0x0188 -> line 444
 *   +0x0190 -> line 446
 *   +0x0198 -> line 447
 *   +0x01a0 -> line 448
 *   +0x01ac -> line 449
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_CalculateVectorsFor3DSpriteGen(MAT_tdstTransformation_* param0, J_ParticleSprite_* p, float sx, float sy)
{
    float xNorm;
    MTH3D_tdstVector_ V3;
    MTH3D_tdstVector_ V2;
    MTH3D_tdstVector_ V1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 352–419 */
/* addr: 0x002bc670  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 352
 *   +0x0004 -> line 357
 *   +0x0008 -> line 362
 *   +0x000c -> line 357
 *   +0x0010 -> line 362
 *   +0x001c -> line 355
 *   +0x0020 -> line 356
 *   +0x0024 -> line 362
 *   +0x0028 -> line 358
 *   +0x002c -> line 362
 *   +0x0034 -> line 364
 *   +0x0038 -> line 365
 *   +0x003c -> line 366
 *   +0x0040 -> line 367
 *   +0x0044 -> line 368
 *   +0x0048 -> line 370
 *   +0x004c -> line 372
 *   +0x0050 -> line 373
 *   +0x0054 -> line 374
 *   +0x0058 -> line 375
 *   +0x005c -> line 377
 *   +0x0060 -> line 378
 *   +0x0064 -> line 379
 *   +0x0068 -> line 381
 *   +0x006c -> line 382
 *   +0x0070 -> line 383
 *   +0x0074 -> line 384
 *   +0x0078 -> line 385
 *   +0x007c -> line 386
 *   +0x0080 -> line 387
 *   +0x0084 -> line 388
 *   +0x0088 -> line 389
 *   +0x008c -> line 390
 *   +0x0090 -> line 391
 *   +0x0094 -> line 395
 *   +0x009c -> line 396
 *   +0x00a0 -> line 397
 *   +0x00a4 -> line 400
 *   +0x00ac -> line 401
 *   +0x00b0 -> line 402
 *   +0x00b4 -> line 405
 *   +0x00b8 -> line 406
 *   +0x00bc -> line 419
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_CalculateVectorsFor3DSpriteGenVU0(MAT_tdstTransformation_* pInvertedCam, J_ParticleSprite_* p, float sx, float sy)
{
    float V1[4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawSpriteGen.c lines 344–347 */
/* addr: 0x002bc740  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 344
 *   +0x0008 -> line 345
 *   +0x000c -> line 347
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_CalculateInverseCamMat(MAT_tdstTransformation_* pInvertedCam, GLD_tdstViewportAttributes_* _p_stViewport)
{
    GLI_tdstCamera_* p_stCam;

    p_stCam = *(GLI_tdstCamera_**)_p_stViewport->p_vSpecificToXD;
    GLI_g_p_stCurrentCam = (int)p_stCam;
    MAT_fn_vInvert(pInvertedCam, (MAT_tdstTransformation_* )((char*)p_stCam + 0x10));
}
