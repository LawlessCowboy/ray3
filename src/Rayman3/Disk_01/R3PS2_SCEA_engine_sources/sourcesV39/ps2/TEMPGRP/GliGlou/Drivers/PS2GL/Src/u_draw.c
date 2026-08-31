/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct anon_0 anon_0;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_4 anon_4;
typedef struct tdstEvent_ tdstEvent_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tag_GLlight tag_GLlight;
typedef struct stMorphData stMorphData;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct anon_5 anon_5;
typedef struct tagGScontext tagGScontext;
typedef struct anon_6 anon_6;
typedef struct anon_7 anon_7;
typedef struct Triangle_Disp_ Triangle_Disp_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct anon_8 anon_8;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct anon_9 anon_9;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct GLI_g_PS2GL_ShadowVolume_ GLI_g_PS2GL_ShadowVolume_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct anon_10 anon_10;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct anon_11 anon_11;
typedef struct tagGLtexname tagGLtexname;
typedef struct anon_12 anon_12;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_13 anon_13;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct anon_14 anon_14;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct anon_15 anon_15;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_16 anon_16;
typedef struct anon_17 anon_17;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct anon_18 anon_18;
typedef struct anon_19 anon_19;
typedef struct anon_20 anon_20;
typedef struct anon_21 anon_21;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct anon_22 anon_22;
typedef union unFunction unFunction;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct anon_23 anon_23;
typedef struct anon_24 anon_24;
typedef struct tagListNode tagListNode;
typedef struct anon_25 anon_25;
typedef struct anon_26 anon_26;
typedef union anon_27 anon_27;
typedef struct _stTimerCount _stTimerCount;
typedef struct anon_28 anon_28;
typedef struct anon_29 anon_29;
typedef struct anon_30 anon_30;
typedef struct anon_31 anon_31;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct anon_32 anon_32;
typedef struct anon_33 anon_33;
typedef struct anon_34 anon_34;
typedef struct anon_35 anon_35;
typedef struct anon_36 anon_36;
typedef struct anon_37 anon_37;
typedef struct anon_38 anon_38;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct anon_39 anon_39;
typedef struct anon_40 anon_40;
typedef struct tagGLcontext tagGLcontext;
typedef struct anon_41 anon_41;
typedef struct anon_42 anon_42;

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct anon_0 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct anon_1 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    int pPrimBuf; /* +0x18 */
};

struct anon_2 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_3 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_4 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct tagGLprimbuf {
    int pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    int pData; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    anon_17 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct anon_5 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct tagGScontext {
    anon_14 PRIM; /* +0x0 */
    anon_22 RGBAQ; /* +0x8 */
    anon_40 ST; /* +0x10 */
    anon_3 UV; /* +0x18 */
    anon_10 XYZF2; /* +0x20 */
    anon_9 XYZ2; /* +0x28 */
    anon_7 TEX0_1; /* +0x30 */
    anon_7 TEX0_2; /* +0x38 */
    anon_39 CLAMP_1; /* +0x40 */
    anon_39 CLAMP_2; /* +0x48 */
    anon_29 FOG; /* +0x50 */
    anon_10 XYZF3; /* +0x58 */
    anon_9 XYZ3; /* +0x60 */
    anon_13 TEX1_1; /* +0x68 */
    anon_13 TEX1_2; /* +0x70 */
    anon_15 TEX2_1; /* +0x78 */
    anon_15 TEX2_2; /* +0x80 */
    anon_5 XYOFFSET_1; /* +0x88 */
    anon_5 XYOFFSET_2; /* +0x90 */
    anon_19 PRMODECONT; /* +0x98 */
    anon_16 PRMODE; /* +0xa0 */
    anon_24 TEXCLUT; /* +0xa8 */
    anon_26 SCANMSK; /* +0xb0 */
    anon_2 MIPTBP1_1; /* +0xb8 */
    anon_2 MIPTBP1_2; /* +0xc0 */
    anon_8 MIPTBP2_1; /* +0xc8 */
    anon_8 MIPTBP2_2; /* +0xd0 */
    anon_18 TEXA; /* +0xd8 */
    anon_34 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_32 SCISSOR_1; /* +0xf0 */
    anon_32 SCISSOR_2; /* +0xf8 */
    anon_20 ALPHA_1; /* +0x100 */
    anon_20 ALPHA_2; /* +0x108 */
    anon_6 DIMX; /* +0x110 */
    anon_21 DTHE; /* +0x118 */
    anon_4 COLCLAMP; /* +0x120 */
    anon_42 TEST_1; /* +0x128 */
    anon_42 TEST_2; /* +0x130 */
    anon_12 PABE; /* +0x138 */
    anon_23 FBA_1; /* +0x140 */
    anon_23 FBA_2; /* +0x148 */
    anon_37 FRAME_1; /* +0x150 */
    anon_37 FRAME_2; /* +0x158 */
    anon_11 ZBUF_1; /* +0x160 */
    anon_11 ZBUF_2; /* +0x168 */
    anon_28 BITBLTBUF; /* +0x170 */
    anon_36 TRXPOS; /* +0x178 */
    anon_41 TRXREG; /* +0x180 */
    anon_33 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_38 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_0 LABEL; /* +0x1a8 */
    anon_25 ModFlgs; /* +0x1b0 */
    anon_25 GlobalModFlgs; /* +0x1b8 */
    anon_27 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    int pqCurrent; /* +0x2224 */
    int pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct anon_6 {
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

struct anon_7 {
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

struct Triangle_Disp_ {
    /* array */ int Position[3]; /* +0x0 */
    float RGBAColor[4]; /* +0x30 */
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

struct anon_8 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct anon_9 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct GLI_g_PS2GL_ShadowVolume_ {
    float pWorldMatrix[16]; /* +0x0 */
    unsigned int FirstVertex; /* +0x40 */
    unsigned int LastVertex; /* +0x44 */
    unsigned int Pads[2]; /* +0x48 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct anon_10 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct tagGLlistcalls {
    int pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
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

struct anon_11 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
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

struct anon_12 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct anon_14 {
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct anon_15 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long 8 : 5; /* bit None, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct tagGsLoadImage {
    anon_17 gifTag; /* +0x0 */
    anon_28 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_36 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_41 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_33 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_16 {
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

struct anon_17 {
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

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct tagGsSetTex {
    anon_17 gifTag; /* +0x0 */
    anon_31 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_7 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_13 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_2 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_8 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_39 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct anon_18 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_19 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_20 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_21 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct anon_22 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct anon_23 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_24 {
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

struct anon_25 {
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

struct anon_26 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct anon_28 {
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

struct anon_29 {
    unsigned long param0 : 56; /* bit None, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct anon_30 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_31 {
    unsigned long pad00; /* +0x0 */
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

struct tdstEngineTimerStructure_ {
    unsigned int ulTrameNumber; /* +0x0 */
    short sTimerHandle; /* +0x4 */
    unsigned int ulCurrentTimerCount; /* +0x8 */
    unsigned int ulDeltaTimerCount; /* +0xc */
    unsigned int a_ulCounter[16]; /* +0x10 */
    unsigned int ulUsefulDeltaTime; /* +0x50 */
    unsigned int ulPauseTime; /* +0x54 */
    float xFrameLength; /* +0x58 */
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
};

struct anon_32 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_33 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_34 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_35 {
    int pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_30 st_UVStaticPos; /* +0xc */
    anon_30 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct anon_36 {
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

struct anon_37 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_38 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    /* array */ int aSingleIndex[64]; /* +0x4 */
    int pFirstNode; /* +0x204 */
    int pLastNode; /* +0x208 */
};

struct anon_39 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_40 {
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

struct anon_41 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_42 {
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

unsigned int GLI_g_ProjMatrixHasChanged;
int GLI_g_HasLightMap;
unsigned int GLI_g_CurrentStage;
int GLI_g_LastSuperObj;
int GLI_g_bWideScreenMode;
int g_LevelJeff;
int g_bDrawingBlackFrame;
int g_bUseAGOLights;
float GlobalAlphaVal;
unsigned int GLI_g_UseExternalVertexArray;
int GLI_g_DrawingSpriteGenerator;
int g_p_stRawRLIsForThisObject;
unsigned int GLI_g_ProjectionMode;
unsigned int GLI_g_NumberOfShadowVolumes;
unsigned int GLI_g_GlobalShadowNextPointSavedMax;
unsigned int MustStopToSeeStencil;
float g_LeftHandedIdentityMatrix[16];
unsigned int NbTrianglesToDisplay;
unsigned char ValMinus;
unsigned char ValPlus;
int bDrawShadow;
unsigned int GLI_g_TextureMatrixIsIdentity;
unsigned int GLI_g_NbSpriteGensMax;
float GLI_g_SpriteGenNorme;
float GLI_g_fCurrentCameraRatio;
float GLI_g_fCurrentCameraxAngle;
unsigned int GLI_g_ListOfDMADL_Current;
int BDisplayRay;
int g_b_IsRaining;
unsigned int GLI_g_NbSimpleShadows;
unsigned int GLI_g_SimpleShadowBegin;
int GLI_g_SimpleShadowMaterial;
float GLI_g_SimpleShadowsUVs[384][4];
float GLI_g_SimpleShadowsRLIs[384][4];
float GLI_g_SimpleShadowsPos[384][4];
unsigned int GLI_g_ListOfDMADL[100];
Triangle_Disp_ TrianglesToDisplay[1000];
unsigned int GLI_g_GlobalShadowNextPointSaved;
GLI_g_PS2GL_ShadowVolume_ GLI_g_TheShadowVolumes[2];
unsigned int GLI_g_xSaveDrawMsk;
/* aggregate */ int GLI_g_stYVect;
/* aggregate */ int GLI_g_stXVect;
int g_p_stCurrentViewport;
tagGScontext 8;
tagGLcontext 8;
unsigned int SCT_g_DrawingMirrored;
float GLI_g_NegVect[4];
int GLI_g_HasVertexTransparency;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int GLI_BIG_GLOBALS_p_stObj;
unsigned int GLI_g_NbTransparentElements;
unsigned int NbElementComputed;
int YRES;
int XRES;
float YRESf;
float XRESf;
float GLI_g_NearValue;
float GLI_g_FarValue;
unsigned int g_a2_ulSize[2];
int g_bCinemascopeOn;
int GLI_BIG_GLOBALS_hCurrentMaterial;
float light_ambient0[4];
char GLI_g_StereoVisionMode;
int GLI_g_ChristianSlaterMode;
int GLI_g_hVAContainer;
int GLI_g_CurrentSpriteGenFrame;
int GLI_g_CurrentSpriteGenIndex;
int Global_pCurrentActor;
int GLI_g_CurrentShadowVertexArrayBack;
int GLI_g_CurrentShadowVertexArrayFront;
int GLI_g_GlobalShadowColorArray;
unsigned int GLI_g_GlobalShadowNextPointBack;
unsigned int GLI_g_GlobalShadowNextPointFront;
float GLI_g_SDL_pNonInterpolatedCameraMatrix[4][4];
_GL_BUFFERINFO 8;
int PS2glAllocator64;
int PS2glLiberator;
/* aggregate */ int g_stEngineStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 108–110 */
/* addr: 0x002acd90  size: 96 bytes */
void GLD_vCloseErr(void)
{
    /* line map: */
    /*   line 108 @ +0x000 */
    /*   line 108 @ +0x000 */
    /*   line 110 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1757–1959 */
/* addr: 0x002acdf0  size: 2388 bytes */
void GLI_v_DrawMirrorSuperObject(/* function pointer */ int p_stVpt, /* function pointer */ int _hSO, /* function pointer */ int p_stEIT, /* function pointer */ int pObj, /* function pointer */ int hVisualSet, /* function pointer */ int PO, /* function pointer */ int hIPO)
{
    unsigned char zTst;
    unsigned char zTst;
    float MaxV;
    float MaxU;
    float MinV;
    float MinU;
    unsigned int U1;
    unsigned int I3;
    unsigned int I2;
    unsigned int I1;
    unsigned int face;
    float a16_fWorldMatrix[16];
    int j;
    short i;
    short xNbLodDefinitions;
    float fADC;
    /* line map: */
    /*   line 1757 @ +0x000 */
    /*   line 1773 @ +0x000 */
    /*   line 1773 @ +0x000 */
    /*   line 1775 @ +0x000 */
    /*   line 1780 @ +0x000 */
    /*   line 1783 @ +0x000 */
    /*   line 1793 @ +0x000 */
    /*   line 1795 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1666–1748 */
/* addr: 0x002ad750  size: 952 bytes */
void GLI_DRV_SendAllTransparentEITs(void)
{
    unsigned char zTst;
    /* line map: */
    /*   line 1666 @ +0x000 */
    /*   line 1666 @ +0x000 */
    /*   line 1672 @ +0x000 */
    /*   line 1676 @ +0x000 */
    /*   line 1683 @ +0x000 */
    /*   line 1687 @ +0x000 */
    /*   line 1691 @ +0x000 */
    /*   line 1694 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1580–1636 */
/* addr: 0x002adb10  size: 856 bytes */
void GLI_vDisplayAllShadows(void)
{
    float Temp[4];
    unsigned int NbVertices;
    float a16_fWorldMatrix[16];
    /* line map: */
    /*   line 1580 @ +0x000 */
    /*   line 1583 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1570–1570 */
/* addr: 0x002ade70  size: 40 bytes */
void GLI_SendShadowElementToViewport(/* function pointer */ int p_stObj, /* function pointer */ int pVert)
{
    /* line map: */
    /*   line 1570 @ +0x000 */
    /*   line 1570 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1522–1554 */
/* addr: 0x002adea0  size: 456 bytes */
void GLI_vAddShadowObject(float* p1, float* p2, float* p3, float* p4, /* function pointer */ int ShadowMat)
{
    /* line map: */
    /*   line 1522 @ +0x000 */
    /*   line 1528 @ +0x000 */
    /*   line 1525 @ +0x000 */
    /*   line 1550 @ +0x000 */
    /*   line 1551 @ +0x000 */
    /*   line 1551 @ +0x000 */
    /*   line 1531 @ +0x000 */
    /*   line 1531 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1482–1515 */
/* addr: 0x002ae070  size: 216 bytes */
void GLI_vInitSimpleShadowArrays(void)
{
    unsigned int i;
    /* line map: */
    /*   line 1482 @ +0x000 */
    /*   line 1490 @ +0x000 */
    /*   line 1486 @ +0x000 */
    /*   line 1493 @ +0x000 */
    /*   line 1486 @ +0x000 */
    /*   line 1490 @ +0x000 */
    /*   line 1494 @ +0x000 */
    /*   line 1493 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002ae150  size: 8 bytes */
void GLI_DRV_xSendElementTIToClip_TRIANGLES(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1381–1438 */
/* addr: 0x002ae160  size: 628 bytes */
void GLI_CalculateBoundingBoxForElement(/* function pointer */ int p_stEIT, /* function pointer */ int p_stPoints)
{
    unsigned int i;
    /* line map: */
    /*   line 1381 @ +0x000 */
    /*   line 1381 @ +0x000 */
    /*   line 1386 @ +0x000 */
    /*   line 1386 @ +0x000 */
    /*   line 1388 @ +0x000 */
    /*   line 1394 @ +0x000 */
    /*   line 1400 @ +0x000 */
    /*   line 1403 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1350–1352 */
/* addr: 0x002ae3e0  size: 72 bytes */
void GLI_vDMASendTransparentObject(unsigned int DisplayList)
{
    /* line map: */
    /*   line 1350 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1328–1334 */
/* addr: 0x002ae430  size: 44 bytes */
void GLI_vDMASendObject(unsigned int hSdl)
{
    /* line map: */
    /*   line 1328 @ +0x000 */
    /*   line 1334 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1177–1217 */
/* addr: 0x002ae460  size: 320 bytes */
void GLI_vGet2DPercentPointFrom3DWorldPoint(/* function pointer */ int p_stVpt, /* function pointer */ int pDestination2D, /* function pointer */ int pSource3D)
{
    float fInv;
    float a4_fCameraVector[4];
    float a4_fWorldVector[4];
    float a16_fProjectionMatrix[4][4];
    float a16_fWorldMatrix[4][4];
    /* line map: */
    /*   line 1177 @ +0x000 */
    /*   line 1177 @ +0x000 */
    /*   line 1177 @ +0x000 */
    /*   line 1177 @ +0x000 */
    /*   line 1181 @ +0x000 */
    /*   line 1187 @ +0x000 */
    /*   line 1196 @ +0x000 */
    /*   line 1203 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1146–1160 */
/* addr: 0x002ae5a0  size: 396 bytes */
void GLI_vSetFIXFullScreenOrthoProjection(void)
{
    /* line map: */
    /*   line 1146 @ +0x000 */
    /*   line 1146 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /*   line 1151 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1122–1141 */
/* addr: 0x002ae730  size: 404 bytes */
void GLI_vSetFullScreenOrthoProjection(void)
{
    /* line map: */
    /*   line 1122 @ +0x000 */
    /*   line 1122 @ +0x000 */
    /*   line 1126 @ +0x000 */
    /*   line 1127 @ +0x000 */
    /*   line 1127 @ +0x000 */
    /*   line 1127 @ +0x000 */
    /*   line 1129 @ +0x000 */
    /*   line 1127 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1038–1117 */
/* addr: 0x002ae8d0  size: 768 bytes */
void GLI_vInitGLProjectionMatrix(void)
{
    float g_fxAngle;
    float g_fCurrentRatio;
    float TransformedxAngle;
    /* line map: */
    /*   line 1038 @ +0x000 */
    /*   line 1038 @ +0x000 */
    /*   line 1056 @ +0x000 */
    /*   line 1059 @ +0x000 */
    /*   line 1067 @ +0x000 */
    /*   line 1071 @ +0x000 */
    /*   line 1071 @ +0x000 */
    /*   line 1077 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 983–1026 */
/* addr: 0x002aebd0  size: 956 bytes */
void TakeCareOfCinemascopePS2(void)
{
    float Height;
    /* line map: */
    /*   line 983 @ +0x000 */
    /*   line 989 @ +0x000 */
    /*   line 991 @ +0x000 */
    /*   line 993 @ +0x000 */
    /*   line 997 @ +0x000 */
    /*   line 998 @ +0x000 */
    /*   line 996 @ +0x000 */
    /*   line 996 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 954–965 */
/* addr: 0x002aef90  size: 52 bytes */
void GLI_vReinitViewport(void)
{
    /* line map: */
    /*   line 954 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 963 @ +0x000 */
    /*   line 965 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 894–918 */
/* addr: 0x002aefd0  size: 212 bytes */
void glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar)
{
    float oofminusn;
    float ootminusb;
    float oorminusl;
    float twonears;
    float m[4][4];
    /* line map: */
    /*   line 894 @ +0x000 */
    /*   line 894 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 910 @ +0x000 */
    /*   line 910 @ +0x000 */
    /*   line 911 @ +0x000 */
    /*   line 911 @ +0x000 */
    /*   line 916 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 864–874 */
/* addr: 0x002af0b0  size: 72 bytes */
void GLI_xRefreshAnimatedTextureIfNeeded(/* function pointer */ int hVisualMaterial)
{
    /* line map: */
    /*   line 864 @ +0x000 */
    /*   line 869 @ +0x000 */
    /*   line 874 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 787–858 */
/* addr: 0x002af100  size: 860 bytes */
void GLI_DRV_vSetCommonGLRenderStates(void)
{
    unsigned char zTst;
    /* line map: */
    /*   line 787 @ +0x000 */
    /*   line 790 @ +0x000 */
    /*   line 792 @ +0x000 */
    /*   line 796 @ +0x000 */
    /*   line 819 @ +0x000 */
    /*   line 821 @ +0x000 */
    /*   line 827 @ +0x000 */
    /*   line 829 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002af460  size: 8 bytes */
void GLI_vResetTempList(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002af470  size: 8 bytes */
void GLI_vAllocateTempLists(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 681–712 */
/* addr: 0x002af480  size: 140 bytes */
void GLI_vReinitFrame(unsigned int SwapBuffers)
{
    /* line map: */
    /*   line 681 @ +0x000 */
    /*   line 683 @ +0x000 */
    /*   line 691 @ +0x000 */
    /*   line 695 @ +0x000 */
    /*   line 700 @ +0x000 */
    /*   line 700 @ +0x000 */
    /*   line 703 @ +0x000 */
    /*   line 705 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 510–650 */
/* addr: 0x002af510  size: 1976 bytes */
void DisplayShadowVolumes(void)
{
    unsigned char zTst;
    float CColor;
    unsigned int CountB;
    unsigned int CountF;
    /* line map: */
    /*   line 510 @ +0x000 */
    /*   line 514 @ +0x000 */
    /*   line 516 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 523 @ +0x000 */
    /*   line 535 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 547 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 348–395 */
/* addr: 0x002afcd0  size: 988 bytes */
void DrawTriangles(void)
{
    unsigned char zTst;
    float* p;
    float fADC;
    unsigned int i;
    /* line map: */
    /*   line 348 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 367 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 372 @ +0x000 */
    /*   line 372 @ +0x000 */
    /*   line 376 @ +0x000 */
    /*   line 370 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 286–286 */
/* addr: 0x002b00b0  size: 16 bytes */
void GLI_vAddShadowVolumeDisplayList(void)
{
    /* line map: */
    /*   line 286 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 255–255 */
/* addr: 0x002b00c0  size: 588 bytes */
void GLI_vRemoveScissors(void)
{
    unsigned char zTst;
    /* line map: */
    /*   line 255 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 235–250 */
/* addr: 0x002b0310  size: 428 bytes */
void GLI_vSetScissors(/* function pointer */ int _p_stFixViewportAttr)
{
    int height;
    int width;
    int y;
    int x;
    /* line map: */
    /*   line 235 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 244 @ +0x000 */
    /*   line 244 @ +0x000 */
    /*   line 244 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 238 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b04c0  size: 8 bytes */
void GLI_pstGetSpecificStructureFromEIT(/* function pointer */ int p_stEIT)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 165–218 */
/* addr: 0x002b04d0  size: 368 bytes */
void GLI_vAllocateSpecificStructure(unsigned int NbMultiTextureMaterials, /* function pointer */ int p_stEIT, /* function pointer */ int pTemp)
{
    unsigned int i;
    /* line map: */
    /*   line 165 @ +0x000 */
    /*   line 165 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 174 @ +0x000 */
    /*   line 178 @ +0x000 */
    /*   line 180 @ +0x000 */
    /*   line 188 @ +0x000 */
    /*   line 195 @ +0x000 */
    /* TODO: decompile from asm/... */
}
