/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct AGO2_Part_ AGO2_Part_;
typedef struct AGO_V4D_ AGO_V4D_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct stMorphData stMorphData;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct AGO2_Types_ AGO2_Types_;

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct AGO2_Part_ {
    unsigned int ulType; /* +0x0 */
    unsigned int ulBaseID; /* +0x4 */
    unsigned int Channel; /* +0x8 */
    int pMaterial1; /* +0xc */
    int pMaterial2; /* +0x10 */
    int pDisplayFnct; /* +0x14 */
    int pProcessFnct; /* +0x18 */
    int pTransparencyFunction; /* +0x1c */
    int pSizingFunction; /* +0x20 */
    int pLauchingCharacter; /* +0x24 */
    unsigned int AnimTime; /* +0x28 */
    unsigned int InternalHasBeenDisplayed; /* +0x2c */
    float fAnimTimeScale; /* +0x30 */
    unsigned int AssociatedViewport; /* +0x34 */
    AGO_V4D_ Position; /* +0x38 */
    AGO_V4D_ Direction; /* +0x48 */
    float xTransparency; /* +0x58 */
    float xTransparencySpeed; /* +0x5c */
    float xSize[2]; /* +0x60 */
    float xShrinkingSpeed; /* +0x68 */
    float xLimit; /* +0x6c */
    unsigned int hGroup; /* +0x70 */
    unsigned int GroupNumber; /* +0x74 */
    AGO_V4D_ LightColor; /* +0x78 */
    float xLightNear; /* +0x88 */
    float xLightFar; /* +0x8c */
    AGO_V4D_ Vector1; /* +0x90 */
    AGO_V4D_ Vector2; /* +0xa0 */
    AGO_V4D_ Vector3; /* +0xb0 */
    AGO_V4D_ Vector4; /* +0xc0 */
};

struct AGO_V4D_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct AGO2_Types_ {
    int pCreationFunction; /* +0x0 */
    int pStartDisplayFunction; /* +0x4 */
    int pDisplayFunction; /* +0x8 */
    int pEndDisplayFunction; /* +0xc */
    int pProcessFunction; /* +0x10 */
    int pTransparencyFunction; /* +0x14 */
    int pSizingFunction; /* +0x18 */
};

unsigned int g_ulNumberOfAgos2;
unsigned int AGO2_g_NbWalls;
unsigned int AGO2_g_Walls[10];
int g_AGO2_p_stViewport;
unsigned char g_pAGO2TypesDisplayed[50];
AGO2_Types_ g_pAGO2Types[50];
AGO2_Part_ g_pAGO2Parts[300];
AGO_V4D_ AGO_g_BeeTargetPosition;
AGO_V4D_ AGO_g_CameraDirectionForRain;
AGO_V4D_ AGO_g_CameraCoordinatesForRain;
float AGO2_g_pfCosTable[512];
int g_PadCircle;
float g_ffFrameTime;
float g_fTimeDifference;
float g_AGO_AnimTimeScale;
unsigned char (*AGO2_CreateSerialCameraParticleRain)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessRainNearCameraParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit)(AGO2_Part_*);
void (*GLI_v_StopDrawingRain)(/* function pointer */ int);
void (*AGO2_DisplayRainParticleSpriteGroup)(AGO2_Part_*);
void (*GLI_v_StartDrawingRain)(/* function pointer */ int);
unsigned char (*AGO2_CreateCylinder)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessDieAtOnce)(AGO2_Part_*);
void (*AGO2_DisplayAuraStorm)(AGO2_Part_*);
void (*AGO2_DisplayCylinder)(AGO2_Part_*);
unsigned char (*AGO2_CreateIce)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessIce)(AGO2_Part_*);
void (*AGO2_DisplayIce)(AGO2_Part_*);
unsigned char (*AGO2_CreateForceField)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessForceField)(AGO2_Part_*);
void (*AGO2_DisplayForceField)(AGO2_Part_*);
unsigned char (*AGO2_CreateBalloon)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessBalloon)(AGO2_Part_*);
void (*AGO2_DisplayBalloon)(AGO2_Part_*);
unsigned char (*AGO2_CreateFireWall)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessEmpty)(AGO2_Part_*);
void (*AGO2_DisplayFireWall2)(AGO2_Part_*);
unsigned char (*AGO2_CreateFFRing)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_DisplayFFWhirl)(AGO2_Part_*);
void (*AGO2_DisplayFFRing)(AGO2_Part_*);
void (*AGO2_DisplayFireWall)(AGO2_Part_*);
unsigned char (*AGO2_CreateFire)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ShrinkFire)(AGO2_Part_*);
void (*AGO2_FadeFire)(AGO2_Part_*);
void (*AGO2_ProcessFire)(AGO2_Part_*);
void (*AGO2_DisplayFlow)(AGO2_Part_*);
unsigned char (*AGO2_CreateBees)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessBees)(AGO2_Part_*);
void (*AGO2_DisplayBees)(AGO2_Part_*);
unsigned char (*AGO2_CreateSerialCameraParticleLeaves)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessLeavesParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit)(AGO2_Part_*);
void (*AGO2_DisplayLeaves)(AGO2_Part_*);
unsigned char (*AGO2_CreateSerialCameraParticleSnow)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessSnowParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit)(AGO2_Part_*);
unsigned char (*AGO2_CreateFlow)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_FadeFlow)(AGO2_Part_*);
void (*AGO2_ProcessFlow)(AGO2_Part_*);
void (*AGO2_DisplayFlowMotionBlur)(AGO2_Part_*);
unsigned char (*AGO2_CreateLightning)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ProcessLightning)(AGO2_Part_*);
void (*AGO2_DisplayLightning)(AGO2_Part_*);
void (*AGO2_ProcessRainParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit)(AGO2_Part_*);
unsigned char (*AGO2_CreateOrdinaryParticle)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, /* function pointer */ int, unsigned int);
void (*AGO2_ShrinkNormal)(AGO2_Part_*);
void (*AGO2_FadeNormal)(AGO2_Part_*);
void (*AGO2_ProcessSimpleParticleWithSpeedAndGravity)(AGO2_Part_*);
void (*AGO2_DisplayOrdinarySprite)(AGO2_Part_*);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 146–240 */
/* addr: 0x001e0dc0  size: 532 bytes */
unsigned int AGO2_MEM_Alloc(unsigned int Size)
{
    unsigned int Difference;
    unsigned int j;
    unsigned int MinDifference;
    unsigned int MinZone;
    unsigned int* Pointer;
    unsigned int TempSize;
    unsigned int i;
    /* line map: */
    /*   line 146 @ +0x000 */
    /*   line 149 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 177 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 192 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 4283–4310 */
/* addr: 0x001e0fe0  size: 372 bytes */
void AGO2_vTestExploseWall(/* function pointer */ int pp, /* function pointer */ int p)
{
    /* aggregate */ int OriginalPart;
    int Firstime;
    /* line map: */
    /*   line 4283 @ +0x000 */
    /*   line 4283 @ +0x000 */
    /*   line 4286 @ +0x000 */
    /*   line 4290 @ +0x000 */
    /*   line 4294 @ +0x000 */
    /*   line 4295 @ +0x000 */
    /*   line 4296 @ +0x000 */
    /*   line 4300 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001e1160  size: 8 bytes */
void AGO2_vTestWall(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3941–4057 */
/* addr: 0x001e1170  size: 1484 bytes */
void AGO2_DisplayAuraStorm(AGO2_Part_* p)
{
    int HalfSphere;
    float* p_fCosTable;
    float fi;
    float basey;
    float basex;
    float time;
    float s4;
    float c4;
    float s3;
    float c3;
    float s2;
    float c2;
    float s1;
    float c1;
    float anglez2;
    float anglex2;
    float anglez;
    float anglex;
    float radius;
    unsigned int i;
    /* aggregate */ int PMIDHIGH;
    /* aggregate */ int PMID;
    /* aggregate */ int P4;
    /* aggregate */ int P3;
    /* line map: */
    /*   line 3941 @ +0x000 */
    /*   line 3941 @ +0x000 */
    /*   line 3941 @ +0x000 */
    /*   line 3952 @ +0x000 */
    /*   line 3952 @ +0x000 */
    /*   line 3944 @ +0x000 */
    /*   line 3944 @ +0x000 */
    /*   line 3941 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3838–3905 */
/* addr: 0x001e1740  size: 980 bytes */
void AGO2_DisplayCylinder(AGO2_Part_* p)
{
    float xNorm;
    float OldV;
    float CurrentV;
    AGO_V4D_ FirstP2;
    AGO_V4D_ FirstP1;
    AGO_V4D_ P4;
    AGO_V4D_ P3;
    AGO_V4D_ P2;
    AGO_V4D_ P1;
    AGO_V4D_ V2;
    AGO_V4D_ V1;
    AGO_V4D_ DirVect;
    float s1;
    float c1;
    float angle;
    float radius;
    /* line map: */
    /*   line 3842 @ +0x000 */
    /*   line 3842 @ +0x000 */
    /*   line 3838 @ +0x000 */
    /*   line 3838 @ +0x000 */
    /*   line 3842 @ +0x000 */
    /*   line 3840 @ +0x000 */
    /*   line 3844 @ +0x000 */
    /*   line 3876 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3823–3823 */
/* addr: 0x001e1b20  size: 16 bytes */
void AGO2_ProcessDieAtOnce(AGO2_Part_* p)
{
    /* line map: */
    /*   line 3823 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3817–3817 */
/* addr: 0x001e1b30  size: 16 bytes */
unsigned char AGO2_CreateCylinder(AGO2_Part_* p, float xParam1, float xParam2)
{
    /* line map: */
    /*   line 3817 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3749–3804 */
/* addr: 0x001e1b40  size: 572 bytes */
void AGO2_ProcessForceField(AGO2_Part_* p, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    float y;
    float sin1;
    float cos1;
    /* array */ int CenteredPoints[4];
    int FoundOneValidParticle;
    unsigned int j;
    unsigned int i;
    /* line map: */
    /*   line 3749 @ +0x000 */
    /*   line 3752 @ +0x000 */
    /*   line 3754 @ +0x000 */
    /*   line 3763 @ +0x000 */
    /*   line 3765 @ +0x000 */
    /*   line 3769 @ +0x000 */
    /*   line 3776 @ +0x000 */
    /*   line 3784 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3623–3736 */
/* addr: 0x001e1d80  size: 1220 bytes */
unsigned char AGO2_CreateForceField(AGO2_Part_* p, AGO_V4D_* Direction, float xParam1, float xParam2, float xParam3, float xParam4, unsigned int ParticleNumber, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    float SqrtOneMinusSquaredZ2;
    float SqrtOneMinusSquaredZ;
    float z2;
    float z;
    float sin2;
    float cos2;
    float sin1;
    float cos1;
    float delta;
    float AngleStep;
    float ZStep;
    float AngleNumSteps;
    unsigned int NumberOfParticlesCreated;
    unsigned int i;
    /* line map: */
    /*   line 3623 @ +0x000 */
    /*   line 3625 @ +0x000 */
    /*   line 3629 @ +0x000 */
    /*   line 3629 @ +0x000 */
    /*   line 3634 @ +0x000 */
    /*   line 3637 @ +0x000 */
    /*   line 3645 @ +0x000 */
    /*   line 3645 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3464–3603 */
/* addr: 0x001e2250  size: 856 bytes */
void AGO2_DisplayIce(AGO2_Part_* p)
{
    /* aggregate */ int Temp3;
    /* aggregate */ int Temp2;
    /* aggregate */ int Temp1;
    float radius;
    /* line map: */
    /*   line 3464 @ +0x000 */
    /*   line 3464 @ +0x000 */
    /*   line 3469 @ +0x000 */
    /*   line 3465 @ +0x000 */
    /*   line 3465 @ +0x000 */
    /*   line 3468 @ +0x000 */
    /*   line 3464 @ +0x000 */
    /*   line 3469 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3384–3453 */
/* addr: 0x001e25b0  size: 552 bytes */
void DisplayIcePic(AGO2_Part_* p, float radius, float smallRadius, /* function pointer */ int Temp1, /* function pointer */ int Temp2, /* function pointer */ int Temp3)
{
    /* aggregate */ int SourceVtx3;
    /* aggregate */ int SourceVtx2;
    /* aggregate */ int SourceVtx1;
    /* aggregate */ int DestVtx;
    /* line map: */
    /*   line 3384 @ +0x000 */
    /*   line 3384 @ +0x000 */
    /*   line 3384 @ +0x000 */
    /*   line 3384 @ +0x000 */
    /*   line 3384 @ +0x000 */
    /*   line 3384 @ +0x000 */
    /*   line 3401 @ +0x000 */
    /*   line 3384 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3357–3357 */
/* addr: 0x001e27e0  size: 16 bytes */
void AGO2_ProcessIce(AGO2_Part_* p)
{
    /* line map: */
    /*   line 3357 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3351–3351 */
/* addr: 0x001e27f0  size: 12 bytes */
unsigned char AGO2_CreateIce(AGO2_Part_* p, float xParam1)
{
    /* line map: */
    /*   line 3351 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3309–3345 */
/* addr: 0x001e2800  size: 216 bytes */
void AGO2_DisplayBalloon(AGO2_Part_* p, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    unsigned int i;
    /* line map: */
    /*   line 3309 @ +0x000 */
    /*   line 3312 @ +0x000 */
    /*   line 3314 @ +0x000 */
    /*   line 3321 @ +0x000 */
    /*   line 3325 @ +0x000 */
    /*   line 3340 @ +0x000 */
    /*   line 3345 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3263–3296 */
/* addr: 0x001e28e0  size: 224 bytes */
void AGO2_DisplayForceField(/* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    unsigned int i;
    /* line map: */
    /*   line 3263 @ +0x000 */
    /*   line 3266 @ +0x000 */
    /*   line 3268 @ +0x000 */
    /*   line 3275 @ +0x000 */
    /*   line 3279 @ +0x000 */
    /*   line 3294 @ +0x000 */
    /*   line 3296 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3170–3250 */
/* addr: 0x001e29c0  size: 1096 bytes */
void AGO2_ProcessBalloon(AGO2_Part_* p, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    float delta;
    float zz;
    float yy;
    float xx;
    float sin1;
    float cos1;
    float z;
    float y;
    float x;
    /* array */ int CenteredPoints[4];
    int FoundOneValidParticle;
    unsigned int j;
    unsigned int i;
    /* line map: */
    /*   line 3170 @ +0x000 */
    /*   line 3173 @ +0x000 */
    /*   line 3175 @ +0x000 */
    /*   line 3184 @ +0x000 */
    /*   line 3184 @ +0x000 */
    /*   line 3192 @ +0x000 */
    /*   line 3192 @ +0x000 */
    /*   line 3192 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2979–3157 */
/* addr: 0x001e2e10  size: 2388 bytes */
unsigned char AGO2_CreateBalloon(AGO2_Part_* p, AGO_V4D_* Direction, float xParam1, float xParam2, float xParam3, unsigned int ParticleNumber, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    float xNorm;
    int y;
    int x;
    int y;
    int x;
    int j;
    float SqrtOneMinusSquaredZ2;
    float SqrtOneMinusSquaredZ;
    float z2;
    float z;
    float sin2;
    float cos2;
    float sin1;
    float cos1;
    float delta;
    float AngleStep;
    float ZStep;
    float AngleNumSteps;
    unsigned int NumberOfParticlesCreated;
    unsigned int i;
    /* line map: */
    /*   line 2979 @ +0x000 */
    /*   line 2981 @ +0x000 */
    /*   line 2985 @ +0x000 */
    /*   line 2985 @ +0x000 */
    /*   line 2990 @ +0x000 */
    /*   line 2993 @ +0x000 */
    /*   line 3001 @ +0x000 */
    /*   line 3001 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2795–2935 */
/* addr: 0x001e3770  size: 1896 bytes */
void AGO2_DisplayFFWhirl(AGO2_Part_* p)
{
    float CurrentAngle;
    float AlphaVal;
    float CurrentHeight;
    float sin1;
    float cos1;
    float p2h[3];
    float p2b[3];
    float p1h[3];
    float p1b[3];
    int j;
    int i;
    /* line map: */
    /*   line 2795 @ +0x000 */
    /*   line 2795 @ +0x000 */
    /*   line 2802 @ +0x000 */
    /*   line 2805 @ +0x000 */
    /*   line 2795 @ +0x000 */
    /*   line 2801 @ +0x000 */
    /*   line 2795 @ +0x000 */
    /*   line 2805 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2666–2775 */
/* addr: 0x001e3ee0  size: 1652 bytes */
void AGO2_DisplayFFRing(AGO2_Part_* p)
{
    float CurrentAngle;
    float AlphaVal;
    float CurrentHeight;
    float sin1;
    float cos1;
    float p2h[3];
    float p2b[3];
    float p1h[3];
    float p1b[3];
    int j;
    int i;
    /* line map: */
    /*   line 2666 @ +0x000 */
    /*   line 2666 @ +0x000 */
    /*   line 2669 @ +0x000 */
    /*   line 2669 @ +0x000 */
    /*   line 2666 @ +0x000 */
    /*   line 2666 @ +0x000 */
    /*   line 2671 @ +0x000 */
    /*   line 2674 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2647–2649 */
/* addr: 0x001e4560  size: 28 bytes */
unsigned char AGO2_CreateFFRing(AGO2_Part_* p, float xParam1)
{
    /* line map: */
    /*   line 2647 @ +0x000 */
    /*   line 2649 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2557–2640 */
/* addr: 0x001e4580  size: 1072 bytes */
void AGO2_DisplayFireWall2(AGO2_Part_* p)
{
    int y;
    float TimeDif;
    float V1;
    float U1;
    int CurrentAnim;
    int i;
    /* aggregate */ int Pos;
    float xNorm;
    float xNorm;
    float xNorm;
    /* aggregate */ int v2;
    /* aggregate */ int v1;
    /* aggregate */ int pdir;
    /* line map: */
    /*   line 2557 @ +0x000 */
    /*   line 2557 @ +0x000 */
    /*   line 2557 @ +0x000 */
    /*   line 2564 @ +0x000 */
    /*   line 2568 @ +0x000 */
    /*   line 2572 @ +0x000 */
    /*   line 2567 @ +0x000 */
    /*   line 2568 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2466–2548 */
/* addr: 0x001e49b0  size: 1136 bytes */
void AGO2_DisplayFireWall(AGO2_Part_* p)
{
    int y;
    float TimeDif;
    float V1;
    float U1;
    int CurrentAnim;
    int i;
    /* aggregate */ int Pos;
    float xNorm;
    float xNorm;
    float xNorm;
    /* aggregate */ int v2;
    /* aggregate */ int v1;
    /* aggregate */ int pdir;
    /* line map: */
    /*   line 2466 @ +0x000 */
    /*   line 2466 @ +0x000 */
    /*   line 2466 @ +0x000 */
    /*   line 2473 @ +0x000 */
    /*   line 2477 @ +0x000 */
    /*   line 2481 @ +0x000 */
    /*   line 2476 @ +0x000 */
    /*   line 2477 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2334–2364 */
/* addr: 0x001e4e20  size: 276 bytes */
unsigned char AGO2_CreateFireWall(AGO2_Part_* p, float xParam1, AGO2_Part_* pp)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    unsigned int i;
    unsigned int Found;
    /* line map: */
    /*   line 2334 @ +0x000 */
    /*   line 2338 @ +0x000 */
    /*   line 2343 @ +0x000 */
    /*   line 2345 @ +0x000 */
    /*   line 2349 @ +0x000 */
    /*   line 2349 @ +0x000 */
    /*   line 2352 @ +0x000 */
    /*   line 2353 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001e4f40  size: 8 bytes */
void AGO2_ProcessEmpty(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2306–2314 */
/* addr: 0x001e4f50  size: 100 bytes */
void AGO2_ShrinkFire(AGO2_Part_* p)
{
    float Value;
    /* line map: */
    /*   line 2308 @ +0x000 */
    /*   line 2306 @ +0x000 */
    /*   line 2309 @ +0x000 */
    /*   line 2314 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2257–2300 */
/* addr: 0x001e4fc0  size: 244 bytes */
void AGO2_FadeFire(AGO2_Part_* p, /* function pointer */ int param1)
{
    float TimeDiffTrsp;
    unsigned int OneIsAlive;
    unsigned int i;
    /* line map: */
    /*   line 2257 @ +0x000 */
    /*   line 2260 @ +0x000 */
    /*   line 2264 @ +0x000 */
    /*   line 2267 @ +0x000 */
    /*   line 2273 @ +0x000 */
    /*   line 2273 @ +0x000 */
    /*   line 2277 @ +0x000 */
    /*   line 2281 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2208–2248 */
/* addr: 0x001e50c0  size: 280 bytes */
void AGO2_ProcessFire(AGO2_Part_* p, /* function pointer */ int param1)
{
    float TimeDiff;
    float LocalG;
    unsigned int i;
    /* line map: */
    /*   line 2208 @ +0x000 */
    /*   line 2211 @ +0x000 */
    /*   line 2215 @ +0x000 */
    /*   line 2218 @ +0x000 */
    /*   line 2230 @ +0x000 */
    /*   line 2234 @ +0x000 */
    /*   line 2234 @ +0x000 */
    /*   line 2239 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2153–2197 */
/* addr: 0x001e51e0  size: 644 bytes */
unsigned char AGO2_CreateFire(AGO2_Part_* p, AGO_V4D_* Position, unsigned int ParticleNumber, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    unsigned int i;
    /* line map: */
    /*   line 2153 @ +0x000 */
    /*   line 2155 @ +0x000 */
    /*   line 2159 @ +0x000 */
    /*   line 2159 @ +0x000 */
    /*   line 2164 @ +0x000 */
    /*   line 2167 @ +0x000 */
    /*   line 2172 @ +0x000 */
    /*   line 2175 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2120–2133 */
/* addr: 0x001e5470  size: 108 bytes */
void AGO2_DisplayBees(AGO2_Part_* p, /* function pointer */ int pParticleArray)
{
    /* line map: */
    /*   line 2120 @ +0x000 */
    /*   line 2126 @ +0x000 */
    /*   line 2129 @ +0x000 */
    /*   line 2133 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2064–2112 */
/* addr: 0x001e54e0  size: 1104 bytes */
void AGO2_ProcessBees(AGO2_Part_* p, /* function pointer */ int pParticleArray)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int v2;
    float Val;
    float TimeDiff;
    unsigned int i;
    /* line map: */
    /*   line 2064 @ +0x000 */
    /*   line 2067 @ +0x000 */
    /*   line 2071 @ +0x000 */
    /*   line 2074 @ +0x000 */
    /*   line 2078 @ +0x000 */
    /*   line 2082 @ +0x000 */
    /*   line 2085 @ +0x000 */
    /*   line 2085 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1993–2052 */
/* addr: 0x001e5930  size: 1140 bytes */
unsigned char AGO2_CreateBees(unsigned int ulParticleType, AGO2_Part_* p, AGO_V4D_* Position, unsigned int ParticleNumber, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    float* p2;
    float* p1;
    float RandomValueZ;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    unsigned int i;
    /* line map: */
    /*   line 1993 @ +0x000 */
    /*   line 1993 @ +0x000 */
    /*   line 1997 @ +0x000 */
    /*   line 1994 @ +0x000 */
    /*   line 1994 @ +0x000 */
    /*   line 1997 @ +0x000 */
    /*   line 1993 @ +0x000 */
    /*   line 1993 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1962–1975 */
/* addr: 0x001e5db0  size: 104 bytes */
void AGO2_DisplayLeaves(AGO2_Part_* p, /* function pointer */ int pParticleArray)
{
    /* line map: */
    /*   line 1962 @ +0x000 */
    /*   line 1968 @ +0x000 */
    /*   line 1971 @ +0x000 */
    /*   line 1975 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1812–1953 */
/* addr: 0x001e5e20  size: 3104 bytes */
void AGO2_ProcessLeavesParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit(AGO2_Part_* p, /* function pointer */ int pParticleArray)
{
    float xNorm;
    float xNorm;
    float xNorm;
    /* aggregate */ int V2;
    float RandomValueZ;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    float xNorm;
    float xNorm;
    float xNorm;
    float xNorm;
    float sin1;
    float cos1;
    /* aggregate */ int Norm;
    float Dot2;
    float Dot1;
    AGO_V4D_ v1;
    float TimeDiff;
    int i;
    /* line map: */
    /*   line 1812 @ +0x000 */
    /*   line 1815 @ +0x000 */
    /*   line 1819 @ +0x000 */
    /*   line 1822 @ +0x000 */
    /*   line 1832 @ +0x000 */
    /*   line 1842 @ +0x000 */
    /*   line 1849 @ +0x000 */
    /*   line 1849 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1702–1796 */
/* addr: 0x001e6a40  size: 2288 bytes */
unsigned char AGO2_CreateSerialCameraParticleLeaves(unsigned int ulParticleType, AGO2_Part_* p, AGO_V4D_* Position, AGO_V4D_* Direction, unsigned int ParticleNumber, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    float xNorm;
    float xNorm;
    float xNorm;
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    /* aggregate */ int V2;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    unsigned int i;
    /* line map: */
    /*   line 1702 @ +0x000 */
    /*   line 1705 @ +0x000 */
    /*   line 1702 @ +0x000 */
    /*   line 1705 @ +0x000 */
    /*   line 1705 @ +0x000 */
    /*   line 1703 @ +0x000 */
    /*   line 1703 @ +0x000 */
    /*   line 1702 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1610–1680 */
/* addr: 0x001e7330  size: 1404 bytes */
void AGO2_ProcessSnowParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit(AGO2_Part_* p, float RandomValueZ, float RandomValueY, float RandomValueX, float RandomValue, float xNorm, AGO_V4D_ v1, float TimeDiff, float LocalG, int i, /* function pointer */ int pParticleArray)
{
    /* line map: */
    /*   line 1610 @ +0x000 */
    /*   line 1613 @ +0x000 */
    /*   line 1617 @ +0x000 */
    /*   line 1620 @ +0x000 */
    /*   line 1630 @ +0x000 */
    /*   line 1632 @ +0x000 */
    /*   line 1632 @ +0x000 */
    /*   line 1637 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1538–1598 */
/* addr: 0x001e78b0  size: 1176 bytes */
unsigned char AGO2_CreateSerialCameraParticleSnow(unsigned int ulParticleType, AGO2_Part_* p, AGO_V4D_* Position, AGO_V4D_* Direction, unsigned int ParticleNumber, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    unsigned int i;
    /* line map: */
    /*   line 1538 @ +0x000 */
    /*   line 1541 @ +0x000 */
    /*   line 1541 @ +0x000 */
    /*   line 1540 @ +0x000 */
    /*   line 1543 @ +0x000 */
    /*   line 1546 @ +0x000 */
    /*   line 1548 @ +0x000 */
    /*   line 1552 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1505–1519 */
/* addr: 0x001e7d50  size: 112 bytes */
void AGO2_DisplayRainParticleSpriteGroup(AGO2_Part_* p, /* function pointer */ int pParticleArray)
{
    /* line map: */
    /*   line 1505 @ +0x000 */
    /*   line 1511 @ +0x000 */
    /*   line 1514 @ +0x000 */
    /*   line 1519 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1426–1499 */
/* addr: 0x001e7dc0  size: 1092 bytes */
void AGO2_ProcessRainNearCameraParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit(AGO2_Part_* p)
{
    float RandomValueZ;
    float RandomValueY;
    float RandomValueX;
    /* line map: */
    /*   line 1426 @ +0x000 */
    /*   line 1429 @ +0x000 */
    /*   line 1433 @ +0x000 */
    /*   line 1436 @ +0x000 */
    /*   line 1446 @ +0x000 */
    /*   line 1451 @ +0x000 */
    /*   line 1451 @ +0x000 */
    /*   line 1457 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1341–1414 */
/* addr: 0x001e8210  size: 1092 bytes */
void AGO2_ProcessRainParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit(AGO2_Part_* p, /* function pointer */ int pParticleArray)
{
    float RandomValueZ;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    float xNorm;
    AGO_V4D_ v1;
    float TimeDiff;
    float LocalG;
    unsigned int i;
    /* line map: */
    /*   line 1341 @ +0x000 */
    /*   line 1344 @ +0x000 */
    /*   line 1348 @ +0x000 */
    /*   line 1351 @ +0x000 */
    /*   line 1361 @ +0x000 */
    /*   line 1366 @ +0x000 */
    /*   line 1366 @ +0x000 */
    /*   line 1372 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1275–1329 */
/* addr: 0x001e8660  size: 920 bytes */
unsigned char AGO2_CreateSerialCameraParticleRain(unsigned int ulParticleType, AGO2_Part_* p, AGO_V4D_* Position, AGO_V4D_* Direction, unsigned int ParticleNumber, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    unsigned int i;
    /* line map: */
    /*   line 1275 @ +0x000 */
    /*   line 1278 @ +0x000 */
    /*   line 1275 @ +0x000 */
    /*   line 1278 @ +0x000 */
    /*   line 1278 @ +0x000 */
    /*   line 1276 @ +0x000 */
    /*   line 1276 @ +0x000 */
    /*   line 1275 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1254–1256 */
/* addr: 0x001e8a00  size: 68 bytes */
void AGO2_DisplayLightning(AGO2_Part_* p)
{
    /* line map: */
    /*   line 1254 @ +0x000 */
    /*   line 1256 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001e8a50  size: 8 bytes */
void AGO2_ProcessLightning(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1239–1244 */
/* addr: 0x001e8a60  size: 40 bytes */
unsigned char AGO2_CreateLightning(AGO2_Part_* p)
{
    /* line map: */
    /*   line 1239 @ +0x000 */
    /*   line 1242 @ +0x000 */
    /*   line 1244 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1180–1223 */
/* addr: 0x001e8a90  size: 244 bytes */
void AGO2_FadeFlow(AGO2_Part_* p, /* function pointer */ int param1)
{
    float TimeDiffTrsp;
    unsigned int OneIsAlive;
    unsigned int i;
    /* line map: */
    /*   line 1180 @ +0x000 */
    /*   line 1183 @ +0x000 */
    /*   line 1187 @ +0x000 */
    /*   line 1190 @ +0x000 */
    /*   line 1196 @ +0x000 */
    /*   line 1196 @ +0x000 */
    /*   line 1200 @ +0x000 */
    /*   line 1204 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1158–1171 */
/* addr: 0x001e8b90  size: 104 bytes */
void AGO2_DisplayFlowMotionBlur(AGO2_Part_* p, /* function pointer */ int pParticleArray)
{
    /* line map: */
    /*   line 1158 @ +0x000 */
    /*   line 1164 @ +0x000 */
    /*   line 1167 @ +0x000 */
    /*   line 1171 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1138–1151 */
/* addr: 0x001e8c00  size: 104 bytes */
void AGO2_DisplayFlow(AGO2_Part_* p, /* function pointer */ int pParticleArray)
{
    /* line map: */
    /*   line 1138 @ +0x000 */
    /*   line 1144 @ +0x000 */
    /*   line 1147 @ +0x000 */
    /*   line 1151 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1089–1130 */
/* addr: 0x001e8c70  size: 344 bytes */
void AGO2_ProcessFlow(AGO2_Part_* p, /* function pointer */ int param1)
{
    float TimeDiff;
    float LocalG;
    unsigned int i;
    /* line map: */
    /*   line 1089 @ +0x000 */
    /*   line 1092 @ +0x000 */
    /*   line 1096 @ +0x000 */
    /*   line 1099 @ +0x000 */
    /*   line 1108 @ +0x000 */
    /*   line 1105 @ +0x000 */
    /*   line 1108 @ +0x000 */
    /*   line 1113 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1033–1079 */
/* addr: 0x001e8dd0  size: 480 bytes */
unsigned char AGO2_CreateFlow(AGO2_Part_* p, AGO_V4D_* Position, AGO_V4D_* Direction, unsigned int ParticleNumber, /* function pointer */ int pParticleArrayOrg, /* function pointer */ int pParticleArray)
{
    unsigned int i;
    /* line map: */
    /*   line 1033 @ +0x000 */
    /*   line 1035 @ +0x000 */
    /*   line 1039 @ +0x000 */
    /*   line 1039 @ +0x000 */
    /*   line 1044 @ +0x000 */
    /*   line 1047 @ +0x000 */
    /*   line 1052 @ +0x000 */
    /*   line 1052 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1006–1009 */
/* addr: 0x001e8fb0  size: 116 bytes */
void AGO2_ShrinkNormal(AGO2_Part_* p)
{
    /* line map: */
    /*   line 1007 @ +0x000 */
    /*   line 1006 @ +0x000 */
    /*   line 1009 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 951–960 */
/* addr: 0x001e9030  size: 104 bytes */
void AGO2_FadeNormal(AGO2_Part_* p)
{
    /* line map: */
    /*   line 951 @ +0x000 */
    /*   line 951 @ +0x000 */
    /*   line 954 @ +0x000 */
    /*   line 956 @ +0x000 */
    /*   line 960 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001e90a0  size: 8 bytes */
unsigned char AGO2_CreateOrdinaryParticle(void)
{
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 922–924 */
/* addr: 0x001e90b0  size: 108 bytes */
void AGO2_ProcessSimpleParticleWithSpeedAndGravity(AGO2_Part_* p)
{
    /* line map: */
    /*   line 922 @ +0x000 */
    /*   line 924 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 897–905 */
/* addr: 0x001e9120  size: 88 bytes */
void AGO2_DisplayOrdinarySprite(AGO2_Part_* p)
{
    /* line map: */
    /*   line 897 @ +0x000 */
    /*   line 905 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 804–813 */
/* addr: 0x001e9180  size: 88 bytes */
void AGO2_vClearParticlesOfThatTypeWithChannel(unsigned int PartType, unsigned int Channel)
{
    unsigned int i;
    /* line map: */
    /*   line 804 @ +0x000 */
    /*   line 807 @ +0x000 */
    /*   line 811 @ +0x000 */
    /*   line 813 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 790–799 */
/* addr: 0x001e91e0  size: 80 bytes */
void AGO2_vClearParticlesOfThatType(unsigned int PartType)
{
    unsigned int i;
    /* line map: */
    /*   line 790 @ +0x000 */
    /*   line 793 @ +0x000 */
    /*   line 796 @ +0x000 */
    /*   line 797 @ +0x000 */
    /*   line 799 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 782–786 */
/* addr: 0x001e9230  size: 108 bytes */
void AGO2_bIsTypeAlreadyExists(unsigned int PartType)
{
    unsigned int i;
    /* line map: */
    /*   line 782 @ +0x000 */
    /*   line 784 @ +0x000 */
    /*   line 786 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 691–776 */
/* addr: 0x001e92a0  size: 1008 bytes */
void AGO2_vDisplayAllParts(/* function pointer */ int _p_stViewport, AGO2_Part_* p)
{
    unsigned int SkipThisOne;
    unsigned int DisplayPending;
    unsigned int NextMaterialIndex;
    void* pCurrentMaterial;
    unsigned int BaseID;
    int Found;
    float xAlphaTemp;
    unsigned int j;
    unsigned int i;
    /* line map: */
    /*   line 691 @ +0x000 */
    /*   line 694 @ +0x000 */
    /*   line 699 @ +0x000 */
    /*   line 707 @ +0x000 */
    /*   line 706 @ +0x000 */
    /*   line 711 @ +0x000 */
    /*   line 713 @ +0x000 */
    /*   line 715 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 639–655 */
/* addr: 0x001e9690  size: 160 bytes */
void AGO2_vProcessAllParts(AGO2_Part_* p)
{
    unsigned int i;
    /* line map: */
    /*   line 639 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 647 @ +0x000 */
    /*   line 653 @ +0x000 */
    /*   line 655 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 591–622 */
/* addr: 0x001e9730  size: 196 bytes */
void AGO2_vDestroyAllParts(AGO2_Part_* pdst, AGO2_Part_* psrc)
{
    unsigned int Limit;
    unsigned int NumToSkip;
    unsigned int Source;
    /* line map: */
    /*   line 597 @ +0x000 */
    /*   line 597 @ +0x000 */
    /*   line 592 @ +0x000 */
    /*   line 591 @ +0x000 */
    /*   line 601 @ +0x000 */
    /*   line 605 @ +0x000 */
    /*   line 611 @ +0x000 */
    /*   line 615 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 527–577 */
/* addr: 0x001e9800  size: 700 bytes */
void AGO2_vCreatePart(unsigned int ulParticleType, AGO_V4D_* Position, AGO_V4D_* Direction, AGO_V4D_* Vector1, AGO_V4D_* Vector2, AGO_V4D_* Vector3, AGO_V4D_* Vector4, void* pMaterial1, void* pMaterial2, float xParam1, float xParam2, float xParam3, float xParam4, /* function pointer */ int pLaunchingCharacter, unsigned int ParticleNumber, AGO2_Part_* p)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    /* line map: */
    /*   line 527 @ +0x000 */
    /*   line 527 @ +0x000 */
    /*   line 534 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 542 @ +0x000 */
    /*   line 565 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 419–489 */
/* addr: 0x001e9ac0  size: 1668 bytes */
void AGO2_vFirstInitAndRegisterAGO2Types(void)
{
    /* line map: */
    /*   line 419 @ +0x000 */
    /*   line 419 @ +0x000 */
    /*   line 419 @ +0x000 */
    /*   line 419 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 443 @ +0x000 */
    /* TODO: decompile from asm/... */
}
