/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct anon_0 anon_0;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tagListNode tagListNode;
typedef struct tagGLcontext tagGLcontext;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct anon_1 anon_1;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct tag_GLlight tag_GLlight;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct anon_4 anon_4;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct anon_5 anon_5;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tdstCouple_ tdstCouple_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct anon_6 anon_6;
typedef struct tagGLtexname tagGLtexname;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct anon_7 anon_7;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct anon_8 anon_8;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct anon_9 anon_9;
typedef struct anon_10 anon_10;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_11 anon_11;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct anon_12 anon_12;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct stMorphData stMorphData;
typedef struct tagGLlistnode tagGLlistnode;
typedef union unFunction unFunction;
typedef struct anon_13 anon_13;

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

struct SECT_tdstSector_ {
    /* aggregate */ int stListOfCharacters; /* +0x0 */
    /* aggregate */ int stListOfStaticLights; /* +0xc */
    /* aggregate */ int stListOfDNMLights; /* +0x14 */
    /* aggregate */ int stListOfSectorsInGraphicInteraction; /* +0x20 */
    /* aggregate */ int stListOfSectorsInCollisionInteraction; /* +0x28 */
    /* aggregate */ int stListOfSectorsInActivityInteraction; /* +0x30 */
    /* aggregate */ int stListOfSectorsInSoundInteraction; /* +0x38 */
    /* aggregate */ int stListOfSoundEvent; /* +0x40 */
    /* array */ int stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    int h_PreviousSectorInList; /* +0x70 */
    int h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    int d_stAnimEvent; /* +0x4 */
    int d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
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
    unsigned long 8 : 4; /* bit None, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tdstFrame3d_ {
    int p_stArrayOfElts3d; /* +0x0 */
    int p_stAngularSpeedMatrix; /* +0x4 */
    int p_stLinearSpeedVector; /* +0x8 */
    /* aggregate */ int stHierarchy; /* +0xc */
    /* aggregate */ int stDeformation; /* +0x14 */
    int p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

struct tagGLprimbuf {
    int pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    int pData; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    anon_0 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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
    /* array */ int ModelViewStack[16]; /* +0x6340 */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct anon_1 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    int pPrimBuf; /* +0x18 */
};

struct GLI_tdstLight_ {
    int b_lOnOff; /* +0x0 */
    int bThisLightIsZBuffered; /* +0x4 */
    int lTypeOfLight; /* +0x8 */
    float xFar; /* +0xc */
    float xNear; /* +0x10 */
    float xLittleAlpha; /* +0x14 */
    float xBigAlpha; /* +0x18 */
    float xLittleTangent; /* +0x1c */
    float xBigTangent; /* +0x20 */
    /* aggregate */ int stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    /* aggregate */ int stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    /* aggregate */ int xInter_Min_Pos; /* +0xc8 */
    /* aggregate */ int xExter_Min_Pos; /* +0xd4 */
    /* aggregate */ int xInter_Max_Pos; /* +0xe0 */
    /* aggregate */ int xExter_Max_Pos; /* +0xec */
    /* aggregate */ int xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
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

struct anon_2 {
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

struct anon_3 {
    unsigned long pad00; /* +0x0 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct anon_4 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tdstAChannel_ {
    int hSupObject; /* +0x0 */
    int hZoomSupObject; /* +0x4 */
    int p_stNextActiveChannel; /* +0x8 */
    int p_stFatherChannel; /* +0xc */
    /* array */ int ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
};

struct tdst3dData_ {
    int h_InitialState; /* +0x0 */
    int h_CurrentState; /* +0x4 */
    int h_FirstStateOfAction; /* +0x8 */
    int h_InitialObjectsTable; /* +0xc */
    int h_CurrentObjectsTable; /* +0x10 */
    int h_Family; /* +0x14 */
    /* aggregate */ int stGLIObjectMatrix; /* +0x20 */
    int p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    int d_ucEventActivation; /* +0x8c */
    int p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    int h_StateInLastFrame; /* +0x98 */
    int h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    int hArrayOfChannels; /* +0xa8 */
    unsigned int ulNumberOfChannels; /* +0xac */
    int hFirstActiveChannel; /* +0xb0 */
    tdstFrame3d_ stFrame3d; /* +0xb4 */
    int hMorphChannelList; /* +0xd8 */
    unsigned int ulStartTime; /* +0xdc */
    unsigned int ulTimeDelay; /* +0xe0 */
    unsigned int ulTimePreviousFrame; /* +0xe4 */
    float xLastFrame; /* +0xe8 */
    unsigned char bStateJustModified; /* +0xec */
    unsigned char bSkipCurrentFrame; /* +0xed */
    int p_stShadowVisualMaterial; /* +0xf0 */
    int p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    /* aggregate */ int stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    /* aggregate */ int stLightDirForDynamicShadow; /* +0x188 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    /* aggregate */ int stSHWDeformationVector; /* +0x198 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    /* aggregate */ int hForSubAnimInUseArray; /* +0x1b4 */
    int h_CurrentCineActor; /* +0x1c0 */
    /* aggregate */ int hSkinMaterial; /* +0x1c4 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
};

struct anon_5 {
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

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

struct anon_6 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
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

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
};

struct anon_7 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct anon_8 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct anon_9 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
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
    unsigned long 8 : 5; /* bit None, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct tagGsLoadImage {
    anon_0 gifTag; /* +0x0 */
    anon_2 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_5 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_7 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_4 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_11 {
    int pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_9 st_UVStaticPos; /* +0xc */
    anon_9 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct anon_12 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct tagGsSetTex {
    anon_0 gifTag; /* +0x0 */
    anon_3 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_10 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_13 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_8 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_12 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_6 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
};

struct anon_13 {
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

unsigned int GLI_g_StaticVertexArraySizePrevision;
unsigned int GLI_NbSDLFaces;
int GLI_g_CurrentPriority;
float GLI_g_NearValue;
float GLI_g_FarValue;
unsigned int GLI_g_ForceDestructAllSDLs;
int GLI_g_DesinitAlways;
unsigned int GLI_g_DMAObjectWasRejected;
unsigned int GLI_g_DMA_PreparingOpaque;
unsigned int GLI_g_DMA_DrawingAllNZ;
unsigned int GLI_g_DMA_SomethingWasDrawn;
int DoingMainSector;
unsigned int GLI_g_NumberInList;
unsigned int GLI_g_DrawingSPO;
float GLI_g_SPOMATRIX_Dummy[16];
float GLI_g_TEXTUREMATRIX_Dummy[16];
unsigned int GLI_g_LatestHadAChrome;
int G_pSO;
unsigned int hCurrentSDL;
int g_TextMatrixIsIdentity;
unsigned int GLI_g_bChromeEffectOnThisLayer;
unsigned int GLI_g_ThisLayerHasScrolling;
int GLI_g_HasLightMap;
int GLI_g_HasVertexTransparency;
unsigned int GLI_g_CurrentStage;
tagGLcontext 8;
int GLI_BIG_GLOBALS_p_stObj;
int g_p_stLightMapUForNextObjectToDraw;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
/* aggregate */ int HIE_g_a_hMatrixStack;
int HIE_g_lNbMatrixInStack;
int GLI_BIG_GLOBALS_xFogIsOn;
char GLI_cGlobalFogIsOn;
int gp_stActualWorld;
unsigned int GLI_g_FrameNumber;
int Global_CharacterModuleBeingDisplayed;
/* aggregate */ int g_p_hHandleOfGeometricShadowObject;
short g_p_hHandleOfElementForShadow[10];
int gp_stInactiveDynamicWorld;
int gp_stDynamicWorld;
int GLI_g_hVAContainer;
float g_fFogColor[4];
unsigned int GLI_g_CurrentSDLFogColor;
float GLI_g_OOStartMinusEnd;
float g_fFogStart;
float g_fFogEnd;
int GLI_g_ChristianSlaterMode;
float GLI_BIG_GLOBALS_xGlobalAlpha;
unsigned int NbVerticesToProcessWithoutStrips;
unsigned int NbVerticesToProcessWithStrips;
unsigned int TotalVertexArraySizeWithStrips;
unsigned int TotalVertexArraySizeWithoutStrips;
int GLI_gs_lBackGroundColor;
float GLI_g_fCurrentCameraxAngle;
float GLI_g_fCurrentCameraRatio;
unsigned int GLI_g_MustBlocIn30FPS;

/* addr: 0x002b6d90  size: 8 bytes */
void GLI_vDisplayLogo(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 2072–2411 */
/* addr: 0x002b6da0  size: 2008 bytes */
void GLI_vDMABufferDrawEIT(/* function pointer */ int pObj, /* function pointer */ int p_stEIT, ISI_tdstColor_* pRLIs, unsigned int Index, /* function pointer */ int hVisualMaterial, /* function pointer */ int pSDC_VA, float (*) pN[4], float (*) pC[4], float (*) pT[4], float (*) pTChrome[4], float (*) pTC2[4], float (*) pTC1[4], float (*) pV[4], float (*) pVA[4])
{
    unsigned int hRef;
    unsigned int hRef;
    unsigned int hRef;
    unsigned int hRef;
    unsigned int hRef;
    unsigned int KeepNormals;
    unsigned int bMultiTexture;
    unsigned int LayerTypes;
    unsigned int NbVerticesAlignedColors;
    unsigned int NbVerticesAlignedUVs;
    unsigned int NbVertices;
    unsigned int stage;
    unsigned int NbStages;
    /* line map: */
    /*   line 2100 @ +0x000 */
    /*   line 2072 @ +0x000 */
    /*   line 2073 @ +0x000 */
    /*   line 2076 @ +0x000 */
    /*   line 2079 @ +0x000 */
    /*   line 2100 @ +0x000 */
    /*   line 2103 @ +0x000 */
    /*   line 2105 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1765–2058 */
/* addr: 0x002b7580  size: 1616 bytes */
void GLI_vDMABufferDrawEITWithStrips(/* function pointer */ int pObj, unsigned int Index, float (*) DestpVA[4], float (*) param3[4], /* function pointer */ int hVisualMaterial, /* function pointer */ int pSDC_VA, float (*) pVs[4], float (*) pC[4], float (*) pT[4], float (*) pN[4])
{
    unsigned int hRef;
    unsigned int hRef;
    unsigned int hRef;
    unsigned int hRef;
    unsigned int hRef;
    unsigned int NbRealStripVtx;
    unsigned int NbVtxTotalForUVs;
    unsigned int NbVtxTotal;
    unsigned int* pTCh;
    unsigned int* pT2;
    unsigned int* pT1;
    unsigned int KeepNormals;
    unsigned int bMultiTexture;
    unsigned int LayerTypes;
    unsigned int stage;
    unsigned int NbStages;
    /* line map: */
    /*   line 1778 @ +0x000 */
    /*   line 1765 @ +0x000 */
    /*   line 1768 @ +0x000 */
    /*   line 1778 @ +0x000 */
    /*   line 1781 @ +0x000 */
    /*   line 1783 @ +0x000 */
    /*   line 1787 @ +0x000 */
    /*   line 1793 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1646–1677 */
/* addr: 0x002b7bd0  size: 204 bytes */
int GLI_vDMAObjectIsCompliant(/* function pointer */ int pObj, /* function pointer */ int p_stEIT)
{
    int j;
    /* line map: */
    /*   line 1646 @ +0x000 */
    /*   line 1651 @ +0x000 */
    /*   line 1654 @ +0x000 */
    /*   line 1661 @ +0x000 */
    /*   line 1677 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1384–1637 */
/* addr: 0x002b7ca0  size: 988 bytes */
void GLI_vDMAPreparePO(/* function pointer */ int pSO, /* function pointer */ int PO, GLI_tdstTexture_* p_stTexture, /* function pointer */ int p_stEIT, /* function pointer */ int pSDC_VA, /* function pointer */ int pObj, /* function pointer */ int hVisualSet)
{
    int j;
    short i;
    short xNbLodDefinitions;
    /* line map: */
    /*   line 1384 @ +0x000 */
    /*   line 1387 @ +0x000 */
    /*   line 1390 @ +0x000 */
    /*   line 1396 @ +0x000 */
    /*   line 1406 @ +0x000 */
    /*   line 1406 @ +0x000 */
    /*   line 1409 @ +0x000 */
    /*   line 1424 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1307–1369 */
/* addr: 0x002b8080  size: 628 bytes */
void GLI_g_CheckForFire(/* function pointer */ int pObj, GLI_tdstTexture_* p_stTexture, /* function pointer */ int p_stEIT)
{
    /* aggregate */ int Position;
    /* line map: */
    /*   line 1307 @ +0x000 */
    /*   line 1307 @ +0x000 */
    /*   line 1313 @ +0x000 */
    /*   line 1323 @ +0x000 */
    /*   line 1327 @ +0x000 */
    /*   line 1333 @ +0x000 */
    /*   line 1333 @ +0x000 */
    /*   line 1338 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1243–1288 */
/* addr: 0x002b8300  size: 320 bytes */
void GLI_vDMABufferParseTreeForThisSector(/* function pointer */ int pSO, ISI_tdstColor_* pRLIs, /* function pointer */ int PO, /* function pointer */ int hIPO, /* function pointer */ int hChild)
{
    void* hISI;
    /* line map: */
    /*   line 1243 @ +0x000 */
    /*   line 1249 @ +0x000 */
    /*   line 1254 @ +0x000 */
    /*   line 1259 @ +0x000 */
    /*   line 1267 @ +0x000 */
    /*   line 1270 @ +0x000 */
    /*   line 1273 @ +0x000 */
    /*   line 1277 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1106–1218 */
/* addr: 0x002b8440  size: 544 bytes */
void GLI_vDMABufferParseTree(/* function pointer */ int pSO, SECT_tdstSector_* hSectorObject, /* function pointer */ int hChild)
{
    unsigned int* phSdl;
    /* line map: */
    /*   line 1106 @ +0x000 */
    /*   line 1112 @ +0x000 */
    /*   line 1116 @ +0x000 */
    /*   line 1123 @ +0x000 */
    /*   line 1135 @ +0x000 */
    /*   line 1140 @ +0x000 */
    /*   line 1148 @ +0x000 */
    /*   line 1148 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1052–1090 */
/* addr: 0x002b8660  size: 320 bytes */
void GLI_vUpdateFogFromSector(SECT_tdstSector_* hSectorObject, GLI_tdstLight_* hStaticLight, /* function pointer */ int hStaticLightsElement)
{
    GEO_tdstColor_ stColor;
    short xI;
    /* line map: */
    /*   line 1052 @ +0x000 */
    /*   line 1055 @ +0x000 */
    /*   line 1066 @ +0x000 */
    /*   line 1069 @ +0x000 */
    /*   line 1073 @ +0x000 */
    /*   line 1083 @ +0x000 */
    /*   line 1086 @ +0x000 */
    /*   line 1090 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 994–994 */
/* addr: 0x002b87a0  size: 32 bytes */
/*type_0x00*/ int GLI_fn_vApplyChangesToObjectVerticesAndUvs(/* function pointer */ int _p_stObj)
{
    /* line map: */
    /*   line 994 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 988–988 */
/* addr: 0x002b87c0  size: 32 bytes */
void GLI_vApplyChangesToObjectVertices(/* function pointer */ int p_stObject)
{
    /* line map: */
    /*   line 988 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 953–981 */
/* addr: 0x002b87e0  size: 32 bytes */
void GLI_vSetObjectDeformed(/* function pointer */ int pObj)
{
    /* line map: */
    /*   line 953 @ +0x000 */
    /*   line 981 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b8800  size: 8 bytes */
void GLI_xSetUpdateGeometricForMaterialCoefChange(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b8810  size: 8 bytes */
void GLI_vResetVertexColorsForIPO(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 817–859 */
/* addr: 0x002b8820  size: 232 bytes */
void GLI_vCleanAllSDLs(/* function pointer */ int pObj, /* function pointer */ int p_stEIT)
{
    unsigned int i;
    /* line map: */
    /*   line 817 @ +0x000 */
    /*   line 820 @ +0x000 */
    /*   line 826 @ +0x000 */
    /*   line 828 @ +0x000 */
    /*   line 833 @ +0x000 */
    /*   line 836 @ +0x000 */
    /*   line 841 @ +0x000 */
    /*   line 843 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 762–802 */
/* addr: 0x002b8910  size: 184 bytes */
void GLI_vCleanAllSpecificData(void)
{
    /* line map: */
    /*   line 762 @ +0x000 */
    /*   line 762 @ +0x000 */
    /*   line 770 @ +0x000 */
    /*   line 770 @ +0x000 */
    /*   line 771 @ +0x000 */
    /*   line 771 @ +0x000 */
    /*   line 772 @ +0x000 */
    /*   line 768 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b89d0  size: 8 bytes */
void GLI_fnv_CleanAlwaysSO(/* function pointer */ int h_SuperObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 628–720 */
/* addr: 0x002b89e0  size: 556 bytes */
void GLI_vCleanDispTemporaryDataSPO(/* function pointer */ int _hSprObj, /* function pointer */ int hVisualSet, SECT_tdstSector_* hSectorObject, /* function pointer */ int PO, /* function pointer */ int hIPO, /* function pointer */ int p_stObjectTable, /* function pointer */ int p_ObjectsTableElement, /* function pointer */ int hChild)
{
    int i;
    int lType;
    short i;
    /* line map: */
    /*   line 631 @ +0x000 */
    /*   line 628 @ +0x000 */
    /*   line 631 @ +0x000 */
    /*   line 635 @ +0x000 */
    /*   line 639 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 647 @ +0x000 */
    /*   line 651 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 584–614 */
/* addr: 0x002b8c10  size: 236 bytes */
void GLI_PS2GL_CleanSpecifForPO(/* function pointer */ int PO, /* function pointer */ int pObj, /* function pointer */ int hVisualSet)
{
    short i;
    short xNbLodDefinitions;
    /* line map: */
    /*   line 584 @ +0x000 */
    /*   line 584 @ +0x000 */
    /*   line 584 @ +0x000 */
    /*   line 586 @ +0x000 */
    /*   line 589 @ +0x000 */
    /*   line 593 @ +0x000 */
    /*   line 597 @ +0x000 */
    /*   line 603 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 542–563 */
/* addr: 0x002b8d00  size: 180 bytes */
int GLI_fn_vInitGeometricObjectFromArray(/* function pointer */ int pObj, /* function pointer */ int p_stEIT)
{
    unsigned int j;
    /* line map: */
    /*   line 542 @ +0x000 */
    /*   line 549 @ +0x000 */
    /*   line 552 @ +0x000 */
    /*   line 555 @ +0x000 */
    /*   line 555 @ +0x000 */
    /*   line 563 @ +0x000 */
    /*   line 563 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b8dc0  size: 8 bytes */
void GLI_DRV_vFreeVertexBuffersForElementsInObject(/* function pointer */ int pObj)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 489–528 */
/* addr: 0x002b8dd0  size: 224 bytes */
void GLI_vCleanGeoObj(/* function pointer */ int pObj, /* function pointer */ int p_stEIT)
{
    unsigned int j;
    /* line map: */
    /*   line 489 @ +0x000 */
    /*   line 493 @ +0x000 */
    /*   line 497 @ +0x000 */
    /*   line 510 @ +0x000 */
    /*   line 513 @ +0x000 */
    /*   line 516 @ +0x000 */
    /*   line 516 @ +0x000 */
    /*   line 528 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 373–463 */
/* addr: 0x002b8eb0  size: 508 bytes */
void GLI_PS2GL_PrepareSpecificDataForSPO(/* function pointer */ int _hSO, SECT_tdstSector_* hSectorObject, /* function pointer */ int hVisualSet, /* function pointer */ int p_stObjectTable, /* function pointer */ int p_ObjectsTableElement, /* function pointer */ int PO, /* function pointer */ int hIPO, /* function pointer */ int hChild)
{
    int i;
    short i;
    /* line map: */
    /*   line 373 @ +0x000 */
    /*   line 377 @ +0x000 */
    /*   line 382 @ +0x000 */
    /*   line 387 @ +0x000 */
    /*   line 398 @ +0x000 */
    /*   line 401 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 410 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 292–334 */
/* addr: 0x002b90b0  size: 308 bytes */
void GLI_vInspectObjectForShadow(/* function pointer */ int p_stObj)
{
    int iOffset;
    int iAreaId;
    unsigned char bBTLevel;
    unsigned int HasShadowLOD;
    short xElementCounter;
    /* line map: */
    /*   line 292 @ +0x000 */
    /*   line 294 @ +0x000 */
    /*   line 294 @ +0x000 */
    /*   line 301 @ +0x000 */
    /*   line 305 @ +0x000 */
    /*   line 303 @ +0x000 */
    /*   line 308 @ +0x000 */
    /*   line 311 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 238–277 */
/* addr: 0x002b91f0  size: 236 bytes */
void GLI_PS2GL_BuildSpecifForPO(/* function pointer */ int PO, /* function pointer */ int p_stEIT, /* function pointer */ int pObj, /* function pointer */ int hVisualSet)
{
    int j;
    short i;
    short xNbLodDefinitions;
    /* line map: */
    /*   line 238 @ +0x000 */
    /*   line 241 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 252 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 256 @ +0x000 */
    /*   line 260 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 191–223 */
/* addr: 0x002b92e0  size: 200 bytes */
void BuildAllSDLs(void)
{
    /* line map: */
    /*   line 191 @ +0x000 */
    /*   line 191 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 197 @ +0x000 */
    /*   line 199 @ +0x000 */
    /*   line 203 @ +0x000 */
    /*   line 213 @ +0x000 */
    /*   line 223 @ +0x000 */
    /* TODO: decompile from asm/... */
}
