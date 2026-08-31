/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_0 anon_0;
typedef struct tagsceGsReg tagsceGsReg;
typedef union anon_1 anon_1;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct anon_2 anon_2;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_3 anon_3;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagGScontext tagGScontext;
typedef struct Water2DEffect_ Water2DEffect_;
typedef struct tagListNode tagListNode;
typedef struct tagGLcontext tagGLcontext;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct anon_4 anon_4;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct anon_7 anon_7;
typedef struct anon_8 anon_8;
typedef struct tag_GLlight tag_GLlight;
typedef struct anon_9 anon_9;
typedef struct anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_12 anon_12;
typedef struct anon_13 anon_13;
typedef struct anon_14 anon_14;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct anon_15 anon_15;
typedef struct anon_16 anon_16;
typedef struct anon_17 anon_17;
typedef struct anon_18 anon_18;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct anon_19 anon_19;
typedef struct anon_20 anon_20;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct anon_21 anon_21;
typedef struct anon_22 anon_22;
typedef struct anon_23 anon_23;
typedef struct anon_24 anon_24;
typedef struct anon_25 anon_25;
typedef struct anon_26 anon_26;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct anon_27 anon_27;
typedef struct anon_28 anon_28;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_29 anon_29;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct anon_30 anon_30;
typedef struct anon_31 anon_31;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct anon_32 anon_32;
typedef struct anon_33 anon_33;
typedef struct anon_34 anon_34;
typedef struct anon_35 anon_35;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct anon_36 anon_36;
typedef union unFunction unFunction;
typedef struct anon_37 anon_37;
typedef struct anon_38 anon_38;
typedef struct anon_39 anon_39;
typedef struct anon_40 anon_40;
typedef struct anon_41 anon_41;
typedef struct anon_42 anon_42;

struct tagGLprimbuf {
    int pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    int pData; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    anon_3 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_0 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long 8 : 5; /* bit None, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

union anon_1 {
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

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    /* array */ int aSingleIndex[64]; /* +0x4 */
    int pFirstNode; /* +0x204 */
    int pLastNode; /* +0x208 */
};

struct anon_2 {
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
    /* aggregate */ int Image; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    int clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
};

struct anon_3 {
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tagGScontext {
    anon_42 PRIM; /* +0x0 */
    anon_9 RGBAQ; /* +0x8 */
    anon_23 ST; /* +0x10 */
    anon_28 UV; /* +0x18 */
    anon_36 XYZF2; /* +0x20 */
    anon_35 XYZ2; /* +0x28 */
    anon_33 TEX0_1; /* +0x30 */
    anon_33 TEX0_2; /* +0x38 */
    anon_22 CLAMP_1; /* +0x40 */
    anon_22 CLAMP_2; /* +0x48 */
    anon_14 FOG; /* +0x50 */
    anon_36 XYZF3; /* +0x58 */
    anon_35 XYZ3; /* +0x60 */
    anon_41 TEX1_1; /* +0x68 */
    anon_41 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_30 XYOFFSET_1; /* +0x88 */
    anon_30 XYOFFSET_2; /* +0x90 */
    anon_5 PRMODECONT; /* +0x98 */
    anon_2 PRMODE; /* +0xa0 */
    anon_11 TEXCLUT; /* +0xa8 */
    anon_12 SCANMSK; /* +0xb0 */
    anon_27 MIPTBP1_1; /* +0xb8 */
    anon_27 MIPTBP1_2; /* +0xc0 */
    anon_34 MIPTBP2_1; /* +0xc8 */
    anon_34 MIPTBP2_2; /* +0xd0 */
    anon_4 TEXA; /* +0xd8 */
    anon_18 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_16 SCISSOR_1; /* +0xf0 */
    anon_16 SCISSOR_2; /* +0xf8 */
    anon_7 ALPHA_1; /* +0x100 */
    anon_7 ALPHA_2; /* +0x108 */
    anon_31 DIMX; /* +0x110 */
    anon_8 DTHE; /* +0x118 */
    anon_29 COLCLAMP; /* +0x120 */
    anon_25 TEST_1; /* +0x128 */
    anon_25 TEST_2; /* +0x130 */
    anon_39 PABE; /* +0x138 */
    anon_10 FBA_1; /* +0x140 */
    anon_10 FBA_2; /* +0x148 */
    anon_20 FRAME_1; /* +0x150 */
    anon_20 FRAME_2; /* +0x158 */
    anon_38 ZBUF_1; /* +0x160 */
    anon_38 ZBUF_2; /* +0x168 */
    anon_13 BITBLTBUF; /* +0x170 */
    anon_19 TRXPOS; /* +0x178 */
    anon_24 TRXREG; /* +0x180 */
    anon_17 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_21 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_26 LABEL; /* +0x1a8 */
    anon_32 ModFlgs; /* +0x1b0 */
    anon_32 GlobalModFlgs; /* +0x1b8 */
    anon_1 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    int pqCurrent; /* +0x2224 */
    int pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct Water2DEffect_ {
    float Position3D[4]; /* +0x0 */
    float fSizeX; /* +0x10 */
    float fSizeY; /* +0x14 */
    float fAlpha; /* +0x18 */
    unsigned int Type; /* +0x1c */
    float fAngleSpeed; /* +0x20 */
    float fSizeMultiplier; /* +0x24 */
};

struct tagListNode {
    int pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    /* aggregate */ int apData; /* +0xc */
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
    /* array */ int mFrustumNormal[4]; /* +0x61f0 */
    /* array */ int mGuardBandNormal[4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    int pfvPackaeBSs; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    /* array */ int ModelViewMatrix[4]; /* +0x62b0 */
    /* array */ int NormalMatrix[4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    /* array */ int ModelViewStack[16][4]; /* +0x6340 */
    /* array */ int ProjectionMatrix[4]; /* +0x6740 */
    /* array */ int GuardBandProjectionMatrix[4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    /* array */ int ProjectionStack[4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    /* array */ int TextureMatrix[2]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    /* array */ int TextureStacks[2][4]; /* +0x6980 */
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

struct anon_4 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct anon_5 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_6 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    int pPrimBuf; /* +0x18 */
};

struct _GL_BUFFERINFO {
    int iFrameBufferDepth; /* +0x0 */
    int iDepthBufferDepth; /* +0x4 */
    int iStencilBufferDepth; /* +0x8 */
    int iAccumBufferDepth; /* +0xc */
    int iAuxBufferBase; /* +0x10 */
    int iAuxBufferSize; /* +0x14 */
    int iAuxBufferPSM; /* +0x18 */
    int iAccumBufferBase; /* +0x1c */
    int iAccumBufferPSM; /* +0x20 */
    unsigned char bDoubleBufferMode; /* +0x24 */
    unsigned char bPlainBufferMode; /* +0x25 */
    int iScreenWidth; /* +0x28 */
    int iScreenHeight; /* +0x2c */
    int iSecondBufferWidth; /* +0x30 */
    int iSecondBufferHeight; /* +0x34 */
    int iSecondBufferWidthPower; /* +0x38 */
    int iSecondBufferHeightPower; /* +0x3c */
    int iSecondBufferBase; /* +0x40 */
    int iSecondBufferZBase; /* +0x44 */
    int iSecondBufferPSM; /* +0x48 */
    int iSecondBufferZPSM; /* +0x4c */
    int iSuperWidth; /* +0x50 */
    int iSuperHeight; /* +0x54 */
};

struct anon_7 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_8 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
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

struct anon_9 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_10 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_11 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_12 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_13 {
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

struct anon_14 {
    unsigned long param0 : 56; /* bit None, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct anon_15 {
    unsigned long pad00; /* +0x0 */
};

struct anon_16 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_17 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_18 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct tagGLlistcalls {
    int pNext; /* +0x0 */
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
};

struct anon_19 {
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

struct anon_20 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
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

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
};

struct anon_21 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_22 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_23 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_24 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_25 {
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

struct anon_26 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
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

struct anon_28 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct tagGsLoadImage {
    anon_3 gifTag; /* +0x0 */
    anon_13 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_19 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_24 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_17 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_29 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct anon_30 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_31 {
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

struct tagGsSetTex {
    anon_3 gifTag; /* +0x0 */
    anon_15 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_33 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_41 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_27 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_34 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_22 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct anon_32 {
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

struct anon_34 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_35 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct anon_36 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
};

struct anon_37 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_38 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_39 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_40 {
    int pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_37 st_UVStaticPos; /* +0xc */
    anon_37 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
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

char GLI_g_NextMapWillHaveACinemaEffect;
char GLI_g_NextMapWillHaveAStereoScopicEffect;
float GLI_g_CartoonBlendVal;
float AE_Bright_Cont[5];
float GLI_g_MotionBlurIntensity;
int GLI_g_MirrorAfterEffect;
unsigned int AE_MirrorFX;
float AE_Glow_M[4];
float AE_Bright_Cont_M[5];
float AE_Blur_M;
char GLI_g_AfterEffect;
char GLI_g_StereoVisionMode;
unsigned int GLI_g_OldMovieEffect;
unsigned int GLI_g_bFullScreenWaterEffect;
unsigned int g_bHasWaterEffect;
float AE_ZoomBlurIntensity;
float AE_Glow[4];
float AE_GlowDirection;
unsigned int GLI_g_ChristianSlaterMode;
float AddValue;
float AE_MirrorWaterFX_Speed;
float AE_MirrorWaterFX_Ampl;
float G_DEPTH_BLUR_DISTNEAR;
float G_DEPTH_BLUR_DISTFAR;
float G_DEPTH_BLUR_MAX_ALPHA;
unsigned int WaterFrame;
unsigned int GLIPS2_g_NbWater2DEffects;
float myColorRange2[4];
int g_BlurPool;
float C1[4];
float C0[4];
float C12[4];
float C02[4];
unsigned int NbWaterFxTri;
float Color1[4];
float Color0[4];
unsigned int WAT_bInit;
unsigned int WAT_CurrentFrame;
unsigned int Floute;
unsigned int AE_StackNext;
float AE_Stack[104];
float WAT_WaterPos[5][4];
unsigned int WAT_CurrentBuffer;
unsigned int WAT_GLTextures[4];
int WAT_PaletteAdd;
int WAT_PaletteSub;
/* aggregate */ int WAT_TextureBuffers;
float WaterFXSecondPassColor[2][72][4];
float WaterFXSecondPassVtx[2][72][4];
float a16_fProjectionMatrix[4][4];
float VY2;
float VY1;
float VX2;
float VX1;
float vMul;
float uMul;
anon_1 qwordcZero;
Water2DEffect_ GLIPS2_g_Water2DEffectsList[500];
Water2DEffect_ GLIPS2_g_Water2DEffects[500];
/* array */ int GLI_g_MatrixDeformations[200];
float GLIPS2_WaterMax[4];
float GLIPS2_WaterMin[4];
tagGScontext 8;
tagGLcontext 8;
float myColorRange[4];
float g_ffFrameTime;
int AGO_g_WaterLightMaterial;
unsigned int GLI_g_ProjectionMode;
float GLI_g_NegVect[4];
int g_p_stCurrentViewport;
float AGO2_g_pfCosTable[512];
int XRES;
_GL_BUFFERINFO 8;
unsigned int GLI_g_HadHeatFx;
int AGO_g_OldMovieMaterial;
int GLI_g_OldTV;
float YRESf;
float XRESf;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 111–121 */
/* addr: 0x002dcfb0  size: 156 bytes */
void ~C_Grass(void)
{
    /* line map: */
    /*   line 111 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 117 @ +0x000 */
    /*   line 119 @ +0x000 */
    /*   line 121 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 6137–6263 */
/* addr: 0x002dd050  size: 2420 bytes */
void GLI_vProcessMedalionAfterEffect(void)
{
    /* line map: */
    /*   line 6137 @ +0x000 */
    /*   line 6140 @ +0x000 */
    /*   line 6140 @ +0x000 */
    /*   line 6142 @ +0x000 */
    /*   line 6142 @ +0x000 */
    /*   line 6144 @ +0x000 */
    /*   line 6148 @ +0x000 */
    /*   line 6151 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 6056–6121 */
/* addr: 0x002dd9d0  size: 868 bytes */
void GLIPS2_vAE_PushPop(unsigned int param)
{
    float* pStack;
    /* line map: */
    /*   line 6056 @ +0x000 */
    /*   line 6059 @ +0x000 */
    /*   line 6061 @ +0x000 */
    /*   line 6061 @ +0x000 */
    /*   line 6063 @ +0x000 */
    /*   line 6065 @ +0x000 */
    /*   line 6067 @ +0x000 */
    /*   line 6069 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5848–6040 */
/* addr: 0x002ddd40  size: 3112 bytes */
void GLIPS2_vProcessWater2DEffect(Water2DEffect_* param0)
{
    float sin1;
    float cos1;
    float fSizeY;
    float fSizeX;
    float SY[4];
    float SX[4];
    float Pos4[4];
    float Pos3[4];
    float Pos2[4];
    float Pos1[4];
    float Pos0[4];
    unsigned char zTst;
    unsigned char zTst;
    unsigned char zTst;
    float* costable;
    float ZZ;
    float Y2;
    float X2;
    float Y1;
    float X1;
    float fADC;
    unsigned int i;
    float a16_fWorldMatrix[4][4];
    /* line map: */
    /*   line 5851 @ +0x000 */
    /*   line 5848 @ +0x000 */
    /*   line 5851 @ +0x000 */
    /*   line 5854 @ +0x000 */
    /*   line 5863 @ +0x000 */
    /*   line 5858 @ +0x000 */
    /*   line 5860 @ +0x000 */
    /*   line 5863 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5820–5820 */
/* addr: 0x002de970  size: 48 bytes */
void GLIPS2_vSetMirrorAE_Blur(unsigned int bOnOff, float fVal)
{
    /* line map: */
    /*   line 5820 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5809–5809 */
/* addr: 0x002de9a0  size: 52 bytes */
void GLIPS2_vSetMirrorAE_WaterFx(unsigned int bOnOff, float fSpeed, float fAmp)
{
    /* line map: */
    /*   line 5809 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5796–5800 */
/* addr: 0x002de9e0  size: 88 bytes */
void GLIPS2_vSetMirrorAE_ColorCorrection(unsigned int bOnOff, float fPreContrast, float fR, float fG, float fB)
{
    /* line map: */
    /*   line 5796 @ +0x000 */
    /*   line 5796 @ +0x000 */
    /*   line 5798 @ +0x000 */
    /*   line 5800 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002dea40  size: 8 bytes */
void GLIPS2_vSetMirrorAE_NoFx(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5779–5779 */
/* addr: 0x002dea50  size: 28 bytes */
void GLIPS2_vSetAE_MotionBlur(unsigned int bOnOff, float fIntensity)
{
    /* line map: */
    /*   line 5779 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5770–5770 */
/* addr: 0x002dea70  size: 28 bytes */
void GLIPS2_vSetAE_WaterFX(unsigned int bOnOff)
{
    /* line map: */
    /*   line 5770 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5757–5761 */
/* addr: 0x002dea90  size: 56 bytes */
void GLIPS2_vSetAE_ColorCorrection(unsigned int bOnOff, float fPreContrast, float fR, float fG, float fB)
{
    /* line map: */
    /*   line 5757 @ +0x000 */
    /*   line 5759 @ +0x000 */
    /*   line 5761 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5748–5748 */
/* addr: 0x002dead0  size: 28 bytes */
void GLIPS2_vSetAE_ZoomBlur(unsigned int bOnOff, float fIntensity)
{
    /* line map: */
    /*   line 5748 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5734–5739 */
/* addr: 0x002deaf0  size: 60 bytes */
void GLIPS2_vSetAE_AutoGlow(unsigned int bOnOff, float fR, float fG, float fB, float fBrightness, float fDirection)
{
    /* line map: */
    /*   line 5734 @ +0x000 */
    /*   line 5736 @ +0x000 */
    /*   line 5739 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5724–5728 */
/* addr: 0x002deb30  size: 56 bytes */
void GLIPS2_vSetAE_Glow(unsigned int bOnOff, float fR, float fG, float fB, float fBrightness)
{
    /* line map: */
    /*   line 5724 @ +0x000 */
    /*   line 5726 @ +0x000 */
    /*   line 5728 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5712–5715 */
/* addr: 0x002deb70  size: 84 bytes */
void GLIPS2_vSetAE_CartoonEmboss(unsigned int bOnOff, float Blend)
{
    /* line map: */
    /*   line 5712 @ +0x000 */
    /*   line 5715 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5702–5705 */
/* addr: 0x002debd0  size: 36 bytes */
void GLIPS2_vSetAE_DepthBlur(unsigned int bOnOff, float fNear, float fFar, float fAlpha)
{
    /* line map: */
    /*   line 5702 @ +0x000 */
    /*   line 5705 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5681–5683 */
/* addr: 0x002dec00  size: 24 bytes */
void GLIPS2_vReinitAfterEffects(void)
{
    /* line map: */
    /*   line 5681 @ +0x000 */
    /*   line 5683 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5529–5644 */
/* addr: 0x002dec20  size: 1076 bytes */
void AE_Filter_AutoGlow(float r, float g, float b, float Brightness)
{
    /* line map: */
    /*   line 5529 @ +0x000 */
    /*   line 5529 @ +0x000 */
    /*   line 5529 @ +0x000 */
    /*   line 5529 @ +0x000 */
    /*   line 5529 @ +0x000 */
    /*   line 5529 @ +0x000 */
    /*   line 5532 @ +0x000 */
    /*   line 5534 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002df060  size: 8 bytes */
void AE_Filter_AutoGlowDown(float r, float g, float b, float Brightness)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5416–5475 */
/* addr: 0x002df070  size: 1312 bytes */
void AE_Filter_Glow(float r, float g, float b, float Brightness)
{
    /* line map: */
    /*   line 5416 @ +0x000 */
    /*   line 5416 @ +0x000 */
    /*   line 5419 @ +0x000 */
    /*   line 5422 @ +0x000 */
    /*   line 5425 @ +0x000 */
    /*   line 5427 @ +0x000 */
    /*   line 5431 @ +0x000 */
    /*   line 5433 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5375–5407 */
/* addr: 0x002df590  size: 656 bytes */
void AE_SimpleBlurWINDOWEDNoOptWithDirectionPAL(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* line map: */
    /*   line 5375 @ +0x000 */
    /*   line 5376 @ +0x000 */
    /*   line 5375 @ +0x000 */
    /*   line 5376 @ +0x000 */
    /*   line 5387 @ +0x000 */
    /*   line 5387 @ +0x000 */
    /*   line 5387 @ +0x000 */
    /*   line 5392 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5335–5366 */
/* addr: 0x002df820  size: 644 bytes */
void AE_SimpleBlurWINDOWEDNoOptWithDirection(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* line map: */
    /*   line 5335 @ +0x000 */
    /*   line 5336 @ +0x000 */
    /*   line 5335 @ +0x000 */
    /*   line 5336 @ +0x000 */
    /*   line 5346 @ +0x000 */
    /*   line 5346 @ +0x000 */
    /*   line 5346 @ +0x000 */
    /*   line 5351 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5296–5326 */
/* addr: 0x002dfab0  size: 656 bytes */
void AE_SimpleBlurWINDOWEDNoOptPAL(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* line map: */
    /*   line 5296 @ +0x000 */
    /*   line 5297 @ +0x000 */
    /*   line 5296 @ +0x000 */
    /*   line 5297 @ +0x000 */
    /*   line 5305 @ +0x000 */
    /*   line 5305 @ +0x000 */
    /*   line 5305 @ +0x000 */
    /*   line 5310 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5258–5288 */
/* addr: 0x002dfd40  size: 644 bytes */
void AE_SimpleBlurWINDOWEDNoOpt(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* line map: */
    /*   line 5258 @ +0x000 */
    /*   line 5259 @ +0x000 */
    /*   line 5258 @ +0x000 */
    /*   line 5259 @ +0x000 */
    /*   line 5267 @ +0x000 */
    /*   line 5267 @ +0x000 */
    /*   line 5267 @ +0x000 */
    /*   line 5272 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5220–5250 */
/* addr: 0x002dffd0  size: 644 bytes */
void AE_SimpleBlurWINDOWED(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* line map: */
    /*   line 5220 @ +0x000 */
    /*   line 5221 @ +0x000 */
    /*   line 5220 @ +0x000 */
    /*   line 5221 @ +0x000 */
    /*   line 5229 @ +0x000 */
    /*   line 5229 @ +0x000 */
    /*   line 5229 @ +0x000 */
    /*   line 5234 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002e0260  size: 8 bytes */
void GLIPS2_vProcessRedEnviromentEffect(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002e0270  size: 8 bytes */
void WAT_vTest(float (*) pPos[4])
{
    unsigned char zTst;
    int y2;
    int x2;
    unsigned int* pShiftAnd4;
    unsigned int* pShiftAnd3;
    unsigned int* pShiftAnd2;
    unsigned int* pShiftAnd;
    int y;
    int x;
    char* pCur;
    char* pOld;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3984–4430 */
/* addr: 0x002e0280  size: 5424 bytes */
void GLIPS2_vProcessWater2DEffectOLD(Water2DEffect_* p, float (*) pC[4], float (*) pV[4])
{
    unsigned char zTst;
    float fZVal;
    float ratio;
    float sin1;
    float cos1;
    float fSizeY;
    float fSizeX;
    float SY[4];
    float SX[4];
    float Pos4u[4];
    float Pos3u[4];
    float Pos2u[4];
    float Pos1u[4];
    float Pos0u[4];
    float Pos4[4];
    float Pos3[4];
    float Pos2[4];
    float Pos1[4];
    float Pos0[4];
    float v2DAdd[4];
    float v2DMul[4];
    float UvMul[4];
    float Mulu1[4];
    float Addu1[4];
    float Add2[4];
    float Mul1[4];
    float Add1[4];
    unsigned char zTst;
    unsigned char zTst;
    float* costable;
    float ZZ;
    float Y2;
    float X2;
    float Y1;
    float X1;
    float fADC;
    unsigned int ADC;
    unsigned int i;
    unsigned int NbTri;
    float a16_fWorldMatrix[4][4];
    /* line map: */
    /*   line 3991 @ +0x000 */
    /*   line 3984 @ +0x000 */
    /*   line 3987 @ +0x000 */
    /*   line 3991 @ +0x000 */
    /*   line 3992 @ +0x000 */
    /*   line 3994 @ +0x000 */
    /*   line 3997 @ +0x000 */
    /*   line 4001 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3824–3901 */
/* addr: 0x002e17b0  size: 2072 bytes */
void GLIPS2_Water2D_DisplayTriangle(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* line map: */
    /*   line 3824 @ +0x000 */
    /*   line 3826 @ +0x000 */
    /*   line 3828 @ +0x000 */
    /*   line 3830 @ +0x000 */
    /*   line 3832 @ +0x000 */
    /*   line 3839 @ +0x000 */
    /*   line 3841 @ +0x000 */
    /*   line 3848 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3615–3744 */
/* addr: 0x002e1fd0  size: 364 bytes */
void GLIPS2_Water2D_DisplayNearClippedTriangle(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float Pos2D2u[4];
    float Pos2D1u[4];
    float Pos2D0u[4];
    float Pos2D2[4];
    float Pos2D1[4];
    float Pos2D0[4];
    /* line map: */
    /*   line 3615 @ +0x000 */
    /*   line 3617 @ +0x000 */
    /*   line 3619 @ +0x000 */
    /*   line 3621 @ +0x000 */
    /*   line 3623 @ +0x000 */
    /*   line 3626 @ +0x000 */
    /*   line 3628 @ +0x000 */
    /*   line 3631 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3485–3602 */
/* addr: 0x002e2140  size: 2104 bytes */
void ClipTriangleOverXLow(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* line map: */
    /*   line 3485 @ +0x000 */
    /*   line 3485 @ +0x000 */
    /*   line 3487 @ +0x000 */
    /*   line 3491 @ +0x000 */
    /*   line 3491 @ +0x000 */
    /*   line 3547 @ +0x000 */
    /*   line 3549 @ +0x000 */
    /*   line 3554 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3350–3468 */
/* addr: 0x002e2980  size: 2156 bytes */
void ClipTriangleOverXHigh(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* line map: */
    /*   line 3350 @ +0x000 */
    /*   line 3350 @ +0x000 */
    /*   line 3350 @ +0x000 */
    /*   line 3350 @ +0x000 */
    /*   line 3352 @ +0x000 */
    /*   line 3356 @ +0x000 */
    /*   line 3356 @ +0x000 */
    /*   line 3413 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3213–3331 */
/* addr: 0x002e31f0  size: 2104 bytes */
void ClipTriangleOverYLow(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* line map: */
    /*   line 3213 @ +0x000 */
    /*   line 3213 @ +0x000 */
    /*   line 3215 @ +0x000 */
    /*   line 3219 @ +0x000 */
    /*   line 3219 @ +0x000 */
    /*   line 3276 @ +0x000 */
    /*   line 3278 @ +0x000 */
    /*   line 3283 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3078–3195 */
/* addr: 0x002e3a30  size: 2156 bytes */
void ClipTriangleOverYHigh(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* line map: */
    /*   line 3078 @ +0x000 */
    /*   line 3078 @ +0x000 */
    /*   line 3078 @ +0x000 */
    /*   line 3078 @ +0x000 */
    /*   line 3080 @ +0x000 */
    /*   line 3084 @ +0x000 */
    /*   line 3084 @ +0x000 */
    /*   line 3140 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2960–3061 */
/* addr: 0x002e42a0  size: 1704 bytes */
void GLIPS2_Water2D_DisplayClippedTriangle(float* Pos2D0, float* Pos2D1, float* Pos2D2, float* Pos2D0u, float* Pos2D1u, float* Pos2D2u, float* C0, float* C1, float* C2)
{
    unsigned long* curtag;
    /* line map: */
    /*   line 2960 @ +0x000 */
    /*   line 2960 @ +0x000 */
    /*   line 2960 @ +0x000 */
    /*   line 2964 @ +0x000 */
    /*   line 2967 @ +0x000 */
    /*   line 2967 @ +0x000 */
    /*   line 2969 @ +0x000 */
    /*   line 2970 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2610–2657 */
/* addr: 0x002e4950  size: 552 bytes */
void GLIPS2_vMakeWaterEffect(void)
{
    float Variation;
    float* costable;
    float Time;
    float ySize;
    float xSize;
    float yStep;
    float xStep;
    float y;
    float x;
    float Z;
    float Y2;
    float X2;
    float Y1;
    float X1;
    /* line map: */
    /*   line 2610 @ +0x000 */
    /*   line 2621 @ +0x000 */
    /*   line 2621 @ +0x000 */
    /*   line 2617 @ +0x000 */
    /*   line 2619 @ +0x000 */
    /*   line 2624 @ +0x000 */
    /*   line 2624 @ +0x000 */
    /*   line 2624 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2556–2571 */
/* addr: 0x002e4b80  size: 324 bytes */
void GLIPS2_vWaterFXProcess(Water2DEffect_* p)
{
    float TimeDiff;
    unsigned int i;
    float OldFrameTime;
    /* line map: */
    /*   line 2556 @ +0x000 */
    /*   line 2556 @ +0x000 */
    /*   line 2556 @ +0x000 */
    /*   line 2561 @ +0x000 */
    /*   line 2561 @ +0x000 */
    /*   line 2560 @ +0x000 */
    /*   line 2563 @ +0x000 */
    /*   line 2563 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2360–2496 */
/* addr: 0x002e4cd0  size: 1236 bytes */
void GLIPS2_vProcessMatrixDeformations(float (*) pPos2D[4])
{
    unsigned int Found;
    float fUvSizey;
    float fUvSizex;
    float UVs[4];
    float fSizey;
    float fSizex;
    unsigned int i;
    float a16_fProjectionMatrix[4][4];
    float a16_fWorldMatrix[4][4];
    /* line map: */
    /*   line 2360 @ +0x000 */
    /*   line 2364 @ +0x000 */
    /*   line 2364 @ +0x000 */
    /*   line 2375 @ +0x000 */
    /*   line 2380 @ +0x000 */
    /*   line 2383 @ +0x000 */
    /*   line 2389 @ +0x000 */
    /*   line 2397 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2339–2339 */
/* addr: 0x002e51b0  size: 16 bytes */
void GLIPS2_vReinitMatrixDeformations(void)
{
    /* line map: */
    /*   line 2339 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2311–2332 */
/* addr: 0x002e51c0  size: 316 bytes */
void GLIPS2_vAddMatrixDeformationEffect(/* function pointer */ int pPosition, float fSize, unsigned int TYPE)
{
    unsigned int MinIndex;
    float MinVal;
    unsigned int i;
    /* line map: */
    /*   line 2311 @ +0x000 */
    /*   line 2311 @ +0x000 */
    /*   line 2312 @ +0x000 */
    /*   line 2314 @ +0x000 */
    /*   line 2318 @ +0x000 */
    /*   line 2321 @ +0x000 */
    /*   line 2324 @ +0x000 */
    /*   line 2324 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2303–2306 */
/* addr: 0x002e5300  size: 208 bytes */
void GLIPS2_vInitMatrixDeformation(void)
{
    unsigned int i;
    /* line map: */
    /*   line 2303 @ +0x000 */
    /*   line 2306 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2259–2271 */
/* addr: 0x002e53d0  size: 232 bytes */
void AE_EndMatrixEffect(void)
{
    anon_1 qword;
    /* line map: */
    /*   line 2259 @ +0x000 */
    /*   line 2259 @ +0x000 */
    /*   line 2259 @ +0x000 */
    /*   line 2259 @ +0x000 */
    /*   line 2259 @ +0x000 */
    /*   line 2259 @ +0x000 */
    /*   line 2261 @ +0x000 */
    /*   line 2261 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2036–2244 */
/* addr: 0x002e54c0  size: 3664 bytes */
void AE_DrawMatrixDeformation(float Z, float x1, float y1f, float sx, float sy, float u1, float v1, float su, float sv, float AlphaCenter, float Angle)
{
    float VY2;
    float VX2;
    float vMul;
    float uMul;
    unsigned long V[5];
    unsigned long U[5];
    unsigned int Y[5];
    unsigned int X[5];
    anon_1 qworduv;
    anon_1 qword2;
    anon_1 qword1;
    float sin1;
    float cos1;
    anon_1 qwordcZero;
    anon_1 qwordcOne;
    /* line map: */
    /*   line 2036 @ +0x000 */
    /*   line 2054 @ +0x000 */
    /*   line 2054 @ +0x000 */
    /*   line 2051 @ +0x000 */
    /*   line 2056 @ +0x000 */
    /*   line 2064 @ +0x000 */
    /*   line 2046 @ +0x000 */
    /*   line 2051 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2006–2025 */
/* addr: 0x002e6310  size: 272 bytes */
void AE_PrepareMatrixEffect(void)
{
    anon_1 qword;
    /* line map: */
    /*   line 2006 @ +0x000 */
    /*   line 2006 @ +0x000 */
    /*   line 2013 @ +0x000 */
    /*   line 2013 @ +0x000 */
    /*   line 2007 @ +0x000 */
    /*   line 2011 @ +0x000 */
    /*   line 2013 @ +0x000 */
    /*   line 2010 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1880–1882 */
/* addr: 0x002e6420  size: 92 bytes */
void GLIPS2_vSetDepthBlurMode(float Near, float Far, float Intensity)
{
    /* line map: */
    /*   line 1880 @ +0x000 */
    /*   line 1881 @ +0x000 */
    /*   line 1882 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1824–1864 */
/* addr: 0x002e6480  size: 540 bytes */
void DoFullScreenWaterEffect(void)
{
    float Angle;
    int y;
    float UVs[25][2];
    float Points[25][2];
    /* line map: */
    /*   line 1824 @ +0x000 */
    /*   line 1826 @ +0x000 */
    /*   line 1830 @ +0x000 */
    /*   line 1830 @ +0x000 */
    /*   line 1831 @ +0x000 */
    /*   line 1829 @ +0x000 */
    /*   line 1831 @ +0x000 */
    /*   line 1834 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1768–1814 */
/* addr: 0x002e66a0  size: 608 bytes */
void DoFullScreenWaterEffectForMirror(void)
{
    float Angle;
    float Time;
    int y;
    int x;
    float UVs[25][2];
    float Points[25][2];
    /* line map: */
    /*   line 1770 @ +0x000 */
    /*   line 1768 @ +0x000 */
    /*   line 1775 @ +0x000 */
    /*   line 1775 @ +0x000 */
    /*   line 1775 @ +0x000 */
    /*   line 1776 @ +0x000 */
    /*   line 1776 @ +0x000 */
    /*   line 1778 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1582–1757 */
/* addr: 0x002e6900  size: 3524 bytes */
void AE_DrawDeformedScreen(float (*) Points[2], float (*) UVs[2])
{
    float vMul;
    float uMul;
    unsigned long V[4];
    unsigned long U[4];
    unsigned int Y[4];
    unsigned int X[4];
    unsigned int Indice;
    int x;
    anon_1 qworduv;
    anon_1 qword2;
    anon_1 qword1;
    anon_1 qword;
    /* line map: */
    /*   line 1582 @ +0x000 */
    /*   line 1582 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1590 @ +0x000 */
    /*   line 1590 @ +0x000 */
    /*   line 1595 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1551–1568 */
/* addr: 0x002e76d0  size: 144 bytes */
void GLI_vSaveCurrentBackBuffer(void)
{
    /* line map: */
    /*   line 1551 @ +0x000 */
    /*   line 1555 @ +0x000 */
    /*   line 1557 @ +0x000 */
    /*   line 1560 @ +0x000 */
    /*   line 1562 @ +0x000 */
    /*   line 1565 @ +0x000 */
    /*   line 1568 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1502–1542 */
/* addr: 0x002e7760  size: 976 bytes */
void AE_PostProcessShadow(void)
{
    /* line map: */
    /*   line 1502 @ +0x000 */
    /*   line 1502 @ +0x000 */
    /*   line 1502 @ +0x000 */
    /*   line 1502 @ +0x000 */
    /*   line 1502 @ +0x000 */
    /*   line 1502 @ +0x000 */
    /*   line 1502 @ +0x000 */
    /*   line 1502 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1238–1249 */
/* addr: 0x002e7b30  size: 120 bytes */
void GLI_vRestoreSavedFrameBuffer(void)
{
    /* line map: */
    /*   line 1238 @ +0x000 */
    /*   line 1241 @ +0x000 */
    /*   line 1244 @ +0x000 */
    /*   line 1246 @ +0x000 */
    /*   line 1249 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1217–1234 */
/* addr: 0x002e7bb0  size: 144 bytes */
void GLI_vSaveCurrentFrameBuffer(void)
{
    /* line map: */
    /*   line 1217 @ +0x000 */
    /*   line 1221 @ +0x000 */
    /*   line 1223 @ +0x000 */
    /*   line 1226 @ +0x000 */
    /*   line 1228 @ +0x000 */
    /*   line 1231 @ +0x000 */
    /*   line 1234 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1109–1202 */
/* addr: 0x002e7c40  size: 1552 bytes */
void GLI_vProcessFilters(void)
{
    /* line map: */
    /*   line 1109 @ +0x000 */
    /*   line 1112 @ +0x000 */
    /*   line 1116 @ +0x000 */
    /*   line 1123 @ +0x000 */
    /*   line 1128 @ +0x000 */
    /*   line 1128 @ +0x000 */
    /*   line 1128 @ +0x000 */
    /*   line 1128 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1064–1095 */
/* addr: 0x002e8250  size: 316 bytes */
void GLI_vProcessPSX_FX(void)
{
    /* line map: */
    /*   line 1064 @ +0x000 */
    /*   line 1068 @ +0x000 */
    /*   line 1070 @ +0x000 */
    /*   line 1073 @ +0x000 */
    /*   line 1075 @ +0x000 */
    /*   line 1080 @ +0x000 */
    /*   line 1083 @ +0x000 */
    /*   line 1085 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1047–1056 */
/* addr: 0x002e8390  size: 76 bytes */
void GLIPS2_vCreateWaterEffect(unsigned int Type, float X1, float Y1, float X2, float Y2, float Z)
{
    /* line map: */
    /*   line 1051 @ +0x000 */
    /*   line 1047 @ +0x000 */
    /*   line 1052 @ +0x000 */
    /*   line 1050 @ +0x000 */
    /*   line 1051 @ +0x000 */
    /*   line 1056 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002e83e0  size: 8 bytes */
void GLIPS2_vSetWaterDeformation(int Val)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 977–977 */
/* addr: 0x002e83f0  size: 12 bytes */
void ActivateOldMovieEffect(void)
{
    /* line map: */
    /*   line 977 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 966–970 */
/* addr: 0x002e8400  size: 32 bytes */
void ReinitOldMovieEffect(void)
{
    /* line map: */
    /*   line 966 @ +0x000 */
    /*   line 968 @ +0x000 */
    /*   line 970 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 942–955 */
/* addr: 0x002e8420  size: 44 bytes */
/*type_0x00*/ int ProcessOldMovieEffect(void)
{
    /* line map: */
    /*   line 942 @ +0x000 */
    /*   line 942 @ +0x000 */
    /*   line 955 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 760–901 */
/* addr: 0x002e8450  size: 2612 bytes */
void AE_BlackAndWhite(void)
{
    float startV;
    float startU;
    float xx2;
    float x;
    float xx;
    /* line map: */
    /*   line 760 @ +0x000 */
    /*   line 760 @ +0x000 */
    /*   line 760 @ +0x000 */
    /*   line 763 @ +0x000 */
    /*   line 763 @ +0x000 */
    /*   line 765 @ +0x000 */
    /*   line 765 @ +0x000 */
    /*   line 767 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 609–671 */
/* addr: 0x002e8e90  size: 708 bytes */
void GLI_vProcessMirrorAfterEffect(void)
{
    /* line map: */
    /*   line 609 @ +0x000 */
    /*   line 613 @ +0x000 */
    /*   line 617 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 622 @ +0x000 */
    /*   line 625 @ +0x000 */
    /*   line 627 @ +0x000 */
    /*   line 629 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002e9160  size: 8 bytes */
void GLIPS2_vSetMirrorBlur(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 402–477 */
/* addr: 0x002e9170  size: 980 bytes */
void ProcessOldTV(void)
{
    float x;
    float Lum;
    float startV;
    float startU;
    /* line map: */
    /*   line 402 @ +0x000 */
    /*   line 407 @ +0x000 */
    /*   line 414 @ +0x000 */
    /*   line 418 @ +0x000 */
    /*   line 423 @ +0x000 */
    /*   line 425 @ +0x000 */
    /*   line 427 @ +0x000 */
    /*   line 429 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 378–395 */
/* addr: 0x002e9550  size: 268 bytes */
void AE_Filter_BlurUsingDestAlpha2(void)
{
    float dx;
    float dy;
    /* line map: */
    /*   line 378 @ +0x000 */
    /*   line 381 @ +0x000 */
    /*   line 385 @ +0x000 */
    /*   line 385 @ +0x000 */
    /*   line 391 @ +0x000 */
    /*   line 391 @ +0x000 */
    /*   line 391 @ +0x000 */
    /*   line 391 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 214–228 */
/* addr: 0x002e9660  size: 288 bytes */
void GLI_vReduceBackBufferTo256x256(void)
{
    /* line map: */
    /*   line 214 @ +0x000 */
    /*   line 214 @ +0x000 */
    /*   line 217 @ +0x000 */
    /*   line 219 @ +0x000 */
    /*   line 222 @ +0x000 */
    /*   line 225 @ +0x000 */
    /*   line 228 @ +0x000 */
    /* TODO: decompile from asm/... */
}
