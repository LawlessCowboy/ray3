/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstState_ tdstState_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef union SAV2_tduData_ SAV2_tduData_;
typedef struct SAV2_tdstElement_ SAV2_tdstElement_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct anon_0 anon_0;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct FIL_tdstFileNameListElement_ FIL_tdstFileNameListElement_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct stColliderInfo_ stColliderInfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct stMorphData stMorphData;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct anon_3 anon_3;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdst_EntryActions_ tdst_EntryActions_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct tdst_Album_ tdst_Album_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct DNM_stParsingDatas DNM_stParsingDatas;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct anon_1 anon_1;
typedef struct _tdstBinarizedDataForMenu _tdstBinarizedDataForMenu;
typedef struct MTH_stMove MTH_stMove;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct LST2_tdstAnchorToSAV2_tdxHandleToElementDyn LST2_tdstAnchorToSAV2_tdxHandleToElementDyn;
typedef struct tdstSaveGameSlot_ tdstSaveGameSlot_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct DNM_stReport DNM_stReport;
typedef struct tdstGameOptions_ tdstGameOptions_;
typedef struct anon_2 anon_2;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct SAV2_MenuOptionHeader_ SAV2_MenuOptionHeader_;
typedef struct tdstMenu2DPages_ tdstMenu2DPages_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct SAV2_tdstHeader_ SAV2_tdstHeader_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct SAV2_tdstList_ SAV2_tdstList_;

typedef enum anon_enum_0094d4e0 {
    eSaveFileTypePage = 0,
    eLoadFileTypePage = 1,
    eLevelTypePage = 2,
    eGameTypePage = 3,
    eOptionsTypePage = 4,
    eControlOptionTypePage = 5,
    eAudioOptionTypePage = 6,
    eVideoOptionTypePage = 7,
    eBonusTypePage = 8,
    eArcadeTypePage = 9,
    eCinematicTypePage = 10,
    eXTraTypePage = 11,
    eAlbumTypePage = 12,
    eHallOfFameTypePage = 13,
    eStartMenuTypePage = 14,
    eCenterScreenTypePage = 15,
    ePal60_1_TypePage = 16,
    ePal60_2_TypePage = 17,
    ePal60_3_TypePage = 18,
    eProgressive_1_TypePage = 19,
    eProgressive_2_TypePage = 20,
    eProgressive_3_TypePage = 21,
    eEndOfGamePage = 22,
} anon_enum_0094d4e0;

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

typedef enum e_ucListViewport_ {
    CAM_e_NoViewport = -1,
} e_ucListViewport_;

typedef enum e_ucCameraStates_ {
    CAM_e_State_GoToOptimal = 0,
    CAM_e_State_GoToComputedOptimal = 1,
    CAM_e_State_FailureVisibility = 2,
    CAM_e_State_FailureVisibilityWithoutCut = 3,
    CAM_e_TempState_GhostMode = 4,
    CAM_e_TempState_ApexMode = 5,
} e_ucCameraStates_;

typedef enum anon_enum_00956429 {
    eActionNothing = 0,
    eActionWait = 1,
    eActionEndOfPage = 2,
    eActionBeginOfPage = 3,
    eActionAnimeStamp = 4,
    eActionShakeCamera = 5,
    eActionValidateSelection = 6,
    eActionAreYouSure = 7,
    eActionHelp = 8,
} anon_enum_00956429;

typedef enum anon_enum_00958841 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_00958841;

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

union SAV2_tduData_ {
    unsigned char u8Data; /* +0x0 */
    unsigned short u16Data; /* +0x0 */
    unsigned int u32Data; /* +0x0 */
    float fFloat; /* +0x0 */
    MTH3D_tdstVector_* p_stVector; /* +0x0 */
    int p_szString; /* +0x0 */
    int p_vArray; /* +0x0 */
};

struct SAV2_tdstElement_ {
    SAV2_tdstElement_* hNextBrotherDyn; /* +0x0 */
    SAV2_tdstElement_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToSAV2_tdxHandleToElementDyn* hFatherDyn; /* +0x8 */
    int p_szElementName; /* +0xc */
    unsigned char ucDataInformation; /* +0x10 */
    unsigned char ucNumberOfData; /* +0x11 */
    SAV2_tduData_ uData; /* +0x14 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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

struct anon_0 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    FIL_tdstFileNameListElement_* hFirstElementDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstMicro_ {
    MAT_tdstTransformation_* hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
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

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct tdstMSWay_ {
    WP_tdstGraph_* m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct FIL_tdstFileNameListElement_ {
    FIL_tdstFileNameListElement_* hNextBrotherDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn* hFatherDyn; /* +0x8 */
    int szFileName; /* +0xc */
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

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_00958841 eUsedMechanics; /* +0x8 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstAveragePosition_ {
    MTH3D_tdstVector_ a_CheckedSpeed[8]; /* +0x0 */
    MTH3D_tdstVector_ a_CheckedPos[8]; /* +0x60 */
    float a_CheckedTime[8]; /* +0xc0 */
};

struct tdstSightAxisSystem_ {
    MTH3D_tdstVector_ SightAxis; /* +0x0 */
    MTH3D_tdstVector_ FirstComplementaryAxis; /* +0xc */
    MTH3D_tdstVector_ SecondComplementaryAxis; /* +0x18 */
};

struct tdstCineinfo_ {
    tdstInternalStructurCineinfo_* hInit; /* +0x0 */
    tdstInternalStructurCineinfo_* hCurrent; /* +0x4 */
    tdstInternalStructurCineinfo_* hVisibility; /* +0x8 */
    tdstInternalStructurCineinfo_* hWork; /* +0xc */
    MTH3D_tdstVector_ stLastFailedOrigin; /* +0x10 */
    MTH3D_tdstVector_ stLastFailedWanted; /* +0x1c */
    MTH3D_tdstVector_ stForceTarget; /* +0x28 */
    MTH3D_tdstVector_ stForcePosition; /* +0x34 */
    MTH3D_tdstVector_ stForceRefAxisY; /* +0x40 */
    MTH3D_tdstVector_ stForceRefAxisZ; /* +0x4c */
    float xApexRatio; /* +0x58 */
    float xLastDeltaCut; /* +0x5c */
    e_ucCameraStates_ eState; /* +0x60 */
    float xCounter1; /* +0x64 */
    float xCounter2; /* +0x68 */
    float xCounter3; /* +0x6c */
    float xCounter4; /* +0x70 */
    unsigned char ucVolIAFlags; /* +0x74 */
    unsigned char ucPerIAFlags; /* +0x75 */
    char cLastCutAngleSens; /* +0x76 */
    tdstAveragePosition_ AveragePosition; /* +0x78 */
    tdstSightAxisSystem_ stSightAxisSystem; /* +0x158 */
    unsigned char bCanDoBestPos; /* +0x17c */
    tdstTransparentSuperObjectForCamera_ a10_stTransparentSuperObjectForCamera[10]; /* +0x180 */
    short xNumberOfTransparentSuperObjectForCamera; /* +0x248 */
    float fTransparency; /* +0x24c */
    float fTransparencySpeed; /* +0x250 */
    unsigned char ucTransparencyFlag; /* +0x254 */
    unsigned char bCameraIsMirrored; /* +0x255 */
    unsigned char bLightComputation; /* +0x256 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct stColliderInfo_ {
    int a_stColliderActors[2]; /* +0x0 */
    MTH3D_tdstVector_ a_stColliderVectors[2]; /* +0x8 */
    float a_xColliderReals[2]; /* +0x20 */
    unsigned char ucColliderType; /* +0x28 */
    unsigned char ucColliderPriority; /* +0x29 */
    unsigned char a2_ucUnused[2]; /* +0x2a */
};

struct tdstCollSet_ {
    tdstZdxList_* hZddList; /* +0x0 */
    tdstZdxList_* hZdeList; /* +0x4 */
    tdstZdxList_* hZdmList; /* +0x8 */
    tdstZdxList_* hZdrList; /* +0xc */
    tdstCsaList_* hZddActivationList; /* +0x10 */
    tdstCsaList_* hZdeActivationList; /* +0x14 */
    tdstCsaList_* hZdmActivationList; /* +0x18 */
    tdstCsaList_* hZdrActivationList; /* +0x1c */
    tdstZoneSetList_* hZddCurrentActivation; /* +0x20 */
    tdstZoneSetList_* hZdeCurrentActivation; /* +0x24 */
    tdstZoneSetList_* hZdrCurrentActivation; /* +0x28 */
    tdstZoneSetList_* hZdmCurrentActivation; /* +0x2c */
    unsigned int ulFBZddPriviligedZones; /* +0x30 */
    unsigned int ulFBZdePriviligedZones; /* +0x34 */
    unsigned int ulFBZdmPriviligedZones; /* +0x38 */
    unsigned int ulFBZdrPriviligedZones; /* +0x3c */
    unsigned char ucCollComputeFrequency; /* +0x40 */
    unsigned char ucCharacterPriority; /* +0x41 */
    unsigned char ucCollisionFlag; /* +0x42 */
    stColliderInfo_ stColliderInfo; /* +0x44 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
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

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct tdstMSLight_ {
    unsigned char bLocalLight; /* +0x0 */
    unsigned char bOnlyLocalLight; /* +0x1 */
    unsigned char bGiroPhare; /* +0x2 */
    unsigned char bPulsing; /* +0x3 */
    MTH3D_tdstVector_ stOffsetVect; /* +0x4 */
    MTH3D_tdstVector_ stAngle; /* +0x10 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstSectInfo_ {
    HIE_tdstSuperObject_* hCurrentSector; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNodeInSector; /* +0x4 */
    MTH3D_tdstVector_ stPreviousPosition; /* +0x8 */
    HIE_tdstSuperObject_* hSectorSynchroCharacter; /* +0x14 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    HIE_tdstSuperObject_* hMechaCharacter; /* +0xc */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct DNM_stDynamicsBaseBlock {
    int m_lObjectType; /* +0x0 */
    int m_pCurrentIdCard; /* +0x4 */
    unsigned int ulFlags; /* +0x8 */
    unsigned int ulEndFlags; /* +0xc */
    float m_xGravity; /* +0x10 */
    float m_xSlopeLimit; /* +0x14 */
    float m_xCosSlope; /* +0x18 */
    float m_xSlide; /* +0x1c */
    float m_xRebound; /* +0x20 */
    MTH3D_tdstVector_ m_stImposeSpeed; /* +0x24 */
    MTH3D_tdstVector_ m_stProposeSpeed; /* +0x30 */
    MTH3D_tdstVector_ m_stPreviousSpeed; /* +0x3c */
    MTH3D_tdstVector_ m_stScale; /* +0x48 */
    MTH3D_tdstVector_ m_stSpeedAnim; /* +0x54 */
    MTH3D_tdstVector_ m_stSafeTranslation; /* +0x60 */
    MTH3D_tdstVector_ m_stAddTranslation; /* +0x6c */
    MAT_tdstTransformation_ m_stPreviousMatrix; /* +0x80 */
    MAT_tdstTransformation_ m_stCurrentMatrix; /* +0xe0 */
    MTH3D_tdstMatrix_ m_stImposeRotationMatrix; /* +0x140 */
    unsigned char m_ucNbFrame; /* +0x164 */
    DNM_stReport* m_pstReport; /* +0x168 */
};

struct DNM_stDynamicsAdvancedBlock {
    float m_xInertiaX; /* +0x0 */
    float m_xInertiaY; /* +0x4 */
    float m_xInertiaZ; /* +0x8 */
    float m_xStreamPrority; /* +0xc */
    float m_xStreamFactor; /* +0x10 */
    float m_xSlideFactorX; /* +0x14 */
    float m_xSlideFactorY; /* +0x18 */
    float m_xSlideFactorZ; /* +0x1c */
    float m_xPreviousSlide; /* +0x20 */
    MTH3D_tdstVector_ m_stMaxSpeed; /* +0x24 */
    MTH3D_tdstVector_ m_stStreamSpeed; /* +0x30 */
    MTH3D_tdstVector_ m_stAddSpeed; /* +0x3c */
    MTH3D_tdstVector_ m_stLimit; /* +0x48 */
    MTH3D_tdstVector_ m_stCollisionTranslation; /* +0x54 */
    MTH3D_tdstVector_ m_stInertiaTranslation; /* +0x60 */
    MTH3D_tdstVector_ m_stGroundNormal; /* +0x6c */
    MTH3D_tdstVector_ m_stWallNormal; /* +0x78 */
    char m_cCollideCounter; /* +0x84 */
};

struct anon_3 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    MTH3D_tdstVector_ m_stData1; /* +0x4 */
    MTH3D_tdstVector_ m_stData2; /* +0x10 */
    MTH3D_tdstVector_ m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_3 m_stData6; /* +0x34 */
    anon_0 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    MTH3D_tdstVector_ m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    MTH3D_tdstVector_ m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct DNM_stDynamicsComplexBlock {
    float m_xTiltIntensity; /* +0x0 */
    float m_xTiltInertia; /* +0x4 */
    float m_xTiltOrigin; /* +0x8 */
    float m_xTiltAngle; /* +0xc */
    float m_xHangingLimit; /* +0x10 */
    MTH3D_tdstVector_ m_stContact; /* +0x14 */
    MTH3D_tdstVector_ m_stFallTranslation; /* +0x20 */
    stMACDPID m_stExternalDatas; /* +0x2c */
    HIE_tdstSuperObject_* m_hPlatform; /* +0xa8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xac..0xaf */
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct tdst_EntryActions_ {
    IPT_tdstEntryElement_* hScreenSnapShot; /* +0x0 */
    IPT_tdstEntryElement_* hDisplayModeToggle; /* +0x4 */
    IPT_tdstEntryElement_* hDisplayRaster; /* +0x8 */
    IPT_tdstEntryElement_* hDisplayRasterMode; /* +0xc */
    IPT_tdstEntryElement_* hDisplayRasterPCU64; /* +0x10 */
    IPT_tdstEntryElement_* hReinitTheMap; /* +0x14 */
    IPT_tdstEntryElement_* hDisplayOnlyStatic; /* +0x18 */
    IPT_tdstEntryElement_* hDisplayLight; /* +0x1c */
    IPT_tdstEntryElement_* hDisplayZDC; /* +0x20 */
    IPT_tdstEntryElement_* hDisplaySectorInfos; /* +0x24 */
    IPT_tdstEntryElement_* hDisplayWaypoints; /* +0x28 */
    IPT_tdstEntryElement_* hDisplayBoundingVolumes; /* +0x2c */
    IPT_tdstEntryElement_* hDisplayRayTraceSegments; /* +0x30 */
    IPT_tdstEntryElement_* hDisplayActivatedGendoors; /* +0x34 */
    IPT_tdstEntryElement_* hClearOptionsDisplayed; /* +0x38 */
    IPT_tdstEntryElement_* hChooseLevel; /* +0x3c */
    IPT_tdstEntryElement_* hChooseLevelUp; /* +0x40 */
    IPT_tdstEntryElement_* hChooseLevelDown; /* +0x44 */
    IPT_tdstEntryElement_* hChooseLevelValidate; /* +0x48 */
    IPT_tdstEntryElement_* hChooseLevelInvalidate; /* +0x4c */
    IPT_tdstEntryElement_* hFlyingMode; /* +0x50 */
    IPT_tdstEntryElement_* hFlyingModeForward; /* +0x54 */
    IPT_tdstEntryElement_* hFlyingModeBackward; /* +0x58 */
    IPT_tdstEntryElement_* hFlyingModeUp; /* +0x5c */
    IPT_tdstEntryElement_* hFlyingModeDown; /* +0x60 */
    IPT_tdstEntryElement_* hFlyingModeLeft; /* +0x64 */
    IPT_tdstEntryElement_* hFlyingModeRight; /* +0x68 */
    IPT_tdstEntryElement_* hFlyingModeLookUp; /* +0x6c */
    IPT_tdstEntryElement_* hFlyingModeLookDown; /* +0x70 */
    IPT_tdstEntryElement_* hFlyingModeStrafeLeft; /* +0x74 */
    IPT_tdstEntryElement_* hFlyingModeStrafeRight; /* +0x78 */
    IPT_tdstEntryElement_* hFlyingModeDoubleSpeed; /* +0x7c */
    IPT_tdstEntryElement_* hFlyingModeHalfSpeed; /* +0x80 */
    IPT_tdstEntryElement_* hMemoryStackLog; /* +0x84 */
    IPT_tdstEntryElement_* hDisplayTextOverScanLimit; /* +0x88 */
    IPT_tdstEntryElement_* hAltDisplayTextOverScanLimit; /* +0x8c */
    IPT_tdstEntryElement_* hEngineMenu_Display; /* +0x90 */
    IPT_tdstEntryElement_* hEngineMenu_Enter; /* +0x94 */
    IPT_tdstEntryElement_* hEngineMenu_Up; /* +0x98 */
    IPT_tdstEntryElement_* hEngineMenu_Down; /* +0x9c */
    IPT_tdstEntryElement_* hEngineMenu_Left; /* +0xa0 */
    IPT_tdstEntryElement_* hEngineMenu_Right; /* +0xa4 */
    IPT_tdstEntryElement_* hEngineMenu_NextPage; /* +0xa8 */
    IPT_tdstEntryElement_* hEngineMenu_PrevPage; /* +0xac */
    IPT_tdstEntryElement_* hEngineMenu_Shortcut1; /* +0xb0 */
    IPT_tdstEntryElement_* hEngineMenu_Shortcut2; /* +0xb4 */
    IPT_tdstEntryElement_* hEngineMenu_CloseSubMenu; /* +0xb8 */
    IPT_tdstEntryElement_* hEngineMenu_Plus; /* +0xbc */
    IPT_tdstEntryElement_* hEngineMenu_Less; /* +0xc0 */
    IPT_tdstEntryElement_* hEngineMenu_Help; /* +0xc4 */
    IPT_tdstEntryElement_* hStartStopStep; /* +0xc8 */
    IPT_tdstEntryElement_* hPulseStep; /* +0xcc */
    IPT_tdstEntryElement_* hDebugCamera; /* +0xd0 */
    IPT_tdstEntryElement_* hPS2EnterSelectMode; /* +0xd4 */
    IPT_tdstEntryElement_* hPS2ChangeMap; /* +0xd8 */
    IPT_tdstEntryElement_* hPS2CaptureScreen; /* +0xdc */
    IPT_tdstEntryElement_* hDemoRecord; /* +0xe0 */
    IPT_tdstEntryElement_* hDemoInitRecord; /* +0xe4 */
    IPT_tdstEntryElement_* hDemoSave; /* +0xe8 */
    IPT_tdstEntryElement_* hDemoLoad; /* +0xec */
    IPT_tdstEntryElement_* hDemoLaunch; /* +0xf0 */
};

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    int d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstInternalStructurCineinfo_ {
    MTH3D_tdstVector_ stShiftTarget; /* +0x0 */
    MTH3D_tdstVector_ stShiftPos; /* +0xc */
    float xDistMin; /* +0x18 */
    float xDistMax; /* +0x1c */
    float xBoundDistMin; /* +0x20 */
    float xBoundDistMax; /* +0x24 */
    float xAngleAlpha; /* +0x28 */
    float xAngleShiftAlpha; /* +0x2c */
    float xAngleTheta; /* +0x30 */
    float xAngleShiftTheta; /* +0x34 */
    float xLinearSpeed; /* +0x38 */
    float xLinearIncreaseSpeed; /* +0x3c */
    float xLinearDecreaseSpeed; /* +0x40 */
    float xAngularSpeed; /* +0x44 */
    float xAngularIncreaseSpeed; /* +0x48 */
    float xAngularDecreaseSpeed; /* +0x4c */
    float xTargetSpeed; /* +0x50 */
    float xTargetIncreaseSpeed; /* +0x54 */
    float xTargetDecreaseSpeed; /* +0x58 */
    float xFocal; /* +0x5c */
    float xZMin; /* +0x60 */
    float xZMax; /* +0x64 */
    HIE_tdstSuperObject_* hSuperObjectTargeted; /* +0x68 */
    HIE_tdstSuperObject_* hSecondSuperObjectTargeted; /* +0x6c */
    unsigned short uwDNMFlags; /* +0x70 */
    unsigned short uwIAFlags; /* +0x72 */
    e_ucListViewport_ eTypeOfViewport; /* +0x74 */
    char cChannel; /* +0x78 */
    unsigned char bIsActive; /* +0x79 */
    unsigned char bDebugCamera; /* +0x7a */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct tdst_Album_ {
    float fPicturePercentage; /* +0x0 */
    int bMoveForward; /* +0x4 */
    int bMoveBackward; /* +0x8 */
    char szFileName[256]; /* +0xc */
    int lPreviousNextInc; /* +0x10c */
    int lSnapID; /* +0x110 */
    int lSnapID2; /* +0x114 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
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

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct DNM_stParsingDatas {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    float xOutAlpha; /* +0xc */
    MTH3D_tdstVector_ stVector; /* +0x10 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4..0x7 */
    unsigned long m_ulHighPart; /* +0x8 */
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
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x5c..0x5f */
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
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

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstEngineStructure_ {
    unsigned char eEngineMode; /* +0x0 */
    char szLevelName[30]; /* +0x1 */
    char szNextLevelName[30]; /* +0x1f */
    char szFirstLevelName[30]; /* +0x3d */
    unsigned char eInputMode; /* +0x5b */
    unsigned char eDisplayFixMode; /* +0x5c */
    unsigned int ulDisplayMode; /* +0x60 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x64..0x67 */
    tdstEngineTimerStructure_ stEngineTimer; /* +0x68 */
    unsigned char ucNumberOfPlayersInMultiMode; /* +0xf0 */
    unsigned char ucNumberOfColumnsInMultiMode; /* +0xf1 */
    unsigned char ucMiniScreenRatioInMultiMode; /* +0xf2 */
    int a_hSO_CurrentMainPlayers[4]; /* +0xf4 */
    short hGLDDevice; /* +0x104 */
    short a_hGLDViewport[5]; /* +0x106 */
    GLD_tdstViewportAttributes_ a_stViewportAttr[5]; /* +0x110 */
    int a_p_stGameViewportCamera[5]; /* +0x340 */
    short a_hGLDFixViewport[5]; /* +0x354 */
    GLD_tdstViewportAttributes_ a_stFixViewportAttr[5]; /* +0x360 */
    GLI_tdstSpecificAttributesFor3D_ a_stFixAttributes3D[5]; /* +0x590 */
    int a_p_stFixCamera[5]; /* +0x5b8 */
    GLI_tdstSpecificAttributesFor3D_ a_stGameAttributes3D[5]; /* +0x5cc */
    tdstViewportManagement_* a_hViewportArray; /* +0x5f4 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn hCameraList; /* +0x5f8 */
    int hDrawSem; /* +0x604 */
    LST2_tdstAnchorTotdxHandleToFamilyListDyn hFamilyList; /* +0x608 */
    LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn hAlwaysActiveCharactersList; /* +0x614 */
    LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn hMainCharacterList; /* +0x620 */
    HIE_tdstSuperObject_* h_StdCamCaracter; /* +0x62c */
    HIE_tdstSuperObject_* h_DbgCamCharacter; /* +0x630 */
    tdstLanguageStructure_* p_stLanguageTable; /* +0x634 */
    FIL_tdstFileNameList_* hLevelNameList; /* +0x638 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x63c..0x63f */
    MAT_tdstTransformation_ stMainCharacterPosition; /* +0x640 */
    MAT_tdstTransformation_ stMainCameraPosition; /* +0x6a0 */
    int lSubMapNumber; /* +0x700 */
    unsigned char bEngineIsInPaused; /* +0x704 */
    unsigned char bEngineHasInPaused; /* +0x705 */
    unsigned char bEngineIsInSaveGamePart; /* +0x706 */
    char a_szLevelName[150][30]; /* +0x707 */
    char a_szDemoName[30][12]; /* +0x189b */
    char a_szDemoLevelName[30][12]; /* +0x1a03 */
    unsigned char ucNumberOfDemos; /* +0x1b6b */
    unsigned char ucNumberOfLevels; /* +0x1b6c */
    unsigned char ucCurrentLevel; /* +0x1b6d */
    unsigned char ucPreviousLevel; /* +0x1b6e */
    unsigned char ucExitIdToQuitPrevLevel; /* +0x1b6f */
    unsigned char ucLevelGlobalCounter; /* +0x1b70 */
    unsigned char xDemoMode; /* +0x1b71 */
    unsigned char ucCurrentLanguage; /* +0x1b72 */
    unsigned char ucNbLanguages; /* +0x1b73 */
    unsigned char bEngineFrozen; /* +0x1b74 */
    unsigned char bResurection; /* +0x1b75 */
    char cCameraMode; /* +0x1b76 */
    unsigned char ucCurrentImportance; /* +0x1b77 */
    unsigned int ulNumberOfSOLAllocated; /* +0x1b78 */
    unsigned int ulNumberOfSOLLoaded; /* +0x1b7c */
    unsigned int ulNumberOfNonPersitentLinksPerSOL; /* +0x1b80 */
    tdstSuperObjectLinks_** p_hSOL; /* +0x1b84 */
    tdstGraphChainedListNode_* p_GraphChainedList; /* +0x1b88 */
    CINE_Manager_* stCineManager; /* +0x1b8c */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct anon_1 {
    unsigned int Reserved_Key; /* +0x0 */
    unsigned int Reserved_Key2; /* +0x4 */
    char Name[8]; /* +0x8 */
    char DateTime[26]; /* +0x10 */
    unsigned int ulScore; /* +0x2c */
    unsigned int ulNbCage; /* +0x30 */
};

struct _tdstBinarizedDataForMenu {
    int hText; /* +0x0 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
};

struct LST2_tdstAnchorToSAV2_tdxHandleToElementDyn {
    SAV2_tdstElement_* hFirstElementDyn; /* +0x0 */
    SAV2_tdstElement_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstSaveGameSlot_ {
    unsigned int ulDate; /* +0x0 */
    char szNewSlotName[2]; /* +0x4 */
    char szOldSlotName[2]; /* +0x6 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct DNM_stReport {
    unsigned int m_ulPrevSurfaceState; /* +0x0 */
    unsigned int m_ulCurrSurfaceState; /* +0x4 */
    DNM_stObstacle m_stObstacle; /* +0x8 */
    DNM_stObstacle m_stGround; /* +0x30 */
    DNM_stObstacle m_stWall; /* +0x58 */
    DNM_stObstacle m_stCharacter; /* +0x80 */
    DNM_stObstacle m_stWater; /* +0xa8 */
    DNM_stObstacle m_stCeil; /* +0xd0 */
    MTH_stMove m_stAbsolutePrevSpeed; /* +0xf8 */
    MTH_stMove m_stAbsoluteCurrSpeed; /* +0x114 */
    MTH_stMove m_stAbsolutePrevPosition; /* +0x130 */
    MTH_stMove m_stAbsoluteCurrPosition; /* +0x14c */
    char m_cBitField; /* +0x168 */
};

struct tdstGameOptions_ {
    char szDefaultFileName[256]; /* +0x0 */
    char szCurrentFileName[256]; /* +0x100 */
    tdstSaveGameSlot_ a_stSaveGameSlots[1]; /* +0x200 */
    unsigned int ulNbOfSlots; /* +0x208 */
    unsigned int ulCurrentSlot; /* +0x20c */
    unsigned int ulDetails; /* +0x210 */
    unsigned int ulScreenSize; /* +0x214 */
    unsigned int ulPal60; /* +0x218 */
    unsigned int ulScreenSizeLoad; /* +0x21c */
    int s32VolumeSound; /* +0x220 */
    int s32VolumeVoice; /* +0x224 */
    int s32VolumeMusic; /* +0x228 */
    int s32VolumeAmbiance; /* +0x22c */
    int s32VolumeMenu; /* +0x230 */
};

struct anon_2 {
    unsigned int ulNbCage; /* +0x0 */
    unsigned int ulScore; /* +0x4 */
};

struct GLI_tdstCamera_ {
    int lCameraMode; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ stMatrix; /* +0x10 */
    float xAlphaX; /* +0x70 */
    float xAlphaY; /* +0x74 */
    float xNear; /* +0x78 */
    float xFar; /* +0x7c */
    float xScreen; /* +0x80 */
    GLI_tdst2DVertex_ stScale; /* +0x84 */
    GLI_tdst2DVertex_ stTrans; /* +0x90 */
    float xXProjectionRatio; /* +0x9c */
    float xYProjectionRatio; /* +0xa0 */
    MTH3D_tdstVector_ stNormPlaneLeft; /* +0xa4 */
    float xDistPlaneLeft; /* +0xb0 */
    MTH3D_tdstVector_ stNormPlaneRight; /* +0xb4 */
    float xDistPlaneRight; /* +0xc0 */
    MTH3D_tdstVector_ stNormPlaneUp; /* +0xc4 */
    float xDistPlaneUp; /* +0xd0 */
    MTH3D_tdstVector_ stNormPlaneDown; /* +0xd4 */
    float xDistPlaneDown; /* +0xe0 */
    float xRatio; /* +0xe4 */
    unsigned char ucCameraTransparency; /* +0xe8 */
    float xTranspDist; /* +0xec */
    unsigned char bCameraIsMirrored; /* +0xf0 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct SAV2_MenuOptionHeader_ {
    float fCenteringX; /* +0x0 */
    float fCenteringY; /* +0x4 */
    char bWideScreen; /* +0x8 */
    char bVibration; /* +0x9 */
    char bInversionHor; /* +0xa */
    char bInversionVert; /* +0xb */
};

struct tdstMenu2DPages_ {
    GLI_tdstMaterial_* hMaterial; /* +0x0 */
    anon_enum_0094d4e0 eTypePage; /* +0x4 */
    char Title[50]; /* +0x8 */
    char aText[10][50]; /* +0x3a */
    char abGrayed[10]; /* +0x22e */
    char aValue[10]; /* +0x238 */
    unsigned int NbSelection; /* +0x244 */
    unsigned int NbEntry; /* +0x248 */
    unsigned int CurrentFirstEntry; /* +0x24c */
};

struct WP_tdstGraphNode_ {
    WP_tdstGraphNode_* hNextBrotherDyn; /* +0x0 */
    WP_tdstGraphNode_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToWP_tdhGraphNodeDyn* hFatherDyn; /* +0x8 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0xc */
    int m_lTypeOfWP; /* +0x10 */
    int m_lTypeOfWPInit; /* +0x14 */
    WP_tdstListOfArc_* m_hListOfArc; /* +0x18 */
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

struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    HIE_tdstSuperObject_* m_hSuperObject; /* +0x10 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct SAV2_tdstHeader_ {
    anon_2 aEnvValue[10]; /* +0x0 */
    unsigned int aForKeyAlgo[4]; /* +0x50 */
    int EndOfGameIsDone; /* +0x60 */
    int MaxIndCurrentEnv; /* +0x64 */
    SAV2_MenuOptionHeader_ stMenuOptions; /* +0x68 */
    unsigned int ulWarnedUserAboutAutoSave; /* +0x74 */
    int RevisitMode; /* +0x78 */
    int RevisitEnvScore; /* +0x7c */
    int RevisitGlobalScore; /* +0x80 */
    int RevisitEnvironment; /* +0x84 */
    int RevisitOriginEnvironment; /* +0x88 */
    char szLevelName[20]; /* +0x8c */
    char szLevelNameAfterRevisit[20]; /* +0xa0 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct FIL_tdstFileNameList_ {
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn hFileNameListAnchor; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct SAV2_tdstList_ {
    SAV2_tdstHeader_ stListHeader; /* +0x0 */
    LST2_tdstAnchorToSAV2_tdxHandleToElementDyn SAV2_ListAnchor; /* +0xb4 */
};

int g_InGameMenu2DActivated;
int g_GotoRight;
int g_LoadingGame;
int g_CurrentIndSubMenu;
int g_NbColForSelection;
int g_NbLineForSelection;
int g_FirstCineNameText;
int g_FirstArcadeNameText;
unsigned char g_NbCharForSaveName;
int g_IsSaveOK;
int g_2DMenuID;
int g_MenuVibrationEffect;
int g_PreviousVideoMode;
int g_MustCheckMC;
int MNU_g_SavingScreenshot;
int g_AlbumHadMemoryCardAtInit;
int GLI_g_PerformAutosaveAfterVideo;
int g_hBGMaterialForMenu2D;
int g_hFixMaterialForMenu2D;
int g_hSelectedFrameMaterialForMenu2D;
int g_hFixMaterialForSelectedFilms;
int g_hFixMaterialForArcadeAndFilms;
int g_hFixMaterialForAlbum[2];
int g_NbMenu2DPages;
int g_CurrentMenu2DPage;
int g_NextPage;
int g_IndCurrentEnv;
int g_MaxIndCurrentEnv;
int g_EndRevisit;
anon_enum_00956429 g_CurrentActionMenu2D;
unsigned int g_CurrentSelection;
int g_RevisitMode;
int g_RevisitEnvScoreAtBeginingOfLevel;
int g_RevisitCurrentEnvScore;
int g_RevisitGlobalScoreAtBeginingOfLevel;
int g_RevisitCurrentGlobalScore;
int g_RevisitIndCurrentEnv;
int g_RevisitIndEnvironementFromWhereWeCome;
int g_GlobalScoreAtBeginingOfLevel;
int g_CurrentEnvScoreAtBeginingOfLevel;
int g_CurrentEnvInit;
int g_ExitForbidden;
int g_EndOfGameIsDone;
int g_NotRight;
int g_NotLeft;
int g_NoBonusShortcut;
int g_NoGameShortcut;
int g_NoValidate;
int g_BonusWithExit;
int MENU_g_bVibration;
int MENU_g_bInversionHor;
int MENU_g_bInversionVert;
int g_aCinematicName[9];
int g_aXtraVideoName[9];
int g_aBonusMapName[11];
char g_szLevelForBonusMenu[9];
int g_aMapName[10];
int g_Menu2D_IsInterrupted;
int MENU_g_bVibrationSaved;
int MENU_g_bInversionHorSaved;
int MENU_g_bInversionVertSaved;
unsigned int g_aForKeyAlgo[4];
_tdstBinarizedDataForMenu g_aBinDataForMenu[105];
int gStereoMode_Saved;
unsigned char g_aNbGradOnSaved[3];
anon_2 g_aEnvValue[10];
unsigned int PS2MC_g_NbFilesFound;
anon_1 g_aFileEntryArray[100];
unsigned int g_NbSaveFile;
unsigned int g_SelectedTime;
float GLI_g_ScreenPos_DY_Saved;
float GLI_g_ScreenPos_DX_Saved;
int g_aSubMenuReturn[4];
int g_RecapMenuPage;
int g_PhotoMenuPage;
int g_StartMenuPage;
int g_VideoOptionPage;
int g_AudioOptionPage;
int g_ControlOptionPage;
int g_HallOfFamePage;
int g_AlbumPage;
int g_XTraPage;
int g_CinematicPage;
int g_BonusPage;
int g_PScanPage3;
int g_PScanPage2;
int g_PScanPage1;
int g_PAL60Page3;
int g_PAL60Page2;
int g_PAL60Page1;
int g_ArcadePage;
int g_GamePage;
int g_OptionsPage;
int g_CenterScreenPage;
int g_SavePage;
int g_LoadPage;
tdstMenu2DPages_ aMenu2DPages[35];
float GLI_g_ScreenPos_DY;
float GLI_g_ScreenPos_DX;
unsigned char g_aNbGradOn[3];
tdstEngineStructure_ g_stEngineStructure;
tdst_EntryActions_ g_st_3DOS_EntryActions;
int g_bAlbumInitialized;
tdst_Album_ g_stAlbum;
int g_CurrentLanguage;
int g_CurrentSelectedCharNumber;
char g_CurrentNameForSavePage;
int g_CurrentLineForSelection;
int g_CurrentColForSelection;
int GLI_g_50_or_60_HzMode;
char g_CurrentSaveName;
char SAV2_g_LevelNameToSave[20];
int GLI_g_bWideScreenMode;
tdstGameOptions_ g_stGameOptions;
int g_szAreYouSureQuestion;
unsigned char g_NbArcadeOpen;
unsigned char g_NbCinematicOpen;
int g_szHelp;
char SAV2_g_LevelNameAfterReinitToSave[20];
int g_bAlbumLoadInProgress;
int g_bAlbumIsWorking;
float g_XTextLeft;
float g_XText;
int g_bAlbumLoadSucess;
int g_bCurrentMaterialBuffer;
SAV2_tdstList_ SAV2_g_stList;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 156–209 */
/* addr: 0x00296710  size: 640 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 156
 *   +0x0020 -> line 161
 *   +0x0040 -> line 162
 *   +0x0044 -> line 163
 *   +0x0048 -> line 162
 *   +0x004c -> line 163
 *   +0x0054 -> line 162
 *   +0x0058 -> line 163
 *   +0x0068 -> line 167
 *   +0x006c -> line 165
 *   +0x0070 -> line 167
 *   +0x0088 -> line 169
 *   +0x008c -> line 170
 *   +0x009c -> line 174
 *   +0x00c4 -> line 177
 *   +0x00d0 -> line 179
 *   +0x00d8 -> line 183
 *   +0x00fc -> line 187
 *   +0x0124 -> line 191
 *   +0x014c -> line 193
 *   +0x0150 -> line 195
 *   +0x0160 -> line 197
 *   +0x016c -> line 198
 *   +0x0178 -> line 200
 *   +0x017c -> line 198
 *   +0x0180 -> line 200
 *   +0x0210 -> line 203
 *   +0x0214 -> line 201
 *   +0x0224 -> line 200
 *   +0x0228 -> line 202
 *   +0x0234 -> line 203
 *   +0x0238 -> line 201
 *   +0x023c -> line 200
 *   +0x0240 -> line 201
 *   +0x0244 -> line 200
 *   +0x0248 -> line 203
 *   +0x025c -> line 205
 *   +0x0260 -> line 206
 *   +0x0264 -> line 209
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDisplayScrollTextMenu2D(float X, float Y, float W, char* szText, unsigned int ulTextColor)
{
    char szTmp[30];
    int N;
    float fH;
    float fL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 2031–2966 */
/* addr: 0x00296990  size: 10476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2031
 *   +0x000c -> line 2032
 *   +0x001c -> line 2036
 *   +0x0070 -> line 2045
 *   +0x0080 -> line 2047
 *   +0x009c -> line 2048
 *   +0x00a4 -> line 2050
 *   +0x00c0 -> line 2051
 *   +0x00c4 -> line 2052
 *   +0x00cc -> line 2057
 *   +0x00d8 -> line 2059
 *   +0x00f4 -> line 2065
 *   +0x00fc -> line 2067
 *   +0x0134 -> line 2071
 *   +0x0140 -> line 2072
 *   +0x0148 -> line 2073
 *   +0x0150 -> line 2076
 *   +0x016c -> line 2081
 *   +0x017c -> line 2084
 *   +0x0184 -> line 2086
 *   +0x01fc -> line 2090
 *   +0x0238 -> line 2091
 *   +0x0240 -> line 2093
 *   +0x0270 -> line 2095
 *   +0x0278 -> line 2096
 *   +0x0290 -> line 2097
 *   +0x0298 -> line 2100
 *   +0x02cc -> line 2102
 *   +0x02d4 -> line 2103
 *   +0x02ec -> line 2105
 *   +0x02f4 -> line 2107
 *   +0x0300 -> line 2112
 *   +0x0304 -> line 2110
 *   +0x030c -> line 2112
 *   +0x0480 -> line 2115
 *   +0x0484 -> line 2112
 *   +0x0488 -> line 2115
 *   +0x0490 -> line 2112
 *   +0x0494 -> line 2115
 *   +0x04a0 -> line 2119
 *   +0x04a4 -> line 2115
 *   +0x04a8 -> line 2116
 *   +0x04ac -> line 2117
 *   +0x04b0 -> line 2122
 *   +0x04c8 -> line 2123
 *   +0x04d0 -> line 2127
 *   +0x0668 -> line 2128
 *   +0x0674 -> line 2132
 *   +0x0688 -> line 2135
 *   +0x068c -> line 2134
 *   +0x0694 -> line 2135
 *   +0x0698 -> line 2140
 *   +0x069c -> line 2141
 *   +0x06a0 -> line 2138
 *   +0x06a4 -> line 2141
 *   +0x06a8 -> line 2139
 *   +0x06b0 -> line 2141
 *   +0x06b4 -> line 2140
 *   +0x06bc -> line 2141
 *   +0x081c -> line 2143
 *   +0x0840 -> line 2145
 *   +0x0848 -> line 2149
 *   +0x0888 -> line 2152
 *   +0x088c -> line 2153
 *   +0x0894 -> line 2156
 *   +0x0898 -> line 2157
 *   +0x089c -> line 2160
 *   +0x08a4 -> line 2162
 *   +0x0940 -> line 2164
 *   +0x0948 -> line 2162
 *   +0x0950 -> line 2163
 *   +0x0954 -> line 2162
 *   +0x0968 -> line 2164
 *   +0x097c -> line 2178
 *   +0x0984 -> line 2182
 *   +0x0990 -> line 2189
 *   +0x0998 -> line 2195
 *   +0x09b4 -> line 2197
 *   +0x09cc -> line 2200
 *   +0x0a20 -> line 2201
 *   +0x0a28 -> line 2206
 *   +0x0a44 -> line 2209
 *   +0x0a48 -> line 2208
 *   +0x0a4c -> line 2209
 *   +0x0a58 -> line 2210
 *   +0x0a60 -> line 2215
 *   +0x0a7c -> line 2217
 *   +0x0a88 -> line 2219
 *   +0x0aec -> line 2221
 *   +0x0af4 -> line 2226
 *   +0x0b10 -> line 2228
 *   +0x0b1c -> line 2230
 *   +0x0b80 -> line 2232
 *   +0x0b88 -> line 2237
 *   +0x0ba4 -> line 2240
 *   +0x0bc0 -> line 2244
 *   +0x0bc8 -> line 2245
 *   +0x0bd4 -> line 2246
 *   +0x0be0 -> line 2248
 *   +0x0bec -> line 2249
 *   +0x0bf4 -> line 2250
 *   +0x0bfc -> line 2252
 *   +0x0c08 -> line 2254
 *   +0x0c18 -> line 2256
 *   +0x0c28 -> line 2259
 *   +0x0c30 -> line 2260
 *   +0x0c38 -> line 2262
 *   +0x0c44 -> line 2264
 *   +0x0c50 -> line 2266
 *   +0x0c58 -> line 2267
 *   +0x0c60 -> line 2269
 *   +0x0c6c -> line 2271
 *   +0x0c7c -> line 2273
 *   +0x0c88 -> line 2275
 *   +0x0c90 -> line 2277
 *   +0x0ce4 -> line 2281
 *   +0x0cf0 -> line 2282
 *   +0x0cf8 -> line 2281
 *   +0x0d00 -> line 2282
 *   +0x0d14 -> line 2284
 *   +0x0d1c -> line 2289
 *   +0x0d28 -> line 2290
 *   +0x0d2c -> line 2296
 *   +0x0d34 -> line 2301
 *   +0x0d50 -> line 2304
 *   +0x0d6c -> line 2308
 *   +0x0d74 -> line 2309
 *   +0x0d8c -> line 2310
 *   +0x0d98 -> line 2312
 *   +0x0d9c -> line 2313
 *   +0x0da4 -> line 2314
 *   +0x0dac -> line 2316
 *   +0x0db8 -> line 2318
 *   +0x0dc8 -> line 2320
 *   +0x0dd8 -> line 2323
 *   +0x0de0 -> line 2324
 *   +0x0de8 -> line 2326
 *   +0x0df4 -> line 2328
 *   +0x0e00 -> line 2330
 *   +0x0e08 -> line 2331
 *   +0x0e10 -> line 2333
 *   +0x0e1c -> line 2335
 *   +0x0e2c -> line 2337
 *   +0x0e38 -> line 2339
 *   +0x0e40 -> line 2341
 *   +0x0e94 -> line 2345
 *   +0x0ea0 -> line 2346
 *   +0x0ea8 -> line 2345
 *   +0x0eb0 -> line 2346
 *   +0x0ec4 -> line 2348
 *   +0x0ecc -> line 2353
 *   +0x0ed8 -> line 2354
 *   +0x0edc -> line 2360
 *   +0x0ee4 -> line 2365
 *   +0x0f00 -> line 2367
 *   +0x0f0c -> line 2368
 *   +0x0f90 -> line 2369
 *   +0x0f98 -> line 2374
 *   +0x0fb4 -> line 2376
 *   +0x0fc0 -> line 2377
 *   +0x1044 -> line 2378
 *   +0x104c -> line 2383
 *   +0x1068 -> line 2386
 *   +0x1090 -> line 2390
 *   +0x1168 -> line 2391
 *   +0x1170 -> line 2394
 *   +0x1188 -> line 2397
 *   +0x1190 -> line 2398
 *   +0x11ac -> line 2402
 *   +0x11b8 -> line 2403
 *   +0x11c4 -> line 2404
 *   +0x11d0 -> line 2406
 *   +0x11dc -> line 2411
 *   +0x1218 -> line 2415
 *   +0x1224 -> line 2416
 *   +0x122c -> line 2415
 *   +0x1234 -> line 2416
 *   +0x1248 -> line 2421
 *   +0x1250 -> line 2426
 *   +0x126c -> line 2429
 *   +0x1294 -> line 2433
 *   +0x136c -> line 2434
 *   +0x1374 -> line 2437
 *   +0x138c -> line 2440
 *   +0x1394 -> line 2441
 *   +0x13b0 -> line 2445
 *   +0x13bc -> line 2447
 *   +0x13d4 -> line 2448
 *   +0x13e0 -> line 2450
 *   +0x13e4 -> line 2455
 *   +0x1420 -> line 2459
 *   +0x142c -> line 2460
 *   +0x1434 -> line 2459
 *   +0x143c -> line 2460
 *   +0x1450 -> line 2466
 *   +0x1458 -> line 2471
 *   +0x1474 -> line 2473
 *   +0x1550 -> line 2477
 *   +0x1574 -> line 2480
 *   +0x1580 -> line 2483
 *   +0x1594 -> line 2484
 *   +0x159c -> line 2485
 *   +0x15a4 -> line 2488
 *   +0x15c0 -> line 2490
 *   +0x15c8 -> line 2491
 *   +0x15e0 -> line 2495
 *   +0x15e8 -> line 2498
 *   +0x15f0 -> line 2500
 *   +0x15f8 -> line 2502
 *   +0x1620 -> line 2504
 *   +0x162c -> line 2507
 *   +0x1640 -> line 2508
 *   +0x1648 -> line 2509
 *   +0x1650 -> line 2513
 *   +0x1674 -> line 2516
 *   +0x167c -> line 2518
 *   +0x16a4 -> line 2520
 *   +0x16b0 -> line 2523
 *   +0x16c4 -> line 2524
 *   +0x16cc -> line 2525
 *   +0x16d4 -> line 2528
 *   +0x16f0 -> line 2530
 *   +0x16f8 -> line 2531
 *   +0x1710 -> line 2534
 *   +0x1718 -> line 2538
 *   +0x1728 -> line 2540
 *   +0x1734 -> line 2543
 *   +0x1744 -> line 2545
 *   +0x1748 -> line 2544
 *   +0x174c -> line 2545
 *   +0x1754 -> line 2546
 *   +0x175c -> line 2548
 *   +0x1768 -> line 2552
 *   +0x177c -> line 2554
 *   +0x1780 -> line 2553
 *   +0x1784 -> line 2554
 *   +0x178c -> line 2556
 *   +0x1794 -> line 2560
 *   +0x17a4 -> line 2562
 *   +0x17a8 -> line 2561
 *   +0x17ac -> line 2562
 *   +0x17b4 -> line 2564
 *   +0x17bc -> line 2575
 *   +0x17c8 -> line 2578
 *   +0x1808 -> line 2581
 *   +0x180c -> line 2582
 *   +0x1814 -> line 2586
 *   +0x1828 -> line 2587
 *   +0x1830 -> line 2590
 *   +0x1838 -> line 2591
 *   +0x1840 -> line 2593
 *   +0x1870 -> line 2597
 *   +0x18e4 -> line 2598
 *   +0x18ec -> line 2599
 *   +0x18f4 -> line 2603
 *   +0x195c -> line 2604
 *   +0x1964 -> line 2605
 *   +0x196c -> line 2610
 *   +0x1970 -> line 2614
 *   +0x1974 -> line 2613
 *   +0x1978 -> line 2618
 *   +0x197c -> line 2610
 *   +0x1980 -> line 2611
 *   +0x1984 -> line 2615
 *   +0x1988 -> line 2618
 *   +0x1998 -> line 2620
 *   +0x19a0 -> line 2621
 *   +0x1a10 -> line 2625
 *   +0x1a24 -> line 2627
 *   +0x1a34 -> line 2628
 *   +0x1a48 -> line 2629
 *   +0x1a50 -> line 2634
 *   +0x1a64 -> line 2635
 *   +0x1a6c -> line 2638
 *   +0x1a74 -> line 2640
 *   +0x1a9c -> line 2644
 *   +0x1af8 -> line 2645
 *   +0x1b00 -> line 2646
 *   +0x1b08 -> line 2649
 *   +0x1bfc -> line 2650
 *   +0x1c08 -> line 2651
 *   +0x1c10 -> line 2655
 *   +0x1c38 -> line 2656
 *   +0x1c40 -> line 2665
 *   +0x1c48 -> line 2667
 *   +0x1c7c -> line 2671
 *   +0x1c84 -> line 2672
 *   +0x1ca8 -> line 2673
 *   +0x1cb0 -> line 2676
 *   +0x1cb8 -> line 2679
 *   +0x1cbc -> line 2677
 *   +0x1cc0 -> line 2678
 *   +0x1cc4 -> line 2679
 *   +0x1cc8 -> line 2681
 *   +0x1cd0 -> line 2684
 *   +0x1cd8 -> line 2685
 *   +0x1cfc -> line 2686
 *   +0x1d04 -> line 2689
 *   +0x1d0c -> line 2692
 *   +0x1d14 -> line 2694
 *   +0x1d2c -> line 2697
 *   +0x1d34 -> line 2699
 *   +0x1d3c -> line 2700
 *   +0x1d44 -> line 2702
 *   +0x1d58 -> line 2709
 *   +0x1d6c -> line 2710
 *   +0x1d80 -> line 2713
 *   +0x1d88 -> line 2715
 *   +0x1d98 -> line 2717
 *   +0x1dac -> line 2718
 *   +0x1dc0 -> line 2719
 *   +0x1dd4 -> line 2720
 *   +0x1ddc -> line 2732
 *   +0x2258 -> line 2736
 *   +0x2260 -> line 2740
 *   +0x226c -> line 2742
 *   +0x2274 -> line 2744
 *   +0x2280 -> line 2746
 *   +0x2294 -> line 2752
 *   +0x229c -> line 2763
 *   +0x22a8 -> line 2764
 *   +0x22ac -> line 2768
 *   +0x22b4 -> line 2772
 *   +0x22c0 -> line 2775
 *   +0x22c8 -> line 2784
 *   +0x22d0 -> line 2786
 *   +0x22d8 -> line 2788
 *   +0x2300 -> line 2793
 *   +0x2304 -> line 2796
 *   +0x2308 -> line 2794
 *   +0x230c -> line 2793
 *   +0x2310 -> line 2796
 *   +0x2318 -> line 2797
 *   +0x2320 -> line 2847
 *   +0x2324 -> line 2848
 *   +0x2328 -> line 2847
 *   +0x232c -> line 2848
 *   +0x2338 -> line 2851
 *   +0x2340 -> line 2852
 *   +0x2348 -> line 2853
 *   +0x2384 -> line 2854
 *   +0x238c -> line 2857
 *   +0x2394 -> line 2865
 *   +0x239c -> line 2868
 *   +0x23a4 -> line 2870
 *   +0x23ac -> line 2872
 *   +0x23e0 -> line 2877
 *   +0x23f0 -> line 2890
 *   +0x23f4 -> line 2888
 *   +0x23f8 -> line 2890
 *   +0x23fc -> line 2893
 *   +0x2400 -> line 2891
 *   +0x2404 -> line 2889
 *   +0x2408 -> line 2891
 *   +0x240c -> line 2892
 *   +0x2410 -> line 2893
 *   +0x2480 -> line 2906
 *   +0x2494 -> line 2908
 *   +0x249c -> line 2909
 *   +0x24a4 -> line 2913
 *   +0x250c -> line 2914
 *   +0x2514 -> line 2915
 *   +0x251c -> line 2918
 *   +0x2590 -> line 2919
 *   +0x2598 -> line 2920
 *   +0x25a0 -> line 2923
 *   +0x2618 -> line 2924
 *   +0x2620 -> line 2927
 *   +0x2628 -> line 2929
 *   +0x2630 -> line 2932
 *   +0x2638 -> line 2937
 *   +0x2654 -> line 2940
 *   +0x2664 -> line 2942
 *   +0x2704 -> line 2944
 *   +0x2714 -> line 2946
 *   +0x2864 -> line 2949
 *   +0x28a0 -> line 2953
 *   +0x28a4 -> line 2954
 *   +0x28a8 -> line 2953
 *   +0x28ac -> line 2954
 *   +0x28b0 -> line 2958
 *   +0x28c8 -> line 2961
 *   +0x28d0 -> line 2965
 *   +0x28d8 -> line 2966
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vManageMenu2D(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1905–1982 */
/* addr: 0x00299280  size: 508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1905
 *   +0x0004 -> line 1907
 *   +0x0008 -> line 1905
 *   +0x000c -> line 1907
 *   +0x0010 -> line 1905
 *   +0x001c -> line 1907
 *   +0x0058 -> line 1909
 *   +0x0060 -> line 1910
 *   +0x0094 -> line 1913
 *   +0x00e4 -> line 1917
 *   +0x00fc -> line 1926
 *   +0x0104 -> line 1930
 *   +0x012c -> line 1934
 *   +0x0134 -> line 1937
 *   +0x013c -> line 1939
 *   +0x0148 -> line 1942
 *   +0x0150 -> line 1945
 *   +0x0160 -> line 1947
 *   +0x0178 -> line 1951
 *   +0x0180 -> line 1954
 *   +0x018c -> line 1955
 *   +0x01c0 -> line 1964
 *   +0x01c8 -> line 1967
 *   +0x01d4 -> line 1973
 *   +0x01dc -> line 1978
 *   +0x01e8 -> line 1982
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vChangeCurrentValue(char Value)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1812–1821 */
/* addr: 0x00299480  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1812
 *   +0x0008 -> line 1814
 *   +0x0010 -> line 1815
 *   +0x0018 -> line 1818
 *   +0x0024 -> line 1820
 *   +0x0034 -> line 1821
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInterruptMenu2D(int bPauseMenu)
{
    if (bPauseMenu)
    {
        g_Menu2D_IsInterrupted++;
    }
    else
    {
        g_Menu2D_IsInterrupted--;
    }
    if (g_Menu2D_IsInterrupted < 0) g_Menu2D_IsInterrupted = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1720–1803 */
/* addr: 0x002994c0  size: 1116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1720
 *   +0x0004 -> line 1722
 *   +0x0008 -> line 1720
 *   +0x000c -> line 1722
 *   +0x0014 -> line 1724
 *   +0x006c -> line 1732
 *   +0x0070 -> line 1736
 *   +0x007c -> line 1738
 *   +0x0180 -> line 1743
 *   +0x01fc -> line 1751
 *   +0x0210 -> line 1752
 *   +0x0218 -> line 1753
 *   +0x0230 -> line 1766
 *   +0x0240 -> line 1768
 *   +0x0248 -> line 1769
 *   +0x024c -> line 1768
 *   +0x0258 -> line 1770
 *   +0x025c -> line 1768
 *   +0x0260 -> line 1771
 *   +0x0264 -> line 1770
 *   +0x0268 -> line 1771
 *   +0x026c -> line 1768
 *   +0x0270 -> line 1771
 *   +0x028c -> line 1776
 *   +0x0290 -> line 1777
 *   +0x0294 -> line 1778
 *   +0x0298 -> line 1779
 *   +0x029c -> line 1782
 *   +0x02a0 -> line 1781
 *   +0x02a8 -> line 1782
 *   +0x03a0 -> line 1783
 *   +0x03a8 -> line 1785
 *   +0x03d8 -> line 1789
 *   +0x042c -> line 1796
 *   +0x0438 -> line 1797
 *   +0x0440 -> line 1798
 *   +0x0444 -> line 1799
 *   +0x0448 -> line 1800
 *   +0x044c -> line 1803
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ReturnFromSubMenu(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1657–1715 */
/* addr: 0x00299920  size: 580 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1657
 *   +0x0010 -> line 1659
 *   +0x0018 -> line 1661
 *   +0x0028 -> line 1666
 *   +0x002c -> line 1664
 *   +0x0030 -> line 1666
 *   +0x0038 -> line 1665
 *   +0x003c -> line 1663
 *   +0x0040 -> line 1665
 *   +0x0044 -> line 1666
 *   +0x0048 -> line 1664
 *   +0x004c -> line 1666
 *   +0x005c -> line 1671
 *   +0x0060 -> line 1667
 *   +0x0064 -> line 1668
 *   +0x0068 -> line 1669
 *   +0x006c -> line 1671
 *   +0x00a4 -> line 1679
 *   +0x00ac -> line 1695
 *   +0x00b4 -> line 1697
 *   +0x00c4 -> line 1700
 *   +0x00f8 -> line 1704
 *   +0x0100 -> line 1707
 *   +0x0134 -> line 1713
 *   +0x0234 -> line 1715
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vGotoSubMenu(int SubPage)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1625–1654 */
/* addr: 0x00299b70  size: 304 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1625
 *   +0x0008 -> line 1626
 *   +0x0014 -> line 1628
 *   +0x005c -> line 1629
 *   +0x0068 -> line 1632
 *   +0x007c -> line 1634
 *   +0x0084 -> line 1635
 *   +0x008c -> line 1636
 *   +0x0094 -> line 1638
 *   +0x0098 -> line 1640
 *   +0x00a0 -> line 1642
 *   +0x00a8 -> line 1645
 *   +0x00d8 -> line 1647
 *   +0x00e0 -> line 1650
 *   +0x011c -> line 1652
 *   +0x0124 -> line 1654
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vPreviousSelection(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1593–1622 */
/* addr: 0x00299ca0  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1593
 *   +0x0004 -> line 1594
 *   +0x0008 -> line 1593
 *   +0x000c -> line 1594
 *   +0x0040 -> line 1596
 *   +0x0058 -> line 1597
 *   +0x0060 -> line 1600
 *   +0x007c -> line 1602
 *   +0x0080 -> line 1604
 *   +0x0088 -> line 1606
 *   +0x008c -> line 1608
 *   +0x0094 -> line 1610
 *   +0x0098 -> line 1613
 *   +0x00a4 -> line 1615
 *   +0x00ac -> line 1618
 *   +0x00e8 -> line 1620
 *   +0x00f0 -> line 1622
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vNextSelection(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1556–1589 */
/* addr: 0x00299da0  size: 404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1556
 *   +0x0008 -> line 1559
 *   +0x0014 -> line 1561
 *   +0x005c -> line 1565
 *   +0x0064 -> line 1568
 *   +0x0078 -> line 1574
 *   +0x0080 -> line 1576
 *   +0x0084 -> line 1578
 *   +0x008c -> line 1580
 *   +0x0094 -> line 1583
 *   +0x009c -> line 1585
 *   +0x00d8 -> line 1587
 *   +0x0188 -> line 1589
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vPreviousSelectionNoWrap(void)
{
    unsigned int u32Sound2Play;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1520–1553 */
/* addr: 0x00299f40  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1520
 *   +0x0004 -> line 1523
 *   +0x0008 -> line 1520
 *   +0x000c -> line 1523
 *   +0x0044 -> line 1525
 *   +0x005c -> line 1529
 *   +0x0064 -> line 1532
 *   +0x0080 -> line 1534
 *   +0x0084 -> line 1535
 *   +0x008c -> line 1542
 *   +0x0094 -> line 1544
 *   +0x009c -> line 1547
 *   +0x00a4 -> line 1549
 *   +0x00e0 -> line 1551
 *   +0x01a0 -> line 1553
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vNextSelectionNoWrap(void)
{
    unsigned int u32Sound2Play;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1444–1465 */
/* addr: 0x0029a0f0  size: 256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1444
 *   +0x0004 -> line 1446
 *   +0x0068 -> line 1447
 *   +0x0080 -> line 1450
 *   +0x00bc -> line 1453
 *   +0x00c8 -> line 1454
 *   +0x00f4 -> line 1455
 *   +0x00f8 -> line 1465
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vReinitGrayedEntries(int PageNumber)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1400–1409 */
/* addr: 0x0029a1f0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1400
 *   +0x0008 -> line 1404
 *   +0x0010 -> line 1406
 *   +0x0018 -> line 1407
 *   +0x0020 -> line 1409
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitMaterialForMenu(void);
void fn_vInitMenuPages(void);
void GLI_vProcessRegisteredTextures(void);

void fn_vInitInGameMenu2D(void)
{
    fn_vInitMaterialForMenu();
    fn_vInitMenuPages();
    GLI_vProcessRegisteredTextures();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1137–1394 */
/* addr: 0x0029a220  size: 4360 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1137
 *   +0x0004 -> line 1145
 *   +0x0008 -> line 1137
 *   +0x000c -> line 1149
 *   +0x0010 -> line 1137
 *   +0x0020 -> line 1145
 *   +0x0024 -> line 1146
 *   +0x002c -> line 1149
 *   +0x007c -> line 1154
 *   +0x0140 -> line 1157
 *   +0x0198 -> line 1158
 *   +0x019c -> line 1157
 *   +0x01a0 -> line 1158
 *   +0x01a4 -> line 1157
 *   +0x01ac -> line 1158
 *   +0x01b4 -> line 1165
 *   +0x01c0 -> line 1164
 *   +0x01c4 -> line 1166
 *   +0x0204 -> line 1167
 *   +0x021c -> line 1169
 *   +0x0220 -> line 1167
 *   +0x0244 -> line 1169
 *   +0x027c -> line 1171
 *   +0x02b8 -> line 1173
 *   +0x02f4 -> line 1175
 *   +0x0330 -> line 1176
 *   +0x033c -> line 1177
 *   +0x0368 -> line 1184
 *   +0x0374 -> line 1183
 *   +0x0378 -> line 1185
 *   +0x0398 -> line 1194
 *   +0x039c -> line 1190
 *   +0x03a0 -> line 1194
 *   +0x03a4 -> line 1190
 *   +0x03b0 -> line 1194
 *   +0x03c8 -> line 1196
 *   +0x03e4 -> line 1202
 *   +0x0400 -> line 1204
 *   +0x041c -> line 1208
 *   +0x0420 -> line 1207
 *   +0x0424 -> line 1208
 *   +0x0428 -> line 1217
 *   +0x0430 -> line 1207
 *   +0x0434 -> line 1217
 *   +0x0438 -> line 1218
 *   +0x0478 -> line 1220
 *   +0x0490 -> line 1229
 *   +0x0494 -> line 1220
 *   +0x04b8 -> line 1229
 *   +0x0518 -> line 1231
 *   +0x0578 -> line 1234
 *   +0x05d0 -> line 1244
 *   +0x05d4 -> line 1245
 *   +0x05d8 -> line 1244
 *   +0x05dc -> line 1246
 *   +0x05e0 -> line 1245
 *   +0x0608 -> line 1246
 *   +0x0640 -> line 1250
 *   +0x0644 -> line 1252
 *   +0x0648 -> line 1250
 *   +0x064c -> line 1253
 *   +0x0650 -> line 1251
 *   +0x0654 -> line 1253
 *   +0x0658 -> line 1252
 *   +0x065c -> line 1253
 *   +0x0664 -> line 1252
 *   +0x0668 -> line 1251
 *   +0x066c -> line 1252
 *   +0x0680 -> line 1253
 *   +0x0684 -> line 1252
 *   +0x0688 -> line 1253
 *   +0x0690 -> line 1267
 *   +0x0694 -> line 1268
 *   +0x0698 -> line 1267
 *   +0x069c -> line 1269
 *   +0x06a0 -> line 1268
 *   +0x06c8 -> line 1269
 *   +0x0700 -> line 1271
 *   +0x0718 -> line 1273
 *   +0x071c -> line 1271
 *   +0x0740 -> line 1273
 *   +0x07a0 -> line 1275
 *   +0x0800 -> line 1277
 *   +0x0858 -> line 1281
 *   +0x085c -> line 1282
 *   +0x0860 -> line 1281
 *   +0x0864 -> line 1283
 *   +0x0868 -> line 1282
 *   +0x0890 -> line 1283
 *   +0x08c8 -> line 1285
 *   +0x08e0 -> line 1290
 *   +0x08e4 -> line 1285
 *   +0x0908 -> line 1290
 *   +0x0940 -> line 1292
 *   +0x097c -> line 1294
 *   +0x09b8 -> line 1297
 *   +0x09f4 -> line 1302
 *   +0x09f8 -> line 1303
 *   +0x09fc -> line 1302
 *   +0x0a00 -> line 1304
 *   +0x0a04 -> line 1303
 *   +0x0a2c -> line 1304
 *   +0x0a64 -> line 1305
 *   +0x0b54 -> line 1310
 *   +0x0b58 -> line 1311
 *   +0x0b5c -> line 1310
 *   +0x0b60 -> line 1312
 *   +0x0b64 -> line 1311
 *   +0x0b8c -> line 1312
 *   +0x0bc4 -> line 1313
 *   +0x0bcc -> line 1314
 *   +0x0bd0 -> line 1319
 *   +0x0bd4 -> line 1313
 *   +0x0bdc -> line 1314
 *   +0x0be4 -> line 1318
 *   +0x0be8 -> line 1319
 *   +0x0bf0 -> line 1320
 *   +0x0bf4 -> line 1313
 *   +0x0c0c -> line 1314
 *   +0x0c10 -> line 1313
 *   +0x0c14 -> line 1314
 *   +0x0c18 -> line 1318
 *   +0x0c1c -> line 1319
 *   +0x0c3c -> line 1320
 *   +0x0c74 -> line 1324
 *   +0x0c78 -> line 1325
 *   +0x0c7c -> line 1324
 *   +0x0c80 -> line 1326
 *   +0x0c84 -> line 1325
 *   +0x0cac -> line 1326
 *   +0x0ce4 -> line 1327
 *   +0x0cec -> line 1328
 *   +0x0cf0 -> line 1334
 *   +0x0cf4 -> line 1327
 *   +0x0cfc -> line 1328
 *   +0x0d04 -> line 1333
 *   +0x0d08 -> line 1334
 *   +0x0d10 -> line 1335
 *   +0x0d14 -> line 1327
 *   +0x0d2c -> line 1328
 *   +0x0d30 -> line 1327
 *   +0x0d34 -> line 1328
 *   +0x0d38 -> line 1333
 *   +0x0d3c -> line 1334
 *   +0x0d5c -> line 1335
 *   +0x0d94 -> line 1340
 *   +0x0d98 -> line 1341
 *   +0x0d9c -> line 1340
 *   +0x0da0 -> line 1342
 *   +0x0da4 -> line 1341
 *   +0x0dcc -> line 1342
 *   +0x0e04 -> line 1352
 *   +0x0e08 -> line 1353
 *   +0x0e0c -> line 1352
 *   +0x0e10 -> line 1354
 *   +0x0e14 -> line 1353
 *   +0x0e18 -> line 1354
 *   +0x0e1c -> line 1353
 *   +0x0e20 -> line 1354
 *   +0x0e24 -> line 1353
 *   +0x0e28 -> line 1354
 *   +0x0e2c -> line 1353
 *   +0x0e44 -> line 1354
 *   +0x0e48 -> line 1353
 *   +0x0e4c -> line 1354
 *   +0x0e54 -> line 1355
 *   +0x0e6c -> line 1357
 *   +0x0e70 -> line 1355
 *   +0x0e94 -> line 1357
 *   +0x0ecc -> line 1359
 *   +0x0f08 -> line 1361
 *   +0x0f44 -> line 1363
 *   +0x0f80 -> line 1368
 *   +0x0f84 -> line 1369
 *   +0x0f88 -> line 1368
 *   +0x0f8c -> line 1370
 *   +0x0f90 -> line 1369
 *   +0x0f94 -> line 1370
 *   +0x0f98 -> line 1369
 *   +0x0f9c -> line 1370
 *   +0x0fa0 -> line 1369
 *   +0x0fa4 -> line 1370
 *   +0x0fa8 -> line 1369
 *   +0x0fc0 -> line 1370
 *   +0x0fc4 -> line 1369
 *   +0x0fc8 -> line 1370
 *   +0x0fd0 -> line 1371
 *   +0x0fe4 -> line 1373
 *   +0x0fe8 -> line 1371
 *   +0x100c -> line 1373
 *   +0x1044 -> line 1378
 *   +0x104c -> line 1383
 *   +0x1054 -> line 1389
 *   +0x1060 -> line 1388
 *   +0x1064 -> line 1389
 *   +0x1088 -> line 1390
 *   +0x1090 -> line 1391
 *   +0x1098 -> line 1390
 *   +0x10a0 -> line 1391
 *   +0x10a8 -> line 1390
 *   +0x10c0 -> line 1391
 *   +0x10c4 -> line 1390
 *   +0x10c8 -> line 1391
 *   +0x10ec -> line 1394
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitMenuPages(void)
{
    int IndSubMenuPage;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 897–975 */
/* addr: 0x0029b330  size: 1780 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 897
 *   +0x0008 -> line 901
 *   +0x0010 -> line 903
 *   +0x0018 -> line 906
 *   +0x0064 -> line 909
 *   +0x006c -> line 912
 *   +0x00b8 -> line 917
 *   +0x00c0 -> line 921
 *   +0x0110 -> line 922
 *   +0x0164 -> line 923
 *   +0x01b8 -> line 924
 *   +0x020c -> line 925
 *   +0x0260 -> line 926
 *   +0x02b4 -> line 927
 *   +0x0308 -> line 928
 *   +0x035c -> line 929
 *   +0x03b0 -> line 932
 *   +0x0404 -> line 934
 *   +0x0458 -> line 937
 *   +0x04ac -> line 940
 *   +0x04f8 -> line 942
 *   +0x04fc -> line 940
 *   +0x0500 -> line 942
 *   +0x0504 -> line 954
 *   +0x0508 -> line 945
 *   +0x0510 -> line 940
 *   +0x0518 -> line 945
 *   +0x0520 -> line 948
 *   +0x0530 -> line 951
 *   +0x053c -> line 954
 *   +0x058c -> line 957
 *   +0x05e0 -> line 960
 *   +0x0634 -> line 967
 *   +0x0638 -> line 960
 *   +0x063c -> line 963
 *   +0x0648 -> line 967
 *   +0x0694 -> line 973
 *   +0x06e8 -> line 975
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitMaterialForMenu(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 840–886 */
/* addr: 0x0029ba30  size: 440 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 840
 *   +0x0004 -> line 846
 *   +0x0008 -> line 840
 *   +0x000c -> line 846
 *   +0x0010 -> line 841
 *   +0x0014 -> line 842
 *   +0x0018 -> line 846
 *   +0x0034 -> line 851
 *   +0x0044 -> line 853
 *   +0x0148 -> line 856
 *   +0x0150 -> line 857
 *   +0x0158 -> line 858
 *   +0x0160 -> line 874
 *   +0x0164 -> line 859
 *   +0x0168 -> line 874
 *   +0x016c -> line 860
 *   +0x0170 -> line 874
 *   +0x0178 -> line 875
 *   +0x0180 -> line 878
 *   +0x0190 -> line 880
 *   +0x01a4 -> line 884
 *   +0x01ac -> line 886
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DesinitGameMenu2D(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 622–646 */
/* addr: 0x0029bbf0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 622
 *   +0x0008 -> line 625
 *   +0x0010 -> line 627
 *   +0x0020 -> line 628
 *   +0x0028 -> line 629
 *   +0x002c -> line 638
 *   +0x0030 -> line 629
 *   +0x0034 -> line 636
 *   +0x003c -> line 638
 *   +0x0044 -> line 640
 *   +0x004c -> line 641
 *   +0x0054 -> line 644
 *   +0x005c -> line 646
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CloseInGameMenu2D(void)
{
    unsigned int ulCurrentTime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 584–605 */
/* addr: 0x0029bc60  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 584
 *   +0x0004 -> line 590
 *   +0x0008 -> line 584
 *   +0x000c -> line 590
 *   +0x0014 -> line 585
 *   +0x0018 -> line 586
 *   +0x001c -> line 587
 *   +0x0020 -> line 588
 *   +0x0024 -> line 589
 *   +0x0028 -> line 590
 *   +0x00b0 -> line 593
 *   +0x00bc -> line 594
 *   +0x00c8 -> line 597
 *   +0x00cc -> line 603
 *   +0x00d4 -> line 604
 *   +0x00dc -> line 605
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ActivateInGameMenu2D(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 542–581 */
/* addr: 0x0029bd50  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 542
 *   +0x0004 -> line 553
 *   +0x0008 -> line 542
 *   +0x000c -> line 544
 *   +0x0010 -> line 549
 *   +0x0014 -> line 553
 *   +0x0018 -> line 544
 *   +0x001c -> line 545
 *   +0x0020 -> line 546
 *   +0x0024 -> line 547
 *   +0x0028 -> line 553
 *   +0x002c -> line 549
 *   +0x0030 -> line 548
 *   +0x0034 -> line 553
 *   +0x00bc -> line 555
 *   +0x00c4 -> line 571
 *   +0x00c8 -> line 557
 *   +0x00d0 -> line 556
 *   +0x00d4 -> line 571
 *   +0x00d8 -> line 556
 *   +0x00dc -> line 571
 *   +0x0110 -> line 576
 *   +0x0118 -> line 581
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ActivateInGameMenu2DStart(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 509–537 */
/* addr: 0x0029be80  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 509
 *   +0x0004 -> line 511
 *   +0x0008 -> line 509
 *   +0x000c -> line 515
 *   +0x0010 -> line 511
 *   +0x0014 -> line 512
 *   +0x0018 -> line 513
 *   +0x001c -> line 514
 *   +0x0020 -> line 516
 *   +0x0024 -> line 518
 *   +0x0028 -> line 515
 *   +0x002c -> line 518
 *   +0x0034 -> line 516
 *   +0x0038 -> line 518
 *   +0x00c0 -> line 520
 *   +0x00c8 -> line 524
 *   +0x00cc -> line 529
 *   +0x00d0 -> line 524
 *   +0x00d4 -> line 533
 *   +0x00d8 -> line 525
 *   +0x00e0 -> line 526
 *   +0x00e8 -> line 528
 *   +0x00f0 -> line 530
 *   +0x00f8 -> line 531
 *   +0x0100 -> line 532
 *   +0x0104 -> line 533
 *   +0x0170 -> line 534
 *   +0x01a4 -> line 535
 *   +0x01b8 -> line 537
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ActivateInGameMenu2DPhoto(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 489–505 */
/* addr: 0x0029c050  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 489
 *   +0x0004 -> line 490
 *   +0x0008 -> line 489
 *   +0x000c -> line 494
 *   +0x0010 -> line 490
 *   +0x0014 -> line 491
 *   +0x0018 -> line 492
 *   +0x001c -> line 493
 *   +0x0020 -> line 495
 *   +0x0024 -> line 497
 *   +0x0028 -> line 494
 *   +0x002c -> line 497
 *   +0x0034 -> line 495
 *   +0x0038 -> line 497
 *   +0x00c0 -> line 499
 *   +0x00c8 -> line 503
 *   +0x00cc -> line 502
 *   +0x00d0 -> line 503
 *   +0x00d4 -> line 504
 *   +0x00d8 -> line 505
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void M2D_fn_vDisplayEndOfGameRecapPage(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 466–486 */
/* addr: 0x0029c140  size: 304 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 466
 *   +0x0004 -> line 474
 *   +0x0008 -> line 466
 *   +0x000c -> line 474
 *   +0x0010 -> line 466
 *   +0x0018 -> line 473
 *   +0x001c -> line 474
 *   +0x0020 -> line 467
 *   +0x0024 -> line 468
 *   +0x0028 -> line 470
 *   +0x002c -> line 471
 *   +0x0030 -> line 473
 *   +0x0034 -> line 474
 *   +0x0038 -> line 472
 *   +0x003c -> line 474
 *   +0x00c0 -> line 476
 *   +0x00c8 -> line 477
 *   +0x00cc -> line 484
 *   +0x00d0 -> line 477
 *   +0x00d4 -> line 480
 *   +0x00d8 -> line 478
 *   +0x00dc -> line 481
 *   +0x00e0 -> line 478
 *   +0x00e4 -> line 479
 *   +0x00e8 -> line 480
 *   +0x00ec -> line 479
 *   +0x00f0 -> line 482
 *   +0x00f4 -> line 484
 *   +0x00f8 -> line 482
 *   +0x00fc -> line 484
 *   +0x0100 -> line 482
 *   +0x0104 -> line 484
 *   +0x0120 -> line 486
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ActivateInGameMenu2DBonus(int WithExit)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 418–418 */
/* addr: 0x0029c270  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 418
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3SetNbCineOpen(unsigned int ulNum)
{
    g_NbCinematicOpen = ulNum;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 411–411 */
/* addr: 0x0029c280  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 411
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3SetNbBonusOpen(unsigned int ulNum)
{
    g_NbArcadeOpen = ulNum;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 394–404 */
/* addr: 0x0029c290  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 394
 *   +0x0004 -> line 395
 *   +0x0018 -> line 396
 *   +0x001c -> line 397
 *   +0x0028 -> line 401
 *   +0x003c -> line 402
 *   +0x0040 -> line 404
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3SetCurrentEnvNumber(unsigned int ulNum)
{
    if (ulNum > (unsigned int)g_MaxIndCurrentEnv)
        g_MaxIndCurrentEnv = ulNum;
    if (ulNum != (unsigned int)g_IndCurrentEnv)
        g_IndCurrentEnv = ulNum;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 386–386 */
/* addr: 0x0029c2e0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 386
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdatePlayerGameName(void)
{
    return;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 368–381 */
/* addr: 0x0029c340  size: 1016 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 368
 *   +0x000c -> line 370
 *   +0x0010 -> line 371
 *   +0x0014 -> line 370
 *   +0x0018 -> line 371
 *   +0x001c -> line 375
 *   +0x0150 -> line 376
 *   +0x02b0 -> line 380
 *   +0x02b4 -> line 378
 *   +0x02bc -> line 380
 *   +0x02c0 -> line 376
 *   +0x02c4 -> line 378
 *   +0x02c8 -> line 380
 *   +0x03f0 -> line 381
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3ReInitScore(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 335–361 */
/* addr: 0x0029c740  size: 2372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 335
 *   +0x0138 -> line 337
 *   +0x0144 -> line 339
 *   +0x0148 -> line 342
 *   +0x014c -> line 340
 *   +0x0150 -> line 342
 *   +0x0160 -> line 339
 *   +0x0164 -> line 340
 *   +0x0168 -> line 342
 *   +0x02c8 -> line 344
 *   +0x041c -> line 347
 *   +0x0560 -> line 349
 *   +0x069c -> line 356
 *   +0x07d0 -> line 357
 *   +0x07e0 -> line 356
 *   +0x07e8 -> line 357
 *   +0x093c -> line 361
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3StoreInitScore(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 327–328 */
/* addr: 0x0029d090  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 327
 *   +0x0010 -> line 328
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_ulR3GetEnvNbCage(unsigned int ulIndE)
{
    return g_aEnvValue[ulIndE].ulNbCage;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 310–323 */
/* addr: 0x0029d0b0  size: 712 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 310
 *   +0x0138 -> line 312
 *   +0x0144 -> line 316
 *   +0x0164 -> line 322
 *   +0x02c0 -> line 323
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_ulR3GetEnvScoreWithRevisit(unsigned int ulIndE)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 300–306 */
/* addr: 0x0029d380  size: 360 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 300
 *   +0x0138 -> line 303
 *   +0x0160 -> line 306
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_ulR3GetEnvScore(unsigned int ulIndE)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 294–296 */
/* addr: 0x0029d4f0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 294
 *   +0x000c -> line 295
 *   +0x001c -> line 296
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3SetEnvNbCage(unsigned int ulIndE, unsigned int ulNbCage)
{
    if (ulIndE < 10)
        g_aEnvValue[ulIndE].ulNbCage = ulNbCage;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 268–289 */
/* addr: 0x0029d520  size: 736 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 268
 *   +0x000c -> line 270
 *   +0x0018 -> line 272
 *   +0x0020 -> line 274
 *   +0x0028 -> line 277
 *   +0x002c -> line 279
 *   +0x004c -> line 283
 *   +0x0054 -> line 285
 *   +0x01a4 -> line 288
 *   +0x02d8 -> line 289
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3SetEnvScoreWithRevisit(unsigned int ulIndE, unsigned int ulScore)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 251–255 */
/* addr: 0x0029d800  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 251
 *   +0x0004 -> line 252
 *   +0x0008 -> line 251
 *   +0x0010 -> line 253
 *   +0x0130 -> line 254
 *   +0x0138 -> line 255
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3RecomputeGlobalScore(void)
{
    int i;
    int offset;
    anon_2 *p;

    g_aEnvValue[0].ulScore = 0;

    i = 1;
    offset = 8;
    do
    {
        p = (anon_2 *)((char *)g_aEnvValue + offset);
        g_aEnvValue[0].ulScore += p[0].ulScore;
        g_aEnvValue[0].ulScore += p[1].ulScore;
        g_aEnvValue[0].ulScore += p[2].ulScore;
        g_aEnvValue[0].ulScore += p[3].ulScore;
        g_aEnvValue[0].ulScore += p[4].ulScore;
        g_aEnvValue[0].ulScore += p[5].ulScore;
        g_aEnvValue[0].ulScore += p[6].ulScore;
        g_aEnvValue[0].ulScore += p[7].ulScore;
        i += 8;
        offset += 64;
    } while (i < 2);

    offset = i * 8;
    if (i < 10)
    {
        do
        {
            p = (anon_2 *)((char *)g_aEnvValue + offset);
            g_aEnvValue[0].ulScore += p->ulScore;
            i++;
            offset += 8;
        } while (i < 10);
    }

    g_RevisitCurrentGlobalScore = g_aEnvValue[0].ulScore;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 221–227 */
/* addr: 0x0029d940  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 221
 *   +0x001c -> line 227
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int M2D_fn_ulGetRevisitEnvironmentNumber(void)
{
    if (g_RevisitMode != 0) {
    } else {
        return 0;
    }
    return g_RevisitIndCurrentEnv;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 214–215 */
/* addr: 0x0029d970  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 214
 *   +0x0004 -> line 215
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void M2D_fn_vForbidExitFromMenu(void)
{
    g_ExitForbidden = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 203–203 */
/* addr: 0x0029d980  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 203
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vR3SetEndOfGame(unsigned int ulValue)
{
    g_EndOfGameIsDone = ulValue;
}
