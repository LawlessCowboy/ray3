/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sceGsTexflush sceGsTexflush;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct sceGsBitbltbuf sceGsBitbltbuf;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagGScontext tagGScontext;
typedef struct sceGifTag sceGifTag;
typedef struct tdstCouple_ tdstCouple_;
typedef struct sceGsSignal sceGsSignal;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct C_SdlRef C_SdlRef;
typedef struct sceGsFog sceGsFog;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct tdstAChannel_ tdstAChannel_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct sceGsTrxdir sceGsTrxdir;
typedef struct sceGsXyz sceGsXyz;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tdst3dData_ tdst3dData_;
typedef struct sceGsSt sceGsSt;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct sceGsMiptbp2 sceGsMiptbp2;
typedef struct sceGsFogcol sceGsFogcol;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct sceGsTrxpos sceGsTrxpos;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct stParamBegin stParamBegin;
typedef struct sceGsXyzf sceGsXyzf;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct sceGsTest sceGsTest;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct sceGsTex2 sceGsTex2;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct tagListNode tagListNode;
typedef struct stMorphData stMorphData;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct sceGsRgbaq sceGsRgbaq;
typedef struct sceGsClamp sceGsClamp;
typedef struct tag_GLlight tag_GLlight;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct sceGsFrame sceGsFrame;
typedef struct sceGsZbuf sceGsZbuf;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct sceGsPabe sceGsPabe;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct sceGsTrxreg sceGsTrxreg;
typedef struct sceGsTexa sceGsTexa;
typedef union unFunction unFunction;
typedef struct sceGsScanmsk sceGsScanmsk;
typedef struct sceGsTex0 sceGsTex0;
typedef struct sceGsPrim sceGsPrim;
typedef struct sceGsColclamp sceGsColclamp;
typedef struct sceGsDthe sceGsDthe;
typedef struct sceGsScissor sceGsScissor;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct sceGsUv sceGsUv;
typedef struct sceGsAlpha sceGsAlpha;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct sceGsTexclut sceGsTexclut;
typedef struct sceGsLabel sceGsLabel;
typedef struct tagGLtexname tagGLtexname;
typedef struct sceGsFba sceGsFba;
typedef struct sceGsDimx sceGsDimx;
typedef struct tagGLcontext tagGLcontext;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct sceGsXyoffset sceGsXyoffset;
typedef struct sceGsMiptbp1 sceGsMiptbp1;
typedef struct sceGsPrmode sceGsPrmode;
typedef struct sceGsTex1 sceGsTex1;

struct sceGsTexflush {
    unsigned long pad00; /* +0x0 */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct sceGsSignal {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
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

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
};

struct sceGsFog {
    unsigned long param0 : 56; /* bit None, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
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

struct sceGsTrxdir {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct sceGsXyz {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
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

struct sceGsSt {
    float S; /* +0x0 */
    float T; /* +0x4 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tagGLlistcalls {
    int pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
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

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    /* array */ int aSingleIndex[64]; /* +0x4 */
    int pFirstNode; /* +0x204 */
    int pLastNode; /* +0x208 */
};

struct stParamBegin {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    int pPrimBuf; /* +0x18 */
};

struct sceGsXyzf {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
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

struct tagListNode {
    int pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    /* aggregate */ int apData; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct sceGsPabe {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
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

struct sceGsColclamp {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsDthe {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
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

int CHEAP_IS_NOT_VALID;
unsigned int G_IsLept15;
/* aggregate */ int GLI_g_CheapSDLs;
int pCheapSDL;
unsigned int GLI_g_CurrentNbCheapSDLs;
unsigned int GLI_g_CurrentNbCheapSDLsForViewport;
int CHEAP_CurrentSO;
int CHEAP_LastpSDC;
int CHEAP_CurrentMaterial;
float CHEAP_AuraVertexArrays[500][4];
unsigned int g_lNbListOfCheapCharacterList;
/* array */ int g_aListOfCheapCharacterList[10];
unsigned int SCT_g_DrawingMirrored;
float YRESf;
float XRESf;
tagGLcontext 8;
tagGScontext 8;
int GLI_g_AnimatedTextureToUse;
float GLI_BIG_GLOBALS_xGlobalAlpha;
float GLI_g_NegVect[4];
int g_p_stCurrentViewport;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
/* array */ int PS2_MatStack[51];
unsigned int PS2_MatStackIndex;
anon_4 __vt__5C_Sdl;
anon_1 __vt__14C_CharacterSdl;
float g_LeftHandedIdentityMatrix[16];
unsigned int GLI_g_NumberInList;
unsigned int hCurrentSDL;
int PS2glLiberator;
int PS2glAllocator64;
int Global_pCurrentActor;
int GLI_g_CurrentSkinMaterial;
int GLI_g_CurrentSkinIndex;
int GLI_BIG_GLOBALS_p_stObj;
int Global_CharacterModuleBeingDisplayed;
anon_0 __vt__28C_SdlRef_LocalMatrixForCheap;
anon_5 __vt__8C_SdlRef;
float GLI_g_DummyNonIDMatrix[4][4];
unsigned int GLI_g_LatestHadAChrome;
int g_TextMatrixIsIdentity;
float GLI_g_TEXTUREMATRIX_Dummy[16];
float GLI_g_SPOMATRIX_Dummy[16];
unsigned int GLI_g_ThisLayerHasScrolling;
anon_3 __vt__22C_SdlRef_TextureMatrix;
unsigned int GLI_g_bChromeEffectOnThisLayer;
float light_specular0[4];
char GLI_b_CreatingActorSDL;
int GLI_g_LastCyclingMode;
unsigned int GLI_g_CurrentStage;
float GlobalAlphaVal;
anon_2 __vt__24C_SdlRef_TextureIdMatrix;
int HIE_gs_lCurrentFrame;

/* addr: 0x002d8b60  size: 12 bytes */
void C_InstanceList::__nw(unsigned int Size)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 1297–1331 */
/* addr: 0x002d8b70  size: 372 bytes */
void CHEAP_DisplayAllAuras(float (*) pV[4], /* function pointer */ int param1, /* function pointer */ int pl)
{
    unsigned int StartNum;
    unsigned int Num;
    unsigned int k;
    unsigned int i;
    /* line map: */
    /*   line 1297 @ +0x000 */
    /*   line 1297 @ +0x000 */
    /*   line 1299 @ +0x000 */
    /*   line 1303 @ +0x000 */
    /*   line 1306 @ +0x000 */
    /*   line 1310 @ +0x000 */
    /*   line 1313 @ +0x000 */
    /*   line 1318 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 1195–1283 */
/* addr: 0x002d8cf0  size: 832 bytes */
void CHEAP_DrawAuras__FP17GLI_tdstMaterial_PA4_fUiPff(/* function pointer */ int pMat, float (*) pParticleList[4], unsigned int NbSprites, float* pSizes, float SizeRange)
{
    unsigned char zTst;
    int RemainingNbSprites;
    unsigned int i;
    float ModelView[4][4];
    float sy;
    float sx;
    /* line map: */
    /*   line 1195 @ +0x000 */
    /*   line 1195 @ +0x000 */
    /*   line 1195 @ +0x000 */
    /*   line 1195 @ +0x000 */
    /*   line 1198 @ +0x000 */
    /*   line 1205 @ +0x000 */
    /*   line 1210 @ +0x000 */
    /*   line 1213 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 764–1178 */
/* addr: 0x002d9030  size: 2516 bytes */
void HIE_fn_SendListOfFakeInstanceToViewport(/* function pointer */ int CharacterList, /* function pointer */ int pSourceMatrix, /* function pointer */ int param2, /* function pointer */ int pStartMatrix, /* function pointer */ int pCurrentMatrix, /* function pointer */ int g_hFakeInstance, /* function pointer */ int hChild)
{
    /* aggregate */ int stVecK;
    /* aggregate */ int stVecJ;
    /* aggregate */ int stVecI;
    void* pTempData;
    unsigned int NbMatrices;
    float MyVect[4];
    unsigned int j;
    unsigned int i;
    /* line map: */
    /*   line 764 @ +0x000 */
    /*   line 768 @ +0x000 */
    /*   line 776 @ +0x000 */
    /*   line 776 @ +0x000 */
    /*   line 781 @ +0x000 */
    /*   line 781 @ +0x000 */
    /*   line 781 @ +0x000 */
    /*   line 785 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 716–748 */
/* addr: 0x002d9a10  size: 208 bytes */
void CHEAP_SearchMaterial__FP20HIE_tdstSuperObject_PP17MTH4D_tdstMatrix_Pc(/* function pointer */ int _hSprObj, /* function pointer */ int ppCurrentMatrix, char* p_cActivity, /* function pointer */ int pSDC, /* function pointer */ int p_stVisualSet, /* function pointer */ int p_stObj, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 716 @ +0x000 */
    /*   line 723 @ +0x000 */
    /*   line 727 @ +0x000 */
    /*   line 731 @ +0x000 */
    /*   line 734 @ +0x000 */
    /*   line 743 @ +0x000 */
    /*   line 746 @ +0x000 */
    /*   line 748 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 684–702 */
/* addr: 0x002d9ae0  size: 204 bytes */
void HIE_fn_CleanAllListOfFakeInstanceToViewport(/* function pointer */ int pSdl, /* function pointer */ int pCheapList)
{
    unsigned int i;
    /* line map: */
    /*   line 684 @ +0x000 */
    /*   line 689 @ +0x000 */
    /*   line 693 @ +0x000 */
    /*   line 696 @ +0x000 */
    /*   line 698 @ +0x000 */
    /*   line 698 @ +0x000 */
    /*   line 702 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 654–678 */
/* addr: 0x002d9bb0  size: 324 bytes */
void CHEAP_UpdateDeformation__FP20HIE_tdstSuperObject_(/* function pointer */ int _hSprObj, float (*) pVOrg[4], /* function pointer */ int p_stEIT, float (*) pNormals[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], /* function pointer */ int pSDC, /* function pointer */ int p_stVisualSet, /* function pointer */ int p_stObj, /* function pointer */ int hChild)
{
    unsigned int iElement;
    /* line map: */
    /*   line 654 @ +0x000 */
    /*   line 654 @ +0x000 */
    /*   line 657 @ +0x000 */
    /*   line 661 @ +0x000 */
    /*   line 665 @ +0x000 */
    /*   line 665 @ +0x000 */
    /*   line 667 @ +0x000 */
    /*   line 667 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 633–641 */
/* addr: 0x002d9d00  size: 104 bytes */
void CHEAP_UpdateAllRefs(void)
{
    unsigned int i;
    /* line map: */
    /*   line 633 @ +0x000 */
    /*   line 636 @ +0x000 */
    /*   line 641 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 605–627 */
/* addr: 0x002d9d70  size: 136 bytes */
void CHEAP_DisplayAllSDLs(int bTransparent)
{
    unsigned int i;
    /* line map: */
    /*   line 605 @ +0x000 */
    /*   line 609 @ +0x000 */
    /*   line 616 @ +0x000 */
    /*   line 617 @ +0x000 */
    /*   line 627 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 557–577 */
/* addr: 0x002d9e00  size: 428 bytes */
void CHEAP_SendModulesToViewportRT__FP20HIE_tdstSuperObject_PP17MTH4D_tdstMatrix_(/* function pointer */ int _hSprObj, /* function pointer */ int ppCurrentMatrix, /* function pointer */ int p_stVisualSet, /* function pointer */ int p_stObj, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 557 @ +0x000 */
    /*   line 561 @ +0x000 */
    /*   line 564 @ +0x000 */
    /*   line 571 @ +0x000 */
    /*   line 574 @ +0x000 */
    /*   line 577 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 469–546 */
/* addr: 0x002d9fb0  size: 596 bytes */
void CHEAP_SendModulesToViewport__FP20HIE_tdstSuperObject_PP17MTH4D_tdstMatrix_Pc(/* function pointer */ int _hSprObj, /* function pointer */ int ppCurrentMatrix, char* p_cActivity, /* function pointer */ int pSDC, /* function pointer */ int p_stVisualSet, /* function pointer */ int p_stObj, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 469 @ +0x000 */
    /*   line 480 @ +0x000 */
    /*   line 483 @ +0x000 */
    /*   line 487 @ +0x000 */
    /*   line 490 @ +0x000 */
    /*   line 495 @ +0x000 */
    /*   line 501 @ +0x000 */
    /*   line 503 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 354–456 */
/* addr: 0x002da210  size: 1180 bytes */
void CHEAP_DrawActorInstance__FP24GEO_tdstGeometricObject_PP17MTH4D_tdstMatrix_Pc(/* function pointer */ int p_stObj, /* function pointer */ int ppCurrentMatrix, char* p_cActivity, /* function pointer */ int pSDC, float (*) pUsedUV[4], float (*) pNormals[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], float (*) pVOrg[4])
{
    unsigned int bUsingStrips;
    unsigned int iElement;
    unsigned int NbVertices;
    unsigned int NbStages;
    unsigned int stage;
    /* line map: */
    /*   line 354 @ +0x000 */
    /*   line 354 @ +0x000 */
    /*   line 360 @ +0x000 */
    /*   line 358 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 367 @ +0x000 */
    /*   line 373 @ +0x000 */
    /*   line 373 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 231–334 */
/* addr: 0x002da6b0  size: 656 bytes */
void CHEAP_DrawLastSDC__Fv(/* function pointer */ int pSDC, float (*) pUsedUV[4], float (*) pNormals[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], float (*) pVOrg[4])
{
    unsigned int NbVertices;
    /* line map: */
    /*   line 240 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 252 @ +0x000 */
    /*   line 265 @ +0x000 */
    /*   line 266 @ +0x000 */
    /*   line 265 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 207–213 */
/* addr: 0x002da940  size: 320 bytes */
void HIE_fn_vFastPS2ForcedRefreshHierarchy__FP20HIE_tdstSuperObject_(/* function pointer */ int _hSprObj, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 207 @ +0x000 */
    /*   line 210 @ +0x000 */
    /*   line 213 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 160–199 */
/* addr: 0x002daa80  size: 180 bytes */
void HIE_fn_vFastPS2ForcedPushMatrixRT__FP20HIE_tdstSuperObject_(/* function pointer */ int _hSprObj)
{
    /* line map: */
    /*   line 160 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 171 @ +0x000 */
    /*   line 174 @ +0x000 */
    /*   line 177 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 79–153 */
/* addr: 0x002dab40  size: 364 bytes */
void HIE_fn_vFastPS2ForcedPushMatrix__FP20HIE_tdstSuperObject_(/* function pointer */ int _hSprObj)
{
    /* line map: */
    /*   line 79 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 86 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 90 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 98 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCheap.cpp lines 54–64 */
/* addr: 0x002dacb0  size: 88 bytes */
void CHEAP_StoreMatrix__FPP17MTH4D_tdstMatrix_(/* function pointer */ int pCurrentMatrix)
{
    /* line map: */
    /*   line 54 @ +0x000 */
    /*   line 56 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 64 @ +0x000 */
    /* TODO: decompile from asm/... */
}
