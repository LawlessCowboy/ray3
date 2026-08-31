/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_2 anon_2;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct anon_7 anon_7;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct GLI_st_RegisteredTexture_ GLI_st_RegisteredTexture_;
typedef union unFunction unFunction;
typedef struct anon_8 anon_8;
typedef union anon_9 anon_9;
typedef struct anon_10 anon_10;
typedef struct S_TXR_Header_ S_TXR_Header_;
typedef struct anon_11 anon_11;
typedef struct anon_12 anon_12;
typedef struct tagListNode tagListNode;
typedef struct anon_13 anon_13;
typedef struct anon_14 anon_14;
typedef struct anon_15 anon_15;
typedef struct anon_16 anon_16;
typedef struct anon_17 anon_17;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_18 anon_18;
typedef struct anon_19 anon_19;
typedef struct anon_20 anon_20;
typedef struct anon_21 anon_21;
typedef struct CTL_MapInfo_ CTL_MapInfo_;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_22 anon_22;
typedef struct anon_23 anon_23;
typedef struct anon_24 anon_24;
typedef struct tagGLcontext tagGLcontext;
typedef struct anon_25 anon_25;
typedef struct anon_26 anon_26;
typedef struct anon_27 anon_27;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_28 anon_28;
typedef struct anon_29 anon_29;
typedef struct tagGScontext tagGScontext;
typedef struct anon_30 anon_30;
typedef struct tag_GLlight tag_GLlight;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_31 anon_31;
typedef struct anon_32 anon_32;
typedef struct anon_33 anon_33;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct anon_34 anon_34;
typedef struct CTL_Info_ CTL_Info_;
typedef struct anon_35 anon_35;
typedef struct anon_36 anon_36;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLtexname tagGLtexname;
typedef struct anon_37 anon_37;
typedef struct anon_38 anon_38;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct anon_39 anon_39;
typedef struct anon_40 anon_40;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_41 anon_41;
typedef struct anon_42 anon_42;

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
    int p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct anon_0 {
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

struct anon_1 {
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
    unsigned long 8 : 4; /* bit None, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct tagGLlistcalls {
    int pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct anon_2 {
    int pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_41 st_UVStaticPos; /* +0xc */
    anon_41 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct tagGsSetTex {
    anon_1 gifTag; /* +0x0 */
    anon_16 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_33 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_39 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_29 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_34 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_23 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct tagGLprimbuf {
    int pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    int pData; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    anon_1 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_3 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    int pPrimBuf; /* +0x18 */
};

struct anon_4 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_5 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_6 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_7 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct GLI_st_RegisteredTexture_ {
    int pTextureData; /* +0x0 */
    unsigned int TextureName; /* +0x4 */
    unsigned int Flags; /* +0x8 */
    int p_stTexture; /* +0xc */
};

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
};

struct anon_8 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

union anon_9 {
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

struct anon_10 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct S_TXR_Header_ {
    unsigned int VersionID; /* +0x0 */
    unsigned int Flags; /* +0x4 */
    unsigned int SizeX; /* +0x8 */
    unsigned int SizeY; /* +0xc */
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

struct anon_12 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct tagListNode {
    int pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    /* aggregate */ int apData; /* +0xc */
};

struct anon_13 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
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
    unsigned long 8 : 6; /* bit None, byte +0x0 */
    unsigned long pad62 : 2; /* bit 62, byte +0x0 */
};

struct anon_15 {
    unsigned long param0 : 56; /* bit None, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct anon_16 {
    unsigned long pad00; /* +0x0 */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_18 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_19 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
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

struct anon_21 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct CTL_MapInfo_ {
    char MapName[16]; /* +0x0 */
    unsigned int NumberOfFilesToLoad; /* +0x10 */
    int StringPointers; /* +0x14 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    /* array */ int aSingleIndex[64]; /* +0x4 */
    int pFirstNode; /* +0x204 */
    int pLastNode; /* +0x208 */
};

struct tag_GLtexture {
    float vTexBorderColor[4]; /* +0x0 */
    unsigned int eDimension; /* +0x10 */
    unsigned int eTexFilterMin; /* +0x14 */
    unsigned int eTexFilterMag; /* +0x18 */
    unsigned int eTexWrapS; /* +0x1c */
    unsigned int eTexWrapT; /* +0x20 */
    /* aggregate */ int Image; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    int clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
};

struct anon_22 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
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

struct anon_24 {
    float S; /* +0x0 */
    float T; /* +0x4 */
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
    /* array */ int TextureSet[2]; /* +0x180 */
    int pCurTexture; /* +0x240 */
    tagGsLoadImage stGsLoadImage; /* +0x250 */
    tagGsSetTex astGsSetTex[2]; /* +0x2a0 */
    int pstCurGsSetTex; /* +0x380 */
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
    int pCurListData; /* +0x5cd8 */
    int pCurListCalls; /* +0x5cdc */
    int pPreListCalls; /* +0x5ce0 */
    int pCurPrimBuf; /* +0x5ce4 */
    int pCurParamBegin; /* +0x5ce8 */
    int ppCurPrimBufHead; /* +0x5cec */
    int pCurListVData; /* +0x5cf0 */
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
    int pCurMatrix; /* +0x6074 */
    int pCurStack; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    float vacurColor[2][4]; /* +0x60b0 */
    int pvcurColor; /* +0x60d0 */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    int pvcurTextCoord; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    float valistColor[2][4]; /* +0x6120 */
    int pvlistColor; /* +0x6140 */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    int pvlistTexCoord; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    int pvRasterTexCoord; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    int pfvPackaeBSs; /* +0x6290 */
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
    int pTextureMatrix; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    int pTextureStack; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    int pVBuf; /* +0x6b9c */
    int pCBuf; /* +0x6ba0 */
    int pNBuf; /* +0x6ba4 */
    int pTBuf; /* +0x6ba8 */
    int pCBuf_b; /* +0x6bac */
    int pTBuf_b; /* +0x6bb0 */
    int pVIFDMABuf; /* +0x6bb4 */
    int pVIFDMABufUnaligned; /* +0x6bb8 */
    int pVIFInBuf; /* +0x6bbc */
    int pVIFOutBuf; /* +0x6bc0 */
    int pVIFIBufTail; /* +0x6bc4 */
    int pVIFOBufTail; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    int pVU1_DMA_parameters; /* +0x6bd0 */
    int pVU1_DMA_buf0; /* +0x6bd4 */
    int pVU1_DMA_buf1; /* +0x6bd8 */
    int pmClipping; /* +0x6bdc */
    int pmNormal; /* +0x6be0 */
    int pmClippingScreen; /* +0x6be4 */
    int pmLocalScreen; /* +0x6be8 */
    int pmModelView; /* +0x6bec */
    int pvClampLimit; /* +0x6bf0 */
    int pClippingFlags; /* +0x6bf4 */
    int pGifTagFan; /* +0x6bf8 */
    int pmD; /* +0x6bfc */
    int pmVP; /* +0x6c00 */
    int pmS; /* +0x6c04 */
    int pmh; /* +0x6c08 */
    int pvAmbient; /* +0x6c0c */
    int pvEmission; /* +0x6c10 */
    int pvScreenScale; /* +0x6c14 */
    int pvColorRange; /* +0x6c18 */
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
    int pGifTagBuf0; /* +0x6c5c */
    int pGifTagBuf1; /* +0x6c60 */
    int iCurBuf; /* +0x6c64 */
    int pVBuf0; /* +0x6c68 */
    int pNBuf0; /* +0x6c6c */
    int pCBuf0; /* +0x6c70 */
    int pTBuf0; /* +0x6c74 */
    int pCBuf0_b; /* +0x6c78 */
    int pTBuf0_b; /* +0x6c7c */
    int pVBuf1; /* +0x6c80 */
    int pNBuf1; /* +0x6c84 */
    int pCBuf1; /* +0x6c88 */
    int pTBuf1; /* +0x6c8c */
    int pCBuf1_b; /* +0x6c90 */
    int pTBuf1_b; /* +0x6c94 */
    int pMSCAL; /* +0x6c98 */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

struct anon_25 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
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

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_28 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
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

struct tagGScontext {
    anon_40 PRIM; /* +0x0 */
    anon_8 RGBAQ; /* +0x8 */
    anon_24 ST; /* +0x10 */
    anon_28 UV; /* +0x18 */
    anon_36 XYZF2; /* +0x20 */
    anon_35 XYZ2; /* +0x28 */
    anon_33 TEX0_1; /* +0x30 */
    anon_33 TEX0_2; /* +0x38 */
    anon_23 CLAMP_1; /* +0x40 */
    anon_23 CLAMP_2; /* +0x48 */
    anon_15 FOG; /* +0x50 */
    anon_36 XYZF3; /* +0x58 */
    anon_35 XYZ3; /* +0x60 */
    anon_39 TEX1_1; /* +0x68 */
    anon_39 TEX1_2; /* +0x70 */
    anon_42 TEX2_1; /* +0x78 */
    anon_42 TEX2_2; /* +0x80 */
    anon_31 XYOFFSET_1; /* +0x88 */
    anon_31 XYOFFSET_2; /* +0x90 */
    anon_5 PRMODECONT; /* +0x98 */
    anon_0 PRMODE; /* +0xa0 */
    anon_12 TEXCLUT; /* +0xa8 */
    anon_13 SCANMSK; /* +0xb0 */
    anon_29 MIPTBP1_1; /* +0xb8 */
    anon_29 MIPTBP1_2; /* +0xc0 */
    anon_34 MIPTBP2_1; /* +0xc8 */
    anon_34 MIPTBP2_2; /* +0xd0 */
    anon_4 TEXA; /* +0xd8 */
    anon_18 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_17 SCISSOR_1; /* +0xf0 */
    anon_17 SCISSOR_2; /* +0xf8 */
    anon_6 ALPHA_1; /* +0x100 */
    anon_6 ALPHA_2; /* +0x108 */
    anon_32 DIMX; /* +0x110 */
    anon_7 DTHE; /* +0x118 */
    anon_30 COLCLAMP; /* +0x120 */
    anon_26 TEST_1; /* +0x128 */
    anon_26 TEST_2; /* +0x130 */
    anon_38 PABE; /* +0x138 */
    anon_10 FBA_1; /* +0x140 */
    anon_10 FBA_2; /* +0x148 */
    anon_21 FRAME_1; /* +0x150 */
    anon_21 FRAME_2; /* +0x158 */
    anon_37 ZBUF_1; /* +0x160 */
    anon_37 ZBUF_2; /* +0x168 */
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
    anon_9 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    int pqCurrent; /* +0x2224 */
    int pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct anon_30 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_31 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_32 {
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
    unsigned long 8 : 3; /* bit None, byte +0x0 */
    unsigned long pad32 : 1; /* bit 59, byte +0x0 */
    unsigned long DIMX33 : 3; /* bit 60, byte +0x0 */
    unsigned long pad33 : 1; /* bit 63, byte +0x0 */
};

struct anon_33 {
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
    unsigned long 8 : 5; /* bit None, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct anon_34 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct CTL_Info_ {
    unsigned int NumberOfMapsInIniFile; /* +0x0 */
    CTL_MapInfo_ Maps[25]; /* +0x4 */
};

struct anon_35 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_36 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
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

struct tagGLtexname {
    unsigned char bAllocated; /* +0x0 */
    unsigned char bResident; /* +0x1 */
    float fPrioritize; /* +0x4 */
    unsigned int eDimension; /* +0x8 */
    int iTexBlock; /* +0xc */
    int pTex1D; /* +0x10 */
    int pTex2D; /* +0x14 */
    int pTexCube; /* +0x18 */
};

struct anon_37 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_38 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
};

struct anon_39 {
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

struct anon_40 {
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

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tagGsLoadImage {
    anon_1 gifTag; /* +0x0 */
    anon_14 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_20 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_25 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_19 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_41 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_42 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long 8 : 5; /* bit None, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

/* aggregate */ int GLI_g_TextureMemSpace;
int GLI_g_CreatingTBF;
int GLI_g_pTBFBuffer;
int GLI_g_pLevelTBFBuffer;
int GLI_g_CurrentTBF_Buffer;
int GLI_g_FixTextureBuffer;
int GLI_g_LevelTextureBuffer;
int GLI_g_CurrentTextureBuffer;
int GLI_g_CurrentTexture;
unsigned int GLI_g_NbTransitionTextures[2];
unsigned int GLI_g_LoadedTexturesNumber;
unsigned int GLI_g_LoadedTexturesSize;
unsigned int GLI_g_LoadedTexturesSizeAfterFix;
unsigned char GLI_gs_LoadingFix;
unsigned char GLI_gs_TextureArrayInitialized;
unsigned int GLI_gs_TextureArrayFixLimit;
int LevelTextureAllocated;
int g_LevelTextureLoaded;
unsigned int GLI_g_NbTexturesToRegister;
int CTL_Buffer;
unsigned int CTL_BufferPos;
unsigned int CTL_BufferSize;
int CTL_Initialized;
int CTL_g_CurrentMap;
int GLI_g_TXC_Opened;
int GLI_g_TXC_File;
int GLI_g_TXC_NumberOfFiles;
static int BufferHasRead;
static int BufferPosition;
int pTXCHeaders;
unsigned int GLI_g_NbTexturesForThisBloc[4];
unsigned int GLI_g_NbTexturesAllocatedForThisBloc[4];
int GLI_g_BaseChannelForThisBloc[4];
int GLI_g_RasterFont;
int GLI_g_RasterFontData;
int GLI_g_OldTV;
int GLI_g_OldTVData;
int GLI_g_ScreenShotLoadingBuffer;
GLI_tdstTexture_ GLI_g_OldTVTexture;
/* aggregate */ int GLI_g_OldTVMaterial;
GLI_tdstTexture_ GLI_g_RasterFontTexture;
/* aggregate */ int GLI_g_RasterFontMaterial;
int GLI_g_TextureNames[4][400];
char ReadBuffer[20480];
CTL_Info_ CTL_g_Infos;
GLI_st_RegisteredTexture_ GLI_g_RegisteredTextures[500];
int TempTexture;
unsigned int GLI_PS2GL_TextureArray[400];
/* array */ int GLI_g_TransitionTextureInformation[2];
char GLI_g_MapBeingLoaded[512];
tagGLcontext 8;
tagGScontext 8;
int PS2glAllocator64;
int PS2glLiberator;
unsigned int gs_lActualRefreshNumberForScolledTextures;
float gs_fCoefOfMultiplicationForAnimatedTexture;
int gs_aDEFTableOfTextureAlreadyRead;
int gs_aDEFTableOfTextureMemoryChannels;
unsigned char GLI_g_GlobalBpp;
unsigned int GLI_g_ExternalTextureHeader;
unsigned int GLI_g_ulNumberOfLoadedTexture;
int Bug_Please_ReloadMenu_40;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 95–102 */
/* addr: 0x002c4800  size: 36 bytes */
void GLI_vClearSendMatStates(void)
{
    /* line map: */
    /*   line 95 @ +0x000 */
    /*   line 100 @ +0x000 */
    /*   line 98 @ +0x000 */
    /*   line 102 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 2491–2511 */
/* addr: 0x002c4830  size: 324 bytes */
int GLI_iGetOneMenuTextureNames(void)
{
    int TexName;
    /* line map: */
    /*   line 2491 @ +0x000 */
    /*   line 2491 @ +0x000 */
    /*   line 2493 @ +0x000 */
    /*   line 2493 @ +0x000 */
    /*   line 2493 @ +0x000 */
    /*   line 2493 @ +0x000 */
    /*   line 2493 @ +0x000 */
    /*   line 2493 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 2415–2478 */
/* addr: 0x002c4980  size: 700 bytes */
void GLI_vUncompressScreenShotIntoMaterial(/* function pointer */ int ppMaterial, /* function pointer */ int p_stSpecParam, /* function pointer */ int pMaterial, GLI_tdstTexture_* p_stTexture)
{
    /* line map: */
    /*   line 2415 @ +0x000 */
    /*   line 2418 @ +0x000 */
    /*   line 2423 @ +0x000 */
    /*   line 2427 @ +0x000 */
    /*   line 2430 @ +0x000 */
    /*   line 2436 @ +0x000 */
    /*   line 2436 @ +0x000 */
    /*   line 2437 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 2390–2407 */
/* addr: 0x002c4c40  size: 220 bytes */
void GLI_vFreeTempMaterial(/* function pointer */ int ppMaterial)
{
    /* line map: */
    /*   line 2390 @ +0x000 */
    /*   line 2395 @ +0x000 */
    /*   line 2398 @ +0x000 */
    /*   line 2401 @ +0x000 */
    /*   line 2404 @ +0x000 */
    /*   line 2407 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 2345–2362 */
/* addr: 0x002c4d20  size: 100 bytes */
void GLI_vFreeTempTexture(GLI_tdstTexture_* p_stTexture)
{
    /* line map: */
    /*   line 2345 @ +0x000 */
    /*   line 2352 @ +0x000 */
    /*   line 2357 @ +0x000 */
    /*   line 2362 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 2299–2328 */
/* addr: 0x002c4d90  size: 240 bytes */
void GLI_xCreateMaterialPS2GL(/* function pointer */ int hMaterial)
{
    /* line map: */
    /*   line 2299 @ +0x000 */
    /*   line 2305 @ +0x000 */
    /*   line 2309 @ +0x000 */
    /*   line 2309 @ +0x000 */
    /*   line 2306 @ +0x000 */
    /*   line 2309 @ +0x000 */
    /*   line 2311 @ +0x000 */
    /*   line 2314 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 2274–2281 */
/* addr: 0x002c4e80  size: 72 bytes */
int GLI_bLoadSnapShotTexture(char* _pFileName)
{
    /* line map: */
    /*   line 2274 @ +0x000 */
    /*   line 2279 @ +0x000 */
    /*   line 2281 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002c4ed0  size: 8 bytes */
void ProcessSky(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 2035–2132 */
/* addr: 0x002c4ee0  size: 784 bytes */
void GLI_vFreeTextureBloc(unsigned int TextureBlocId, GLI_tdstTexture_* p_stTexture)
{
    unsigned int Channel;
    unsigned int lTextureCounter;
    int ChannelHigh;
    int ChannelLow;
    /* line map: */
    /*   line 2035 @ +0x000 */
    /*   line 2035 @ +0x000 */
    /*   line 2035 @ +0x000 */
    /*   line 2035 @ +0x000 */
    /*   line 2035 @ +0x000 */
    /*   line 2041 @ +0x000 */
    /*   line 2044 @ +0x000 */
    /*   line 2048 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1774–2008 */
/* addr: 0x002c51f0  size: 1500 bytes */
void LoadTextureBlocInternal(int DestTextureBlocID, int ChannelId, /* function pointer */ int p_stSpecParam, GLI_tdstTexture_* p_stTexture)
{
    unsigned int Flag;
    unsigned int GL_iTextureFormat;
    int i;
    unsigned int NbTexturesInBloc;
    unsigned int ChannelHigh;
    unsigned int ChannelLow;
    unsigned int lTextureCounter;
    /* line map: */
    /*   line 1774 @ +0x000 */
    /*   line 1777 @ +0x000 */
    /*   line 1780 @ +0x000 */
    /*   line 1783 @ +0x000 */
    /*   line 1790 @ +0x000 */
    /*   line 1797 @ +0x000 */
    /*   line 1803 @ +0x000 */
    /*   line 1811 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1756–1756 */
/* addr: 0x002c57d0  size: 40 bytes */
void DisableAlphaTest(/* function pointer */ int p_stMaterial)
{
    /* line map: */
    /*   line 1756 @ +0x000 */
    /*   line 1756 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1751–1751 */
/* addr: 0x002c5800  size: 32 bytes */
void EnableAlphaTest(/* function pointer */ int p_stMaterial)
{
    /* line map: */
    /*   line 1751 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1741–1741 */
/* addr: 0x002c5820  size: 20 bytes */
void EnableAlpha(/* function pointer */ int p_stMaterial)
{
    /* line map: */
    /*   line 1741 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1714–1728 */
/* addr: 0x002c5840  size: 132 bytes */
int GLI_iLoadMenuTexture(GLI_tdstTexture_* pp_stTexture, char* TxrName, GLI_tdstTexture_* p_stTexture)
{
    /* line map: */
    /*   line 1714 @ +0x000 */
    /*   line 1717 @ +0x000 */
    /*   line 1721 @ +0x000 */
    /*   line 1728 @ +0x000 */
    /*   line 1728 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1686–1686 */
/* addr: 0x002c58d0  size: 24 bytes */
void GLI_vReloadMenuTextureData(/* function pointer */ int pMaterial, void* pWhereToLoad, int TextureName, unsigned int MaxSize)
{
    /* line map: */
    /*   line 1686 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1573–1677 */
/* addr: 0x002c58f0  size: 500 bytes */
int GLI_iLoadTexture(GLI_tdstTexture_* p_stTexture, void* pWhereDoIPutTheData, int MaxFileSize, /* function pointer */ int param3, S_TXR_Header_* pHeader)
{
    unsigned int Flag;
    char* ptr;
    int FileSize;
    char buffer[1024];
    int ReadHandle;
    int TheFile;
    /* line map: */
    /*   line 1573 @ +0x000 */
    /*   line 1578 @ +0x000 */
    /*   line 1580 @ +0x000 */
    /*   line 1589 @ +0x000 */
    /*   line 1601 @ +0x000 */
    /*   line 1609 @ +0x000 */
    /*   line 1628 @ +0x000 */
    /*   line 1634 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1463–1531 */
/* addr: 0x002c5af0  size: 584 bytes */
void GLI_vLoadRasterFontMaterial(S_TXR_Header_* pHeader, /* function pointer */ int p_stSpecParam, GLI_tdstTexture_* p_stTexture)
{
    unsigned int Flag;
    int FileSize;
    int TheFile;
    /* line map: */
    /*   line 1463 @ +0x000 */
    /*   line 1463 @ +0x000 */
    /*   line 1463 @ +0x000 */
    /*   line 1465 @ +0x000 */
    /*   line 1465 @ +0x000 */
    /*   line 1465 @ +0x000 */
    /*   line 1471 @ +0x000 */
    /*   line 1471 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 1075–1208 */
/* addr: 0x002c5d40  size: 1340 bytes */
int GLI_xLoadTextureTXR(GLI_tdstTexture_* p_stTexture, char* FileName)
{
    unsigned int TextureTotalSize;
    S_TXR_Header_ Header;
    int i;
    /* line map: */
    /*   line 1075 @ +0x000 */
    /*   line 1078 @ +0x000 */
    /*   line 1082 @ +0x000 */
    /*   line 1087 @ +0x000 */
    /*   line 1087 @ +0x000 */
    /*   line 1091 @ +0x000 */
    /*   line 1095 @ +0x000 */
    /*   line 1095 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 981–1011 */
/* addr: 0x002c6280  size: 268 bytes */
void GLI_vOpenTXCFile(void)
{
    char* pTemp;
    int TextSize;
    int i;
    /* line map: */
    /*   line 983 @ +0x000 */
    /*   line 981 @ +0x000 */
    /*   line 983 @ +0x000 */
    /*   line 983 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 991 @ +0x000 */
    /*   line 997 @ +0x000 */
    /*   line 1005 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 943–969 */
/* addr: 0x002c6390  size: 232 bytes */
void ReadFromBufferedCD(int MyFile, char* Dest, unsigned int Size)
{
    int AlreadyReadSize;
    /* line map: */
    /*   line 943 @ +0x000 */
    /*   line 950 @ +0x000 */
    /*   line 950 @ +0x000 */
    /*   line 954 @ +0x000 */
    /*   line 955 @ +0x000 */
    /*   line 961 @ +0x000 */
    /*   line 965 @ +0x000 */
    /*   line 969 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 893–912 */
/* addr: 0x002c6480  size: 220 bytes */
void CTL_SetCurrentMap(char* Map)
{
    char Temp[16];
    int i;
    /* line map: */
    /*   line 893 @ +0x000 */
    /*   line 897 @ +0x000 */
    /*   line 899 @ +0x000 */
    /*   line 900 @ +0x000 */
    /*   line 907 @ +0x000 */
    /*   line 912 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 810–879 */
/* addr: 0x002c6560  size: 608 bytes */
void CTL_Load_Ini_File(CTL_MapInfo_* pMap)
{
    char* split1;
    unsigned int FileSize;
    char* TempBuffer;
    unsigned int CurrentTexture;
    unsigned int CurrentMap;
    char TempLine[1024];
    int MyFile;
    /* line map: */
    /*   line 810 @ +0x000 */
    /*   line 814 @ +0x000 */
    /*   line 818 @ +0x000 */
    /*   line 822 @ +0x000 */
    /*   line 825 @ +0x000 */
    /*   line 825 @ +0x000 */
    /*   line 825 @ +0x000 */
    /*   line 825 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 772–797 */
/* addr: 0x002c67c0  size: 328 bytes */
int CTL_ReadLine(char* TempLine)
{
    int eof;
    int i;
    char c;
    /* line map: */
    /*   line 772 @ +0x000 */
    /*   line 777 @ +0x000 */
    /*   line 780 @ +0x000 */
    /*   line 784 @ +0x000 */
    /*   line 787 @ +0x000 */
    /*   line 789 @ +0x000 */
    /*   line 793 @ +0x000 */
    /*   line 797 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 612–697 */
/* addr: 0x002c6910  size: 972 bytes */
void GLI_v_SendTextureBitmapToPS2GL(GLI_tdstTexture_* p_stTexture, unsigned int uTexFormat)
{
    unsigned int CurrentLevel;
    unsigned int CurrentSize;
    unsigned char* ptr;
    unsigned int tx;
    /* line map: */
    /*   line 616 @ +0x000 */
    /*   line 615 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 612 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 615 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 622 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002c6ce0  size: 8 bytes */
void GLI_DRV_vUnLoadTextures(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 550–550 */
/* addr: 0x002c6cf0  size: 112 bytes */
void GLI_vUnloadTexturePartial(unsigned char ucChannel)
{
    /* line map: */
    /*   line 550 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 502–537 */
/* addr: 0x002c6d60  size: 96 bytes */
void GLI_DRV_vDownLoadTextures(void)
{
    /* line map: */
    /*   line 502 @ +0x000 */
    /*   line 512 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 537 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002c6dc0  size: 8 bytes */
void LoadTextureBloc(int DestTextureBlocID, int ChannelId)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 411–474 */
/* addr: 0x002c6dd0  size: 364 bytes */
void GLI_vLoadTBF_File(int DestBlocId, int SourceBlocId)
{
    /* line map: */
    /*   line 411 @ +0x000 */
    /*   line 411 @ +0x000 */
    /*   line 415 @ +0x000 */
    /*   line 418 @ +0x000 */
    /*   line 434 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 444 @ +0x000 */
    /*   line 449 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 378–399 */
/* addr: 0x002c6f40  size: 296 bytes */
void GLI_vProcessRegisteredTextures(GLI_st_RegisteredTexture_* pReg)
{
    unsigned int GL_iTextureFormat;
    unsigned int i;
    /* line map: */
    /*   line 378 @ +0x000 */
    /*   line 381 @ +0x000 */
    /*   line 381 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 389 @ +0x000 */
    /*   line 392 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002c7070  size: 8 bytes */
void GLI_vSetLoadingFix(int BoolVal)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 166–184 */
/* addr: 0x002c7080  size: 152 bytes */
void fn_vFreeInBinaryPreservingTheCurrentMode(void* pointer)
{
    /* line map: */
    /*   line 166 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 174 @ +0x000 */
    /*   line 177 @ +0x000 */
    /*   line 184 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\HdwTx_R3.c lines 143–162 */
/* addr: 0x002c7120  size: 156 bytes */
void fn_pvMallocInBinaryPreservingTheCurrentMode(unsigned int size)
{
    void* pointer;
    /* line map: */
    /*   line 143 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 149 @ +0x000 */
    /*   line 152 @ +0x000 */
    /*   line 157 @ +0x000 */
    /*   line 162 @ +0x000 */
    /* TODO: decompile from asm/... */
}
