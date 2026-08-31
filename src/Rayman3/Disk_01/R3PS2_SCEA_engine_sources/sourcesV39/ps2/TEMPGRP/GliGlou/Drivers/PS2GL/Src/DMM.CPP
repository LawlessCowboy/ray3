/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct C_SdlCache C_SdlCache;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct DMM_tdstAllocInfo_ DMM_tdstAllocInfo_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct DMMBloc DMMBloc;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct DMM_tdstFreeBloc_ DMM_tdstFreeBloc_;
typedef struct C_InstanceList C_InstanceList;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct C_SdlRef C_SdlRef;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tag_stVU1Parameters tag_stVU1Parameters;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstUVTransformation GLI_tdstUVTransformation;
typedef struct GLI_tdstMultiTextureMaterial GLI_tdstMultiTextureMaterial;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct _SDC_Instance_ _SDC_Instance_;
typedef struct tagListData tagListData;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct sceGifTag sceGifTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tdstSDLCacheEntry_ tdstSDLCacheEntry_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct stMorphData stMorphData;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct C_Sdl C_Sdl;

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

struct C_SdlCache {
    tdstSDLCacheEntry_* m_pList; /* +0x0 */
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
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct DMM_tdstAllocInfo_ {
    unsigned int PADMarker1; /* +0x0 */
    unsigned int AllocSize; /* +0x4 */
    int OrgPointer; /* +0x8 */
    unsigned int PADMarker2; /* +0xc */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct DMMBloc {
    int m_pMemoryBloc; /* +0x0 */
    unsigned int m_MemoryBlocSize; /* +0x4 */
    unsigned int m_BlocAlignment; /* +0x8 */
    DMM_tdstFreeBloc_* m_pFreeBlocsChain; /* +0xc */
    DMM_tdstFreeBloc_* m_pHashTable; /* +0x10 */
    unsigned int m_HashTableSize; /* +0x14 */
    DMM_tdstFreeBloc_* m_pFreeBlocsChainEnd; /* +0x18 */
    unsigned int m_UsedMemory; /* +0x1c */
    int m_AllocMode; /* +0x20 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
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

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct DMM_tdstFreeBloc_ {
    unsigned int PADMarker1; /* +0x0 */
    unsigned int BlocSize; /* +0x4 */
    DMM_tdstFreeBloc_* pNext; /* +0x8 */
    DMM_tdstFreeBloc_* pPrevious; /* +0xc */
};

struct C_InstanceList {
    unsigned int m_NbInstances; /* +0x0 */
    _SDC_Instance_* m_pList; /* +0x4 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
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

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
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

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
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

struct tag_stVU1Parameters {
    int tagDMA[4]; /* +0x0 */
    int ivUnpackCode[4]; /* +0x10 */
    float vAmbient[4]; /* +0x20 */
    float vScreenScale[4]; /* +0x30 */
    float vScreenOrg[4]; /* +0x40 */
    float vColorRange[4]; /* +0x50 */
    float fAlpha; /* +0x60 */
    float fShininess; /* +0x64 */
    unsigned int nColorMatMasks; /* +0x68 */
    unsigned int bFogging; /* +0x6c */
    unsigned int eFogMode; /* +0x70 */
    float fFogDensity; /* +0x74 */
    float fFogLinearStart; /* +0x78 */
    float fFogLinearEnd; /* +0x7c */
    unsigned int bTriangleFan; /* +0x80 */
    unsigned int uiClippingMask; /* +0x84 */
    unsigned int uiClippingStep; /* +0x88 */
    unsigned int bAutoNormalize; /* +0x8c */
    unsigned int uiNurbsReturnAddr; /* +0x90 */
    unsigned int ui_TandL_Entrance; /* +0x94 */
    unsigned int uiNurbsRowCount; /* +0x98 */
    unsigned int eClippingMode; /* +0x9c */
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

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct GLI_tdstUVTransformation {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct GLI_tdstMultiTextureMaterial {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    GLI_tdstUVTransformation st_UVStaticPos; /* +0xc */
    GLI_tdstUVTransformation st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    GLI_tdstMultiTextureMaterial a_stMultiMaterial[4]; /* +0x88 */
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

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct _SDC_Instance_ {
    HIE_tdstSuperObject_* pSPO; /* +0x0 */
    unsigned int ulElementNumber; /* +0x4 */
    float (*) pVertexArray[4]; /* +0x8 */
    int pInstanceNormals; /* +0xc */
    C_Sdl* pSDL; /* +0x10 */
    unsigned int ulFrameNumber; /* +0x14 */
    unsigned int ulFrameNumberForNormals; /* +0x18 */
    C_InstanceList* pList; /* +0x1c */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*) pDmaBuffer[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*) pLastExecDmaBuffer[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct sceGifTag {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*) pData[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tdstObjectsTableElement_ {
    MTH3D_tdstVector_* p_stCustomZoom; /* +0x0 */
    int h_Target; /* +0x4 */
    unsigned int uwChannelNumber; /* +0x8 */
    unsigned short wTypeOfTarget; /* +0xc */
    unsigned char ucPhoneme; /* +0xe */
    unsigned char ucIntensity; /* +0xf */
    unsigned char ucExpression; /* +0x10 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct tdstSDLCacheEntry_ {
    _SDC_Instance_* m_pInstance; /* +0x0 */
    tdstSDLCacheEntry_* m_pNext; /* +0x4 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct tdst3dData_ {
    tdstState_* h_InitialState; /* +0x0 */
    tdstState_* h_CurrentState; /* +0x4 */
    tdstState_* h_FirstStateOfAction; /* +0x8 */
    tdstObjectsTablesList_* h_InitialObjectsTable; /* +0xc */
    tdstObjectsTablesList_* h_CurrentObjectsTable; /* +0x10 */
    tdstFamilyList_* h_Family; /* +0x14 */
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

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct IPO_tdstInstanciatedPhysicalObject_ {
    PO_tdstPhysicalObject_* _hPhysicalObject; /* +0x0 */
    int _hCurrentRadiosity; /* +0x4 */
    int a_hRadiosity; /* +0x8 */
    HIE_tdstSuperObject_* hPortalCamera; /* +0xc */
    unsigned int ulLastTransitionID; /* +0x10 */
    float fLastRatioUsed; /* +0x14 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct GLI_tdstZBufferForLight_ {
    int lSizeX; /* +0x0 */
    int lSizeY; /* +0x4 */
    float fCoefX; /* +0x8 */
    float fCoefY; /* +0xc */
    int p_stZBufferMap; /* +0x10 */
    int p_stMiddleZBufferMap; /* +0x14 */
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
    MAT_tdstTransformation_ stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    GLI_tdstZBufferForLight_ stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    MTH3D_tdstVector_ xInter_Min_Pos; /* +0xc8 */
    MTH3D_tdstVector_ xExter_Min_Pos; /* +0xd4 */
    MTH3D_tdstVector_ xInter_Max_Pos; /* +0xe0 */
    MTH3D_tdstVector_ xExter_Max_Pos; /* +0xec */
    MTH3D_tdstVector_ xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
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

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct C_Sdl {
    int m_SDL_Size; /* +0x0 */
    unsigned int m_SDL_InitSize; /* +0x4 */
    unsigned int m_bReduce; /* +0x8 */
    unsigned int m_DisplayList; /* +0xc */
    tagListData* m_pListData; /* +0x10 */
    unsigned int m_NbRefs; /* +0x14 */
    unsigned int m_NbReservedRefs; /* +0x18 */
    unsigned int m_NbFaces; /* +0x1c */
    unsigned int m_NbElements; /* +0x20 */
    C_SdlRef* m_ppRefs; /* +0x24 */
    tag_stVU1Parameters* m_ppP; /* +0x28 */
    unsigned int m_LastFrameUsed; /* +0x2c */
    unsigned int m_LastFrameInterpolated; /* +0x30 */
    unsigned int m_bIsTransparent; /* +0x34 */
    unsigned int m_bNoInterpolation; /* +0x38 */
    int m_SkinIndex; /* +0x3c */
    GLI_tdstMaterial_* m_SkinMaterial; /* +0x40 */
    int m_bIsBlinking; /* +0x44 */
};

int PS2GL_pMemoryBloc;
int PS2GL_SDL_DataBuffer;
int GLI_g_SdlCache;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 75–131 */
/* addr: 0x002cfd30  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 *   +0x0004 -> line 75
 *   +0x0008 -> line 80
 *   +0x000c -> line 81
 *   +0x0024 -> line 80
 *   +0x0028 -> line 82
 *   +0x002c -> line 86
 *   +0x0030 -> line 81
 *   +0x0034 -> line 86
 *   +0x0038 -> line 80
 *   +0x003c -> line 86
 *   +0x0040 -> line 80
 *   +0x004c -> line 82
 *   +0x0054 -> line 81
 *   +0x005c -> line 86
 *   +0x0064 -> line 82
 *   +0x0068 -> line 81
 *   +0x006c -> line 82
 *   +0x0070 -> line 81
 *   +0x0088 -> line 86
 *   +0x0098 -> line 88
 *   +0x009c -> line 89
 *   +0x00a0 -> line 90
 *   +0x00a4 -> line 91
 *   +0x00a8 -> line 92
 *   +0x00ac -> line 93
 *   +0x00b0 -> line 94
 *   +0x00b4 -> line 95
 *   +0x00b8 -> line 97
 *   +0x00bc -> line 98
 *   +0x00c0 -> line 99
 *   +0x00c4 -> line 101
 *   +0x00c8 -> line 103
 *   +0x00cc -> line 104
 *   +0x00d0 -> line 106
 *   +0x00d4 -> line 108
 *   +0x00d8 -> line 110
 *   +0x00dc -> line 111
 *   +0x00e0 -> line 131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_New_GetParticleSpriteFromInterpolatedPoints(float (*) pParticles[4], J_New_InterpolPoint_* p1, J_New_InterpolPoint_* p2, float V)
{
    float vA[4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1351–1351 */
/* addr: 0x002cfe20  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1351
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CheckAllocMode(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1343–1344 */
/* addr: 0x002cfe30  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1343
 *   +0x0004 -> line 1344
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SetAllocMode(int mode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1329–1337 */
/* addr: 0x002cfe40  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1329
 *   +0x0014 -> line 1335
 *   +0x0068 -> line 1336
 *   +0x006c -> line 1337
 *   +0x007c -> line 1336
 *   +0x0080 -> line 1337
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CheckPS2GLMem(void)
{
    unsigned int PreviousOne;
    signed char init;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1295–1325 */
/* addr: 0x002cfee0  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1295
 *   +0x001c -> line 1308
 *   +0x0038 -> line 1309
 *   +0x0050 -> line 1312
 *   +0x0058 -> line 1315
 *   +0x006c -> line 1325
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2GL_realloc(void* p, unsigned int size)
{
    unsigned int bFailed;
    void* p2;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1264–1292 */
/* addr: 0x002cff70  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1264
 *   +0x0004 -> line 1268
 *   +0x000c -> line 1270
 *   +0x0048 -> line 1288
 *   +0x00e8 -> line 1292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2GL_free(void* p)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1229–1260 */
/* addr: 0x002d0070  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1229
 *   +0x0018 -> line 1237
 *   +0x002c -> line 1238
 *   +0x0034 -> line 1241
 *   +0x0040 -> line 1243
 *   +0x0050 -> line 1256
 *   +0x0054 -> line 1260
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2GL_malloc(unsigned int size)
{
    unsigned int FoundSomethingToFree;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1217–1226 */
/* addr: 0x002d00e0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1217
 *   +0x0008 -> line 1220
 *   +0x0028 -> line 1222
 *   +0x0040 -> line 1226
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2GL_vInitMemoryBloc(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1145–1197 */
/* addr: 0x002d0130  size: 484 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1145
 *   +0x0028 -> line 1150
 *   +0x0030 -> line 1152
 *   +0x0034 -> line 1153
 *   +0x0044 -> line 1163
 *   +0x0048 -> line 1161
 *   +0x004c -> line 1163
 *   +0x00a0 -> line 1166
 *   +0x00a4 -> line 1167
 *   +0x00b0 -> line 1174
 *   +0x00c0 -> line 1176
 *   +0x00cc -> line 1179
 *   +0x00d8 -> line 1180
 *   +0x00e0 -> line 1184
 *   +0x00f0 -> line 1186
 *   +0x00f8 -> line 1188
 *   +0x00fc -> line 1189
 *   +0x0108 -> line 1192
 *   +0x0114 -> line 1193
 *   +0x01b8 -> line 1194
 *   +0x01bc -> line 1196
 *   +0x01c0 -> line 1197
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DMMBloc::realloc_nofail(void* _pointer, unsigned int _size, unsigned int* p_bCouldntDoIt)
{
    void* pNewPointer;
    unsigned int UseableAllocatedSize;
    DMM_tdstAllocInfo_* pAllocInfo;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1018–1082 */
/* addr: 0x002d0320  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1018
 *   +0x0010 -> line 1025
 *   +0x0018 -> line 1033
 *   +0x001c -> line 1035
 *   +0x0020 -> line 1037
 *   +0x0024 -> line 1033
 *   +0x0034 -> line 1037
 *   +0x0088 -> line 1041
 *   +0x0094 -> line 1042
 *   +0x009c -> line 1045
 *   +0x00ac -> line 1058
 *   +0x00c0 -> line 1064
 *   +0x00cc -> line 1067
 *   +0x00d0 -> line 1076
 *   +0x00d4 -> line 1067
 *   +0x00d8 -> line 1076
 *   +0x00e0 -> line 1077
 *   +0x00e4 -> line 1076
 *   +0x00ec -> line 1077
 *   +0x00f4 -> line 1081
 *   +0x0104 -> line 1082
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DMMBloc::reduce(void* _pointer, unsigned int _size)
{
    unsigned int AlignedNewSize;
    DMM_tdstFreeBloc_* pFreeBloc;
    unsigned int NewFreeSize;
    DMM_tdstAllocInfo_* pAllocInfo;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 839–965 */
/* addr: 0x002d0440  size: 496 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 839
 *   +0x0004 -> line 863
 *   +0x0008 -> line 839
 *   +0x000c -> line 863
 *   +0x0010 -> line 839
 *   +0x0014 -> line 864
 *   +0x0018 -> line 839
 *   +0x001c -> line 864
 *   +0x0020 -> line 839
 *   +0x002c -> line 875
 *   +0x0030 -> line 839
 *   +0x0034 -> line 864
 *   +0x0038 -> line 839
 *   +0x003c -> line 868
 *   +0x0040 -> line 869
 *   +0x0044 -> line 865
 *   +0x0048 -> line 875
 *   +0x0050 -> line 877
 *   +0x0060 -> line 887
 *   +0x0064 -> line 893
 *   +0x0068 -> line 889
 *   +0x0070 -> line 893
 *   +0x0080 -> line 896
 *   +0x0084 -> line 898
 *   +0x0090 -> line 907
 *   +0x0098 -> line 910
 *   +0x00a0 -> line 916
 *   +0x00b0 -> line 919
 *   +0x00c0 -> line 928
 *   +0x00c4 -> line 927
 *   +0x00c8 -> line 928
 *   +0x00d0 -> line 930
 *   +0x00dc -> line 933
 *   +0x0180 -> line 935
 *   +0x0184 -> line 936
 *   +0x018c -> line 940
 *   +0x0194 -> line 950
 *   +0x0198 -> line 964
 *   +0x019c -> line 950
 *   +0x01b0 -> line 953
 *   +0x01bc -> line 955
 *   +0x01cc -> line 965
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DMMBloc::memalign(unsigned int _alignment, unsigned int _size)
{
    unsigned int NewFreeBlocSize;
    unsigned int AlignedSize;
    void* pBlocPointer;
    DMM_tdstAllocInfo_* pAllocInfo;
    void* pBasePointer;
    unsigned int Found;
    DMM_tdstFreeBloc_* pNewFreeBloc;
    DMM_tdstFreeBloc_* pFreeBloc;
    unsigned int align_minus_one;
    unsigned int total_size;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 628–796 */
/* addr: 0x002d0630  size: 1284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 628
 *   +0x0018 -> line 633
 *   +0x0024 -> line 635
 *   +0x0028 -> line 636
 *   +0x002c -> line 637
 *   +0x0030 -> line 638
 *   +0x0034 -> line 640
 *   +0x0070 -> line 642
 *   +0x0078 -> line 645
 *   +0x007c -> line 647
 *   +0x0088 -> line 649
 *   +0x008c -> line 650
 *   +0x0090 -> line 651
 *   +0x0098 -> line 652
 *   +0x009c -> line 655
 *   +0x00a8 -> line 657
 *   +0x0104 -> line 658
 *   +0x0114 -> line 660
 *   +0x0118 -> line 662
 *   +0x011c -> line 663
 *   +0x012c -> line 664
 *   +0x0134 -> line 665
 *   +0x0140 -> line 667
 *   +0x0144 -> line 677
 *   +0x0180 -> line 679
 *   +0x0188 -> line 684
 *   +0x01d0 -> line 685
 *   +0x01d8 -> line 701
 *   +0x01e4 -> line 713
 *   +0x01ec -> line 715
 *   +0x01f0 -> line 716
 *   +0x01f4 -> line 717
 *   +0x01f8 -> line 718
 *   +0x01fc -> line 719
 *   +0x020c -> line 720
 *   +0x0214 -> line 722
 *   +0x0218 -> line 723
 *   +0x0224 -> line 725
 *   +0x022c -> line 729
 *   +0x0230 -> line 731
 *   +0x0234 -> line 732
 *   +0x0238 -> line 733
 *   +0x023c -> line 736
 *   +0x0278 -> line 739
 *   +0x0288 -> line 741
 *   +0x0294 -> line 742
 *   +0x0298 -> line 745
 *   +0x02f4 -> line 746
 *   +0x0330 -> line 753
 *   +0x0338 -> line 758
 *   +0x0374 -> line 762
 *   +0x037c -> line 764
 *   +0x03d8 -> line 765
 *   +0x03e8 -> line 766
 *   +0x03f0 -> line 767
 *   +0x03fc -> line 769
 *   +0x0400 -> line 774
 *   +0x0410 -> line 778
 *   +0x0420 -> line 780
 *   +0x042c -> line 781
 *   +0x0434 -> line 782
 *   +0x0440 -> line 784
 *   +0x0444 -> line 787
 *   +0x0454 -> line 789
 *   +0x04b0 -> line 790
 *   +0x04ec -> line 796
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DMMBloc::add_FreeBloc(DMM_tdstFreeBloc_* pFreeBloc)
{
    unsigned int EndBlocPointer;
    DMM_tdstFreeBloc_* pPreviousBloc;
    DMM_tdstFreeBloc_* pBloc;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 554–577 */
/* addr: 0x002d0b40  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 554
 *   +0x0008 -> line 557
 *   +0x000c -> line 560
 *   +0x0010 -> line 557
 *   +0x0018 -> line 560
 *   +0x002c -> line 562
 *   +0x0038 -> line 566
 *   +0x0044 -> line 567
 *   +0x004c -> line 570
 *   +0x0054 -> line 574
 *   +0x0058 -> line 577
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DMMBloc::remove_from_hashtable(DMM_tdstFreeBloc_* pFreeBloc)
{
    unsigned int HashTableIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 499–526 */
/* addr: 0x002d0ba0  size: 260 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 499
 *   +0x0058 -> line 501
 *   +0x0064 -> line 505
 *   +0x006c -> line 506
 *   +0x0078 -> line 508
 *   +0x007c -> line 509
 *   +0x00b4 -> line 511
 *   +0x00bc -> line 516
 *   +0x00c4 -> line 519
 *   +0x00d0 -> line 520
 *   +0x00d8 -> line 521
 *   +0x00e4 -> line 522
 *   +0x00ec -> line 524
 *   +0x00fc -> line 526
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DMMBloc::remove_FreeBloc(DMM_tdstFreeBloc_* pFreeBloc)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 237–278 */
/* addr: 0x002d0cb0  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 237
 *   +0x000c -> line 248
 *   +0x0014 -> line 250
 *   +0x0030 -> line 251
 *   +0x003c -> line 252
 *   +0x0044 -> line 253
 *   +0x004c -> line 254
 *   +0x0050 -> line 256
 *   +0x0054 -> line 258
 *   +0x0060 -> line 260
 *   +0x0074 -> line 261
 *   +0x0084 -> line 263
 *   +0x0098 -> line 271
 *   +0x00a8 -> line 273
 *   +0x00b0 -> line 271
 *   +0x00bc -> line 273
 *   +0x00c4 -> line 275
 *   +0x00c8 -> line 276
 *   +0x00cc -> line 275
 *   +0x00d8 -> line 276
 *   +0x00e8 -> line 277
 *   +0x00ec -> line 278
 *   +0x00f0 -> line 277
 *   +0x00f8 -> line 278
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DMMBloc(unsigned int MemoryBlocSize, unsigned int Alignment)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}
