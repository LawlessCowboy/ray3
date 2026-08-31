/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct PS2STRIP_ PS2STRIP_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct PS2STRIP_List_ PS2STRIP_List_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct PS2STRIP_Vtx_ PS2STRIP_Vtx_;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct _SDC_Instance_ _SDC_Instance_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tagGScontext tagGScontext;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct sceGsRgbaq sceGsRgbaq;
typedef struct stMorphData stMorphData;
typedef struct tdstEvent_ tdstEvent_;
typedef struct sceGsClamp sceGsClamp;
typedef struct sceGsZbuf sceGsZbuf;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct sceGsFrame sceGsFrame;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct sceGifTag sceGifTag;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct sceGsPabe sceGsPabe;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct sceGsTrxreg sceGsTrxreg;
typedef struct tagListNode tagListNode;
typedef struct tagGLtexname tagGLtexname;
typedef struct sceGsTexa sceGsTexa;
typedef struct C_InstanceList C_InstanceList;
typedef struct DelayedFrees_ DelayedFrees_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct C_SdlRef C_SdlRef;
typedef struct sceGsScanmsk sceGsScanmsk;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagGLcontext tagGLcontext;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct sceGsTex0 sceGsTex0;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagstVIFCode tagstVIFCode;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct sceGsPrim sceGsPrim;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct sceGsDthe sceGsDthe;
typedef struct sceGsColclamp sceGsColclamp;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct sceGsUv sceGsUv;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct sceGsScissor sceGsScissor;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct _Sinus_Copy_ _Sinus_Copy_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct sceGsTexclut sceGsTexclut;
typedef struct sceGsAlpha sceGsAlpha;
typedef struct sceGsLabel sceGsLabel;
typedef struct GT3_Reflections_ GT3_Reflections_;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tdstCouple_ tdstCouple_;
typedef struct sceGsFba sceGsFba;
typedef struct sceGsDimx sceGsDimx;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct sceGsXyoffset sceGsXyoffset;
typedef struct sceGsMiptbp1 sceGsMiptbp1;
typedef struct sceGsPrmode sceGsPrmode;
typedef struct sceGsTex1 sceGsTex1;
typedef struct sceGsTexflush sceGsTexflush;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct stParamBegin stParamBegin;
typedef struct sceGsSignal sceGsSignal;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct sceGsBitbltbuf sceGsBitbltbuf;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct sceGsXyz sceGsXyz;
typedef struct sceGsTrxdir sceGsTrxdir;
typedef struct sceGsFog sceGsFog;
typedef struct tag_GLlight tag_GLlight;
typedef struct sceGsSt sceGsSt;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct sceGsMiptbp2 sceGsMiptbp2;
typedef struct sceGsTrxpos sceGsTrxpos;
typedef struct sceGsFogcol sceGsFogcol;
typedef struct sceGsXyzf sceGsXyzf;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct sceGsTest sceGsTest;
typedef struct sceGsTex2 sceGsTex2;
typedef union unFunction unFunction;

struct PS2STRIP_ {
    unsigned int NbIndices; /* +0x0 */
    unsigned int NbIndicesADC; /* +0x4 */
    unsigned int NbTriangles; /* +0x8 */
    unsigned int NbAllocated; /* +0xc */
    int pIndices; /* +0x10 */
    int pADC; /* +0x14 */
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

struct PS2STRIP_List_ {
    unsigned int NbStrips; /* +0x0 */
    int pList; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct PS2STRIP_Vtx_ {
    float Position[4]; /* +0x0 */
    unsigned int Color[4]; /* +0x10 */
    unsigned int UVs[3]; /* +0x20 */
    unsigned int Normal; /* +0x2c */
    unsigned int Org; /* +0x30 */
};

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct anon_0 {
    int pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_1 st_UVStaticPos; /* +0xc */
    anon_1 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct _SDC_Instance_ {
    int pSPO; /* +0x0 */
    unsigned int ulElementNumber; /* +0x4 */
    int pVertexArray; /* +0x8 */
    int pInstanceNormals; /* +0xc */
    int pSDL; /* +0x10 */
    unsigned int ulFrameNumber; /* +0x14 */
    unsigned int ulFrameNumberForNormals; /* +0x18 */
    int pList; /* +0x1c */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct sceGsRgbaq {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
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

struct sceGsClamp {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct sceGsZbuf {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
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

struct sceGsFrame {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
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

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct sceGsPabe {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct sceGsTrxreg {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagListNode {
    int pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    /* aggregate */ int apData; /* +0xc */
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

struct sceGsTexa {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct C_InstanceList {
    unsigned int m_NbInstances; /* +0x0 */
    int m_pList; /* +0x4 */
};

struct DelayedFrees_ {
    int Pointer; /* +0x0 */
    unsigned int CurrentFrame; /* +0x4 */
    unsigned int DisplayList; /* +0x8 */
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

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
};

struct sceGsScanmsk {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
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

struct sceGsDthe {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsColclamp {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
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

struct sceGsUv {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
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

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct _Sinus_Copy_ {
    int pVDest; /* +0x0 */
    int pVCopy; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
};

struct sceGsTexclut {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
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

struct sceGsLabel {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct GT3_Reflections_ {
    float Matrix[4][4]; /* +0x0 */
    int p_stEIT; /* +0x40 */
    unsigned int ReflectionType; /* +0x44 */
    int pSDC; /* +0x48 */
    unsigned int iElement; /* +0x4c */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct sceGsTexflush {
    unsigned long pad00; /* +0x0 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
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

struct sceGsSignal {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
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

struct sceGsXyz {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct sceGsTrxdir {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct sceGsFog {
    unsigned long param0 : 56; /* bit None, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
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

struct sceGsSt {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
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

struct sceGsFogcol {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct sceGsXyzf {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long 8 : 8; /* bit None, byte +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
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

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
};

unsigned int SDC_g_NbFaces;
unsigned int NbVerticesToProcessWithoutStrips;
unsigned int NbVerticesToProcessWithStrips;
unsigned int TotalVertexArraySizeWithoutStrips;
unsigned int TotalVertexArraySizeWithStrips;
static unsigned int LastVal2;
static unsigned int LastVal1;
int GLI_g_CurrentSkinIndex;
int GLI_g_CurrentSkinMaterial;
int GLIPS2_vDummySDL;
unsigned int DelayedFreesInit;
DelayedFrees_ GLI_g_DelayedFrees[2000];
int Global_CharacterModuleBeingDisplayed;
/* aggregate */ int GLI_G_InstancesToDisplay;
unsigned int GLI_G_NumberOfInstancesToDisplay;
unsigned int GLI_G_NextStartForThisViewport;
unsigned int GLI_g_NbVAToUpdate;
/* array */ int GLI_VAToUpdate[500];
float GLI_g_DummyNonIDMatrix[4][4];
int Global_pCurrentActor;
int globale;
unsigned int GLI_g_LastSDLCreationTime;
unsigned int GLI_g_NumberOfSDLsCreatedInThisFrame;
/* array */ int GLI_g_TransparentSpriteGens[200];
unsigned int GLI_g_NbTransparentSpriteGens;
GT3_Reflections_ GLI_g_GT3_Reflections[256];
unsigned int GLI_g_NbGT3_Reflections;
float PLICPLOCVERTEXES[1024][4];
unsigned int GLI_g_NbTransparentUnoptimizedMap;
/* array */ int GLI_g_TransparentUnoptimizedMapElements[256];
/* array */ int GLI_g_UnOptCharList[500];
unsigned int GLI_g_NbUnOptChars;
_Sinus_Copy_ GLI_G_SINUS_COPIES[500];
unsigned int GLI_G_NB_SINUS_COPIES;
float GlobalMul;
unsigned int GLI_g_CurrentNbCheapSDLsForViewport;
unsigned int GLI_g_CurrentNbCheapSDLs;
unsigned int GLI_G_iNbSdlsInThisFrame;
float a16_fProjectionMatrix[4][4];
unsigned int GLI_g_ProjectionMode;
int g_p_stCurrentViewport;
float g_xSinusSizeMulx;
float g_xSinusSizeMulz;
float g_xSinusSizeMuly;
float g_ffFrameTime;
int PS2glAllocator64;
/* aggregate */ int stSinEffectAmp;
float a3_xSinEffectBaseMesh[3];
float GLI_fF2pow24;
float a64_fSinTable[128];
int PS2glLiberator;
tagGLcontext 8;
int GLI_BIG_GLOBALS_gs_st_CurrentMatrix;
int GLI_g_LastCyclingMode;
unsigned int GLI_g_CurrentStage;
float GlobalAlphaVal;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int g_p_stLightMapUForNextObjectToDraw;
int g_p_stRawRLIsForThisObject;
float GLI_g_NegVect[4];
/* aggregate */ int GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix;
float GLI_g_SpriteGenNorme;
unsigned int SCT_g_DrawingMirrored;
unsigned int GLI_g_CurrentFogMode;
float g_fFogColor[4];
float g_fFogEnd;
float g_fFogStart;
int GLI_BIG_GLOBALS_xFogIsOn;
int GLI_BIG_GLOBALS_lCurrentDrawMask;
tagGScontext 8;
int AGO_g_BigRainMaterial;
int GLI_BIG_GLOBALS_gs_st_CameraMatrix;
/* aggregate */ int gs_stCameraPosInGlobal;
char g_DoSmallPlouf;
int g_AGO_PloufMaterial;
int bSwamp_60;
float GLI_g_fBSMultiplicatorActor;
float GLI_g_OOStartMinusEnd;
unsigned int GLI_g_CurrentSDLFogColor;
unsigned int GLI_g_bChromeEffectOnThisLayer;
unsigned int GLI_g_NumberInList;
anon_3 __vt__20C_SdlRef_LocalMatrix;
anon_1 __vt__8C_SdlRef;
unsigned int GLI_g_LatestHadAChrome;
int g_TextMatrixIsIdentity;
float GLI_g_TEXTUREMATRIX_Dummy[16];
anon_4 __vt__24C_SdlRef_TextureIdMatrix;
float GLI_g_SPOMATRIX_Dummy[16];
unsigned int GLI_g_ThisLayerHasScrolling;
anon_5 __vt__22C_SdlRef_TextureMatrix;
char GLI_b_CreatingActorSDL;
float light_specular0[4];
float g_LeftHandedIdentityMatrix[16];
unsigned int hCurrentSDL;
anon_0 __vt__14C_CharacterSdl;
anon_2 __vt__5C_Sdl;
unsigned int GLI_g_InstanceLists;
int Global_CharacterBeingDisplayed;
unsigned int GLI_g_FrameNumber;
short GLI_g_SkinIndice[4];
/* aggregate */ int GLI_g_SkinMaterials;
unsigned int GLI_g_NbSkinsForThisCharacter;
unsigned int GLI_g_bInterpol;
float g_ffFrameTimeLastFrame;
unsigned int GLI_g_NO_INTERPOLATION_FOR_NEXT_FRAME;
unsigned int SDL_g_HasDrawn;

/* addr: 0x002c7250  size: 8 bytes */
void GLI_vReinitTempVertexArrays(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 3567–3572 */
/* addr: 0x002c7260  size: 28 bytes */
void GLI_vRemoveRefs(void)
{
    /* line map: */
    /*   line 3567 @ +0x000 */
    /*   line 3569 @ +0x000 */
    /*   line 3572 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 3413–3420 */
/* addr: 0x002c7280  size: 52 bytes */
void GLIPS2_vPrepareCullingForThisFrame(/* function pointer */ int p_stVpt)
{
    /* line map: */
    /*   line 3416 @ +0x000 */
    /*   line 3413 @ +0x000 */
    /*   line 3420 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002c72c0  size: 8 bytes */
void GLI_vProcessAgoLights(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2663–3002 */
/* addr: 0x002c72d0  size: 1920 bytes */
void GLI_vProcessSinusEffectOnObject(/* function pointer */ int pObj, float (*) Temp[4], float (*) pColors[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], float (*) pVOrg[4], float (*) DestSin[4], float (*) pVTemp[4], float (*) pVDest[4], float (*) pVCopy[4], /* function pointer */ int pSDC)
{
    float fFreq;
    float Mulz[4];
    float Muly[4];
    float Mulx[4];
    float Freq[4];
    unsigned int i;
    unsigned int* param0;
    float* sintable;
    float Mulz[4];
    float Muly[4];
    float Mulx[4];
    float Amp[4];
    float Freq[4];
    unsigned int i;
    float* pVT;
    unsigned int stage;
    unsigned int NbVertices;
    unsigned int iElement;
    /* line map: */
    /*   line 2667 @ +0x000 */
    /*   line 2663 @ +0x000 */
    /*   line 2667 @ +0x000 */
    /*   line 2671 @ +0x000 */
    /*   line 2671 @ +0x000 */
    /*   line 2675 @ +0x000 */
    /*   line 2679 @ +0x000 */
    /*   line 2684 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2594–2599 */
/* addr: 0x002c7a50  size: 116 bytes */
void GLI_vFreeAllSinusCopies(void)
{
    unsigned int i;
    /* line map: */
    /*   line 2594 @ +0x000 */
    /*   line 2597 @ +0x000 */
    /*   line 2599 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2441–2547 */
/* addr: 0x002c7ad0  size: 948 bytes */
void GLI_c_DrawUnoptimizedCharacter(/* function pointer */ int pObj, /* function pointer */ int p_stEIT, /* function pointer */ int pSDC, float (*) pUsedUV[4], float (*) pNormals[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], float (*) pVOrg[4])
{
    unsigned int bUsingStrips;
    unsigned int OrgNbStages;
    unsigned int NbVertices;
    unsigned int NbStages;
    unsigned int stage;
    unsigned int iElement;
    /* line map: */
    /*   line 2443 @ +0x000 */
    /*   line 2443 @ +0x000 */
    /*   line 2441 @ +0x000 */
    /*   line 2444 @ +0x000 */
    /*   line 2444 @ +0x000 */
    /*   line 2443 @ +0x000 */
    /*   line 2443 @ +0x000 */
    /*   line 2446 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2334–2426 */
/* addr: 0x002c7e90  size: 1092 bytes */
void DisplayAllUnOptChar(/* function pointer */ int p, /* function pointer */ int pSDC, float (*) pUsedUV[4], float (*) pNormals[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], float (*) pVOrg[4])
{
    unsigned int bUsingStrips;
    unsigned int OrgNbStages;
    unsigned int NbVertices;
    unsigned int NbStages;
    unsigned int stage;
    unsigned int i;
    /* line map: */
    /*   line 2334 @ +0x000 */
    /*   line 2334 @ +0x000 */
    /*   line 2334 @ +0x000 */
    /*   line 2334 @ +0x000 */
    /*   line 2338 @ +0x000 */
    /*   line 2335 @ +0x000 */
    /*   line 2335 @ +0x000 */
    /*   line 2347 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2076–2292 */
/* addr: 0x002c82e0  size: 2208 bytes */
void GLI_c_DrawUnoptimizedMap(/* function pointer */ int pObj, GLI_tdstTexture_* p_stTexture, /* function pointer */ int pSpecif, /* function pointer */ int p_stEIT, /* function pointer */ int pSDC, float (*) pUsedUV[4], float (*) pColors[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], float (*) pVOrg[4])
{
    unsigned int NbStages;
    float CurrentMatrix[4][4];
    unsigned int bUsingStrips;
    unsigned int OrgNbStages;
    unsigned int NbVertices;
    unsigned int stage;
    unsigned int iElement;
    /* line map: */
    /*   line 2083 @ +0x000 */
    /*   line 2076 @ +0x000 */
    /*   line 2081 @ +0x000 */
    /*   line 2076 @ +0x000 */
    /*   line 2084 @ +0x000 */
    /*   line 2084 @ +0x000 */
    /*   line 2084 @ +0x000 */
    /*   line 2088 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2000–2064 */
/* addr: 0x002c8bb0  size: 684 bytes */
void GLI_vDisplayAllTransparentUnoptimizedMapElements(/* function pointer */ int p)
{
    float fFogEnd;
    float fFogStart;
    unsigned int iFogIsOn;
    unsigned int i;
    /* line map: */
    /*   line 2000 @ +0x000 */
    /*   line 2000 @ +0x000 */
    /*   line 2000 @ +0x000 */
    /*   line 2000 @ +0x000 */
    /*   line 2000 @ +0x000 */
    /*   line 2003 @ +0x000 */
    /*   line 2005 @ +0x000 */
    /*   line 2013 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1962–1989 */
/* addr: 0x002c8e60  size: 176 bytes */
void GLI_vRegisterUnoptimizedMapTransparentElements(unsigned int NbVertices, unsigned int stage, float* CurrentMatrix, /* function pointer */ int pMat, float* pColors, float* pUsedUV, float* pVOrg, unsigned int bUseStrips, /* function pointer */ int p)
{
    /* line map: */
    /*   line 1973 @ +0x000 */
    /*   line 1962 @ +0x000 */
    /*   line 1964 @ +0x000 */
    /*   line 1966 @ +0x000 */
    /*   line 1968 @ +0x000 */
    /*   line 1971 @ +0x000 */
    /*   line 1973 @ +0x000 */
    /*   line 1975 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1741–1911 */
/* addr: 0x002c8f10  size: 2404 bytes */
void GLI_vProcessBigRain(void)
{
    unsigned char zTst;
    float fADC;
    float fDist;
    float fAlpha;
    float ValeurALaCon2;
    float ValeurALaCon1;
    float CurrentCamMatrix[4][4];
    float U4;
    float U3;
    float V2;
    float V1;
    long lCurrY;
    long lCurrX;
    long lRainStep;
    long lY;
    long lX;
    float fCurrY;
    float fCurrX;
    float fZ;
    float fY;
    float fX;
    /* line map: */
    /*   line 1741 @ +0x000 */
    /*   line 1745 @ +0x000 */
    /*   line 1754 @ +0x000 */
    /*   line 1754 @ +0x000 */
    /*   line 1755 @ +0x000 */
    /*   line 1761 @ +0x000 */
    /*   line 1764 @ +0x000 */
    /*   line 1767 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002c9880  size: 8 bytes */
void GLI_CreateBigRain(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1419–1715 */
/* addr: 0x002c9890  size: 3188 bytes */
void GT3_DisplayAllReflections(/* function pointer */ int pSDC, /* function pointer */ int pSDC, float (*) pColors[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], float (*) pVOrg[4])
{
    unsigned char zTst;
    unsigned int iElement;
    unsigned int bUsingStrips;
    float fdY;
    float fdX;
    float fY;
    float fX;
    unsigned int NbPlicPlocs;
    int i;
    /* aggregate */ int Dir;
    /* aggregate */ int Pos;
    unsigned int FirstVertex;
    unsigned int Vertex;
    char OLDg_DoSmallPlouf;
    unsigned int iElement;
    unsigned int bUsingStrips;
    unsigned char zTst;
    unsigned int NbVertices;
    unsigned int i;
    /* line map: */
    /*   line 1419 @ +0x000 */
    /*   line 1423 @ +0x000 */
    /*   line 1423 @ +0x000 */
    /*   line 1425 @ +0x000 */
    /*   line 1428 @ +0x000 */
    /*   line 1428 @ +0x000 */
    /*   line 1428 @ +0x000 */
    /*   line 1428 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1333–1356 */
/* addr: 0x002ca510  size: 468 bytes */
void GLI_vDisplayAllTransparentSpriteGens(void)
{
    unsigned int i;
    /* line map: */
    /*   line 1333 @ +0x000 */
    /*   line 1333 @ +0x000 */
    /*   line 1333 @ +0x000 */
    /*   line 1333 @ +0x000 */
    /*   line 1333 @ +0x000 */
    /*   line 1336 @ +0x000 */
    /*   line 1344 @ +0x000 */
    /*   line 1344 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1256–1278 */
/* addr: 0x002ca6f0  size: 212 bytes */
void GLI_vRemoveAllInstances(/* function pointer */ int pObj, _SDC_Instance_* pInstance, C_InstanceList* pInstanceList, /* function pointer */ int pSDC)
{
    /* line map: */
    /*   line 1256 @ +0x000 */
    /*   line 1261 @ +0x000 */
    /*   line 1269 @ +0x000 */
    /*   line 1272 @ +0x000 */
    /*   line 1272 @ +0x000 */
    /*   line 1274 @ +0x000 */
    /*   line 1278 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1207–1244 */
/* addr: 0x002ca7d0  size: 104 bytes */
void GLI_vRemoveInstanceIfExists(/* function pointer */ int pObj, /* function pointer */ int pSPO, C_InstanceList* pInstanceList, /* function pointer */ int pSDC)
{
    /* line map: */
    /*   line 1207 @ +0x000 */
    /*   line 1212 @ +0x000 */
    /*   line 1235 @ +0x000 */
    /*   line 1239 @ +0x000 */
    /*   line 1244 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 578–1190 */
/* addr: 0x002ca840  size: 3860 bytes */
void GLI_c_DrawActorInstance(/* function pointer */ int pObj, float (*) pVOrg[4], float (*) pUsedUV[4], float (*) pNormals[4], float (*) pUVChrome[4], float (*) pUV2[4], float (*) pUV1[4], float (*) pVOrg[4], C_SdlRef* pRef, /* function pointer */ int p_stEIT, /* function pointer */ int Loc_CurrentActor, /* function pointer */ int pCharacterSPO, /* function pointer */ int pSPO, C_CharacterSdl* pSDL, float (*) pVertexArray[4], _SDC_Instance_* pInstance, C_InstanceList* pInstanceList, /* function pointer */ int pSDC)
{
    float A1;
    float B1;
    float G1;
    float R1;
    unsigned int FogIsOn;
    float FogStart;
    float FogEnd;
    float OOFogStart;
    unsigned int FogColor;
    float fB;
    float fA;
    unsigned int NbVertices;
    void* pTempData;
    unsigned int bUsingStrips;
    unsigned int NbVertices;
    unsigned int NbStages;
    unsigned int stage;
    unsigned int ulCurrentFrame;
    unsigned int Teleported;
    unsigned int iActualElement;
    unsigned int iElement;
    unsigned int* pInstanceNormals;
    /* line map: */
    /*   line 595 @ +0x000 */
    /*   line 595 @ +0x000 */
    /*   line 578 @ +0x000 */
    /*   line 625 @ +0x000 */
    /*   line 628 @ +0x000 */
    /*   line 632 @ +0x000 */
    /*   line 639 @ +0x000 */
    /*   line 649 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 521–544 */
/* addr: 0x002cb760  size: 128 bytes */
int GLIPS2_bCharacterHasTheRightSkin(/* function pointer */ int hMat, int Index)
{
    unsigned int i;
    /* line map: */
    /*   line 521 @ +0x000 */
    /*   line 524 @ +0x000 */
    /*   line 528 @ +0x000 */
    /*   line 535 @ +0x000 */
    /*   line 535 @ +0x000 */
    /*   line 544 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 509–509 */
/* addr: 0x002cb7e0  size: 12 bytes */
void GLIPS2_vSetNoInterpolationForThisCharacter(/* function pointer */ int hPerso)
{
    /* line map: */
    /*   line 509 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 457–471 */
/* addr: 0x002cb7f0  size: 152 bytes */
void GLI_vUpdateAllRefs(int bInterpol)
{
    /* line map: */
    /*   line 457 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 471 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 403–428 */
/* addr: 0x002cb890  size: 268 bytes */
void GLI_vUpdateAllVAs(/* function pointer */ int p)
{
    unsigned int i;
    /* line map: */
    /*   line 403 @ +0x000 */
    /*   line 407 @ +0x000 */
    /*   line 410 @ +0x000 */
    /*   line 413 @ +0x000 */
    /*   line 418 @ +0x000 */
    /*   line 419 @ +0x000 */
    /*   line 423 @ +0x000 */
    /*   line 426 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 375–379 */
/* addr: 0x002cb9a0  size: 72 bytes */
void GLI_vRemoveCharacterVAFromProcessList(float (*) pDest[4], /* function pointer */ int p)
{
    unsigned int i;
    /* line map: */
    /*   line 375 @ +0x000 */
    /*   line 378 @ +0x000 */
    /*   line 379 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 345–364 */
/* addr: 0x002cb9f0  size: 168 bytes */
void GLI_vUpdateCharacterVA(float (*) pDestPV[4], /* function pointer */ int p_stEIT, /* function pointer */ int p_stPoints, unsigned int NbPoints, unsigned int NbDestPoints, unsigned int bNoInterpol, /* function pointer */ int p)
{
    unsigned int i;
    /* line map: */
    /*   line 345 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 348 @ +0x000 */
    /*   line 354 @ +0x000 */
    /*   line 358 @ +0x000 */
    /*   line 360 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 364 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 258–309 */
/* addr: 0x002cbaa0  size: 432 bytes */
void GLI_vDrawAllActors(unsigned int bTransparent)
{
    unsigned int i;
    /* line map: */
    /*   line 258 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 270 @ +0x000 */
    /*   line 275 @ +0x000 */
    /*   line 277 @ +0x000 */
    /*   line 279 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 281 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 227–234 */
/* addr: 0x002cbc50  size: 136 bytes */
void GLI_vRemoveInstanceFromDisplay(_SDC_Instance_* pInstance)
{
    unsigned int i;
    /* line map: */
    /*   line 227 @ +0x000 */
    /*   line 230 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 234 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 186–189 */
/* addr: 0x002cbce0  size: 96 bytes */
void DestroyDummySDL(void)
{
    /* line map: */
    /*   line 186 @ +0x000 */
    /*   line 189 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 162–175 */
/* addr: 0x002cbd40  size: 140 bytes */
void GLI_vForceDeleteAllWaitingPointers(void)
{
    unsigned int i;
    /* line map: */
    /*   line 162 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 175 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 143–156 */
/* addr: 0x002cbdd0  size: 188 bytes */
void GLI_vDeleteAllWaitingPointers(void)
{
    unsigned int i;
    /* line map: */
    /*   line 143 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 150 @ +0x000 */
    /*   line 153 @ +0x000 */
    /*   line 156 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 122–135 */
/* addr: 0x002cbe90  size: 312 bytes */
void MyDelayedFree(void* p)
{
    unsigned int i;
    /* line map: */
    /*   line 122 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 127 @ +0x000 */
    /*   line 130 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 135 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 104–117 */
/* addr: 0x002cbfd0  size: 312 bytes */
void MyglDeleteLists(unsigned int DisplayList)
{
    unsigned int i;
    /* line map: */
    /*   line 104 @ +0x000 */
    /*   line 106 @ +0x000 */
    /*   line 109 @ +0x000 */
    /*   line 112 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 117 @ +0x000 */
    /* TODO: decompile from asm/... */
}
