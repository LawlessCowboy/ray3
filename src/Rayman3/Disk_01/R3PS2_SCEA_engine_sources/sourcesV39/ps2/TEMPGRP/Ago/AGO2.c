/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct AGO_V4D_ AGO_V4D_;
typedef struct AGO2_WallExplosionPart_ AGO2_WallExplosionPart_;
typedef struct AGO2_WallExplosion_ AGO2_WallExplosion_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct AGO2_FlowParticle_ AGO2_FlowParticle_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct AGO2_BalloonPart_ AGO2_BalloonPart_;
typedef struct AGO2_Part_ AGO2_Part_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct AGO2_LeavesParticle_ AGO2_LeavesParticle_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct AGO2_RainParticle_ AGO2_RainParticle_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct tdstBrain_ tdstBrain_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct AGO2_BeeParticle_ AGO2_BeeParticle_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct stMorphData stMorphData;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct AGO2_MiniStruct_Sprite_ AGO2_MiniStruct_Sprite_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct AGO2_Types_ AGO2_Types_;

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

struct AGO_V4D_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct AGO2_WallExplosionPart_ {
    AGO_V4D_ Vertices[8]; /* +0x0 */
    AGO_V4D_ Colors[8]; /* +0x80 */
    float UVs[8][2]; /* +0x100 */
    unsigned short Indices[36]; /* +0x140 */
    unsigned int NbVertices; /* +0x188 */
    unsigned int NbIndices; /* +0x18c */
    unsigned int Flags; /* +0x190 */
};

struct AGO2_WallExplosion_ {
    int pMaterial; /* +0x0 */
    unsigned int NbExplosionParts; /* +0x4 */
    int pOriginalSPO; /* +0x8 */
    AGO2_WallExplosionPart_ Parts[15]; /* +0xc */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct AGO2_FlowParticle_ {
    AGO_V4D_ Position; /* +0x0 */
    AGO_V4D_ Direction; /* +0x10 */
    float xTransparency; /* +0x20 */
    unsigned int Flags; /* +0x24 */
    unsigned int Pads[2]; /* +0x28 */
    AGO_V4D_ PreviousPosition; /* +0x30 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct AGO2_BalloonPart_ {
    MTH3D_tdstVector_ CenterPosition; /* +0x0 */
    MTH3D_tdstVector_ Points[4]; /* +0xc */
    MTH3D_tdstVector_ RotationAngles; /* +0x3c */
    MTH3D_tdstVector_ Direction; /* +0x48 */
    float VertexUVs[2][2]; /* +0x54 */
    float fTransparency; /* +0x64 */
    float fTransparencySpeed; /* +0x68 */
    unsigned int HasBeenDisplayed; /* +0x6c */
    float f_GSpeed; /* +0x70 */
};

struct AGO2_Part_ {
    unsigned int ulType; /* +0x0 */
    unsigned int ulBaseID; /* +0x4 */
    unsigned int Channel; /* +0x8 */
    int pMaterial1; /* +0xc */
    int pMaterial2; /* +0x10 */
    void (*pDisplayFnct)(AGO2_Part_*); /* +0x14 */
    void (*pProcessFnct)(AGO2_Part_*); /* +0x18 */
    void (*pTransparencyFunction)(AGO2_Part_*); /* +0x1c */
    void (*pSizingFunction)(AGO2_Part_*); /* +0x20 */
    HIE_tdstSuperObject_* pLauchingCharacter; /* +0x24 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct AGO2_LeavesParticle_ {
    AGO_V4D_ Position; /* +0x0 */
    AGO_V4D_ Direction; /* +0x10 */
    AGO_V4D_ StillPosition; /* +0x20 */
    AGO_V4D_ V1; /* +0x30 */
    AGO_V4D_ V2; /* +0x40 */
    AGO_V4D_ UsedV1; /* +0x50 */
    AGO_V4D_ UsedV2; /* +0x60 */
    AGO_V4D_ Parameters; /* +0x70 */
    float xTransparency; /* +0x80 */
    unsigned int Flags; /* +0x84 */
    float Pads[2]; /* +0x88 */
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
    MTH3D_tdstVector_ stSemiLookAtVector; /* +0x3c */
    float fTransparenceLevel; /* +0x48 */
    unsigned int ulOutlineColor; /* +0x4c */
    int lDisplayPrioriry; /* +0x50 */
    int lIL_Status; /* +0x54 */
    MTH3D_tdstVector_ stIL_AmbientColor; /* +0x58 */
    MTH3D_tdstVector_ stIL_ParallelDirection; /* +0x64 */
    MTH3D_tdstVector_ stIL_ParallelColor; /* +0x70 */
    unsigned char ucSuperImposedOnWhichViewport; /* +0x7c */
    unsigned char bIsSPO; /* +0x7d */
    unsigned char xTransition; /* +0x7e */
};

struct AGO2_RainParticle_ {
    AGO_V4D_ Position; /* +0x0 */
    AGO_V4D_ Direction; /* +0x10 */
    float xTransparency; /* +0x20 */
    unsigned int Flags; /* +0x24 */
    unsigned int Pads[2]; /* +0x28 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct tdstFrame3d_ {
    tdstElement3d_* p_stArrayOfElts3d; /* +0x0 */
    MTH3D_tdstMatrix_* p_stAngularSpeedMatrix; /* +0x4 */
    MTH3D_tdstVector_* p_stLinearSpeedVector; /* +0x8 */
    tdstPLA_Hierarchy_ stHierarchy; /* +0xc */
    tdstPLA_Deformation_ stDeformation; /* +0x14 */
    tdstAnim3d_* p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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
    tdstFrame3d_ stFrame3d; /* +0xb4 */
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
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x114..0x11f */
    MAT_tdstTransformation_ stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    MTH3D_tdstVector_ stLightDirForDynamicShadow; /* +0x188 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    MTH3D_tdstVector_ stSHWDeformationVector; /* +0x198 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn hForSubAnimInUseArray; /* +0x1b4 */
    CINE_tdstCineActor_* h_CurrentCineActor; /* +0x1c0 */
    int hSkinMaterial[4]; /* +0x1c4 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
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
    float a_xCustomFloats[2]; /* +0x3c */
    int a_lCustomLongs[2]; /* +0x44 */
    MTH3D_tdstVector_ a_stCustomVectors[2]; /* +0x4c */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt {
    tdstObjectsTablesList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstFamilyList_ {
    tdstFamilyList_* hNextBrotherDyn; /* +0x0 */
    tdstFamilyList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToFamilyListDyn* hFatherDyn; /* +0x8 */
    int otObjectFamilyType; /* +0xc */
    LST2_tdstAnchorTotdxHandleToStateOpt hForStateArray; /* +0x10 */
    LST2_tdstAnchorTotdxHandleToSubAnimOpt hForSubAnimArray; /* +0x18 */
    tdstObjectsTablesList_* h_DefaultObjectsTable; /* +0x20 */
    LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt hForObjectsTablesList; /* +0x24 */
    COL_tdstBoundingSphere_* hBoundingSphere; /* +0x2c */
    tdstLipsSynchValue_* ax_stLipsSynchValues; /* +0x30 */
    unsigned int ulNumberLipSynchValues; /* +0x34 */
    unsigned int ulLipsChannel; /* +0x38 */
    unsigned int ulNumberOfChannels; /* +0x3c */
    unsigned char ucPriority; /* +0x40 */
    unsigned char ucOptimized; /* +0x41 */
    unsigned char ucStorageBank; /* +0x42 */
    unsigned char ucProperties; /* +0x43 */
};

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
};

struct tdstAChannel_ {
    HIE_tdstSuperObject_* hSupObject; /* +0x0 */
    HIE_tdstSuperObject_* hZoomSupObject; /* +0x4 */
    tdstAChannel_* p_stNextActiveChannel; /* +0x8 */
    tdstAChannel_* p_stFatherChannel; /* +0xc */
    stInterpolatedPosition ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct AGO2_BeeParticle_ {
    AGO_V4D_ Position; /* +0x0 */
    AGO_V4D_ Direction; /* +0x10 */
    float xTransparency; /* +0x20 */
    unsigned int Flags; /* +0x24 */
    int Pads[2]; /* +0x28 */
    AGO_V4D_ PreviousPosition; /* +0x30 */
    AGO_V4D_ Parameters; /* +0x40 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
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
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x30 */
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

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
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
    char szName[255]; /* +0x20 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct CINE_tdstCineActor_ {
    tdstSubAnim_ stSubAnim; /* +0x0 */
    tdstSubAnimInUse_* hSubAnimInUse; /* +0x4 */
    char szAnimation[255]; /* +0x8 */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstSector_ {
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn stListOfCharacters; /* +0x0 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt stListOfStaticLights; /* +0xc */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn stListOfDNMLights; /* +0x14 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt stListOfSectorsInGraphicInteraction; /* +0x20 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt stListOfSectorsInCollisionInteraction; /* +0x28 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt stListOfSectorsInActivityInteraction; /* +0x30 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt stListOfSectorsInSoundInteraction; /* +0x38 */
    LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt stListOfSoundEvent; /* +0x40 */
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
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct AGO2_MiniStruct_Sprite_ {
    AGO_V4D_ Position; /* +0x0 */
    float xTransparency; /* +0x10 */
    float xSize[2]; /* +0x14 */
    unsigned int AnimTime; /* +0x1c */
    unsigned int ulType; /* +0x20 */
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

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct AGO2_Types_ {
    unsigned char (*pCreationFunction)(unsigned int, AGO2_Part_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, AGO_V4D_*, void*, void*, float, float, float, float, HIE_tdstSuperObject_*, unsigned int); /* +0x0 */
    void (*pStartDisplayFunction)(GLD_tdstViewportAttributes_*); /* +0x4 */
    void (*pDisplayFunction)(AGO2_Part_*); /* +0x8 */
    void (*pEndDisplayFunction)(GLD_tdstViewportAttributes_*); /* +0xc */
    void (*pProcessFunction)(AGO2_Part_*); /* +0x10 */
    void (*pTransparencyFunction)(AGO2_Part_*); /* +0x14 */
    void (*pSizingFunction)(AGO2_Part_*); /* +0x18 */
};

unsigned int g_ulNumberOfAgos2;
unsigned int AGO2_g_NbWalls;
unsigned int AGO2_g_Walls[10];
int g_AGO2_p_stViewport;
void GLI_v_DisplayLightning(GLD_tdstViewportAttributes_*, MTH3D_tdstVector_*, MTH3D_tdstVector_*, int, float);
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
/* Function symbols are declared by their recovered definitions below. */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 139–240 */
/* addr: 0x001e0dc0  size: 532 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 139
 *   +0x0014 -> line 146
 *   +0x0024 -> line 148
 *   +0x0030 -> line 149
 *   +0x0038 -> line 157
 *   +0x0044 -> line 161
 *   +0x004c -> line 160
 *   +0x0054 -> line 161
 *   +0x0088 -> line 163
 *   +0x0090 -> line 166
 *   +0x009c -> line 172
 *   +0x00a4 -> line 177
 *   +0x00ac -> line 178
 *   +0x00bc -> line 192
 *   +0x00cc -> line 194
 *   +0x00d0 -> line 192
 *   +0x00dc -> line 194
 *   +0x00e8 -> line 192
 *   +0x00ec -> line 194
 *   +0x00f4 -> line 196
 *   +0x0104 -> line 198
 *   +0x0108 -> line 199
 *   +0x0114 -> line 201
 *   +0x0118 -> line 202
 *   +0x011c -> line 204
 *   +0x0120 -> line 202
 *   +0x0124 -> line 205
 *   +0x0134 -> line 215
 *   +0x0158 -> line 218
 *   +0x015c -> line 215
 *   +0x0168 -> line 218
 *   +0x0174 -> line 220
 *   +0x0178 -> line 232
 *   +0x0180 -> line 220
 *   +0x0188 -> line 232
 *   +0x018c -> line 221
 *   +0x0190 -> line 225
 *   +0x0194 -> line 220
 *   +0x0198 -> line 221
 *   +0x019c -> line 225
 *   +0x01a0 -> line 220
 *   +0x01a8 -> line 221
 *   +0x01ac -> line 220
 *   +0x01b0 -> line 225
 *   +0x01b4 -> line 221
 *   +0x01b8 -> line 225
 *   +0x01bc -> line 226
 *   +0x01c0 -> line 227
 *   +0x01c4 -> line 231
 *   +0x01d0 -> line 232
 *   +0x01dc -> line 235
 *   +0x01e0 -> line 234
 *   +0x01e4 -> line 235
 *   +0x01ec -> line 234
 *   +0x01f0 -> line 239
 *   +0x01f4 -> line 234
 *   +0x01f8 -> line 239
 *   +0x01fc -> line 240
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int AGO2_MEM_Alloc(unsigned int Size)
{
    unsigned int Difference;
    unsigned int j;
    unsigned int MinDifference;
    unsigned int MinZone;
    unsigned int* Pointer;
    unsigned int TempSize;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 4276–4312 */
/* addr: 0x001e0fe0  size: 372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4276
 *   +0x0004 -> line 4283
 *   +0x0008 -> line 4276
 *   +0x000c -> line 4283
 *   +0x0018 -> line 4284
 *   +0x0030 -> line 4286
 *   +0x003c -> line 4289
 *   +0x0040 -> line 4290
 *   +0x006c -> line 4293
 *   +0x0070 -> line 4294
 *   +0x0074 -> line 4293
 *   +0x0078 -> line 4295
 *   +0x007c -> line 4293
 *   +0x0080 -> line 4296
 *   +0x0084 -> line 4293
 *   +0x0088 -> line 4300
 *   +0x008c -> line 4293
 *   +0x0098 -> line 4296
 *   +0x009c -> line 4293
 *   +0x00a0 -> line 4298
 *   +0x00a8 -> line 4293
 *   +0x00ac -> line 4294
 *   +0x00b8 -> line 4293
 *   +0x00bc -> line 4298
 *   +0x00c0 -> line 4299
 *   +0x00c4 -> line 4298
 *   +0x00d0 -> line 4295
 *   +0x00d4 -> line 4294
 *   +0x00d8 -> line 4298
 *   +0x00e0 -> line 4299
 *   +0x00e8 -> line 4298
 *   +0x00f0 -> line 4295
 *   +0x00f4 -> line 4294
 *   +0x00f8 -> line 4298
 *   +0x00fc -> line 4295
 *   +0x0100 -> line 4299
 *   +0x0104 -> line 4295
 *   +0x0108 -> line 4294
 *   +0x010c -> line 4300
 *   +0x0110 -> line 4299
 *   +0x0114 -> line 4300
 *   +0x0118 -> line 4299
 *   +0x011c -> line 4300
 *   +0x0120 -> line 4296
 *   +0x0124 -> line 4299
 *   +0x0128 -> line 4295
 *   +0x012c -> line 4304
 *   +0x0130 -> line 4296
 *   +0x0134 -> line 4295
 *   +0x0138 -> line 4305
 *   +0x013c -> line 4296
 *   +0x0140 -> line 4300
 *   +0x014c -> line 4301
 *   +0x0150 -> line 4306
 *   +0x0154 -> line 4308
 *   +0x0158 -> line 4301
 *   +0x0160 -> line 4309
 *   +0x0164 -> line 4310
 *   +0x0168 -> line 4312
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vTestExploseWall(void)
{
    AGO2_WallExplosionPart_ OriginalPart;
    AGO2_WallExplosionPart_* pp;
    AGO2_WallExplosion_* p;
    int Firstime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 4270–4270 */
/* addr: 0x001e1160  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4270
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vTestWall(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3932–4057 */
/* addr: 0x001e1170  size: 1484 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3932
 *   +0x0004 -> line 3941
 *   +0x0008 -> line 3932
 *   +0x000c -> line 3941
 *   +0x0010 -> line 3932
 *   +0x0014 -> line 3941
 *   +0x0018 -> line 3932
 *   +0x0024 -> line 3952
 *   +0x0028 -> line 3932
 *   +0x002c -> line 3952
 *   +0x0030 -> line 3932
 *   +0x0034 -> line 3944
 *   +0x0038 -> line 3932
 *   +0x003c -> line 3944
 *   +0x0040 -> line 3932
 *   +0x0068 -> line 3941
 *   +0x006c -> line 3952
 *   +0x0070 -> line 3954
 *   +0x0074 -> line 3952
 *   +0x0078 -> line 3943
 *   +0x007c -> line 3941
 *   +0x0080 -> line 3954
 *   +0x009c -> line 3959
 *   +0x00a0 -> line 3963
 *   +0x00a4 -> line 3960
 *   +0x00a8 -> line 3961
 *   +0x00b0 -> line 3967
 *   +0x00c4 -> line 3968
 *   +0x00c8 -> line 3967
 *   +0x00d4 -> line 3968
 *   +0x00e0 -> line 3967
 *   +0x00e4 -> line 3968
 *   +0x00f0 -> line 3967
 *   +0x00f4 -> line 3972
 *   +0x00f8 -> line 3968
 *   +0x00fc -> line 3972
 *   +0x0124 -> line 3968
 *   +0x0128 -> line 3972
 *   +0x012c -> line 3973
 *   +0x0130 -> line 3972
 *   +0x0134 -> line 3973
 *   +0x0138 -> line 3972
 *   +0x013c -> line 3973
 *   +0x0144 -> line 3972
 *   +0x0148 -> line 3976
 *   +0x014c -> line 3973
 *   +0x0150 -> line 3972
 *   +0x0154 -> line 3976
 *   +0x0158 -> line 3973
 *   +0x015c -> line 3972
 *   +0x0160 -> line 3976
 *   +0x0194 -> line 3977
 *   +0x01d0 -> line 3978
 *   +0x020c -> line 3979
 *   +0x0244 -> line 3982
 *   +0x0250 -> line 3988
 *   +0x0254 -> line 3979
 *   +0x0258 -> line 3988
 *   +0x025c -> line 3982
 *   +0x0260 -> line 3988
 *   +0x0264 -> line 3983
 *   +0x0268 -> line 3988
 *   +0x0274 -> line 3984
 *   +0x0278 -> line 3988
 *   +0x027c -> line 3989
 *   +0x0280 -> line 3988
 *   +0x0284 -> line 3989
 *   +0x0288 -> line 3988
 *   +0x028c -> line 3989
 *   +0x0290 -> line 3990
 *   +0x0294 -> line 3989
 *   +0x0298 -> line 3992
 *   +0x029c -> line 3989
 *   +0x02a0 -> line 3990
 *   +0x02a4 -> line 3988
 *   +0x02a8 -> line 3990
 *   +0x02ac -> line 3985
 *   +0x02b0 -> line 3990
 *   +0x02b4 -> line 3991
 *   +0x02b8 -> line 3990
 *   +0x02bc -> line 3991
 *   +0x02c0 -> line 3990
 *   +0x02c4 -> line 3991
 *   +0x02cc -> line 3994
 *   +0x02d0 -> line 3991
 *   +0x02d4 -> line 3992
 *   +0x02d8 -> line 3990
 *   +0x02dc -> line 3992
 *   +0x02e0 -> line 3994
 *   +0x02e4 -> line 3992
 *   +0x02e8 -> line 3993
 *   +0x02ec -> line 3992
 *   +0x02f0 -> line 3993
 *   +0x02f4 -> line 3992
 *   +0x02f8 -> line 3993
 *   +0x0304 -> line 3992
 *   +0x0308 -> line 3994
 *   +0x0314 -> line 3999
 *   +0x0318 -> line 3994
 *   +0x0320 -> line 3995
 *   +0x0330 -> line 3999
 *   +0x033c -> line 4000
 *   +0x0350 -> line 4001
 *   +0x0358 -> line 3994
 *   +0x035c -> line 4001
 *   +0x0360 -> line 4004
 *   +0x0364 -> line 3995
 *   +0x0368 -> line 4004
 *   +0x0374 -> line 4005
 *   +0x0388 -> line 4006
 *   +0x0390 -> line 4008
 *   +0x0398 -> line 4010
 *   +0x03a0 -> line 4011
 *   +0x03b0 -> line 4019
 *   +0x03b8 -> line 4020
 *   +0x03bc -> line 4036
 *   +0x03c0 -> line 4021
 *   +0x03c4 -> line 4036
 *   +0x03c8 -> line 4027
 *   +0x03cc -> line 4036
 *   +0x03d0 -> line 4023
 *   +0x03d4 -> line 4036
 *   +0x03e0 -> line 4024
 *   +0x03e4 -> line 4019
 *   +0x03e8 -> line 4036
 *   +0x03f4 -> line 4019
 *   +0x03f8 -> line 4036
 *   +0x03fc -> line 4019
 *   +0x0400 -> line 4036
 *   +0x0410 -> line 4020
 *   +0x041c -> line 4021
 *   +0x0428 -> line 4022
 *   +0x0434 -> line 4027
 *   +0x0440 -> line 4023
 *   +0x0444 -> line 4024
 *   +0x0448 -> line 4027
 *   +0x044c -> line 4023
 *   +0x0454 -> line 4024
 *   +0x045c -> line 4027
 *   +0x0464 -> line 4031
 *   +0x046c -> line 4028
 *   +0x0474 -> line 4031
 *   +0x0478 -> line 4028
 *   +0x0480 -> line 4031
 *   +0x0484 -> line 4029
 *   +0x0494 -> line 4028
 *   +0x0498 -> line 4029
 *   +0x049c -> line 4031
 *   +0x04a0 -> line 4032
 *   +0x04b4 -> line 4033
 *   +0x04c8 -> line 4036
 *   +0x04d0 -> line 4037
 *   +0x050c -> line 4038
 *   +0x0514 -> line 4039
 *   +0x051c -> line 4042
 *   +0x0568 -> line 4053
 *   +0x056c -> line 4054
 *   +0x0570 -> line 4053
 *   +0x0574 -> line 4054
 *   +0x0580 -> line 4057
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
    MTH3D_tdstVector_ PMIDHIGH;
    MTH3D_tdstVector_ PMID;
    MTH3D_tdstVector_ P4;
    MTH3D_tdstVector_ P3;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3826–3912 */
/* addr: 0x001e1740  size: 980 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3826
 *   +0x0008 -> line 3842
 *   +0x000c -> line 3826
 *   +0x0010 -> line 3842
 *   +0x0014 -> line 3826
 *   +0x004c -> line 3838
 *   +0x0054 -> line 3833
 *   +0x0058 -> line 3838
 *   +0x0060 -> line 3839
 *   +0x0068 -> line 3842
 *   +0x006c -> line 3839
 *   +0x0074 -> line 3840
 *   +0x0084 -> line 3842
 *   +0x00e4 -> line 3844
 *   +0x00f4 -> line 3863
 *   +0x0110 -> line 3876
 *   +0x0118 -> line 3866
 *   +0x011c -> line 3867
 *   +0x0120 -> line 3870
 *   +0x0124 -> line 3871
 *   +0x0128 -> line 3865
 *   +0x0130 -> line 3876
 *   +0x0134 -> line 3872
 *   +0x0138 -> line 3865
 *   +0x013c -> line 3866
 *   +0x0140 -> line 3872
 *   +0x0144 -> line 3865
 *   +0x015c -> line 3866
 *   +0x0174 -> line 3867
 *   +0x0178 -> line 3866
 *   +0x0188 -> line 3867
 *   +0x01b0 -> line 3869
 *   +0x01c4 -> line 3870
 *   +0x01d8 -> line 3871
 *   +0x01e8 -> line 3876
 *   +0x01f0 -> line 3878
 *   +0x01f8 -> line 3879
 *   +0x0214 -> line 3889
 *   +0x0218 -> line 3882
 *   +0x021c -> line 3883
 *   +0x0220 -> line 3886
 *   +0x0224 -> line 3887
 *   +0x0228 -> line 3889
 *   +0x0238 -> line 3881
 *   +0x0240 -> line 3889
 *   +0x0244 -> line 3881
 *   +0x0248 -> line 3882
 *   +0x024c -> line 3889
 *   +0x0250 -> line 3881
 *   +0x0264 -> line 3882
 *   +0x026c -> line 3889
 *   +0x0270 -> line 3882
 *   +0x0280 -> line 3883
 *   +0x0284 -> line 3882
 *   +0x0290 -> line 3883
 *   +0x02b4 -> line 3885
 *   +0x02c4 -> line 3886
 *   +0x02d4 -> line 3887
 *   +0x02e4 -> line 3889
 *   +0x02f4 -> line 3902
 *   +0x02f8 -> line 3897
 *   +0x02fc -> line 3902
 *   +0x0304 -> line 3900
 *   +0x0308 -> line 3902
 *   +0x030c -> line 3897
 *   +0x0320 -> line 3898
 *   +0x0338 -> line 3902
 *   +0x0354 -> line 3905
 *   +0x0390 -> line 3912
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3822–3823 */
/* addr: 0x001e1b20  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3822
 *   +0x0008 -> line 3823
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessDieAtOnce(AGO2_Part_* p)
{
    p->ulType |= 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3815–3818 */
/* addr: 0x001e1b30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3815
 *   +0x0004 -> line 3817
 *   +0x0008 -> line 3818
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateCylinder(int unused, AGO2_Part_* p, float xParam1, float xParam2)
{
    p->Vector1.xX = xParam1;
    p->Vector1.xY = xParam2;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3740–3804 */
/* addr: 0x001e1b40  size: 572 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3740
 *   +0x0020 -> line 3749
 *   +0x002c -> line 3750
 *   +0x0034 -> line 3752
 *   +0x0040 -> line 3753
 *   +0x0048 -> line 3754
 *   +0x0050 -> line 3761
 *   +0x0058 -> line 3763
 *   +0x0070 -> line 3764
 *   +0x0084 -> line 3765
 *   +0x0094 -> line 3767
 *   +0x00b0 -> line 3769
 *   +0x00b4 -> line 3772
 *   +0x00bc -> line 3776
 *   +0x00d0 -> line 3789
 *   +0x00d8 -> line 3784
 *   +0x00dc -> line 3776
 *   +0x00e4 -> line 3777
 *   +0x00f4 -> line 3778
 *   +0x0104 -> line 3781
 *   +0x0118 -> line 3783
 *   +0x0124 -> line 3789
 *   +0x012c -> line 3794
 *   +0x013c -> line 3795
 *   +0x014c -> line 3796
 *   +0x0164 -> line 3794
 *   +0x0168 -> line 3796
 *   +0x0174 -> line 3795
 *   +0x0178 -> line 3796
 *   +0x0194 -> line 3794
 *   +0x0198 -> line 3796
 *   +0x01a4 -> line 3795
 *   +0x01a8 -> line 3796
 *   +0x01c4 -> line 3794
 *   +0x01c8 -> line 3796
 *   +0x01d4 -> line 3795
 *   +0x01d8 -> line 3796
 *   +0x01ec -> line 3798
 *   +0x01f0 -> line 3800
 *   +0x01f4 -> line 3801
 *   +0x0208 -> line 3803
 *   +0x021c -> line 3804
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessForceField(AGO2_Part_* p)
{
    float y;
    float sin1;
    float cos1;
    MTH3D_tdstVector_ CenteredPoints[4];
    int FoundOneValidParticle;
    AGO2_BalloonPart_* pParticleArrayOrg;
    unsigned int j;
    unsigned int i;
    AGO2_BalloonPart_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3608–3736 */
/* addr: 0x001e1d80  size: 1220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3608
 *   +0x0050 -> line 3623
 *   +0x0068 -> line 3624
 *   +0x0088 -> line 3625
 *   +0x0094 -> line 3627
 *   +0x0098 -> line 3629
 *   +0x009c -> line 3628
 *   +0x00a4 -> line 3629
 *   +0x00ac -> line 3633
 *   +0x00b4 -> line 3634
 *   +0x00bc -> line 3636
 *   +0x00c4 -> line 3637
 *   +0x00cc -> line 3644
 *   +0x00d0 -> line 3645
 *   +0x00d8 -> line 3639
 *   +0x00dc -> line 3645
 *   +0x00f0 -> line 3646
 *   +0x00f8 -> line 3645
 *   +0x00fc -> line 3646
 *   +0x0118 -> line 3647
 *   +0x011c -> line 3659
 *   +0x0120 -> line 3647
 *   +0x0124 -> line 3659
 *   +0x0128 -> line 3647
 *   +0x012c -> line 3659
 *   +0x0130 -> line 3647
 *   +0x013c -> line 3659
 *   +0x0144 -> line 3663
 *   +0x014c -> line 3662
 *   +0x0150 -> line 3661
 *   +0x0154 -> line 3663
 *   +0x015c -> line 3664
 *   +0x0164 -> line 3663
 *   +0x0168 -> line 3664
 *   +0x0178 -> line 3666
 *   +0x0190 -> line 3668
 *   +0x01a0 -> line 3670
 *   +0x01ac -> line 3671
 *   +0x01b4 -> line 3672
 *   +0x01b8 -> line 3671
 *   +0x01bc -> line 3672
 *   +0x01c4 -> line 3673
 *   +0x01d0 -> line 3676
 *   +0x01d4 -> line 3706
 *   +0x01d8 -> line 3693
 *   +0x01dc -> line 3676
 *   +0x01e8 -> line 3677
 *   +0x01ec -> line 3676
 *   +0x01f0 -> line 3677
 *   +0x0200 -> line 3689
 *   +0x0204 -> line 3678
 *   +0x0208 -> line 3689
 *   +0x020c -> line 3678
 *   +0x0218 -> line 3680
 *   +0x022c -> line 3681
 *   +0x023c -> line 3685
 *   +0x0240 -> line 3681
 *   +0x0244 -> line 3682
 *   +0x0248 -> line 3685
 *   +0x024c -> line 3682
 *   +0x0254 -> line 3684
 *   +0x0268 -> line 3706
 *   +0x026c -> line 3693
 *   +0x0270 -> line 3708
 *   +0x0274 -> line 3685
 *   +0x0278 -> line 3708
 *   +0x027c -> line 3685
 *   +0x0284 -> line 3686
 *   +0x0294 -> line 3688
 *   +0x02a0 -> line 3706
 *   +0x02a4 -> line 3688
 *   +0x02ac -> line 3689
 *   +0x02b0 -> line 3706
 *   +0x02b4 -> line 3689
 *   +0x02bc -> line 3707
 *   +0x02c4 -> line 3709
 *   +0x02c8 -> line 3690
 *   +0x02cc -> line 3709
 *   +0x02d0 -> line 3690
 *   +0x02d8 -> line 3693
 *   +0x02ec -> line 3697
 *   +0x0300 -> line 3701
 *   +0x0314 -> line 3706
 *   +0x0318 -> line 3707
 *   +0x031c -> line 3708
 *   +0x0320 -> line 3712
 *   +0x035c -> line 3713
 *   +0x039c -> line 3714
 *   +0x03ac -> line 3725
 *   +0x03b0 -> line 3714
 *   +0x03e0 -> line 3717
 *   +0x03e8 -> line 3718
 *   +0x03f0 -> line 3720
 *   +0x03f4 -> line 3721
 *   +0x03fc -> line 3723
 *   +0x0400 -> line 3729
 *   +0x0448 -> line 3730
 *   +0x0470 -> line 3733
 *   +0x0474 -> line 3735
 *   +0x0478 -> line 3736
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateForceField(AGO2_Part_* p, AGO_V4D_* Direction, float xParam1, float xParam2, float xParam3, float xParam4, unsigned int ParticleNumber)
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
    AGO2_BalloonPart_* pParticleArrayOrg;
    AGO2_BalloonPart_* pParticleArray;
    unsigned int NumberOfParticlesCreated;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3459–3603 */
/* addr: 0x001e2250  size: 856 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3459
 *   +0x0004 -> line 3464
 *   +0x0008 -> line 3459
 *   +0x000c -> line 3464
 *   +0x0010 -> line 3459
 *   +0x0014 -> line 3469
 *   +0x0018 -> line 3459
 *   +0x001c -> line 3465
 *   +0x0020 -> line 3459
 *   +0x0024 -> line 3465
 *   +0x0028 -> line 3459
 *   +0x002c -> line 3468
 *   +0x0030 -> line 3459
 *   +0x0038 -> line 3464
 *   +0x003c -> line 3468
 *   +0x0044 -> line 3469
 *   +0x0048 -> line 3464
 *   +0x004c -> line 3468
 *   +0x0054 -> line 3469
 *   +0x0058 -> line 3468
 *   +0x005c -> line 3469
 *   +0x0064 -> line 3470
 *   +0x0080 -> line 3472
 *   +0x0084 -> line 3473
 *   +0x0088 -> line 3472
 *   +0x008c -> line 3473
 *   +0x0090 -> line 3472
 *   +0x0094 -> line 3473
 *   +0x00a0 -> line 3474
 *   +0x00bc -> line 3476
 *   +0x00c0 -> line 3477
 *   +0x00c4 -> line 3476
 *   +0x00c8 -> line 3477
 *   +0x00cc -> line 3476
 *   +0x00d0 -> line 3477
 *   +0x00dc -> line 3478
 *   +0x00f8 -> line 3480
 *   +0x0104 -> line 3481
 *   +0x0118 -> line 3482
 *   +0x0134 -> line 3484
 *   +0x0140 -> line 3485
 *   +0x0154 -> line 3486
 *   +0x0170 -> line 3488
 *   +0x017c -> line 3491
 *   +0x0180 -> line 3488
 *   +0x0184 -> line 3490
 *   +0x018c -> line 3491
 *   +0x0194 -> line 3488
 *   +0x0198 -> line 3490
 *   +0x01a0 -> line 3491
 *   +0x01a8 -> line 3492
 *   +0x01c4 -> line 3494
 *   +0x01d8 -> line 3495
 *   +0x01dc -> line 3494
 *   +0x01e0 -> line 3495
 *   +0x01e4 -> line 3494
 *   +0x01e8 -> line 3495
 *   +0x01f0 -> line 3496
 *   +0x020c -> line 3498
 *   +0x0220 -> line 3499
 *   +0x0224 -> line 3498
 *   +0x0228 -> line 3499
 *   +0x022c -> line 3498
 *   +0x0230 -> line 3499
 *   +0x0238 -> line 3500
 *   +0x0254 -> line 3502
 *   +0x0268 -> line 3503
 *   +0x026c -> line 3502
 *   +0x0270 -> line 3503
 *   +0x0274 -> line 3502
 *   +0x0278 -> line 3503
 *   +0x0280 -> line 3504
 *   +0x029c -> line 3506
 *   +0x02a8 -> line 3509
 *   +0x02ac -> line 3506
 *   +0x02b0 -> line 3508
 *   +0x02b4 -> line 3509
 *   +0x02bc -> line 3508
 *   +0x02c4 -> line 3506
 *   +0x02c8 -> line 3508
 *   +0x02d4 -> line 3509
 *   +0x02dc -> line 3510
 *   +0x02f8 -> line 3512
 *   +0x02fc -> line 3513
 *   +0x0300 -> line 3512
 *   +0x0304 -> line 3513
 *   +0x0308 -> line 3512
 *   +0x030c -> line 3513
 *   +0x0310 -> line 3512
 *   +0x0314 -> line 3513
 *   +0x031c -> line 3514
 *   +0x0338 -> line 3603
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayIce(AGO2_Part_* p)
{
    MTH3D_tdstVector_ Temp3;
    MTH3D_tdstVector_ Temp2;
    MTH3D_tdstVector_ Temp1;
    float smallRadius;
    float radius;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3380–3453 */
/* addr: 0x001e25b0  size: 552 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3380
 *   +0x0004 -> line 3384
 *   +0x0008 -> line 3380
 *   +0x000c -> line 3384
 *   +0x0010 -> line 3380
 *   +0x0014 -> line 3384
 *   +0x0018 -> line 3380
 *   +0x0020 -> line 3384
 *   +0x0034 -> line 3404
 *   +0x0038 -> line 3384
 *   +0x003c -> line 3385
 *   +0x0044 -> line 3384
 *   +0x004c -> line 3385
 *   +0x0050 -> line 3401
 *   +0x0054 -> line 3404
 *   +0x0058 -> line 3384
 *   +0x0060 -> line 3385
 *   +0x0064 -> line 3384
 *   +0x0068 -> line 3385
 *   +0x007c -> line 3404
 *   +0x0080 -> line 3385
 *   +0x0084 -> line 3386
 *   +0x0088 -> line 3385
 *   +0x008c -> line 3386
 *   +0x0090 -> line 3385
 *   +0x0094 -> line 3386
 *   +0x0098 -> line 3404
 *   +0x009c -> line 3385
 *   +0x00ac -> line 3390
 *   +0x00b0 -> line 3388
 *   +0x00b4 -> line 3404
 *   +0x00b8 -> line 3388
 *   +0x00bc -> line 3386
 *   +0x00d0 -> line 3388
 *   +0x00d4 -> line 3390
 *   +0x00dc -> line 3388
 *   +0x00e8 -> line 3390
 *   +0x00f0 -> line 3388
 *   +0x00fc -> line 3389
 *   +0x0110 -> line 3390
 *   +0x0130 -> line 3400
 *   +0x0134 -> line 3402
 *   +0x0138 -> line 3400
 *   +0x013c -> line 3402
 *   +0x0140 -> line 3392
 *   +0x0144 -> line 3402
 *   +0x0148 -> line 3389
 *   +0x014c -> line 3392
 *   +0x0158 -> line 3402
 *   +0x015c -> line 3393
 *   +0x0160 -> line 3400
 *   +0x0164 -> line 3393
 *   +0x0170 -> line 3394
 *   +0x0174 -> line 3404
 *   +0x0180 -> line 3394
 *   +0x018c -> line 3396
 *   +0x0198 -> line 3397
 *   +0x01a4 -> line 3398
 *   +0x01b0 -> line 3400
 *   +0x01bc -> line 3401
 *   +0x01c8 -> line 3402
 *   +0x01d0 -> line 3404
 *   +0x01d4 -> line 3402
 *   +0x01d8 -> line 3404
 *   +0x01e4 -> line 3412
 *   +0x0214 -> line 3453
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DisplayIcePic(AGO2_Part_* p, float radius, float smallRadius, MTH3D_tdstVector_* Temp1, MTH3D_tdstVector_* Temp2, MTH3D_tdstVector_* Temp3)
{
    MTH3D_tdstVector_ SourceVtx3;
    MTH3D_tdstVector_ SourceVtx2;
    MTH3D_tdstVector_ SourceVtx1;
    MTH3D_tdstVector_ DestVtx;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3356–3357 */
/* addr: 0x001e27e0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3356
 *   +0x0008 -> line 3357
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessIce(AGO2_Part_* p)
{
    p->ulType |= 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3349–3351 */
/* addr: 0x001e27f0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3349
 *   +0x0004 -> line 3351
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateIce(int unused, AGO2_Part_* p, float xParam1)
{
    p->Vector1.xX = xParam1;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3300–3345 */
/* addr: 0x001e2800  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3300
 *   +0x0018 -> line 3309
 *   +0x0024 -> line 3310
 *   +0x002c -> line 3312
 *   +0x0038 -> line 3313
 *   +0x0040 -> line 3314
 *   +0x0048 -> line 3319
 *   +0x0050 -> line 3321
 *   +0x006c -> line 3323
 *   +0x0074 -> line 3325
 *   +0x00a0 -> line 3336
 *   +0x00a8 -> line 3340
 *   +0x00ac -> line 3341
 *   +0x00c0 -> line 3345
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayBalloon(AGO2_Part_* p)
{
    AGO2_BalloonPart_* pParticleArrayOrg;
    unsigned int i;
    AGO2_BalloonPart_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3254–3296 */
/* addr: 0x001e28e0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3254
 *   +0x0018 -> line 3263
 *   +0x0024 -> line 3264
 *   +0x002c -> line 3266
 *   +0x0038 -> line 3267
 *   +0x0040 -> line 3268
 *   +0x0048 -> line 3273
 *   +0x0050 -> line 3275
 *   +0x006c -> line 3277
 *   +0x007c -> line 3279
 *   +0x00a8 -> line 3290
 *   +0x00b0 -> line 3294
 *   +0x00b4 -> line 3295
 *   +0x00c8 -> line 3296
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayForceField(AGO2_Part_* p)
{
    AGO2_BalloonPart_* pParticleArrayOrg;
    unsigned int i;
    AGO2_BalloonPart_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 3162–3250 */
/* addr: 0x001e29c0  size: 1096 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3162
 *   +0x0044 -> line 3170
 *   +0x0050 -> line 3171
 *   +0x0058 -> line 3173
 *   +0x0064 -> line 3174
 *   +0x006c -> line 3175
 *   +0x0074 -> line 3182
 *   +0x007c -> line 3184
 *   +0x0088 -> line 3185
 *   +0x008c -> line 3184
 *   +0x0094 -> line 3185
 *   +0x00a4 -> line 3192
 *   +0x00a8 -> line 3198
 *   +0x00ac -> line 3192
 *   +0x00b0 -> line 3198
 *   +0x00b4 -> line 3192
 *   +0x00b8 -> line 3187
 *   +0x00bc -> line 3198
 *   +0x00c0 -> line 3205
 *   +0x00c8 -> line 3192
 *   +0x00d0 -> line 3193
 *   +0x00e4 -> line 3194
 *   +0x0104 -> line 3192
 *   +0x0108 -> line 3194
 *   +0x0118 -> line 3193
 *   +0x011c -> line 3194
 *   +0x0140 -> line 3192
 *   +0x0144 -> line 3194
 *   +0x0154 -> line 3193
 *   +0x0158 -> line 3194
 *   +0x017c -> line 3192
 *   +0x0180 -> line 3194
 *   +0x0190 -> line 3193
 *   +0x0194 -> line 3194
 *   +0x01ac -> line 3198
 *   +0x01c8 -> line 3200
 *   +0x01e0 -> line 3201
 *   +0x01f8 -> line 3202
 *   +0x0210 -> line 3211
 *   +0x0214 -> line 3215
 *   +0x0218 -> line 3211
 *   +0x021c -> line 3215
 *   +0x0220 -> line 3212
 *   +0x0224 -> line 3211
 *   +0x0228 -> line 3213
 *   +0x022c -> line 3212
 *   +0x0230 -> line 3213
 *   +0x0234 -> line 3215
 *   +0x0238 -> line 3216
 *   +0x0240 -> line 3217
 *   +0x024c -> line 3222
 *   +0x0250 -> line 3219
 *   +0x0258 -> line 3220
 *   +0x0260 -> line 3222
 *   +0x0264 -> line 3220
 *   +0x0268 -> line 3222
 *   +0x026c -> line 3223
 *   +0x0274 -> line 3224
 *   +0x0280 -> line 3229
 *   +0x0284 -> line 3225
 *   +0x028c -> line 3227
 *   +0x0294 -> line 3229
 *   +0x0298 -> line 3227
 *   +0x029c -> line 3229
 *   +0x02a0 -> line 3230
 *   +0x02a8 -> line 3231
 *   +0x02b4 -> line 3232
 *   +0x02b8 -> line 3235
 *   +0x02bc -> line 3232
 *   +0x02c0 -> line 3235
 *   +0x02c4 -> line 3233
 *   +0x02c8 -> line 3234
 *   +0x02cc -> line 3233
 *   +0x02d0 -> line 3232
 *   +0x02d4 -> line 3233
 *   +0x02dc -> line 3235
 *   +0x02e4 -> line 3240
 *   +0x02f0 -> line 3241
 *   +0x02f4 -> line 3240
 *   +0x02fc -> line 3241
 *   +0x0304 -> line 3242
 *   +0x0308 -> line 3241
 *   +0x0310 -> line 3242
 *   +0x0330 -> line 3240
 *   +0x0334 -> line 3242
 *   +0x0344 -> line 3241
 *   +0x0348 -> line 3242
 *   +0x036c -> line 3240
 *   +0x0370 -> line 3242
 *   +0x0380 -> line 3241
 *   +0x0384 -> line 3242
 *   +0x03a8 -> line 3240
 *   +0x03ac -> line 3242
 *   +0x03bc -> line 3241
 *   +0x03c0 -> line 3242
 *   +0x03d4 -> line 3244
 *   +0x03d8 -> line 3246
 *   +0x03dc -> line 3247
 *   +0x03f0 -> line 3249
 *   +0x0404 -> line 3250
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessBalloon(AGO2_Part_* p)
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
    MTH3D_tdstVector_ CenteredPoints[4];
    int FoundOneValidParticle;
    AGO2_BalloonPart_* pParticleArrayOrg;
    unsigned int j;
    unsigned int i;
    AGO2_BalloonPart_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2962–3158 */
/* addr: 0x001e2e10  size: 2388 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2962
 *   +0x0058 -> line 2979
 *   +0x006c -> line 2980
 *   +0x008c -> line 2981
 *   +0x0098 -> line 2983
 *   +0x009c -> line 2985
 *   +0x00a0 -> line 2984
 *   +0x00a8 -> line 2985
 *   +0x00b0 -> line 2989
 *   +0x00b8 -> line 2990
 *   +0x00c0 -> line 2992
 *   +0x00c8 -> line 2993
 *   +0x00d0 -> line 3000
 *   +0x00d4 -> line 3001
 *   +0x00dc -> line 2995
 *   +0x00e0 -> line 3001
 *   +0x00f4 -> line 3002
 *   +0x00fc -> line 3001
 *   +0x0104 -> line 3002
 *   +0x0120 -> line 3003
 *   +0x0124 -> line 3015
 *   +0x0128 -> line 3003
 *   +0x012c -> line 3015
 *   +0x0130 -> line 3003
 *   +0x0134 -> line 3015
 *   +0x0138 -> line 3003
 *   +0x0144 -> line 3015
 *   +0x014c -> line 3018
 *   +0x0150 -> line 3019
 *   +0x0158 -> line 3017
 *   +0x015c -> line 3018
 *   +0x0160 -> line 3019
 *   +0x016c -> line 3020
 *   +0x0174 -> line 3019
 *   +0x0178 -> line 3020
 *   +0x0188 -> line 3022
 *   +0x01a0 -> line 3024
 *   +0x01fc -> line 3026
 *   +0x0208 -> line 3027
 *   +0x0210 -> line 3028
 *   +0x0214 -> line 3027
 *   +0x0218 -> line 3028
 *   +0x0220 -> line 3029
 *   +0x022c -> line 3032
 *   +0x0230 -> line 3049
 *   +0x0234 -> line 3063
 *   +0x023c -> line 3032
 *   +0x0248 -> line 3033
 *   +0x024c -> line 3032
 *   +0x0250 -> line 3033
 *   +0x0260 -> line 3034
 *   +0x0270 -> line 3036
 *   +0x0280 -> line 3037
 *   +0x0284 -> line 3036
 *   +0x0288 -> line 3037
 *   +0x0298 -> line 3038
 *   +0x029c -> line 3040
 *   +0x02a0 -> line 3038
 *   +0x02a8 -> line 3040
 *   +0x02b4 -> line 3041
 *   +0x02b8 -> line 3040
 *   +0x02bc -> line 3041
 *   +0x02cc -> line 3044
 *   +0x02d4 -> line 3045
 *   +0x02d8 -> line 3042
 *   +0x02e8 -> line 3044
 *   +0x02ec -> line 3045
 *   +0x02f0 -> line 3044
 *   +0x02f8 -> line 3045
 *   +0x02fc -> line 3049
 *   +0x0304 -> line 3045
 *   +0x030c -> line 3046
 *   +0x0318 -> line 3049
 *   +0x032c -> line 3053
 *   +0x0340 -> line 3057
 *   +0x0354 -> line 3063
 *   +0x0358 -> line 3065
 *   +0x0360 -> line 3073
 *   +0x0364 -> line 3065
 *   +0x0368 -> line 3073
 *   +0x036c -> line 3065
 *   +0x0370 -> line 3071
 *   +0x0374 -> line 3065
 *   +0x0384 -> line 3068
 *   +0x03a0 -> line 3071
 *   +0x03b8 -> line 3073
 *   +0x03c0 -> line 3076
 *   +0x03d8 -> line 3078
 *   +0x0414 -> line 3079
 *   +0x0430 -> line 3080
 *   +0x0438 -> line 3079
 *   +0x0450 -> line 3080
 *   +0x0464 -> line 3081
 *   +0x046c -> line 3082
 *   +0x0478 -> line 3083
 *   +0x0494 -> line 3085
 *   +0x0498 -> line 3086
 *   +0x049c -> line 3087
 *   +0x04a0 -> line 3089
 *   +0x04a8 -> line 3090
 *   +0x04c4 -> line 3093
 *   +0x0504 -> line 3094
 *   +0x0528 -> line 3095
 *   +0x052c -> line 3094
 *   +0x0530 -> line 3095
 *   +0x0534 -> line 3094
 *   +0x053c -> line 3095
 *   +0x0544 -> line 3096
 *   +0x0548 -> line 3095
 *   +0x0554 -> line 3096
 *   +0x055c -> line 3097
 *   +0x0560 -> line 3098
 *   +0x0564 -> line 3097
 *   +0x0568 -> line 3099
 *   +0x0570 -> line 3100
 *   +0x058c -> line 3103
 *   +0x05cc -> line 3104
 *   +0x05f0 -> line 3105
 *   +0x05f4 -> line 3104
 *   +0x05f8 -> line 3105
 *   +0x05fc -> line 3104
 *   +0x0604 -> line 3105
 *   +0x060c -> line 3106
 *   +0x0610 -> line 3105
 *   +0x061c -> line 3106
 *   +0x0624 -> line 3107
 *   +0x0628 -> line 3108
 *   +0x062c -> line 3107
 *   +0x0630 -> line 3108
 *   +0x0634 -> line 3109
 *   +0x0638 -> line 3117
 *   +0x0674 -> line 3118
 *   +0x06b4 -> line 3119
 *   +0x06f4 -> line 3123
 *   +0x0704 -> line 3125
 *   +0x0708 -> line 3123
 *   +0x0710 -> line 3125
 *   +0x0714 -> line 3123
 *   +0x0724 -> line 3125
 *   +0x072c -> line 3123
 *   +0x0730 -> line 3126
 *   +0x0734 -> line 3123
 *   +0x0738 -> line 3126
 *   +0x073c -> line 3123
 *   +0x0748 -> line 3126
 *   +0x0750 -> line 3123
 *   +0x0754 -> line 3127
 *   +0x0758 -> line 3123
 *   +0x075c -> line 3127
 *   +0x0768 -> line 3128
 *   +0x07d0 -> line 3135
 *   +0x07d4 -> line 3129
 *   +0x07f8 -> line 3137
 *   +0x083c -> line 3142
 *   +0x084c -> line 3147
 *   +0x0850 -> line 3142
 *   +0x0880 -> line 3145
 *   +0x0884 -> line 3149
 *   +0x0888 -> line 3151
 *   +0x08d0 -> line 3152
 *   +0x08f8 -> line 3155
 *   +0x08fc -> line 3157
 *   +0x0900 -> line 3158
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateBalloon(AGO2_Part_* p, AGO_V4D_* Direction, float xParam1, float xParam2, float xParam3, unsigned int ParticleNumber)
{
    float xNorm;
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
    AGO2_BalloonPart_* pParticleArrayOrg;
    AGO2_BalloonPart_* pParticleArray;
    unsigned int NumberOfParticlesCreated;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2782–2935 */
/* addr: 0x001e3770  size: 1896 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2782
 *   +0x0004 -> line 2795
 *   +0x0008 -> line 2782
 *   +0x000c -> line 2795
 *   +0x0010 -> line 2782
 *   +0x0018 -> line 2802
 *   +0x001c -> line 2782
 *   +0x0020 -> line 2805
 *   +0x0024 -> line 2782
 *   +0x0040 -> line 2795
 *   +0x0044 -> line 2802
 *   +0x0048 -> line 2801
 *   +0x004c -> line 2803
 *   +0x0058 -> line 2795
 *   +0x0060 -> line 2803
 *   +0x0068 -> line 2805
 *   +0x0070 -> line 2808
 *   +0x0080 -> line 2809
 *   +0x0090 -> line 2811
 *   +0x0094 -> line 2809
 *   +0x0098 -> line 2811
 *   +0x00a0 -> line 2815
 *   +0x00a8 -> line 2820
 *   +0x00b4 -> line 2813
 *   +0x00b8 -> line 2820
 *   +0x00bc -> line 2813
 *   +0x00cc -> line 2814
 *   +0x00d4 -> line 2815
 *   +0x00d8 -> line 2821
 *   +0x00dc -> line 2814
 *   +0x00e8 -> line 2815
 *   +0x00f8 -> line 2816
 *   +0x010c -> line 2817
 *   +0x0120 -> line 2818
 *   +0x0128 -> line 2821
 *   +0x0138 -> line 2822
 *   +0x0148 -> line 2824
 *   +0x014c -> line 2822
 *   +0x0150 -> line 2824
 *   +0x015c -> line 2822
 *   +0x0160 -> line 2828
 *   +0x0168 -> line 2826
 *   +0x0170 -> line 2824
 *   +0x0174 -> line 2826
 *   +0x0180 -> line 2827
 *   +0x0188 -> line 2828
 *   +0x018c -> line 2833
 *   +0x0190 -> line 2827
 *   +0x019c -> line 2828
 *   +0x01ac -> line 2829
 *   +0x01c0 -> line 2830
 *   +0x01d4 -> line 2831
 *   +0x01dc -> line 2833
 *   +0x01e4 -> line 2835
 *   +0x01ec -> line 2836
 *   +0x01f4 -> line 2835
 *   +0x01f8 -> line 2836
 *   +0x0210 -> line 2838
 *   +0x022c -> line 2840
 *   +0x0254 -> line 2841
 *   +0x027c -> line 2848
 *   +0x0280 -> line 2844
 *   +0x0284 -> line 2845
 *   +0x0294 -> line 2843
 *   +0x0298 -> line 2846
 *   +0x02a0 -> line 2848
 *   +0x02a8 -> line 2851
 *   +0x02b8 -> line 2852
 *   +0x02bc -> line 2851
 *   +0x02c0 -> line 2852
 *   +0x02cc -> line 2854
 *   +0x02d0 -> line 2852
 *   +0x02dc -> line 2854
 *   +0x02e8 -> line 2858
 *   +0x02f0 -> line 2863
 *   +0x02fc -> line 2856
 *   +0x0300 -> line 2863
 *   +0x0304 -> line 2856
 *   +0x0314 -> line 2857
 *   +0x031c -> line 2858
 *   +0x0320 -> line 2864
 *   +0x0324 -> line 2857
 *   +0x0330 -> line 2858
 *   +0x0340 -> line 2859
 *   +0x0354 -> line 2860
 *   +0x0368 -> line 2861
 *   +0x0370 -> line 2864
 *   +0x0380 -> line 2865
 *   +0x0384 -> line 2864
 *   +0x0388 -> line 2865
 *   +0x0394 -> line 2867
 *   +0x0398 -> line 2865
 *   +0x039c -> line 2867
 *   +0x03a4 -> line 2865
 *   +0x03a8 -> line 2868
 *   +0x03b0 -> line 2872
 *   +0x03b8 -> line 2870
 *   +0x03bc -> line 2865
 *   +0x03c0 -> line 2870
 *   +0x03c8 -> line 2867
 *   +0x03cc -> line 2870
 *   +0x03d4 -> line 2868
 *   +0x03d8 -> line 2871
 *   +0x03dc -> line 2868
 *   +0x03e0 -> line 2871
 *   +0x03f0 -> line 2872
 *   +0x03f8 -> line 2877
 *   +0x03fc -> line 2872
 *   +0x0408 -> line 2873
 *   +0x041c -> line 2874
 *   +0x0430 -> line 2875
 *   +0x0438 -> line 2877
 *   +0x0440 -> line 2879
 *   +0x0448 -> line 2880
 *   +0x0450 -> line 2879
 *   +0x0454 -> line 2880
 *   +0x0468 -> line 2882
 *   +0x0484 -> line 2884
 *   +0x04ac -> line 2885
 *   +0x04d4 -> line 2892
 *   +0x04d8 -> line 2888
 *   +0x04dc -> line 2889
 *   +0x04ec -> line 2887
 *   +0x04f0 -> line 2890
 *   +0x04f8 -> line 2892
 *   +0x0500 -> line 2895
 *   +0x0510 -> line 2896
 *   +0x0514 -> line 2895
 *   +0x0518 -> line 2896
 *   +0x0524 -> line 2898
 *   +0x0528 -> line 2896
 *   +0x0534 -> line 2898
 *   +0x0540 -> line 2902
 *   +0x0548 -> line 2907
 *   +0x0554 -> line 2900
 *   +0x0558 -> line 2907
 *   +0x055c -> line 2900
 *   +0x056c -> line 2901
 *   +0x0574 -> line 2902
 *   +0x0578 -> line 2908
 *   +0x057c -> line 2901
 *   +0x0588 -> line 2902
 *   +0x0598 -> line 2903
 *   +0x05ac -> line 2904
 *   +0x05c0 -> line 2905
 *   +0x05c8 -> line 2908
 *   +0x05d8 -> line 2909
 *   +0x05dc -> line 2908
 *   +0x05e0 -> line 2909
 *   +0x05ec -> line 2911
 *   +0x05f0 -> line 2909
 *   +0x05f4 -> line 2911
 *   +0x05fc -> line 2909
 *   +0x0600 -> line 2912
 *   +0x0608 -> line 2916
 *   +0x0610 -> line 2914
 *   +0x0614 -> line 2909
 *   +0x0618 -> line 2914
 *   +0x0620 -> line 2911
 *   +0x0624 -> line 2914
 *   +0x062c -> line 2912
 *   +0x0630 -> line 2915
 *   +0x0634 -> line 2912
 *   +0x0638 -> line 2915
 *   +0x0648 -> line 2916
 *   +0x0650 -> line 2921
 *   +0x0654 -> line 2916
 *   +0x0660 -> line 2917
 *   +0x0674 -> line 2918
 *   +0x0688 -> line 2919
 *   +0x0690 -> line 2921
 *   +0x0698 -> line 2923
 *   +0x06a0 -> line 2924
 *   +0x06a8 -> line 2923
 *   +0x06ac -> line 2924
 *   +0x06c0 -> line 2926
 *   +0x06dc -> line 2928
 *   +0x0704 -> line 2929
 *   +0x072c -> line 2932
 *   +0x0738 -> line 2935
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayFFWhirl(AGO2_Part_* p)
{
    float CurrentAngle;
    float AlphaVal;
    float DiameterMul;
    float CurrentHeight;
    float sin1;
    float cos1;
    float p2h[3];
    float p2b[3];
    float p1h[3];
    float p1b[3];
    int j;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2656–2778 */
/* addr: 0x001e3ee0  size: 1652 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2656
 *   +0x0004 -> line 2666
 *   +0x0008 -> line 2656
 *   +0x000c -> line 2666
 *   +0x0010 -> line 2656
 *   +0x0018 -> line 2669
 *   +0x001c -> line 2656
 *   +0x0020 -> line 2669
 *   +0x0024 -> line 2656
 *   +0x003c -> line 2666
 *   +0x0040 -> line 2669
 *   +0x0044 -> line 2666
 *   +0x0048 -> line 2669
 *   +0x004c -> line 2671
 *   +0x0060 -> line 2672
 *   +0x0070 -> line 2674
 *   +0x0074 -> line 2672
 *   +0x0078 -> line 2674
 *   +0x0080 -> line 2676
 *   +0x0084 -> line 2679
 *   +0x0090 -> line 2676
 *   +0x0094 -> line 2681
 *   +0x009c -> line 2676
 *   +0x00a0 -> line 2683
 *   +0x00b0 -> line 2676
 *   +0x00b4 -> line 2683
 *   +0x00b8 -> line 2676
 *   +0x00bc -> line 2677
 *   +0x00c4 -> line 2684
 *   +0x00c8 -> line 2677
 *   +0x00d4 -> line 2678
 *   +0x00dc -> line 2679
 *   +0x00f4 -> line 2680
 *   +0x010c -> line 2681
 *   +0x011c -> line 2684
 *   +0x012c -> line 2685
 *   +0x013c -> line 2690
 *   +0x0140 -> line 2685
 *   +0x0144 -> line 2690
 *   +0x0148 -> line 2687
 *   +0x014c -> line 2696
 *   +0x0150 -> line 2685
 *   +0x0154 -> line 2692
 *   +0x0158 -> line 2696
 *   +0x0164 -> line 2687
 *   +0x016c -> line 2690
 *   +0x0170 -> line 2692
 *   +0x0178 -> line 2687
 *   +0x0180 -> line 2688
 *   +0x0194 -> line 2689
 *   +0x019c -> line 2690
 *   +0x01b4 -> line 2691
 *   +0x01cc -> line 2692
 *   +0x01e0 -> line 2696
 *   +0x01ec -> line 2698
 *   +0x0214 -> line 2700
 *   +0x022c -> line 2702
 *   +0x0238 -> line 2703
 *   +0x0244 -> line 2705
 *   +0x024c -> line 2707
 *   +0x0258 -> line 2710
 *   +0x0268 -> line 2714
 *   +0x026c -> line 2707
 *   +0x0270 -> line 2714
 *   +0x0274 -> line 2707
 *   +0x0284 -> line 2708
 *   +0x0288 -> line 2714
 *   +0x028c -> line 2710
 *   +0x0290 -> line 2714
 *   +0x0294 -> line 2708
 *   +0x02a8 -> line 2709
 *   +0x02ac -> line 2710
 *   +0x02b0 -> line 2715
 *   +0x02b4 -> line 2709
 *   +0x02b8 -> line 2710
 *   +0x02d4 -> line 2711
 *   +0x02f0 -> line 2712
 *   +0x02fc -> line 2715
 *   +0x0308 -> line 2716
 *   +0x0310 -> line 2718
 *   +0x0318 -> line 2716
 *   +0x031c -> line 2725
 *   +0x0320 -> line 2718
 *   +0x0324 -> line 2725
 *   +0x0328 -> line 2718
 *   +0x032c -> line 2725
 *   +0x0330 -> line 2721
 *   +0x0334 -> line 2725
 *   +0x0338 -> line 2721
 *   +0x033c -> line 2718
 *   +0x0340 -> line 2721
 *   +0x0348 -> line 2718
 *   +0x0354 -> line 2719
 *   +0x035c -> line 2721
 *   +0x0364 -> line 2719
 *   +0x0374 -> line 2720
 *   +0x037c -> line 2721
 *   +0x0398 -> line 2722
 *   +0x03b4 -> line 2723
 *   +0x03c4 -> line 2725
 *   +0x03d0 -> line 2727
 *   +0x03fc -> line 2734
 *   +0x0400 -> line 2732
 *   +0x0408 -> line 2733
 *   +0x0410 -> line 2736
 *   +0x0414 -> line 2734
 *   +0x0424 -> line 2736
 *   +0x042c -> line 2739
 *   +0x043c -> line 2740
 *   +0x044c -> line 2742
 *   +0x0450 -> line 2740
 *   +0x0454 -> line 2742
 *   +0x0460 -> line 2746
 *   +0x0468 -> line 2751
 *   +0x0474 -> line 2744
 *   +0x0478 -> line 2751
 *   +0x047c -> line 2744
 *   +0x048c -> line 2745
 *   +0x0494 -> line 2746
 *   +0x0498 -> line 2752
 *   +0x049c -> line 2745
 *   +0x04a8 -> line 2746
 *   +0x04b8 -> line 2747
 *   +0x04cc -> line 2748
 *   +0x04e0 -> line 2749
 *   +0x04e8 -> line 2752
 *   +0x04f8 -> line 2753
 *   +0x0508 -> line 2755
 *   +0x050c -> line 2753
 *   +0x0510 -> line 2755
 *   +0x051c -> line 2753
 *   +0x0520 -> line 2759
 *   +0x0528 -> line 2757
 *   +0x0530 -> line 2755
 *   +0x0534 -> line 2757
 *   +0x0540 -> line 2758
 *   +0x0548 -> line 2759
 *   +0x054c -> line 2764
 *   +0x0550 -> line 2758
 *   +0x055c -> line 2759
 *   +0x056c -> line 2760
 *   +0x0580 -> line 2761
 *   +0x0594 -> line 2762
 *   +0x059c -> line 2764
 *   +0x05a4 -> line 2766
 *   +0x05ac -> line 2767
 *   +0x05b4 -> line 2766
 *   +0x05b8 -> line 2767
 *   +0x05d0 -> line 2769
 *   +0x05ec -> line 2771
 *   +0x0614 -> line 2772
 *   +0x063c -> line 2775
 *   +0x0648 -> line 2778
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2646–2650 */
/* addr: 0x001e4560  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2646
 *   +0x0004 -> line 2647
 *   +0x000c -> line 2648
 *   +0x0010 -> line 2649
 *   +0x0014 -> line 2650
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateFFRing(AGO2_Part_* p, float xParam1)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2553–2640 */
/* addr: 0x001e4580  size: 1072 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2553
 *   +0x0008 -> line 2557
 *   +0x000c -> line 2553
 *   +0x0010 -> line 2557
 *   +0x0014 -> line 2553
 *   +0x003c -> line 2557
 *   +0x006c -> line 2558
 *   +0x00cc -> line 2564
 *   +0x00fc -> line 2567
 *   +0x0100 -> line 2568
 *   +0x0108 -> line 2571
 *   +0x010c -> line 2572
 *   +0x0110 -> line 2566
 *   +0x0120 -> line 2567
 *   +0x0128 -> line 2570
 *   +0x012c -> line 2568
 *   +0x0130 -> line 2571
 *   +0x0134 -> line 2570
 *   +0x0138 -> line 2571
 *   +0x013c -> line 2572
 *   +0x0140 -> line 2574
 *   +0x0194 -> line 2575
 *   +0x01ec -> line 2577
 *   +0x01f8 -> line 2601
 *   +0x01fc -> line 2600
 *   +0x0200 -> line 2602
 *   +0x0204 -> line 2598
 *   +0x0210 -> line 2577
 *   +0x0214 -> line 2602
 *   +0x0218 -> line 2577
 *   +0x0220 -> line 2602
 *   +0x0224 -> line 2577
 *   +0x0238 -> line 2579
 *   +0x0248 -> line 2597
 *   +0x0250 -> line 2598
 *   +0x0254 -> line 2579
 *   +0x0258 -> line 2597
 *   +0x0260 -> line 2598
 *   +0x0264 -> line 2579
 *   +0x0268 -> line 2597
 *   +0x0270 -> line 2598
 *   +0x0274 -> line 2600
 *   +0x0280 -> line 2601
 *   +0x028c -> line 2602
 *   +0x029c -> line 2604
 *   +0x02d4 -> line 2606
 *   +0x02dc -> line 2611
 *   +0x02e0 -> line 2609
 *   +0x02e4 -> line 2606
 *   +0x02e8 -> line 2609
 *   +0x02ec -> line 2604
 *   +0x02f0 -> line 2606
 *   +0x02f4 -> line 2607
 *   +0x0300 -> line 2609
 *   +0x030c -> line 2616
 *   +0x0310 -> line 2613
 *   +0x0314 -> line 2616
 *   +0x0318 -> line 2618
 *   +0x031c -> line 2616
 *   +0x0328 -> line 2621
 *   +0x032c -> line 2618
 *   +0x0330 -> line 2616
 *   +0x0338 -> line 2618
 *   +0x0344 -> line 2621
 *   +0x0350 -> line 2623
 *   +0x0388 -> line 2631
 *   +0x0390 -> line 2632
 *   +0x03c0 -> line 2635
 *   +0x03c4 -> line 2634
 *   +0x03c8 -> line 2635
 *   +0x03cc -> line 2634
 *   +0x03e8 -> line 2635
 *   +0x03f0 -> line 2639
 *   +0x03fc -> line 2640
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayFireWall2(AGO2_Part_* p)
{
    int y;
    float TimeDif;
    float V1;
    float U1;
    int CurrentAnim;
    int i;
    MTH3D_tdstVector_ Pos;
    float xNorm;
    MTH3D_tdstVector_ v2;
    MTH3D_tdstVector_ v1;
    MTH3D_tdstVector_ pdir;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2462–2549 */
/* addr: 0x001e49b0  size: 1136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2462
 *   +0x0008 -> line 2466
 *   +0x000c -> line 2462
 *   +0x0010 -> line 2466
 *   +0x0014 -> line 2462
 *   +0x003c -> line 2466
 *   +0x006c -> line 2467
 *   +0x00cc -> line 2473
 *   +0x00fc -> line 2476
 *   +0x0100 -> line 2477
 *   +0x0108 -> line 2480
 *   +0x010c -> line 2481
 *   +0x0110 -> line 2475
 *   +0x0120 -> line 2476
 *   +0x0128 -> line 2479
 *   +0x012c -> line 2477
 *   +0x0130 -> line 2480
 *   +0x0134 -> line 2479
 *   +0x0138 -> line 2480
 *   +0x013c -> line 2481
 *   +0x0140 -> line 2483
 *   +0x0194 -> line 2484
 *   +0x01ec -> line 2486
 *   +0x01f8 -> line 2510
 *   +0x01fc -> line 2509
 *   +0x0200 -> line 2511
 *   +0x0204 -> line 2507
 *   +0x0210 -> line 2486
 *   +0x0214 -> line 2511
 *   +0x0218 -> line 2486
 *   +0x0220 -> line 2511
 *   +0x0224 -> line 2486
 *   +0x0238 -> line 2488
 *   +0x0248 -> line 2506
 *   +0x0250 -> line 2507
 *   +0x0254 -> line 2488
 *   +0x0258 -> line 2506
 *   +0x0260 -> line 2507
 *   +0x0264 -> line 2488
 *   +0x0268 -> line 2506
 *   +0x0270 -> line 2507
 *   +0x0274 -> line 2509
 *   +0x0280 -> line 2510
 *   +0x028c -> line 2511
 *   +0x029c -> line 2513
 *   +0x02d4 -> line 2515
 *   +0x02dc -> line 2520
 *   +0x02e0 -> line 2518
 *   +0x02e4 -> line 2515
 *   +0x02e8 -> line 2518
 *   +0x02ec -> line 2513
 *   +0x02f0 -> line 2515
 *   +0x02f4 -> line 2516
 *   +0x0300 -> line 2518
 *   +0x030c -> line 2525
 *   +0x0310 -> line 2522
 *   +0x0314 -> line 2525
 *   +0x0318 -> line 2527
 *   +0x031c -> line 2525
 *   +0x0338 -> line 2527
 *   +0x0348 -> line 2530
 *   +0x0390 -> line 2532
 *   +0x03cc -> line 2540
 *   +0x03d4 -> line 2541
 *   +0x0400 -> line 2544
 *   +0x0404 -> line 2543
 *   +0x0408 -> line 2544
 *   +0x040c -> line 2543
 *   +0x0428 -> line 2544
 *   +0x0430 -> line 2548
 *   +0x043c -> line 2549
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayFireWall(AGO2_Part_* p)
{
    int y;
    float TimeDif;
    float V1;
    float U1;
    int CurrentAnim;
    int i;
    MTH3D_tdstVector_ Pos;
    float xNorm;
    MTH3D_tdstVector_ v2;
    MTH3D_tdstVector_ v1;
    MTH3D_tdstVector_ pdir;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2334–2364 */
/* addr: 0x001e4e20  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2338
 *   +0x000c -> line 2334
 *   +0x0010 -> line 2335
 *   +0x0018 -> line 2338
 *   +0x0024 -> line 2340
 *   +0x004c -> line 2343
 *   +0x005c -> line 2344
 *   +0x0060 -> line 2345
 *   +0x0078 -> line 2347
 *   +0x0080 -> line 2349
 *   +0x0098 -> line 2351
 *   +0x009c -> line 2349
 *   +0x00a0 -> line 2351
 *   +0x00bc -> line 2352
 *   +0x00dc -> line 2355
 *   +0x00e0 -> line 2353
 *   +0x00e4 -> line 2358
 *   +0x00e8 -> line 2359
 *   +0x00f0 -> line 2361
 *   +0x00f4 -> line 2360
 *   +0x00f8 -> line 2363
 *   +0x010c -> line 2364
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateFireWall(AGO2_Part_* p, float xParam1)
{
    float* p2;
    float* p1;
    AGO2_Part_* pp;
    unsigned int i;
    unsigned int Found;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2330–2330 */
/* addr: 0x001e4f40  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2330
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessEmpty(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2306–2316 */
/* addr: 0x001e4f50  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2306
 *   +0x0010 -> line 2308
 *   +0x0014 -> line 2311
 *   +0x0020 -> line 2306
 *   +0x0028 -> line 2308
 *   +0x0030 -> line 2309
 *   +0x003c -> line 2311
 *   +0x0050 -> line 2314
 *   +0x005c -> line 2316
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ShrinkFire(AGO2_Part_* p)
{
    float Value;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2251–2300 */
/* addr: 0x001e4fc0  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2251
 *   +0x0010 -> line 2257
 *   +0x001c -> line 2259
 *   +0x0020 -> line 2260
 *   +0x0028 -> line 2261
 *   +0x0030 -> line 2264
 *   +0x003c -> line 2265
 *   +0x0044 -> line 2267
 *   +0x0050 -> line 2268
 *   +0x0058 -> line 2273
 *   +0x005c -> line 2271
 *   +0x0060 -> line 2273
 *   +0x0064 -> line 2275
 *   +0x0074 -> line 2277
 *   +0x0084 -> line 2279
 *   +0x008c -> line 2281
 *   +0x009c -> line 2283
 *   +0x00a0 -> line 2284
 *   +0x00a8 -> line 2286
 *   +0x00b0 -> line 2289
 *   +0x00b4 -> line 2291
 *   +0x00b8 -> line 2292
 *   +0x00bc -> line 2293
 *   +0x00d0 -> line 2295
 *   +0x00d8 -> line 2298
 *   +0x00e4 -> line 2300
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_FadeFire(AGO2_Part_* p)
{
    float TimeDiffTrsp;
    unsigned int OneIsAlive;
    unsigned int i;
    AGO2_FlowParticle_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2200–2248 */
/* addr: 0x001e50c0  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2200
 *   +0x0010 -> line 2208
 *   +0x001c -> line 2210
 *   +0x0020 -> line 2211
 *   +0x0028 -> line 2212
 *   +0x0030 -> line 2215
 *   +0x003c -> line 2216
 *   +0x0044 -> line 2218
 *   +0x0050 -> line 2219
 *   +0x0058 -> line 2230
 *   +0x0080 -> line 2232
 *   +0x0084 -> line 2234
 *   +0x0088 -> line 2232
 *   +0x0090 -> line 2234
 *   +0x0098 -> line 2236
 *   +0x00a8 -> line 2239
 *   +0x00b4 -> line 2241
 *   +0x00c8 -> line 2242
 *   +0x00dc -> line 2243
 *   +0x00f0 -> line 2246
 *   +0x00f4 -> line 2247
 *   +0x0108 -> line 2248
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessFire(AGO2_Part_* p)
{
    float TimeDiff;
    float LocalG;
    unsigned int i;
    AGO2_FlowParticle_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2145–2197 */
/* addr: 0x001e51e0  size: 644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2145
 *   +0x0024 -> line 2153
 *   +0x0030 -> line 2154
 *   +0x0040 -> line 2155
 *   +0x004c -> line 2157
 *   +0x0050 -> line 2159
 *   +0x0054 -> line 2158
 *   +0x005c -> line 2159
 *   +0x0064 -> line 2163
 *   +0x006c -> line 2164
 *   +0x0074 -> line 2166
 *   +0x0080 -> line 2167
 *   +0x0088 -> line 2178
 *   +0x008c -> line 2172
 *   +0x0094 -> line 2173
 *   +0x009c -> line 2175
 *   +0x00a0 -> line 2173
 *   +0x00a4 -> line 2175
 *   +0x00a8 -> line 2174
 *   +0x00ac -> line 2178
 *   +0x00b4 -> line 2181
 *   +0x00fc -> line 2182
 *   +0x0148 -> line 2183
 *   +0x0174 -> line 2186
 *   +0x0178 -> line 2183
 *   +0x019c -> line 2188
 *   +0x01d0 -> line 2189
 *   +0x0204 -> line 2190
 *   +0x0214 -> line 2194
 *   +0x0218 -> line 2190
 *   +0x024c -> line 2192
 *   +0x0250 -> line 2193
 *   +0x0254 -> line 2194
 *   +0x0264 -> line 2197
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateFire(AGO2_Part_* p, AGO_V4D_* Position, unsigned int ParticleNumber)
{
    AGO2_FlowParticle_* pParticleArrayOrg;
    AGO2_FlowParticle_* pParticleArray;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2116–2133 */
/* addr: 0x001e5470  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2116
 *   +0x0010 -> line 2120
 *   +0x001c -> line 2125
 *   +0x0024 -> line 2126
 *   +0x002c -> line 2128
 *   +0x0034 -> line 2129
 *   +0x003c -> line 2132
 *   +0x005c -> line 2133
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayBees(AGO2_Part_* p)
{
    AGO2_FlowParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 2056–2112 */
/* addr: 0x001e54e0  size: 1104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2056
 *   +0x0038 -> line 2064
 *   +0x0044 -> line 2066
 *   +0x0048 -> line 2067
 *   +0x0050 -> line 2068
 *   +0x0058 -> line 2071
 *   +0x0064 -> line 2072
 *   +0x006c -> line 2074
 *   +0x0074 -> line 2075
 *   +0x007c -> line 2078
 *   +0x0080 -> line 2080
 *   +0x0088 -> line 2082
 *   +0x0098 -> line 2084
 *   +0x00d4 -> line 2085
 *   +0x00f0 -> line 2086
 *   +0x00f8 -> line 2085
 *   +0x0100 -> line 2086
 *   +0x0118 -> line 2089
 *   +0x0120 -> line 2087
 *   +0x0134 -> line 2089
 *   +0x014c -> line 2090
 *   +0x01a8 -> line 2091
 *   +0x01fc -> line 2092
 *   +0x0220 -> line 2100
 *   +0x0224 -> line 2097
 *   +0x022c -> line 2100
 *   +0x0234 -> line 2092
 *   +0x0264 -> line 2097
 *   +0x0270 -> line 2096
 *   +0x0280 -> line 2097
 *   +0x0290 -> line 2096
 *   +0x0298 -> line 2097
 *   +0x02ac -> line 2100
 *   +0x02dc -> line 2103
 *   +0x02f8 -> line 2104
 *   +0x0314 -> line 2105
 *   +0x0330 -> line 2107
 *   +0x0398 -> line 2108
 *   +0x03fc -> line 2109
 *   +0x0400 -> line 2110
 *   +0x0404 -> line 2111
 *   +0x0418 -> line 2112
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessBees(AGO2_Part_* p)
{
    float xNorm;
    MTH3D_tdstVector_ v2;
    float Val;
    float TimeDiff;
    unsigned int i;
    AGO2_BeeParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1987–2052 */
/* addr: 0x001e5930  size: 1140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1987
 *   +0x0004 -> line 1993
 *   +0x0008 -> line 1987
 *   +0x000c -> line 1993
 *   +0x0010 -> line 1987
 *   +0x0014 -> line 1997
 *   +0x0018 -> line 1987
 *   +0x001c -> line 1994
 *   +0x0020 -> line 1987
 *   +0x002c -> line 1994
 *   +0x0030 -> line 1987
 *   +0x003c -> line 1997
 *   +0x0040 -> line 1987
 *   +0x0050 -> line 1993
 *   +0x0054 -> line 1987
 *   +0x0058 -> line 1993
 *   +0x0060 -> line 1994
 *   +0x0080 -> line 1997
 *   +0x00ec -> line 2001
 *   +0x00f0 -> line 2000
 *   +0x00f4 -> line 2001
 *   +0x0104 -> line 2002
 *   +0x0110 -> line 2004
 *   +0x0114 -> line 2006
 *   +0x0118 -> line 2005
 *   +0x0120 -> line 2006
 *   +0x0128 -> line 2010
 *   +0x0130 -> line 2011
 *   +0x0138 -> line 2013
 *   +0x0144 -> line 2014
 *   +0x014c -> line 2025
 *   +0x0150 -> line 2019
 *   +0x0154 -> line 2025
 *   +0x0158 -> line 2019
 *   +0x015c -> line 2020
 *   +0x0164 -> line 2022
 *   +0x0168 -> line 2020
 *   +0x016c -> line 2022
 *   +0x0170 -> line 2021
 *   +0x0174 -> line 2025
 *   +0x017c -> line 2027
 *   +0x01b8 -> line 2028
 *   +0x01e8 -> line 2029
 *   +0x0218 -> line 2030
 *   +0x0248 -> line 2032
 *   +0x0288 -> line 2033
 *   +0x02cc -> line 2034
 *   +0x030c -> line 2037
 *   +0x0318 -> line 2038
 *   +0x0324 -> line 2039
 *   +0x032c -> line 2042
 *   +0x036c -> line 2043
 *   +0x03ac -> line 2044
 *   +0x03ec -> line 2046
 *   +0x0400 -> line 2050
 *   +0x0404 -> line 2046
 *   +0x0418 -> line 2050
 *   +0x041c -> line 2046
 *   +0x0434 -> line 2048
 *   +0x0438 -> line 2050
 *   +0x0440 -> line 2051
 *   +0x0444 -> line 2052
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateBees(unsigned int ulParticleType, AGO2_Part_* p, AGO_V4D_* Position, unsigned int ParticleNumber)
{
    float* p2;
    float* p1;
    AGO2_BeeParticle_* pParticleArrayOrg;
    AGO2_BeeParticle_* pParticleArray;
    float RandomValueZ;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1958–1975 */
/* addr: 0x001e5db0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1958
 *   +0x0010 -> line 1962
 *   +0x001c -> line 1967
 *   +0x0024 -> line 1968
 *   +0x002c -> line 1970
 *   +0x0034 -> line 1971
 *   +0x003c -> line 1974
 *   +0x0058 -> line 1975
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayLeaves(AGO2_Part_* p)
{
    AGO2_LeavesParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1799–1954 */
/* addr: 0x001e5e20  size: 3104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1799
 *   +0x0040 -> line 1812
 *   +0x004c -> line 1814
 *   +0x0050 -> line 1815
 *   +0x0058 -> line 1816
 *   +0x0060 -> line 1819
 *   +0x006c -> line 1820
 *   +0x0074 -> line 1822
 *   +0x007c -> line 1823
 *   +0x0084 -> line 1832
 *   +0x00ac -> line 1840
 *   +0x00b8 -> line 1842
 *   +0x00c8 -> line 1846
 *   +0x00d4 -> line 1849
 *   +0x00d8 -> line 1846
 *   +0x00dc -> line 1849
 *   +0x00e8 -> line 1846
 *   +0x00f8 -> line 1849
 *   +0x013c -> line 1850
 *   +0x01a0 -> line 1851
 *   +0x01c0 -> line 1854
 *   +0x01c4 -> line 1858
 *   +0x01c8 -> line 1854
 *   +0x01cc -> line 1853
 *   +0x01d0 -> line 1862
 *   +0x01d4 -> line 1858
 *   +0x01e4 -> line 1854
 *   +0x01e8 -> line 1858
 *   +0x01ec -> line 1859
 *   +0x01f0 -> line 1862
 *   +0x01f4 -> line 1859
 *   +0x01f8 -> line 1855
 *   +0x01fc -> line 1859
 *   +0x020c -> line 1860
 *   +0x0214 -> line 1862
 *   +0x0218 -> line 1860
 *   +0x0228 -> line 1862
 *   +0x0230 -> line 1864
 *   +0x0238 -> line 1865
 *   +0x0244 -> line 1867
 *   +0x0258 -> line 1868
 *   +0x026c -> line 1869
 *   +0x0274 -> line 1871
 *   +0x0280 -> line 1872
 *   +0x028c -> line 1873
 *   +0x029c -> line 1875
 *   +0x02a8 -> line 1876
 *   +0x02b4 -> line 1877
 *   +0x02c4 -> line 1879
 *   +0x0328 -> line 1880
 *   +0x0390 -> line 1884
 *   +0x0398 -> line 1885
 *   +0x039c -> line 1884
 *   +0x03a0 -> line 1886
 *   +0x03a4 -> line 1885
 *   +0x03a8 -> line 1884
 *   +0x03b0 -> line 1885
 *   +0x03b8 -> line 1886
 *   +0x03bc -> line 1885
 *   +0x03c4 -> line 1886
 *   +0x03d4 -> line 1888
 *   +0x0438 -> line 1890
 *   +0x0498 -> line 1897
 *   +0x04d4 -> line 1898
 *   +0x0504 -> line 1899
 *   +0x0534 -> line 1900
 *   +0x0564 -> line 1903
 *   +0x059c -> line 1904
 *   +0x05b0 -> line 1907
 *   +0x05b4 -> line 1904
 *   +0x05c8 -> line 1911
 *   +0x05cc -> line 1904
 *   +0x05e4 -> line 1907
 *   +0x05f4 -> line 1908
 *   +0x05f8 -> line 1907
 *   +0x0604 -> line 1908
 *   +0x0614 -> line 1909
 *   +0x0618 -> line 1908
 *   +0x0624 -> line 1909
 *   +0x0640 -> line 1912
 *   +0x067c -> line 1913
 *   +0x06bc -> line 1915
 *   +0x06fc -> line 1917
 *   +0x0738 -> line 1918
 *   +0x0778 -> line 1919
 *   +0x07b8 -> line 1920
 *   +0x0800 -> line 1924
 *   +0x0840 -> line 1925
 *   +0x0880 -> line 1926
 *   +0x0890 -> line 1928
 *   +0x0898 -> line 1926
 *   +0x08c8 -> line 1928
 *   +0x0900 -> line 1933
 *   +0x0940 -> line 1934
 *   +0x0984 -> line 1935
 *   +0x09c4 -> line 1937
 *   +0x09f8 -> line 1939
 *   +0x0a60 -> line 1940
 *   +0x0ac0 -> line 1941
 *   +0x0b14 -> line 1942
 *   +0x0b78 -> line 1944
 *   +0x0b98 -> line 1945
 *   +0x0bb8 -> line 1947
 *   +0x0bc0 -> line 1948
 *   +0x0bc8 -> line 1949
 *   +0x0bd0 -> line 1953
 *   +0x0be0 -> line 1954
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessLeavesParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit(AGO2_Part_* p)
{
    float xNorm;
    MTH3D_tdstVector_ V2;
    float RandomValueZ;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    float sin1;
    float cos1;
    MTH3D_tdstVector_ Norm;
    float Dot2;
    float Dot1;
    AGO_V4D_ v1;
    float TimeDiff;
    int i;
    AGO2_LeavesParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1694–1796 */
/* addr: 0x001e6a40  size: 2288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1694
 *   +0x0004 -> line 1702
 *   +0x0008 -> line 1694
 *   +0x000c -> line 1705
 *   +0x0010 -> line 1694
 *   +0x0014 -> line 1702
 *   +0x0018 -> line 1694
 *   +0x001c -> line 1705
 *   +0x0020 -> line 1694
 *   +0x002c -> line 1705
 *   +0x0030 -> line 1694
 *   +0x0040 -> line 1703
 *   +0x0044 -> line 1694
 *   +0x0048 -> line 1703
 *   +0x004c -> line 1694
 *   +0x0064 -> line 1702
 *   +0x0084 -> line 1703
 *   +0x00a4 -> line 1705
 *   +0x010c -> line 1709
 *   +0x0110 -> line 1708
 *   +0x0114 -> line 1709
 *   +0x0124 -> line 1710
 *   +0x0130 -> line 1712
 *   +0x0134 -> line 1714
 *   +0x0138 -> line 1713
 *   +0x0140 -> line 1714
 *   +0x0148 -> line 1718
 *   +0x0150 -> line 1719
 *   +0x0158 -> line 1721
 *   +0x0164 -> line 1722
 *   +0x016c -> line 1725
 *   +0x0170 -> line 1727
 *   +0x017c -> line 1736
 *   +0x0180 -> line 1731
 *   +0x0184 -> line 1727
 *   +0x0188 -> line 1736
 *   +0x018c -> line 1727
 *   +0x0190 -> line 1730
 *   +0x0194 -> line 1731
 *   +0x0198 -> line 1732
 *   +0x019c -> line 1736
 *   +0x01a4 -> line 1738
 *   +0x01e0 -> line 1739
 *   +0x0210 -> line 1740
 *   +0x0240 -> line 1743
 *   +0x0278 -> line 1744
 *   +0x028c -> line 1749
 *   +0x0290 -> line 1744
 *   +0x02a4 -> line 1751
 *   +0x02a8 -> line 1744
 *   +0x02c0 -> line 1747
 *   +0x02c8 -> line 1749
 *   +0x02cc -> line 1747
 *   +0x02dc -> line 1748
 *   +0x02f4 -> line 1749
 *   +0x030c -> line 1752
 *   +0x0348 -> line 1753
 *   +0x0388 -> line 1755
 *   +0x03c8 -> line 1757
 *   +0x0404 -> line 1758
 *   +0x0444 -> line 1759
 *   +0x0480 -> line 1760
 *   +0x04c8 -> line 1764
 *   +0x0508 -> line 1765
 *   +0x0548 -> line 1766
 *   +0x0558 -> line 1768
 *   +0x0560 -> line 1766
 *   +0x0590 -> line 1768
 *   +0x05c8 -> line 1773
 *   +0x0608 -> line 1774
 *   +0x064c -> line 1775
 *   +0x0690 -> line 1777
 *   +0x06c4 -> line 1779
 *   +0x0728 -> line 1780
 *   +0x0788 -> line 1781
 *   +0x07dc -> line 1782
 *   +0x0840 -> line 1793
 *   +0x0844 -> line 1784
 *   +0x0848 -> line 1793
 *   +0x084c -> line 1784
 *   +0x0868 -> line 1785
 *   +0x0888 -> line 1787
 *   +0x0890 -> line 1788
 *   +0x0898 -> line 1789
 *   +0x08a0 -> line 1791
 *   +0x08a4 -> line 1793
 *   +0x08b0 -> line 1795
 *   +0x08b4 -> line 1796
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateSerialCameraParticleLeaves(unsigned int ulParticleType, AGO2_Part_* p, AGO_V4D_* Position, AGO_V4D_* Direction, unsigned int ParticleNumber)
{
    float xNorm;
    float* p2;
    float* p1;
    MTH3D_tdstVector_ V2;
    AGO2_LeavesParticle_* pParticleArrayOrg;
    AGO2_LeavesParticle_* pParticleArray;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1602–1681 */
/* addr: 0x001e7330  size: 1404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1602
 *   +0x0034 -> line 1610
 *   +0x0040 -> line 1612
 *   +0x0044 -> line 1613
 *   +0x004c -> line 1614
 *   +0x0054 -> line 1617
 *   +0x0060 -> line 1618
 *   +0x0068 -> line 1620
 *   +0x0070 -> line 1621
 *   +0x0078 -> line 1630
 *   +0x00a0 -> line 1635
 *   +0x00ac -> line 1632
 *   +0x00b0 -> line 1635
 *   +0x00b4 -> line 1632
 *   +0x00bc -> line 1635
 *   +0x00c4 -> line 1637
 *   +0x00d0 -> line 1639
 *   +0x00e0 -> line 1642
 *   +0x0114 -> line 1649
 *   +0x0118 -> line 1650
 *   +0x011c -> line 1651
 *   +0x0120 -> line 1642
 *   +0x012c -> line 1644
 *   +0x0140 -> line 1645
 *   +0x0154 -> line 1646
 *   +0x0168 -> line 1649
 *   +0x0170 -> line 1650
 *   +0x0174 -> line 1649
 *   +0x017c -> line 1650
 *   +0x0184 -> line 1651
 *   +0x0188 -> line 1650
 *   +0x0190 -> line 1651
 *   +0x01a0 -> line 1653
 *   +0x0200 -> line 1655
 *   +0x0260 -> line 1660
 *   +0x029c -> line 1661
 *   +0x02cc -> line 1662
 *   +0x02fc -> line 1663
 *   +0x032c -> line 1665
 *   +0x03a0 -> line 1666
 *   +0x0418 -> line 1669
 *   +0x0420 -> line 1673
 *   +0x0424 -> line 1669
 *   +0x0430 -> line 1670
 *   +0x0434 -> line 1669
 *   +0x0440 -> line 1670
 *   +0x0450 -> line 1671
 *   +0x0454 -> line 1670
 *   +0x0460 -> line 1671
 *   +0x047c -> line 1674
 *   +0x04b8 -> line 1675
 *   +0x04f8 -> line 1676
 *   +0x0534 -> line 1678
 *   +0x0538 -> line 1680
 *   +0x0548 -> line 1681
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessSnowParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit(AGO2_Part_* p)
{
    float RandomValueZ;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    float xNorm;
    AGO_V4D_ v1;
    float TimeDiff;
    float LocalG;
    int i;
    AGO2_RainParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1532–1599 */
/* addr: 0x001e78b0  size: 1176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1532
 *   +0x0038 -> line 1538
 *   +0x004c -> line 1540
 *   +0x0058 -> line 1541
 *   +0x005c -> line 1543
 *   +0x0060 -> line 1541
 *   +0x0064 -> line 1543
 *   +0x006c -> line 1540
 *   +0x0088 -> line 1541
 *   +0x00a8 -> line 1543
 *   +0x0114 -> line 1547
 *   +0x0118 -> line 1546
 *   +0x011c -> line 1547
 *   +0x012c -> line 1548
 *   +0x0138 -> line 1550
 *   +0x013c -> line 1552
 *   +0x0140 -> line 1551
 *   +0x0148 -> line 1552
 *   +0x0150 -> line 1556
 *   +0x0158 -> line 1557
 *   +0x0160 -> line 1559
 *   +0x016c -> line 1560
 *   +0x0174 -> line 1563
 *   +0x0178 -> line 1565
 *   +0x0184 -> line 1574
 *   +0x0188 -> line 1569
 *   +0x0190 -> line 1565
 *   +0x0194 -> line 1574
 *   +0x0198 -> line 1565
 *   +0x019c -> line 1568
 *   +0x01a0 -> line 1569
 *   +0x01a4 -> line 1570
 *   +0x01a8 -> line 1574
 *   +0x01b0 -> line 1576
 *   +0x01ec -> line 1577
 *   +0x021c -> line 1578
 *   +0x024c -> line 1581
 *   +0x02c0 -> line 1582
 *   +0x0338 -> line 1587
 *   +0x033c -> line 1585
 *   +0x0340 -> line 1587
 *   +0x0344 -> line 1585
 *   +0x0348 -> line 1589
 *   +0x034c -> line 1585
 *   +0x035c -> line 1586
 *   +0x0374 -> line 1587
 *   +0x038c -> line 1590
 *   +0x03c8 -> line 1591
 *   +0x0408 -> line 1592
 *   +0x041c -> line 1596
 *   +0x0420 -> line 1592
 *   +0x0434 -> line 1596
 *   +0x0438 -> line 1592
 *   +0x0450 -> line 1594
 *   +0x0454 -> line 1596
 *   +0x0460 -> line 1598
 *   +0x0464 -> line 1599
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateSerialCameraParticleSnow(unsigned int ulParticleType, AGO2_Part_* p, AGO_V4D_* Position, AGO_V4D_* Direction, unsigned int ParticleNumber)
{
    float* p2;
    float* p1;
    AGO2_RainParticle_* pParticleArrayOrg;
    AGO2_RainParticle_* pParticleArray;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1502–1520 */
/* addr: 0x001e7d50  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1502
 *   +0x0010 -> line 1505
 *   +0x001c -> line 1510
 *   +0x0028 -> line 1511
 *   +0x0030 -> line 1513
 *   +0x0038 -> line 1514
 *   +0x0040 -> line 1517
 *   +0x004c -> line 1519
 *   +0x0060 -> line 1520
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayRainParticleSpriteGroup(AGO2_Part_* p)
{
    AGO2_RainParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1418–1499 */
/* addr: 0x001e7dc0  size: 1092 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1418
 *   +0x0034 -> line 1426
 *   +0x0040 -> line 1428
 *   +0x0044 -> line 1429
 *   +0x004c -> line 1430
 *   +0x0054 -> line 1433
 *   +0x0060 -> line 1434
 *   +0x0068 -> line 1436
 *   +0x0070 -> line 1437
 *   +0x0078 -> line 1446
 *   +0x00a0 -> line 1449
 *   +0x00a4 -> line 1451
 *   +0x00a8 -> line 1449
 *   +0x00b0 -> line 1451
 *   +0x00b8 -> line 1453
 *   +0x00c8 -> line 1457
 *   +0x00cc -> line 1464
 *   +0x00d0 -> line 1465
 *   +0x00d4 -> line 1466
 *   +0x00d8 -> line 1457
 *   +0x00e0 -> line 1459
 *   +0x00f4 -> line 1460
 *   +0x0108 -> line 1461
 *   +0x011c -> line 1464
 *   +0x0124 -> line 1465
 *   +0x0128 -> line 1464
 *   +0x0130 -> line 1465
 *   +0x0138 -> line 1466
 *   +0x013c -> line 1465
 *   +0x0144 -> line 1466
 *   +0x0154 -> line 1468
 *   +0x01b8 -> line 1470
 *   +0x01e8 -> line 1472
 *   +0x0218 -> line 1478
 *   +0x0254 -> line 1479
 *   +0x0284 -> line 1480
 *   +0x02b4 -> line 1481
 *   +0x02c0 -> line 1486
 *   +0x02c8 -> line 1481
 *   +0x02d0 -> line 1486
 *   +0x02d8 -> line 1481
 *   +0x02e4 -> line 1490
 *   +0x02e8 -> line 1487
 *   +0x02ec -> line 1486
 *   +0x02fc -> line 1487
 *   +0x0300 -> line 1481
 *   +0x0304 -> line 1487
 *   +0x030c -> line 1481
 *   +0x0310 -> line 1487
 *   +0x0314 -> line 1488
 *   +0x0318 -> line 1487
 *   +0x0324 -> line 1488
 *   +0x0340 -> line 1491
 *   +0x037c -> line 1492
 *   +0x03bc -> line 1493
 *   +0x03f8 -> line 1497
 *   +0x03fc -> line 1498
 *   +0x0410 -> line 1499
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessRainNearCameraParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit(AGO2_Part_* p)
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
    AGO2_RainParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1333–1414 */
/* addr: 0x001e8210  size: 1092 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1333
 *   +0x0034 -> line 1341
 *   +0x0040 -> line 1343
 *   +0x0044 -> line 1344
 *   +0x004c -> line 1345
 *   +0x0054 -> line 1348
 *   +0x0060 -> line 1349
 *   +0x0068 -> line 1351
 *   +0x0070 -> line 1352
 *   +0x0078 -> line 1361
 *   +0x00a0 -> line 1364
 *   +0x00a4 -> line 1366
 *   +0x00a8 -> line 1364
 *   +0x00b0 -> line 1366
 *   +0x00b8 -> line 1368
 *   +0x00c8 -> line 1372
 *   +0x00cc -> line 1379
 *   +0x00d0 -> line 1380
 *   +0x00d4 -> line 1381
 *   +0x00d8 -> line 1372
 *   +0x00e0 -> line 1374
 *   +0x00f4 -> line 1375
 *   +0x0108 -> line 1376
 *   +0x011c -> line 1379
 *   +0x0124 -> line 1380
 *   +0x0128 -> line 1379
 *   +0x0130 -> line 1380
 *   +0x0138 -> line 1381
 *   +0x013c -> line 1380
 *   +0x0144 -> line 1381
 *   +0x0154 -> line 1383
 *   +0x01b8 -> line 1385
 *   +0x01e8 -> line 1387
 *   +0x0218 -> line 1393
 *   +0x0254 -> line 1394
 *   +0x0284 -> line 1395
 *   +0x02b4 -> line 1396
 *   +0x02c0 -> line 1401
 *   +0x02c8 -> line 1396
 *   +0x02d0 -> line 1401
 *   +0x02d8 -> line 1396
 *   +0x02e4 -> line 1405
 *   +0x02e8 -> line 1402
 *   +0x02ec -> line 1401
 *   +0x02fc -> line 1402
 *   +0x0300 -> line 1396
 *   +0x0304 -> line 1402
 *   +0x030c -> line 1396
 *   +0x0310 -> line 1402
 *   +0x0314 -> line 1403
 *   +0x0318 -> line 1402
 *   +0x0324 -> line 1403
 *   +0x0340 -> line 1406
 *   +0x037c -> line 1407
 *   +0x03bc -> line 1408
 *   +0x03f8 -> line 1412
 *   +0x03fc -> line 1413
 *   +0x0410 -> line 1414
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessRainParticleGroupWithSpeedAndGravityAndKillWithLowerZLimit(AGO2_Part_* p)
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
    AGO2_RainParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1268–1330 */
/* addr: 0x001e8660  size: 920 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1268
 *   +0x0004 -> line 1275
 *   +0x0008 -> line 1268
 *   +0x000c -> line 1278
 *   +0x0010 -> line 1268
 *   +0x0014 -> line 1275
 *   +0x0018 -> line 1268
 *   +0x001c -> line 1278
 *   +0x0020 -> line 1268
 *   +0x002c -> line 1278
 *   +0x0030 -> line 1268
 *   +0x003c -> line 1276
 *   +0x0040 -> line 1268
 *   +0x0044 -> line 1276
 *   +0x0048 -> line 1268
 *   +0x005c -> line 1275
 *   +0x007c -> line 1276
 *   +0x009c -> line 1278
 *   +0x0104 -> line 1282
 *   +0x0108 -> line 1281
 *   +0x010c -> line 1282
 *   +0x011c -> line 1283
 *   +0x0128 -> line 1285
 *   +0x012c -> line 1287
 *   +0x0130 -> line 1286
 *   +0x0138 -> line 1287
 *   +0x0140 -> line 1291
 *   +0x0148 -> line 1292
 *   +0x0150 -> line 1294
 *   +0x015c -> line 1295
 *   +0x0164 -> line 1300
 *   +0x016c -> line 1298
 *   +0x0170 -> line 1300
 *   +0x0174 -> line 1304
 *   +0x0178 -> line 1309
 *   +0x017c -> line 1304
 *   +0x0180 -> line 1305
 *   +0x0184 -> line 1300
 *   +0x0188 -> line 1309
 *   +0x018c -> line 1300
 *   +0x0190 -> line 1303
 *   +0x0194 -> line 1304
 *   +0x0198 -> line 1305
 *   +0x019c -> line 1309
 *   +0x01a4 -> line 1311
 *   +0x01e0 -> line 1312
 *   +0x0210 -> line 1313
 *   +0x021c -> line 1318
 *   +0x0220 -> line 1316
 *   +0x0224 -> line 1313
 *   +0x0234 -> line 1316
 *   +0x0238 -> line 1313
 *   +0x023c -> line 1320
 *   +0x0240 -> line 1316
 *   +0x0250 -> line 1317
 *   +0x0254 -> line 1313
 *   +0x0258 -> line 1317
 *   +0x026c -> line 1318
 *   +0x028c -> line 1321
 *   +0x02c8 -> line 1322
 *   +0x0308 -> line 1323
 *   +0x031c -> line 1327
 *   +0x0320 -> line 1323
 *   +0x0334 -> line 1327
 *   +0x0338 -> line 1323
 *   +0x0350 -> line 1325
 *   +0x0354 -> line 1327
 *   +0x0360 -> line 1329
 *   +0x0364 -> line 1330
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateSerialCameraParticleRain(unsigned int ulParticleType, AGO2_Part_* p, AGO_V4D_* Position, AGO_V4D_* Direction, unsigned int ParticleNumber)
{
    float* p2;
    float* p1;
    AGO2_RainParticle_* pParticleArrayOrg;
    AGO2_RainParticle_* pParticleArray;
    float RandomValueY;
    float RandomValueX;
    float RandomValue;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1253–1256 */
/* addr: 0x001e8a00  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1253
 *   +0x0010 -> line 1254
 *   +0x0028 -> line 1255
 *   +0x0034 -> line 1256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayLightning(AGO2_Part_* p)
{
    AGO2_Part_* pPart;

    pPart = p;
    GLI_v_DisplayLightning((GLD_tdstViewportAttributes_*)g_AGO2_p_stViewport,
                            (MTH3D_tdstVector_*)&pPart->Position,
                            (MTH3D_tdstVector_*)&pPart->Direction,
                            pPart->pMaterial1, pPart->xSize[0]);
    pPart->ulType |= 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1250–1250 */
/* addr: 0x001e8a50  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1250
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessLightning(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1238–1245 */
/* addr: 0x001e8a60  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1238
 *   +0x0004 -> line 1239
 *   +0x000c -> line 1240
 *   +0x0014 -> line 1242
 *   +0x0018 -> line 1241
 *   +0x001c -> line 1244
 *   +0x0020 -> line 1245
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateLightning(unsigned int _unused, AGO2_Part_* p)
{
    p->xTransparencySpeed = 0.0f;
    p->xSize[0] = 2.5f;
    p->xSize[1] = 2.0f;
    p->xShrinkingSpeed = 0.0f;
    p->xTransparency = 255.0f;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1174–1223 */
/* addr: 0x001e8a90  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1174
 *   +0x0010 -> line 1180
 *   +0x001c -> line 1182
 *   +0x0020 -> line 1183
 *   +0x0028 -> line 1184
 *   +0x0030 -> line 1187
 *   +0x003c -> line 1188
 *   +0x0044 -> line 1190
 *   +0x0050 -> line 1191
 *   +0x0058 -> line 1196
 *   +0x005c -> line 1194
 *   +0x0060 -> line 1196
 *   +0x0064 -> line 1198
 *   +0x0074 -> line 1200
 *   +0x0084 -> line 1202
 *   +0x008c -> line 1204
 *   +0x009c -> line 1206
 *   +0x00a0 -> line 1207
 *   +0x00a8 -> line 1209
 *   +0x00b0 -> line 1212
 *   +0x00b4 -> line 1214
 *   +0x00b8 -> line 1215
 *   +0x00bc -> line 1216
 *   +0x00d0 -> line 1218
 *   +0x00d8 -> line 1221
 *   +0x00e4 -> line 1223
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_FadeFlow(AGO2_Part_* p)
{
    float TimeDiffTrsp;
    unsigned int OneIsAlive;
    unsigned int i;
    AGO2_FlowParticle_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1154–1171 */
/* addr: 0x001e8b90  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1154
 *   +0x0010 -> line 1158
 *   +0x001c -> line 1163
 *   +0x0024 -> line 1164
 *   +0x002c -> line 1166
 *   +0x0034 -> line 1167
 *   +0x003c -> line 1170
 *   +0x0058 -> line 1171
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayFlowMotionBlur(AGO2_Part_* p)
{
    AGO2_FlowParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1134–1151 */
/* addr: 0x001e8c00  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1134
 *   +0x0010 -> line 1138
 *   +0x001c -> line 1143
 *   +0x0024 -> line 1144
 *   +0x002c -> line 1146
 *   +0x0034 -> line 1147
 *   +0x003c -> line 1150
 *   +0x0058 -> line 1151
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayFlow(AGO2_Part_* p)
{
    AGO2_FlowParticle_* pParticleArray;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1082–1131 */
/* addr: 0x001e8c70  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1082
 *   +0x0010 -> line 1089
 *   +0x001c -> line 1091
 *   +0x0020 -> line 1092
 *   +0x0028 -> line 1093
 *   +0x0030 -> line 1096
 *   +0x003c -> line 1097
 *   +0x0044 -> line 1099
 *   +0x0050 -> line 1100
 *   +0x0058 -> line 1108
 *   +0x005c -> line 1106
 *   +0x0060 -> line 1105
 *   +0x0064 -> line 1106
 *   +0x0078 -> line 1108
 *   +0x0080 -> line 1110
 *   +0x0090 -> line 1113
 *   +0x009c -> line 1115
 *   +0x00a4 -> line 1116
 *   +0x00ac -> line 1117
 *   +0x00b4 -> line 1119
 *   +0x00c8 -> line 1120
 *   +0x00dc -> line 1121
 *   +0x00f0 -> line 1124
 *   +0x0104 -> line 1125
 *   +0x0118 -> line 1126
 *   +0x012c -> line 1128
 *   +0x0130 -> line 1129
 *   +0x0134 -> line 1130
 *   +0x0148 -> line 1131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessFlow(AGO2_Part_* p)
{
    float TimeDiff;
    float LocalG;
    unsigned int i;
    AGO2_FlowParticle_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1026–1079 */
/* addr: 0x001e8dd0  size: 480 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1026
 *   +0x0030 -> line 1033
 *   +0x0034 -> line 1034
 *   +0x0040 -> line 1035
 *   +0x004c -> line 1037
 *   +0x0050 -> line 1039
 *   +0x0054 -> line 1038
 *   +0x005c -> line 1039
 *   +0x0064 -> line 1043
 *   +0x006c -> line 1044
 *   +0x0074 -> line 1046
 *   +0x0080 -> line 1047
 *   +0x0088 -> line 1058
 *   +0x008c -> line 1052
 *   +0x0090 -> line 1058
 *   +0x0094 -> line 1052
 *   +0x0098 -> line 1053
 *   +0x00a4 -> line 1054
 *   +0x00a8 -> line 1058
 *   +0x00b0 -> line 1060
 *   +0x00b8 -> line 1061
 *   +0x00c0 -> line 1062
 *   +0x00c8 -> line 1065
 *   +0x00cc -> line 1069
 *   +0x00d0 -> line 1065
 *   +0x00d4 -> line 1066
 *   +0x00dc -> line 1067
 *   +0x00e4 -> line 1070
 *   +0x0124 -> line 1071
 *   +0x0160 -> line 1072
 *   +0x0174 -> line 1076
 *   +0x0178 -> line 1072
 *   +0x018c -> line 1076
 *   +0x0190 -> line 1072
 *   +0x01a8 -> line 1074
 *   +0x01ac -> line 1076
 *   +0x01b8 -> line 1078
 *   +0x01bc -> line 1079
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateFlow(AGO2_Part_* p, AGO_V4D_* Position, AGO_V4D_* Direction, unsigned int ParticleNumber)
{
    AGO2_FlowParticle_* pParticleArrayOrg;
    AGO2_FlowParticle_* pParticleArray;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 1005–1011 */
/* addr: 0x001e8fb0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1005
 *   +0x000c -> line 1007
 *   +0x0014 -> line 1005
 *   +0x0020 -> line 1006
 *   +0x0038 -> line 1007
 *   +0x0060 -> line 1009
 *   +0x006c -> line 1011
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ShrinkNormal(AGO2_Part_* p)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 950–960 */
/* addr: 0x001e9030  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 950
 *   +0x000c -> line 951
 *   +0x0014 -> line 950
 *   +0x001c -> line 951
 *   +0x002c -> line 953
 *   +0x0030 -> line 954
 *   +0x0038 -> line 955
 *   +0x0040 -> line 956
 *   +0x005c -> line 958
 *   +0x0060 -> line 960
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_FadeNormal(AGO2_Part_* p)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 937–937 */
/* addr: 0x001e90a0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 937
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char AGO2_CreateOrdinaryParticle(void)
{
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 921–925 */
/* addr: 0x001e90b0  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 921
 *   +0x0020 -> line 922
 *   +0x0038 -> line 923
 *   +0x0050 -> line 924
 *   +0x0064 -> line 925
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_ProcessSimpleParticleWithSpeedAndGravity(AGO2_Part_* p)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 896–907 */
/* addr: 0x001e9120  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 896
 *   +0x000c -> line 897
 *   +0x0018 -> line 898
 *   +0x003c -> line 905
 *   +0x0048 -> line 907
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_DisplayOrdinarySprite(AGO2_Part_* p)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 804–813 */
/* addr: 0x001e9180  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 805
 *   +0x0004 -> line 804
 *   +0x000c -> line 805
 *   +0x0014 -> line 807
 *   +0x002c -> line 809
 *   +0x003c -> line 811
 *   +0x0040 -> line 812
 *   +0x0050 -> line 813
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vClearParticlesOfThatTypeWithChannel(unsigned int PartType, unsigned int Channel)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 790–799 */
/* addr: 0x001e91e0  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 791
 *   +0x0004 -> line 790
 *   +0x000c -> line 791
 *   +0x0014 -> line 793
 *   +0x0020 -> line 795
 *   +0x002c -> line 796
 *   +0x0030 -> line 795
 *   +0x0034 -> line 797
 *   +0x0038 -> line 798
 *   +0x0048 -> line 799
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vClearParticlesOfThatType(unsigned int PartType)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 782–786 */
/* addr: 0x001e9230  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 783
 *   +0x0008 -> line 782
 *   +0x0010 -> line 783
 *   +0x0038 -> line 784
 *   +0x0048 -> line 785
 *   +0x0064 -> line 786
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
AGO2_Part_* AGO2_bIsTypeAlreadyExists(unsigned int PartType)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 675–776 */
/* addr: 0x001e92a0  size: 1008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 675
 *   +0x0034 -> line 691
 *   +0x0040 -> line 693
 *   +0x00b0 -> line 694
 *   +0x0150 -> line 698
 *   +0x0158 -> line 699
 *   +0x01b8 -> line 700
 *   +0x01c0 -> line 707
 *   +0x01cc -> line 705
 *   +0x01d0 -> line 706
 *   +0x01d8 -> line 707
 *   +0x0220 -> line 711
 *   +0x0230 -> line 714
 *   +0x0234 -> line 713
 *   +0x0238 -> line 714
 *   +0x024c -> line 715
 *   +0x0250 -> line 714
 *   +0x0254 -> line 715
 *   +0x0258 -> line 714
 *   +0x0270 -> line 715
 *   +0x027c -> line 717
 *   +0x0280 -> line 719
 *   +0x0284 -> line 721
 *   +0x0288 -> line 720
 *   +0x0290 -> line 724
 *   +0x0298 -> line 726
 *   +0x02a4 -> line 728
 *   +0x02bc -> line 732
 *   +0x02c4 -> line 734
 *   +0x02f0 -> line 736
 *   +0x02f4 -> line 737
 *   +0x0300 -> line 740
 *   +0x030c -> line 743
 *   +0x0310 -> line 744
 *   +0x0314 -> line 746
 *   +0x0318 -> line 748
 *   +0x031c -> line 751
 *   +0x0324 -> line 753
 *   +0x0338 -> line 754
 *   +0x0344 -> line 757
 *   +0x0348 -> line 758
 *   +0x0358 -> line 760
 *   +0x0360 -> line 762
 *   +0x0388 -> line 765
 *   +0x0394 -> line 766
 *   +0x0398 -> line 768
 *   +0x03a4 -> line 770
 *   +0x03ac -> line 773
 *   +0x03b0 -> line 775
 *   +0x03bc -> line 776
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vDisplayAllParts(GLD_tdstViewportAttributes_* _p_stViewport)
{
    unsigned int SkipThisOne;
    unsigned int DisplayPending;
    unsigned int NextMaterialIndex;
    void* pCurrentMaterial;
    unsigned int BaseID;
    int Found;
    float xAlphaTemp;
    AGO2_Part_* p;
    unsigned int j;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 634–656 */
/* addr: 0x001e9690  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 634
 *   +0x0010 -> line 639
 *   +0x0018 -> line 641
 *   +0x001c -> line 642
 *   +0x0024 -> line 644
 *   +0x002c -> line 647
 *   +0x0040 -> line 650
 *   +0x0058 -> line 653
 *   +0x0074 -> line 654
 *   +0x0078 -> line 655
 *   +0x0088 -> line 656
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vProcessAllParts(void)
{
    AGO2_Part_* p;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 590–622 */
/* addr: 0x001e9730  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 590
 *   +0x0014 -> line 597
 *   +0x0018 -> line 590
 *   +0x001c -> line 597
 *   +0x0020 -> line 590
 *   +0x0024 -> line 592
 *   +0x0028 -> line 595
 *   +0x002c -> line 591
 *   +0x0030 -> line 599
 *   +0x003c -> line 601
 *   +0x004c -> line 603
 *   +0x0058 -> line 605
 *   +0x0060 -> line 608
 *   +0x0068 -> line 611
 *   +0x0070 -> line 614
 *   +0x007c -> line 615
 *   +0x0080 -> line 616
 *   +0x0084 -> line 617
 *   +0x0088 -> line 619
 *   +0x008c -> line 620
 *   +0x0098 -> line 621
 *   +0x00a4 -> line 622
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vDestroyAllParts(void)
{
    unsigned int Limit;
    AGO2_Part_* pdst;
    AGO2_Part_* psrc;
    unsigned int NumToSkip;
    unsigned int Source;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 523–578 */
/* addr: 0x001e9800  size: 700 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 523
 *   +0x0004 -> line 527
 *   +0x0008 -> line 523
 *   +0x0050 -> line 527
 *   +0x008c -> line 530
 *   +0x00d8 -> line 534
 *   +0x00e0 -> line 537
 *   +0x00f0 -> line 539
 *   +0x00f4 -> line 537
 *   +0x00f8 -> line 539
 *   +0x00fc -> line 537
 *   +0x0104 -> line 539
 *   +0x010c -> line 541
 *   +0x0110 -> line 542
 *   +0x015c -> line 552
 *   +0x0160 -> line 565
 *   +0x0164 -> line 552
 *   +0x0168 -> line 565
 *   +0x016c -> line 553
 *   +0x0170 -> line 565
 *   +0x0174 -> line 553
 *   +0x0178 -> line 565
 *   +0x017c -> line 543
 *   +0x0180 -> line 553
 *   +0x0184 -> line 552
 *   +0x0188 -> line 556
 *   +0x018c -> line 558
 *   +0x0190 -> line 565
 *   +0x01a8 -> line 543
 *   +0x01ac -> line 565
 *   +0x01b0 -> line 544
 *   +0x01b4 -> line 546
 *   +0x01d4 -> line 547
 *   +0x01f4 -> line 548
 *   +0x01f8 -> line 549
 *   +0x0200 -> line 550
 *   +0x0208 -> line 551
 *   +0x0210 -> line 552
 *   +0x0218 -> line 553
 *   +0x0220 -> line 554
 *   +0x0228 -> line 556
 *   +0x022c -> line 557
 *   +0x0230 -> line 558
 *   +0x0234 -> line 560
 *   +0x0238 -> line 561
 *   +0x023c -> line 565
 *   +0x026c -> line 567
 *   +0x0278 -> line 577
 *   +0x027c -> line 578
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
AGO2_Part_* AGO2_vCreatePart(unsigned int ulParticleType, AGO_V4D_* Position, AGO_V4D_* Direction, AGO_V4D_* Vector1, AGO_V4D_* Vector2, AGO_V4D_* Vector3, AGO_V4D_* Vector4, void* pMaterial1, void* pMaterial2, float xParam1, float xParam2, float xParam3, float xParam4, HIE_tdstSuperObject_* pLaunchingCharacter, unsigned int ParticleNumber)
{
    float* p2;
    float* p1;
    AGO2_Part_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2.c lines 416–489 */
/* addr: 0x001e9ac0  size: 1668 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 416
 *   +0x0004 -> line 419
 *   +0x0008 -> line 416
 *   +0x000c -> line 419
 *   +0x0010 -> line 416
 *   +0x0014 -> line 419
 *   +0x0018 -> line 416
 *   +0x001c -> line 419
 *   +0x0028 -> line 424
 *   +0x0074 -> line 441
 *   +0x0078 -> line 443
 *   +0x007c -> line 441
 *   +0x0080 -> line 445
 *   +0x0084 -> line 443
 *   +0x0090 -> line 445
 *   +0x0094 -> line 443
 *   +0x0098 -> line 445
 *   +0x009c -> line 443
 *   +0x00a8 -> line 445
 *   +0x00ac -> line 443
 *   +0x00b0 -> line 449
 *   +0x00b4 -> line 443
 *   +0x00c0 -> line 449
 *   +0x00c4 -> line 443
 *   +0x00c8 -> line 449
 *   +0x00cc -> line 443
 *   +0x00d8 -> line 449
 *   +0x00dc -> line 443
 *   +0x00e0 -> line 461
 *   +0x00e4 -> line 443
 *   +0x00f0 -> line 461
 *   +0x00f4 -> line 441
 *   +0x00f8 -> line 445
 *   +0x00fc -> line 441
 *   +0x0100 -> line 475
 *   +0x0104 -> line 441
 *   +0x0108 -> line 475
 *   +0x010c -> line 441
 *   +0x0110 -> line 445
 *   +0x0114 -> line 441
 *   +0x0118 -> line 445
 *   +0x011c -> line 441
 *   +0x0120 -> line 445
 *   +0x0134 -> line 441
 *   +0x0138 -> line 447
 *   +0x013c -> line 441
 *   +0x0140 -> line 447
 *   +0x0148 -> line 449
 *   +0x014c -> line 447
 *   +0x0150 -> line 449
 *   +0x0154 -> line 447
 *   +0x0160 -> line 449
 *   +0x0164 -> line 447
 *   +0x0168 -> line 449
 *   +0x016c -> line 447
 *   +0x0178 -> line 461
 *   +0x017c -> line 447
 *   +0x0180 -> line 461
 *   +0x0184 -> line 441
 *   +0x0188 -> line 451
 *   +0x018c -> line 441
 *   +0x0190 -> line 451
 *   +0x0194 -> line 441
 *   +0x0198 -> line 475
 *   +0x019c -> line 441
 *   +0x01a0 -> line 475
 *   +0x01a4 -> line 443
 *   +0x01b4 -> line 451
 *   +0x01bc -> line 453
 *   +0x01dc -> line 455
 *   +0x020c -> line 457
 *   +0x023c -> line 459
 *   +0x027c -> line 461
 *   +0x028c -> line 445
 *   +0x0290 -> line 463
 *   +0x0294 -> line 445
 *   +0x0298 -> line 463
 *   +0x029c -> line 445
 *   +0x02a4 -> line 463
 *   +0x02ac -> line 479
 *   +0x02b0 -> line 463
 *   +0x02b4 -> line 479
 *   +0x02b8 -> line 463
 *   +0x02bc -> line 465
 *   +0x02cc -> line 467
 *   +0x02dc -> line 469
 *   +0x030c -> line 471
 *   +0x033c -> line 473
 *   +0x036c -> line 475
 *   +0x037c -> line 445
 *   +0x0380 -> line 477
 *   +0x0384 -> line 445
 *   +0x0388 -> line 477
 *   +0x038c -> line 445
 *   +0x0394 -> line 477
 *   +0x039c -> line 479
 *   +0x03ac -> line 445
 *   +0x03bc -> line 479
 *   +0x03c4 -> line 447
 *   +0x03e4 -> line 449
 *   +0x0404 -> line 451
 *   +0x040c -> line 449
 *   +0x0414 -> line 451
 *   +0x041c -> line 449
 *   +0x042c -> line 451
 *   +0x044c -> line 453
 *   +0x045c -> line 459
 *   +0x0464 -> line 453
 *   +0x047c -> line 455
 *   +0x049c -> line 457
 *   +0x04bc -> line 459
 *   +0x04c4 -> line 479
 *   +0x04cc -> line 459
 *   +0x04d4 -> line 479
 *   +0x04dc -> line 461
 *   +0x050c -> line 467
 *   +0x0514 -> line 463
 *   +0x0544 -> line 465
 *   +0x0564 -> line 467
 *   +0x056c -> line 465
 *   +0x057c -> line 467
 *   +0x059c -> line 469
 *   +0x05bc -> line 471
 *   +0x05dc -> line 473
 *   +0x05fc -> line 475
 *   +0x0614 -> line 477
 *   +0x061c -> line 475
 *   +0x0634 -> line 477
 *   +0x065c -> line 479
 *   +0x066c -> line 489
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_vFirstInitAndRegisterAGO2Types(void)
{
    /* TODO: decompile from asm/... */
}
