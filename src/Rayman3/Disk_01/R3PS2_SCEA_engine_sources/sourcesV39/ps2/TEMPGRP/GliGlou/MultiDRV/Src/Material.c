/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct stMorphData stMorphData;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct anon_0 anon_0;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstGliCaps_ tdstGliCaps_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct anon_1 anon_1;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;

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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
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

struct tdstGliCaps_ {
    unsigned int ulSize; /* +0x0 */
    unsigned int ulDriverCaps; /* +0x4 */
    unsigned int ulTextureCaps; /* +0x8 */
    unsigned int ulSurfaceCaps; /* +0xc */
    unsigned int ulMemoryCaps; /* +0x10 */
    unsigned int ulTextureMaxSize; /* +0x14 */
    unsigned int ulTotalTextureMemory; /* +0x18 */
    unsigned int ulTotalVideoMemory; /* +0x1c */
    unsigned int ulTotalAGPMemory; /* +0x20 */
    unsigned int ulTexturePerChannelMemory[4]; /* +0x24 */
    unsigned char ucPrimarySurfacePixelFormat; /* +0x34 */
    float fRefreshRate; /* +0x38 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

float gs_fCoefOfMultiplicationForAnimatedTexture;
unsigned int gs_lActualRefreshNumberForScolledTextures;
unsigned char g_bHasTextureAnimationFinished;
unsigned char g_bTakeCareOfAnimationCoordination;
unsigned char g_bOneShotAnim;
int g_AlphabetCharacterPointer;
float g_BaseTimeForParticleAnimation;
float gs_fCoefOfMultiplicationForScolledTextures;
tdstGliCaps_ GLI_g_stCaps;
float g_AGO_AnimTimeScale;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 2359–2359 */
/* addr: 0x002a9720  size: 24 bytes */
void fn_hGetVisualMaterialFromIndex(unsigned short uwIndex)
{
    /* line map: */
    /*   line 2359 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 950–953 */
/* addr: 0x002a9740  size: 64 bytes */
int GLI_Material_fn_lSetTextureOp(/* function pointer */ int _hVisualMat, int _lIndex, int _lTextureOp)
{
    /* line map: */
    /*   line 950 @ +0x000 */
    /*   line 952 @ +0x000 */
    /*   line 953 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 820–879 */
/* addr: 0x002a9780  size: 252 bytes */
void GLI_vRefreshMultiTexturePart(/* function pointer */ int _pst_Material, anon_0* pst_MTM)
{
    float fSin;
    float fCos;
    unsigned int i;
    /* line map: */
    /*   line 820 @ +0x000 */
    /*   line 820 @ +0x000 */
    /*   line 831 @ +0x000 */
    /*   line 833 @ +0x000 */
    /*   line 839 @ +0x000 */
    /*   line 838 @ +0x000 */
    /*   line 840 @ +0x000 */
    /*   line 879 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 785–795 */
/* addr: 0x002a9880  size: 104 bytes */
void GLI_Material_fn_vInitMultiTexturePart(/* function pointer */ int _hVisualMat, anon_0* pst_LastMTM, anon_0* pst_MTM)
{
    /* line map: */
    /*   line 785 @ +0x000 */
    /*   line 785 @ +0x000 */
    /*   line 785 @ +0x000 */
    /*   line 788 @ +0x000 */
    /*   line 791 @ +0x000 */
    /*   line 793 @ +0x000 */
    /*   line 795 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 619–714 */
/* addr: 0x002a98f0  size: 740 bytes */
void GLI_xRefreshAnimatedTexture(/* function pointer */ int hMaterial)
{
    int lSaveType;
    float fNbFramesToDisplay;
    /* line map: */
    /*   line 619 @ +0x000 */
    /*   line 622 @ +0x000 */
    /*   line 632 @ +0x000 */
    /*   line 635 @ +0x000 */
    /*   line 644 @ +0x000 */
    /*   line 644 @ +0x000 */
    /*   line 647 @ +0x000 */
    /*   line 650 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 596–601 */
/* addr: 0x002a9be0  size: 116 bytes */
void GLI_vRefreshAllCyclingTextures(float fCoefOfMultiplication)
{
    /* line map: */
    /*   line 596 @ +0x000 */
    /*   line 600 @ +0x000 */
    /*   line 599 @ +0x000 */
    /*   line 601 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a9c60  size: 8 bytes */
void GLI_vUnLockAnimatedTexture(/* function pointer */ int _hMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 572–572 */
/* addr: 0x002a9c70  size: 12 bytes */
void GLI_vLockAnimatedTexture(/* function pointer */ int _hMaterial)
{
    /* line map: */
    /*   line 572 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 494–503 */
/* addr: 0x002a9c80  size: 72 bytes */
void GLI_vSetCurrentAnimatedTextureNumber(/* function pointer */ int hMaterial, int lTextureNumber, /* function pointer */ int p_Node)
{
    int lNumber;
    /* line map: */
    /*   line 494 @ +0x000 */
    /*   line 500 @ +0x000 */
    /*   line 501 @ +0x000 */
    /*   line 503 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 474–481 */
/* addr: 0x002a9cd0  size: 72 bytes */
int GLI_lGetCurrentAnimatedTextureNumber(/* function pointer */ int hMaterial, /* function pointer */ int p_Node)
{
    int lNumber;
    /* line map: */
    /*   line 474 @ +0x000 */
    /*   line 476 @ +0x000 */
    /*   line 481 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a9d20  size: 8 bytes */
int GLI_lGetMaterialNumberOfAnimatedTexture(/* function pointer */ int hMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 369–369 */
/* addr: 0x002a9d30  size: 64 bytes */
void GLI_xSetMaterialTextureScrollingOnOff(/* function pointer */ int hMaterial, int bSwitch)
{
    /* line map: */
    /*   line 369 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 356–358 */
/* addr: 0x002a9d70  size: 28 bytes */
void GLI_xGetMaterialTextureScrollingCoef(/* function pointer */ int hMaterial, int* p_bSwitch, float* p_fUSpeed, float* p_fVSpeed)
{
    /* line map: */
    /*   line 356 @ +0x000 */
    /*   line 358 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 342–342 */
/* addr: 0x002a9d90  size: 16 bytes */
void GLI_xSetMaterialTextureDecalage(/* function pointer */ int hMaterial, int bSwitch, float fUSpeed, float fVSpeed)
{
    /* line map: */
    /*   line 342 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 326–332 */
/* addr: 0x002a9da0  size: 72 bytes */
void GLI_xSetMaterialTextureScrollingCoef(/* function pointer */ int hMaterial, int bSwitch, float fUSpeed, float fVSpeed)
{
    /* line map: */
    /*   line 326 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 330 @ +0x000 */
    /*   line 332 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 291–300 */
/* addr: 0x002a9df0  size: 124 bytes */
void GLI_xSetMaterialTexture(/* function pointer */ int hMaterial, GLI_tdstTexture_* p_stTexture)
{
    /* line map: */
    /*   line 291 @ +0x000 */
    /*   line 294 @ +0x000 */
    /*   line 297 @ +0x000 */
    /*   line 300 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a9e70  size: 8 bytes */
void GLI_vSetMaterialAsChromed(void)
{
}

/* addr: 0x002a9e80  size: 8 bytes */
void GLI_xSetMaterialType(/* function pointer */ int hMaterial, unsigned int xMType)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 235–235 */
/* addr: 0x002a9e90  size: 44 bytes */
void GLI_xGetMaterialSpecularCoef(/* function pointer */ int hMaterial, int* p_lSpecularExponent, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 235 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 227–229 */
/* addr: 0x002a9ec0  size: 96 bytes */
void GLI_xSetMaterialSpecularCoef(/* function pointer */ int hMaterial, int lSpecularExponent, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 227 @ +0x000 */
    /*   line 229 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 220–220 */
/* addr: 0x002a9f20  size: 36 bytes */
void GLI_xGetMaterialDiffuseCoef(/* function pointer */ int hMaterial, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 220 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 213–215 */
/* addr: 0x002a9f50  size: 80 bytes */
void GLI_xSetMaterialDiffuseCoef(/* function pointer */ int hMaterial, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 213 @ +0x000 */
    /*   line 215 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 206–206 */
/* addr: 0x002a9fa0  size: 36 bytes */
void GLI_xGetMaterialColor(/* function pointer */ int hMaterial, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 206 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 199–201 */
/* addr: 0x002a9fd0  size: 80 bytes */
void GLI_xSetMaterialColor(/* function pointer */ int hMaterial, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 199 @ +0x000 */
    /*   line 201 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 192–192 */
/* addr: 0x002aa020  size: 36 bytes */
void GLI_xGetMaterialAmbientCoef(/* function pointer */ int hMaterial, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 192 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Material.c lines 180–184 */
/* addr: 0x002aa050  size: 152 bytes */
void GLI_xSetMaterialAmbientCoef(/* function pointer */ int hMaterial, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 180 @ +0x000 */
    /*   line 184 @ +0x000 */
    /* TODO: decompile from asm/... */
}
