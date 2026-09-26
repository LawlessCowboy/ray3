/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_InitContext.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct tagListNode tagListNode;
typedef struct anon_1 anon_1;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_25 anon_25;
typedef struct anon_31 anon_31;
typedef struct anon_36 anon_36;
typedef struct anon_30 anon_30;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_27 anon_27;
typedef struct anon_5 anon_5;
typedef struct anon_12 anon_12;
typedef struct anon_40 anon_40;
typedef struct anon_7 anon_7;
typedef struct anon_34 anon_34;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef union anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_6 anon_6;
typedef struct anon_8 anon_8;
typedef struct SemaParam SemaParam;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_9 anon_9;
typedef struct anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct anon_13 anon_13;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_14 anon_14;
typedef struct anon_15 anon_15;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct tagListData tagListData;
typedef struct anon_21 anon_21;
typedef struct anon_35 anon_35;
typedef struct anon_39 anon_39;
typedef struct anon_26 anon_26;
typedef struct anon_18 anon_18;
typedef struct anon_23 anon_23;
typedef struct anon_24 anon_24;
typedef struct anon_17 anon_17;
typedef struct anon_29 anon_29;
typedef struct anon_28 anon_28;
typedef struct anon_19 anon_19;
typedef struct anon_20 anon_20;
typedef struct anon_41 anon_41;
typedef struct anon_37 anon_37;
typedef struct anon_22 anon_22;
typedef struct anon_32 anon_32;
typedef struct anon_33 anon_33;
typedef struct anon_38 anon_38;
typedef struct tagGScontext tagGScontext;
typedef struct anon_16 anon_16;

struct anon_0 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
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
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
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

struct anon_25 {
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

struct anon_31 {
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

struct anon_36 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_30 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_1 gifTag; /* +0x0 */
    anon_25 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_31 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_36 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_30 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_27 {
    unsigned long pad00; /* +0x0 */
};

struct anon_5 {
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

struct anon_12 {
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
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_7 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_34 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_1 gifTag; /* +0x0 */
    anon_27 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_5 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_12 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_40 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_7 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_34 clamp; /* +0x60 */
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
    anon_6* pCurParamBegin; /* +0x5ce8 */
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
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
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
    anon_1* pGifTagFan; /* +0x6bf8 */
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
    anon_1* pGifTagBuf0; /* +0x6c5c */
    anon_1* pGifTagBuf1; /* +0x6c60 */
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

union anon_2 {
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

struct anon_3 {
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

struct anon_4 {
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

struct anon_6 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct anon_8 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct SemaParam {
    int currentCount; /* +0x0 */
    int maxCount; /* +0x4 */
    int initCount; /* +0x8 */
    int numWaitThreads; /* +0xc */
    unsigned int attr; /* +0x10 */
    unsigned int option; /* +0x14 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
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
    anon_1 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_9 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_10 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_11 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct anon_13 {
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

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_14 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_15 {
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

struct anon_21 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_35 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_39 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_26 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_18 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_23 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_24 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_17 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_29 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_28 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_19 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_20 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_41 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_37 {
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

struct anon_22 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_32 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_33 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_38 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct tagGScontext {
    anon_13 PRIM; /* +0x0 */
    anon_21 RGBAQ; /* +0x8 */
    anon_35 ST; /* +0x10 */
    anon_39 UV; /* +0x18 */
    anon_9 XYZF2; /* +0x20 */
    anon_8 XYZ2; /* +0x28 */
    anon_5 TEX0_1; /* +0x30 */
    anon_5 TEX0_2; /* +0x38 */
    anon_34 CLAMP_1; /* +0x40 */
    anon_34 CLAMP_2; /* +0x48 */
    anon_26 FOG; /* +0x50 */
    anon_9 XYZF3; /* +0x58 */
    anon_8 XYZ3; /* +0x60 */
    anon_12 TEX1_1; /* +0x68 */
    anon_12 TEX1_2; /* +0x70 */
    anon_14 TEX2_1; /* +0x78 */
    anon_14 TEX2_2; /* +0x80 */
    anon_0 XYOFFSET_1; /* +0x88 */
    anon_0 XYOFFSET_2; /* +0x90 */
    anon_18 PRMODECONT; /* +0x98 */
    anon_15 PRMODE; /* +0xa0 */
    anon_23 TEXCLUT; /* +0xa8 */
    anon_24 SCANMSK; /* +0xb0 */
    anon_40 MIPTBP1_1; /* +0xb8 */
    anon_40 MIPTBP1_2; /* +0xc0 */
    anon_7 MIPTBP2_1; /* +0xc8 */
    anon_7 MIPTBP2_2; /* +0xd0 */
    anon_17 TEXA; /* +0xd8 */
    anon_29 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_28 SCISSOR_1; /* +0xf0 */
    anon_28 SCISSOR_2; /* +0xf8 */
    anon_19 ALPHA_1; /* +0x100 */
    anon_19 ALPHA_2; /* +0x108 */
    anon_3 DIMX; /* +0x110 */
    anon_20 DTHE; /* +0x118 */
    anon_41 COLCLAMP; /* +0x120 */
    anon_37 TEST_1; /* +0x128 */
    anon_37 TEST_2; /* +0x130 */
    anon_11 PABE; /* +0x138 */
    anon_22 FBA_1; /* +0x140 */
    anon_22 FBA_2; /* +0x148 */
    anon_32 FRAME_1; /* +0x150 */
    anon_32 FRAME_2; /* +0x158 */
    anon_10 ZBUF_1; /* +0x160 */
    anon_10 ZBUF_2; /* +0x168 */
    anon_25 BITBLTBUF; /* +0x170 */
    anon_31 TRXPOS; /* +0x178 */
    anon_36 TRXREG; /* +0x180 */
    anon_30 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_33 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_38 LABEL; /* +0x1a8 */
    anon_4 ModFlgs; /* +0x1b0 */
    anon_4 GlobalModFlgs; /* +0x1b8 */
    anon_2 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_2* pqCurrent; /* +0x2224 */
    anon_1* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct anon_16 {
    unsigned char sts; /* +0x0 */
    unsigned char std; /* +0x1 */
    unsigned char mfd; /* +0x2 */
    unsigned char rcycle; /* +0x3 */
    unsigned short express; /* +0x4 */
    unsigned short notify; /* +0x6 */
    unsigned short sqwc; /* +0x8 */
    unsigned short tqwc; /* +0xa */
    int rbadr; /* +0xc */
    unsigned int rbmsk; /* +0x10 */
};

unsigned int uiMaxVifDmaBufLength;
int PS2glAllocator;
int PS2glAllocator64;
int PS2glLiberator;
int PS2glReallocator;
int g_FIELD;
int g_waiting;
int PS2GL_thingsToDoWhenYoureDead;
int VBL_Sid;
tagGLcontext g_PS2glContext;
tagGScontext g_gsContext;
tagstVIFCode MSCAL_Code;
float tBuf1_b[4];
float cBuf1_b[4];
float tBuf0_b[4];
float cBuf0_b[4];
float tBuf1[4];
float cBuf1[4];
float nBuf1[4];
float vBuf1[4];
float tBuf0[4];
float cBuf0[4];
float nBuf0[4];
float vBuf0[4];
anon_1 Next_Buf;
anon_1 First_Buf;
float parameters[4][4];
float avv[4][4];
float mh[4][4];
float mS[4][4];
float mVP[4][4];
float mD[4][4];
float vClampLimit[4];
float mModelView[4][4];
float mLocalScreen[4][4];
float mClippingScreen[4][4];
float mNormal[4][4];
float mClipping[4][4];
_sceDmaTag My_vertex_start1;
_sceDmaTag My_vertex_start0;
_sceDmaTag My_dma_next;
_sceDmaTag My_dma_start;
_sceDmaTag My_dma_end;
float matIdentity[4][4];

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_InitContext.c lines 17–1304 */
/* addr: 0x0017e070  size: 7452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 17
 *   +0x0004 -> line 18
 *   +0x0008 -> line 17
 *   +0x000c -> line 18
 *   +0x0010 -> line 17
 *   +0x001c -> line 23
 *   +0x0020 -> line 17
 *   +0x0024 -> line 22
 *   +0x0028 -> line 17
 *   +0x002c -> line 18
 *   +0x0030 -> line 17
 *   +0x003c -> line 18
 *   +0x0040 -> line 28
 *   +0x0a88 -> line 34
 *   +0x0a94 -> line 35
 *   +0x0a9c -> line 37
 *   +0x0aa0 -> line 38
 *   +0x0aac -> line 39
 *   +0x0ab8 -> line 42
 *   +0x0ac0 -> line 44
 *   +0x0ac4 -> line 46
 *   +0x0ac8 -> line 48
 *   +0x0ad0 -> line 54
 *   +0x0adc -> line 55
 *   +0x0ae4 -> line 58
 *   +0x0af4 -> line 59
 *   +0x0afc -> line 62
 *   +0x0b04 -> line 64
 *   +0x0b08 -> line 66
 *   +0x0b0c -> line 68
 *   +0x0b14 -> line 74
 *   +0x0b20 -> line 75
 *   +0x0b28 -> line 77
 *   +0x0b2c -> line 78
 *   +0x0b38 -> line 79
 *   +0x0b44 -> line 82
 *   +0x0b4c -> line 84
 *   +0x0b50 -> line 86
 *   +0x0b54 -> line 88
 *   +0x0b5c -> line 93
 *   +0x0b68 -> line 94
 *   +0x0b70 -> line 96
 *   +0x0b74 -> line 97
 *   +0x0b80 -> line 99
 *   +0x0b84 -> line 100
 *   +0x0b8c -> line 103
 *   +0x0b94 -> line 105
 *   +0x0b98 -> line 107
 *   +0x0b9c -> line 109
 *   +0x0ba4 -> line 114
 *   +0x0bb0 -> line 115
 *   +0x0bb8 -> line 117
 *   +0x0bbc -> line 118
 *   +0x0bc8 -> line 120
 *   +0x0bcc -> line 121
 *   +0x0bd4 -> line 124
 *   +0x0bdc -> line 126
 *   +0x0be0 -> line 128
 *   +0x0be4 -> line 130
 *   +0x0bec -> line 135
 *   +0x0bf8 -> line 136
 *   +0x0c00 -> line 138
 *   +0x0c04 -> line 139
 *   +0x0c10 -> line 141
 *   +0x0c14 -> line 142
 *   +0x0c1c -> line 145
 *   +0x0c24 -> line 147
 *   +0x0c28 -> line 149
 *   +0x0c2c -> line 151
 *   +0x0c34 -> line 155
 *   +0x0c40 -> line 156
 *   +0x0c48 -> line 157
 *   +0x0c58 -> line 158
 *   +0x0c60 -> line 160
 *   +0x0c68 -> line 161
 *   +0x0c6c -> line 163
 *   +0x0c74 -> line 168
 *   +0x0c84 -> line 169
 *   +0x0c8c -> line 170
 *   +0x0c9c -> line 171
 *   +0x0ca8 -> line 173
 *   +0x0cb0 -> line 174
 *   +0x0cb4 -> line 176
 *   +0x0cbc -> line 178
 *   +0x0cc0 -> line 179
 *   +0x0cc4 -> line 178
 *   +0x0cc8 -> line 181
 *   +0x0cd0 -> line 184
 *   +0x0cd4 -> line 186
 *   +0x0cd8 -> line 187
 *   +0x0ce0 -> line 190
 *   +0x0ce4 -> line 192
 *   +0x0ce8 -> line 193
 *   +0x0cf0 -> line 199
 *   +0x0d08 -> line 201
 *   +0x0d0c -> line 202
 *   +0x0d14 -> line 208
 *   +0x0d18 -> line 206
 *   +0x0d24 -> line 210
 *   +0x0d2c -> line 212
 *   +0x0d30 -> line 213
 *   +0x0d34 -> line 215
 *   +0x0d38 -> line 216
 *   +0x0d40 -> line 218
 *   +0x0d44 -> line 220
 *   +0x0d48 -> line 221
 *   +0x0d50 -> line 223
 *   +0x0d54 -> line 224
 *   +0x0d58 -> line 227
 *   +0x0d60 -> line 229
 *   +0x0d68 -> line 231
 *   +0x0d6c -> line 229
 *   +0x0d74 -> line 233
 *   +0x0d7c -> line 235
 *   +0x0d80 -> line 236
 *   +0x0d84 -> line 237
 *   +0x0d88 -> line 236
 *   +0x0d8c -> line 237
 *   +0x0d98 -> line 238
 *   +0x0da4 -> line 239
 *   +0x0da8 -> line 241
 *   +0x0db0 -> line 245
 *   +0x0db4 -> line 243
 *   +0x0dc0 -> line 247
 *   +0x0dc8 -> line 249
 *   +0x0dcc -> line 250
 *   +0x0dd0 -> line 252
 *   +0x0dd4 -> line 253
 *   +0x0ddc -> line 255
 *   +0x0de0 -> line 256
 *   +0x0de4 -> line 258
 *   +0x0de8 -> line 259
 *   +0x0df0 -> line 261
 *   +0x0df4 -> line 263
 *   +0x0df8 -> line 264
 *   +0x0e00 -> line 272
 *   +0x0e24 -> line 273
 *   +0x0e28 -> line 275
 *   +0x0e30 -> line 277
 *   +0x0e34 -> line 279
 *   +0x0e38 -> line 280
 *   +0x0e40 -> line 283
 *   +0x0e44 -> line 285
 *   +0x0e48 -> line 286
 *   +0x0e50 -> line 295
 *   +0x0e64 -> line 296
 *   +0x0e68 -> line 297
 *   +0x0e6c -> line 298
 *   +0x0e74 -> line 300
 *   +0x0e78 -> line 301
 *   +0x0e7c -> line 300
 *   +0x0e80 -> line 303
 *   +0x0e88 -> line 307
 *   +0x0e8c -> line 305
 *   +0x0e98 -> line 309
 *   +0x0ea0 -> line 311
 *   +0x0ea4 -> line 312
 *   +0x0ea8 -> line 314
 *   +0x0eac -> line 315
 *   +0x0eb4 -> line 317
 *   +0x0eb8 -> line 318
 *   +0x0ebc -> line 320
 *   +0x0ec0 -> line 321
 *   +0x0ec8 -> line 323
 *   +0x0ecc -> line 324
 *   +0x0ed0 -> line 323
 *   +0x0ed4 -> line 326
 *   +0x0edc -> line 330
 *   +0x0ee0 -> line 328
 *   +0x0eec -> line 332
 *   +0x0ef4 -> line 334
 *   +0x0ef8 -> line 335
 *   +0x0efc -> line 337
 *   +0x0f00 -> line 338
 *   +0x0f08 -> line 341
 *   +0x0f14 -> line 345
 *   +0x0f18 -> line 346
 *   +0x0f1c -> line 341
 *   +0x0f24 -> line 347
 *   +0x0f2c -> line 351
 *   +0x0f30 -> line 352
 *   +0x0f34 -> line 351
 *   +0x0f38 -> line 354
 *   +0x0f40 -> line 357
 *   +0x0f4c -> line 361
 *   +0x0f50 -> line 362
 *   +0x0f54 -> line 357
 *   +0x0f5c -> line 363
 *   +0x0f64 -> line 365
 *   +0x0f68 -> line 367
 *   +0x0f6c -> line 368
 *   +0x0f74 -> line 370
 *   +0x0f78 -> line 371
 *   +0x0f7c -> line 373
 *   +0x0f80 -> line 374
 *   +0x0f88 -> line 376
 *   +0x0f8c -> line 378
 *   +0x0f90 -> line 379
 *   +0x0f98 -> line 381
 *   +0x0f9c -> line 382
 *   +0x0fa0 -> line 384
 *   +0x0fa4 -> line 385
 *   +0x0fac -> line 387
 *   +0x0fb0 -> line 388
 *   +0x0fb4 -> line 387
 *   +0x0fb8 -> line 390
 *   +0x0fc0 -> line 392
 *   +0x0fc4 -> line 394
 *   +0x0fc8 -> line 395
 *   +0x0fd0 -> line 400
 *   +0x0fd4 -> line 397
 *   +0x0fe0 -> line 401
 *   +0x0fe8 -> line 403
 *   +0x0fec -> line 404
 *   +0x0ff0 -> line 406
 *   +0x0ff4 -> line 407
 *   +0x0ffc -> line 411
 *   +0x1000 -> line 409
 *   +0x100c -> line 413
 *   +0x1014 -> line 417
 *   +0x1018 -> line 415
 *   +0x101c -> line 419
 *   +0x1024 -> line 421
 *   +0x1028 -> line 422
 *   +0x102c -> line 424
 *   +0x1030 -> line 425
 *   +0x1038 -> line 432
 *   +0x103c -> line 429
 *   +0x1048 -> line 433
 *   +0x1050 -> line 435
 *   +0x1054 -> line 436
 *   +0x1058 -> line 435
 *   +0x105c -> line 438
 *   +0x1064 -> line 440
 *   +0x1068 -> line 442
 *   +0x106c -> line 443
 *   +0x1074 -> line 445
 *   +0x1078 -> line 447
 *   +0x107c -> line 448
 *   +0x1084 -> line 452
 *   +0x1088 -> line 454
 *   +0x108c -> line 455
 *   +0x1094 -> line 457
 *   +0x1098 -> line 458
 *   +0x109c -> line 460
 *   +0x10a0 -> line 461
 *   +0x10a8 -> line 463
 *   +0x10ac -> line 465
 *   +0x10b0 -> line 466
 *   +0x10b8 -> line 468
 *   +0x10bc -> line 469
 *   +0x10c0 -> line 471
 *   +0x10c4 -> line 472
 *   +0x10cc -> line 474
 *   +0x10d0 -> line 476
 *   +0x10d4 -> line 477
 *   +0x10dc -> line 479
 *   +0x10e0 -> line 481
 *   +0x10e4 -> line 482
 *   +0x10ec -> line 497
 *   +0x10f8 -> line 498
 *   +0x1100 -> line 501
 *   +0x110c -> line 502
 *   +0x1114 -> line 505
 *   +0x1120 -> line 506
 *   +0x1128 -> line 509
 *   +0x1134 -> line 510
 *   +0x113c -> line 513
 *   +0x1148 -> line 514
 *   +0x1150 -> line 517
 *   +0x115c -> line 518
 *   +0x1164 -> line 521
 *   +0x1170 -> line 522
 *   +0x1178 -> line 525
 *   +0x1188 -> line 528
 *   +0x118c -> line 529
 *   +0x1190 -> line 531
 *   +0x1198 -> line 536
 *   +0x119c -> line 534
 *   +0x11a8 -> line 538
 *   +0x11b0 -> line 540
 *   +0x11b4 -> line 541
 *   +0x11bc -> line 545
 *   +0x11c0 -> line 549
 *   +0x11c8 -> line 562
 *   +0x11cc -> line 561
 *   +0x11d0 -> line 565
 *   +0x11d8 -> line 571
 *   +0x11dc -> line 572
 *   +0x11e0 -> line 574
 *   +0x11e4 -> line 575
 *   +0x11ec -> line 582
 *   +0x11f8 -> line 583
 *   +0x11fc -> line 585
 *   +0x1200 -> line 582
 *   +0x1204 -> line 586
 *   +0x120c -> line 640
 *   +0x1210 -> line 641
 *   +0x1214 -> line 643
 *   +0x1218 -> line 644
 *   +0x1220 -> line 646
 *   +0x1224 -> line 647
 *   +0x1228 -> line 650
 *   +0x1230 -> line 657
 *   +0x1234 -> line 656
 *   +0x1238 -> line 657
 *   +0x123c -> line 660
 *   +0x1244 -> line 664
 *   +0x1248 -> line 665
 *   +0x124c -> line 668
 *   +0x1254 -> line 674
 *   +0x1258 -> line 675
 *   +0x125c -> line 678
 *   +0x1264 -> line 680
 *   +0x1268 -> line 681
 *   +0x126c -> line 684
 *   +0x1274 -> line 687
 *   +0x1278 -> line 688
 *   +0x127c -> line 691
 *   +0x1284 -> line 695
 *   +0x1288 -> line 694
 *   +0x128c -> line 695
 *   +0x1290 -> line 698
 *   +0x1298 -> line 702
 *   +0x129c -> line 703
 *   +0x12a0 -> line 702
 *   +0x12a4 -> line 705
 *   +0x12ac -> line 707
 *   +0x12b0 -> line 708
 *   +0x12b4 -> line 707
 *   +0x12b8 -> line 710
 *   +0x12c0 -> line 712
 *   +0x12c4 -> line 713
 *   +0x12c8 -> line 712
 *   +0x12cc -> line 715
 *   +0x12d4 -> line 717
 *   +0x12d8 -> line 718
 *   +0x12dc -> line 717
 *   +0x12e0 -> line 720
 *   +0x12e8 -> line 722
 *   +0x12ec -> line 723
 *   +0x12f0 -> line 725
 *   +0x12f4 -> line 726
 *   +0x12fc -> line 732
 *   +0x1300 -> line 730
 *   +0x130c -> line 734
 *   +0x1314 -> line 737
 *   +0x1318 -> line 736
 *   +0x131c -> line 740
 *   +0x1324 -> line 747
 *   +0x1328 -> line 746
 *   +0x132c -> line 750
 *   +0x1334 -> line 753
 *   +0x1338 -> line 752
 *   +0x133c -> line 756
 *   +0x1344 -> line 794
 *   +0x1348 -> line 795
 *   +0x134c -> line 794
 *   +0x1350 -> line 796
 *   +0x1354 -> line 795
 *   +0x1358 -> line 798
 *   +0x1360 -> line 806
 *   +0x1364 -> line 807
 *   +0x1368 -> line 806
 *   +0x136c -> line 809
 *   +0x1374 -> line 811
 *   +0x1378 -> line 812
 *   +0x137c -> line 814
 *   +0x1380 -> line 815
 *   +0x1388 -> line 817
 *   +0x138c -> line 818
 *   +0x1390 -> line 820
 *   +0x1394 -> line 821
 *   +0x139c -> line 823
 *   +0x13a0 -> line 825
 *   +0x13a4 -> line 826
 *   +0x13ac -> line 828
 *   +0x13b0 -> line 830
 *   +0x13b4 -> line 831
 *   +0x13bc -> line 833
 *   +0x13c0 -> line 834
 *   +0x13c4 -> line 837
 *   +0x13cc -> line 839
 *   +0x13d0 -> line 843
 *   +0x13d8 -> line 845
 *   +0x13dc -> line 846
 *   +0x13e0 -> line 845
 *   +0x13e4 -> line 848
 *   +0x13ec -> line 852
 *   +0x13f0 -> line 850
 *   +0x13fc -> line 854
 *   +0x1404 -> line 856
 *   +0x1408 -> line 857
 *   +0x140c -> line 859
 *   +0x1410 -> line 860
 *   +0x1418 -> line 887
 *   +0x1424 -> line 894
 *   +0x1428 -> line 887
 *   +0x143c -> line 896
 *   +0x1444 -> line 899
 *   +0x1450 -> line 906
 *   +0x1454 -> line 899
 *   +0x1468 -> line 908
 *   +0x1470 -> line 910
 *   +0x1474 -> line 911
 *   +0x1478 -> line 913
 *   +0x147c -> line 914
 *   +0x1484 -> line 918
 *   +0x1488 -> line 916
 *   +0x1494 -> line 920
 *   +0x149c -> line 935
 *   +0x14a8 -> line 939
 *   +0x14ac -> line 940
 *   +0x14b0 -> line 935
 *   +0x14b8 -> line 941
 *   +0x14c0 -> line 952
 *   +0x14cc -> line 951
 *   +0x14d0 -> line 952
 *   +0x14d4 -> line 954
 *   +0x14d8 -> line 952
 *   +0x14dc -> line 955
 *   +0x14e4 -> line 957
 *   +0x14e8 -> line 959
 *   +0x14ec -> line 960
 *   +0x14f4 -> line 962
 *   +0x14f8 -> line 964
 *   +0x14fc -> line 966
 *   +0x1500 -> line 967
 *   +0x1508 -> line 970
 *   +0x150c -> line 969
 *   +0x1510 -> line 970
 *   +0x1514 -> line 973
 *   +0x151c -> line 978
 *   +0x1520 -> line 977
 *   +0x1524 -> line 981
 *   +0x152c -> line 984
 *   +0x1530 -> line 983
 *   +0x1534 -> line 987
 *   +0x153c -> line 990
 *   +0x1540 -> line 989
 *   +0x1544 -> line 993
 *   +0x154c -> line 997
 *   +0x1554 -> line 999
 *   +0x1558 -> line 997
 *   +0x155c -> line 1000
 *   +0x1560 -> line 997
 *   +0x1564 -> line 999
 *   +0x157c -> line 1000
 *   +0x1584 -> line 1001
 *   +0x158c -> line 1000
 *   +0x1594 -> line 1001
 *   +0x159c -> line 1002
 *   +0x15a0 -> line 1001
 *   +0x15a4 -> line 1002
 *   +0x15a8 -> line 1001
 *   +0x15ac -> line 1002
 *   +0x15b4 -> line 1003
 *   +0x15cc -> line 1004
 *   +0x15d0 -> line 1005
 *   +0x15d4 -> line 1007
 *   +0x15dc -> line 1011
 *   +0x15e0 -> line 1010
 *   +0x15e4 -> line 1011
 *   +0x15e8 -> line 1012
 *   +0x15ec -> line 1014
 *   +0x15f4 -> line 1017
 *   +0x15f8 -> line 1019
 *   +0x15fc -> line 1020
 *   +0x1604 -> line 1022
 *   +0x1608 -> line 1024
 *   +0x160c -> line 1025
 *   +0x1614 -> line 1027
 *   +0x1618 -> line 1029
 *   +0x161c -> line 1030
 *   +0x1624 -> line 1032
 *   +0x1628 -> line 1034
 *   +0x162c -> line 1035
 *   +0x1634 -> line 1037
 *   +0x1638 -> line 1039
 *   +0x163c -> line 1040
 *   +0x1644 -> line 1043
 *   +0x1650 -> line 1045
 *   +0x1654 -> line 1043
 *   +0x165c -> line 1046
 *   +0x1664 -> line 1048
 *   +0x1670 -> line 1050
 *   +0x1674 -> line 1048
 *   +0x167c -> line 1051
 *   +0x1684 -> line 1053
 *   +0x1690 -> line 1055
 *   +0x1694 -> line 1053
 *   +0x169c -> line 1056
 *   +0x16a4 -> line 1075
 *   +0x16a8 -> line 1077
 *   +0x16ac -> line 1078
 *   +0x16b4 -> line 1080
 *   +0x16b8 -> line 1082
 *   +0x16bc -> line 1083
 *   +0x16c4 -> line 1086
 *   +0x16d0 -> line 1091
 *   +0x16d4 -> line 1086
 *   +0x16dc -> line 1092
 *   +0x16e4 -> line 1095
 *   +0x16f0 -> line 1100
 *   +0x16f4 -> line 1095
 *   +0x16fc -> line 1101
 *   +0x1704 -> line 1104
 *   +0x1710 -> line 1109
 *   +0x1714 -> line 1104
 *   +0x171c -> line 1110
 *   +0x1724 -> line 1112
 *   +0x1728 -> line 1114
 *   +0x172c -> line 1115
 *   +0x1734 -> line 1117
 *   +0x1738 -> line 1118
 *   +0x173c -> line 1117
 *   +0x1740 -> line 1120
 *   +0x1748 -> line 1122
 *   +0x174c -> line 1124
 *   +0x1750 -> line 1125
 *   +0x1758 -> line 1127
 *   +0x175c -> line 1129
 *   +0x1760 -> line 1130
 *   +0x1768 -> line 1138
 *   +0x176c -> line 1139
 *   +0x1770 -> line 1141
 *   +0x1774 -> line 1139
 *   +0x1778 -> line 1142
 *   +0x1780 -> line 1152
 *   +0x1784 -> line 1151
 *   +0x1788 -> line 1152
 *   +0x1794 -> line 1153
 *   +0x1798 -> line 1155
 *   +0x17a0 -> line 1161
 *   +0x17b0 -> line 1162
 *   +0x17b4 -> line 1163
 *   +0x17b8 -> line 1167
 *   +0x17c4 -> line 1169
 *   +0x17f4 -> line 1171
 *   +0x17f8 -> line 1172
 *   +0x1820 -> line 1175
 *   +0x182c -> line 1176
 *   +0x1834 -> line 1177
 *   +0x1838 -> line 1178
 *   +0x1844 -> line 1179
 *   +0x184c -> line 1180
 *   +0x1850 -> line 1181
 *   +0x185c -> line 1182
 *   +0x1864 -> line 1183
 *   +0x1868 -> line 1184
 *   +0x1874 -> line 1185
 *   +0x187c -> line 1186
 *   +0x1880 -> line 1187
 *   +0x188c -> line 1188
 *   +0x1894 -> line 1189
 *   +0x1898 -> line 1190
 *   +0x18a4 -> line 1191
 *   +0x18ac -> line 1192
 *   +0x18b0 -> line 1193
 *   +0x18bc -> line 1194
 *   +0x18c4 -> line 1195
 *   +0x18c8 -> line 1196
 *   +0x1918 -> line 1197
 *   +0x1920 -> line 1199
 *   +0x1930 -> line 1202
 *   +0x1938 -> line 1205
 *   +0x1960 -> line 1208
 *   +0x196c -> line 1209
 *   +0x1974 -> line 1210
 *   +0x1978 -> line 1211
 *   +0x1984 -> line 1212
 *   +0x198c -> line 1213
 *   +0x1990 -> line 1214
 *   +0x199c -> line 1215
 *   +0x19a4 -> line 1216
 *   +0x19a8 -> line 1217
 *   +0x19b4 -> line 1218
 *   +0x19bc -> line 1219
 *   +0x19c0 -> line 1220
 *   +0x19cc -> line 1221
 *   +0x19d4 -> line 1222
 *   +0x19d8 -> line 1223
 *   +0x19e4 -> line 1224
 *   +0x19ec -> line 1225
 *   +0x19f0 -> line 1226
 *   +0x19fc -> line 1227
 *   +0x1a04 -> line 1228
 *   +0x1a08 -> line 1229
 *   +0x1a20 -> line 1230
 *   +0x1a28 -> line 1232
 *   +0x1a38 -> line 1235
 *   +0x1a40 -> line 1238
 *   +0x1a68 -> line 1241
 *   +0x1aa0 -> line 1242
 *   +0x1aa8 -> line 1244
 *   +0x1abc -> line 1245
 *   +0x1ac4 -> line 1246
 *   +0x1ac8 -> line 1247
 *   +0x1b00 -> line 1248
 *   +0x1b08 -> line 1250
 *   +0x1b1c -> line 1251
 *   +0x1b24 -> line 1252
 *   +0x1b28 -> line 1253
 *   +0x1b60 -> line 1254
 *   +0x1b68 -> line 1256
 *   +0x1b78 -> line 1257
 *   +0x1b80 -> line 1259
 *   +0x1bb8 -> line 1260
 *   +0x1bc0 -> line 1262
 *   +0x1bcc -> line 1263
 *   +0x1bd4 -> line 1264
 *   +0x1bd8 -> line 1265
 *   +0x1be8 -> line 1268
 *   +0x1bf0 -> line 1271
 *   +0x1c18 -> line 1274
 *   +0x1c28 -> line 1275
 *   +0x1c30 -> line 1277
 *   +0x1c40 -> line 1278
 *   +0x1c48 -> line 1280
 *   +0x1c58 -> line 1281
 *   +0x1c60 -> line 1283
 *   +0x1c70 -> line 1284
 *   +0x1c78 -> line 1286
 *   +0x1c88 -> line 1287
 *   +0x1c90 -> line 1289
 *   +0x1ca0 -> line 1290
 *   +0x1ca8 -> line 1292
 *   +0x1cb8 -> line 1293
 *   +0x1cc0 -> line 1295
 *   +0x1cd0 -> line 1296
 *   +0x1cd8 -> line 1298
 *   +0x1ce8 -> line 1303
 *   +0x1cf8 -> line 1304
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glGet(unsigned int type, unsigned int pname, void* params)
{
    tagListData** ppListData;
    tagListData* pListData;
    float ViewPort[4];
    int I;
    int length;
    unsigned int rawType;
    void* pValues;
    unsigned int uiValue;
    int iValue;
    signed char Values[16];
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_InitContext.c lines 898–899 */
/* addr: 0x0017fd90  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 898
 *   +0x0020 -> line 899
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2GL_fn_pvEndOfDMABuffer(int BufferNb)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_InitContext.c lines 837–891 */
/* addr: 0x0017fdc0  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 837
 *   +0x0004 -> line 841
 *   +0x0008 -> line 837
 *   +0x000c -> line 841
 *   +0x0014 -> line 844
 *   +0x0030 -> line 849
 *   +0x003c -> line 855
 *   +0x0044 -> line 856
 *   +0x004c -> line 857
 *   +0x0050 -> line 858
 *   +0x005c -> line 859
 *   +0x0064 -> line 863
 *   +0x0070 -> line 864
 *   +0x008c -> line 867
 *   +0x00a4 -> line 869
 *   +0x00a8 -> line 867
 *   +0x00cc -> line 869
 *   +0x00d4 -> line 870
 *   +0x00dc -> line 873
 *   +0x00f0 -> line 891
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glInit(void)
{
    anon_16 denv;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_InitContext.c lines 803–828 */
/* addr: 0x0017fec0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 803
 *   +0x0004 -> line 809
 *   +0x0008 -> line 803
 *   +0x000c -> line 809
 *   +0x0010 -> line 811
 *   +0x001c -> line 813
 *   +0x0024 -> line 822
 *   +0x002c -> line 828
 *   +0x0030 -> line 827
 *   +0x0034 -> line 828
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MyGsSyncV(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_InitContext.c lines 770–783 */
/* addr: 0x0017ff00  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 770
 *   +0x0004 -> line 772
 *   +0x0008 -> line 770
 *   +0x000c -> line 772
 *   +0x0024 -> line 774
 *   +0x0030 -> line 776
 *   +0x003c -> line 779
 *   +0x0044 -> line 783
 *   +0x0048 -> line 782
 *   +0x004c -> line 783
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int VBLCallback(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_InitContext.c lines 649–749 */
/* addr: 0x0017ff60  size: 1064 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 649
 *   +0x0004 -> line 652
 *   +0x0008 -> line 649
 *   +0x000c -> line 658
 *   +0x0010 -> line 649
 *   +0x0014 -> line 652
 *   +0x0018 -> line 649
 *   +0x001c -> line 658
 *   +0x0020 -> line 649
 *   +0x0024 -> line 658
 *   +0x0028 -> line 649
 *   +0x002c -> line 658
 *   +0x0030 -> line 649
 *   +0x0048 -> line 652
 *   +0x004c -> line 658
 *   +0x0054 -> line 660
 *   +0x0060 -> line 661
 *   +0x0080 -> line 666
 *   +0x0088 -> line 669
 *   +0x0098 -> line 670
 *   +0x00a8 -> line 672
 *   +0x00b4 -> line 674
 *   +0x00cc -> line 675
 *   +0x00d0 -> line 674
 *   +0x00d8 -> line 675
 *   +0x00e8 -> line 676
 *   +0x00f4 -> line 677
 *   +0x0108 -> line 680
 *   +0x010c -> line 681
 *   +0x0110 -> line 680
 *   +0x0114 -> line 740
 *   +0x0118 -> line 680
 *   +0x011c -> line 681
 *   +0x0124 -> line 680
 *   +0x0128 -> line 682
 *   +0x012c -> line 738
 *   +0x0130 -> line 682
 *   +0x0134 -> line 741
 *   +0x0138 -> line 681
 *   +0x013c -> line 682
 *   +0x0144 -> line 747
 *   +0x0148 -> line 684
 *   +0x014c -> line 738
 *   +0x0150 -> line 684
 *   +0x0154 -> line 740
 *   +0x0158 -> line 684
 *   +0x015c -> line 741
 *   +0x0160 -> line 685
 *   +0x0164 -> line 684
 *   +0x0168 -> line 685
 *   +0x016c -> line 747
 *   +0x0170 -> line 685
 *   +0x0174 -> line 747
 *   +0x0178 -> line 685
 *   +0x017c -> line 747
 *   +0x0180 -> line 686
 *   +0x0184 -> line 747
 *   +0x0188 -> line 686
 *   +0x018c -> line 747
 *   +0x0190 -> line 686
 *   +0x0194 -> line 687
 *   +0x0198 -> line 686
 *   +0x019c -> line 687
 *   +0x01a8 -> line 688
 *   +0x01b4 -> line 690
 *   +0x01b8 -> line 688
 *   +0x01bc -> line 690
 *   +0x01c8 -> line 693
 *   +0x01d4 -> line 694
 *   +0x01d8 -> line 693
 *   +0x01dc -> line 694
 *   +0x01e8 -> line 695
 *   +0x01f4 -> line 696
 *   +0x01f8 -> line 695
 *   +0x01fc -> line 696
 *   +0x0208 -> line 698
 *   +0x0214 -> line 704
 *   +0x0218 -> line 698
 *   +0x021c -> line 704
 *   +0x0220 -> line 700
 *   +0x0224 -> line 704
 *   +0x0228 -> line 724
 *   +0x0234 -> line 725
 *   +0x023c -> line 700
 *   +0x0240 -> line 725
 *   +0x0244 -> line 700
 *   +0x0248 -> line 727
 *   +0x024c -> line 701
 *   +0x0250 -> line 727
 *   +0x0254 -> line 733
 *   +0x0258 -> line 727
 *   +0x025c -> line 733
 *   +0x0260 -> line 728
 *   +0x0264 -> line 733
 *   +0x0268 -> line 728
 *   +0x026c -> line 739
 *   +0x0270 -> line 728
 *   +0x0274 -> line 739
 *   +0x0278 -> line 729
 *   +0x027c -> line 701
 *   +0x0280 -> line 729
 *   +0x0284 -> line 701
 *   +0x0288 -> line 729
 *   +0x028c -> line 730
 *   +0x0298 -> line 732
 *   +0x02a4 -> line 734
 *   +0x02b0 -> line 735
 *   +0x02bc -> line 744
 *   +0x02c8 -> line 702
 *   +0x02d4 -> line 704
 *   +0x02d8 -> line 705
 *   +0x02e4 -> line 707
 *   +0x02f0 -> line 709
 *   +0x02fc -> line 710
 *   +0x0308 -> line 711
 *   +0x0314 -> line 712
 *   +0x0320 -> line 713
 *   +0x032c -> line 715
 *   +0x0338 -> line 716
 *   +0x0344 -> line 717
 *   +0x0350 -> line 718
 *   +0x035c -> line 719
 *   +0x0368 -> line 720
 *   +0x0374 -> line 721
 *   +0x0380 -> line 722
 *   +0x038c -> line 724
 *   +0x0390 -> line 725
 *   +0x0394 -> line 727
 *   +0x0398 -> line 728
 *   +0x039c -> line 729
 *   +0x03a0 -> line 730
 *   +0x03a4 -> line 732
 *   +0x03a8 -> line 733
 *   +0x03ac -> line 734
 *   +0x03b0 -> line 735
 *   +0x03b4 -> line 738
 *   +0x03b8 -> line 739
 *   +0x03bc -> line 740
 *   +0x03c0 -> line 741
 *   +0x03c4 -> line 744
 *   +0x03c8 -> line 747
 *   +0x03d4 -> line 748
 *   +0x03f8 -> line 749
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void InitVU1Package(tagGLcontext* pCtx)
{
    int iOffset;
    unsigned char regs[3];
    /* TODO: decompile from asm/... */
}
