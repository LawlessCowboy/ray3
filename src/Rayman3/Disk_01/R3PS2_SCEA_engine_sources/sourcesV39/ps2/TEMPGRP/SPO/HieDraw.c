/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
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
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct _tdstCheapCharacter _tdstCheapCharacter;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct _tdstCheapCharacterList _tdstCheapCharacterList;

struct GEO_tdstColor_ {
    float xR;
    float xG;
    float xB;
    float xA;
};
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct stMorphData stMorphData;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

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

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
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

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
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
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
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

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct _tdstCheapCharacter {
    MTH4D_tdstVector_ stPosition; /* +0x0 */
    MTH4D_tdstVector_ stDirection; /* +0x10 */
    unsigned int lTakenTime; /* +0x20 */
    char cActivity; /* +0x24 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
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

struct _tdstCheapCharacterList {
    HIE_tdstSuperObject_* pReferenceObject; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    _tdstCheapCharacter List[40]; /* +0x10 */
    unsigned int NumberOfCheapCharacter; /* +0x790 */
    unsigned int MaxNumberOfCheapCharacter; /* +0x794 */
    unsigned int lIndOfFurthestDesactivateCharacter; /* +0x798 */
    unsigned int lIndOfClosestDesactivateCharacter; /* +0x79c */
    unsigned int lIndOfReactivateCharacter; /* +0x7a0 */
    unsigned int lTimer; /* +0x7a4 */
    float fSquaredMinDistance; /* +0x7a8 */
    float fSquaredMaxDistance; /* +0x7ac */
    unsigned int ulOptionFlags; /* +0x7b0 */
    GLI_tdstMaterial_* hAuraVisualMaterial; /* +0x7b4 */
    float p_fAuraSizes[2]; /* +0x7b8 */
    float fAuraSizeBlinkRange; /* +0x7c0 */
    float fAuraTransparencyMidLevel; /* +0x7c4 */
    float fAuraTransparencyBlinkRange; /* +0x7c8 */
    unsigned int bAurasNeedToBeDrawn; /* +0x7cc */
    unsigned int SDL; /* +0x7d0 */
    MTH4D_tdstMatrix_* pMatrixList; /* +0x7d4 */
    unsigned int NbMatrices; /* +0x7d8 */
    char cTestMode; /* +0x7dc */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
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

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
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

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
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

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

short g_xFixIndex;
short g_xFixIndexSave;
int Global_CharacterBeingDisplayed;
int g_hFakeInstance;
unsigned int GLI_g_NbSkinsForThisCharacter;
short GLI_g_SkinIndice[4];
int GLI_g_SkinMaterials[4];
int gd_hFixSPOSave[32];
int gd_hFixSPO[32];
int g_p_stCurrentInCamCoordsMatrix;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
MAT_tdstTransformation_ PS2_MatStack[51];
unsigned int PS2_MatStackIndex;
int gs_CurrentNumberOfLightInViewport;
int gs_aDEF_p_CurrentListOfLight[300];
unsigned char g_ucCurrentViewport;
int HIE_gs_lCurrentFrame;
unsigned int g_lNbListOfCheapCharacterList;
unsigned int SCT_g_DrawingMirrored;
_tdstCheapCharacterList g_aListOfCheapCharacterList[10];
int GLI_g_CurrentSkinMaterial;
int GLI_g_CurrentSkinIndex;
int Global_CharacterModuleBeingDisplayed;
char GLI_cGlobalFogIsOn;
int GeoHandle;
float VoidReal;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 422–482 */
/* addr: 0x0031ddf0  size: 408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 422
 *   +0x0024 -> line 434
 *   +0x0038 -> line 437
 *   +0x0040 -> line 438
 *   +0x0048 -> line 439
 *   +0x0050 -> line 441
 *   +0x005c -> line 443
 *   +0x0064 -> line 444
 *   +0x0068 -> line 445
 *   +0x0070 -> line 447
 *   +0x0078 -> line 454
 *   +0x0080 -> line 449
 *   +0x0084 -> line 450
 *   +0x0088 -> line 451
 *   +0x008c -> line 454
 *   +0x0094 -> line 455
 *   +0x00a0 -> line 457
 *   +0x00b0 -> line 458
 *   +0x00bc -> line 460
 *   +0x00cc -> line 462
 *   +0x00d8 -> line 464
 *   +0x00dc -> line 465
 *   +0x00e0 -> line 464
 *   +0x00e4 -> line 465
 *   +0x00e8 -> line 467
 *   +0x00f0 -> line 469
 *   +0x0104 -> line 471
 *   +0x0110 -> line 472
 *   +0x0128 -> line 474
 *   +0x0138 -> line 478
 *   +0x0164 -> line 480
 *   +0x016c -> line 481
 *   +0x0174 -> line 482
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SHW_fn_vInitShadow(short _hGLDDevice, int bMustAlloc)
{
    unsigned char ucOldHMUTempBloc;
    unsigned char ucOldHMUNormalBloc;
    short* p_hHandleOfElementForShadow;
    GEO_tdstGeometricObject_** p_hHandleGeoShwObj;
    short i;
    GEO_tdstColor_ stShadowPolygonColor;
    GLI_tdstMaterial_* s_hShadowPolygonVisualMaterialLocal;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 1389–1721 */
/* addr: 0x0031df90  size: 3044 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1389
 *   +0x001c -> line 1407
 *   +0x0020 -> line 1389
 *   +0x003c -> line 1407
 *   +0x0040 -> line 1389
 *   +0x0044 -> line 1407
 *   +0x0048 -> line 1389
 *   +0x0060 -> line 1395
 *   +0x0068 -> line 1396
 *   +0x0070 -> line 1395
 *   +0x0074 -> line 1399
 *   +0x0078 -> line 1400
 *   +0x007c -> line 1407
 *   +0x00e0 -> line 1413
 *   +0x011c -> line 1415
 *   +0x0124 -> line 1420
 *   +0x0134 -> line 1423
 *   +0x0148 -> line 1425
 *   +0x014c -> line 1427
 *   +0x0150 -> line 1425
 *   +0x0154 -> line 1427
 *   +0x015c -> line 1428
 *   +0x0164 -> line 1429
 *   +0x016c -> line 1432
 *   +0x0178 -> line 1434
 *   +0x0180 -> line 1438
 *   +0x0184 -> line 1439
 *   +0x0188 -> line 1440
 *   +0x01b4 -> line 1443
 *   +0x01b8 -> line 1442
 *   +0x01bc -> line 1443
 *   +0x0390 -> line 1447
 *   +0x0568 -> line 1450
 *   +0x056c -> line 1454
 *   +0x0570 -> line 1460
 *   +0x0574 -> line 1450
 *   +0x0578 -> line 1454
 *   +0x0580 -> line 1460
 *   +0x0584 -> line 1454
 *   +0x0588 -> line 1461
 *   +0x058c -> line 1454
 *   +0x0590 -> line 1465
 *   +0x059c -> line 1468
 *   +0x05a0 -> line 1470
 *   +0x05b0 -> line 1472
 *   +0x05cc -> line 1473
 *   +0x05d4 -> line 1474
 *   +0x05e0 -> line 1476
 *   +0x05e4 -> line 1474
 *   +0x05e8 -> line 1475
 *   +0x05f8 -> line 1474
 *   +0x05fc -> line 1475
 *   +0x0604 -> line 1476
 *   +0x0618 -> line 1478
 *   +0x0620 -> line 1482
 *   +0x0624 -> line 1502
 *   +0x0628 -> line 1503
 *   +0x0630 -> line 1505
 *   +0x0634 -> line 1506
 *   +0x063c -> line 1530
 *   +0x0650 -> line 1532
 *   +0x0658 -> line 1533
 *   +0x0664 -> line 1534
 *   +0x069c -> line 1535
 *   +0x06d4 -> line 1537
 *   +0x06ec -> line 1539
 *   +0x06f4 -> line 1540
 *   +0x06fc -> line 1541
 *   +0x0704 -> line 1542
 *   +0x0714 -> line 1544
 *   +0x071c -> line 1545
 *   +0x072c -> line 1547
 *   +0x0730 -> line 1552
 *   +0x0734 -> line 1548
 *   +0x0738 -> line 1550
 *   +0x073c -> line 1547
 *   +0x0740 -> line 1552
 *   +0x074c -> line 1548
 *   +0x0758 -> line 1549
 *   +0x0760 -> line 1550
 *   +0x076c -> line 1556
 *   +0x0784 -> line 1557
 *   +0x07b0 -> line 1559
 *   +0x07b8 -> line 1562
 *   +0x07bc -> line 1561
 *   +0x07c8 -> line 1564
 *   +0x07cc -> line 1562
 *   +0x07d0 -> line 1564
 *   +0x0838 -> line 1567
 *   +0x0840 -> line 1568
 *   +0x0844 -> line 1567
 *   +0x084c -> line 1570
 *   +0x085c -> line 1572
 *   +0x0864 -> line 1578
 *   +0x0870 -> line 1579
 *   +0x087c -> line 1582
 *   +0x0880 -> line 1580
 *   +0x0884 -> line 1582
 *   +0x0894 -> line 1586
 *   +0x0898 -> line 1591
 *   +0x089c -> line 1586
 *   +0x08a8 -> line 1591
 *   +0x0918 -> line 1606
 *   +0x091c -> line 1604
 *   +0x0920 -> line 1606
 *   +0x0928 -> line 1608
 *   +0x092c -> line 1609
 *   +0x0930 -> line 1608
 *   +0x0934 -> line 1609
 *   +0x093c -> line 1608
 *   +0x0940 -> line 1609
 *   +0x0960 -> line 1610
 *   +0x0968 -> line 1611
 *   +0x096c -> line 1610
 *   +0x0998 -> line 1612
 *   +0x09bc -> line 1613
 *   +0x09c4 -> line 1615
 *   +0x09dc -> line 1617
 *   +0x09e8 -> line 1618
 *   +0x09f8 -> line 1619
 *   +0x0a14 -> line 1621
 *   +0x0a1c -> line 1624
 *   +0x0a34 -> line 1626
 *   +0x0a3c -> line 1632
 *   +0x0a40 -> line 1634
 *   +0x0a54 -> line 1642
 *   +0x0a6c -> line 1649
 *   +0x0a74 -> line 1655
 *   +0x0a80 -> line 1656
 *   +0x0a90 -> line 1659
 *   +0x0aa0 -> line 1661
 *   +0x0aac -> line 1678
 *   +0x0ab0 -> line 1681
 *   +0x0ac4 -> line 1685
 *   +0x0ad8 -> line 1687
 *   +0x0ae0 -> line 1688
 *   +0x0ae8 -> line 1689
 *   +0x0af0 -> line 1690
 *   +0x0af8 -> line 1694
 *   +0x0b2c -> line 1697
 *   +0x0b38 -> line 1699
 *   +0x0b6c -> line 1703
 *   +0x0b78 -> line 1706
 *   +0x0b80 -> line 1711
 *   +0x0b84 -> line 1708
 *   +0x0b88 -> line 1719
 *   +0x0b8c -> line 1711
 *   +0x0b90 -> line 1712
 *   +0x0b94 -> line 1719
 *   +0x0b9c -> line 1721
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vSendCharacterToViewportPS2(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult)
{
    int lShadowCullingResult;
    float xShadowRadius;
    MTH3D_tdstVector_ stShadowCenter;
    float xHeight;
    tdst3dData_* h_3dData;
    unsigned int i;
    tdstStandardGame_* param0;
    unsigned char bDynamicShadowOn;
    float fGlobalAlphaTemp;
    tdst3dData_* h_Current3dData;
    HIE_tdstSuperObject_* hFather;
    float xSphereRadius;
    MTH3D_tdstVector_* p_stSphereCenter;
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
    COL_tdstBoundingSphere_* hBoundingSphere;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 1354–1376 */
/* addr: 0x0031eb80  size: 884 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1354
 *   +0x0020 -> line 1359
 *   +0x01f8 -> line 1362
 *   +0x01fc -> line 1363
 *   +0x0200 -> line 1362
 *   +0x0204 -> line 1363
 *   +0x0250 -> line 1365
 *   +0x02f0 -> line 1368
 *   +0x02fc -> line 1369
 *   +0x030c -> line 1371
 *   +0x0318 -> line 1372
 *   +0x0328 -> line 1374
 *   +0x0358 -> line 1376
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vSendCharacterModulesToViewPortPS2(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 1165–1203 */
/* addr: 0x0031ef00  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1165
 *   +0x0004 -> line 1178
 *   +0x0008 -> line 1165
 *   +0x000c -> line 1174
 *   +0x0010 -> line 1176
 *   +0x0014 -> line 1178
 *   +0x001c -> line 1180
 *   +0x0020 -> line 1181
 *   +0x0028 -> line 1182
 *   +0x0030 -> line 1187
 *   +0x004c -> line 1191
 *   +0x0054 -> line 1194
 *   +0x0060 -> line 1197
 *   +0x0068 -> line 1198
 *   +0x0084 -> line 1202
 *   +0x0088 -> line 1203
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GEO_tdstGeometricObject_* HIE_fn_p_stGetGeometricObjectFromSuperObject(HIE_tdstSuperObject_* h_SuperObject)
{
    GEO_tdstGeometricObject_* p_stObject;
    float p_xThreshold;
    PO_tdstPhysicalObject_* h_PO;
    int lSOType;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 1089–1160 */
/* addr: 0x0031efa0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1089
 *   +0x0028 -> line 1093
 *   +0x002c -> line 1097
 *   +0x0034 -> line 1098
 *   +0x0040 -> line 1099
 *   +0x0050 -> line 1100
 *   +0x0058 -> line 1106
 *   +0x0064 -> line 1115
 *   +0x0074 -> line 1131
 *   +0x008c -> line 1133
 *   +0x0094 -> line 1134
 *   +0x0098 -> line 1136
 *   +0x00b0 -> line 1141
 *   +0x00c8 -> line 1143
 *   +0x00d0 -> line 1145
 *   +0x00f8 -> line 1154
 *   +0x0100 -> line 1156
 *   +0x0108 -> line 1157
 *   +0x0110 -> line 1160
 *   +0x0114 -> line 1159
 *   +0x0118 -> line 1160
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HIE_fn_bSendSPOToFixViewport(GLD_tdstViewportAttributes_* p_stFixViewportAttr, int _lDrawMask)
{
    char cSaveGlobalFog;
    char cSaveSinusEffectState;
    HIE_tdstSuperObject_** hSPO;
    short xI;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 901–1066 */
/* addr: 0x0031f0e0  size: 1392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 901
 *   +0x0030 -> line 915
 *   +0x0034 -> line 908
 *   +0x0038 -> line 915
 *   +0x0044 -> line 928
 *   +0x0218 -> line 936
 *   +0x0228 -> line 938
 *   +0x0234 -> line 940
 *   +0x0238 -> line 942
 *   +0x023c -> line 943
 *   +0x0244 -> line 945
 *   +0x025c -> line 946
 *   +0x0264 -> line 949
 *   +0x0278 -> line 950
 *   +0x02a4 -> line 952
 *   +0x02a8 -> line 955
 *   +0x02ac -> line 954
 *   +0x02b4 -> line 956
 *   +0x02b8 -> line 954
 *   +0x02bc -> line 956
 *   +0x02c4 -> line 959
 *   +0x031c -> line 962
 *   +0x0320 -> line 961
 *   +0x0324 -> line 964
 *   +0x032c -> line 966
 *   +0x0334 -> line 972
 *   +0x0340 -> line 973
 *   +0x0344 -> line 976
 *   +0x0348 -> line 974
 *   +0x034c -> line 976
 *   +0x0354 -> line 986
 *   +0x035c -> line 992
 *   +0x03a4 -> line 993
 *   +0x03b8 -> line 994
 *   +0x03cc -> line 1002
 *   +0x03d8 -> line 1003
 *   +0x03e8 -> line 1006
 *   +0x03ec -> line 1007
 *   +0x0404 -> line 1008
 *   +0x0418 -> line 1015
 *   +0x044c -> line 1016
 *   +0x0460 -> line 1028
 *   +0x0468 -> line 1036
 *   +0x046c -> line 1037
 *   +0x0470 -> line 1036
 *   +0x0474 -> line 1037
 *   +0x04c0 -> line 1038
 *   +0x04cc -> line 1040
 *   +0x04d8 -> line 1041
 *   +0x04e8 -> line 1044
 *   +0x04ec -> line 1045
 *   +0x0504 -> line 1046
 *   +0x0514 -> line 1052
 *   +0x0518 -> line 1058
 *   +0x0548 -> line 1066
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vSendSPOToFixViewport(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult)
{
    tdstStandardGame_* hStdGame;
    float xPercent;
    unsigned char ucNbRLIUse;
    unsigned char ucIndex2;
    unsigned char ucIndex1;
    unsigned int ulCustomBit;
    float xSphereRadius;
    MTH3D_tdstVector_ stSphereCenter;
    unsigned char bDisplayed;
    COL_tdstBoundingSphere_* hBoundingSphere;
    GLI_tdstLight_* hLight;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 797–886 */
/* addr: 0x0031f650  size: 740 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 797
 *   +0x0010 -> line 802
 *   +0x0014 -> line 797
 *   +0x001c -> line 799
 *   +0x0020 -> line 797
 *   +0x004c -> line 810
 *   +0x0050 -> line 801
 *   +0x0054 -> line 810
 *   +0x0058 -> line 813
 *   +0x0064 -> line 814
 *   +0x006c -> line 815
 *   +0x0074 -> line 817
 *   +0x007c -> line 820
 *   +0x008c -> line 822
 *   +0x0098 -> line 823
 *   +0x00a0 -> line 824
 *   +0x00a4 -> line 829
 *   +0x00a8 -> line 826
 *   +0x00dc -> line 827
 *   +0x0108 -> line 829
 *   +0x0110 -> line 832
 *   +0x0120 -> line 834
 *   +0x0138 -> line 835
 *   +0x0140 -> line 839
 *   +0x0198 -> line 856
 *   +0x01a8 -> line 858
 *   +0x01c0 -> line 860
 *   +0x01c4 -> line 862
 *   +0x01c8 -> line 860
 *   +0x01cc -> line 862
 *   +0x01d8 -> line 863
 *   +0x01f0 -> line 866
 *   +0x01f8 -> line 867
 *   +0x022c -> line 872
 *   +0x0238 -> line 873
 *   +0x0270 -> line 877
 *   +0x027c -> line 881
 *   +0x0288 -> line 883
 *   +0x02a4 -> line 884
 *   +0x02b0 -> line 886
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_hFindAllMirrorsInHierarchy(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, HIE_tdstSuperObject_** p_hHandleOfMirror, GEO_tdstGeometricObject_** p_hHandleOfGeometricMirror, short* p_shNbOfMirrors, short shNbMaxOfMirrors)
{
    MTH3D_tdstVector_* p_stMaxPoint;
    MTH3D_tdstVector_* p_stMinPoint;
    int lType;
    MAT_tdstTransformation_ stIdentityMatrix;
    MTH3D_tdstVector_ stMaxPoint;
    MTH3D_tdstVector_ stMinPoint;
    COL_tdstParallelBox_* hParallelBox;
    float xSphereRadius;
    MTH3D_tdstVector_ stSphereCenter;
    COL_tdstBoundingSphere_* hBoundingSphere;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 770–785 */
/* addr: 0x0031f940  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 770
 *   +0x0010 -> line 775
 *   +0x0020 -> line 776
 *   +0x0028 -> line 779
 *   +0x0034 -> line 780
 *   +0x0098 -> line 781
 *   +0x00a0 -> line 782
 *   +0x00b0 -> line 784
 *   +0x00b4 -> line 785
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int HIE_fn_bFindMirrorInHierarchy(HIE_tdstSuperObject_* _hSprObj)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 589–619 */
/* addr: 0x0031fa10  size: 768 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 589
 *   +0x001c -> line 595
 *   +0x0030 -> line 600
 *   +0x0204 -> line 603
 *   +0x0208 -> line 604
 *   +0x020c -> line 603
 *   +0x0210 -> line 604
 *   +0x025c -> line 606
 *   +0x026c -> line 608
 *   +0x0274 -> line 609
 *   +0x027c -> line 613
 *   +0x0288 -> line 614
 *   +0x0298 -> line 615
 *   +0x02b8 -> line 617
 *   +0x02e8 -> line 619
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vSendCharacterDynShadowToViewPort(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask)
{
    GEO_tdstVisualSet_* hVisualSet;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c lines 344–373 */
/* addr: 0x0031fd10  size: 932 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 344
 *   +0x002c -> line 350
 *   +0x0034 -> line 352
 *   +0x020c -> line 354
 *   +0x025c -> line 356
 *   +0x0268 -> line 362
 *   +0x0274 -> line 364
 *   +0x0340 -> line 370
 *   +0x0350 -> line 372
 *   +0x0380 -> line 373
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vSendStaticWorldToViewport(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}
