/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct AGO2_BeeParticle_ AGO2_BeeParticle_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct AGO2_RainParticle_ AGO2_RainParticle_;
typedef struct anon_0 anon_0;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct AGO2_LeavesParticle_ AGO2_LeavesParticle_;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_42 anon_42;
typedef struct anon_7 anon_7;
typedef struct anon_22 anon_22;
typedef struct anon_26 anon_26;
typedef struct anon_38 anon_38;
typedef struct anon_36 anon_36;
typedef struct anon_32 anon_32;
typedef struct anon_21 anon_21;
typedef struct anon_13 anon_13;
typedef struct anon_41 anon_41;
typedef struct anon_29 anon_29;
typedef struct anon_4 anon_4;
typedef struct anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct anon_27 anon_27;
typedef struct anon_35 anon_35;
typedef struct anon_3 anon_3;
typedef struct anon_16 anon_16;
typedef struct anon_15 anon_15;
typedef struct anon_5 anon_5;
typedef struct anon_30 anon_30;
typedef struct anon_6 anon_6;
typedef struct anon_28 anon_28;
typedef struct anon_24 anon_24;
typedef struct anon_40 anon_40;
typedef struct anon_9 anon_9;
typedef struct anon_19 anon_19;
typedef struct anon_39 anon_39;
typedef struct anon_12 anon_12;
typedef struct anon_18 anon_18;
typedef struct anon_23 anon_23;
typedef struct anon_17 anon_17;
typedef struct anon_20 anon_20;
typedef struct anon_25 anon_25;
typedef struct anon_34 anon_34;
typedef union anon_33 anon_33;
typedef struct tagGScontext tagGScontext;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tagListNode tagListNode;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_14 anon_14;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct AGO2_FlowParticle_ AGO2_FlowParticle_;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_8 anon_8;
typedef struct tagstVIFCode tagstVIFCode;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tagListData tagListData;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_31 anon_31;
typedef struct anon_37 anon_37;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct AuraSprite_ AuraSprite_;

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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct AGO2_BeeParticle_ {
    float Position[4]; /* +0x0 */
    float Direction[4]; /* +0x10 */
    float xTransparency; /* +0x20 */
    unsigned int Flags; /* +0x24 */
    unsigned int Pads[2]; /* +0x28 */
    float PreviousPosition[4]; /* +0x30 */
    float Parameters[4]; /* +0x40 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct AGO2_RainParticle_ {
    float Position[4]; /* +0x0 */
    float Direction[4]; /* +0x10 */
    float xTransparency; /* +0x20 */
    unsigned int Flags; /* +0x24 */
    unsigned int Pads[2]; /* +0x28 */
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

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct AGO2_LeavesParticle_ {
    float Position[4]; /* +0x0 */
    float Direction[4]; /* +0x10 */
    float StillPosition[4]; /* +0x20 */
    float V1[4]; /* +0x30 */
    float V2[4]; /* +0x40 */
    float UsedV1[4]; /* +0x50 */
    float UsedV2[4]; /* +0x60 */
    float Parameters[4]; /* +0x70 */
    float xTransparency; /* +0x80 */
    unsigned int Flags; /* +0x84 */
    unsigned int Pads[2]; /* +0x88 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*) pData[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    anon_2 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
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

struct anon_7 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_22 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_26 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_38 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_36 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_32 {
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

struct anon_21 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_13 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
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
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_4 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_10 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_11 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_27 {
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

struct anon_3 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_16 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_15 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
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

struct anon_30 {
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

struct anon_6 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_28 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_24 {
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

struct anon_40 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_9 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_19 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_39 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_12 {
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

struct anon_18 {
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

struct anon_23 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_17 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_20 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_25 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_34 {
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

union anon_33 {
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

struct tagGScontext {
    anon_42 PRIM; /* +0x0 */
    anon_7 RGBAQ; /* +0x8 */
    anon_22 ST; /* +0x10 */
    anon_26 UV; /* +0x18 */
    anon_38 XYZF2; /* +0x20 */
    anon_36 XYZ2; /* +0x28 */
    anon_32 TEX0_1; /* +0x30 */
    anon_32 TEX0_2; /* +0x38 */
    anon_21 CLAMP_1; /* +0x40 */
    anon_21 CLAMP_2; /* +0x48 */
    anon_13 FOG; /* +0x50 */
    anon_38 XYZF3; /* +0x58 */
    anon_36 XYZ3; /* +0x60 */
    anon_41 TEX1_1; /* +0x68 */
    anon_41 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_29 XYOFFSET_1; /* +0x88 */
    anon_29 XYOFFSET_2; /* +0x90 */
    anon_4 PRMODECONT; /* +0x98 */
    anon_1 PRMODE; /* +0xa0 */
    anon_10 TEXCLUT; /* +0xa8 */
    anon_11 SCANMSK; /* +0xb0 */
    anon_27 MIPTBP1_1; /* +0xb8 */
    anon_27 MIPTBP1_2; /* +0xc0 */
    anon_35 MIPTBP2_1; /* +0xc8 */
    anon_35 MIPTBP2_2; /* +0xd0 */
    anon_3 TEXA; /* +0xd8 */
    anon_16 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_15 SCISSOR_1; /* +0xf0 */
    anon_15 SCISSOR_2; /* +0xf8 */
    anon_5 ALPHA_1; /* +0x100 */
    anon_5 ALPHA_2; /* +0x108 */
    anon_30 DIMX; /* +0x110 */
    anon_6 DTHE; /* +0x118 */
    anon_28 COLCLAMP; /* +0x120 */
    anon_24 TEST_1; /* +0x128 */
    anon_24 TEST_2; /* +0x130 */
    anon_40 PABE; /* +0x138 */
    anon_9 FBA_1; /* +0x140 */
    anon_9 FBA_2; /* +0x148 */
    anon_19 FRAME_1; /* +0x150 */
    anon_19 FRAME_2; /* +0x158 */
    anon_39 ZBUF_1; /* +0x160 */
    anon_39 ZBUF_2; /* +0x168 */
    anon_12 BITBLTBUF; /* +0x170 */
    anon_18 TRXPOS; /* +0x178 */
    anon_23 TRXREG; /* +0x180 */
    anon_17 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_20 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_25 LABEL; /* +0x1a8 */
    anon_34 ModFlgs; /* +0x1b0 */
    anon_34 GlobalModFlgs; /* +0x1b8 */
    anon_33 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_33* pqCurrent; /* +0x2224 */
    anon_2* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
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

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
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

struct tagGsLoadImage {
    anon_2 gifTag; /* +0x0 */
    anon_12 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_18 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_23 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_17 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_14 {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    anon_2 gifTag; /* +0x0 */
    anon_14 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_32 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_41 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_27 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_35 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_21 clamp; /* +0x60 */
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
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
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
    anon_8* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf* ppCurPrimBufHead; /* +0x5cec */
    float (*) pCurListVData[4]; /* +0x5cf0 */
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
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*) pCurMatrix[4][4]; /* +0x6074 */
    float (*) pCurStack[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*) pvcurColor[4]; /* +0x60d0 */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*) pvcurTextCoord[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    float valistColor[2][4]; /* +0x6120 */
    float (*) pvlistColor[4]; /* +0x6140 */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*) pvlistTexCoord[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*) pvRasterTexCoord[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*) pfvPackaeBSs[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*) pTextureMatrix[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*) pTextureStack[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*) pVBuf[4]; /* +0x6b9c */
    float (*) pCBuf[4]; /* +0x6ba0 */
    float (*) pNBuf[4]; /* +0x6ba4 */
    float (*) pTBuf[4]; /* +0x6ba8 */
    float (*) pCBuf_b[4]; /* +0x6bac */
    float (*) pTBuf_b[4]; /* +0x6bb0 */
    float (*) pVIFDMABuf[4]; /* +0x6bb4 */
    float (*) pVIFDMABufUnaligned[4]; /* +0x6bb8 */
    float (*) pVIFInBuf[4]; /* +0x6bbc */
    float (*) pVIFOutBuf[4]; /* +0x6bc0 */
    float (*) pVIFIBufTail[4]; /* +0x6bc4 */
    float (*) pVIFOBufTail[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*) pmClipping[4][4]; /* +0x6bdc */
    float (*) pmNormal[4][4]; /* +0x6be0 */
    float (*) pmClippingScreen[4][4]; /* +0x6be4 */
    float (*) pmLocalScreen[4][4]; /* +0x6be8 */
    float (*) pmModelView[4][4]; /* +0x6bec */
    float (*) pvClampLimit[4]; /* +0x6bf0 */
    int (*) pClippingFlags[4]; /* +0x6bf4 */
    anon_2* pGifTagFan; /* +0x6bf8 */
    float (*) pmD[4][4]; /* +0x6bfc */
    float (*) pmVP[4][4]; /* +0x6c00 */
    float (*) pmS[4][4]; /* +0x6c04 */
    float (*) pmh[4][4]; /* +0x6c08 */
    float (*) pvAmbient[4]; /* +0x6c0c */
    float (*) pvEmission[4]; /* +0x6c10 */
    float (*) pvScreenScale[4]; /* +0x6c14 */
    float (*) pvColorRange[4]; /* +0x6c18 */
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
    float (*) pVBuf0[4]; /* +0x6c68 */
    float (*) pNBuf0[4]; /* +0x6c6c */
    float (*) pCBuf0[4]; /* +0x6c70 */
    float (*) pTBuf0[4]; /* +0x6c74 */
    float (*) pCBuf0_b[4]; /* +0x6c78 */
    float (*) pTBuf0_b[4]; /* +0x6c7c */
    float (*) pVBuf1[4]; /* +0x6c80 */
    float (*) pNBuf1[4]; /* +0x6c84 */
    float (*) pCBuf1[4]; /* +0x6c88 */
    float (*) pTBuf1[4]; /* +0x6c8c */
    float (*) pCBuf1_b[4]; /* +0x6c90 */
    float (*) pTBuf1_b[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

struct AGO2_FlowParticle_ {
    float Position[4]; /* +0x0 */
    float Direction[4]; /* +0x10 */
    float xTransparency; /* +0x20 */
    unsigned int Flags; /* +0x24 */
    unsigned int Pads[2]; /* +0x28 */
    float PreviousPosition[4]; /* +0x30 */
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

struct anon_8 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
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

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*) pDmaBuffer[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*) pLastExecDmaBuffer[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_31 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_37 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_31 st_UVStaticPos; /* +0xc */
    anon_31 st_UVDynamicPos; /* +0x24 */
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
    anon_37 a_stMultiMaterial[4]; /* +0x88 */
};

struct AuraSprite_ {
    MTH3D_tdstVector_ PositionInCameraCoordinates; /* +0x0 */
    float sx; /* +0xc */
    float sy; /* +0x10 */
    float Transparency; /* +0x14 */
};

int GLI_g_NumberOfAuraSprites;
int g_bAGO2IsOpaque;
int GLI_g_RainMaterial;
AuraSprite_ GLI_g_AuraTab[200];
int GLI_g_hVAContainer;
float GLI_BIG_GLOBALS_xGlobalAlpha;
unsigned int GLI_g_CurrentStage;
int VAC_g_CurrentpT;
int VAC_g_CurrentpC;
int VAC_g_CurrentpV;
unsigned int VAC_g_CurrentNbSprites;
int VAC_g_NbSpritesLefts;
int GLI_g_p_stCurrentCam;
float GLI_g_NegVect[4];
MTH3D_tdstVector_ GLI_g_stYVect;
MTH3D_tdstVector_ GLI_g_stXVect;
tagGLcontext g_PS2glContext;
tagGScontext g_gsContext;
int GLI_BIG_GLOBALS_lCurrentDrawMask;
int GLI_BIG_GLOBALS_lHierachDrawMask;
unsigned int GLI_g_xSaveDrawMsk;
int GLI_BIG_GLOBALS_hCurrentMaterial;
unsigned char g_bHasTextureAnimationFinished;
unsigned char g_bOneShotAnim;
float g_BaseTimeForParticleAnimation;
unsigned char g_bTakeCareOfAnimationCoordination;
float GLI_g_stYVecta[4];
float GLI_g_stXVecta[4];
unsigned int GLI_g_ProjectionMode;
float g_LeftHandedIdentityMatrix[16];
int AGO_g_VisualMaterialForAuras;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 126–126 */
/* addr: 0x002b3660  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLD_fn_vInitSmoothSynchro(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 1499–1499 */
/* addr: 0x002b3670  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1499
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vDisplayWall(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 1182–1458 */
/* addr: 0x002b3680  size: 2024 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1182
 *   +0x003c -> line 1184
 *   +0x0040 -> line 1182
 *   +0x005c -> line 1192
 *   +0x0064 -> line 1194
 *   +0x0094 -> line 1196
 *   +0x00a8 -> line 1199
 *   +0x00d0 -> line 1201
 *   +0x00fc -> line 1202
 *   +0x0104 -> line 1206
 *   +0x0108 -> line 1210
 *   +0x010c -> line 1207
 *   +0x0110 -> line 1208
 *   +0x0114 -> line 1210
 *   +0x011c -> line 1213
 *   +0x0120 -> line 1220
 *   +0x0124 -> line 1214
 *   +0x0128 -> line 1223
 *   +0x012c -> line 1215
 *   +0x0130 -> line 1216
 *   +0x0134 -> line 1217
 *   +0x0138 -> line 1218
 *   +0x013c -> line 1213
 *   +0x0140 -> line 1214
 *   +0x0144 -> line 1215
 *   +0x0148 -> line 1216
 *   +0x014c -> line 1217
 *   +0x0150 -> line 1223
 *   +0x0158 -> line 1235
 *   +0x015c -> line 1225
 *   +0x0168 -> line 1227
 *   +0x0170 -> line 1231
 *   +0x0174 -> line 1232
 *   +0x0178 -> line 1229
 *   +0x017c -> line 1233
 *   +0x0180 -> line 1255
 *   +0x0184 -> line 1235
 *   +0x0190 -> line 1261
 *   +0x0194 -> line 1236
 *   +0x0198 -> line 1237
 *   +0x01a4 -> line 1256
 *   +0x01a8 -> line 1238
 *   +0x01ac -> line 1239
 *   +0x01b8 -> line 1262
 *   +0x01bc -> line 1240
 *   +0x01c0 -> line 1241
 *   +0x01cc -> line 1255
 *   +0x01d0 -> line 1242
 *   +0x01d4 -> line 1243
 *   +0x01e0 -> line 1256
 *   +0x01e4 -> line 1244
 *   +0x01e8 -> line 1245
 *   +0x01f4 -> line 1286
 *   +0x01f8 -> line 1246
 *   +0x01fc -> line 1248
 *   +0x0200 -> line 1246
 *   +0x0204 -> line 1248
 *   +0x020c -> line 1257
 *   +0x0210 -> line 1248
 *   +0x0214 -> line 1249
 *   +0x0220 -> line 1263
 *   +0x0224 -> line 1249
 *   +0x0228 -> line 1250
 *   +0x0234 -> line 1257
 *   +0x0238 -> line 1250
 *   +0x023c -> line 1251
 *   +0x0248 -> line 1261
 *   +0x024c -> line 1251
 *   +0x0250 -> line 1252
 *   +0x025c -> line 1267
 *   +0x0260 -> line 1252
 *   +0x0264 -> line 1253
 *   +0x0270 -> line 1285
 *   +0x0274 -> line 1253
 *   +0x027c -> line 1255
 *   +0x0280 -> line 1256
 *   +0x0284 -> line 1257
 *   +0x0288 -> line 1258
 *   +0x028c -> line 1287
 *   +0x0290 -> line 1261
 *   +0x0294 -> line 1262
 *   +0x029c -> line 1263
 *   +0x02a4 -> line 1264
 *   +0x02a8 -> line 1268
 *   +0x02ac -> line 1267
 *   +0x02b0 -> line 1269
 *   +0x02b4 -> line 1268
 *   +0x02b8 -> line 1269
 *   +0x02bc -> line 1270
 *   +0x02c0 -> line 1273
 *   +0x02c4 -> line 1274
 *   +0x02c8 -> line 1275
 *   +0x02cc -> line 1276
 *   +0x02d0 -> line 1279
 *   +0x02d4 -> line 1280
 *   +0x02d8 -> line 1281
 *   +0x02dc -> line 1282
 *   +0x02e0 -> line 1285
 *   +0x02e4 -> line 1286
 *   +0x02e8 -> line 1287
 *   +0x02ec -> line 1288
 *   +0x02f0 -> line 1289
 *   +0x02f4 -> line 1290
 *   +0x02f8 -> line 1292
 *   +0x0308 -> line 1295
 *   +0x0328 -> line 1297
 *   +0x0334 -> line 1295
 *   +0x0340 -> line 1297
 *   +0x0344 -> line 1295
 *   +0x0348 -> line 1297
 *   +0x034c -> line 1295
 *   +0x0364 -> line 1297
 *   +0x037c -> line 1301
 *   +0x03a8 -> line 1304
 *   +0x03ac -> line 1303
 *   +0x03b0 -> line 1305
 *   +0x03b4 -> line 1306
 *   +0x03b8 -> line 1323
 *   +0x03c0 -> line 1325
 *   +0x03cc -> line 1327
 *   +0x03d4 -> line 1335
 *   +0x03e4 -> line 1329
 *   +0x03e8 -> line 1335
 *   +0x03ec -> line 1331
 *   +0x03f0 -> line 1332
 *   +0x03f4 -> line 1333
 *   +0x03f8 -> line 1335
 *   +0x0414 -> line 1337
 *   +0x0420 -> line 1343
 *   +0x0424 -> line 1339
 *   +0x0428 -> line 1337
 *   +0x0430 -> line 1340
 *   +0x0434 -> line 1341
 *   +0x0438 -> line 1337
 *   +0x0440 -> line 1339
 *   +0x0444 -> line 1347
 *   +0x0450 -> line 1341
 *   +0x0454 -> line 1347
 *   +0x0468 -> line 1340
 *   +0x046c -> line 1347
 *   +0x0470 -> line 1348
 *   +0x0480 -> line 1337
 *   +0x0484 -> line 1348
 *   +0x0494 -> line 1349
 *   +0x04b4 -> line 1350
 *   +0x04d4 -> line 1351
 *   +0x04f4 -> line 1352
 *   +0x0500 -> line 1343
 *   +0x0504 -> line 1352
 *   +0x0508 -> line 1337
 *   +0x050c -> line 1352
 *   +0x051c -> line 1343
 *   +0x0520 -> line 1355
 *   +0x0524 -> line 1352
 *   +0x0528 -> line 1355
 *   +0x0534 -> line 1356
 *   +0x0538 -> line 1375
 *   +0x053c -> line 1356
 *   +0x0548 -> line 1357
 *   +0x054c -> line 1337
 *   +0x0550 -> line 1357
 *   +0x055c -> line 1360
 *   +0x0564 -> line 1374
 *   +0x0568 -> line 1360
 *   +0x0570 -> line 1361
 *   +0x0578 -> line 1373
 *   +0x057c -> line 1361
 *   +0x0584 -> line 1362
 *   +0x058c -> line 1343
 *   +0x0590 -> line 1362
 *   +0x0598 -> line 1364
 *   +0x05a4 -> line 1379
 *   +0x05a8 -> line 1364
 *   +0x05ac -> line 1365
 *   +0x05b8 -> line 1344
 *   +0x05bc -> line 1365
 *   +0x05c0 -> line 1366
 *   +0x05d0 -> line 1380
 *   +0x05d4 -> line 1369
 *   +0x05e4 -> line 1337
 *   +0x05e8 -> line 1370
 *   +0x05f8 -> line 1345
 *   +0x05fc -> line 1371
 *   +0x060c -> line 1381
 *   +0x0610 -> line 1371
 *   +0x0614 -> line 1373
 *   +0x0618 -> line 1374
 *   +0x061c -> line 1375
 *   +0x0620 -> line 1387
 *   +0x0624 -> line 1376
 *   +0x0628 -> line 1379
 *   +0x062c -> line 1380
 *   +0x0630 -> line 1381
 *   +0x0634 -> line 1385
 *   +0x0638 -> line 1382
 *   +0x063c -> line 1386
 *   +0x0640 -> line 1385
 *   +0x0644 -> line 1387
 *   +0x0648 -> line 1386
 *   +0x064c -> line 1387
 *   +0x0650 -> line 1388
 *   +0x0654 -> line 1403
 *   +0x0658 -> line 1391
 *   +0x065c -> line 1392
 *   +0x0660 -> line 1393
 *   +0x0664 -> line 1394
 *   +0x0668 -> line 1404
 *   +0x066c -> line 1397
 *   +0x0670 -> line 1398
 *   +0x0674 -> line 1399
 *   +0x0678 -> line 1405
 *   +0x067c -> line 1400
 *   +0x0680 -> line 1403
 *   +0x0684 -> line 1404
 *   +0x0688 -> line 1405
 *   +0x0690 -> line 1406
 *   +0x0694 -> line 1423
 *   +0x0698 -> line 1411
 *   +0x069c -> line 1412
 *   +0x06a0 -> line 1413
 *   +0x06a4 -> line 1414
 *   +0x06a8 -> line 1425
 *   +0x06ac -> line 1417
 *   +0x06b0 -> line 1418
 *   +0x06b4 -> line 1424
 *   +0x06b8 -> line 1419
 *   +0x06bc -> line 1425
 *   +0x06c0 -> line 1420
 *   +0x06c4 -> line 1423
 *   +0x06c8 -> line 1424
 *   +0x06cc -> line 1425
 *   +0x06d0 -> line 1426
 *   +0x06d4 -> line 1443
 *   +0x06d8 -> line 1429
 *   +0x06dc -> line 1430
 *   +0x06e0 -> line 1431
 *   +0x06e4 -> line 1432
 *   +0x06e8 -> line 1441
 *   +0x06ec -> line 1435
 *   +0x06f0 -> line 1436
 *   +0x06f4 -> line 1437
 *   +0x06f8 -> line 1438
 *   +0x06fc -> line 1442
 *   +0x0700 -> line 1441
 *   +0x0704 -> line 1443
 *   +0x0708 -> line 1442
 *   +0x070c -> line 1443
 *   +0x0710 -> line 1444
 *   +0x0714 -> line 1445
 *   +0x0718 -> line 1448
 *   +0x0728 -> line 1452
 *   +0x0748 -> line 1454
 *   +0x0754 -> line 1452
 *   +0x0760 -> line 1454
 *   +0x0764 -> line 1452
 *   +0x0768 -> line 1454
 *   +0x076c -> line 1452
 *   +0x0784 -> line 1454
 *   +0x079c -> line 1458
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplaySerialBees(GLD_tdstViewportAttributes_* pViewport, AGO2_BeeParticle_* _pParticleArray_, int NumberOfParticles, void* pMaterial, float sx, float sy)
{
    AGO2_BeeParticle_* pParticleArray;
    float YVZ;
    float YVY;
    float YVX;
    float XVZ;
    float XVY;
    float XVX;
    float PosZ;
    float PosY;
    float PosX;
    float (*) pT[4];
    float (*) pC[4];
    float (*) pV[4];
    MAT_tdstTransformation_ InvertedCam;
    unsigned int NbSpritesReal;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 1071–1174 */
/* addr: 0x002b3ec0  size: 600 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1082
 *   +0x0004 -> line 1071
 *   +0x0008 -> line 1080
 *   +0x000c -> line 1082
 *   +0x0014 -> line 1084
 *   +0x001c -> line 1088
 *   +0x0020 -> line 1089
 *   +0x0024 -> line 1091
 *   +0x002c -> line 1096
 *   +0x0030 -> line 1110
 *   +0x0034 -> line 1096
 *   +0x003c -> line 1093
 *   +0x0048 -> line 1095
 *   +0x0050 -> line 1096
 *   +0x0054 -> line 1099
 *   +0x0058 -> line 1097
 *   +0x005c -> line 1103
 *   +0x0060 -> line 1100
 *   +0x0064 -> line 1101
 *   +0x0068 -> line 1104
 *   +0x006c -> line 1105
 *   +0x0070 -> line 1106
 *   +0x0074 -> line 1107
 *   +0x0078 -> line 1108
 *   +0x007c -> line 1096
 *   +0x0080 -> line 1110
 *   +0x0084 -> line 1130
 *   +0x0088 -> line 1110
 *   +0x0090 -> line 1111
 *   +0x0094 -> line 1112
 *   +0x0098 -> line 1136
 *   +0x009c -> line 1112
 *   +0x00a4 -> line 1113
 *   +0x00a8 -> line 1114
 *   +0x00ac -> line 1131
 *   +0x00b0 -> line 1114
 *   +0x00b8 -> line 1115
 *   +0x00bc -> line 1116
 *   +0x00c0 -> line 1137
 *   +0x00c4 -> line 1116
 *   +0x00cc -> line 1117
 *   +0x00d0 -> line 1118
 *   +0x00d4 -> line 1130
 *   +0x00d8 -> line 1118
 *   +0x00e0 -> line 1119
 *   +0x00e4 -> line 1120
 *   +0x00e8 -> line 1160
 *   +0x00ec -> line 1120
 *   +0x00f4 -> line 1121
 *   +0x00f8 -> line 1123
 *   +0x00fc -> line 1132
 *   +0x0100 -> line 1123
 *   +0x0104 -> line 1121
 *   +0x0108 -> line 1123
 *   +0x0110 -> line 1124
 *   +0x0114 -> line 1138
 *   +0x0118 -> line 1124
 *   +0x0124 -> line 1125
 *   +0x0128 -> line 1131
 *   +0x012c -> line 1125
 *   +0x0138 -> line 1126
 *   +0x013c -> line 1132
 *   +0x0140 -> line 1126
 *   +0x014c -> line 1127
 *   +0x0150 -> line 1136
 *   +0x0154 -> line 1127
 *   +0x0160 -> line 1128
 *   +0x0164 -> line 1142
 *   +0x0168 -> line 1128
 *   +0x0174 -> line 1130
 *   +0x0178 -> line 1128
 *   +0x017c -> line 1131
 *   +0x0180 -> line 1132
 *   +0x0184 -> line 1133
 *   +0x0188 -> line 1161
 *   +0x018c -> line 1136
 *   +0x0190 -> line 1137
 *   +0x0198 -> line 1138
 *   +0x01a0 -> line 1139
 *   +0x01a4 -> line 1143
 *   +0x01a8 -> line 1142
 *   +0x01ac -> line 1144
 *   +0x01b0 -> line 1143
 *   +0x01b4 -> line 1144
 *   +0x01b8 -> line 1145
 *   +0x01bc -> line 1162
 *   +0x01c0 -> line 1148
 *   +0x01c4 -> line 1149
 *   +0x01c8 -> line 1150
 *   +0x01cc -> line 1151
 *   +0x01d0 -> line 1154
 *   +0x01d4 -> line 1155
 *   +0x01d8 -> line 1156
 *   +0x01dc -> line 1157
 *   +0x01e0 -> line 1160
 *   +0x01e4 -> line 1161
 *   +0x01e8 -> line 1162
 *   +0x01ec -> line 1163
 *   +0x01f0 -> line 1164
 *   +0x01f4 -> line 1165
 *   +0x01f8 -> line 1167
 *   +0x0208 -> line 1171
 *   +0x0250 -> line 1174
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplaySerialLeaves(AGO2_LeavesParticle_* pParticleArray, int NumberOfParticles, void* pMaterial)
{
    float YVZ;
    float YVY;
    float YVX;
    float XVZ;
    float XVY;
    float XVX;
    float PosZ;
    float PosY;
    float PosX;
    float AlphaVal;
    float (*) pT[4];
    float (*) pC[4];
    float (*) pV[4];
    unsigned int NbSpritesReal;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 930–1045 */
/* addr: 0x002b4120  size: 780 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 930
 *   +0x0028 -> line 932
 *   +0x002c -> line 930
 *   +0x0030 -> line 942
 *   +0x0038 -> line 940
 *   +0x0040 -> line 942
 *   +0x004c -> line 944
 *   +0x0054 -> line 947
 *   +0x0058 -> line 951
 *   +0x005c -> line 948
 *   +0x0060 -> line 949
 *   +0x0064 -> line 951
 *   +0x006c -> line 954
 *   +0x0080 -> line 956
 *   +0x0088 -> line 957
 *   +0x0090 -> line 958
 *   +0x0098 -> line 959
 *   +0x00a0 -> line 960
 *   +0x00a8 -> line 961
 *   +0x00ac -> line 965
 *   +0x00b4 -> line 970
 *   +0x00b8 -> line 981
 *   +0x00bc -> line 970
 *   +0x00c4 -> line 967
 *   +0x00d0 -> line 969
 *   +0x00d8 -> line 970
 *   +0x00dc -> line 973
 *   +0x00e0 -> line 971
 *   +0x00e4 -> line 974
 *   +0x00e8 -> line 975
 *   +0x00ec -> line 977
 *   +0x00f0 -> line 978
 *   +0x00f4 -> line 970
 *   +0x00f8 -> line 979
 *   +0x00fc -> line 1001
 *   +0x0104 -> line 981
 *   +0x0110 -> line 1007
 *   +0x0114 -> line 982
 *   +0x0118 -> line 983
 *   +0x011c -> line 1007
 *   +0x0120 -> line 983
 *   +0x0128 -> line 984
 *   +0x012c -> line 985
 *   +0x0130 -> line 1002
 *   +0x0134 -> line 985
 *   +0x013c -> line 986
 *   +0x0140 -> line 987
 *   +0x0144 -> line 1002
 *   +0x0148 -> line 987
 *   +0x0150 -> line 988
 *   +0x0154 -> line 989
 *   +0x0158 -> line 1008
 *   +0x015c -> line 989
 *   +0x0164 -> line 990
 *   +0x0168 -> line 991
 *   +0x016c -> line 1008
 *   +0x0170 -> line 991
 *   +0x0178 -> line 992
 *   +0x017c -> line 994
 *   +0x0180 -> line 1003
 *   +0x0184 -> line 994
 *   +0x0188 -> line 992
 *   +0x018c -> line 994
 *   +0x0194 -> line 995
 *   +0x0198 -> line 1003
 *   +0x019c -> line 995
 *   +0x01a8 -> line 996
 *   +0x01ac -> line 1009
 *   +0x01b0 -> line 996
 *   +0x01bc -> line 997
 *   +0x01c0 -> line 1009
 *   +0x01c4 -> line 997
 *   +0x01d0 -> line 998
 *   +0x01d4 -> line 1013
 *   +0x01d8 -> line 998
 *   +0x01e4 -> line 999
 *   +0x01e8 -> line 1013
 *   +0x01ec -> line 999
 *   +0x01f8 -> line 1001
 *   +0x01fc -> line 999
 *   +0x0200 -> line 1002
 *   +0x0204 -> line 1003
 *   +0x0208 -> line 1004
 *   +0x020c -> line 1031
 *   +0x0210 -> line 1007
 *   +0x0214 -> line 1008
 *   +0x0218 -> line 1031
 *   +0x021c -> line 1014
 *   +0x0224 -> line 1009
 *   +0x0228 -> line 1032
 *   +0x022c -> line 1010
 *   +0x0230 -> line 1032
 *   +0x0234 -> line 1015
 *   +0x023c -> line 1013
 *   +0x0240 -> line 1014
 *   +0x0244 -> line 1015
 *   +0x0248 -> line 1016
 *   +0x024c -> line 1033
 *   +0x0250 -> line 1019
 *   +0x0254 -> line 1020
 *   +0x0258 -> line 1021
 *   +0x025c -> line 1022
 *   +0x0260 -> line 1033
 *   +0x0264 -> line 1025
 *   +0x0268 -> line 1026
 *   +0x026c -> line 1027
 *   +0x0270 -> line 1028
 *   +0x0274 -> line 1031
 *   +0x0278 -> line 1032
 *   +0x027c -> line 1033
 *   +0x0280 -> line 1034
 *   +0x0284 -> line 1035
 *   +0x0288 -> line 1038
 *   +0x0298 -> line 1042
 *   +0x02e0 -> line 1045
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplaySerialFlowBlured(GLD_tdstViewportAttributes_* param0, AGO2_FlowParticle_* pParticleArray, int NumberOfParticles, void* pMaterial, float sx, float sy)
{
    float YVZ;
    float YVY;
    float YVX;
    float XVZ;
    float XVY;
    float XVX;
    float Pos2Z;
    float Pos2Y;
    float Pos2X;
    float PosZ;
    float PosY;
    float PosX;
    float AlphaVal;
    float (*) pT[4];
    float (*) pC[4];
    float (*) pV[4];
    MAT_tdstTransformation_ InvertedCam;
    unsigned int NbSpritesReal;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 817–921 */
/* addr: 0x002b4430  size: 724 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 817
 *   +0x0028 -> line 819
 *   +0x002c -> line 817
 *   +0x0030 -> line 829
 *   +0x0038 -> line 827
 *   +0x0040 -> line 829
 *   +0x004c -> line 831
 *   +0x0054 -> line 834
 *   +0x0058 -> line 838
 *   +0x005c -> line 835
 *   +0x0060 -> line 836
 *   +0x0064 -> line 838
 *   +0x006c -> line 841
 *   +0x0070 -> line 842
 *   +0x0074 -> line 843
 *   +0x0078 -> line 844
 *   +0x007c -> line 845
 *   +0x0080 -> line 846
 *   +0x0084 -> line 841
 *   +0x0088 -> line 842
 *   +0x008c -> line 843
 *   +0x0090 -> line 844
 *   +0x0094 -> line 845
 *   +0x0098 -> line 848
 *   +0x00a0 -> line 853
 *   +0x00a4 -> line 860
 *   +0x00a8 -> line 853
 *   +0x00b0 -> line 850
 *   +0x00bc -> line 852
 *   +0x00c4 -> line 853
 *   +0x00c8 -> line 856
 *   +0x00cc -> line 854
 *   +0x00d0 -> line 857
 *   +0x00d4 -> line 858
 *   +0x00d8 -> line 853
 *   +0x00dc -> line 860
 *   +0x00e8 -> line 880
 *   +0x00ec -> line 861
 *   +0x00f0 -> line 862
 *   +0x00f4 -> line 886
 *   +0x00f8 -> line 862
 *   +0x0100 -> line 863
 *   +0x0104 -> line 864
 *   +0x0108 -> line 881
 *   +0x010c -> line 864
 *   +0x0114 -> line 865
 *   +0x0118 -> line 866
 *   +0x011c -> line 880
 *   +0x0120 -> line 866
 *   +0x0128 -> line 867
 *   +0x012c -> line 868
 *   +0x0130 -> line 887
 *   +0x0134 -> line 868
 *   +0x013c -> line 869
 *   +0x0140 -> line 870
 *   +0x0144 -> line 881
 *   +0x0148 -> line 870
 *   +0x0150 -> line 871
 *   +0x0154 -> line 873
 *   +0x0158 -> line 882
 *   +0x015c -> line 873
 *   +0x0160 -> line 871
 *   +0x0164 -> line 873
 *   +0x016c -> line 874
 *   +0x0170 -> line 882
 *   +0x0174 -> line 874
 *   +0x0180 -> line 875
 *   +0x0184 -> line 886
 *   +0x0188 -> line 875
 *   +0x0194 -> line 876
 *   +0x0198 -> line 888
 *   +0x019c -> line 876
 *   +0x01a8 -> line 877
 *   +0x01ac -> line 892
 *   +0x01b0 -> line 877
 *   +0x01bc -> line 878
 *   +0x01c0 -> line 910
 *   +0x01c4 -> line 878
 *   +0x01d0 -> line 880
 *   +0x01d4 -> line 878
 *   +0x01d8 -> line 881
 *   +0x01dc -> line 882
 *   +0x01e0 -> line 883
 *   +0x01e4 -> line 911
 *   +0x01e8 -> line 886
 *   +0x01ec -> line 887
 *   +0x01f4 -> line 888
 *   +0x01fc -> line 889
 *   +0x0200 -> line 893
 *   +0x0204 -> line 892
 *   +0x0208 -> line 894
 *   +0x020c -> line 893
 *   +0x0210 -> line 894
 *   +0x0214 -> line 895
 *   +0x0218 -> line 912
 *   +0x021c -> line 898
 *   +0x0220 -> line 899
 *   +0x0224 -> line 900
 *   +0x0228 -> line 901
 *   +0x022c -> line 904
 *   +0x0230 -> line 905
 *   +0x0234 -> line 906
 *   +0x0238 -> line 907
 *   +0x023c -> line 910
 *   +0x0240 -> line 911
 *   +0x0244 -> line 912
 *   +0x0248 -> line 913
 *   +0x024c -> line 914
 *   +0x0250 -> line 917
 *   +0x0260 -> line 919
 *   +0x02a8 -> line 921
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplaySerialFlow(GLD_tdstViewportAttributes_* param0, AGO2_FlowParticle_* pParticleArray, int NumberOfParticles, void* pMaterial, float sx, float sy)
{
    float YVZ;
    float YVY;
    float YVX;
    float XVZ;
    float XVY;
    float XVX;
    float PosZ;
    float PosY;
    float PosX;
    float AlphaVal;
    float (*) pT[4];
    float (*) pC[4];
    float (*) pV[4];
    MAT_tdstTransformation_ InvertedCam;
    unsigned int NbSpritesReal;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 654–803 */
/* addr: 0x002b4710  size: 2580 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 654
 *   +0x0004 -> line 670
 *   +0x0008 -> line 654
 *   +0x000c -> line 665
 *   +0x0010 -> line 654
 *   +0x0014 -> line 665
 *   +0x0018 -> line 654
 *   +0x001c -> line 670
 *   +0x0020 -> line 654
 *   +0x0024 -> line 671
 *   +0x0028 -> line 654
 *   +0x002c -> line 672
 *   +0x0030 -> line 654
 *   +0x0060 -> line 665
 *   +0x0094 -> line 666
 *   +0x00a4 -> line 670
 *   +0x00a8 -> line 666
 *   +0x00b0 -> line 670
 *   +0x00b8 -> line 671
 *   +0x00c4 -> line 672
 *   +0x00d0 -> line 675
 *   +0x00e8 -> line 678
 *   +0x00ec -> line 675
 *   +0x00f0 -> line 678
 *   +0x0100 -> line 682
 *   +0x0158 -> line 684
 *   +0x0164 -> line 685
 *   +0x0184 -> line 686
 *   +0x01a0 -> line 691
 *   +0x01ac -> line 695
 *   +0x01b0 -> line 691
 *   +0x01dc -> line 695
 *   +0x01e4 -> line 696
 *   +0x01fc -> line 698
 *   +0x0200 -> line 700
 *   +0x0214 -> line 704
 *   +0x0218 -> line 700
 *   +0x023c -> line 701
 *   +0x0258 -> line 704
 *   +0x0260 -> line 708
 *   +0x0294 -> line 709
 *   +0x02c8 -> line 712
 *   +0x0308 -> line 713
 *   +0x0368 -> line 716
 *   +0x0380 -> line 719
 *   +0x0398 -> line 720
 *   +0x03a4 -> line 721
 *   +0x03f8 -> line 725
 *   +0x040c -> line 726
 *   +0x0460 -> line 730
 *   +0x0470 -> line 731
 *   +0x04c4 -> line 735
 *   +0x04d0 -> line 736
 *   +0x0524 -> line 740
 *   +0x0534 -> line 741
 *   +0x0588 -> line 745
 *   +0x059c -> line 746
 *   +0x05f0 -> line 752
 *   +0x05fc -> line 755
 *   +0x0600 -> line 756
 *   +0x0610 -> line 755
 *   +0x0620 -> line 756
 *   +0x0664 -> line 757
 *   +0x0694 -> line 758
 *   +0x06b8 -> line 760
 *   +0x06bc -> line 758
 *   +0x06c4 -> line 760
 *   +0x06c8 -> line 758
 *   +0x06cc -> line 760
 *   +0x06d0 -> line 758
 *   +0x06d8 -> line 760
 *   +0x06e8 -> line 761
 *   +0x06f4 -> line 762
 *   +0x0700 -> line 763
 *   +0x0754 -> line 767
 *   +0x0768 -> line 768
 *   +0x07bc -> line 772
 *   +0x07d4 -> line 773
 *   +0x07e4 -> line 774
 *   +0x0838 -> line 778
 *   +0x0850 -> line 779
 *   +0x085c -> line 780
 *   +0x08b0 -> line 784
 *   +0x08c8 -> line 785
 *   +0x08d8 -> line 786
 *   +0x092c -> line 790
 *   +0x0940 -> line 791
 *   +0x0994 -> line 795
 *   +0x0998 -> line 798
 *   +0x099c -> line 799
 *   +0x09a4 -> line 798
 *   +0x09bc -> line 799
 *   +0x09c4 -> line 801
 *   +0x09cc -> line 803
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_DisplayLightning(GLD_tdstViewportAttributes_* pViewport, MTH3D_tdstVector_* pDestination, MTH3D_tdstVector_* pSource, float xSize)
{
    float xNorm;
    float xNorm;
    int i;
    float Length;
    MTH3D_tdstVector_ PosCurrent;
    MTH3D_tdstVector_ Pos3;
    MTH3D_tdstVector_ Pos2;
    MTH3D_tdstVector_ Pos1;
    MTH3D_tdstVector_ DirectionStep;
    MTH3D_tdstVector_ Direction2;
    MTH3D_tdstVector_ Direction;
    MAT_tdstTransformation_ InvertedCam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 458–582 */
/* addr: 0x002b5130  size: 604 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 458
 *   +0x0028 -> line 460
 *   +0x002c -> line 458
 *   +0x0030 -> line 470
 *   +0x0038 -> line 468
 *   +0x0040 -> line 470
 *   +0x004c -> line 472
 *   +0x0054 -> line 475
 *   +0x0058 -> line 480
 *   +0x005c -> line 476
 *   +0x0060 -> line 477
 *   +0x0064 -> line 480
 *   +0x006c -> line 482
 *   +0x0080 -> line 496
 *   +0x0084 -> line 511
 *   +0x008c -> line 499
 *   +0x0090 -> line 496
 *   +0x0094 -> line 511
 *   +0x0098 -> line 496
 *   +0x009c -> line 511
 *   +0x00a0 -> line 496
 *   +0x00a4 -> line 511
 *   +0x00a8 -> line 497
 *   +0x00ac -> line 511
 *   +0x00b0 -> line 499
 *   +0x00b4 -> line 511
 *   +0x00b8 -> line 499
 *   +0x00bc -> line 511
 *   +0x00c0 -> line 499
 *   +0x00c4 -> line 500
 *   +0x00cc -> line 501
 *   +0x00d0 -> line 500
 *   +0x00d8 -> line 501
 *   +0x00e4 -> line 502
 *   +0x00f4 -> line 512
 *   +0x00f8 -> line 513
 *   +0x00fc -> line 514
 *   +0x0100 -> line 515
 *   +0x0104 -> line 516
 *   +0x0108 -> line 522
 *   +0x0110 -> line 529
 *   +0x0114 -> line 539
 *   +0x0118 -> line 529
 *   +0x011c -> line 539
 *   +0x0120 -> line 529
 *   +0x0124 -> line 524
 *   +0x0130 -> line 526
 *   +0x0138 -> line 529
 *   +0x013c -> line 532
 *   +0x0140 -> line 529
 *   +0x0148 -> line 535
 *   +0x0150 -> line 536
 *   +0x0158 -> line 537
 *   +0x0160 -> line 540
 *   +0x0164 -> line 541
 *   +0x0168 -> line 543
 *   +0x016c -> line 544
 *   +0x0170 -> line 546
 *   +0x0174 -> line 547
 *   +0x0178 -> line 548
 *   +0x017c -> line 549
 *   +0x0180 -> line 550
 *   +0x0184 -> line 551
 *   +0x0188 -> line 553
 *   +0x018c -> line 554
 *   +0x0190 -> line 555
 *   +0x0194 -> line 556
 *   +0x0198 -> line 557
 *   +0x019c -> line 558
 *   +0x01a0 -> line 560
 *   +0x01a4 -> line 561
 *   +0x01a8 -> line 562
 *   +0x01ac -> line 563
 *   +0x01b0 -> line 565
 *   +0x01b4 -> line 566
 *   +0x01b8 -> line 567
 *   +0x01bc -> line 568
 *   +0x01c0 -> line 569
 *   +0x01c4 -> line 570
 *   +0x01c8 -> line 575
 *   +0x01cc -> line 576
 *   +0x01d0 -> line 574
 *   +0x01d4 -> line 577
 *   +0x01d8 -> line 579
 *   +0x01e8 -> line 581
 *   +0x0230 -> line 582
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplaySerialParticleRain(GLD_tdstViewportAttributes_* param0, AGO2_RainParticle_* pParticleArray, int NumberOfParticles, void* pMaterial, float sx, float sy)
{
    float Uv4[4];
    float Uv3[4];
    float Uv2[4];
    float Uv1[4];
    float Pos[4];
    float Color[4];
    float (*) pT[4];
    float (*) pC[4];
    float (*) pV[4];
    MAT_tdstTransformation_ InvertedCam;
    unsigned int NbSpritesReal;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 445–453 */
/* addr: 0x002b5390  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 445
 *   +0x0004 -> line 447
 *   +0x0008 -> line 445
 *   +0x0010 -> line 446
 *   +0x0014 -> line 449
 *   +0x001c -> line 448
 *   +0x0020 -> line 449
 *   +0x0028 -> line 451
 *   +0x0038 -> line 453
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_StopDrawingRain(void)
{
    float savedalpha;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 435–441 */
/* addr: 0x002b53e0  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 435
 *   +0x0004 -> line 439
 *   +0x0008 -> line 435
 *   +0x000c -> line 439
 *   +0x0010 -> line 438
 *   +0x0014 -> line 439
 *   +0x0018 -> line 438
 *   +0x0020 -> line 439
 *   +0x005c -> line 440
 *   +0x0060 -> line 439
 *   +0x0068 -> line 440
 *   +0x0070 -> line 441
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_StartDrawingRain(GLD_tdstViewportAttributes_* pViewport)
{
    float ModelView[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 347–424 */
/* addr: 0x002b5460  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 347
 *   +0x0004 -> line 352
 *   +0x000c -> line 357
 *   +0x0014 -> line 350
 *   +0x0018 -> line 351
 *   +0x001c -> line 357
 *   +0x0020 -> line 353
 *   +0x0024 -> line 357
 *   +0x0030 -> line 359
 *   +0x0034 -> line 360
 *   +0x0038 -> line 361
 *   +0x003c -> line 362
 *   +0x0040 -> line 363
 *   +0x0044 -> line 364
 *   +0x0048 -> line 365
 *   +0x004c -> line 366
 *   +0x0050 -> line 367
 *   +0x0054 -> line 368
 *   +0x0058 -> line 369
 *   +0x005c -> line 371
 *   +0x0060 -> line 372
 *   +0x0064 -> line 373
 *   +0x0068 -> line 374
 *   +0x006c -> line 375
 *   +0x0070 -> line 377
 *   +0x0074 -> line 378
 *   +0x0078 -> line 379
 *   +0x007c -> line 380
 *   +0x0080 -> line 382
 *   +0x0084 -> line 383
 *   +0x0088 -> line 384
 *   +0x008c -> line 386
 *   +0x0090 -> line 387
 *   +0x0094 -> line 388
 *   +0x0098 -> line 389
 *   +0x009c -> line 390
 *   +0x00a0 -> line 391
 *   +0x00a4 -> line 392
 *   +0x00a8 -> line 393
 *   +0x00ac -> line 394
 *   +0x00b0 -> line 395
 *   +0x00b4 -> line 396
 *   +0x00b8 -> line 400
 *   +0x00c0 -> line 401
 *   +0x00c4 -> line 402
 *   +0x00c8 -> line 405
 *   +0x00d0 -> line 406
 *   +0x00d4 -> line 407
 *   +0x00d8 -> line 410
 *   +0x00dc -> line 411
 *   +0x00e0 -> line 424
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_CalculateVectorsFor3DRainVU0(MAT_tdstTransformation_* pInvertedCam, float* pDirection, float sx, float sy)
{
    float V1[4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawAGO2.c lines 313–343 */
/* addr: 0x002b5550  size: 568 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 313
 *   +0x0004 -> line 318
 *   +0x0008 -> line 313
 *   +0x000c -> line 320
 *   +0x0010 -> line 313
 *   +0x0020 -> line 320
 *   +0x0028 -> line 318
 *   +0x0030 -> line 320
 *   +0x0034 -> line 316
 *   +0x0038 -> line 320
 *   +0x0040 -> line 324
 *   +0x004c -> line 330
 *   +0x0054 -> line 325
 *   +0x0060 -> line 330
 *   +0x0068 -> line 326
 *   +0x0074 -> line 330
 *   +0x00d4 -> line 331
 *   +0x0124 -> line 332
 *   +0x01a8 -> line 334
 *   +0x01b0 -> line 335
 *   +0x01b8 -> line 334
 *   +0x01bc -> line 336
 *   +0x01c4 -> line 335
 *   +0x01c8 -> line 338
 *   +0x01d0 -> line 336
 *   +0x01d4 -> line 339
 *   +0x01dc -> line 338
 *   +0x01e0 -> line 340
 *   +0x01e8 -> line 339
 *   +0x01ec -> line 334
 *   +0x01f4 -> line 335
 *   +0x01fc -> line 336
 *   +0x0204 -> line 338
 *   +0x020c -> line 339
 *   +0x0214 -> line 340
 *   +0x0220 -> line 343
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_CalculateVectorsFor3DRain(MAT_tdstTransformation_* param0, float* pDirection, float sx, float sy)
{
    float xNorm;
    float xNorm;
    MTH3D_tdstVector_ V3;
    MTH3D_tdstVector_ V2;
    MTH3D_tdstVector_ V1;
    /* TODO: decompile from asm/... */
}
