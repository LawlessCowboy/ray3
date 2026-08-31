/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct stMorphData stMorphData;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

short g_xFixIndex;
short g_xFixIndexSave;
int Global_CharacterBeingDisplayed;
int g_hFakeInstance;
unsigned int GLI_g_NbSkinsForThisCharacter;
short GLI_g_SkinIndice[4];
/* aggregate */ int GLI_g_SkinMaterials;
/* aggregate */ int gd_hFixSPOSave;
/* aggregate */ int gd_hFixSPO;
int g_p_stCurrentInCamCoordsMatrix;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
/* array */ int PS2_MatStack[51];
unsigned int PS2_MatStackIndex;
int gs_CurrentNumberOfLightInViewport;
/* aggregate */ int gs_aDEF_p_CurrentListOfLight;
unsigned char g_ucCurrentViewport;
int HIE_gs_lCurrentFrame;
unsigned int g_lNbListOfCheapCharacterList;
unsigned int SCT_g_DrawingMirrored;
/* array */ int g_aListOfCheapCharacterList[10];
int GLI_g_CurrentSkinMaterial;
int GLI_g_CurrentSkinIndex;
int Global_CharacterModuleBeingDisplayed;
char GLI_cGlobalFogIsOn;
int GeoHandle;
float VoidReal;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 434–481 */
/* addr: 0x0031ddf0  size: 408 bytes */
void SHW_fn_vInitShadow(short _hGLDDevice, int bMustAlloc, /* function pointer */ int p_hHandleGeoShwObj, /* function pointer */ int s_hShadowPolygonVisualMaterialLocal)
{
    unsigned char ucOldHMUTempBloc;
    unsigned char ucOldHMUNormalBloc;
    short* p_hHandleOfElementForShadow;
    short i;
    GEO_tdstColor_ stShadowPolygonColor;
    /* line map: */
    /*   line 434 @ +0x000 */
    /*   line 438 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 444 @ +0x000 */
    /*   line 447 @ +0x000 */
    /*   line 449 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 455 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 1395–1721 */
/* addr: 0x0031df90  size: 3044 bytes */
void HIE_fn_vSendCharacterToViewportPS2(/* function pointer */ int _hVpt, /* function pointer */ int _hSprObj, int _DrawMask, int _lCullingResult, tdst3dData_* h_3dData, /* function pointer */ int param5, tdst3dData_* h_Current3dData, /* function pointer */ int hFather, /* function pointer */ int p_stSphereCenter, /* function pointer */ int hBoundingSphere, /* function pointer */ int hChild)
{
    int lShadowCullingResult;
    float xShadowRadius;
    /* aggregate */ int stShadowCenter;
    float xHeight;
    unsigned int i;
    unsigned char bDynamicShadowOn;
    float fGlobalAlphaTemp;
    float xSphereRadius;
    unsigned int ulDrawMask;
    unsigned int ulFlags;
    unsigned int ulCustomBit;
    float xMinZone;
    float xMaxZone;
    float xTransparencyZoneMax;
    float xTransparencyZoneLevel;
    unsigned char bIsACinematicActor;
    unsigned char bOnPlatform;
    unsigned char bDisplayed;
    /* line map: */
    /*   line 1407 @ +0x000 */
    /*   line 1407 @ +0x000 */
    /*   line 1407 @ +0x000 */
    /*   line 1395 @ +0x000 */
    /*   line 1395 @ +0x000 */
    /*   line 1400 @ +0x000 */
    /*   line 1413 @ +0x000 */
    /*   line 1420 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 1359–1374 */
/* addr: 0x0031eb80  size: 884 bytes */
void HIE_fn_vSendCharacterModulesToViewPortPS2(/* function pointer */ int _hVpt, /* function pointer */ int _hSprObj, int _DrawMask, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 1359 @ +0x000 */
    /*   line 1363 @ +0x000 */
    /*   line 1363 @ +0x000 */
    /*   line 1368 @ +0x000 */
    /*   line 1371 @ +0x000 */
    /*   line 1374 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 1174–1203 */
/* addr: 0x0031ef00  size: 148 bytes */
void HIE_fn_p_stGetGeometricObjectFromSuperObject(/* function pointer */ int h_SuperObject, /* function pointer */ int p_stObject, /* function pointer */ int h_PO)
{
    float p_xThreshold;
    int lSOType;
    /* line map: */
    /*   line 1178 @ +0x000 */
    /*   line 1174 @ +0x000 */
    /*   line 1178 @ +0x000 */
    /*   line 1181 @ +0x000 */
    /*   line 1187 @ +0x000 */
    /*   line 1194 @ +0x000 */
    /*   line 1198 @ +0x000 */
    /*   line 1203 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 1093–1159 */
/* addr: 0x0031efa0  size: 312 bytes */
unsigned char HIE_fn_bSendSPOToFixViewport(/* function pointer */ int p_stFixViewportAttr, int _lDrawMask, /* function pointer */ int hSPO)
{
    char cSaveGlobalFog;
    char cSaveSinusEffectState;
    short xI;
    /* line map: */
    /*   line 1093 @ +0x000 */
    /*   line 1098 @ +0x000 */
    /*   line 1100 @ +0x000 */
    /*   line 1115 @ +0x000 */
    /*   line 1133 @ +0x000 */
    /*   line 1136 @ +0x000 */
    /*   line 1143 @ +0x000 */
    /*   line 1154 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 915–1058 */
/* addr: 0x0031f0e0  size: 1392 bytes */
void HIE_fn_vSendSPOToFixViewport(/* function pointer */ int _hVpt, /* function pointer */ int _hSprObj, int _DrawMask, int _lCullingResult, /* function pointer */ int hStdGame, /* function pointer */ int hBoundingSphere, GLI_tdstLight_* hLight, /* function pointer */ int hChild)
{
    float xPercent;
    unsigned char ucNbRLIUse;
    unsigned char ucIndex2;
    unsigned char ucIndex1;
    unsigned int ulCustomBit;
    float xSphereRadius;
    /* aggregate */ int stSphereCenter;
    unsigned char bDisplayed;
    /* line map: */
    /*   line 915 @ +0x000 */
    /*   line 915 @ +0x000 */
    /*   line 936 @ +0x000 */
    /*   line 940 @ +0x000 */
    /*   line 943 @ +0x000 */
    /*   line 946 @ +0x000 */
    /*   line 950 @ +0x000 */
    /*   line 955 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 799–886 */
/* addr: 0x0031f650  size: 740 bytes */
void HIE_fn_hFindAllMirrorsInHierarchy(/* function pointer */ int _hVpt, /* function pointer */ int _hSprObj, /* function pointer */ int p_hHandleOfMirror, /* function pointer */ int p_hHandleOfGeometricMirror, short* p_shNbOfMirrors, short shNbMaxOfMirrors, /* function pointer */ int p_stMaxPoint, /* function pointer */ int p_stMinPoint, /* function pointer */ int hParallelBox, /* function pointer */ int hBoundingSphere, /* function pointer */ int hChild)
{
    int lType;
    /* aggregate */ int stIdentityMatrix;
    /* aggregate */ int stMaxPoint;
    /* aggregate */ int stMinPoint;
    float xSphereRadius;
    /* aggregate */ int stSphereCenter;
    /* line map: */
    /*   line 802 @ +0x000 */
    /*   line 799 @ +0x000 */
    /*   line 810 @ +0x000 */
    /*   line 810 @ +0x000 */
    /*   line 814 @ +0x000 */
    /*   line 817 @ +0x000 */
    /*   line 822 @ +0x000 */
    /*   line 824 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 775–784 */
/* addr: 0x0031f940  size: 200 bytes */
int HIE_fn_bFindMirrorInHierarchy(/* function pointer */ int _hSprObj, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 775 @ +0x000 */
    /*   line 779 @ +0x000 */
    /*   line 781 @ +0x000 */
    /*   line 784 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 595–617 */
/* addr: 0x0031fa10  size: 768 bytes */
void HIE_fn_vSendCharacterDynShadowToViewPort(/* function pointer */ int _hSprObj, int _DrawMask, /* function pointer */ int hVisualSet, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 595 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 606 @ +0x000 */
    /*   line 609 @ +0x000 */
    /*   line 614 @ +0x000 */
    /*   line 617 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 350–373 */
/* addr: 0x0031fd10  size: 932 bytes */
void HIE_fn_vSendStaticWorldToViewport(/* function pointer */ int _hVpt, /* function pointer */ int _hSprObj, int _DrawMask, int _lCullingResult)
{
    /* line map: */
    /*   line 350 @ +0x000 */
    /*   line 354 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 373 @ +0x000 */
    /* TODO: decompile from asm/... */
}
