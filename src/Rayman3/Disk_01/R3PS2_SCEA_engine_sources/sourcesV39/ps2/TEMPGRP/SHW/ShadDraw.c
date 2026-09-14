/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c */
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
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct tdstEvent_ tdstEvent_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct stRECT stRECT;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct stPOINT stPOINT;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct stMorphData stMorphData;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;

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

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
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

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight; /* +0x0 */
    unsigned int dwWidth; /* +0x4 */
    float xPixelDimensionX; /* +0x8 */
    float xPixelDimensionY; /* +0xc */
    int p_cVirtualScreen; /* +0x10 */
    int lPitch; /* +0x14 */
    int p_sZBuffer; /* +0x18 */
    unsigned int dwFullScreenModeX; /* +0x1c */
    unsigned int dwFullScreenModeY; /* +0x20 */
    unsigned int dwFullScreenModeBpp; /* +0x24 */
    int hFullScreenModeWnd; /* +0x28 */
    int hNormalModeWnd; /* +0x2c */
    int bFullScreen; /* +0x30 */
    unsigned int uiTypeDriver; /* +0x34 */
    stPOINT pClientOnPrimary; /* +0x38 */
    stRECT rtClientRect; /* +0x40 */
    stRECT rtWindowRect; /* +0x50 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
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

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
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

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

unsigned char SHW_g_bCurrentlyDrawingShadow;
int g_p_stTextureOfTextureShadow;
int p_hHandleOfShadowedSuperObject[10];
short g_p_hHandleOfElementForShadow[10];
int g_p_hHandleOfGeometricShadowObject[10];
short g_xIndexOfShadow;
int g_hShadowPolygonVisualMaterial;
GLD_tdstDeviceAttributes_ g_stDevAttrib;
MTH3D_tdstVector_ stSinEffectAmp;
char g_cSinusEffectState;
unsigned int g_ulSpoMask;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
int HIE_g_a_hMatrixStack[50];
int HIE_g_lNbMatrixInStack;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 181–182 */
/* addr: 0x0031d070  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 181
 *   +0x0014 -> line 182
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vGetMinPointInBorder(SECT_tdstSector_* _hSector, MTH3D_tdstVector_* _p_stMinPoint)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 802–1214 */
/* addr: 0x0031d090  size: 2740 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 802
 *   +0x0004 -> line 844
 *   +0x0008 -> line 802
 *   +0x005c -> line 812
 *   +0x0060 -> line 821
 *   +0x006c -> line 844
 *   +0x0080 -> line 850
 *   +0x0088 -> line 853
 *   +0x0090 -> line 852
 *   +0x0098 -> line 853
 *   +0x00a0 -> line 855
 *   +0x00b0 -> line 858
 *   +0x00b4 -> line 859
 *   +0x00b8 -> line 858
 *   +0x00bc -> line 859
 *   +0x00e0 -> line 861
 *   +0x00ec -> line 863
 *   +0x00f0 -> line 864
 *   +0x00fc -> line 865
 *   +0x0100 -> line 868
 *   +0x0134 -> line 871
 *   +0x013c -> line 874
 *   +0x0178 -> line 879
 *   +0x0180 -> line 882
 *   +0x018c -> line 902
 *   +0x0190 -> line 901
 *   +0x0194 -> line 902
 *   +0x01a0 -> line 921
 *   +0x01b4 -> line 931
 *   +0x01b8 -> line 922
 *   +0x01c4 -> line 932
 *   +0x01c8 -> line 922
 *   +0x01cc -> line 931
 *   +0x01d0 -> line 922
 *   +0x01d4 -> line 932
 *   +0x01d8 -> line 925
 *   +0x01dc -> line 940
 *   +0x01e0 -> line 931
 *   +0x01e4 -> line 909
 *   +0x01e8 -> line 925
 *   +0x01ec -> line 938
 *   +0x01f0 -> line 931
 *   +0x01f4 -> line 938
 *   +0x01f8 -> line 931
 *   +0x01fc -> line 938
 *   +0x0200 -> line 932
 *   +0x0204 -> line 926
 *   +0x0228 -> line 931
 *   +0x022c -> line 938
 *   +0x0230 -> line 932
 *   +0x0234 -> line 938
 *   +0x0238 -> line 934
 *   +0x0240 -> line 938
 *   +0x0244 -> line 934
 *   +0x0248 -> line 935
 *   +0x024c -> line 934
 *   +0x0250 -> line 938
 *   +0x0258 -> line 940
 *   +0x0264 -> line 943
 *   +0x0268 -> line 946
 *   +0x026c -> line 947
 *   +0x027c -> line 951
 *   +0x02b4 -> line 954
 *   +0x02dc -> line 957
 *   +0x0300 -> line 960
 *   +0x0308 -> line 964
 *   +0x0318 -> line 966
 *   +0x031c -> line 967
 *   +0x0324 -> line 969
 *   +0x035c -> line 972
 *   +0x0384 -> line 975
 *   +0x03ac -> line 978
 *   +0x03b0 -> line 979
 *   +0x03c0 -> line 982
 *   +0x03c8 -> line 984
 *   +0x03f0 -> line 986
 *   +0x0418 -> line 992
 *   +0x041c -> line 993
 *   +0x042c -> line 1000
 *   +0x0430 -> line 1004
 *   +0x0434 -> line 1001
 *   +0x0438 -> line 1004
 *   +0x0440 -> line 1005
 *   +0x044c -> line 1006
 *   +0x046c -> line 1009
 *   +0x0480 -> line 1012
 *   +0x0484 -> line 1013
 *   +0x04bc -> line 1016
 *   +0x04e4 -> line 1019
 *   +0x050c -> line 1021
 *   +0x0510 -> line 1022
 *   +0x051c -> line 1023
 *   +0x0520 -> line 1024
 *   +0x0530 -> line 1027
 *   +0x0538 -> line 1028
 *   +0x0548 -> line 1033
 *   +0x0570 -> line 1036
 *   +0x0598 -> line 1038
 *   +0x05a4 -> line 1039
 *   +0x05a8 -> line 1082
 *   +0x05d0 -> line 1098
 *   +0x05d4 -> line 1100
 *   +0x05d8 -> line 1098
 *   +0x05dc -> line 1100
 *   +0x05e4 -> line 1098
 *   +0x05f0 -> line 1100
 *   +0x05f8 -> line 1103
 *   +0x05fc -> line 1105
 *   +0x0600 -> line 1103
 *   +0x0604 -> line 1105
 *   +0x0644 -> line 1108
 *   +0x0650 -> line 1109
 *   +0x0654 -> line 1111
 *   +0x06c0 -> line 1113
 *   +0x06c4 -> line 1123
 *   +0x06c8 -> line 1113
 *   +0x06cc -> line 1118
 *   +0x06d0 -> line 1120
 *   +0x06d4 -> line 1113
 *   +0x0700 -> line 1123
 *   +0x0704 -> line 1113
 *   +0x0708 -> line 1115
 *   +0x070c -> line 1116
 *   +0x0710 -> line 1118
 *   +0x0714 -> line 1119
 *   +0x0718 -> line 1120
 *   +0x071c -> line 1123
 *   +0x076c -> line 1129
 *   +0x0770 -> line 1132
 *   +0x0774 -> line 1129
 *   +0x0778 -> line 1132
 *   +0x0780 -> line 1129
 *   +0x078c -> line 1132
 *   +0x07a0 -> line 1134
 *   +0x07a8 -> line 1137
 *   +0x07b4 -> line 1141
 *   +0x07b8 -> line 1140
 *   +0x07bc -> line 1142
 *   +0x07c0 -> line 1155
 *   +0x07cc -> line 1137
 *   +0x07e4 -> line 1140
 *   +0x07e8 -> line 1141
 *   +0x07f0 -> line 1140
 *   +0x07f8 -> line 1141
 *   +0x0800 -> line 1142
 *   +0x0804 -> line 1141
 *   +0x0808 -> line 1142
 *   +0x0834 -> line 1155
 *   +0x083c -> line 1156
 *   +0x0840 -> line 1157
 *   +0x0844 -> line 1158
 *   +0x085c -> line 1161
 *   +0x0860 -> line 1168
 *   +0x0864 -> line 1161
 *   +0x0868 -> line 1168
 *   +0x086c -> line 1161
 *   +0x0870 -> line 1168
 *   +0x0874 -> line 1161
 *   +0x087c -> line 1164
 *   +0x0880 -> line 1161
 *   +0x088c -> line 1164
 *   +0x0890 -> line 1161
 *   +0x0894 -> line 1164
 *   +0x0898 -> line 1165
 *   +0x089c -> line 1161
 *   +0x08a0 -> line 1165
 *   +0x08a8 -> line 1166
 *   +0x08b0 -> line 1168
 *   +0x08b8 -> line 1169
 *   +0x08bc -> line 1171
 *   +0x08c0 -> line 1169
 *   +0x08c4 -> line 1171
 *   +0x08c8 -> line 1170
 *   +0x08cc -> line 1171
 *   +0x08d8 -> line 1175
 *   +0x08dc -> line 1176
 *   +0x08e0 -> line 1175
 *   +0x08e4 -> line 1179
 *   +0x08f0 -> line 1176
 *   +0x08f4 -> line 1175
 *   +0x08fc -> line 1176
 *   +0x0904 -> line 1177
 *   +0x0908 -> line 1176
 *   +0x090c -> line 1177
 *   +0x0938 -> line 1179
 *   +0x0940 -> line 1180
 *   +0x0944 -> line 1182
 *   +0x0948 -> line 1180
 *   +0x094c -> line 1182
 *   +0x0960 -> line 1187
 *   +0x0964 -> line 1191
 *   +0x0970 -> line 1187
 *   +0x0978 -> line 1188
 *   +0x0984 -> line 1189
 *   +0x098c -> line 1191
 *   +0x0994 -> line 1192
 *   +0x0998 -> line 1193
 *   +0x09a0 -> line 1194
 *   +0x09b4 -> line 1198
 *   +0x09d0 -> line 1199
 *   +0x09ec -> line 1200
 *   +0x0a08 -> line 1201
 *   +0x0a24 -> line 1206
 *   +0x0a28 -> line 1202
 *   +0x0a2c -> line 1206
 *   +0x0a30 -> line 1204
 *   +0x0a34 -> line 1206
 *   +0x0a40 -> line 1202
 *   +0x0a44 -> line 1204
 *   +0x0a4c -> line 1206
 *   +0x0a54 -> line 1210
 *   +0x0a60 -> line 1213
 *   +0x0a64 -> line 1214
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void shw_fn_vInternalDrawShadow(GLD_tdstViewportAttributes_* _p_stVpt, HIE_tdstSuperObject_* _hHandleOfCharacter, HIE_tdstSuperObject_* _hSprObjSector, int _lSectorDrawmask)
{
    float xNorm;
    float xInvGlobalNormalxZ;
    float xBY;
    float xBX;
    float xAY;
    float xAX;
    ACP_tdst2DUVValues_ stUV;
    MTH3D_tdstVector_ stCharacterRotation;
    MTH3D_tdstVector_ stPointOfShadowRectangle;
    SECT_tdstSector_* hSectorObject;
    MTH3D_tdstVector_ stMax;
    MTH3D_tdstVector_ stMin;
    int bFound;
    int i;
    SECT_tdstListOfSOSectorsInActivityInteraction_* hInteractionElement;
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hCollisionElement;
    SECT_tdstListOfSOCharacters_* hCharacterList;
    HIE_tdstSuperObject_* hTest;
    GEO_tdstGeometricObject_* hHandleOfGeometricShadowObject;
    float xScaleY;
    float xScaleX;
    float xCoefAltitude;
    MTH3D_tdstVector_ stPickedPoint;
    MTH3D_tdstVector_ stVertexAB;
    MTH3D_tdstVector_ stStartPicking;
    MTH3D_tdstVector_ stGlobalNormalOfPickedFace;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 717–773 */
/* addr: 0x0031db50  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 717
 *   +0x0028 -> line 727
 *   +0x0038 -> line 736
 *   +0x0040 -> line 740
 *   +0x004c -> line 742
 *   +0x0054 -> line 747
 *   +0x0058 -> line 757
 *   +0x006c -> line 763
 *   +0x0074 -> line 773
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SHW_fn_vDrawShadow(GLD_tdstViewportAttributes_* _p_stVpt, HIE_tdstSuperObject_* _hHandleOfCharacter, HIE_tdstSuperObject_* _hSprObjSector, int _lSectorDrawmask)
{
    short xLevelOfQualityOfShadows;
    int bTransitionInProgress;
    unsigned long ulCustomBits;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 684–695 */
/* addr: 0x0031dbf0  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 685
 *   +0x0008 -> line 684
 *   +0x0010 -> line 685
 *   +0x0018 -> line 687
 *   +0x0024 -> line 690
 *   +0x0030 -> line 692
 *   +0x0034 -> line 693
 *   +0x0044 -> line 694
 *   +0x0048 -> line 695
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SHW_bDidCharacterHaveAShadowLastFrame(HIE_tdstSuperObject_* _hHandleOfCharacter)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 559–648 */
/* addr: 0x0031dc40  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 559
 *   +0x0004 -> line 565
 *   +0x0008 -> line 559
 *   +0x000c -> line 565
 *   +0x0010 -> line 559
 *   +0x0038 -> line 565
 *   +0x003c -> line 559
 *   +0x0040 -> line 564
 *   +0x0044 -> line 565
 *   +0x0048 -> line 564
 *   +0x004c -> line 565
 *   +0x0054 -> line 564
 *   +0x005c -> line 565
 *   +0x0068 -> line 567
 *   +0x0070 -> line 573
 *   +0x0088 -> line 575
 *   +0x0090 -> line 576
 *   +0x00a4 -> line 582
 *   +0x00a8 -> line 584
 *   +0x00ac -> line 582
 *   +0x00b0 -> line 585
 *   +0x00b8 -> line 587
 *   +0x00c8 -> line 592
 *   +0x00cc -> line 594
 *   +0x00d4 -> line 595
 *   +0x00e0 -> line 597
 *   +0x00e8 -> line 601
 *   +0x00f0 -> line 602
 *   +0x0100 -> line 603
 *   +0x0104 -> line 607
 *   +0x0108 -> line 622
 *   +0x0110 -> line 625
 *   +0x0120 -> line 644
 *   +0x0128 -> line 645
 *   +0x0130 -> line 647
 *   +0x0160 -> line 648
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SHW_fn_vSentToViewPort(GLD_tdstViewportAttributes_* _p_stVpt, HIE_tdstSuperObject_* _hHandleOfCharacter, int _lSectorDrawmask, GEO_tdstGeometricObject_* _hHandleOfGeometricShadowObject)
{
    float fGlobalAlphaTemp;
    unsigned char bTransparenceSetting;
    int lAdditionnalDrawMask;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 543–543 */
/* addr: 0x0031ddd0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 543
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SHW_fn_vInitShadowCounter(void)
{
    g_xIndexOfShadow = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 527–527 */
/* addr: 0x0031dde0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 527
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SHW_fn_vGlobalInitShadowCounter(void)
{
    g_xIndexOfShadow = 0;
}
