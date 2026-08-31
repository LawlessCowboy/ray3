/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstList_ tdstList_;
typedef struct tdstState_ tdstState_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstArray_ tdstArray_;
typedef struct tdstComport_ tdstComport_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct stMorphData stMorphData;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct anon_0 anon_0;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstEvent_ tdstEvent_;
typedef union anon_1 anon_1;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdstDsgVar_ tdstDsgVar_;

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

struct tdstList_ {
    unsigned char ucNbElt; /* +0x0 */
    unsigned char ucMaxSize; /* +0x1 */
    int p_hTabElt; /* +0x4 */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct tdstArray_ {
    /* aggregate */ int eType; /* +0x0 */
    unsigned char ucMaxSize; /* +0x4 */
    /* array */ int d_ArrayElement[255]; /* +0x8 */
};

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
};

struct anon_0 {
    /* aggregate */ int uParam; /* +0x0 */
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

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

union anon_1 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
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

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
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

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

/* addr: 0x001fb810  size: 8 bytes */
void fn_vTestUnusedComport(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1212–1218 */
/* addr: 0x001fb820  size: 148 bytes */
unsigned char fn_ucSetDsgVar(unsigned char ucId, unsigned char ucIndex, AI_tdstMind_* p_stPerso, tdstGetSetParam_* p_stGetSetParam, unsigned char (*p_fn_ucSetDsgVar)(void*, unsigned char, tdstGetSetParam_*))
{
    /* line map: */
    /*   line 1212 @ +0x000 */
    /*   line 1212 @ +0x000 */
    /*   line 1218 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1163–1183 */
/* addr: 0x001fb8c0  size: 120 bytes */
unsigned char fn_ucSetDsgVarArray(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam, unsigned char (*p_fn_ucSetDsgVar)(void*, unsigned char, tdstGetSetParam_*), tdstArray_* p_stArray)
{
    unsigned char ret;
    /* line map: */
    /*   line 1163 @ +0x000 */
    /*   line 1183 @ +0x000 */
    /*   line 1183 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1148–1152 */
/* addr: 0x001fb940  size: 24 bytes */
unsigned char fn_ucSetDsgVarVisualMaterial(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int hVisualMaterial)
{
    /* line map: */
    /*   line 1148 @ +0x000 */
    /*   line 1152 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1138–1142 */
/* addr: 0x001fb960  size: 24 bytes */
unsigned char fn_ucSetDsgVarGameMaterial(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int hGameMaterial)
{
    /* line map: */
    /*   line 1138 @ +0x000 */
    /*   line 1142 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1127–1131 */
/* addr: 0x001fb980  size: 64 bytes */
unsigned char fn_ucSetDsgVarPositiveInteger(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1127 @ +0x000 */
    /*   line 1130 @ +0x000 */
    /*   line 1131 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1118–1122 */
/* addr: 0x001fb9c0  size: 64 bytes */
unsigned char fn_ucSetDsgVarInteger(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1118 @ +0x000 */
    /*   line 1121 @ +0x000 */
    /*   line 1122 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1109–1113 */
/* addr: 0x001fba00  size: 64 bytes */
unsigned char fn_ucSetDsgVar0To65535(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1109 @ +0x000 */
    /*   line 1112 @ +0x000 */
    /*   line 1113 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1100–1104 */
/* addr: 0x001fba40  size: 64 bytes */
unsigned char fn_ucSetDsgVar_32768To32767(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1100 @ +0x000 */
    /*   line 1103 @ +0x000 */
    /*   line 1104 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1091–1095 */
/* addr: 0x001fba80  size: 64 bytes */
unsigned char fn_ucSetDsgVar0To255(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1091 @ +0x000 */
    /*   line 1094 @ +0x000 */
    /*   line 1095 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1082–1086 */
/* addr: 0x001fbac0  size: 64 bytes */
unsigned char fn_ucSetDsgVar_128To127(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1082 @ +0x000 */
    /*   line 1085 @ +0x000 */
    /*   line 1086 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1073–1077 */
/* addr: 0x001fbb00  size: 64 bytes */
unsigned char fn_ucSetDsgVarBoolean(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1073 @ +0x000 */
    /*   line 1076 @ +0x000 */
    /*   line 1077 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1061–1067 */
/* addr: 0x001fbb40  size: 68 bytes */
unsigned char fn_ucSetDsgVarList(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, tdstList_* p_TgtList, tdstList_* p_SrcList)
{
    /* line map: */
    /*   line 1061 @ +0x000 */
    /*   line 1066 @ +0x000 */
    /*   line 1067 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1055–1055 */
/* addr: 0x001fbb90  size: 16 bytes */
unsigned char fn_ucSetDsgVarWayPoint(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1055 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1045–1045 */
/* addr: 0x001fbba0  size: 16 bytes */
unsigned char fn_ucSetDsgVarGraph(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1045 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1036–1036 */
/* addr: 0x001fbbb0  size: 16 bytes */
unsigned char fn_ucSetDsgVarCaps(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1036 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1026–1026 */
/* addr: 0x001fbbc0  size: 16 bytes */
unsigned char fn_ucSetDsgVarText(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1026 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1017–1018 */
/* addr: 0x001fbbd0  size: 32 bytes */
unsigned char fn_ucSetDsgVarVector(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 1017 @ +0x000 */
    /*   line 1018 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 1004–1008 */
/* addr: 0x001fbbf0  size: 24 bytes */
unsigned char fn_ucSetDsgVarComport(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, tdstComport_* p_stComport)
{
    /* line map: */
    /*   line 1004 @ +0x000 */
    /*   line 1008 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 996–996 */
/* addr: 0x001fbc10  size: 16 bytes */
unsigned char fn_ucSetDsgVarAction(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 996 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 988–988 */
/* addr: 0x001fbc20  size: 16 bytes */
unsigned char fn_ucSetDsgVarLight(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 988 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 980–980 */
/* addr: 0x001fbc30  size: 16 bytes */
unsigned char fn_ucSetDsgVarSoundEvent(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 980 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 971–971 */
/* addr: 0x001fbc40  size: 16 bytes */
unsigned char fn_ucSetDsgVarInput(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 971 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 953–959 */
/* addr: 0x001fbc50  size: 32 bytes */
unsigned char fn_ucSetDsgVarSOLinks(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int p_stSOL)
{
    /* line map: */
    /*   line 953 @ +0x000 */
    /*   line 959 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 935–941 */
/* addr: 0x001fbc70  size: 32 bytes */
unsigned char fn_ucSetDsgVarSuperObject(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int p_stObject)
{
    /* line map: */
    /*   line 935 @ +0x000 */
    /*   line 941 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 913–926 */
/* addr: 0x001fbc90  size: 80 bytes */
unsigned char fn_ucSetDsgVarPerso(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int p_stObject)
{
    /* line map: */
    /*   line 913 @ +0x000 */
    /*   line 917 @ +0x000 */
    /*   line 920 @ +0x000 */
    /*   line 926 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 908–908 */
/* addr: 0x001fbce0  size: 44 bytes */
unsigned char fn_ucSetDsgVarFloat(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 908 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 846–846 */
/* addr: 0x001fbd10  size: 124 bytes */
unsigned char fn_ucGetDsgVar(unsigned char ucId, unsigned char ucIndex, AI_tdstMind_* p_stPerso, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 846 @ +0x000 */
    /*   line 846 @ +0x000 */
    /*   line 846 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 811–818 */
/* addr: 0x001fbd90  size: 120 bytes */
unsigned char fn_ucGetDsgVarArray(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam, unsigned char (*p_fn_ucGetDsgVar)(void*, unsigned char, tdstGetSetParam_*), tdstArray_* p_stArray)
{
    unsigned char ret;
    /* line map: */
    /*   line 811 @ +0x000 */
    /*   line 818 @ +0x000 */
    /*   line 818 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 796–800 */
/* addr: 0x001fbe10  size: 24 bytes */
unsigned char fn_ucGetDsgVarVisualMaterial(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int hVisualMaterial)
{
    /* line map: */
    /*   line 796 @ +0x000 */
    /*   line 800 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 783–787 */
/* addr: 0x001fbe30  size: 44 bytes */
unsigned char fn_ucGetDsgVarGameMaterial(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int hGameMaterial)
{
    /* line map: */
    /*   line 785 @ +0x000 */
    /*   line 783 @ +0x000 */
    /*   line 787 @ +0x000 */
    /*   line 787 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 777–778 */
/* addr: 0x001fbe60  size: 24 bytes */
unsigned char fn_ucGetDsgVarPositiveInteger(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 777 @ +0x000 */
    /*   line 778 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 768–769 */
/* addr: 0x001fbe80  size: 24 bytes */
unsigned char fn_ucGetDsgVarInteger(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 768 @ +0x000 */
    /*   line 769 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 759–760 */
/* addr: 0x001fbea0  size: 24 bytes */
unsigned char fn_ucGetDsgVar0To65535(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 759 @ +0x000 */
    /*   line 760 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 751–752 */
/* addr: 0x001fbec0  size: 24 bytes */
unsigned char fn_ucGetDsgVar_32768To32767(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 751 @ +0x000 */
    /*   line 752 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 743–744 */
/* addr: 0x001fbee0  size: 24 bytes */
unsigned char fn_ucGetDsgVar0To255(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 743 @ +0x000 */
    /*   line 744 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 734–735 */
/* addr: 0x001fbf00  size: 24 bytes */
unsigned char fn_ucGetDsgVar_128To127(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 734 @ +0x000 */
    /*   line 735 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 725–726 */
/* addr: 0x001fbf20  size: 24 bytes */
unsigned char fn_ucGetDsgVarBoolean(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 725 @ +0x000 */
    /*   line 726 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 716–716 */
/* addr: 0x001fbf40  size: 20 bytes */
unsigned char fn_ucGetDsgVarList(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 716 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 705–709 */
/* addr: 0x001fbf60  size: 32 bytes */
unsigned char fn_ucGetDsgVarText(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    int hText;
    /* line map: */
    /*   line 705 @ +0x000 */
    /*   line 705 @ +0x000 */
    /*   line 709 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 693–697 */
/* addr: 0x001fbf80  size: 32 bytes */
unsigned char fn_ucGetDsgVarComport(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, tdstComport_* p_stComport)
{
    /* line map: */
    /*   line 693 @ +0x000 */
    /*   line 693 @ +0x000 */
    /*   line 697 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 681–686 */
/* addr: 0x001fbfa0  size: 32 bytes */
unsigned char fn_ucGetDsgVarAction(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, tdstState_* hAction)
{
    /* line map: */
    /*   line 681 @ +0x000 */
    /*   line 681 @ +0x000 */
    /*   line 686 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 674–675 */
/* addr: 0x001fbfc0  size: 24 bytes */
unsigned char fn_ucGetDsgVarWayPoint(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 674 @ +0x000 */
    /*   line 675 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 664–665 */
/* addr: 0x001fbfe0  size: 24 bytes */
unsigned char fn_ucGetDsgVarGraph(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 664 @ +0x000 */
    /*   line 665 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 654–655 */
/* addr: 0x001fc000  size: 24 bytes */
unsigned char fn_ucGetDsgVarCaps(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 654 @ +0x000 */
    /*   line 655 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 644–645 */
/* addr: 0x001fc020  size: 40 bytes */
unsigned char fn_ucGetDsgVarVector(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int p_stVertex)
{
    /* line map: */
    /*   line 644 @ +0x000 */
    /*   line 645 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 631–635 */
/* addr: 0x001fc050  size: 32 bytes */
unsigned char fn_ucGetDsgVarSOLinks(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int hSOL)
{
    /* line map: */
    /*   line 631 @ +0x000 */
    /*   line 631 @ +0x000 */
    /*   line 635 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 619–623 */
/* addr: 0x001fc070  size: 32 bytes */
unsigned char fn_ucGetDsgVarSuperObject(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int hSuperObject)
{
    /* line map: */
    /*   line 619 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 623 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 607–611 */
/* addr: 0x001fc090  size: 32 bytes */
unsigned char fn_ucGetDsgVarLight(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, GLI_tdstLight_* hEntryElement)
{
    /* line map: */
    /*   line 607 @ +0x000 */
    /*   line 607 @ +0x000 */
    /*   line 611 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 596–600 */
/* addr: 0x001fc0b0  size: 32 bytes */
unsigned char fn_ucGetDsgVarSoundEvent(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int hEntryElement)
{
    /* line map: */
    /*   line 596 @ +0x000 */
    /*   line 596 @ +0x000 */
    /*   line 600 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 585–589 */
/* addr: 0x001fc0d0  size: 32 bytes */
unsigned char fn_ucGetDsgVarInput(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int hEntryElement)
{
    /* line map: */
    /*   line 585 @ +0x000 */
    /*   line 585 @ +0x000 */
    /*   line 589 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 574–578 */
/* addr: 0x001fc0f0  size: 88 bytes */
unsigned char fn_ucGetDsgVarPerso(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam, /* function pointer */ int param2)
{
    /* line map: */
    /*   line 574 @ +0x000 */
    /*   line 576 @ +0x000 */
    /*   line 578 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c lines 566–567 */
/* addr: 0x001fc150  size: 24 bytes */
unsigned char fn_ucGetDsgVarFloat(void* pMyVarAddr, tdstGetSetParam_* p_stGetSetParam)
{
    /* line map: */
    /*   line 566 @ +0x000 */
    /*   line 567 @ +0x000 */
    /* TODO: decompile from asm/... */
}
