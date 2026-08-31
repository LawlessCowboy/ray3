/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sceGsTexflush sceGsTexflush;
typedef struct sceGsBitbltbuf sceGsBitbltbuf;
typedef struct sceGsSignal sceGsSignal;
typedef struct tagGLtexname tagGLtexname;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tagListNode tagListNode;
typedef struct tagGScontext tagGScontext;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagGLcontext tagGLcontext;
typedef struct sceGsFog sceGsFog;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct sceGsTrxdir sceGsTrxdir;
typedef struct sceGsXyz sceGsXyz;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct sceGsSt sceGsSt;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct sceGsMiptbp2 sceGsMiptbp2;
typedef struct sceGsFogcol sceGsFogcol;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct sceGsTrxpos sceGsTrxpos;
typedef struct sceGsXyzf sceGsXyzf;
typedef struct sceGifTag sceGifTag;
typedef struct sceGsTest sceGsTest;
typedef struct sceGsTex2 sceGsTex2;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct sceGsRgbaq sceGsRgbaq;
typedef struct sceGsClamp sceGsClamp;
typedef struct sceGsFrame sceGsFrame;
typedef struct sceGsZbuf sceGsZbuf;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct sceGsPabe sceGsPabe;
typedef struct stParamBegin stParamBegin;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct sceGsTrxreg sceGsTrxreg;
typedef struct sceGsTexa sceGsTexa;
typedef struct sceGsScanmsk sceGsScanmsk;
typedef struct sceGsTex0 sceGsTex0;
typedef struct tag_GLlight tag_GLlight;
typedef struct sceGsPrim sceGsPrim;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct sceGsColclamp sceGsColclamp;
typedef struct sceGsDthe sceGsDthe;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct sceGsScissor sceGsScissor;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct sceGsUv sceGsUv;
typedef struct sceGsAlpha sceGsAlpha;
typedef union unFunction unFunction;
typedef struct sceGsTexclut sceGsTexclut;
typedef struct sceGsLabel sceGsLabel;
typedef struct sceGsFba sceGsFba;
typedef struct sceGsDimx sceGsDimx;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct sceGsXyoffset sceGsXyoffset;
typedef struct sceGsMiptbp1 sceGsMiptbp1;
typedef struct sceGsPrmode sceGsPrmode;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct sceGsTex1 sceGsTex1;

struct sceGsTexflush {
    unsigned long pad00; /* +0x0 */
};

struct sceGsBitbltbuf {
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

struct sceGsSignal {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
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

struct tagListNode {
    int pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    /* aggregate */ int apData; /* +0xc */
};

struct tagGScontext {
    sceGsPrim PRIM; /* +0x0 */
    sceGsRgbaq RGBAQ; /* +0x8 */
    sceGsSt ST; /* +0x10 */
    sceGsUv UV; /* +0x18 */
    sceGsXyzf XYZF2; /* +0x20 */
    sceGsXyz XYZ2; /* +0x28 */
    sceGsTex0 TEX0_1; /* +0x30 */
    sceGsTex0 TEX0_2; /* +0x38 */
    sceGsClamp CLAMP_1; /* +0x40 */
    sceGsClamp CLAMP_2; /* +0x48 */
    sceGsFog FOG; /* +0x50 */
    sceGsXyzf XYZF3; /* +0x58 */
    sceGsXyz XYZ3; /* +0x60 */
    sceGsTex1 TEX1_1; /* +0x68 */
    sceGsTex1 TEX1_2; /* +0x70 */
    sceGsTex2 TEX2_1; /* +0x78 */
    sceGsTex2 TEX2_2; /* +0x80 */
    sceGsXyoffset XYOFFSET_1; /* +0x88 */
    sceGsXyoffset XYOFFSET_2; /* +0x90 */
    /* aggregate */ int PRMODECONT; /* +0x98 */
    sceGsPrmode PRMODE; /* +0xa0 */
    sceGsTexclut TEXCLUT; /* +0xa8 */
    sceGsScanmsk SCANMSK; /* +0xb0 */
    sceGsMiptbp1 MIPTBP1_1; /* +0xb8 */
    sceGsMiptbp1 MIPTBP1_2; /* +0xc0 */
    sceGsMiptbp2 MIPTBP2_1; /* +0xc8 */
    sceGsMiptbp2 MIPTBP2_2; /* +0xd0 */
    sceGsTexa TEXA; /* +0xd8 */
    sceGsFogcol FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    sceGsScissor SCISSOR_1; /* +0xf0 */
    sceGsScissor SCISSOR_2; /* +0xf8 */
    sceGsAlpha ALPHA_1; /* +0x100 */
    sceGsAlpha ALPHA_2; /* +0x108 */
    sceGsDimx DIMX; /* +0x110 */
    sceGsDthe DTHE; /* +0x118 */
    sceGsColclamp COLCLAMP; /* +0x120 */
    sceGsTest TEST_1; /* +0x128 */
    sceGsTest TEST_2; /* +0x130 */
    sceGsPabe PABE; /* +0x138 */
    sceGsFba FBA_1; /* +0x140 */
    sceGsFba FBA_2; /* +0x148 */
    sceGsFrame FRAME_1; /* +0x150 */
    sceGsFrame FRAME_2; /* +0x158 */
    sceGsZbuf ZBUF_1; /* +0x160 */
    sceGsZbuf ZBUF_2; /* +0x168 */
    sceGsBitbltbuf BITBLTBUF; /* +0x170 */
    sceGsTrxpos TRXPOS; /* +0x178 */
    sceGsTrxreg TRXREG; /* +0x180 */
    sceGsTrxdir TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    sceGsSignal SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    sceGsLabel LABEL; /* +0x1a8 */
    /* aggregate */ int ModFlgs; /* +0x1b0 */
    /* aggregate */ int GlobalModFlgs; /* +0x1b8 */
    /* array */ int PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    int pqCurrent; /* +0x2224 */
    int pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct tagGLlistcalls {
    int pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
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
    /* array */ int vacurColor[2]; /* +0x60b0 */
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

struct sceGsFog {
    unsigned long param0 : 56; /* bit None, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct tagGsSetTex {
    sceGifTag gifTag; /* +0x0 */
    sceGsTexflush texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    sceGsTex0 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    sceGsTex1 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    sceGsMiptbp1 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    sceGsMiptbp2 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    sceGsClamp clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct sceGsTrxdir {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct sceGsXyz {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
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

struct sceGsSt {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct tagGLprimbuf {
    int pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    int pData; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct sceGsMiptbp2 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct sceGsFogcol {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
};

struct sceGsTrxpos {
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

struct sceGsXyzf {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct sceGifTag {
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

struct sceGsTest {
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

struct sceGsTex2 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long 8 : 5; /* bit None, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tagGsLoadImage {
    sceGifTag gifTag; /* +0x0 */
    sceGsBitbltbuf bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    sceGsTrxpos trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    sceGsTrxreg trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    sceGsTrxdir trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct sceGsRgbaq {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct sceGsClamp {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct sceGsFrame {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct sceGsZbuf {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    /* array */ int aSingleIndex[64]; /* +0x4 */
    int pFirstNode; /* +0x204 */
    int pLastNode; /* +0x208 */
};

struct sceGsPabe {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct stParamBegin {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    int pPrimBuf; /* +0x18 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct sceGsTrxreg {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct sceGsTexa {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct sceGsScanmsk {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct sceGsTex0 {
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

struct sceGsPrim {
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct sceGsColclamp {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsDthe {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct sceGsScissor {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct sceGsUv {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct sceGsAlpha {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
};

struct sceGsTexclut {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct sceGsLabel {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct sceGsFba {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsDimx {
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

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct sceGsXyoffset {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct sceGsMiptbp1 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct sceGsPrmode {
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

struct sceGsTex1 {
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

int pSpriteController;
unsigned int GLI_g_UseAlphaTest;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int g_p_stVpt;
unsigned char g_GLI_ForcedAAAColor[3];
char g_GLI_bForceAAAColor;
int g_bDrawingBlackFrame;
float gs_fCoefOfMultiplicationForAnimatedTexture;
float g_AGO_AnimTimeScale;
unsigned int SCT_g_DrawingMirrored;
tagGScontext 8;
tagGLcontext 8;
float myColorRange[4];
unsigned int GLI_g_ProjectionMode;
float GLI_g_NegVect[4];
unsigned int GLI_g_DontRefreshAnimated;
unsigned char g_bHasTextureAnimationFinished;
float g_BaseTimeForParticleAnimation;
unsigned char g_bTakeCareOfAnimationCoordination;
int GLI_BIG_GLOBALS_lCurrentDrawMask;
int GLI_g_AnimatedTextureToUse;
unsigned int GLI_g_CurrentStage;
int PS2glLiberator;
int PS2glAllocator64;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 84–95 */
/* addr: 0x002d0dc0  size: 48 bytes */
void PS2ASM_SearchBlocInChain(void* Chain, void* Bloc)
{
    /* line map: */
    /*   line 84 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 90 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 95 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0df0  size: 20 bytes */
void GLI_vDraw2DRectangleWithColor(float xXMin, float xXMax, float xYMin, float xYMax, /* function pointer */ int hMaterial, unsigned int ulColor)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0e10  size: 24 bytes */
void GLI_vDrawFireSpriteGroup(/* function pointer */ int param0, float (*) pData[4], unsigned int NbParticles)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0e30  size: 48 bytes */
void GLI_vDrawWorldQuadWithUVsAndAlpha(/* function pointer */ int param0, float* x1, float* x2, float* x3, float* x4, float U1, float V1, float U2, float V2, float fAlpha1, float fAlpha2, float fAlpha3, float fAlpha4, /* function pointer */ int VisualMaterial)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0e60  size: 32 bytes */
int GLI_vDrawWorldPlanarSprite(/* function pointer */ int param0, /* function pointer */ int pMaterial, float fscaleX, float fscaleY, /* function pointer */ int _p_stViewport, unsigned int AnimTime)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0e80  size: 48 bytes */
void GLI_vDrawWorldQuadOpt(/* function pointer */ int param0, float* x1, float* x2, float* x3, float* x4, /* function pointer */ int pMaterial)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0eb0  size: 40 bytes */
void GLI_vDrawWorldOrthoPlanarOrientedSprite(float* param0, void* pMaterial, float fscaleX, float fscaleY, /* function pointer */ int _p_stViewport, /* function pointer */ int p_stV1, /* function pointer */ int p_stV2, float fAngle)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0ee0  size: 56 bytes */
int GLI_vDrawWorldOrthoPlanarSpriteColor(/* function pointer */ int param0, /* function pointer */ int hVisualMaterial, float SizeX, float SizeY, /* function pointer */ int _p_stViewport, unsigned int AnimTime, /* function pointer */ int p_stV1, /* function pointer */ int p_stV2, unsigned int ulColor)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0f20  size: 48 bytes */
int GLI_vDrawWorldOrthoPlanarSprite(/* function pointer */ int param0, /* function pointer */ int hVisualMaterial, float SizeX, float SizeY, /* function pointer */ int _p_stViewport, unsigned int AnimTime, /* function pointer */ int p_stV1, /* function pointer */ int p_stV2)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0f50  size: 48 bytes */
int GLI_vDrawWorldSpriteWithUVsOpt(/* function pointer */ int param0, /* function pointer */ int hVisualMaterial, float SizeX, float SizeY, float U1, float V1, float U2, float V2, /* function pointer */ int _p_stViewport, unsigned int AnimTime)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0f80  size: 8 bytes */
void GLI_vDrawWorldSemiLookatSpriteWithUVs(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0f90  size: 32 bytes */
void GLI_vDrawWorldSemiLookatSprite(/* function pointer */ int param0, /* function pointer */ int a3_fPosition2, /* function pointer */ int pMaterial, float fSizeX, int bFade, float Alpha1, float Alpha2)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0fb0  size: 8 bytes */
void GLI_v_DisplayTobies(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0fc0  size: 8 bytes */
void GLI_vDrawWorldTwoTrianglesWithUVs(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d0fd0  size: 48 bytes */
void GLI_vDrawWorldQuadWithUVsAndFade(/* function pointer */ int param0, float* x1, float* x2, float* x3, float* x4, float U1, float V1, float U2, float V2, /* function pointer */ int pMaterial, float fAlpha, float fPercentage)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d1000  size: 48 bytes */
void GLI_vDrawWorldQuadWithUVsOpt(/* function pointer */ int param0, float* x1, float* x2, float* x3, float* x4, float U1, float V1, float U2, float V2, /* function pointer */ int pMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2389–2392 */
/* addr: 0x002d1030  size: 144 bytes */
void GLI_xSetMaterialTextureForTXT(/* function pointer */ int pMat, GLI_tdstTexture_* pTex)
{
    /* line map: */
    /*   line 2389 @ +0x000 */
    /*   line 2392 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d10c0  size: 20 bytes */
void GLI_vDraw2DSpriteWithPercent(/* function pointer */ int _p_stViewport, float XMin, float YMin, float XMax, float YMax, /* function pointer */ int hMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2377–2377 */
/* addr: 0x002d10e0  size: 56 bytes */
void GLI_vDraw2DSpriteAndRotateWithPercentAndUVs(/* function pointer */ int param0, float XMin, float YMin, float XMax, float YMax, float u1, float u2, float v1, float v2, float xAngle, /* function pointer */ int hMaterial)
{
    /* line map: */
    /*   line 2377 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2371–2371 */
/* addr: 0x002d1120  size: 56 bytes */
void GLI_vDraw2DSpriteWithPercentAndUVs(/* function pointer */ int _p_stViewport, float XMin, float YMin, float XMax, float YMax, float u1, float u2, float v1, float v2, /* function pointer */ int hMaterial)
{
    /* line map: */
    /*   line 2371 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d1160  size: 20 bytes */
void GLI_vDraw2DSpriteWithUVWithOptimization(/* function pointer */ int p_stVpt, float xXMin, float xXMax, float xYMin, float xYMax, float xUMin, float xUMax, float xVMin, float xVMax, /* function pointer */ int hMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2357–2357 */
/* addr: 0x002d1180  size: 12 bytes */
void GLI_vEnableDepthTest(void)
{
    /* line map: */
    /*   line 2357 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2353–2353 */
/* addr: 0x002d1190  size: 16 bytes */
void GLI_vDisableDepthTest(void)
{
    /* line map: */
    /*   line 2353 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d11a0  size: 32 bytes */
int GLI_vDrawWorldSpriteWithUVsOrientedOpt(/* function pointer */ int param0, /* function pointer */ int hVisualMaterial, float SizeX, float SizeY, float U1, float V1, float U2, float V2, /* function pointer */ int _p_stViewport, unsigned int AnimTime, float fAngle)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d11c0  size: 12 bytes */
void GLI_vInitSpritesForThisViewport(/* function pointer */ int _p_stViewport)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d11d0  size: 16 bytes */
int GLI_vDrawWorldSpriteColor(/* function pointer */ int pPosition, /* function pointer */ int pMaterial, float SizeX, float SizeY, unsigned int ulColor)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d11e0  size: 20 bytes */
int GLI_vDrawWorldSpriteWithUVAnimation(/* function pointer */ int pMaterial, /* function pointer */ int pPosition, float SizeX, float SizeY, float AnimTime)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002d1200  size: 12 bytes */
int GLI_vDrawWorldSpriteOpt(/* function pointer */ int pPosition, /* function pointer */ int pMaterial, float SizeX, float SizeY)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2311–2311 */
/* addr: 0x002d1210  size: 132 bytes */
void GLI_vReinitSprites(void)
{
    /* line map: */
    /*   line 2311 @ +0x000 */
    /*   line 2311 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2306–2306 */
/* addr: 0x002d12a0  size: 140 bytes */
void GLI_vEndNewSprite(void)
{
    /* line map: */
    /*   line 2306 @ +0x000 */
    /*   line 2306 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2301–2301 */
/* addr: 0x002d1330  size: 56 bytes */
void GLI_vInitSpriteController(void)
{
    /* line map: */
    /*   line 2301 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2216–2286 */
/* addr: 0x002d1370  size: 524 bytes */
void CSpriteController::Draw2DRectangleWithColor(float xXMin, float xXMax, float xYMin, float xYMax, /* function pointer */ int hMaterial, unsigned int ulColor, float (*) pV[4])
{
    float fADC;
    unsigned int* pC;
    /* line map: */
    /*   line 2216 @ +0x000 */
    /*   line 2220 @ +0x000 */
    /*   line 2220 @ +0x000 */
    /*   line 2216 @ +0x000 */
    /*   line 2226 @ +0x000 */
    /*   line 2226 @ +0x000 */
    /*   line 2253 @ +0x000 */
    /*   line 2240 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2123–2201 */
/* addr: 0x002d1580  size: 592 bytes */
void CSpriteController::Icon2D_Percent(float xXMin, float xYMin, float xXMax, float xYMax, /* function pointer */ int hMaterial, float (*) param5[4])
{
    float fADC;
    int Alpha;
    unsigned int* pC;
    unsigned int Color;
    /* line map: */
    /*   line 2127 @ +0x000 */
    /*   line 2123 @ +0x000 */
    /*   line 2127 @ +0x000 */
    /*   line 2127 @ +0x000 */
    /*   line 2123 @ +0x000 */
    /*   line 2129 @ +0x000 */
    /*   line 2129 @ +0x000 */
    /*   line 2134 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1892–2019 */
/* addr: 0x002d17d0  size: 1044 bytes */
void CSpriteController::Icon2D_Rotate_Percent_and_UVs(float xXMin, float xXMax, float xYMin, float xYMax, float xU1, float xU2, float xV1, float xV2, float xAngle, /* function pointer */ int hMaterial, float (*) pV[4])
{
    float fYm;
    float fXm;
    float fYc;
    float fYs;
    float fXs;
    float fXc;
    float fSin;
    float fCos;
    float fADC;
    int Alpha;
    unsigned int* pC;
    unsigned int VMax;
    unsigned int VMin;
    unsigned int UMax;
    unsigned int UMin;
    unsigned int Color;
    /* line map: */
    /*   line 1896 @ +0x000 */
    /*   line 1892 @ +0x000 */
    /*   line 1896 @ +0x000 */
    /*   line 1896 @ +0x000 */
    /*   line 1892 @ +0x000 */
    /*   line 1898 @ +0x000 */
    /*   line 1898 @ +0x000 */
    /*   line 1903 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1802–1878 */
/* addr: 0x002d1bf0  size: 604 bytes */
void CSpriteController::Sprite2DWithUV(float xXMin, float xXMax, float xYMin, float xYMax, float xUMin, float xUMax, float xVMin, float xVMax, /* function pointer */ int hMaterial, float (*) param9[4])
{
    float fADC;
    int Alpha;
    unsigned int* pC;
    unsigned int VMax;
    unsigned int VMin;
    unsigned int UMax;
    unsigned int UMin;
    unsigned int Color;
    /* line map: */
    /*   line 1802 @ +0x000 */
    /*   line 1806 @ +0x000 */
    /*   line 1806 @ +0x000 */
    /*   line 1806 @ +0x000 */
    /*   line 1802 @ +0x000 */
    /*   line 1814 @ +0x000 */
    /*   line 1809 @ +0x000 */
    /*   line 1814 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1721–1787 */
/* addr: 0x002d1e50  size: 884 bytes */
void CSpriteController::DrawWorldQuadWithUVsAndAlpha(float* x1, float* x2, float* x3, float* x4, float u1, float v1, float u2, float v2, float fAlpha1, float fAlpha2, float fAlpha3, float fAlpha4, /* function pointer */ int pMaterial, float (*) pV[4])
{
    float fADC;
    int VMax;
    int VMin;
    int UMax;
    int UMin;
    unsigned int* pC;
    /* line map: */
    /*   line 1721 @ +0x000 */
    /*   line 1725 @ +0x000 */
    /*   line 1725 @ +0x000 */
    /*   line 1725 @ +0x000 */
    /*   line 1721 @ +0x000 */
    /*   line 1732 @ +0x000 */
    /*   line 1732 @ +0x000 */
    /*   line 1732 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1590–1707 */
/* addr: 0x002d21d0  size: 704 bytes */
void CSpriteController::WorldQuadWithUVAndFade(float* x1, float* x2, float* x3, float* x4, float u1, float v1, float u2, float v2, /* function pointer */ int pMaterial, float fPercentage, float (*) pV[4])
{
    float fADC;
    float vTmp;
    int v5;
    int v3;
    int VMax;
    int VMin;
    int UMax;
    int UMin;
    int Alpha;
    unsigned int* pC;
    unsigned int Color;
    /* line map: */
    /*   line 1590 @ +0x000 */
    /*   line 1594 @ +0x000 */
    /*   line 1594 @ +0x000 */
    /*   line 1594 @ +0x000 */
    /*   line 1590 @ +0x000 */
    /*   line 1600 @ +0x000 */
    /*   line 1599 @ +0x000 */
    /*   line 1619 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1501–1564 */
/* addr: 0x002d2490  size: 508 bytes */
void CSpriteController::WorldQuadWithUV(float* x1, float* x2, float* x3, float* x4, float u1, float v1, float u2, float v2, /* function pointer */ int pMaterial, float (*) param9[4])
{
    float fADC;
    int VMax;
    int VMin;
    int UMax;
    int UMin;
    unsigned int* pC;
    /* line map: */
    /*   line 1501 @ +0x000 */
    /*   line 1505 @ +0x000 */
    /*   line 1505 @ +0x000 */
    /*   line 1505 @ +0x000 */
    /*   line 1501 @ +0x000 */
    /*   line 1513 @ +0x000 */
    /*   line 1510 @ +0x000 */
    /*   line 1519 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1430–1486 */
/* addr: 0x002d2690  size: 384 bytes */
void CSpriteController::WorldQuad(float* x1, float* x2, float* x3, float* x4, /* function pointer */ int pMaterial, float (*) param5[4])
{
    float fADC;
    unsigned int* pC;
    /* line map: */
    /*   line 1430 @ +0x000 */
    /*   line 1434 @ +0x000 */
    /*   line 1430 @ +0x000 */
    /*   line 1442 @ +0x000 */
    /*   line 1439 @ +0x000 */
    /*   line 1442 @ +0x000 */
    /*   line 1442 @ +0x000 */
    /*   line 1442 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1338–1416 */
/* addr: 0x002d2810  size: 404 bytes */
int CSpriteController::WorldPlanarSprite(/* function pointer */ int pPosition, /* function pointer */ int pMaterial, float fSizeX, float fSizeY, float (*) pV[4])
{
    float fADC;
    float Pos[4];
    float Vy[4];
    float Vx[4];
    unsigned int* pC;
    /* line map: */
    /*   line 1338 @ +0x000 */
    /*   line 1342 @ +0x000 */
    /*   line 1342 @ +0x000 */
    /*   line 1342 @ +0x000 */
    /*   line 1359 @ +0x000 */
    /*   line 1358 @ +0x000 */
    /*   line 1360 @ +0x000 */
    /*   line 1384 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1230–1323 */
/* addr: 0x002d29b0  size: 556 bytes */
void CSpriteController::WorldOrthoPlanarOriented(/* function pointer */ int pPosition, /* function pointer */ int pMaterial, float SizeX, float SizeY, /* function pointer */ int p_stV1, /* function pointer */ int p_stV2, float fAngle, float (*) pV[4])
{
    float fs;
    float fc;
    float fADC;
    float Pos[4];
    float Vy[4];
    float Vx[4];
    unsigned int* pC;
    /* line map: */
    /*   line 1230 @ +0x000 */
    /*   line 1234 @ +0x000 */
    /*   line 1234 @ +0x000 */
    /*   line 1234 @ +0x000 */
    /*   line 1234 @ +0x000 */
    /*   line 1237 @ +0x000 */
    /*   line 1255 @ +0x000 */
    /*   line 1254 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1129–1211 */
/* addr: 0x002d2be0  size: 524 bytes */
int CSpriteController::WorldOrthoPlanarSpriteColor(/* function pointer */ int pPosition, /* function pointer */ int pMaterial, float SizeX, float SizeY, /* function pointer */ int p_stV1, /* function pointer */ int p_stV2, unsigned int ulColor, float (*) pV[4])
{
    float fADC;
    float Pos[4];
    float Vy[4];
    float Vx[4];
    unsigned int* pC;
    /* line map: */
    /*   line 1129 @ +0x000 */
    /*   line 1133 @ +0x000 */
    /*   line 1133 @ +0x000 */
    /*   line 1129 @ +0x000 */
    /*   line 1144 @ +0x000 */
    /*   line 1144 @ +0x000 */
    /*   line 1144 @ +0x000 */
    /*   line 1144 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1030–1109 */
/* addr: 0x002d2df0  size: 476 bytes */
int CSpriteController::WorldOrthoPlanarSprite(/* function pointer */ int pPosition, /* function pointer */ int pMaterial, float SizeX, float SizeY, /* function pointer */ int p_stV1, /* function pointer */ int p_stV2, float (*) pV[4])
{
    float fADC;
    float Pos[4];
    float Vy[4];
    float Vx[4];
    unsigned int* pC;
    /* line map: */
    /*   line 1030 @ +0x000 */
    /*   line 1035 @ +0x000 */
    /*   line 1035 @ +0x000 */
    /*   line 1030 @ +0x000 */
    /*   line 1043 @ +0x000 */
    /*   line 1040 @ +0x000 */
    /*   line 1043 @ +0x000 */
    /*   line 1043 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 940–1014 */
/* addr: 0x002d2fd0  size: 400 bytes */
void CSpriteController::SemiLookatSprite(/* function pointer */ int a3_fPosition, /* function pointer */ int a3_fPosition2, /* function pointer */ int pMaterial, float fSizeX, float (*) pV[4])
{
    float Position2[4];
    float Position1[4];
    int Alpha;
    unsigned int* pC;
    unsigned int ColorCenter;
    unsigned int ColorOut;
    /* line map: */
    /*   line 940 @ +0x000 */
    /*   line 961 @ +0x000 */
    /*   line 945 @ +0x000 */
    /*   line 960 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 966 @ +0x000 */
    /*   line 983 @ +0x000 */
    /*   line 983 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 871–918 */
/* addr: 0x002d3160  size: 444 bytes */
int CSpriteController::SimpleSpriteOriented_WithUVs(/* function pointer */ int pPosition, /* function pointer */ int pMaterial, float SizeX, float SizeY, float U1, float V1, float U2, float V2, float fAngle, float (*) pV[4])
{
    unsigned int VMax;
    unsigned int VMin;
    unsigned int UMax;
    unsigned int UMin;
    unsigned int* param0;
    /* line map: */
    /*   line 871 @ +0x000 */
    /*   line 871 @ +0x000 */
    /*   line 871 @ +0x000 */
    /*   line 871 @ +0x000 */
    /*   line 876 @ +0x000 */
    /*   line 887 @ +0x000 */
    /*   line 879 @ +0x000 */
    /*   line 879 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 734–801 */
/* addr: 0x002d3320  size: 1024 bytes */
int CSpriteController::SimpleSprite_UVAnim(/* function pointer */ int pMaterial, /* function pointer */ int pPosition, float SizeX, float SizeY, float AnimTime, float (*) pV[4])
{
    float fCurrentFrame;
    float fSpeed;
    unsigned int NbFrames;
    unsigned int* pC;
    unsigned int VMax;
    unsigned int VMin;
    unsigned int UMax;
    unsigned int UMin;
    float V1;
    float U1;
    unsigned int* param0;
    /* line map: */
    /*   line 734 @ +0x000 */
    /*   line 734 @ +0x000 */
    /*   line 734 @ +0x000 */
    /*   line 739 @ +0x000 */
    /*   line 752 @ +0x000 */
    /*   line 743 @ +0x000 */
    /*   line 753 @ +0x000 */
    /*   line 759 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 682–720 */
/* addr: 0x002d3720  size: 328 bytes */
int CSpriteController::SimpleSpriteColor(/* function pointer */ int pMaterial, /* function pointer */ int pPosition, float SizeX, float SizeY, unsigned int ulColor, float (*) pV[4])
{
    unsigned int* pC;
    /* line map: */
    /*   line 682 @ +0x000 */
    /*   line 687 @ +0x000 */
    /*   line 702 @ +0x000 */
    /*   line 701 @ +0x000 */
    /*   line 703 @ +0x000 */
    /*   line 720 @ +0x000 */
    /*   line 694 @ +0x000 */
    /*   line 700 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 631–667 */
/* addr: 0x002d3870  size: 356 bytes */
void CSpriteController::DrawFireSpriteGroup(/* function pointer */ int pMaterial, float (*) pData[4], unsigned int NbParticles, float (*) pV[4], float (*) pVect[4])
{
    unsigned int NbVertices;
    unsigned int* pT;
    unsigned int* pC;
    unsigned int i;
    /* line map: */
    /*   line 631 @ +0x000 */
    /*   line 632 @ +0x000 */
    /*   line 636 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 644 @ +0x000 */
    /*   line 646 @ +0x000 */
    /*   line 642 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 563–615 */
/* addr: 0x002d39e0  size: 320 bytes */
int CSpriteController::SimpleSprite(/* function pointer */ int pMaterial, /* function pointer */ int pPosition, float SizeX, float SizeY, float (*) pV[4])
{
    unsigned int* param0;
    /* line map: */
    /*   line 563 @ +0x000 */
    /*   line 563 @ +0x000 */
    /*   line 568 @ +0x000 */
    /*   line 572 @ +0x000 */
    /*   line 584 @ +0x000 */
    /*   line 584 @ +0x000 */
    /*   line 586 @ +0x000 */
    /*   line 591 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 519–546 */
/* addr: 0x002d3b20  size: 732 bytes */
void CSpriteController::Draw_2D(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* line map: */
    /*   line 519 @ +0x000 */
    /*   line 524 @ +0x000 */
    /*   line 532 @ +0x000 */
    /*   line 537 @ +0x000 */
    /*   line 537 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 543 @ +0x000 */
    /*   line 543 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 486–512 */
/* addr: 0x002d3e00  size: 732 bytes */
void CSpriteController::Draw_3D(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* line map: */
    /*   line 486 @ +0x000 */
    /*   line 491 @ +0x000 */
    /*   line 499 @ +0x000 */
    /*   line 503 @ +0x000 */
    /*   line 505 @ +0x000 */
    /*   line 509 @ +0x000 */
    /*   line 512 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 444–479 */
/* addr: 0x002d40e0  size: 992 bytes */
void CSpriteController::Draw_SemiLookat(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* line map: */
    /*   line 444 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 459 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 465 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 405–438 */
/* addr: 0x002d44c0  size: 992 bytes */
void CSpriteController::Draw_Simple_Oriented(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* line map: */
    /*   line 405 @ +0x000 */
    /*   line 410 @ +0x000 */
    /*   line 418 @ +0x000 */
    /*   line 422 @ +0x000 */
    /*   line 422 @ +0x000 */
    /*   line 422 @ +0x000 */
    /*   line 424 @ +0x000 */
    /*   line 424 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 364–398 */
/* addr: 0x002d48a0  size: 1008 bytes */
void CSpriteController::Draw_Simple(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* line map: */
    /*   line 364 @ +0x000 */
    /*   line 367 @ +0x000 */
    /*   line 374 @ +0x000 */
    /*   line 380 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 386 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 300–335 */
/* addr: 0x002d4c90  size: 720 bytes */
void CSpriteController::InitSpritesForViewport(/* function pointer */ int _p_stViewport, /* function pointer */ int p_stCam, /* function pointer */ int p_stWorldMatrix)
{
    unsigned char zTst;
    /* line map: */
    /*   line 300 @ +0x000 */
    /*   line 303 @ +0x000 */
    /*   line 306 @ +0x000 */
    /*   line 310 @ +0x000 */
    /*   line 312 @ +0x000 */
    /*   line 312 @ +0x000 */
    /*   line 312 @ +0x000 */
    /*   line 317 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 234–293 */
/* addr: 0x002d4f60  size: 344 bytes */
void CSpriteController::SendMaterial(void)
{
    float SavedGlobalAlpha;
    void* pSavedTexture;
    /* line map: */
    /*   line 234 @ +0x000 */
    /*   line 238 @ +0x000 */
    /*   line 241 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 240 @ +0x000 */
    /*   line 252 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 269 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 219–225 */
/* addr: 0x002d50c0  size: 384 bytes */
void CSpriteController::EndDraw(void)
{
    unsigned char zTst;
    /* line map: */
    /*   line 219 @ +0x000 */
    /*   line 219 @ +0x000 */
    /*   line 219 @ +0x000 */
    /*   line 220 @ +0x000 */
    /*   line 220 @ +0x000 */
    /*   line 220 @ +0x000 */
    /*   line 219 @ +0x000 */
    /*   line 221 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 202–209 */
/* addr: 0x002d5240  size: 144 bytes */
void CSpriteController::Draw(void)
{
    /* line map: */
    /*   line 202 @ +0x000 */
    /*   line 205 @ +0x000 */
    /*   line 207 @ +0x000 */
    /*   line 209 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 189–194 */
/* addr: 0x002d52d0  size: 40 bytes */
/*type_0x00*/ int CSpriteController::StopSpriteList(void)
{
    /* line map: */
    /*   line 194 @ +0x000 */
    /*   line 189 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 194 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 134–179 */
/* addr: 0x002d5300  size: 484 bytes */
int CSpriteController::StartSpriteList(/* function pointer */ int pMaterial, unsigned int SpriteType, unsigned int NbVertices, GLI_tdstTexture_* pAnimatedTexture)
{
    /* line map: */
    /*   line 134 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 145 @ +0x000 */
    /*   line 151 @ +0x000 */
    /*   line 151 @ +0x000 */
    /*   line 154 @ +0x000 */
    /*   line 156 @ +0x000 */
    /*   line 162 @ +0x000 */
    /* TODO: decompile from asm/... */
}
