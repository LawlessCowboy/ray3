/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstComport_ tdstComport_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstState_ tdstState_;
typedef struct anon_0 anon_0;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct stMorphData stMorphData;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct tdstEvent_ tdstEvent_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef union anon_1 anon_1;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstActionParam_ tdstActionParam_;

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
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

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct tdstCineinfo_ {
    int hInit; /* +0x0 */
    int hCurrent; /* +0x4 */
    int hVisibility; /* +0x8 */
    int hWork; /* +0xc */
    /* aggregate */ int stLastFailedOrigin; /* +0x10 */
    /* aggregate */ int stLastFailedWanted; /* +0x1c */
    /* aggregate */ int stForceTarget; /* +0x28 */
    /* aggregate */ int stForcePosition; /* +0x34 */
    /* aggregate */ int stForceRefAxisY; /* +0x40 */
    /* aggregate */ int stForceRefAxisZ; /* +0x4c */
    float xApexRatio; /* +0x58 */
    float xLastDeltaCut; /* +0x5c */
    /* aggregate */ int eState; /* +0x60 */
    float xCounter1; /* +0x64 */
    float xCounter2; /* +0x68 */
    float xCounter3; /* +0x6c */
    float xCounter4; /* +0x70 */
    unsigned char ucVolIAFlags; /* +0x74 */
    unsigned char ucPerIAFlags; /* +0x75 */
    char cLastCutAngleSens; /* +0x76 */
    /* aggregate */ int AveragePosition; /* +0x78 */
    /* aggregate */ int stSightAxisSystem; /* +0x158 */
    unsigned char bCanDoBestPos; /* +0x17c */
    /* array */ int a10_stTransparentSuperObjectForCamera[10]; /* +0x180 */
    short xNumberOfTransparentSuperObjectForCamera; /* +0x248 */
    float fTransparency; /* +0x24c */
    float fTransparencySpeed; /* +0x250 */
    unsigned char ucTransparencyFlag; /* +0x254 */
    unsigned char bCameraIsMirrored; /* +0x255 */
    unsigned char bLightComputation; /* +0x256 */
};

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstState_ {
    int p_stAnim; /* +0x0 */
    /* aggregate */ int hForTransitionArray; /* +0x4 */
    /* aggregate */ int hForProhibitArray; /* +0xc */
    int h_NextState; /* +0x14 */
    int h_LinkedMechanicsIdCard; /* +0x18 */
    int szLevelList; /* +0x1c */
    int szAnimationSectionName; /* +0x20 */
    unsigned char ucRepeatAnimation; /* +0x24 */
    signed char scSpeedAnim; /* +0x25 */
    unsigned char ucTransitionStatusFlag; /* +0x26 */
    unsigned char ucCustomBits; /* +0x27 */
};

struct anon_0 {
    /* aggregate */ int uParam; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
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

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

union anon_1 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

unsigned char g_bUseMarkersForNextRequest;
int g_lSoundObjectTypeMusic;
int g_lSoundVolumeLineMenu;
int g_lSoundVolumeLineAmbiance;
int g_lSoundVolumeLineMusic;
int g_lSoundVolumeLineVoices;
int g_lSoundVolumeLineSound;
int g_lSoundObjectTypeMenu;
int g_lSoundObjectTypeAmbiance;
int g_lSoundObjectTypeVoice;
int g_lSoundObjectTypeAnim;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 118–208 */
/* addr: 0x0024a670  size: 708 bytes */
void fn_p_InitCamShooter(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, DNM_stDynamics* p_stDynamic, /* function pointer */ int hCamera, /* function pointer */ int _p_stViewport, tdstDynam_* h_Dynam, CAM_Shooter_* pcs)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 118 @ +0x000 */
    /*   line 122 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 130 @ +0x000 */
    /*   line 136 @ +0x000 */
    /*   line 136 @ +0x000 */
    /*   line 140 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 804–828 */
/* addr: 0x0024a940  size: 132 bytes */
void fn_p_stSoundProcedurePS2SetReverbOn(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    int s32_Channels;
    int s32_On;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 809 @ +0x000 */
    /*   line 804 @ +0x000 */
    /*   line 811 @ +0x000 */
    /*   line 810 @ +0x000 */
    /*   line 814 @ +0x000 */
    /*   line 822 @ +0x000 */
    /*   line 828 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 765–798 */
/* addr: 0x0024a9d0  size: 228 bytes */
void fn_p_stSoundProcedurePS2ChangeReverb(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    int s32_FeedBack;
    int s32_Delay;
    int s32_Vol;
    int s32_Mode;
    int s32_Channels;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 773 @ +0x000 */
    /*   line 765 @ +0x000 */
    /*   line 774 @ +0x000 */
    /*   line 775 @ +0x000 */
    /*   line 777 @ +0x000 */
    /*   line 779 @ +0x000 */
    /*   line 780 @ +0x000 */
    /*   line 784 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 731–758 */
/* addr: 0x0024aac0  size: 168 bytes */
void fn_p_stMusicMarkerSlotControlProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stMarkerSlots)
{
    int s32_Index;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 736 @ +0x000 */
    /*   line 731 @ +0x000 */
    /*   line 741 @ +0x000 */
    /*   line 745 @ +0x000 */
    /*   line 748 @ +0x000 */
    /*   line 754 @ +0x000 */
    /*   line 758 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 694–721 */
/* addr: 0x0024ab70  size: 228 bytes */
void fn_p_stLipsChannelControl(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int h_UltraAbleObject)
{
    tdstGetSetParam_ stParam1;
    /* aggregate */ int e_ProcedureId;
    /* line map: */
    /*   line 696 @ +0x000 */
    /*   line 696 @ +0x000 */
    /*   line 696 @ +0x000 */
    /*   line 694 @ +0x000 */
    /*   line 700 @ +0x000 */
    /*   line 706 @ +0x000 */
    /*   line 709 @ +0x000 */
    /*   line 714 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 648–685 */
/* addr: 0x0024ac60  size: 184 bytes */
void fn_p_stSaveCurrentSoundRequest(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int pst_BlockEvent)
{
    _SND_tduRefEvt u_RefEvt;
    int s32_Index;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 648 @ +0x000 */
    /*   line 655 @ +0x000 */
    /*   line 660 @ +0x000 */
    /*   line 667 @ +0x000 */
    /*   line 679 @ +0x000 */
    /*   line 685 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 600–642 */
/* addr: 0x0024ad20  size: 344 bytes */
void fn_p_stSetRollOffDistances(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstMSSound_* h_MSSound, /* function pointer */ int h_UltraAbleObject)
{
    _RollOffParam st_RollOff;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 610 @ +0x000 */
    /*   line 600 @ +0x000 */
    /*   line 611 @ +0x000 */
    /*   line 611 @ +0x000 */
    /*   line 613 @ +0x000 */
    /*   line 613 @ +0x000 */
    /*   line 615 @ +0x000 */
    /*   line 616 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 590–592 */
/* addr: 0x0024ae80  size: 68 bytes */
void fn_p_stSetPrevMusicFadeOut(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 590 @ +0x000 */
    /*   line 592 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 580–582 */
/* addr: 0x0024aed0  size: 52 bytes */
void fn_p_stSetInStereoMode(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 580 @ +0x000 */
    /*   line 582 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 568–571 */
/* addr: 0x0024af10  size: 80 bytes */
void fn_p_stSetDopplerEffect(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ st_Param;
    /* line map: */
    /*   line 568 @ +0x000 */
    /*   line 568 @ +0x000 */
    /*   line 571 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 524–558 */
/* addr: 0x0024af60  size: 204 bytes */
void fn_p_stSoundProcedureSetVolume(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ st_Param;
    int s32_Volume;
    /* aggregate */ int e_ProcedureId;
    /* line map: */
    /*   line 524 @ +0x000 */
    /*   line 532 @ +0x000 */
    /*   line 535 @ +0x000 */
    /*   line 540 @ +0x000 */
    /*   line 545 @ +0x000 */
    /*   line 549 @ +0x000 */
    /*   line 553 @ +0x000 */
    /*   line 558 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 468–518 */
/* addr: 0x0024b030  size: 212 bytes */
void fn_p_stSoundProcedureChangeVolume(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int h_UltraAbleObject)
{
    int s32_LineId;
    int s32_Volume;
    tdstGetSetParam_ st_Param;
    /* aggregate */ int e_ProcedureId;
    /* line map: */
    /*   line 468 @ +0x000 */
    /*   line 479 @ +0x000 */
    /*   line 487 @ +0x000 */
    /*   line 499 @ +0x000 */
    /*   line 508 @ +0x000 */
    /*   line 518 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 363–456 */
/* addr: 0x0024b110  size: 540 bytes */
void fn_p_stSoundProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int h_MechaCharacter, /* function pointer */ int pst_Object, /* function pointer */ int h_UltraAbleObject)
{
    int s32_SemaphoreId;
    char* pch_BankName;
    _SND_tduRefEvt u_RefEvtSaved;
    tdstGetSetParam_ st_Param;
    /* aggregate */ int e_ProcedureId;
    /* line map: */
    /*   line 363 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 376 @ +0x000 */
    /*   line 383 @ +0x000 */
    /*   line 391 @ +0x000 */
    /*   line 400 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 408 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 315–355 */
/* addr: 0x0024b330  size: 180 bytes */
void fn_p_stSoundProcedureResume(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    int s32_TypeId;
    tdstGetSetParam_ st_Param;
    /* aggregate */ int e_ProcedureId;
    /* line map: */
    /*   line 315 @ +0x000 */
    /*   line 322 @ +0x000 */
    /*   line 330 @ +0x000 */
    /*   line 339 @ +0x000 */
    /*   line 346 @ +0x000 */
    /*   line 353 @ +0x000 */
    /*   line 355 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiProcSound.c lines 270–310 */
/* addr: 0x0024b3f0  size: 180 bytes */
/* Debug signature rejected: type-record data leaked into it. */
void fn_p_stSoundProcedurePause(void)
{
    /* line map: */
    /*   line 270 @ +0x000 */
    /*   line 277 @ +0x000 */
    /*   line 285 @ +0x000 */
    /*   line 294 @ +0x000 */
    /*   line 301 @ +0x000 */
    /*   line 308 @ +0x000 */
    /*   line 310 @ +0x000 */
    /* TODO: decompile from asm/... */
}
