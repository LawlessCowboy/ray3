/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PushPopAttrib.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct defAttribNode defAttribNode;
typedef struct defAttribEvalBit defAttribEvalBit;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_0 anon_0;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct defAttribColorBufferBit defAttribColorBufferBit;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct defAttribFogBit defAttribFogBit;
typedef struct defAttribPolygonBit defAttribPolygonBit;
typedef struct tagListNode tagListNode;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_3 anon_3;
typedef struct anon_6 anon_6;
typedef struct anon_8 anon_8;
typedef struct anon_5 anon_5;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_4 anon_4;
typedef struct anon_10 anon_10;
typedef struct anon_1 anon_1;
typedef struct anon_9 anon_9;
typedef struct anon_11 anon_11;
typedef struct anon_7 anon_7;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_2 anon_2;
typedef struct defAttribLightingBit defAttribLightingBit;
typedef struct defAttribLineBit defAttribLineBit;
typedef struct defAttribTextureBit defAttribTextureBit;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct defAttribListBit defAttribListBit;
typedef struct defAttribCurrentBit defAttribCurrentBit;
typedef struct defAttribTransformBit defAttribTransformBit;
typedef struct defAttribScissorBit defAttribScissorBit;
typedef struct defAttribDepthBufferBit defAttribDepthBufferBit;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct defAttribPixelModeBit defAttribPixelModeBit;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct defAttribEnableBit defAttribEnableBit;
typedef struct defAttribPolygonStippleBit defAttribPolygonStippleBit;
typedef struct tagListData tagListData;
typedef struct defAttribViewportBit defAttribViewportBit;
typedef struct defAttribPointBit defAttribPointBit;

struct defAttribNode {
    int iAttribType; /* +0x0 */
    int EOP; /* +0x4 */
    int DummyA; /* +0x8 */
    defAttribNode* pNext; /* +0xc */
};

struct defAttribEvalBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned int nTexGenBits; /* +0x10 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_0 {
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
    anon_0 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct defAttribColorBufferBit {
    defAttribNode AttribHead; /* +0x0 */
    float vColorClearValue[4]; /* +0x10 */
    unsigned int nEnableBits; /* +0x20 */
    unsigned int eAlphaTestFunc; /* +0x24 */
    float fAlphaTestRef; /* +0x28 */
    unsigned int eBlendSrcFactor; /* +0x2c */
    unsigned int eBlendDstFactor; /* +0x30 */
    unsigned int eDrawBuffer; /* +0x34 */
    unsigned char abColorMask[4]; /* +0x38 */
    unsigned int eLogicOpCode; /* +0x3c */
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

struct defAttribFogBit {
    defAttribNode AttribHead; /* +0x0 */
    int ivFogColor[4]; /* +0x10 */
    unsigned int nEnableBits; /* +0x20 */
    unsigned int eFogMode; /* +0x24 */
    float fFogDensity; /* +0x28 */
    float fFogLinearStart; /* +0x2c */
    float fFogLinearEnd; /* +0x30 */
    float fFogIndex; /* +0x34 */
};

struct defAttribPolygonBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned int nEnableBits; /* +0x10 */
    unsigned int eCullFaceMode; /* +0x14 */
    unsigned int eFrontFaceMode; /* +0x18 */
    unsigned int ePolygonMode[2]; /* +0x1c */
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

struct anon_3 {
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

struct anon_6 {
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

struct anon_8 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_5 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_0 gifTag; /* +0x0 */
    anon_3 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_6 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_8 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_5 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_4 {
    unsigned long pad00; /* +0x0 */
};

struct anon_10 {
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

struct anon_1 {
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

struct anon_9 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_11 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_7 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_0 gifTag; /* +0x0 */
    anon_4 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_10 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_1 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_9 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_11 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_7 clamp; /* +0x60 */
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
    anon_2* pCurParamBegin; /* +0x5ce8 */
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
    anon_0* pGifTagFan; /* +0x6bf8 */
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
    anon_0* pGifTagBuf0; /* +0x6c5c */
    anon_0* pGifTagBuf1; /* +0x6c60 */
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

struct anon_2 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct defAttribLightingBit {
    defAttribNode AttribHead; /* +0x0 */
    float vAmbient[4]; /* +0x10 */
    tag_GLlight Lights[8]; /* +0x20 */
    tag_GLmaterial Materials[2]; /* +0x3a0 */
    unsigned int nLightBits; /* +0x440 */
    unsigned char bLocalViewer; /* +0x444 */
    unsigned char bLightModelTwoSide; /* +0x445 */
    unsigned int eColorControl; /* +0x448 */
    unsigned char bLightModelDiffuseOnly; /* +0x44c */
    unsigned int eColorMaterialFace; /* +0x450 */
    unsigned int eColorMaterialMode; /* +0x454 */
    unsigned int eShadeModel; /* +0x458 */
};

struct defAttribLineBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned int nEnableBits; /* +0x10 */
    int iLineFactor; /* +0x14 */
    unsigned short nLineMask; /* +0x18 */
    float fLineWidth; /* +0x1c */
};

struct defAttribTextureBit {
    defAttribNode AttribHead; /* +0x0 */
    tag_GLtexture_set TextureSet[2]; /* +0x10 */
    unsigned int nTexGenBits; /* +0xd0 */
    tag_GLtexture_set* pCurTexture; /* +0xd4 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct defAttribListBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned int uiListBase; /* +0x10 */
};

struct defAttribCurrentBit {
    defAttribNode AttribHead; /* +0x0 */
    float vacurColor[2][4]; /* +0x10 */
    float (*pvcurColor)[4]; /* +0x30 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x34..0x3f */
    float vcurNormal[4]; /* +0x40 */
    float vacurTexCoords[2][4]; /* +0x50 */
    float RasterMultiTexCoords[2][4]; /* +0x70 */
    float (*pvcurTextCoord)[4]; /* +0x90 */
    float (*pvRasterTexCoord)[4]; /* +0x94 */
    unsigned int iCurTextureSet; /* +0x98 */
    unsigned char bRasterPosValid; /* +0x9c */
    float fRasterPos[4]; /* +0xa0 */
    float fRasterDistance; /* +0xb0 */
    float fRasterColor[2][4]; /* +0xb4 */
    unsigned char bEdgeFlag; /* +0xd4 */
};

struct defAttribTransformBit {
    defAttribNode AttribHead; /* +0x0 */
    float avClipPlane[6][4]; /* +0x10 */
    unsigned int nLightBits; /* +0x70 */
    unsigned int nClipBits; /* +0x74 */
    unsigned int eMatrixMode; /* +0x78 */
    int iMaxClipPlanes; /* +0x7c */
};

struct defAttribScissorBit {
    defAttribNode AttribHead; /* +0x0 */
    float vScissorBox[4]; /* +0x10 */
    unsigned int nEnableBits; /* +0x20 */
};

struct defAttribDepthBufferBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned int nEnableBits; /* +0x10 */
    unsigned char eDepthWriteMask; /* +0x14 */
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

struct defAttribPixelModeBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned int eBufferReadMode; /* +0x10 */
    unsigned char bMapColor; /* +0x14 */
    unsigned char bMapStencil; /* +0x15 */
    int iIndexShift; /* +0x18 */
    int iIndexOffset; /* +0x1c */
    float fRedBias; /* +0x20 */
    float fRedScale; /* +0x24 */
    float fGreenBias; /* +0x28 */
    float fGreenScale; /* +0x2c */
    float fBlueBias; /* +0x30 */
    float fBlueScale; /* +0x34 */
    float fAlphaBias; /* +0x38 */
    float fAlphaScale; /* +0x3c */
    float fDepthBias; /* +0x40 */
    float fDepthScale; /* +0x44 */
    float fPixelZoomX; /* +0x48 */
    float fPixelZoomY; /* +0x4c */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct defAttribEnableBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned int nEnableBits; /* +0x10 */
    unsigned int nLightBits; /* +0x14 */
    unsigned int nTextureEnableBits; /* +0x18 */
    unsigned int nTexGenBits; /* +0x1c */
};

struct defAttribPolygonStippleBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned char aPolygonMask[128]; /* +0x10 */
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

struct defAttribViewportBit {
    defAttribNode AttribHead; /* +0x0 */
    float ViewPort[4]; /* +0x10 */
    float ViewOrg[2]; /* +0x20 */
    float DepthRange[2]; /* +0x28 */
};

struct defAttribPointBit {
    defAttribNode AttribHead; /* +0x0 */
    unsigned int nEnableBits; /* +0x10 */
    float fPointSize; /* +0x14 */
};

int pAttribListHead;
int PS2glLiberator;
tagGLcontext g_PS2glContext;
int PS2glAllocator;

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PushPopAttrib.c lines 69–86 */
/* addr: 0x00167490  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 69
 *   +0x0030 -> line 73
 *   +0x0048 -> line 74
 *   +0x0068 -> line 77
 *   +0x0084 -> line 78
 *   +0x00d8 -> line 79
 *   +0x00e0 -> line 81
 *   +0x00fc -> line 82
 *   +0x0150 -> line 85
 *   +0x015c -> line 86
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glCopyPixels(int x, int y, int width, int height, unsigned int type)
{
    void* p;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PushPopAttrib.c lines 541–867 */
/* addr: 0x00167610  size: 2760 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 541
 *   +0x0008 -> line 546
 *   +0x0010 -> line 548
 *   +0x00e4 -> line 552
 *   +0x00e8 -> line 556
 *   +0x00f8 -> line 557
 *   +0x0108 -> line 559
 *   +0x0110 -> line 560
 *   +0x0120 -> line 561
 *   +0x0130 -> line 563
 *   +0x0138 -> line 564
 *   +0x0148 -> line 565
 *   +0x0158 -> line 567
 *   +0x0160 -> line 568
 *   +0x0170 -> line 569
 *   +0x0188 -> line 571
 *   +0x01a0 -> line 572
 *   +0x01a8 -> line 578
 *   +0x01b0 -> line 572
 *   +0x01b4 -> line 573
 *   +0x01c0 -> line 574
 *   +0x01cc -> line 575
 *   +0x01d8 -> line 576
 *   +0x01e4 -> line 577
 *   +0x01f0 -> line 578
 *   +0x01f4 -> line 580
 *   +0x01fc -> line 581
 *   +0x0200 -> line 587
 *   +0x0210 -> line 591
 *   +0x0214 -> line 593
 *   +0x021c -> line 595
 *   +0x0224 -> line 605
 *   +0x022c -> line 587
 *   +0x0238 -> line 591
 *   +0x023c -> line 593
 *   +0x0244 -> line 595
 *   +0x024c -> line 596
 *   +0x0250 -> line 605
 *   +0x0258 -> line 587
 *   +0x025c -> line 591
 *   +0x0264 -> line 593
 *   +0x0274 -> line 595
 *   +0x0284 -> line 596
 *   +0x028c -> line 597
 *   +0x0298 -> line 598
 *   +0x02a4 -> line 599
 *   +0x02b0 -> line 600
 *   +0x02bc -> line 601
 *   +0x02c8 -> line 602
 *   +0x02d4 -> line 605
 *   +0x02d8 -> line 609
 *   +0x02dc -> line 605
 *   +0x02e8 -> line 609
 *   +0x02ec -> line 611
 *   +0x02f4 -> line 612
 *   +0x02f8 -> line 616
 *   +0x0308 -> line 617
 *   +0x0318 -> line 619
 *   +0x0320 -> line 620
 *   +0x0328 -> line 622
 *   +0x0330 -> line 627
 *   +0x0344 -> line 629
 *   +0x034c -> line 630
 *   +0x0360 -> line 632
 *   +0x0368 -> line 633
 *   +0x0378 -> line 634
 *   +0x0388 -> line 636
 *   +0x0390 -> line 637
 *   +0x03a0 -> line 638
 *   +0x03b0 -> line 640
 *   +0x03b8 -> line 641
 *   +0x03c8 -> line 642
 *   +0x03d8 -> line 644
 *   +0x03e0 -> line 645
 *   +0x03f0 -> line 646
 *   +0x0400 -> line 648
 *   +0x0408 -> line 649
 *   +0x0418 -> line 650
 *   +0x0428 -> line 652
 *   +0x0430 -> line 653
 *   +0x043c -> line 654
 *   +0x0440 -> line 657
 *   +0x0448 -> line 656
 *   +0x044c -> line 655
 *   +0x0458 -> line 656
 *   +0x0460 -> line 657
 *   +0x046c -> line 659
 *   +0x0474 -> line 660
 *   +0x0488 -> line 662
 *   +0x0490 -> line 663
 *   +0x049c -> line 664
 *   +0x04a0 -> line 665
 *   +0x04ac -> line 667
 *   +0x04b4 -> line 668
 *   +0x04b8 -> line 672
 *   +0x04c4 -> line 674
 *   +0x04cc -> line 675
 *   +0x04d0 -> line 679
 *   +0x04e0 -> line 680
 *   +0x04f0 -> line 682
 *   +0x04f8 -> line 683
 *   +0x0500 -> line 688
 *   +0x0508 -> line 683
 *   +0x050c -> line 684
 *   +0x0518 -> line 685
 *   +0x0524 -> line 686
 *   +0x0530 -> line 687
 *   +0x053c -> line 688
 *   +0x0540 -> line 690
 *   +0x0548 -> line 697
 *   +0x0550 -> line 705
 *   +0x0560 -> line 697
 *   +0x0564 -> line 698
 *   +0x0570 -> line 699
 *   +0x057c -> line 700
 *   +0x0588 -> line 701
 *   +0x0594 -> line 702
 *   +0x05a0 -> line 703
 *   +0x05ac -> line 704
 *   +0x05b4 -> line 705
 *   +0x05bc -> line 706
 *   +0x05d0 -> line 707
 *   +0x05dc -> line 708
 *   +0x05e4 -> line 707
 *   +0x05e8 -> line 710
 *   +0x05f0 -> line 715
 *   +0x0600 -> line 716
 *   +0x0618 -> line 718
 *   +0x0630 -> line 719
 *   +0x0640 -> line 720
 *   +0x0658 -> line 722
 *   +0x0670 -> line 723
 *   +0x067c -> line 724
 *   +0x0688 -> line 725
 *   +0x0690 -> line 727
 *   +0x0698 -> line 732
 *   +0x06a0 -> line 734
 *   +0x06a8 -> line 739
 *   +0x06b4 -> line 740
 *   +0x06c0 -> line 741
 *   +0x06cc -> line 742
 *   +0x06d8 -> line 743
 *   +0x06e4 -> line 744
 *   +0x06f0 -> line 745
 *   +0x06fc -> line 746
 *   +0x0708 -> line 747
 *   +0x0714 -> line 748
 *   +0x0720 -> line 749
 *   +0x072c -> line 750
 *   +0x0738 -> line 751
 *   +0x0744 -> line 752
 *   +0x0750 -> line 753
 *   +0x075c -> line 754
 *   +0x0768 -> line 755
 *   +0x0770 -> line 757
 *   +0x0778 -> line 762
 *   +0x0788 -> line 763
 *   +0x07a0 -> line 765
 *   +0x07b8 -> line 766
 *   +0x07c0 -> line 768
 *   +0x07c8 -> line 773
 *   +0x07d8 -> line 774
 *   +0x07f0 -> line 776
 *   +0x0808 -> line 777
 *   +0x0818 -> line 778
 *   +0x0830 -> line 780
 *   +0x0848 -> line 781
 *   +0x0858 -> line 782
 *   +0x0870 -> line 784
 *   +0x0888 -> line 785
 *   +0x0894 -> line 786
 *   +0x08a0 -> line 787
 *   +0x08ac -> line 788
 *   +0x08b4 -> line 790
 *   +0x08bc -> line 791
 *   +0x08c0 -> line 795
 *   +0x08d4 -> line 797
 *   +0x08dc -> line 798
 *   +0x08e0 -> line 802
 *   +0x08f0 -> line 803
 *   +0x0900 -> line 805
 *   +0x0908 -> line 806
 *   +0x0914 -> line 808
 *   +0x091c -> line 811
 *   +0x0920 -> line 815
 *   +0x0928 -> line 817
 *   +0x092c -> line 815
 *   +0x0930 -> line 817
 *   +0x093c -> line 816
 *   +0x0940 -> line 815
 *   +0x0944 -> line 816
 *   +0x0948 -> line 817
 *   +0x0950 -> line 819
 *   +0x0958 -> line 824
 *   +0x0968 -> line 825
 *   +0x0980 -> line 827
 *   +0x0998 -> line 829
 *   +0x09d4 -> line 830
 *   +0x09d8 -> line 829
 *   +0x09fc -> line 830
 *   +0x0a04 -> line 831
 *   +0x0a10 -> line 832
 *   +0x0a18 -> line 834
 *   +0x0a20 -> line 843
 *   +0x0a24 -> line 839
 *   +0x0a2c -> line 843
 *   +0x0a30 -> line 844
 *   +0x0a34 -> line 839
 *   +0x0a38 -> line 840
 *   +0x0a44 -> line 841
 *   +0x0a50 -> line 842
 *   +0x0a5c -> line 843
 *   +0x0a60 -> line 844
 *   +0x0a64 -> line 843
 *   +0x0a68 -> line 844
 *   +0x0a6c -> line 850
 *   +0x0a70 -> line 851
 *   +0x0a80 -> line 854
 *   +0x0a8c -> line 856
 *   +0x0a94 -> line 861
 *   +0x0aa0 -> line 862
 *   +0x0aa4 -> line 866
 *   +0x0ab8 -> line 867
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPopAttrib(void)
{
    defAttribViewportBit* pSolidCurrent;
    defAttribNode* pTemp;
    /* TODO: decompile from asm/... */
}
