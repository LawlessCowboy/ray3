/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLLights.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct stMorphData stMorphData;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

float light_ambient0[4];
float light_specular0[4];
float ambientMaterial[4];
float GLI_g_AmbientLight[4];
float GLI_g_LightPositions[4][4];
float GLI_g_LightColors[4][4];
float GhostAmbient[4];
float GhostParallel1[4];
float GhostParallel2[4];
float vZeroVect[4];
float GLI_g_DefaultAmbient[4];
float GLI_g_MaxAmbient[4];
float vZeroMatrix[4][4];
int glob;
int GLOB_p_stLight;
int gs_CurrentNumberOfLightInViewport;
unsigned char g_ucTableOfActiveLightsForChar[300];
/* aggregate */ int gs_aDEF_p_CurrentListOfLight;
unsigned int GLI_g_ExcluLightIsOn;
int GLI_BIG_GLOBALS_gs_st_CameraMatrix;
int g_p_stCurrentMatrix;
int GLI_BIG_GLOBALS_p_stObj;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLLights.cpp lines 20–77 */
/* addr: 0x002db3a0  size: 368 bytes */
void GLI_vGetVertexPointersFromSDCStructure(/* function pointer */ int pSDC, unsigned int iElement, float (*) pVOrg[4], float (*) pUV1[4], float (*) pUV2[4], float (*) pUVChrome[4], float (*) pNormals[4], /* function pointer */ int hVisualMaterial, float (*) pVA[4])
{
    unsigned int Type;
    unsigned int LayerTypes;
    unsigned int bMultiTexture;
    unsigned int NbStages;
    unsigned int stage;
    unsigned int NbVerticesAlignedUVs;
    unsigned int NbVerticesAligned;
    unsigned int NbVertices;
    /* line map: */
    /*   line 22 @ +0x000 */
    /*   line 20 @ +0x000 */
    /*   line 23 @ +0x000 */
    /*   line 27 @ +0x000 */
    /*   line 32 @ +0x000 */
    /*   line 42 @ +0x000 */
    /*   line 44 @ +0x000 */
    /*   line 48 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLLights.cpp lines 949–1076 */
/* addr: 0x002db510  size: 564 bytes */
void GLIPS2_vManageLightsForThisCharacter(/* function pointer */ int _hVpt, /* function pointer */ int _hSprObj, int bBoundingSphere, float xSphereRadius, GLI_tdstLight_* ppLights)
{
    float xSquare;
    unsigned char* pLightActivity;
    int iCpt;
    /* line map: */
    /*   line 949 @ +0x000 */
    /*   line 950 @ +0x000 */
    /*   line 949 @ +0x000 */
    /*   line 954 @ +0x000 */
    /*   line 959 @ +0x000 */
    /*   line 964 @ +0x000 */
    /*   line 961 @ +0x000 */
    /*   line 962 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLLights.cpp lines 793–896 */
/* addr: 0x002db750  size: 592 bytes */
void GLI_vCalculateLightingMatricesForCheap(/* function pointer */ int _hSprObj, /* function pointer */ int pMat, float (*) LightColor[4][4], float (*) LightPos[4][4], float (*) AmbientLight[4])
{
    float Diffuse[4];
    /* line map: */
    /*   line 802 @ +0x000 */
    /*   line 793 @ +0x000 */
    /*   line 802 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 793 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 806 @ +0x000 */
    /*   line 809 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLLights.cpp lines 511–788 */
/* addr: 0x002db9a0  size: 912 bytes */
void GLI_vCalculateLightingMatrices(/* function pointer */ int pMat, float (*) LightColor[4][4], float (*) LightPos[4][4], float (*) AmbientLight[4], GLI_tdstLight_* p_stLight)
{
    float Diffuse[4];
    unsigned char* Local_ucTableOfActiveLightsForChar;
    unsigned int NoAmbient;
    unsigned int CurrentLightID;
    unsigned int NbLights;
    unsigned int lLightsCounter;
    /* line map: */
    /*   line 525 @ +0x000 */
    /*   line 525 @ +0x000 */
    /*   line 513 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 516 @ +0x000 */
    /*   line 516 @ +0x000 */
    /*   line 517 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLLights.cpp lines 428–491 */
/* addr: 0x002dbd30  size: 356 bytes */
void GLI_vCalculateLightingMatricesGhost(void)
{
    /* aggregate */ int TempMat;
    float fNorm;
    /* aggregate */ int stVect2;
    /* aggregate */ int stVect;
    /* line map: */
    /*   line 428 @ +0x000 */
    /*   line 428 @ +0x000 */
    /*   line 431 @ +0x000 */
    /*   line 433 @ +0x000 */
    /*   line 438 @ +0x000 */
    /*   line 440 @ +0x000 */
    /*   line 455 @ +0x000 */
    /*   line 458 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLLights.cpp lines 323–412 */
/* addr: 0x002dbea0  size: 372 bytes */
int GLI_vSetParaSphericalLight__FP14GLI_tdstLight_UiPA4_A4_fPA4_A4_fPA4_f(GLI_tdstLight_* pLight, unsigned int LightID, float (*) LightPos[4][4], float (*) LightColor[4][4])
{
    /* aggregate */ int stVect;
    float xDamp;
    float fNorm;
    /* line map: */
    /*   line 323 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 326 @ +0x000 */
    /*   line 328 @ +0x000 */
    /*   line 330 @ +0x000 */
    /*   line 334 @ +0x000 */
    /*   line 336 @ +0x000 */
    /*   line 339 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLLights.cpp lines 146–310 */
/* addr: 0x002dc020  size: 400 bytes */
int GLI_vSetSphericalLight__FP14GLI_tdstLight_UiPA4_A4_fPA4_A4_fPA4_f(GLI_tdstLight_* pLight, unsigned int LightID, float (*) LightPos[4][4], float (*) LightColor[4][4], float (*) AmbientLight[4])
{
    float TempVect[4];
    float xDamp;
    float fNorm;
    /* line map: */
    /*   line 146 @ +0x000 */
    /*   line 152 @ +0x000 */
    /*   line 154 @ +0x000 */
    /*   line 156 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 167 @ +0x000 */
    /* TODO: decompile from asm/... */
}
