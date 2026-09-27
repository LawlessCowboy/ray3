/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tagGLtexblock tagGLtexblock;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_8 anon_8;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct anon_9 anon_9;
typedef struct anon_16 anon_16;
typedef struct anon_21 anon_21;
typedef struct anon_15 anon_15;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tag_stVU1MatriceBS tag_stVU1MatriceBS;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_12 anon_12;
typedef struct anon_31 anon_31;
typedef struct anon_37 anon_37;
typedef struct anon_25 anon_25;
typedef struct anon_32 anon_32;
typedef struct anon_19 anon_19;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct tagListData tagListData;
typedef struct anon_6 anon_6;
typedef struct tagSPRInfo tagSPRInfo;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_7 anon_7;
typedef struct anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct anon_13 anon_13;
typedef struct anon_14 anon_14;
typedef struct tag_stVU1MatriceToutSDL tag_stVU1MatriceToutSDL;
typedef struct tagListNode tagListNode;
typedef struct tag_stVU1ObjectBS tag_stVU1ObjectBS;
typedef struct anon_17 anon_17;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct tag_stVU1MatriceL tag_stVU1MatriceL;
typedef struct anon_18 anon_18;
typedef struct anon_20 anon_20;
typedef struct anon_22 anon_22;
typedef struct tag_stVU1CurrentFrame tag_stVU1CurrentFrame;
typedef struct anon_23 anon_23;
typedef struct PS2GL_VU1_InterpolMatrixData_ PS2GL_VU1_InterpolMatrixData_;
typedef struct tag_stVU1MatriceT tag_stVU1MatriceT;
typedef struct anon_24 anon_24;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_26 anon_26;
typedef union anon_27 anon_27;
typedef struct anon_28 anon_28;
typedef struct anon_29 anon_29;
typedef struct anon_30 anon_30;
typedef struct anon_33 anon_33;
typedef struct anon_34 anon_34;
typedef struct anon_35 anon_35;
typedef struct anon_36 anon_36;
typedef struct anon_38 anon_38;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tag_stVU1MatriceTinSDL tag_stVU1MatriceTinSDL;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct anon_39 anon_39;
typedef struct anon_40 anon_40;
typedef struct tagGScontext tagGScontext;

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_8 {
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

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    anon_8 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_0 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_1 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_2 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_3 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_9 {
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

struct anon_16 {
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
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_15 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_8 gifTag; /* +0x0 */
    anon_9 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_16 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_21 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_15 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct tag_stVU1MatriceBS {
    int ivUnpackCode[4]; /* +0x0 */
    float mFrustumNormal[4][4]; /* +0x10 */
    float mGuardBandNormal[4][4]; /* +0x50 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
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

struct anon_12 {
    unsigned long pad00; /* +0x0 */
};

struct anon_31 {
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

struct anon_37 {
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

struct anon_25 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_32 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_19 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_8 gifTag; /* +0x0 */
    anon_12 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_31 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_37 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_25 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_32 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_19 clamp; /* +0x60 */
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
    int ePolygonMode; /* +0x1c */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x20..0x23 */
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
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x10c..0x10f */
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
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x244..0x24f */
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
    anon_11* pCurParamBegin; /* +0x5ce8 */
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
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x6004..0x600f */
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
    unsigned char _extractor_padding_04[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    float valistColor[2][4]; /* +0x6120 */
    float (*pvlistColor)[4]; /* +0x6140 */
    unsigned char _extractor_padding_05[12]; /* implicitly added by extractor; +0x6144..0x614f */
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
    unsigned char _extractor_padding_06[12]; /* implicitly added by extractor; +0x6334..0x633f */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    unsigned char _extractor_padding_07[12]; /* implicitly added by extractor; +0x67c4..0x67cf */
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
    anon_8* pGifTagFan; /* +0x6bf8 */
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
    anon_8* pGifTagBuf0; /* +0x6c5c */
    anon_8* pGifTagBuf1; /* +0x6c60 */
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
    unsigned char _extractor_padding_08[4]; /* implicitly added by extractor; +0x6c9c..0x6c9f */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

struct anon_4 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_5 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
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

struct anon_6 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct tagSPRInfo {
    unsigned int uiState; /* +0x0 */
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

struct anon_7 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_10 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_11 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct anon_13 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_14 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct tag_stVU1MatriceToutSDL {
    _sceDmaTag tagDMA; /* +0x0 */
    int ivUnpackCode[4]; /* +0x10 */
    float mClippingScreen[4][4]; /* +0x20 */
    int ivUnpackCode2[4]; /* +0x60 */
    float mProjection[4][4]; /* +0x70 */
    float mWorldView[4][4]; /* +0xb0 */
    float mGuardBandProjection[4][4]; /* +0xf0 */
    float mGuardBandClipping[4][4]; /* +0x130 */
    float mGuardBandClippingScreen[4][4]; /* +0x170 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct tag_stVU1ObjectBS {
    int ivUnpackCode[4]; /* +0x0 */
    float vObjectBS[4]; /* +0x10 */
};

struct anon_17 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
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

struct tag_stVU1MatriceL {
    int ivUnpackCode[4]; /* +0x0 */
    float mDiffuseLightColor[4][4]; /* +0x10 */
    float mDiffuseLightPosition[4][4]; /* +0x50 */
    float mSpecularLightColor[4][4]; /* +0x90 */
    float mSpecularLightReflection[4][4]; /* +0xd0 */
};

struct anon_18 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_20 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_22 {
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

struct tag_stVU1CurrentFrame {
    _sceDmaTag tagDMA; /* +0x0 */
    int ivUnpackCode[4]; /* +0x10 */
    float m_CurrentFrame[4]; /* +0x20 */
};

struct anon_23 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct PS2GL_VU1_InterpolMatrixData_ {
    tag_stVU1MatriceT* pstMatriceT; /* +0x0 */
    unsigned int Mode; /* +0x4 */
    int Compute; /* +0x8 */
    char bMirror; /* +0xc */
    char bStore; /* +0xd */
    float OriginalModelView[4][4]; /* +0x10 */
    float ProjectionMatrix[4][4]; /* +0x50 */
    float GuardBandProjectionMatrix[4][4]; /* +0x90 */
    float (*pCameraMatrix)[4][4]; /* +0xd0 */
};

struct tag_stVU1MatriceT {
    int ivUnpackCode[4]; /* +0x0 */
    float mClipping[4][4]; /* +0x10 */
    float mNormal[4][4]; /* +0x50 */
    float mClippingScreen[4][4]; /* +0x90 */
    int ivUnpackCode2[4]; /* +0xd0 */
    float mLocalScreen[4][4]; /* +0xe0 */
    float mModelView[4][4]; /* +0x120 */
    int ivUnpackCode3[4]; /* +0x160 */
    float mGuardBandClipping[4][4]; /* +0x170 */
    float mGuardBandClippingScreen[4][4]; /* +0x1b0 */
};

struct anon_24 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
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

struct anon_26 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

union anon_27 {
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

struct anon_28 {
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

struct anon_29 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
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

struct anon_33 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_34 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_35 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_36 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_38 {
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

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct tag_stVU1MatriceTinSDL {
    int ivUnpackCode[4]; /* +0x0 */
    float mLocalWorld[4][4]; /* +0x10 */
    float mNormal[4][4]; /* +0x50 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct anon_39 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_40 {
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

struct tagGScontext {
    anon_38 PRIM; /* +0x0 */
    anon_4 RGBAQ; /* +0x8 */
    anon_20 ST; /* +0x10 */
    anon_24 UV; /* +0x18 */
    anon_34 XYZF2; /* +0x20 */
    anon_33 XYZ2; /* +0x28 */
    anon_31 TEX0_1; /* +0x30 */
    anon_31 TEX0_2; /* +0x38 */
    anon_19 CLAMP_1; /* +0x40 */
    anon_19 CLAMP_2; /* +0x48 */
    anon_10 FOG; /* +0x50 */
    anon_34 XYZF3; /* +0x58 */
    anon_33 XYZ3; /* +0x60 */
    anon_37 TEX1_1; /* +0x68 */
    anon_37 TEX1_2; /* +0x70 */
    anon_39 TEX2_1; /* +0x78 */
    anon_39 TEX2_2; /* +0x80 */
    anon_29 XYOFFSET_1; /* +0x88 */
    anon_29 XYOFFSET_2; /* +0x90 */
    anon_1 PRMODECONT; /* +0x98 */
    anon_40 PRMODE; /* +0xa0 */
    anon_6 TEXCLUT; /* +0xa8 */
    anon_7 SCANMSK; /* +0xb0 */
    anon_25 MIPTBP1_1; /* +0xb8 */
    anon_25 MIPTBP1_2; /* +0xc0 */
    anon_32 MIPTBP2_1; /* +0xc8 */
    anon_32 MIPTBP2_2; /* +0xd0 */
    anon_0 TEXA; /* +0xd8 */
    anon_14 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_13 SCISSOR_1; /* +0xf0 */
    anon_13 SCISSOR_2; /* +0xf8 */
    anon_2 ALPHA_1; /* +0x100 */
    anon_2 ALPHA_2; /* +0x108 */
    anon_30 DIMX; /* +0x110 */
    anon_3 DTHE; /* +0x118 */
    anon_26 COLCLAMP; /* +0x120 */
    anon_22 TEST_1; /* +0x128 */
    anon_22 TEST_2; /* +0x130 */
    anon_36 PABE; /* +0x138 */
    anon_5 FBA_1; /* +0x140 */
    anon_5 FBA_2; /* +0x148 */
    anon_17 FRAME_1; /* +0x150 */
    anon_17 FRAME_2; /* +0x158 */
    anon_35 ZBUF_1; /* +0x160 */
    anon_35 ZBUF_2; /* +0x168 */
    anon_9 BITBLTBUF; /* +0x170 */
    anon_16 TRXPOS; /* +0x178 */
    anon_21 TRXREG; /* +0x180 */
    anon_15 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_18 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_23 LABEL; /* +0x1a8 */
    anon_28 ModFlgs; /* +0x1b0 */
    anon_28 GlobalModFlgs; /* +0x1b8 */
    anon_27 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_27* pqCurrent; /* +0x2224 */
    anon_8* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

int PS2GL_G_BufferIsReady;
float vZero[4];
float vOne[4];
float vViewer[4];
float vColorLimit128[4];
float vColorLimit255[4];
unsigned int uiPreparation;
int pst_LastUpdatedMatriceToutSDL;
float PS2GL_CurrentGlobalFrameVector[4];
int PS2GL_g_pInterpol;
int PS2GL_bOptimizedSprite;
unsigned int PS2GL_CurrentDestinationFrame;
int s_InBufTail_saved;
int s_InBuf_saved;
int PS2GL_FakeSwapBuffer[1024][4];
float cBuf1_b[60][4];
float tBuf1_b[60][4];
float cBuf0_b[60][4];
float tBuf0_b[60][4];
tagGLcontext g_PS2glContext;
unsigned int uiMaxVifDmaBufLength;
int MY_MSCNT[4];
int MY_UNPACKR[4];
tagSPRInfo g_stSPRInfo;
unsigned long OBJECT_PREPARATION_START;
unsigned long MATRICES_CONJUNCTION;
unsigned int PS2GL_SpecialMode;
unsigned long Beginning_Of_T_and_L;
unsigned long CST_SpritesSemiLookat;
unsigned long CST_SimpleSpritesOriented;
unsigned long CST_SimpleSprites;
unsigned long SimpleSprites;
unsigned long WithSpecular_Nurbs;
unsigned long NoSpecular_Fast_Simple;
unsigned long WithSpecular_Fast;
unsigned long NoSpecular_Simple;
unsigned long WithSpecular;
unsigned long NoSpecular_Nurbs;
unsigned long NoSpecular_Fast;
unsigned long NoSpecular;
unsigned long NoLighting_Nurbs;
unsigned long NoLighting_Fast_Simple;
unsigned long NoLighting_Fast_Simple_c;
unsigned long NoLighting_Simple_c;
unsigned long PointLighting_Fast_Simple_c;
unsigned long PointLighting_Simple_c;
tagGScontext g_gsContext;

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 54–65 */
/* addr: 0x00181fa0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 54
 *   +0x000c -> line 56
 *   +0x0014 -> line 58
 *   +0x0018 -> line 64
 *   +0x001c -> line 58
 *   +0x0020 -> line 59
 *   +0x0028 -> line 61
 *   +0x0030 -> line 62
 *   +0x0034 -> line 64
 *   +0x0040 -> line 65
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glBufferTriangleStripToTriangle(float (*pBuf)[4], int iSrcStart, int iDstStart)
{
    float (*pDst)[4];
    float (*param0)[4];
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 2431–2456 */
/* addr: 0x00181ff0  size: 596 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2431
 *   +0x0004 -> line 2432
 *   +0x0008 -> line 2431
 *   +0x001c -> line 2432
 *   +0x0028 -> line 2434
 *   +0x002c -> line 2435
 *   +0x0034 -> line 2440
 *   +0x0044 -> line 2442
 *   +0x006c -> line 2445
 *   +0x0144 -> line 2446
 *   +0x014c -> line 2448
 *   +0x0228 -> line 2451
 *   +0x0234 -> line 2455
 *   +0x023c -> line 2456
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFlushBuffer(unsigned char EOP)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 2081–2428 */
/* addr: 0x00182250  size: 3056 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2081
 *   +0x0004 -> line 2091
 *   +0x0008 -> line 2081
 *   +0x0030 -> line 2091
 *   +0x0070 -> line 2110
 *   +0x008c -> line 2125
 *   +0x0094 -> line 2113
 *   +0x009c -> line 2114
 *   +0x00a0 -> line 2113
 *   +0x00a4 -> line 2114
 *   +0x00a8 -> line 2115
 *   +0x00b0 -> line 2116
 *   +0x00b8 -> line 2117
 *   +0x00c0 -> line 2118
 *   +0x00c8 -> line 2120
 *   +0x00d0 -> line 2121
 *   +0x00d8 -> line 2126
 *   +0x00e0 -> line 2127
 *   +0x00e8 -> line 2128
 *   +0x00f0 -> line 2130
 *   +0x00f8 -> line 2131
 *   +0x0100 -> line 2126
 *   +0x0108 -> line 2127
 *   +0x0110 -> line 2128
 *   +0x0118 -> line 2130
 *   +0x0120 -> line 2131
 *   +0x0124 -> line 2134
 *   +0x012c -> line 2138
 *   +0x0130 -> line 2139
 *   +0x0134 -> line 2138
 *   +0x0138 -> line 2139
 *   +0x013c -> line 2141
 *   +0x0144 -> line 2142
 *   +0x014c -> line 2143
 *   +0x0154 -> line 2145
 *   +0x015c -> line 2146
 *   +0x0164 -> line 2150
 *   +0x016c -> line 2151
 *   +0x0174 -> line 2152
 *   +0x017c -> line 2153
 *   +0x0184 -> line 2155
 *   +0x018c -> line 2156
 *   +0x0194 -> line 2150
 *   +0x019c -> line 2151
 *   +0x01a4 -> line 2152
 *   +0x01ac -> line 2153
 *   +0x01b4 -> line 2155
 *   +0x01bc -> line 2156
 *   +0x01c4 -> line 2161
 *   +0x01d4 -> line 2162
 *   +0x01dc -> line 2161
 *   +0x01e4 -> line 2168
 *   +0x01e8 -> line 2161
 *   +0x01f0 -> line 2162
 *   +0x0200 -> line 2168
 *   +0x0210 -> line 2171
 *   +0x0218 -> line 2172
 *   +0x0224 -> line 2173
 *   +0x0248 -> line 2176
 *   +0x0264 -> line 2177
 *   +0x0268 -> line 2176
 *   +0x0270 -> line 2177
 *   +0x027c -> line 2179
 *   +0x0284 -> line 2181
 *   +0x0288 -> line 2183
 *   +0x02d0 -> line 2185
 *   +0x02d8 -> line 2189
 *   +0x02f8 -> line 2195
 *   +0x0300 -> line 2197
 *   +0x030c -> line 2202
 *   +0x0318 -> line 2203
 *   +0x0324 -> line 2205
 *   +0x0328 -> line 2206
 *   +0x0330 -> line 2209
 *   +0x0334 -> line 2207
 *   +0x0338 -> line 2221
 *   +0x033c -> line 2207
 *   +0x0340 -> line 2208
 *   +0x0344 -> line 2207
 *   +0x0348 -> line 2208
 *   +0x0350 -> line 2209
 *   +0x0354 -> line 2216
 *   +0x0358 -> line 2221
 *   +0x035c -> line 2209
 *   +0x0360 -> line 2216
 *   +0x0364 -> line 2209
 *   +0x0368 -> line 2213
 *   +0x0370 -> line 2216
 *   +0x0384 -> line 2218
 *   +0x0388 -> line 2221
 *   +0x0390 -> line 2222
 *   +0x0394 -> line 2225
 *   +0x0398 -> line 2222
 *   +0x039c -> line 2225
 *   +0x03a4 -> line 2231
 *   +0x03ac -> line 2222
 *   +0x03b0 -> line 2226
 *   +0x03b4 -> line 2222
 *   +0x03b8 -> line 2227
 *   +0x03bc -> line 2225
 *   +0x03c0 -> line 2226
 *   +0x03c8 -> line 2227
 *   +0x03cc -> line 2228
 *   +0x03d0 -> line 2231
 *   +0x03d8 -> line 2232
 *   +0x03dc -> line 2235
 *   +0x03e0 -> line 2232
 *   +0x03e4 -> line 2235
 *   +0x03ec -> line 2241
 *   +0x03f4 -> line 2232
 *   +0x03f8 -> line 2236
 *   +0x03fc -> line 2232
 *   +0x0400 -> line 2237
 *   +0x0404 -> line 2235
 *   +0x0408 -> line 2236
 *   +0x0410 -> line 2237
 *   +0x0414 -> line 2238
 *   +0x0418 -> line 2241
 *   +0x0420 -> line 2242
 *   +0x0424 -> line 2245
 *   +0x0428 -> line 2242
 *   +0x042c -> line 2245
 *   +0x0430 -> line 2251
 *   +0x0434 -> line 2247
 *   +0x0438 -> line 2245
 *   +0x043c -> line 2251
 *   +0x0440 -> line 2242
 *   +0x0444 -> line 2246
 *   +0x0448 -> line 2242
 *   +0x044c -> line 2245
 *   +0x0450 -> line 2246
 *   +0x0458 -> line 2247
 *   +0x045c -> line 2248
 *   +0x0460 -> line 2251
 *   +0x0468 -> line 2252
 *   +0x0478 -> line 2254
 *   +0x0484 -> line 2257
 *   +0x0488 -> line 2258
 *   +0x048c -> line 2257
 *   +0x0490 -> line 2259
 *   +0x0494 -> line 2257
 *   +0x049c -> line 2262
 *   +0x04a0 -> line 2258
 *   +0x04a4 -> line 2259
 *   +0x04a8 -> line 2262
 *   +0x04b0 -> line 2263
 *   +0x04b4 -> line 2267
 *   +0x04b8 -> line 2269
 *   +0x04bc -> line 2267
 *   +0x04c0 -> line 2269
 *   +0x04c4 -> line 2267
 *   +0x04cc -> line 2269
 *   +0x04d0 -> line 2273
 *   +0x04e4 -> line 2278
 *   +0x04e8 -> line 2280
 *   +0x04ec -> line 2278
 *   +0x04f0 -> line 2280
 *   +0x04f4 -> line 2278
 *   +0x04f8 -> line 2280
 *   +0x0534 -> line 2282
 *   +0x0538 -> line 2284
 *   +0x053c -> line 2282
 *   +0x0544 -> line 2284
 *   +0x054c -> line 2282
 *   +0x0550 -> line 2284
 *   +0x0554 -> line 2282
 *   +0x055c -> line 2284
 *   +0x0564 -> line 2285
 *   +0x0580 -> line 2286
 *   +0x05a4 -> line 2288
 *   +0x05a8 -> line 2291
 *   +0x05ac -> line 2288
 *   +0x05b0 -> line 2291
 *   +0x05b4 -> line 2288
 *   +0x05b8 -> line 2291
 *   +0x05d4 -> line 2288
 *   +0x05d8 -> line 2291
 *   +0x05dc -> line 2288
 *   +0x05e0 -> line 2291
 *   +0x05f4 -> line 2297
 *   +0x05fc -> line 2302
 *   +0x0614 -> line 2306
 *   +0x0638 -> line 2308
 *   +0x0668 -> line 2312
 *   +0x066c -> line 2308
 *   +0x0670 -> line 2312
 *   +0x0674 -> line 2308
 *   +0x0678 -> line 2312
 *   +0x0684 -> line 2317
 *   +0x068c -> line 2319
 *   +0x0690 -> line 2317
 *   +0x0694 -> line 2319
 *   +0x0698 -> line 2317
 *   +0x069c -> line 2319
 *   +0x06d8 -> line 2321
 *   +0x06dc -> line 2324
 *   +0x06e0 -> line 2321
 *   +0x06e8 -> line 2324
 *   +0x06f0 -> line 2321
 *   +0x06f4 -> line 2324
 *   +0x06f8 -> line 2321
 *   +0x06fc -> line 2324
 *   +0x0704 -> line 2325
 *   +0x0720 -> line 2326
 *   +0x0740 -> line 2329
 *   +0x0768 -> line 2331
 *   +0x077c -> line 2340
 *   +0x0798 -> line 2344
 *   +0x07c0 -> line 2388
 *   +0x07c4 -> line 2362
 *   +0x07e0 -> line 2363
 *   +0x07e4 -> line 2362
 *   +0x07e8 -> line 2363
 *   +0x0804 -> line 2364
 *   +0x0808 -> line 2363
 *   +0x080c -> line 2364
 *   +0x0828 -> line 2365
 *   +0x082c -> line 2364
 *   +0x0830 -> line 2365
 *   +0x084c -> line 2367
 *   +0x0850 -> line 2365
 *   +0x0854 -> line 2367
 *   +0x0870 -> line 2368
 *   +0x0874 -> line 2367
 *   +0x0878 -> line 2368
 *   +0x0894 -> line 2371
 *   +0x0898 -> line 2368
 *   +0x089c -> line 2371
 *   +0x08b8 -> line 2372
 *   +0x08bc -> line 2371
 *   +0x08c0 -> line 2372
 *   +0x08dc -> line 2373
 *   +0x08e0 -> line 2372
 *   +0x08e4 -> line 2373
 *   +0x0900 -> line 2374
 *   +0x0904 -> line 2373
 *   +0x0908 -> line 2374
 *   +0x0924 -> line 2376
 *   +0x0928 -> line 2374
 *   +0x092c -> line 2376
 *   +0x0948 -> line 2377
 *   +0x094c -> line 2376
 *   +0x0950 -> line 2377
 *   +0x096c -> line 2388
 *   +0x0970 -> line 2377
 *   +0x0974 -> line 2388
 *   +0x0978 -> line 2380
 *   +0x0980 -> line 2381
 *   +0x0984 -> line 2380
 *   +0x0988 -> line 2381
 *   +0x098c -> line 2382
 *   +0x0990 -> line 2381
 *   +0x0994 -> line 2382
 *   +0x0998 -> line 2383
 *   +0x099c -> line 2382
 *   +0x09a0 -> line 2383
 *   +0x09a4 -> line 2385
 *   +0x09a8 -> line 2383
 *   +0x09ac -> line 2385
 *   +0x09b0 -> line 2386
 *   +0x09b4 -> line 2385
 *   +0x09b8 -> line 2386
 *   +0x09bc -> line 2380
 *   +0x09c0 -> line 2386
 *   +0x09c4 -> line 2380
 *   +0x09c8 -> line 2381
 *   +0x09d0 -> line 2382
 *   +0x09d8 -> line 2383
 *   +0x09e0 -> line 2385
 *   +0x09e8 -> line 2386
 *   +0x09ec -> line 2389
 *   +0x09f4 -> line 2392
 *   +0x09fc -> line 2419
 *   +0x0a00 -> line 2392
 *   +0x0a04 -> line 2393
 *   +0x0a10 -> line 2394
 *   +0x0a14 -> line 2393
 *   +0x0a18 -> line 2394
 *   +0x0a20 -> line 2395
 *   +0x0a24 -> line 2394
 *   +0x0a28 -> line 2395
 *   +0x0a30 -> line 2397
 *   +0x0a34 -> line 2395
 *   +0x0a38 -> line 2397
 *   +0x0a40 -> line 2398
 *   +0x0a44 -> line 2397
 *   +0x0a48 -> line 2398
 *   +0x0a50 -> line 2401
 *   +0x0a54 -> line 2398
 *   +0x0a58 -> line 2401
 *   +0x0a74 -> line 2402
 *   +0x0a78 -> line 2401
 *   +0x0a7c -> line 2402
 *   +0x0a98 -> line 2403
 *   +0x0a9c -> line 2402
 *   +0x0aa0 -> line 2403
 *   +0x0abc -> line 2404
 *   +0x0ac0 -> line 2403
 *   +0x0ac4 -> line 2404
 *   +0x0ae0 -> line 2406
 *   +0x0ae4 -> line 2404
 *   +0x0ae8 -> line 2406
 *   +0x0b04 -> line 2407
 *   +0x0b08 -> line 2406
 *   +0x0b0c -> line 2407
 *   +0x0b28 -> line 2419
 *   +0x0b2c -> line 2407
 *   +0x0b30 -> line 2419
 *   +0x0b34 -> line 2410
 *   +0x0b3c -> line 2411
 *   +0x0b40 -> line 2410
 *   +0x0b44 -> line 2411
 *   +0x0b48 -> line 2412
 *   +0x0b4c -> line 2411
 *   +0x0b50 -> line 2412
 *   +0x0b54 -> line 2413
 *   +0x0b58 -> line 2412
 *   +0x0b5c -> line 2413
 *   +0x0b60 -> line 2415
 *   +0x0b64 -> line 2413
 *   +0x0b68 -> line 2415
 *   +0x0b6c -> line 2416
 *   +0x0b70 -> line 2415
 *   +0x0b74 -> line 2416
 *   +0x0b78 -> line 2410
 *   +0x0b7c -> line 2416
 *   +0x0b80 -> line 2410
 *   +0x0b84 -> line 2411
 *   +0x0b8c -> line 2412
 *   +0x0b94 -> line 2413
 *   +0x0b9c -> line 2415
 *   +0x0ba4 -> line 2416
 *   +0x0ba8 -> line 2420
 *   +0x0bb0 -> line 2425
 *   +0x0bb8 -> line 2427
 *   +0x0bc0 -> line 2428
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVIFSendBuffer(unsigned char bEOP)
{
    unsigned int cbPartSize;
    int iTbufOffset;
    unsigned int iBufSize;
    _sceDmaTag* pDmaTagSend;
    anon_8* pGifTagSend;
    float (*pCBufSend_b)[4];
    float (*pTBufSend_b)[4];
    float fvPackageBS[4];
    float (*pCBufSend)[4];
    float (*pTBufSend)[4];
    float (*pNBufSend)[4];
    float (*pVBufSend)[4];
    float (*pBuf)[4];
    unsigned char bPackageBoundingSphere;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 1356–1804 */
/* addr: 0x00182e40  size: 4632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1356
 *   +0x0004 -> line 1368
 *   +0x0008 -> line 1356
 *   +0x000c -> line 1368
 *   +0x0010 -> line 1356
 *   +0x0014 -> line 1368
 *   +0x0018 -> line 1356
 *   +0x001c -> line 1368
 *   +0x0020 -> line 1356
 *   +0x0024 -> line 1368
 *   +0x0028 -> line 1356
 *   +0x002c -> line 1368
 *   +0x0030 -> line 1356
 *   +0x0034 -> line 1368
 *   +0x0038 -> line 1356
 *   +0x0044 -> line 1368
 *   +0x0050 -> line 1365
 *   +0x0054 -> line 1368
 *   +0x0058 -> line 1363
 *   +0x005c -> line 1364
 *   +0x0060 -> line 1368
 *   +0x0064 -> line 1369
 *   +0x0068 -> line 1368
 *   +0x006c -> line 1365
 *   +0x0070 -> line 1368
 *   +0x0080 -> line 1369
 *   +0x00a0 -> line 1374
 *   +0x00ac -> line 1386
 *   +0x00d4 -> line 1388
 *   +0x00ec -> line 1390
 *   +0x0100 -> line 1412
 *   +0x0118 -> line 1415
 *   +0x011c -> line 1417
 *   +0x0148 -> line 1415
 *   +0x014c -> line 1417
 *   +0x0150 -> line 1415
 *   +0x0154 -> line 1417
 *   +0x0298 -> line 1422
 *   +0x02bc -> line 1423
 *   +0x02c4 -> line 1424
 *   +0x02d0 -> line 1425
 *   +0x0358 -> line 1426
 *   +0x0368 -> line 1427
 *   +0x0398 -> line 1428
 *   +0x03a0 -> line 1431
 *   +0x03a4 -> line 1433
 *   +0x03b4 -> line 1436
 *   +0x03cc -> line 1437
 *   +0x03d0 -> line 1438
 *   +0x03d4 -> line 1437
 *   +0x03d8 -> line 1438
 *   +0x03e0 -> line 1440
 *   +0x03e4 -> line 1438
 *   +0x03e8 -> line 1440
 *   +0x03f4 -> line 1442
 *   +0x03f8 -> line 1440
 *   +0x0400 -> line 1441
 *   +0x0404 -> line 1442
 *   +0x0408 -> line 1443
 *   +0x0410 -> line 1445
 *   +0x0414 -> line 1448
 *   +0x0418 -> line 1450
 *   +0x0444 -> line 1448
 *   +0x0448 -> line 1450
 *   +0x044c -> line 1448
 *   +0x0450 -> line 1450
 *   +0x0574 -> line 1453
 *   +0x0578 -> line 1450
 *   +0x0598 -> line 1453
 *   +0x05a8 -> line 1455
 *   +0x05d4 -> line 1457
 *   +0x05e0 -> line 1458
 *   +0x05e4 -> line 1457
 *   +0x05e8 -> line 1458
 *   +0x05f0 -> line 1460
 *   +0x05f8 -> line 1463
 *   +0x061c -> line 1468
 *   +0x0624 -> line 1469
 *   +0x0634 -> line 1473
 *   +0x0640 -> line 1475
 *   +0x0654 -> line 1476
 *   +0x0658 -> line 1475
 *   +0x06c8 -> line 1476
 *   +0x06d0 -> line 1477
 *   +0x06d8 -> line 1478
 *   +0x06e8 -> line 1480
 *   +0x06fc -> line 1481
 *   +0x0700 -> line 1480
 *   +0x0720 -> line 1481
 *   +0x072c -> line 1484
 *   +0x0744 -> line 1490
 *   +0x0748 -> line 1488
 *   +0x074c -> line 1489
 *   +0x0750 -> line 1490
 *   +0x0758 -> line 1491
 *   +0x0760 -> line 1494
 *   +0x0784 -> line 1497
 *   +0x0794 -> line 1500
 *   +0x07b0 -> line 1501
 *   +0x07d0 -> line 1505
 *   +0x07e0 -> line 1507
 *   +0x07e4 -> line 1508
 *   +0x080c -> line 1511
 *   +0x0824 -> line 1515
 *   +0x0834 -> line 1517
 *   +0x0844 -> line 1518
 *   +0x084c -> line 1521
 *   +0x0858 -> line 1523
 *   +0x0860 -> line 1527
 *   +0x0870 -> line 1529
 *   +0x0880 -> line 1530
 *   +0x0888 -> line 1533
 *   +0x0898 -> line 1535
 *   +0x08a0 -> line 1538
 *   +0x08bc -> line 1541
 *   +0x08d4 -> line 1543
 *   +0x08e8 -> line 1548
 *   +0x0910 -> line 1551
 *   +0x0924 -> line 1554
 *   +0x0934 -> line 1556
 *   +0x0944 -> line 1558
 *   +0x0954 -> line 1559
 *   +0x0958 -> line 1560
 *   +0x0960 -> line 1563
 *   +0x0964 -> line 1564
 *   +0x0968 -> line 1563
 *   +0x0970 -> line 1564
 *   +0x0978 -> line 1566
 *   +0x0984 -> line 1567
 *   +0x0990 -> line 1569
 *   +0x09bc -> line 1573
 *   +0x09c4 -> line 1569
 *   +0x09c8 -> line 1570
 *   +0x09d4 -> line 1571
 *   +0x09e0 -> line 1572
 *   +0x09ec -> line 1573
 *   +0x0a08 -> line 1576
 *   +0x0a10 -> line 1578
 *   +0x0a20 -> line 1580
 *   +0x0a30 -> line 1582
 *   +0x0a34 -> line 1583
 *   +0x0a38 -> line 1582
 *   +0x0a40 -> line 1583
 *   +0x0a44 -> line 1584
 *   +0x0a4c -> line 1587
 *   +0x0a5c -> line 1588
 *   +0x0a64 -> line 1591
 *   +0x0a7c -> line 1592
 *   +0x0a8c -> line 1594
 *   +0x0a9c -> line 1596
 *   +0x0ab0 -> line 1598
 *   +0x0ab4 -> line 1600
 *   +0x0ac0 -> line 1602
 *   +0x0acc -> line 1603
 *   +0x0afc -> line 1605
 *   +0x0b24 -> line 1606
 *   +0x0b4c -> line 1608
 *   +0x0b58 -> line 1609
 *   +0x0b60 -> line 1612
 *   +0x0b6c -> line 1613
 *   +0x0b9c -> line 1615
 *   +0x0bc4 -> line 1616
 *   +0x0bf0 -> line 1618
 *   +0x0c08 -> line 1620
 *   +0x0c10 -> line 1623
 *   +0x0c18 -> line 1627
 *   +0x0c20 -> line 1629
 *   +0x0c24 -> line 1630
 *   +0x0c30 -> line 1632
 *   +0x0c44 -> line 1633
 *   +0x0c74 -> line 1635
 *   +0x0c98 -> line 1636
 *   +0x0ca0 -> line 1639
 *   +0x0cb0 -> line 1640
 *   +0x0ce0 -> line 1642
 *   +0x0d08 -> line 1644
 *   +0x0d30 -> line 1646
 *   +0x0d38 -> line 1649
 *   +0x0d44 -> line 1651
 *   +0x0d4c -> line 1652
 *   +0x0d58 -> line 1654
 *   +0x0d6c -> line 1655
 *   +0x0d9c -> line 1657
 *   +0x0dc0 -> line 1658
 *   +0x0dc8 -> line 1661
 *   +0x0dd8 -> line 1662
 *   +0x0e08 -> line 1664
 *   +0x0e30 -> line 1666
 *   +0x0e5c -> line 1669
 *   +0x0e74 -> line 1671
 *   +0x0e7c -> line 1673
 *   +0x0e84 -> line 1676
 *   +0x0e88 -> line 1677
 *   +0x0e94 -> line 1679
 *   +0x0ea8 -> line 1680
 *   +0x0ed8 -> line 1682
 *   +0x0efc -> line 1683
 *   +0x0f04 -> line 1686
 *   +0x0f14 -> line 1687
 *   +0x0f44 -> line 1689
 *   +0x0f6c -> line 1691
 *   +0x0f98 -> line 1694
 *   +0x0fb0 -> line 1696
 *   +0x0fb8 -> line 1704
 *   +0x0fc4 -> line 1706
 *   +0x0fec -> line 1709
 *   +0x0ff8 -> line 1711
 *   +0x101c -> line 1714
 *   +0x1044 -> line 1715
 *   +0x104c -> line 1717
 *   +0x1074 -> line 1718
 *   +0x107c -> line 1720
 *   +0x10a8 -> line 1725
 *   +0x10ac -> line 1729
 *   +0x10bc -> line 1731
 *   +0x10d4 -> line 1733
 *   +0x10e4 -> line 1735
 *   +0x10ec -> line 1752
 *   +0x10f0 -> line 1751
 *   +0x10f4 -> line 1752
 *   +0x10f8 -> line 1768
 *   +0x10fc -> line 1765
 *   +0x1104 -> line 1735
 *   +0x1108 -> line 1736
 *   +0x1110 -> line 1751
 *   +0x1114 -> line 1752
 *   +0x1118 -> line 1763
 *   +0x1120 -> line 1764
 *   +0x1124 -> line 1765
 *   +0x1128 -> line 1768
 *   +0x1134 -> line 1772
 *   +0x1138 -> line 1773
 *   +0x113c -> line 1772
 *   +0x1144 -> line 1775
 *   +0x114c -> line 1776
 *   +0x1154 -> line 1778
 *   +0x1158 -> line 1779
 *   +0x115c -> line 1778
 *   +0x1160 -> line 1779
 *   +0x1168 -> line 1778
 *   +0x116c -> line 1779
 *   +0x1190 -> line 1781
 *   +0x11a0 -> line 1782
 *   +0x11b4 -> line 1783
 *   +0x11c8 -> line 1787
 *   +0x11e4 -> line 1788
 *   +0x11e8 -> line 1787
 *   +0x11ec -> line 1788
 *   +0x11f0 -> line 1804
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1UpdateParameters(tagGLcontext* pctx, unsigned int Mode)
{
    int i;
    int (*piUnpackCode)[4];
    tagListData* pListData;
    unsigned int uiMask;
    unsigned char bSDLMatricesConjunction;
    unsigned int eOldClippingMode;
    unsigned int nLightBits;
    _sceDmaTag* pTag;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 1344–1353 */
/* addr: 0x00184060  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1344
 *   +0x0004 -> line 1348
 *   +0x0008 -> line 1344
 *   +0x0010 -> line 1348
 *   +0x0014 -> line 1346
 *   +0x0018 -> line 1350
 *   +0x001c -> line 1349
 *   +0x0024 -> line 1350
 *   +0x002c -> line 1351
 *   +0x0034 -> line 1352
 *   +0x003c -> line 1353
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2GL_SetDestinationFrame(unsigned int DestinationFrame)
{
    unsigned int saved;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 1298–1332 */
/* addr: 0x001840b0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1298
 *   +0x0004 -> line 1299
 *   +0x0014 -> line 1301
 *   +0x0040 -> line 1306
 *   +0x0048 -> line 1307
 *   +0x004c -> line 1306
 *   +0x0050 -> line 1307
 *   +0x0058 -> line 1308
 *   +0x005c -> line 1309
 *   +0x0064 -> line 1312
 *   +0x006c -> line 1313
 *   +0x0070 -> line 1312
 *   +0x0074 -> line 1313
 *   +0x007c -> line 1314
 *   +0x0080 -> line 1315
 *   +0x0088 -> line 1318
 *   +0x0090 -> line 1319
 *   +0x0094 -> line 1318
 *   +0x0098 -> line 1319
 *   +0x00a0 -> line 1320
 *   +0x00a4 -> line 1321
 *   +0x00ac -> line 1323
 *   +0x00b4 -> line 1326
 *   +0x00f0 -> line 1328
 *   +0x00fc -> line 1329
 *   +0x0104 -> line 1331
 *   +0x010c -> line 1332
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1UpdateCullFaceParam(tagGLcontext* pctx)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 1160–1293 */
/* addr: 0x001841d0  size: 904 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1160
 *   +0x0030 -> line 1163
 *   +0x0034 -> line 1167
 *   +0x0038 -> line 1170
 *   +0x003c -> line 1171
 *   +0x0040 -> line 1173
 *   +0x004c -> line 1175
 *   +0x005c -> line 1183
 *   +0x006c -> line 1193
 *   +0x0074 -> line 1195
 *   +0x0088 -> line 1198
 *   +0x00a0 -> line 1199
 *   +0x00b8 -> line 1201
 *   +0x00e0 -> line 1204
 *   +0x00f8 -> line 1205
 *   +0x0110 -> line 1207
 *   +0x0128 -> line 1209
 *   +0x0138 -> line 1212
 *   +0x0148 -> line 1213
 *   +0x0158 -> line 1215
 *   +0x0168 -> line 1218
 *   +0x0180 -> line 1219
 *   +0x018c -> line 1220
 *   +0x0198 -> line 1223
 *   +0x01ac -> line 1224
 *   +0x01bc -> line 1225
 *   +0x01cc -> line 1226
 *   +0x01dc -> line 1227
 *   +0x01e0 -> line 1229
 *   +0x01e8 -> line 1228
 *   +0x01ec -> line 1229
 *   +0x01f4 -> line 1230
 *   +0x01fc -> line 1237
 *   +0x020c -> line 1246
 *   +0x0214 -> line 1248
 *   +0x0228 -> line 1253
 *   +0x024c -> line 1254
 *   +0x0260 -> line 1255
 *   +0x0278 -> line 1256
 *   +0x0284 -> line 1257
 *   +0x0294 -> line 1258
 *   +0x02a0 -> line 1259
 *   +0x02a8 -> line 1263
 *   +0x02bc -> line 1264
 *   +0x02cc -> line 1265
 *   +0x02dc -> line 1266
 *   +0x02ec -> line 1267
 *   +0x02f0 -> line 1273
 *   +0x02f8 -> line 1268
 *   +0x02fc -> line 1273
 *   +0x0304 -> line 1274
 *   +0x0308 -> line 1276
 *   +0x0310 -> line 1280
 *   +0x0320 -> line 1281
 *   +0x032c -> line 1286
 *   +0x0330 -> line 1288
 *   +0x0338 -> line 1286
 *   +0x033c -> line 1288
 *   +0x0340 -> line 1289
 *   +0x034c -> line 1292
 *   +0x0358 -> line 1293
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1UpdateSimpleSpecularParam(tagGLcontext* pctx)
{
    tag_GLlight* pLight;
    tag_stVU1MatriceL* pstMatriceL;
    int iLoop;
    unsigned int nLightBits;
    tag_GLmaterial* pmat;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 1049–1157 */
/* addr: 0x00184560  size: 672 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1049
 *   +0x002c -> line 1052
 *   +0x0030 -> line 1056
 *   +0x0034 -> line 1059
 *   +0x0038 -> line 1060
 *   +0x003c -> line 1062
 *   +0x004c -> line 1070
 *   +0x005c -> line 1080
 *   +0x0064 -> line 1082
 *   +0x0078 -> line 1085
 *   +0x0090 -> line 1086
 *   +0x00a8 -> line 1088
 *   +0x00d0 -> line 1091
 *   +0x00e8 -> line 1092
 *   +0x0100 -> line 1094
 *   +0x0118 -> line 1096
 *   +0x0128 -> line 1097
 *   +0x0130 -> line 1100
 *   +0x0144 -> line 1101
 *   +0x0154 -> line 1102
 *   +0x0158 -> line 1104
 *   +0x0160 -> line 1103
 *   +0x0164 -> line 1104
 *   +0x016c -> line 1105
 *   +0x0174 -> line 1112
 *   +0x0184 -> line 1119
 *   +0x018c -> line 1121
 *   +0x01a0 -> line 1125
 *   +0x01c4 -> line 1126
 *   +0x01d8 -> line 1127
 *   +0x01e4 -> line 1129
 *   +0x01f0 -> line 1133
 *   +0x0204 -> line 1134
 *   +0x0214 -> line 1135
 *   +0x0218 -> line 1139
 *   +0x0220 -> line 1136
 *   +0x0224 -> line 1139
 *   +0x022c -> line 1140
 *   +0x0230 -> line 1144
 *   +0x0238 -> line 1146
 *   +0x0248 -> line 1150
 *   +0x024c -> line 1152
 *   +0x0254 -> line 1150
 *   +0x0258 -> line 1152
 *   +0x025c -> line 1153
 *   +0x0268 -> line 1156
 *   +0x0274 -> line 1157
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1UpdateDiffuseOnlyParam(tagGLcontext* pctx)
{
    tag_GLlight* pLight;
    tag_stVU1MatriceL* pstMatriceL;
    int iLoop;
    unsigned int nLightBits;
    tag_GLmaterial* pmat;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 1013–1045 */
/* addr: 0x00184800  size: 260 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1013
 *   +0x0010 -> line 1017
 *   +0x0014 -> line 1015
 *   +0x0018 -> line 1017
 *   +0x0020 -> line 1019
 *   +0x003c -> line 1020
 *   +0x0044 -> line 1021
 *   +0x0050 -> line 1023
 *   +0x0060 -> line 1024
 *   +0x0068 -> line 1027
 *   +0x008c -> line 1032
 *   +0x009c -> line 1035
 *   +0x00ac -> line 1037
 *   +0x00bc -> line 1039
 *   +0x00c8 -> line 1040
 *   +0x00d0 -> line 1043
 *   +0x00f0 -> line 1045
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1ReUpdateMatrice(PS2GL_VU1_InterpolMatrixData_* pInterpolData)
{
    tag_stVU1MatriceT* pstMatriceT;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 975–1005 */
/* addr: 0x00184910  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 975
 *   +0x0014 -> line 982
 *   +0x0018 -> line 985
 *   +0x001c -> line 986
 *   +0x0020 -> line 988
 *   +0x0028 -> line 989
 *   +0x0030 -> line 990
 *   +0x0038 -> line 991
 *   +0x0040 -> line 993
 *   +0x0044 -> line 994
 *   +0x0048 -> line 993
 *   +0x004c -> line 994
 *   +0x0050 -> line 993
 *   +0x0054 -> line 994
 *   +0x0058 -> line 1000
 *   +0x0060 -> line 998
 *   +0x0064 -> line 1001
 *   +0x0068 -> line 998
 *   +0x006c -> line 1001
 *   +0x0070 -> line 1000
 *   +0x0074 -> line 1001
 *   +0x0078 -> line 1004
 *   +0x0084 -> line 1005
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1UpdateDiffusePointLightingParam(tagGLcontext* pctx)
{
    tag_stVU1MatriceL* pstMatriceL;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 776–971 */
/* addr: 0x001849b0  size: 1264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 776
 *   +0x0004 -> line 792
 *   +0x0008 -> line 776
 *   +0x0020 -> line 778
 *   +0x0028 -> line 790
 *   +0x002c -> line 794
 *   +0x0034 -> line 796
 *   +0x0038 -> line 797
 *   +0x003c -> line 798
 *   +0x005c -> line 799
 *   +0x007c -> line 800
 *   +0x0080 -> line 803
 *   +0x0094 -> line 806
 *   +0x009c -> line 808
 *   +0x00a4 -> line 819
 *   +0x00a8 -> line 812
 *   +0x00ac -> line 819
 *   +0x00b0 -> line 812
 *   +0x00b8 -> line 817
 *   +0x00bc -> line 812
 *   +0x00d0 -> line 813
 *   +0x00f0 -> line 819
 *   +0x0180 -> line 820
 *   +0x0184 -> line 819
 *   +0x0188 -> line 820
 *   +0x021c -> line 821
 *   +0x022c -> line 823
 *   +0x0234 -> line 824
 *   +0x0244 -> line 826
 *   +0x0254 -> line 827
 *   +0x0258 -> line 830
 *   +0x0260 -> line 831
 *   +0x0268 -> line 828
 *   +0x0270 -> line 830
 *   +0x0274 -> line 831
 *   +0x0278 -> line 832
 *   +0x0284 -> line 833
 *   +0x0290 -> line 834
 *   +0x029c -> line 835
 *   +0x02a8 -> line 836
 *   +0x02b4 -> line 837
 *   +0x02c0 -> line 838
 *   +0x02c8 -> line 839
 *   +0x02d0 -> line 841
 *   +0x02e0 -> line 867
 *   +0x02f0 -> line 869
 *   +0x02f8 -> line 870
 *   +0x0304 -> line 872
 *   +0x0308 -> line 881
 *   +0x0310 -> line 878
 *   +0x0314 -> line 881
 *   +0x0318 -> line 870
 *   +0x0324 -> line 871
 *   +0x0334 -> line 872
 *   +0x034c -> line 873
 *   +0x0350 -> line 875
 *   +0x0358 -> line 876
 *   +0x0360 -> line 877
 *   +0x0368 -> line 881
 *   +0x0370 -> line 884
 *   +0x0380 -> line 902
 *   +0x0394 -> line 905
 *   +0x03c0 -> line 906
 *   +0x03e0 -> line 907
 *   +0x03fc -> line 908
 *   +0x0404 -> line 909
 *   +0x040c -> line 912
 *   +0x0418 -> line 913
 *   +0x0420 -> line 914
 *   +0x0424 -> line 915
 *   +0x0428 -> line 914
 *   +0x042c -> line 915
 *   +0x0430 -> line 916
 *   +0x0438 -> line 917
 *   +0x043c -> line 918
 *   +0x0440 -> line 919
 *   +0x0444 -> line 920
 *   +0x044c -> line 923
 *   +0x046c -> line 924
 *   +0x048c -> line 932
 *   +0x0490 -> line 934
 *   +0x0498 -> line 932
 *   +0x049c -> line 934
 *   +0x04a0 -> line 935
 *   +0x04a8 -> line 938
 *   +0x04ac -> line 941
 *   +0x04b0 -> line 938
 *   +0x04b4 -> line 941
 *   +0x04b8 -> line 940
 *   +0x04bc -> line 947
 *   +0x04c0 -> line 941
 *   +0x04c4 -> line 944
 *   +0x04cc -> line 946
 *   +0x04d0 -> line 947
 *   +0x04d4 -> line 971
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1UpdateMatrice(tagGLcontext* pctx, unsigned int Mode)
{
    PS2GL_VU1_InterpolMatrixData_* pInterpol;
    unsigned char bTexture1;
    unsigned char bTexture0;
    float (*pTexture1)[4][4];
    float (*pTexture0)[4][4];
    int (*pBuf)[4];
    float vScreenScale[4];
    float vScreenOrg[4];
    tag_stVU1MatriceT* pstMatriceT;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 735–763 */
/* addr: 0x00184ea0  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 735
 *   +0x0004 -> line 738
 *   +0x0008 -> line 735
 *   +0x0014 -> line 738
 *   +0x0018 -> line 737
 *   +0x0020 -> line 740
 *   +0x0054 -> line 741
 *   +0x005c -> line 744
 *   +0x0060 -> line 746
 *   +0x0064 -> line 753
 *   +0x0068 -> line 759
 *   +0x006c -> line 746
 *   +0x0070 -> line 749
 *   +0x0074 -> line 750
 *   +0x0078 -> line 752
 *   +0x007c -> line 753
 *   +0x0080 -> line 759
 *   +0x0084 -> line 746
 *   +0x0088 -> line 744
 *   +0x0090 -> line 746
 *   +0x0098 -> line 749
 *   +0x009c -> line 750
 *   +0x00a0 -> line 751
 *   +0x00a4 -> line 752
 *   +0x00a8 -> line 753
 *   +0x00ac -> line 756
 *   +0x00b4 -> line 758
 *   +0x00b8 -> line 759
 *   +0x00bc -> line 763
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float (*VU1SetCurrentFrameInDMABuffer(void))[4]
{
    tag_stVU1CurrentFrame* pstCurrentFrame;
    tagGLcontext* pctx;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 655–721 */
/* addr: 0x00184f70  size: 504 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 655
 *   +0x0004 -> line 663
 *   +0x0008 -> line 655
 *   +0x001c -> line 663
 *   +0x0020 -> line 657
 *   +0x0024 -> line 663
 *   +0x002c -> line 661
 *   +0x0030 -> line 660
 *   +0x0034 -> line 663
 *   +0x0038 -> line 660
 *   +0x003c -> line 663
 *   +0x0064 -> line 664
 *   +0x006c -> line 666
 *   +0x0070 -> line 679
 *   +0x0074 -> line 666
 *   +0x007c -> line 672
 *   +0x009c -> line 675
 *   +0x00bc -> line 677
 *   +0x00d8 -> line 679
 *   +0x00e0 -> line 680
 *   +0x00ec -> line 682
 *   +0x00f0 -> line 691
 *   +0x00f8 -> line 688
 *   +0x00fc -> line 691
 *   +0x0100 -> line 680
 *   +0x010c -> line 681
 *   +0x011c -> line 682
 *   +0x0134 -> line 683
 *   +0x0138 -> line 685
 *   +0x0140 -> line 686
 *   +0x0148 -> line 687
 *   +0x0150 -> line 691
 *   +0x0158 -> line 693
 *   +0x0160 -> line 694
 *   +0x0164 -> line 706
 *   +0x0168 -> line 695
 *   +0x016c -> line 694
 *   +0x0170 -> line 695
 *   +0x0174 -> line 702
 *   +0x0178 -> line 696
 *   +0x017c -> line 703
 *   +0x0180 -> line 705
 *   +0x0184 -> line 706
 *   +0x0188 -> line 712
 *   +0x0190 -> line 719
 *   +0x0198 -> line 696
 *   +0x019c -> line 697
 *   +0x01a0 -> line 698
 *   +0x01a4 -> line 699
 *   +0x01ac -> line 702
 *   +0x01b0 -> line 703
 *   +0x01b4 -> line 704
 *   +0x01b8 -> line 705
 *   +0x01bc -> line 706
 *   +0x01c0 -> line 709
 *   +0x01c8 -> line 711
 *   +0x01cc -> line 712
 *   +0x01d0 -> line 715
 *   +0x01d8 -> line 717
 *   +0x01dc -> line 719
 *   +0x01e0 -> line 721
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1UpdateMatriceOutsideSDL(tagGLcontext* pctx)
{
    float vScreenScale[4];
    float vScreenOrg[4];
    tag_stVU1MatriceToutSDL* pstMatriceToutSDL;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 650–651 */
/* addr: 0x00185170  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 650
 *   +0x001c -> line 651
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1_RE_UpdateMatriceOutsideSDL(tag_stVU1MatriceToutSDL* pstMatriceToutSDL, float (*NewModelView)[4][4])
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 512–632 */
/* addr: 0x001851a0  size: 776 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 512
 *   +0x0004 -> line 527
 *   +0x0008 -> line 512
 *   +0x0020 -> line 527
 *   +0x0024 -> line 514
 *   +0x0028 -> line 525
 *   +0x002c -> line 527
 *   +0x0038 -> line 529
 *   +0x0040 -> line 536
 *   +0x0044 -> line 529
 *   +0x004c -> line 531
 *   +0x0058 -> line 536
 *   +0x0068 -> line 538
 *   +0x0070 -> line 539
 *   +0x0078 -> line 540
 *   +0x0080 -> line 543
 *   +0x00a0 -> line 544
 *   +0x00c0 -> line 551
 *   +0x00cc -> line 549
 *   +0x00d0 -> line 551
 *   +0x015c -> line 552
 *   +0x0160 -> line 551
 *   +0x0164 -> line 552
 *   +0x01f8 -> line 554
 *   +0x0208 -> line 556
 *   +0x0214 -> line 557
 *   +0x021c -> line 558
 *   +0x022c -> line 560
 *   +0x023c -> line 561
 *   +0x0240 -> line 564
 *   +0x0248 -> line 565
 *   +0x0250 -> line 562
 *   +0x0258 -> line 564
 *   +0x025c -> line 565
 *   +0x0260 -> line 566
 *   +0x026c -> line 567
 *   +0x0278 -> line 568
 *   +0x0284 -> line 569
 *   +0x0290 -> line 570
 *   +0x029c -> line 571
 *   +0x02a8 -> line 572
 *   +0x02b0 -> line 573
 *   +0x02b8 -> line 575
 *   +0x02c8 -> line 602
 *   +0x02cc -> line 604
 *   +0x02d4 -> line 602
 *   +0x02d8 -> line 604
 *   +0x02dc -> line 605
 *   +0x02e4 -> line 607
 *   +0x02ec -> line 631
 *   +0x02f0 -> line 632
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char VU1UpdateMatriceInsideSDL(tagGLcontext* pctx, unsigned int* pMask)
{
    unsigned char bTexture1;
    unsigned char bTexture0;
    float (*pTexture1)[4][4];
    float (*pTexture0)[4][4];
    int (*pBuf)[4];
    tag_stVU1MatriceTinSDL* pstMatriceTinSDL;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 340–341 */
/* addr: 0x001854b0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 340
 *   +0x002c -> line 341
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int VU1BufferFreeSpace(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 322–334 */
/* addr: 0x001854f0  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 322
 *   +0x0004 -> line 323
 *   +0x0008 -> line 322
 *   +0x0010 -> line 323
 *   +0x0024 -> line 326
 *   +0x0028 -> line 327
 *   +0x0030 -> line 332
 *   +0x0034 -> line 328
 *   +0x0038 -> line 332
 *   +0x0044 -> line 327
 *   +0x0048 -> line 328
 *   +0x0054 -> line 329
 *   +0x0060 -> line 330
 *   +0x006c -> line 332
 *   +0x00d8 -> line 334
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1FlushFakeSwapBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 317–319 */
/* addr: 0x001855e0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 317
 *   +0x0008 -> line 318
 *   +0x000c -> line 317
 *   +0x0010 -> line 318
 *   +0x0014 -> line 319
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1StopWorkingOnFakeSwapBuffer(void)
{
    g_PS2glContext.pVIFInBuf = (float (*)[4])s_InBuf_saved;
    g_PS2glContext.pVIFIBufTail = (float (*)[4])s_InBufTail_saved;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 308–313 */
/* addr: 0x00185600  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 308
 *   +0x0004 -> line 311
 *   +0x0008 -> line 308
 *   +0x000c -> line 311
 *   +0x0010 -> line 309
 *   +0x0014 -> line 308
 *   +0x0018 -> line 309
 *   +0x001c -> line 311
 *   +0x0020 -> line 309
 *   +0x0024 -> line 311
 *   +0x0028 -> line 312
 *   +0x002c -> line 313
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1StartWorkingOnFakeSwapBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 291–298 */
/* addr: 0x00185640  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 291
 *   +0x000c -> line 292
 *   +0x0018 -> line 295
 *   +0x0090 -> line 296
 *   +0x0094 -> line 298
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1_FlushPreviousBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 267–288 */
/* addr: 0x001856f0  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 267
 *   +0x0004 -> line 268
 *   +0x0008 -> line 267
 *   +0x0010 -> line 268
 *   +0x0024 -> line 274
 *   +0x0028 -> line 275
 *   +0x0030 -> line 286
 *   +0x0034 -> line 276
 *   +0x0038 -> line 284
 *   +0x003c -> line 286
 *   +0x0048 -> line 275
 *   +0x004c -> line 276
 *   +0x0058 -> line 277
 *   +0x0064 -> line 278
 *   +0x0070 -> line 281
 *   +0x0078 -> line 284
 *   +0x007c -> line 281
 *   +0x0094 -> line 282
 *   +0x009c -> line 286
 *   +0x00a4 -> line 282
 *   +0x00a8 -> line 286
 *   +0x0110 -> line 288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1_FlushCurrentBuffer(void)
{
    void* pVoid;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_VU1_Pipeline.c lines 218–261 */
/* addr: 0x00185810  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 218
 *   +0x0004 -> line 220
 *   +0x0008 -> line 218
 *   +0x0010 -> line 220
 *   +0x0024 -> line 226
 *   +0x0028 -> line 227
 *   +0x0030 -> line 237
 *   +0x0034 -> line 228
 *   +0x0038 -> line 237
 *   +0x0044 -> line 227
 *   +0x0048 -> line 228
 *   +0x0054 -> line 229
 *   +0x0060 -> line 230
 *   +0x006c -> line 233
 *   +0x008c -> line 234
 *   +0x0094 -> line 237
 *   +0x009c -> line 234
 *   +0x00a0 -> line 237
 *   +0x0108 -> line 261
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1FlushBuffer(void)
{
    void* pVoid;
    /* TODO: decompile from asm/... */
}
