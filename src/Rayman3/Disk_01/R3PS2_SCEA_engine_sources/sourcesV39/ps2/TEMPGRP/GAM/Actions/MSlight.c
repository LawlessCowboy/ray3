/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct pointer pointer;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct tdstCouple_ tdstCouple_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct stMorphData stMorphData;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdstFrame3d_ tdstFrame3d_;

/* Cross-TU light helpers need their real prototypes so MWCC keeps float
 * arguments in the PS2 float ABI and can form the original tail call. */
void GLI_vGetLightAlphas(GLI_tdstLight_* p_stLight, float* p_xLittleAlpha, float* p_xBigAlpha);
void GLI_vSetLightAlphas(GLI_tdstLight_* p_stLight, float xLittleAlpha, float xBigAlpha);
void GLI_vSetLightNearFar(GLI_tdstLight_* p_stLight, float xNear, float xFar);
void GLI_xSetLightColor(GLI_tdstLight_* p_stLight, GEO_tdstColor_* p_stColor);

typedef enum MAT_tdeTranformationType_ {
    MAT_eTransform_Uninitialized = 0,
    MAT_eTransform_Identity = 1,
    MAT_eTransform_Translation = 2,
    MAT_eTransform_Zoom = 3,
    MAT_eTransform_Scale = 4,
    MAT_eTransform_Rotation = 5,
    MAT_eTransform_RotationZoom = 6,
    MAT_eTransform_RotationScale = 7,
    MAT_eTransform_ComplexRotationScale = 8,
    MAT_eTransform_Undefined = 9,
} MAT_tdeTranformationType_;

typedef enum tdeObjectTreeInit_ {
    OTI_WhenGameStart = 0,
    OTI_MapLoaded = 1,
    OTI_ReinitTheMap = 2,
    OTI_LoadSavedGame = 3,
    OTI_PlayerDead = 4,
    OTI_WhenGoOutOfZone = 4,
    OTI_Always = 4,
    OTI_AlwaysCreated = 5,
} tdeObjectTreeInit_;

struct tdstMSLight_ {
    unsigned char bLocalLight; /* +0x0 */
    unsigned char bOnlyLocalLight; /* +0x1 */
    unsigned char bGiroPhare; /* +0x2 */
    unsigned char bPulsing; /* +0x3 */
    int stOffsetVect; /* +0x4 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x8..0xf */
    int stAngle; /* +0x10 */
    unsigned char _extractor_padding_01[8]; /* implicitly added by extractor; +0x14..0x1b */
    float xStepGiro; /* +0x1c */
    float xStepPulse; /* +0x20 */
    float xMaxRangePulse; /* +0x24 */
    float xGiroAngle; /* +0x28 */
    GLI_tdstLight_* p_stLight; /* +0x2c */
    GEO_tdstGeometricObject_* p_stVisuLight; /* +0x30 */
    SECT_tdstListOfDNMLights_* hLightInSector; /* +0x34 */
    unsigned char ucNbRLIUse; /* +0x38 */
    unsigned char ucFirstRLI; /* +0x39 */
    unsigned char ucSecondRLI; /* +0x3a */
    float ucBlendPercent; /* +0x3c */
};

struct MAT_tdstTransformation_ {
    int eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    int stTransformMatrix; /* +0x10 */
    unsigned char _extractor_padding_01[60]; /* implicitly added by extractor; +0x14..0x4f */
    int stScaleVector; /* +0x50 */
};

struct tdst3dData_ {
    tdstState_* h_InitialState; /* +0x0 */
    tdstState_* h_CurrentState; /* +0x4 */
    tdstState_* h_FirstStateOfAction; /* +0x8 */
    tdstObjectsTablesList_* h_InitialObjectsTable; /* +0xc */
    tdstObjectsTablesList_* h_CurrentObjectsTable; /* +0x10 */
    tdstFamilyList_* h_Family; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    MAT_tdstTransformation_ stGLIObjectMatrix; /* +0x20 */
    MAT_tdstTransformation_* p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    int d_ucEventActivation; /* +0x8c */
    tdstCouple_* p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    tdstState_* h_StateInLastFrame; /* +0x98 */
    tdstState_* h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    tdstAChannel_* hArrayOfChannels; /* +0xa8 */
    unsigned int ulNumberOfChannels; /* +0xac */
    tdstAChannel_* hFirstActiveChannel; /* +0xb0 */
    int stFrame3d; /* +0xb4 */
    unsigned char _extractor_padding_01[32]; /* implicitly added by extractor; +0xb8..0xd7 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphChannelList; /* +0xd8 */
    unsigned int ulStartTime; /* +0xdc */
    unsigned int ulTimeDelay; /* +0xe0 */
    unsigned int ulTimePreviousFrame; /* +0xe4 */
    float xLastFrame; /* +0xe8 */
    unsigned char bStateJustModified; /* +0xec */
    unsigned char bSkipCurrentFrame; /* +0xed */
    GLI_tdstMaterial_* p_stShadowVisualMaterial; /* +0xf0 */
    GLI_tdstTexture_* p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x114..0x11f */
    MAT_tdstTransformation_ stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    int stLightDirForDynamicShadow; /* +0x188 */
    unsigned char _extractor_padding_03[8]; /* implicitly added by extractor; +0x18c..0x193 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    int stSHWDeformationVector; /* +0x198 */
    unsigned char _extractor_padding_04[8]; /* implicitly added by extractor; +0x19c..0x1a3 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    int hForSubAnimInUseArray; /* +0x1b4 */
    unsigned char _extractor_padding_05[8]; /* implicitly added by extractor; +0x1b8..0x1bf */
    CINE_tdstCineActor_* h_CurrentCineActor; /* +0x1c0 */
    int hSkinMaterial; /* +0x1c4 */
    unsigned char _extractor_padding_06[12]; /* implicitly added by extractor; +0x1c8..0x1d3 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    int xSkinIndex; /* +0x1d8 */
};

struct tdstStandardGame_ {
    int otObjectFamilyType; /* +0x0 */
    int otObjectModelType; /* +0x4 */
    int otObjectPersonalType; /* +0x8 */
    HIE_tdstSuperObject_* h_SuperObject; /* +0xc */
    unsigned char eInitFlagWhenOutOfZone; /* +0x10 */
    unsigned char eInitFlagWhenDeadOrTaken; /* +0x11 */
    unsigned int ulLastTrame; /* +0x14 */
    unsigned int ubf32Capabilities; /* +0x18 */
    unsigned char ucTractionFactor; /* +0x1c */
    unsigned char ucHitPoints; /* +0x1d */
    unsigned char ucHitPointsMax; /* +0x1e */
    unsigned char ucHitPointsMaxMax; /* +0x1f */
    unsigned int ulCustomBits; /* +0x20 */
    unsigned int ulAICustomBits; /* +0x24 */
    unsigned char ucPlatFormType; /* +0x28 */
    unsigned char ucMiscFlags; /* +0x29 */
    unsigned char ucTransparencyZoneMin; /* +0x2a */
    unsigned char ucTransparencyZoneMax; /* +0x2b */
    unsigned int ulSaveCustomBits; /* +0x2c */
    unsigned int ulSaveAICustomBits; /* +0x30 */
    unsigned char ucSaveHitPoints; /* +0x34 */
    unsigned char ucSaveHitPointsMax; /* +0x35 */
    unsigned char ucSaveMiscFlags; /* +0x36 */
    unsigned char ucTooFarLimit; /* +0x37 */
    unsigned char ucImportance; /* +0x38 */
    unsigned char ucOptional; /* +0x39 */
    int a_xCustomFloats; /* +0x3c */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x40..0x43 */
    int a_lCustomLongs; /* +0x44 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x48..0x4b */
    int a_stCustomVectors; /* +0x4c */
};

union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject; /* +0x0 */
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    PO_tdstPhysicalObject_* p_stPhysicalObject; /* +0x0 */
    IPO_tdstInstanciatedPhysicalObject_* p_stInstanciatedPhysicalObject; /* +0x0 */
    SECT_tdstSector_* p_stSector; /* +0x0 */
    tdstEngineObject_* p_stCharacter; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    HIE_tdstModifierObject_* p_stModifierObject; /* +0x0 */
    int p_Void; /* +0x0 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    HIE_tduLinkedObject_ hLinkedObject; /* +0x4 */
    HIE_tdstSuperObject_* hFirstElementDyn; /* +0x8 */
    HIE_tdstSuperObject_* hLastElementDyn; /* +0xc */
    int lNumberOfElementsDyn; /* +0x10 */
    HIE_tdstSuperObject_* hNextBrotherDyn; /* +0x14 */
    HIE_tdstSuperObject_* hPrevBrotherDyn; /* +0x18 */
    HIE_tdstSuperObject_* hFatherDyn; /* +0x1c */
    MAT_tdstTransformation_* hLocalMatrix; /* +0x20 */
    MAT_tdstTransformation_* hGlobalMatrix; /* +0x24 */
    int lLastComputeFrame; /* +0x28 */
    int lDrawModeMask; /* +0x2c */
    unsigned int ulFlags; /* +0x30 */
    int hVisualBoundingVolume; /* +0x34 */
    int hCollideBoundingVolume; /* +0x38 */
    int stSemiLookAtVector; /* +0x3c */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x40..0x47 */
    float fTransparenceLevel; /* +0x48 */
    unsigned int ulOutlineColor; /* +0x4c */
    int lDisplayPrioriry; /* +0x50 */
    int lIL_Status; /* +0x54 */
    int stIL_AmbientColor; /* +0x58 */
    unsigned char _extractor_padding_01[8]; /* implicitly added by extractor; +0x5c..0x63 */
    int stIL_ParallelDirection; /* +0x64 */
    unsigned char _extractor_padding_02[8]; /* implicitly added by extractor; +0x68..0x6f */
    int stIL_ParallelColor; /* +0x70 */
    unsigned char _extractor_padding_03[8]; /* implicitly added by extractor; +0x74..0x7b */
    unsigned char ucSuperImposedOnWhichViewport; /* +0x7c */
    unsigned char bIsSPO; /* +0x7d */
    unsigned char xTransition; /* +0x7e */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    int xBoudingSphereCenter; /* +0x30 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x34..0x3f */
    GEO_tdstDoubledIndex_* d_stListOfEdgesDI; /* +0x40 */
    short xNbEdgesDI; /* +0x44 */
    short xNbOctreeEdges; /* +0x46 */
    int bUsedForShadowDrawing; /* +0x48 */
    int bUsedForShadowCreating; /* +0x4c */
    int pSDC_Data; /* +0x50 */
    unsigned int bIsStatic; /* +0x54 */
    unsigned int glDisplayList; /* +0x58 */
    unsigned char bVTForSinus; /* +0x5c */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct GEO_tdstParallelBox_ {
    int stMinPoint; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    int stMaxPoint; /* +0x10 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct tdstEngineObject_ {
    tdst3dData_* h_3dData; /* +0x0 */
    tdstStandardGame_* h_StandardGame; /* +0x4 */
    tdstDynam_* h_Dynam; /* +0x8 */
    tdstBrain_* h_Brain; /* +0xc */
    tdstCineinfo_* h_Cineinfo; /* +0x10 */
    tdstCollSet_* h_CollSet; /* +0x14 */
    tdstMSWay_* h_MSWay; /* +0x18 */
    tdstMSLight_* h_MSLight; /* +0x1c */
    tdstSectInfo_* h_SectInfo; /* +0x20 */
    tdstMicro_* h_Micro; /* +0x24 */
    tdstMSSound_* h_MSSound; /* +0x28 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn {
    CINE_tdstCineActor_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCineActor_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_tdstCine_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn hActorList; /* +0x0 */
    CINE_tdstCine_* hNextBrotherDyn; /* +0xc */
    CINE_tdstCine_* hPrevBrotherDyn; /* +0x10 */
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn* hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    int szName; /* +0x20 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct CINE_tdstCineActor_ {
    int stSubAnim; /* +0x0 */
    tdstSubAnimInUse_* hSubAnimInUse; /* +0x4 */
    int szAnimation; /* +0x8 */
    unsigned char _extractor_padding_00[252]; /* implicitly added by extractor; +0xc..0x107 */
    tdstEngineObject_* p_stActor; /* +0x108 */
    tdstState_* p_stStateAfterCine; /* +0x10c */
    tdstState_* p_stStateDuringCine; /* +0x110 */
    tdstState_* p_stTmpStateForActor; /* +0x114 */
    unsigned char bSkipIA; /* +0x118 */
    unsigned char bSkipMeca; /* +0x119 */
    unsigned char bPreviousIAState; /* +0x11a */
    unsigned char bPreviousMecaState; /* +0x11b */
    unsigned char ucRepeatAnimation; /* +0x11c */
    signed char scSpeedAnim; /* +0x11d */
    unsigned char bMoveActorAtTheBegin; /* +0x11e */
    HIE_tdstSuperObject_* hSPORef; /* +0x120 */
    unsigned char bMoveActorAtTheEnd; /* +0x124 */
    unsigned short usChannel; /* +0x126 */
    unsigned char bPlayingAnim; /* +0x128 */
    unsigned char bIsASubAnim; /* +0x129 */
    unsigned char bChangeComportBegin; /* +0x12a */
    tdstComport_* p_stIntelBegin; /* +0x12c */
    unsigned char bChangeReflexBegin; /* +0x130 */
    tdstComport_* p_stReflexBegin; /* +0x134 */
    unsigned char bChangeComportEnd; /* +0x138 */
    tdstComport_* p_stIntelEnd; /* +0x13c */
    unsigned char bChangeReflexEnd; /* +0x140 */
    tdstComport_* p_stReflexEnd; /* +0x144 */
    unsigned char bUseSoundRequestBegin; /* +0x148 */
    unsigned char bUseVoiceRequestBegin; /* +0x149 */
    unsigned char bUseMusicRequestBegin; /* +0x14a */
    unsigned char bUseAmbianceRequestBegin; /* +0x14b */
    _SND_tdstBlockEvent* pSoundRequestBegin; /* +0x14c */
    _SND_tdstBlockEvent* pVoiceRequestBegin; /* +0x150 */
    _SND_tdstBlockEvent* pMusicRequestBegin; /* +0x154 */
    _SND_tdstBlockEvent* pAmbianceRequestBegin; /* +0x158 */
    unsigned char bUseSoundRequestEnd; /* +0x15c */
    unsigned char bUseVoiceRequestEnd; /* +0x15d */
    unsigned char bUseMusicRequestEnd; /* +0x15e */
    unsigned char bUseAmbianceRequestEnd; /* +0x15f */
    _SND_tdstBlockEvent* pSoundRequestEnd; /* +0x160 */
    _SND_tdstBlockEvent* pVoiceRequestEnd; /* +0x164 */
    _SND_tdstBlockEvent* pMusicRequestEnd; /* +0x168 */
    _SND_tdstBlockEvent* pAmbianceRequestEnd; /* +0x16c */
    CINE_tdstCine_* pCine; /* +0x170 */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn hChannelLink; /* +0x174 */
    CINE_tdstCineActor_* hNextBrotherDyn; /* +0x180 */
    CINE_tdstCineActor_* hPrevBrotherDyn; /* +0x184 */
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn* hFatherDyn; /* +0x188 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GEO_tdstEdge_ {
    int xPoints; /* +0x0 */
    int st_VectorPoints; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct SECT_tdstSector_ {
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn stListOfCharacters; /* +0x0 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt stListOfStaticLights; /* +0xc */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn stListOfDNMLights; /* +0x14 */
    int stListOfSectorsInGraphicInteraction; /* +0x20 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x24..0x27 */
    int stListOfSectorsInCollisionInteraction; /* +0x28 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x2c..0x2f */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt stListOfSectorsInActivityInteraction; /* +0x30 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt stListOfSectorsInSoundInteraction; /* +0x38 */
    int stListOfSoundEvent; /* +0x40 */
    unsigned char _extractor_padding_02[4]; /* implicitly added by extractor; +0x44..0x47 */
    MTH3D_tdstVector_ stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    HIE_tdstSuperObject_* h_PreviousSectorInList; /* +0x70 */
    HIE_tdstSuperObject_* h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    int hTransitionSoundEvent; /* +0x90 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int uSoundEvent; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    int ucAlign; /* +0x5 */
    int a_xIndexTargetMT; /* +0x8 */
    unsigned char _extractor_padding_00[16]; /* implicitly added by extractor; +0xc..0x1b */
    int a_ucMorphingAmountMT; /* +0x1c */
};

struct tdstSubAnimInUse_ {
    tdstSubAnimInUse_* hNextBrotherDyn; /* +0x0 */
    tdstSubAnimInUse_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn* hFatherDyn; /* +0x8 */
    tdstSubAnim_* p_stTheSubAnim; /* +0xc */
    int d_ucEventActivation; /* +0x10 */
    unsigned int ulStartFrame; /* +0x14 */
    unsigned int ulCustombit; /* +0x18 */
    unsigned int ulLoop; /* +0x1c */
    float xFrameNumber; /* +0x20 */
    unsigned char ucNextEvent; /* +0x24 */
    unsigned char bStop; /* +0x25 */
    unsigned char bMerge; /* +0x26 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    int stDirection; /* +0x4 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x8..0xf */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
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
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct MTH3D_tdstMatrix_ {
    int stCol_0; /* +0x0 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x4..0xb */
    int stCol_1; /* +0xc */
    unsigned char _extractor_padding_01[8]; /* implicitly added by extractor; +0x10..0x17 */
    int stCol_2; /* +0x18 */
};

struct MTH4D_tdstMatrix_ {
    int stCol_0; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    int stCol_1; /* +0x10 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x14..0x1f */
    int stCol_2; /* +0x20 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x24..0x2f */
    int stCol_3; /* +0x30 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    tdstEvent_* d_stAnimEvent; /* +0x4 */
    stMorphData* d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstFrame3d_ {
    tdstElement3d_* p_stArrayOfElts3d; /* +0x0 */
    MTH3D_tdstMatrix_* p_stAngularSpeedMatrix; /* +0x4 */
    MTH3D_tdstVector_* p_stLinearSpeedVector; /* +0x8 */
    tdstPLA_Hierarchy_ stHierarchy; /* +0xc */
    int stDeformation; /* +0x14 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x18..0x1b */
    tdstAnim3d_* p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

unsigned char g_bShowLight;
unsigned char g_ucGameModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 168–168 */
/* addr: 0x0026fde0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_ulDynamSizeOf(void)
{
    return 0x0C;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1344–1353 */
/* addr: 0x0026fdf0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1344
 *   +0x0010 -> line 1348
 *   +0x002c -> line 1350
 *   +0x005c -> line 1352
 *   +0x0060 -> line 1353
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GLI_tdstLight_* HIE_fn_hGetSuperObjectLight(HIE_tdstSuperObject_* p_SuperObjPerso)
{
    tdstMSLight_* hMSLight;

    if (p_SuperObjPerso->ulTypeOfLinkedObject == 2)
    {

        hMSLight = ((p_SuperObjPerso->ulTypeOfLinkedObject != 2) ? NULL : p_SuperObjPerso->hLinkedObject.p_stCharacter)->h_MSLight;

        return (hMSLight != NULL) ? ((hMSLight->bLocalLight == 0) ? NULL : hMSLight->p_stLight) : NULL;
    }
    return NULL;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1327–1333 */
/* addr: 0x0026fe60  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1327
 *   +0x0008 -> line 1328
 *   +0x000c -> line 1331
 *   +0x0010 -> line 1329
 *   +0x0014 -> line 1331
 *   +0x0048 -> line 1333
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetRLIParameter(tdstMSLight_* hMSLight, int lNbRLI, int lIndex1, int lIndex2, int lPercent)
{
    if (hMSLight != NULL) {
        hMSLight->ucNbRLIUse = lNbRLI;
        hMSLight->ucFirstRLI = lIndex1;
        hMSLight->ucSecondRLI = lIndex2;
        hMSLight->ucBlendPercent = (float)(unsigned char)lPercent;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1308–1313 */
/* addr: 0x0026feb0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1308
 *   +0x0010 -> line 1309
 *   +0x0054 -> line 1313
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucGetNumberOfRLIFromCharacter(HIE_tdstSuperObject_* hSprObj, unsigned char* p_ucIndex1, unsigned char* p_ucIndex2, float* p_xPercent)
{
    tdstEngineObject_* hCharacter;
    tdstMSLight_* hMSLight;
    unsigned char ucNbRLIUse;
    float xPercent;
    ucNbRLIUse = 0;
    if (hSprObj->ulTypeOfLinkedObject == 2) {
        hCharacter = hSprObj->hLinkedObject.p_stCharacter;
        hMSLight = hCharacter->h_MSLight;
        if (hMSLight != NULL) {
            *p_ucIndex1 = hMSLight->ucFirstRLI;
            *p_ucIndex2 = hMSLight->ucSecondRLI;
            xPercent = hMSLight->ucBlendPercent;
            *p_xPercent = xPercent / 100.0f;
            ucNbRLIUse = hMSLight->ucNbRLIUse;
        }
    }
    return ucNbRLIUse;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1159–1256 */
/* addr: 0x0026ff10  size: 1780 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1159
 *   +0x0004 -> line 1160
 *   +0x0008 -> line 1159
 *   +0x0034 -> line 1160
 *   +0x0094 -> line 1170
 *   +0x009c -> line 1171
 *   +0x00a0 -> line 1172
 *   +0x00a4 -> line 1178
 *   +0x00a8 -> line 1172
 *   +0x00d8 -> line 1178
 *   +0x0108 -> line 1180
 *   +0x0110 -> line 1181
 *   +0x0138 -> line 1182
 *   +0x0140 -> line 1181
 *   +0x015c -> line 1182
 *   +0x0164 -> line 1183
 *   +0x0168 -> line 1185
 *   +0x016c -> line 1188
 *   +0x0170 -> line 1183
 *   +0x0174 -> line 1185
 *   +0x0178 -> line 1183
 *   +0x0188 -> line 1185
 *   +0x01a0 -> line 1186
 *   +0x01d0 -> line 1188
 *   +0x01f0 -> line 1189
 *   +0x01f4 -> line 1188
 *   +0x020c -> line 1189
 *   +0x0214 -> line 1190
 *   +0x0220 -> line 1191
 *   +0x023c -> line 1192
 *   +0x0244 -> line 1194
 *   +0x0284 -> line 1196
 *   +0x0290 -> line 1198
 *   +0x0294 -> line 1200
 *   +0x0298 -> line 1198
 *   +0x02a0 -> line 1200
 *   +0x02a8 -> line 1201
 *   +0x02c8 -> line 1202
 *   +0x02cc -> line 1201
 *   +0x02e0 -> line 1202
 *   +0x02ec -> line 1203
 *   +0x02f8 -> line 1204
 *   +0x0304 -> line 1211
 *   +0x0334 -> line 1213
 *   +0x0354 -> line 1214
 *   +0x0358 -> line 1213
 *   +0x035c -> line 1214
 *   +0x0364 -> line 1216
 *   +0x0370 -> line 1217
 *   +0x037c -> line 1219
 *   +0x0398 -> line 1220
 *   +0x039c -> line 1219
 *   +0x03b4 -> line 1220
 *   +0x03dc -> line 1221
 *   +0x03ec -> line 1220
 *   +0x03f0 -> line 1221
 *   +0x0400 -> line 1223
 *   +0x0404 -> line 1225
 *   +0x042c -> line 1231
 *   +0x045c -> line 1233
 *   +0x0490 -> line 1234
 *   +0x0494 -> line 1233
 *   +0x0498 -> line 1234
 *   +0x04b8 -> line 1235
 *   +0x04bc -> line 1234
 *   +0x04c0 -> line 1236
 *   +0x04c4 -> line 1235
 *   +0x04c8 -> line 1234
 *   +0x04cc -> line 1235
 *   +0x04d0 -> line 1236
 *   +0x0520 -> line 1237
 *   +0x0524 -> line 1238
 *   +0x0528 -> line 1237
 *   +0x052c -> line 1238
 *   +0x0544 -> line 1240
 *   +0x056c -> line 1241
 *   +0x05a0 -> line 1244
 *   +0x05d0 -> line 1247
 *   +0x05dc -> line 1250
 *   +0x05e0 -> line 1249
 *   +0x05f8 -> line 1250
 *   +0x0688 -> line 1251
 *   +0x068c -> line 1250
 *   +0x0694 -> line 1251
 *   +0x06c4 -> line 1256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateLight(HIE_tdstSuperObject_* hSupObject)
{
    float xAnglePerso;
    MTH3D_tdstVector_ stOffsetVect;
    MTH3D_tdstVector_ stTransVect;
    MTH3D_tdstVector_ stDirection;
    MAT_tdstTransformation_ stMatrixD;
    MAT_tdstTransformation_ stMatrix3;
    MAT_tdstTransformation_ stMatrix2;
    float x;
    float step;
    float y;
    float z;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1116–1142 */
/* addr: 0x00270610  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1116
 *   +0x0008 -> line 1120
 *   +0x000c -> line 1116
 *   +0x0010 -> line 1120
 *   +0x0020 -> line 1121
 *   +0x0024 -> line 1124
 *   +0x0054 -> line 1126
 *   +0x0070 -> line 1127
 *   +0x0088 -> line 1128
 *   +0x0098 -> line 1129
 *   +0x00b0 -> line 1130
 *   +0x00c4 -> line 1131
 *   +0x00e0 -> line 1133
 *   +0x00e8 -> line 1136
 *   +0x0100 -> line 1137
 *   +0x0114 -> line 1139
 *   +0x0124 -> line 1142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float fn_xComputeAngleOfPerso(HIE_tdstSuperObject_* p_SuperObjPerso)
{
    MTH3D_tdstVector_ p_stK;
    MTH3D_tdstVector_ p_stJ;
    MTH3D_tdstVector_ p_stI;
    float xAngle;
    float xSin;
    float xCos;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1099–1099 */
/* addr: 0x00270750  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1099
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bMSLightGetPulse(tdstMSLight_* h_MSLight)
{
    return h_MSLight->bPulsing;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1091–1094 */
/* addr: 0x00270760  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1091
 *   +0x0004 -> line 1092
 *   +0x0008 -> line 1094
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetPulse(tdstMSLight_* h_MSLight, unsigned char bOnOff, float xStep, float xMaxRange)
{
    h_MSLight->bPulsing = bOnOff;
    h_MSLight->xStepPulse = xStep;
    h_MSLight->xMaxRangePulse = xMaxRange;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1087–1087 */
/* addr: 0x00270770  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1087
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bMSLightGetGiroPhare(tdstMSLight_* h_MSLight)
{
    return h_MSLight->bGiroPhare;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1080–1082 */
/* addr: 0x00270780  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1080
 *   +0x0004 -> line 1082
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetGiroPhare(tdstMSLight_* h_MSLight, unsigned char bOnOff, float xStep)
{
    h_MSLight->bGiroPhare = bOnOff;
    h_MSLight->xStepGiro = xStep;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1076–1076 */
/* addr: 0x00270790  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1076
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bMSLightGetOnlyLocalLight(tdstMSLight_* h_MSLight)
{
    return h_MSLight->bOnlyLocalLight;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1072–1072 */
/* addr: 0x002707a0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1072
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetOnlyLocalLight(tdstMSLight_* h_MSLight, unsigned char bOnlyLocalLight)
{
    h_MSLight->bOnlyLocalLight = bOnlyLocalLight;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1068–1068 */
/* addr: 0x002707b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1068
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bMSLightGetLocalLight(tdstMSLight_* h_MSLight)
{
    return h_MSLight->bLocalLight;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1064–1064 */
/* addr: 0x002707c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1064
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetLocalLight(tdstMSLight_* h_MSLight, unsigned char bLocalLight)
{
    h_MSLight->bLocalLight = bLocalLight;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1060–1060 */
/* addr: 0x002707d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1060
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GLI_tdstLight_* fn_p_stMSLightGetLight(tdstMSLight_* h_MSLight)
{
    return h_MSLight->p_stLight;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1047–1055 */
/* addr: 0x002707e0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1047
 *   +0x0008 -> line 1050
 *   +0x000c -> line 1051
 *   +0x0010 -> line 1052
 *   +0x0014 -> line 1053
 *   +0x0018 -> line 1054
 *   +0x0024 -> line 1055
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetColorRGBA(tdstMSLight_* h_MSLight, float xR, float xG, float xB, float xA)
{
    GEO_tdstColor_ stColor;
    stColor.xR = xR;
    stColor.xG = xG;
    stColor.xB = xB;
    stColor.xA = xA;
    GLI_xSetLightColor(h_MSLight->p_stLight, &stColor);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1035–1039 */
/* addr: 0x00270810  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1035
 *   +0x0008 -> line 1037
 *   +0x000c -> line 1035
 *   +0x0010 -> line 1037
 *   +0x0014 -> line 1035
 *   +0x001c -> line 1037
 *   +0x0028 -> line 1038
 *   +0x0038 -> line 1039
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetBigAlpha(tdstMSLight_* h_MSLight, float xBigAlpha)
{
    float xLittleIni;
    float xBigIni;
    GLI_vGetLightAlphas(h_MSLight->p_stLight, &xLittleIni, &xBigIni);
    GLI_vSetLightAlphas(h_MSLight->p_stLight, xLittleIni, xBigAlpha);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1028–1032 */
/* addr: 0x00270860  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1028
 *   +0x0008 -> line 1030
 *   +0x000c -> line 1028
 *   +0x0010 -> line 1030
 *   +0x0014 -> line 1028
 *   +0x001c -> line 1030
 *   +0x0028 -> line 1031
 *   +0x0038 -> line 1032
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetLittleAlpha(tdstMSLight_* h_MSLight, float xLittleAlpha)
{
    float xLittleIni;
    float xBigIni;
    GLI_vGetLightAlphas(h_MSLight->p_stLight, &xLittleIni, &xBigIni);
    GLI_vSetLightAlphas(h_MSLight->p_stLight, xLittleAlpha, xBigIni);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1017–1017 */
/* addr: 0x002708b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1017
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetNearFar(tdstMSLight_* h_MSLight, float xNear, float xFar)
{
    GLI_vSetLightNearFar(h_MSLight->p_stLight, xNear, xFar);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1012–1012 */
/* addr: 0x002708c0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1012
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vMSLightSetOnOff(tdstMSLight_* h_MSLight, unsigned char ucOnOff)
{
    GLI_xSetLightState(h_MSLight->p_stLight, (int)ucOnOff);
}

/* E:\\Rayman3\\Disk_01\\R3PS2_SCEA_engine_sources\\sourcesV39\\ps2\\TEMPGRP\\GAM\\Actions\\MSlight.c line 1009 */
/* addr: 0x00270900  size: 12 bytes */
void fn_vMSLightSetTypeOfLight(tdstMSLight_* h_MSLight, unsigned short lTypeOfLight)
{
    GLI_vSetLightType(h_MSLight->p_stLight, lTypeOfLight);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1003–1008 */
/* addr: 0x002708d0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1003
 *   +0x0008 -> line 1006
 *   +0x0014 -> line 1007
 *   +0x0018 -> line 1008
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucMSLightGetOnOff(tdstMSLight_* h_MSLight)
{
    int lOnOff;
    GLI_xGetLightState(h_MSLight->p_stLight, (unsigned char*)&lOnOff);
    return lOnOff;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 714–714 */
/* addr: 0x00270910  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 714
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* function pointer */ int fn_hMSLightGetLightNodeInSector(tdstMSLight_* _hMSLight)
{
    return (int)_hMSLight->hLightInSector;
}

void* memcpy(void*, const void*, unsigned int);
void GLI_vCopyLight(GLI_tdstLight_* p_stDest, GLI_tdstLight_* p_stSrc);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 685–698 */
/* addr: 0x00270920  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 685
 *   +0x0020 -> line 689
 *   +0x0024 -> line 692
 *   +0x0028 -> line 689
 *   +0x002c -> line 690
 *   +0x0030 -> line 692
 *   +0x0038 -> line 694
 *   +0x0040 -> line 696
 *   +0x0054 -> line 697
 *   +0x005c -> line 698
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vLightCopyClone(tdstEngineObject_* _p_stObjectDest, tdstEngineObject_* _p_stObjectSrc)
{
    GLI_tdstLight_* p_stLight;
    SECT_tdstListOfDNMLights_* hLightInSector;

    p_stLight = _p_stObjectDest->h_MSLight->p_stLight;
    hLightInSector = _p_stObjectDest->h_MSLight->hLightInSector;

    memcpy(_p_stObjectDest->h_MSLight, _p_stObjectSrc->h_MSLight, sizeof(tdstMSLight_));

    _p_stObjectDest->h_MSLight->p_stLight = p_stLight;

    GLI_vCopyLight(_p_stObjectDest->h_MSLight->p_stLight, _p_stObjectSrc->h_MSLight->p_stLight);
    _p_stObjectDest->h_MSLight->hLightInSector = hLightInSector;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 652–671 */
/* addr: 0x002709a0  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 652
 *   +0x0010 -> line 653
 *   +0x0018 -> line 654
 *   +0x0044 -> line 656
 *   +0x0050 -> line 657
 *   +0x007c -> line 671
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vLightDesinit(tdstEngineObject_* p_stObject)
{
    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (!p_stObject->h_MSLight) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 552–597 */
/* addr: 0x00270a30  size: 480 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 552
 *   +0x0014 -> line 556
 *   +0x001c -> line 557
 *   +0x0048 -> line 559
 *   +0x0054 -> line 560
 *   +0x0080 -> line 562
 *   +0x00a4 -> line 565
 *   +0x012c -> line 568
 *   +0x0148 -> line 571
 *   +0x016c -> line 573
 *   +0x0174 -> line 577
 *   +0x0198 -> line 587
 *   +0x01a0 -> line 588
 *   +0x01a8 -> line 591
 *   +0x01b4 -> line 592
 *   +0x01bc -> line 593
 *   +0x01cc -> line 597
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vLightInit(tdstEngineObject_* p_stObject, tdeObjectTreeInit_ eObjectInit)
{
    HIE_tdstSuperObject_* hSuperObjFather;
    MAT_tdstTransformation_ stMatrix2;
    /* TODO: decompile from asm/... */
}

void GLI_vRemoveLightForInit(GLI_tdstLight_* p_stLight, unsigned short eUserFlags);
int SAI_fn_bRemoveValueFromTable(void* _p_vValue, int _eFlags);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 525–538 */
/* addr: 0x00270c10  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 525
 *   +0x0010 -> line 526
 *   +0x0018 -> line 527
 *   +0x0044 -> line 529
 *   +0x0050 -> line 530
 *   +0x007c -> line 532
 *   +0x0104 -> line 538
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vLightFree(tdstEngineObject_* p_stObject)
{
    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (!p_stObject->h_MSLight) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }

    {
        tdstMSLight_* hMSLight = p_stObject->h_MSLight;
        GLI_vRemoveLightForInit(hMSLight->p_stLight, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->stOffsetVect, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->stAngle, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->bPulsing, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->xStepPulse, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->xMaxRangePulse, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->bLocalLight, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->bOnlyLocalLight, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->bGiroPhare, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->xStepGiro, 0x32);
        SAI_fn_bRemoveValueFromTable(&hMSLight->xGiroAngle, 0x32);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 486–497 */
/* addr: 0x00270d30  size: 340 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 486
 *   +0x0010 -> line 487
 *   +0x0018 -> line 488
 *   +0x0044 -> line 490
 *   +0x0050 -> line 491
 *   +0x007c -> line 494
 *   +0x00b8 -> line 496
 *   +0x0140 -> line 497
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vLightAlloc(tdstEngineObject_* p_stObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 472–472 */
/* addr: 0x00270e90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 472
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_ulLightSizeOf(void)
{
    return 0x40;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 234–288 */
/* addr: 0x00270ea0  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 234
 *   +0x0004 -> line 243
 *   +0x0008 -> line 234
 *   +0x000c -> line 243
 *   +0x0010 -> line 234
 *   +0x0014 -> line 243
 *   +0x0018 -> line 234
 *   +0x003c -> line 243
 *   +0x0044 -> line 244
 *   +0x0058 -> line 245
 *   +0x0068 -> line 246
 *   +0x006c -> line 248
 *   +0x0070 -> line 246
 *   +0x008c -> line 248
 *   +0x0098 -> line 250
 *   +0x00a8 -> line 251
 *   +0x00c0 -> line 252
 *   +0x00d4 -> line 253
 *   +0x00dc -> line 256
 *   +0x00e0 -> line 257
 *   +0x00e8 -> line 258
 *   +0x00f0 -> line 259
 *   +0x00f8 -> line 260
 *   +0x0104 -> line 262
 *   +0x0108 -> line 263
 *   +0x010c -> line 264
 *   +0x0110 -> line 265
 *   +0x0114 -> line 266
 *   +0x0120 -> line 269
 *   +0x0124 -> line 273
 *   +0x0128 -> line 270
 *   +0x012c -> line 271
 *   +0x0130 -> line 272
 *   +0x0134 -> line 273
 *   +0x0140 -> line 275
 *   +0x0144 -> line 276
 *   +0x0148 -> line 277
 *   +0x014c -> line 278
 *   +0x0150 -> line 279
 *   +0x015c -> line 281
 *   +0x0168 -> line 283
 *   +0x017c -> line 285
 *   +0x0184 -> line 287
 *   +0x0188 -> line 288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GEO_tdstGeometricObject_* fn_pCreateCone(float xS, float yS, float zS, float xRadius)
{
    GEO_tdstColor_ stColor;
    GLI_tdstMaterial_* hMaterial;
    short hElement;
    MTH3D_tdstVector_ stCenter;
    GEO_tdstGeometricObject_* p_stSphere;
    /* TODO: decompile from asm/... */
}
