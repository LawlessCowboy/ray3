/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstDeformationInfluence_ GEO_tdstDeformationInfluence_;
typedef struct GEO_tdstDeformationVertex_ GEO_tdstDeformationVertex_;
typedef struct GEO_tdstElementDeformationSetInfo_ GEO_tdstElementDeformationSetInfo_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstState_ tdstState_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct anon_3 anon_3;
typedef struct SAV2_MenuOptionHeader_ SAV2_MenuOptionHeader_;
typedef struct SAV2_tdstHeader_ SAV2_tdstHeader_;
typedef struct LST2_tdstAnchorToSAV2_tdxHandleToElementDyn LST2_tdstAnchorToSAV2_tdxHandleToElementDyn;
typedef struct SAV2_tdstList_ SAV2_tdstList_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union SAV2_tduData_ SAV2_tduData_;
typedef struct SAV2_tdstElement_ SAV2_tdstElement_;
typedef struct tdstEvent_ tdstEvent_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct stMorphData stMorphData;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct FIL_tdstFileNameListElement_ FIL_tdstFileNameListElement_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef union RGBAStruct_ RGBAStruct_;
typedef union tduGetSetParam_ tduGetSetParam_;
typedef struct anon_0 anon_0;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct tm tm;
typedef struct anon_2 anon_2;
typedef struct anon_4 anon_4;
typedef union anon_1 anon_1;
typedef struct _atexit _atexit;
typedef struct _glue _glue;
typedef struct __sbuf __sbuf;
typedef struct __sFILE __sFILE;
typedef struct _reent _reent;
typedef struct SVG_stMCStatus_ SVG_stMCStatus_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct _Bigint _Bigint;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct tdstSaveGameSlot_ tdstSaveGameSlot_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct tdstBlockInfo_ tdstBlockInfo_;
typedef struct tdstGameOptions_ tdstGameOptions_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;

typedef enum SAV2_tdeDataType_ {
    SAV2_eU8 = 1,
    SAV2_eU16 = 2,
    SAV2_eU32 = 3,
    SAV2_eFloat = 4,
    SAV2_eVector = 5,
    SAV2_eString = 6,
    SAV2_eNbType = 7,
} SAV2_tdeDataType_;

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

typedef enum tdeVariableType_ {
    E_vt_None = 0,
    E_vt_Boolean = 1,
    E_vt__128To127 = 2,
    E_vt_0To255 = 3,
    E_vt__32768To32767 = 4,
    E_vt_0To65535 = 5,
    E_vt_Integer = 6,
    E_vt_PositiveInteger = 7,
    E_vt_Float = 8,
    E_vt_String = 9,
    E_vt_WayPoint = 10,
    E_vt_Perso = 11,
    E_vt_List = 12,
    E_vt_1bit = 13,
    E_vt_2bit = 14,
    E_vt_3bit = 15,
    E_vt_4bit = 16,
    E_vt_5bit = 17,
    E_vt_6bit = 18,
    E_vt_7bit = 19,
    E_vt_MetaActionReturn = 20,
    E_vt_Vector = 21,
    E_vt_Module = 22,
    E_vt_DsgVarId = 23,
    E_vt_Action = 24,
    E_vt_Button = 25,
    E_vt_Mask = 26,
    E_vt_Surface = 27,
    E_vt_LipsSynchro = 28,
    E_vt_ObjectTable = 29,
    E_vt_SuperObject = 30,
    E_vt_Environment = 31,
    E_vt_Family = 32,
    E_vt_SoundEvent = 33,
    E_vt_Comport = 34,
    E_vt_Font = 35,
    E_vt_Text = 36,
    E_vt_ParticleGenerator = 37,
    E_vt_GameMaterial = 38,
    E_vt_VisualMaterial = 39,
    E_vt_Color = 40,
    E_vt_Model = 41,
    E_vt_Array = 42,
    E_vt_Light = 43,
    E_vt_Caps = 44,
    E_vt_Graph = 45,
    E_vt_SOLinks = 46,
    E_vt_Cine = 47,
    E_Nb_vt = 48,
} tdeVariableType_;

struct anon_3 {
    unsigned int ulNbCage; /* +0x0 */
    unsigned int ulScore; /* +0x4 */
};

struct SAV2_MenuOptionHeader_ {
    float fCenteringX; /* +0x0 */
    float fCenteringY; /* +0x4 */
    char bWideScreen; /* +0x8 */
    char bVibration; /* +0x9 */
    char bInversionHor; /* +0xa */
    char bInversionVert; /* +0xb */
};

struct SAV2_tdstHeader_ {
    anon_3 aEnvValue[10]; /* +0x0 */
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

struct LST2_tdstAnchorToSAV2_tdxHandleToElementDyn {
    SAV2_tdstElement_* hFirstElementDyn; /* +0x0 */
    SAV2_tdstElement_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SAV2_tdstList_ {
    SAV2_tdstHeader_ stListHeader; /* +0x0 */
    LST2_tdstAnchorToSAV2_tdxHandleToElementDyn SAV2_ListAnchor; /* +0xb4 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
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

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct FIL_tdstFileNameListElement_ {
    FIL_tdstFileNameListElement_* hNextBrotherDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn* hFatherDyn; /* +0x8 */
    int szFileName; /* +0xc */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

union tduGetSetParam_ {
    float xValue; /* +0x0 */
    int lValue; /* +0x0 */
    unsigned int ulValue; /* +0x0 */
    short wValue; /* +0x0 */
    unsigned short uwValue; /* +0x0 */
    char cValue; /* +0x0 */
    unsigned char ucValue; /* +0x0 */
    unsigned char bf7Value : 7; /* bit 0, byte +0x0 */
    unsigned char bf6Value : 6; /* bit 0, byte +0x0 */
    unsigned char bf5Value : 5; /* bit 0, byte +0x0 */
    unsigned char bf4Value : 4; /* bit 0, byte +0x0 */
    unsigned char bf3Value : 3; /* bit 0, byte +0x0 */
    unsigned char bf2Value : 2; /* bit 0, byte +0x0 */
    unsigned char bf1Value : 1; /* bit 0, byte +0x0 */
    RGBAStruct_ ColorValue; /* +0x0 */
    int szString; /* +0x0 */
    tdstEngineObject_* p_stEngObjValue; /* +0x0 */
    tdstState_* tdxstHandleToState; /* +0x0 */
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    tdstSuperObjectLinks_* hSOLinks; /* +0x0 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0x0 */
    unsigned short xMask; /* +0x0 */
    tdstLipsSynchroTable_* hLipsSynchro; /* +0x0 */
    tdstObjectsTablesList_* hObjectTable; /* +0x0 */
    tdstFamilyList_* hFamily; /* +0x0 */
    _SND_tdstBlockEvent* pSoundEvent; /* +0x0 */
    tdstComport_* pComport; /* +0x0 */
    int hText; /* +0x0 */
    tdstParticleGenerator_* hParticleGenerator; /* +0x0 */
    GMT_tdstGameMaterial_* hGameMaterial; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    AI_tdstAIModel_* p_stModel; /* +0x0 */
    MTH3D_tdstVector_ stVectorValue; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    WP_tdstGraph_* hGraph; /* +0x0 */
    tdstMacro_* p_stMacro; /* +0x0 */
    CINE_tdstCine_* p_stCine; /* +0x0 */
};

struct anon_0 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    FIL_tdstFileNameListElement_* hFirstElementDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct FIL_tdstFileNameList_ {
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn hFileNameListAnchor; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
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

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
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

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct tm {
    int tm_sec; /* +0x0 */
    int tm_min; /* +0x4 */
    int tm_hour; /* +0x8 */
    int tm_mday; /* +0xc */
    int tm_mon; /* +0x10 */
    int tm_year; /* +0x14 */
    int tm_wday; /* +0x18 */
    int tm_yday; /* +0x1c */
    int tm_isdst; /* +0x20 */
};

struct anon_2 {
    unsigned int _unused_rand; /* +0x0 */
    int _strtok_last; /* +0x4 */
    char _asctime_buf[26]; /* +0x8 */
    tm _localtime_buf; /* +0x24 */
    int _gamma_signgam; /* +0x48 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4c..0x4f */
    int _rand_next; /* +0x50 */
};

struct anon_4 {
    int _nextf[30]; /* +0x0 */
    unsigned int _nmalloc[30]; /* +0x78 */
};

union anon_1 {
    anon_2 _reent; /* +0x0 */
    anon_4 _unused; /* +0x0 */
};

struct _atexit {
    _atexit* _next; /* +0x0 */
    int _ind; /* +0x4 */
    int _fns[32]; /* +0x8 */
};

struct _glue {
    _glue* _next; /* +0x0 */
    int _niobs; /* +0x4 */
    __sFILE* _iobs; /* +0x8 */
};

struct __sbuf {
    int _base; /* +0x0 */
    int _size; /* +0x4 */
};

struct __sFILE {
    int _p; /* +0x0 */
    int _r; /* +0x4 */
    int _w; /* +0x8 */
    short _flags; /* +0xc */
    short _file; /* +0xe */
    __sbuf _bf; /* +0x10 */
    int _lbfsize; /* +0x18 */
    int _cookie; /* +0x1c */
    int (*_read)(void*, char*, int); /* +0x20 */
    int (*_write)(void*, char*, int); /* +0x24 */
    long (*_seek)(void*, long, int); /* +0x28 */
    int (*_close)(void*); /* +0x2c */
    __sbuf _ub; /* +0x30 */
    int _up; /* +0x38 */
    int _ur; /* +0x3c */
    unsigned char _ubuf[3]; /* +0x40 */
    unsigned char _nbuf[1]; /* +0x43 */
    __sbuf _lb; /* +0x44 */
    int _blksize; /* +0x4c */
    int _offset; /* +0x50 */
    _reent* _data; /* +0x54 */
};

struct _reent {
    int _errno; /* +0x0 */
    __sFILE* _stdin; /* +0x4 */
    __sFILE* _stdout; /* +0x8 */
    __sFILE* _stderr; /* +0xc */
    int _inc; /* +0x10 */
    char _emergency[25]; /* +0x14 */
    int _current_category; /* +0x30 */
    int _current_locale; /* +0x34 */
    int __sdidinit; /* +0x38 */
    void (*__cleanup)(_reent*); /* +0x3c */
    _Bigint* _result; /* +0x40 */
    int _result_k; /* +0x44 */
    _Bigint* _p5s; /* +0x48 */
    _Bigint** _freelist; /* +0x4c */
    int _cvtlen; /* +0x50 */
    int _cvtbuf; /* +0x54 */
    anon_1 _new; /* +0x58 */
    _atexit* _atexit; /* +0x148 */
    _atexit _atexit0; /* +0x14c */
    void (**_sig_func)(int); /* +0x1d4 */
    _glue __sglue; /* +0x1d8 */
    __sFILE __sf[3]; /* +0x1e4 */
};

struct SVG_stMCStatus_ {
    int iPort; /* +0x0 */
    int iSlot; /* +0x4 */
    int iStatus; /* +0x8 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct _Bigint {
    _Bigint* _next; /* +0x0 */
    int _k; /* +0x4 */
    int _maxwds; /* +0x8 */
    int _sign; /* +0xc */
    int _wds; /* +0x10 */
    unsigned int _x[1]; /* +0x14 */
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

struct tdstSaveGameSlot_ {
    unsigned int ulDate; /* +0x0 */
    char szNewSlotName[2]; /* +0x4 */
    char szOldSlotName[2]; /* +0x6 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

unsigned char g_ucSAV2ModuleId;
unsigned int g_SAV2_ActiveMemoryCard;
unsigned char SAV2_ExitCode;
int SAV2_g_hExistSaveOnDisk;
unsigned int g_UserWarnedAboutAutoSave;
int PS2_g_SaveBloc;
char SAV2_g_LevelNameAfterReinitToSave[20];
char SAV2_g_LevelNameToSave[20];
unsigned char SAV2_g_ulSizeByType[7];
SAV2_tdstList_ SAV2_g_stList;
tdstBlockInfo_ g_a_stSAV2BlocksInfo[1];
int MENU_g_bVibration;
tdstEngineStructure_ g_stEngineStructure;
int g_IndCurrentEnv;
int g_RevisitIndCurrentEnv;
int g_RevisitCurrentGlobalScore;
int g_RevisitGlobalScoreAtBeginingOfLevel;
int g_RevisitCurrentEnvScore;
int g_RevisitEnvScoreAtBeginingOfLevel;
int g_RevisitMode;
int g_RevisitIndEnvironementFromWhereWeCome;
int g_MaxIndCurrentEnv;
int g_EndOfGameIsDone;
unsigned int g_aForKeyAlgo[4];
anon_3 g_aEnvValue[10];
tdstGameOptions_ g_stGameOptions;
int MENU_g_bInversionVert;
int MENU_g_bInversionHor;
int GLI_g_bWideScreenMode;
float GLI_g_ScreenPos_DY;
float GLI_g_ScreenPos_DX;
SVG_stMCStatus_ g_axPadMapping[2];
int g_a_p_stMmgModuleBlocksInfo[255];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 36–464 */
/* addr: 0x0028a050  size: 2036 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 36
 *   +0x003c -> line 68
 *   +0x0040 -> line 36
 *   +0x0044 -> line 68
 *   +0x0048 -> line 76
 *   +0x0050 -> line 87
 *   +0x0074 -> line 88
 *   +0x0080 -> line 89
 *   +0x0088 -> line 91
 *   +0x0094 -> line 95
 *   +0x00a0 -> line 103
 *   +0x016c -> line 105
 *   +0x0174 -> line 110
 *   +0x0178 -> line 111
 *   +0x017c -> line 112
 *   +0x0180 -> line 113
 *   +0x0184 -> line 115
 *   +0x0188 -> line 116
 *   +0x018c -> line 117
 *   +0x0190 -> line 118
 *   +0x0194 -> line 120
 *   +0x0198 -> line 129
 *   +0x019c -> line 126
 *   +0x01a0 -> line 129
 *   +0x01a4 -> line 128
 *   +0x01a8 -> line 130
 *   +0x01ac -> line 129
 *   +0x01b8 -> line 128
 *   +0x01bc -> line 129
 *   +0x01c4 -> line 130
 *   +0x01cc -> line 132
 *   +0x01d4 -> line 133
 *   +0x01fc -> line 132
 *   +0x0200 -> line 133
 *   +0x0204 -> line 132
 *   +0x0220 -> line 133
 *   +0x0228 -> line 136
 *   +0x0234 -> line 137
 *   +0x0240 -> line 139
 *   +0x0250 -> line 141
 *   +0x025c -> line 144
 *   +0x0260 -> line 141
 *   +0x0264 -> line 144
 *   +0x0274 -> line 150
 *   +0x0284 -> line 154
 *   +0x0288 -> line 156
 *   +0x028c -> line 157
 *   +0x0290 -> line 158
 *   +0x0294 -> line 159
 *   +0x0298 -> line 160
 *   +0x029c -> line 161
 *   +0x02a0 -> line 162
 *   +0x02a4 -> line 163
 *   +0x02a8 -> line 164
 *   +0x02ac -> line 165
 *   +0x02b0 -> line 166
 *   +0x02b4 -> line 169
 *   +0x02dc -> line 170
 *   +0x02e4 -> line 171
 *   +0x02e8 -> line 181
 *   +0x02ec -> line 182
 *   +0x02f0 -> line 183
 *   +0x02f4 -> line 184
 *   +0x02f8 -> line 185
 *   +0x02fc -> line 187
 *   +0x0304 -> line 196
 *   +0x0308 -> line 187
 *   +0x0310 -> line 196
 *   +0x031c -> line 187
 *   +0x0324 -> line 196
 *   +0x0328 -> line 187
 *   +0x032c -> line 196
 *   +0x0410 -> line 200
 *   +0x0450 -> line 202
 *   +0x0478 -> line 225
 *   +0x047c -> line 228
 *   +0x0480 -> line 229
 *   +0x0484 -> line 230
 *   +0x0488 -> line 231
 *   +0x048c -> line 232
 *   +0x0490 -> line 233
 *   +0x0494 -> line 234
 *   +0x0498 -> line 235
 *   +0x049c -> line 241
 *   +0x04ac -> line 243
 *   +0x04b0 -> line 241
 *   +0x04b4 -> line 244
 *   +0x04cc -> line 245
 *   +0x04dc -> line 248
 *   +0x04e4 -> line 252
 *   +0x04f0 -> line 254
 *   +0x04f4 -> line 252
 *   +0x04f8 -> line 254
 *   +0x0508 -> line 260
 *   +0x050c -> line 261
 *   +0x0510 -> line 262
 *   +0x0514 -> line 263
 *   +0x0518 -> line 264
 *   +0x051c -> line 265
 *   +0x0520 -> line 266
 *   +0x0524 -> line 267
 *   +0x0528 -> line 268
 *   +0x052c -> line 269
 *   +0x0530 -> line 274
 *   +0x053c -> line 275
 *   +0x0540 -> line 283
 *   +0x0544 -> line 275
 *   +0x0548 -> line 284
 *   +0x054c -> line 293
 *   +0x0550 -> line 285
 *   +0x0554 -> line 293
 *   +0x0560 -> line 285
 *   +0x0564 -> line 288
 *   +0x0568 -> line 291
 *   +0x056c -> line 288
 *   +0x0570 -> line 285
 *   +0x057c -> line 293
 *   +0x0584 -> line 300
 *   +0x0594 -> line 306
 *   +0x0598 -> line 307
 *   +0x059c -> line 308
 *   +0x05a0 -> line 310
 *   +0x05a4 -> line 311
 *   +0x05a8 -> line 312
 *   +0x05b0 -> line 313
 *   +0x05b8 -> line 314
 *   +0x05c0 -> line 327
 *   +0x05ec -> line 329
 *   +0x05f0 -> line 330
 *   +0x05f4 -> line 331
 *   +0x05fc -> line 330
 *   +0x0600 -> line 331
 *   +0x0614 -> line 332
 *   +0x0618 -> line 333
 *   +0x061c -> line 338
 *   +0x0620 -> line 339
 *   +0x0624 -> line 340
 *   +0x062c -> line 339
 *   +0x0630 -> line 340
 *   +0x0644 -> line 341
 *   +0x0648 -> line 342
 *   +0x064c -> line 347
 *   +0x0650 -> line 348
 *   +0x0654 -> line 349
 *   +0x065c -> line 348
 *   +0x0660 -> line 349
 *   +0x0674 -> line 350
 *   +0x0678 -> line 351
 *   +0x067c -> line 356
 *   +0x0680 -> line 357
 *   +0x0684 -> line 358
 *   +0x068c -> line 357
 *   +0x0690 -> line 358
 *   +0x06a4 -> line 359
 *   +0x06a8 -> line 360
 *   +0x06ac -> line 366
 *   +0x06b0 -> line 370
 *   +0x06b8 -> line 388
 *   +0x06bc -> line 389
 *   +0x06c0 -> line 390
 *   +0x06c4 -> line 391
 *   +0x06c8 -> line 392
 *   +0x06cc -> line 393
 *   +0x06d0 -> line 394
 *   +0x06d4 -> line 401
 *   +0x06dc -> line 402
 *   +0x06e4 -> line 403
 *   +0x06ec -> line 404
 *   +0x06f0 -> line 405
 *   +0x06f4 -> line 406
 *   +0x06f8 -> line 410
 *   +0x06fc -> line 409
 *   +0x0700 -> line 415
 *   +0x0704 -> line 410
 *   +0x0710 -> line 416
 *   +0x0714 -> line 410
 *   +0x071c -> line 416
 *   +0x0728 -> line 419
 *   +0x0738 -> line 420
 *   +0x0740 -> line 426
 *   +0x0744 -> line 427
 *   +0x0748 -> line 428
 *   +0x074c -> line 429
 *   +0x0750 -> line 430
 *   +0x0754 -> line 431
 *   +0x0758 -> line 432
 *   +0x075c -> line 433
 *   +0x0760 -> line 435
 *   +0x0764 -> line 436
 *   +0x0768 -> line 437
 *   +0x076c -> line 440
 *   +0x0778 -> line 441
 *   +0x0784 -> line 442
 *   +0x0790 -> line 448
 *   +0x079c -> line 449
 *   +0x07a8 -> line 450
 *   +0x07b8 -> line 455
 *   +0x07bc -> line 456
 *   +0x07c0 -> line 457
 *   +0x07c4 -> line 464
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vComputeDeformationPS2(GEO_tdstGeometricObject_* p_stGeoObj, unsigned int ulNbVertices, unsigned int ulChannelNumber, tdstPLA_Deformation_* p_stDeformation, GEO_tdstElementDeformationSetInfo_* p_stDeformationSetInfo)
{
    int* p;
    int f3;
    int f2;
    int f1;
    GEO_tdstDeformationInfluence_* p_stDeformationInfluence;
    GEO_tdstDeformationVertex_* p_stDeformationVertexEnd;
    GEO_tdstDeformationVertex_* p_stDeformationVertex;
    int pref3;
    int pref2;
    int pref1;
    tdstAChannel_* ChannelArray;
    tdstAChannel_* p_stChannel;
    MAT_tdstTransformation_* p_stObjectGlobalMatrix;
    MAT_tdstTransformation_* p_stMyGlobalMatrix;
    unsigned int ulIndex4;
    unsigned int ulIndex3;
    unsigned int ulIndex2;
    unsigned int ulIndex;
    MTH3D_tdstVector_* pLastVectorToUpdate;
    MTH3D_tdstVector_* p_stVectorInObject;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1597–1662 */
/* addr: 0x0028a850  size: 660 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1597
 *   +0x0004 -> line 1599
 *   +0x0008 -> line 1597
 *   +0x000c -> line 1599
 *   +0x0010 -> line 1602
 *   +0x0014 -> line 1618
 *   +0x001c -> line 1602
 *   +0x0020 -> line 1603
 *   +0x0028 -> line 1604
 *   +0x0030 -> line 1610
 *   +0x0038 -> line 1611
 *   +0x0040 -> line 1612
 *   +0x0044 -> line 1618
 *   +0x004c -> line 1619
 *   +0x005c -> line 1621
 *   +0x0068 -> line 1623
 *   +0x0074 -> line 1624
 *   +0x0080 -> line 1625
 *   +0x008c -> line 1626
 *   +0x0098 -> line 1628
 *   +0x00a0 -> line 1631
 *   +0x00a8 -> line 1632
 *   +0x0198 -> line 1635
 *   +0x01a0 -> line 1639
 *   +0x01a4 -> line 1658
 *   +0x01a8 -> line 1639
 *   +0x01ac -> line 1658
 *   +0x01b8 -> line 1639
 *   +0x01d0 -> line 1642
 *   +0x01d8 -> line 1645
 *   +0x01dc -> line 1642
 *   +0x01e0 -> line 1645
 *   +0x01e4 -> line 1639
 *   +0x01e8 -> line 1645
 *   +0x01ec -> line 1639
 *   +0x0208 -> line 1646
 *   +0x0210 -> line 1647
 *   +0x0214 -> line 1646
 *   +0x0218 -> line 1647
 *   +0x021c -> line 1650
 *   +0x0220 -> line 1647
 *   +0x0224 -> line 1650
 *   +0x0228 -> line 1651
 *   +0x022c -> line 1650
 *   +0x0230 -> line 1651
 *   +0x0234 -> line 1652
 *   +0x0238 -> line 1651
 *   +0x023c -> line 1652
 *   +0x0240 -> line 1653
 *   +0x0244 -> line 1652
 *   +0x0248 -> line 1654
 *   +0x024c -> line 1656
 *   +0x0250 -> line 1653
 *   +0x0254 -> line 1654
 *   +0x0258 -> line 1658
 *   +0x0260 -> line 1660
 *   +0x0288 -> line 1662
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vResumeAllConstantFFBEffectForAllDevices(unsigned int ulCurrentTime);
void IPT_fn_vPauseAllConstantFFBEffectForAllDevices(unsigned int ulCurrentTime);
void SND_fn_vSetStereoSound(int iStereo);
void GAM_fn_vSetVolumeMenu(int iVolume);
void GAM_fn_vSetVolumeSound(int iVolume);
void GAM_fn_vSetVolumeVoice(int iVolume);
void GAM_fn_vSetVolumeMusic(int iVolume);
void GAM_fn_vSetVolumeAmbiance(int iVolume);
void fn_vUpdatePlayerGameName(void);
void fn_vR3StoreInitScore(void* p_dst, void* p_src, int iCount, int iSize);

void SAV2_fn_vActualizeMenuOptionsAfterLoad(void)
{
    SAV2_MenuOptionHeader_* p;
    int i;

    p = &SAV2_g_stList.stListHeader.stMenuOptions;
    GLI_g_ScreenPos_DX = p->fCenteringX;
    GLI_g_ScreenPos_DY = p->fCenteringY;
    GLI_g_bWideScreenMode = p->bWideScreen;
    MENU_g_bVibration = p->bVibration;
    MENU_g_bInversionHor = p->bInversionHor;
    MENU_g_bInversionVert = p->bInversionVert;
    SND_fn_vSetStereoSound(g_stGameOptions.s32VolumeMenu);
    g_stGameOptions.s32VolumeMenu = g_stGameOptions.s32VolumeAmbiance;
    GAM_fn_vSetVolumeMenu(g_stGameOptions.s32VolumeMenu);
    GAM_fn_vSetVolumeSound(g_stGameOptions.s32VolumeSound);
    GAM_fn_vSetVolumeVoice(g_stGameOptions.s32VolumeVoice);
    GAM_fn_vSetVolumeMusic(g_stGameOptions.s32VolumeMusic);
    GAM_fn_vSetVolumeAmbiance(g_stGameOptions.s32VolumeAmbiance);
    fn_vUpdatePlayerGameName();
    for (i = 0; i < 10; i++) { g_aEnvValue[i] = SAV2_g_stList.stListHeader.aEnvValue[i]; }
    fn_vR3StoreInitScore(g_aEnvValue, &SAV2_g_stList.stListHeader.aEnvValue[0], i, i * 8);
    g_aForKeyAlgo[0] = SAV2_g_stList.stListHeader.aForKeyAlgo[0];
    g_aForKeyAlgo[1] = SAV2_g_stList.stListHeader.aForKeyAlgo[1];
    g_aForKeyAlgo[2] = SAV2_g_stList.stListHeader.aForKeyAlgo[2];
    g_aForKeyAlgo[3] = SAV2_g_stList.stListHeader.aForKeyAlgo[3];
    g_EndOfGameIsDone = SAV2_g_stList.stListHeader.EndOfGameIsDone;
    g_MaxIndCurrentEnv = SAV2_g_stList.stListHeader.MaxIndCurrentEnv;
    g_RevisitIndCurrentEnv = SAV2_g_stList.stListHeader.RevisitEnvironment;
    g_RevisitIndEnvironementFromWhereWeCome = SAV2_g_stList.stListHeader.RevisitOriginEnvironment;
    g_RevisitMode = SAV2_g_stList.stListHeader.RevisitMode;
    g_RevisitEnvScoreAtBeginingOfLevel = SAV2_g_stList.stListHeader.RevisitEnvScore;
    g_RevisitGlobalScoreAtBeginingOfLevel = SAV2_g_stList.stListHeader.RevisitGlobalScore;
    g_RevisitCurrentEnvScore = g_RevisitEnvScoreAtBeginingOfLevel;
    g_RevisitCurrentGlobalScore = g_RevisitGlobalScoreAtBeginingOfLevel;
    strcpy(SAV2_g_LevelNameAfterReinitToSave, SAV2_g_stList.stListHeader.szLevelNameAfterRevisit);
    g_IndCurrentEnv = g_RevisitIndCurrentEnv;
    if (MENU_g_bVibration) { IPT_fn_vResumeAllConstantFFBEffectForAllDevices(PS2_g_SaveBloc); } else { IPT_fn_vPauseAllConstantFFBEffectForAllDevices(PS2_g_SaveBloc); }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1581–1592 */
/* addr: 0x0028aaf0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1581
 *   +0x0004 -> line 1582
 *   +0x0008 -> line 1581
 *   +0x000c -> line 1584
 *   +0x0018 -> line 1586
 *   +0x0020 -> line 1587
 *   +0x0028 -> line 1590
 *   +0x0030 -> line 1592
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vUpdateVibrations(void)
{
    unsigned int ulCurrentTime;
    ulCurrentTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
    if (MENU_g_bVibration)
        IPT_fn_vResumeAllConstantFFBEffectForAllDevices(ulCurrentTime);
    else
        IPT_fn_vPauseAllConstantFFBEffectForAllDevices(ulCurrentTime);
}

int SVG_fn_s32Query(int _iPort, int _iSlot, int* _p_iFreeClusters);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1506–1519 */
/* addr: 0x0028ab30  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1511
 *   +0x0004 -> line 1506
 *   +0x0008 -> line 1511
 *   +0x0014 -> line 1506
 *   +0x0018 -> line 1511
 *   +0x0024 -> line 1508
 *   +0x0028 -> line 1511
 *   +0x0040 -> line 1519
 *   +0x0044 -> line 1515
 *   +0x0050 -> line 1519
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SAV2_CheckMCStatus(int _id)
{
    int Value;
    int Bidon;
    Value = 0;
    Bidon = SVG_fn_s32Query(g_axPadMapping[_id].iPort, g_axPadMapping[_id].iSlot, &Value);
    return (Bidon == 0) ^ 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1502–1503 */
/* addr: 0x0028ab90  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1502
 *   +0x0008 -> line 1503
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SAV2_LastError(void)
{
    return !SAV2_ExitCode;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1481–1497 */
/* addr: 0x0028aba0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1481
 *   +0x0008 -> line 1486
 *   +0x0030 -> line 1497
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_p_szGetSaveNameOfSaveNumber(void)
{
    static int start;

    if (start++ < 10)
    {
        printf("function %s not implemented\n", "SAV2_fn_p_szGetSaveNameOfSaveNumber");
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1473–1478 */
/* addr: 0x0028abe0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1473
 *   +0x0008 -> line 1475
 *   +0x0020 -> line 1478
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAV2_fn_ucGetNumberOfExistingSave(void)
{
    if (SAV2_g_hExistSaveOnDisk)
    {
        return FIL_fn_ulGetNumberOfFiles((FIL_tdstFileNameList_*)SAV2_g_hExistSaveOnDisk);
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1447–1470 */
/* addr: 0x0028ac10  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1447
 *   +0x0008 -> line 1454
 *   +0x0030 -> line 1470
 *   +0x0034 -> line 1469
 *   +0x0038 -> line 1470
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAV2_fn_bActualizeExistingSave(void)
{
    static int start;

    if (start++ < 10)
    {
        printf("function %s not implemented\n", "SAV2_fn_bActualizeExistingSave");
    }
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1419–1436 */
/* addr: 0x0028ac50  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1419
 *   +0x0008 -> line 1421
 *   +0x0030 -> line 1434
 *   +0x0034 -> line 1435
 *   +0x0038 -> line 1436
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAV2_fn_bRemoveSaveFromDisk(void)
{
    static int start;
    if (start++ < 10)
        printf("function %s not implemented\n", "SAV2_fn_bRemoveSaveFromDisk");
    SAV2_ExitCode = 0;
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1300–1414 */
/* addr: 0x0028aca0  size: 1756 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1300
 *   +0x001c -> line 1304
 *   +0x0020 -> line 1305
 *   +0x0024 -> line 1312
 *   +0x002c -> line 1321
 *   +0x00a8 -> line 1324
 *   +0x00d0 -> line 1326
 *   +0x00d4 -> line 1329
 *   +0x00d8 -> line 1326
 *   +0x00dc -> line 1329
 *   +0x0100 -> line 1331
 *   +0x0120 -> line 1333
 *   +0x0128 -> line 1335
 *   +0x0130 -> line 1337
 *   +0x0150 -> line 1338
 *   +0x0170 -> line 1339
 *   +0x0190 -> line 1340
 *   +0x01ac -> line 1341
 *   +0x01f8 -> line 1342
 *   +0x0208 -> line 1344
 *   +0x0234 -> line 1346
 *   +0x0238 -> line 1347
 *   +0x0254 -> line 1348
 *   +0x025c -> line 1349
 *   +0x0260 -> line 1350
 *   +0x027c -> line 1351
 *   +0x0284 -> line 1352
 *   +0x0288 -> line 1353
 *   +0x02a4 -> line 1354
 *   +0x02ac -> line 1355
 *   +0x02b0 -> line 1356
 *   +0x02cc -> line 1357
 *   +0x02d4 -> line 1358
 *   +0x02d8 -> line 1359
 *   +0x0320 -> line 1360
 *   +0x0340 -> line 1361
 *   +0x0348 -> line 1363
 *   +0x0368 -> line 1364
 *   +0x03b0 -> line 1365
 *   +0x03d4 -> line 1368
 *   +0x03e0 -> line 1371
 *   +0x040c -> line 1373
 *   +0x0410 -> line 1374
 *   +0x0430 -> line 1375
 *   +0x0438 -> line 1377
 *   +0x0460 -> line 1378
 *   +0x0468 -> line 1380
 *   +0x0490 -> line 1381
 *   +0x0498 -> line 1383
 *   +0x04c0 -> line 1384
 *   +0x04c8 -> line 1386
 *   +0x04d0 -> line 1388
 *   +0x0520 -> line 1389
 *   +0x0528 -> line 1388
 *   +0x0530 -> line 1389
 *   +0x0578 -> line 1390
 *   +0x059c -> line 1391
 *   +0x05a4 -> line 1392
 *   +0x05a8 -> line 1393
 *   +0x05b0 -> line 1395
 *   +0x05d0 -> line 1396
 *   +0x0620 -> line 1397
 *   +0x0628 -> line 1396
 *   +0x0630 -> line 1397
 *   +0x0660 -> line 1398
 *   +0x0684 -> line 1401
 *   +0x0688 -> line 1403
 *   +0x06a8 -> line 1404
 *   +0x06b4 -> line 1410
 *   +0x06bc -> line 1414
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAV2_fn_bUpdateAllDataFromLoadedFile(void)
{
    unsigned char* pStartAddress;
    signed char* pData;
    char szElementName[256];
    unsigned char ucElementNumber;
    unsigned char ucDataInformation;
    unsigned char ucTempU8;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1018–1284 */
/* addr: 0x0028b380  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1018
 *   +0x0010 -> line 1081
 *   +0x0020 -> line 1085
 *   +0x002c -> line 1284
 *   +0x0030 -> line 1087
 *   +0x0034 -> line 1284
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern void PS2MC_fn_vLoadGame(char* _pFileName);

unsigned char SAV2_fn_bReadAllFromDisk(char* p_szSaveName)
{
    printf("Trying to Load \"%s\" from MC\n", p_szSaveName);
    SAV2_ExitCode = 0;
    PS2MC_fn_vLoadGame(p_szSaveName);
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 649–987 */
/* addr: 0x0028b3c0  size: 2268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 649
 *   +0x0024 -> line 701
 *   +0x0034 -> line 702
 *   +0x0040 -> line 720
 *   +0x0044 -> line 722
 *   +0x0058 -> line 788
 *   +0x0098 -> line 794
 *   +0x009c -> line 788
 *   +0x00a4 -> line 789
 *   +0x00b0 -> line 795
 *   +0x01a0 -> line 797
 *   +0x01b4 -> line 799
 *   +0x01c8 -> line 802
 *   +0x01cc -> line 804
 *   +0x01d0 -> line 802
 *   +0x01d4 -> line 820
 *   +0x01d8 -> line 807
 *   +0x01dc -> line 802
 *   +0x0208 -> line 808
 *   +0x020c -> line 802
 *   +0x0214 -> line 809
 *   +0x0218 -> line 802
 *   +0x021c -> line 804
 *   +0x0220 -> line 812
 *   +0x0224 -> line 804
 *   +0x0228 -> line 807
 *   +0x022c -> line 813
 *   +0x0230 -> line 807
 *   +0x0234 -> line 808
 *   +0x0238 -> line 814
 *   +0x023c -> line 808
 *   +0x0240 -> line 809
 *   +0x0248 -> line 812
 *   +0x0250 -> line 813
 *   +0x0258 -> line 814
 *   +0x0260 -> line 820
 *   +0x0294 -> line 822
 *   +0x02cc -> line 825
 *   +0x02dc -> line 827
 *   +0x02ec -> line 829
 *   +0x02f8 -> line 830
 *   +0x0330 -> line 831
 *   +0x0368 -> line 832
 *   +0x0398 -> line 833
 *   +0x03c8 -> line 834
 *   +0x03d8 -> line 836
 *   +0x0404 -> line 838
 *   +0x0408 -> line 839
 *   +0x0438 -> line 840
 *   +0x0440 -> line 842
 *   +0x0470 -> line 843
 *   +0x0478 -> line 845
 *   +0x04a8 -> line 846
 *   +0x04b0 -> line 848
 *   +0x04e0 -> line 849
 *   +0x04e8 -> line 851
 *   +0x051c -> line 852
 *   +0x0524 -> line 853
 *   +0x0528 -> line 854
 *   +0x0534 -> line 855
 *   +0x0568 -> line 856
 *   +0x05a0 -> line 859
 *   +0x05a8 -> line 862
 *   +0x05d4 -> line 864
 *   +0x05d8 -> line 865
 *   +0x060c -> line 866
 *   +0x0614 -> line 867
 *   +0x0618 -> line 868
 *   +0x0654 -> line 869
 *   +0x065c -> line 870
 *   +0x0660 -> line 871
 *   +0x069c -> line 872
 *   +0x06a4 -> line 873
 *   +0x06a8 -> line 874
 *   +0x06e4 -> line 875
 *   +0x06ec -> line 876
 *   +0x06f0 -> line 877
 *   +0x0700 -> line 878
 *   +0x077c -> line 879
 *   +0x0784 -> line 880
 *   +0x0788 -> line 881
 *   +0x0798 -> line 883
 *   +0x07ac -> line 884
 *   +0x07e0 -> line 885
 *   +0x0820 -> line 886
 *   +0x0824 -> line 885
 *   +0x0828 -> line 886
 *   +0x0844 -> line 890
 *   +0x0848 -> line 891
 *   +0x0858 -> line 895
 *   +0x088c -> line 944
 *   +0x08a0 -> line 945
 *   +0x08b0 -> line 987
 *   +0x08b4 -> line 950
 *   +0x08b8 -> line 987
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAV2_fn_bSaveAllOnDisk(char* p_szSaveName)
{
    unsigned char* pStartAddress;
    signed char* pData;
    unsigned char ucElementNumber;
    unsigned char ucTempU8;
    int i;
    SAV2_tdstElement_* p_stElement;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 641–644 */
/* addr: 0x0028bca0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 641
 *   +0x0008 -> line 642
 *   +0x0014 -> line 644
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GAM_vAllocateSaveBloc(void)
{
    PS2_g_SaveBloc = malloc(0x1000);
}

SAV2_tdeDataType_ SAV2_fn_eGiveElementTypeFromAIType(tdeVariableType_ _eIAType);
/* ucType is decoded as SAV2_tdeDataType_, but callers narrow it to a byte
 * (andi 0xff), matching its uc prefix. */
void SAV2_fn_vDeclareAField(char* p_szElementName, int ucType, unsigned int ulNumberOfElement, unsigned char bStatic, unsigned char bSave);
void SAV2_fn_vSetAValueAtIndex(char* p_szElementName, unsigned int ulElementNumber, void* p_stParam);
extern void Mmg_fn_v_SetModeAlloc(unsigned char ucModuleId, unsigned char ucNewMode, unsigned char ucChannel);
extern void* fn_p_vGenAlloc(unsigned int ulSize, unsigned char ucChannel);
void SAV2_fn_vFreeAnElement(SAV2_tdstElement_* p_stElement);
/* The element lookup is expanded into its callers by the retail compiler, but
 * SAV2_fn_vDeleteAllPipeline still calls the out-of-line copy, so the
 * expandable copy is a separate static helper. */
SAV2_tdstElement_* SAV2_fn_p_stFindElementByName(char* p_szElementName);
static SAV2_tdstElement_* SAV2_fn_p_stFindElementByNameExpanded(char* p_szElementName);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 591–596 */
/* addr: 0x0028bcc0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 591
 *   +0x0014 -> line 594
 *   +0x0038 -> line 595
 *   +0x0048 -> line 596
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vSetValueForSave(char* p_szElementName, void* p_stParam)
{


    SAV2_fn_vDeclareAField(p_szElementName, (unsigned char)SAV2_fn_eGiveElementTypeFromAIType(((tdstGetSetParam_*)p_stParam)->eType), 1, 1, 1);
    SAV2_fn_vSetAValueAtIndex(p_szElementName, 0, p_stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 583–588 */
/* addr: 0x0028bd20  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 583
 *   +0x0014 -> line 586
 *   +0x0038 -> line 587
 *   +0x0048 -> line 588
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vSetValueInPipeline(char* p_szElementName, void* p_stParam)
{
    SAV2_fn_vDeclareAField(p_szElementName, (unsigned char)SAV2_fn_eGiveElementTypeFromAIType(((tdstGetSetParam_*)p_stParam)->eType), 1, 1, 0);
    SAV2_fn_vSetAValueAtIndex(p_szElementName, 0, p_stParam);
}

void SAV2_fn_xGetAValueAtIndex(char* p_szElementName, unsigned int ulElementNumber, void* p_stParam);
void SAV2_fn_vSetAValueAtIndex(char* p_szElementName, unsigned int ulElementNumber, void* p_stParam);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 579–579 */
/* addr: 0x0028bd80  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 579
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_xGetASingleValue(char* p_szElementName, void* p_stParam)
{
    SAV2_fn_xGetAValueAtIndex(p_szElementName, 0, p_stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 574–574 */
/* addr: 0x0028bd90  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 574
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vSetASingleValue(char* p_szElementName, void* p_stParam)
{
    SAV2_fn_vSetAValueAtIndex(p_szElementName, 0, p_stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 479–570 */
/* addr: 0x0028bda0  size: 660 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 479
 *   +0x0004 -> line 483
 *   +0x0008 -> line 479
 *   +0x0024 -> line 483
 *   +0x005c -> line 484
 *   +0x0064 -> line 486
 *   +0x0074 -> line 488
 *   +0x007c -> line 490
 *   +0x00a8 -> line 493
 *   +0x00ac -> line 494
 *   +0x00b0 -> line 493
 *   +0x00b4 -> line 495
 *   +0x00bc -> line 497
 *   +0x00c0 -> line 498
 *   +0x00c4 -> line 497
 *   +0x00c8 -> line 499
 *   +0x00d0 -> line 501
 *   +0x00d4 -> line 502
 *   +0x00d8 -> line 501
 *   +0x00dc -> line 503
 *   +0x00e4 -> line 505
 *   +0x00e8 -> line 506
 *   +0x00ec -> line 505
 *   +0x00f0 -> line 507
 *   +0x00f8 -> line 509
 *   +0x00fc -> line 510
 *   +0x0100 -> line 509
 *   +0x0118 -> line 511
 *   +0x0120 -> line 513
 *   +0x0130 -> line 515
 *   +0x013c -> line 517
 *   +0x0144 -> line 518
 *   +0x0150 -> line 525
 *   +0x0158 -> line 528
 *   +0x0184 -> line 531
 *   +0x0188 -> line 532
 *   +0x018c -> line 531
 *   +0x0198 -> line 533
 *   +0x01a0 -> line 535
 *   +0x01a8 -> line 536
 *   +0x01ac -> line 535
 *   +0x01b8 -> line 537
 *   +0x01c0 -> line 539
 *   +0x01c8 -> line 540
 *   +0x01cc -> line 539
 *   +0x01d8 -> line 541
 *   +0x01e0 -> line 543
 *   +0x01e8 -> line 544
 *   +0x01ec -> line 543
 *   +0x01f8 -> line 545
 *   +0x0200 -> line 547
 *   +0x0208 -> line 548
 *   +0x020c -> line 547
 *   +0x022c -> line 549
 *   +0x0234 -> line 551
 *   +0x0244 -> line 553
 *   +0x025c -> line 555
 *   +0x0264 -> line 556
 *   +0x0278 -> line 570
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_xGetAValueAtIndex(char* p_szElementName, unsigned int ulElementNumber, void* p_stParam)
{
    char* p_szString;
    tdstGetSetParam_* p_stParamAI;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 369–476 */
/* addr: 0x0028c040  size: 1292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 369
 *   +0x0004 -> line 373
 *   +0x0008 -> line 369
 *   +0x002c -> line 373
 *   +0x0064 -> line 374
 *   +0x006c -> line 376
 *   +0x0094 -> line 378
 *   +0x00a4 -> line 380
 *   +0x00ac -> line 382
 *   +0x00d8 -> line 385
 *   +0x00dc -> line 386
 *   +0x00e4 -> line 388
 *   +0x00e8 -> line 389
 *   +0x00f0 -> line 391
 *   +0x00f4 -> line 392
 *   +0x00fc -> line 394
 *   +0x0100 -> line 395
 *   +0x0108 -> line 398
 *   +0x0114 -> line 399
 *   +0x0138 -> line 400
 *   +0x0180 -> line 401
 *   +0x0198 -> line 402
 *   +0x01a0 -> line 406
 *   +0x01a8 -> line 407
 *   +0x01b4 -> line 408
 *   +0x01d8 -> line 409
 *   +0x0230 -> line 410
 *   +0x023c -> line 413
 *   +0x0268 -> line 416
 *   +0x027c -> line 417
 *   +0x0288 -> line 422
 *   +0x0290 -> line 425
 *   +0x02bc -> line 428
 *   +0x02c8 -> line 429
 *   +0x02d0 -> line 431
 *   +0x02e0 -> line 432
 *   +0x02e8 -> line 434
 *   +0x02f8 -> line 435
 *   +0x0300 -> line 437
 *   +0x0310 -> line 438
 *   +0x0318 -> line 441
 *   +0x0330 -> line 442
 *   +0x0354 -> line 443
 *   +0x03a4 -> line 444
 *   +0x03c4 -> line 445
 *   +0x03cc -> line 449
 *   +0x03d8 -> line 450
 *   +0x03f0 -> line 451
 *   +0x0414 -> line 452
 *   +0x0474 -> line 453
 *   +0x0488 -> line 456
 *   +0x04b4 -> line 459
 *   +0x04d0 -> line 460
 *   +0x04e8 -> line 476
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vSetAValueAtIndex(char* p_szElementName, unsigned int ulElementNumber, void* p_stParam)
{
    char* p_szString;
    tdstGetSetParam_* p_stParamAI;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 357–366 */
/* addr: 0x0028c550  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 357
 *   +0x0004 -> line 361
 *   +0x0008 -> line 357
 *   +0x000c -> line 361
 *   +0x0020 -> line 362
 *   +0x0040 -> line 364
 *   +0x0048 -> line 365
 *   +0x0068 -> line 366
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vDeleteAllList(void)
{
    SAV2_tdstElement_* p_stNextElement;
    SAV2_tdstElement_* p_stElement;
    memset(&SAV2_g_stList.stListHeader, 0, sizeof(SAV2_tdstHeader_));
    p_stElement = SAV2_g_stList.SAV2_ListAnchor.hFirstElementDyn; p_stNextElement = (p_stElement != NULL) ? p_stElement->hNextBrotherDyn : NULL; while (p_stElement != NULL)
    {
        SAV2_fn_vFreeAnElement(p_stElement);
        p_stElement = p_stNextElement; p_stNextElement = (p_stElement != NULL) ? p_stElement->hNextBrotherDyn : NULL; }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 333–339 */
/* addr: 0x0028c5d0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 333
 *   +0x0004 -> line 336
 *   +0x0008 -> line 333
 *   +0x0014 -> line 336
 *   +0x004c -> line 337
 *   +0x0064 -> line 338
 *   +0x006c -> line 339
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vDeletePipelineElement(char* p_szElementName)
{
    SAV2_tdstElement_* p_stElement;
    p_stElement = SAV2_fn_p_stFindElementByNameExpanded(p_szElementName);
    if ((p_stElement != NULL) && ((p_stElement->ucDataInformation & 0x10) == 0))
        SAV2_fn_vFreeAnElement(p_stElement);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 322–330 */
/* addr: 0x0028c650  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 322
 *   +0x0004 -> line 326
 *   +0x0008 -> line 322
 *   +0x0010 -> line 326
 *   +0x0030 -> line 328
 *   +0x0060 -> line 329
 *   +0x0080 -> line 330
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vDeleteAllPipeline(void)
{
    SAV2_tdstElement_* p_stNextElement;
    SAV2_tdstElement_* p_stElement;
    SAV2_tdstElement_* p_stFound;
    p_stElement = SAV2_g_stList.SAV2_ListAnchor.hFirstElementDyn; p_stNextElement = (p_stElement != NULL) ? p_stElement->hNextBrotherDyn : NULL; while (p_stElement != NULL)
    {
        p_stFound = SAV2_fn_p_stFindElementByName((char*)p_stElement->p_szElementName); if ((p_stFound != NULL) && ((p_stFound->ucDataInformation & 0x10) == 0)) { SAV2_fn_vFreeAnElement(p_stFound); }
        p_stElement = p_stNextElement; p_stNextElement = (p_stNextElement != NULL) ? p_stNextElement->hNextBrotherDyn : NULL; }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 313–319 */
/* addr: 0x0028c6e0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 313
 *   +0x0004 -> line 316
 *   +0x0008 -> line 313
 *   +0x0014 -> line 316
 *   +0x004c -> line 317
 *   +0x0054 -> line 318
 *   +0x005c -> line 319
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vDeleteAField(char* p_szElementName)
{
    SAV2_tdstElement_* p_stElement;
    p_stElement = SAV2_fn_p_stFindElementByNameExpanded(p_szElementName);
    if (p_stElement != NULL)
        SAV2_fn_vFreeAnElement(p_stElement);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 294–310 */
/* addr: 0x0028c750  size: 716 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 294
 *   +0x0004 -> line 297
 *   +0x0008 -> line 294
 *   +0x003c -> line 297
 *   +0x0074 -> line 298
 *   +0x007c -> line 299
 *   +0x0084 -> line 301
 *   +0x0158 -> line 304
 *   +0x015c -> line 301
 *   +0x0164 -> line 304
 *   +0x016c -> line 306
 *   +0x01c4 -> line 309
 *   +0x02a0 -> line 310
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vDeclareAField(char* p_szElementName, int ucType, unsigned int ulNumberOfElement, unsigned char bStatic, unsigned char bSave)
{
    SAV2_tdstElement_* p_stElement; SAV2_tdstElement_* p_stFound; char* p_szName; void* p_vArray; unsigned int ulSize;
    p_stFound = SAV2_fn_p_stFindElementByNameExpanded(p_szElementName);
    if (p_stFound != NULL)
        SAV2_fn_vFreeAnElement(p_stFound);

    Mmg_fn_v_SetModeAlloc(g_ucSAV2ModuleId, 0, 0); p_stElement = (SAV2_tdstElement_*)fn_p_vGenAlloc(sizeof(SAV2_tdstElement_), 0); printf("SAV2_fn_p_vMalloc %d\n", sizeof(SAV2_tdstElement_)); if (p_stElement != NULL) { memset(p_stElement, 0, sizeof(SAV2_tdstElement_)); } ulSize = strlen(p_szElementName) + 1; Mmg_fn_v_SetModeAlloc(g_ucSAV2ModuleId, 0, 0); p_szName = (char*)fn_p_vGenAlloc(ulSize, 0); printf("SAV2_fn_p_vMalloc %d\n", ulSize); if (p_szName != NULL) { memset(p_szName, 0, ulSize); } p_stElement->p_szElementName = (int)p_szName; strcpy((char*)p_stElement->p_szElementName, p_szElementName); p_stElement->uData.p_vArray = NULL; p_stElement->ucDataInformation = ucType | ((char)bStatic * 0x10) | ((char)bSave * 0x30); p_stElement->ucNumberOfData = (unsigned char)ulNumberOfElement;

    if (ulNumberOfElement != 1)
    {
        ulSize = SAV2_g_ulSizeByType[ucType] * ulNumberOfElement; Mmg_fn_v_SetModeAlloc(g_ucSAV2ModuleId, 0, 0); p_vArray = fn_p_vGenAlloc(ulSize, 0); printf("SAV2_fn_p_vMalloc %d\n", ulSize); if (p_vArray != NULL) { memset(p_vArray, 0, ulSize); } p_stElement->uData.p_vArray = (int)p_vArray;
    }

    if (p_stElement->hNextBrotherDyn != NULL) { p_stElement->hNextBrotherDyn->hPrevBrotherDyn = p_stElement->hPrevBrotherDyn; } if (p_stElement->hPrevBrotherDyn != NULL) { p_stElement->hPrevBrotherDyn->hNextBrotherDyn = p_stElement->hNextBrotherDyn; } if (p_stElement->hFatherDyn != NULL) { p_stElement->hFatherDyn->lNumberOfElementsDyn--; if (p_stElement->hFatherDyn->hFirstElementDyn == p_stElement) { p_stElement->hFatherDyn->hFirstElementDyn = p_stElement->hNextBrotherDyn; } if (p_stElement->hFatherDyn->hLastElementDyn == p_stElement) { p_stElement->hFatherDyn->hLastElementDyn = p_stElement->hPrevBrotherDyn; } } p_stElement->hNextBrotherDyn = NULL; p_stElement->hPrevBrotherDyn = NULL; p_stElement->hFatherDyn = NULL; p_stElement->hNextBrotherDyn = NULL; p_stElement->hPrevBrotherDyn = SAV2_g_stList.SAV2_ListAnchor.hLastElementDyn; p_stElement->hFatherDyn = &SAV2_g_stList.SAV2_ListAnchor; if (SAV2_g_stList.SAV2_ListAnchor.hFirstElementDyn == NULL) { SAV2_g_stList.SAV2_ListAnchor.hFirstElementDyn = p_stElement; } else { SAV2_g_stList.SAV2_ListAnchor.hLastElementDyn->hNextBrotherDyn = p_stElement; } SAV2_g_stList.SAV2_ListAnchor.hLastElementDyn = p_stElement; SAV2_g_stList.SAV2_ListAnchor.lNumberOfElementsDyn++;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 289–291 */
/* addr: 0x0028ca20  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 289
 *   +0x0004 -> line 290
 *   +0x0008 -> line 289
 *   +0x0014 -> line 290
 *   +0x0050 -> line 291
 *   +0x0054 -> line 290
 *   +0x0058 -> line 291
 *   +0x0060 -> line 290
 *   +0x0064 -> line 291
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAV2_fn_bIsExist(char* p_szElementName)
{
    return (SAV2_fn_p_stFindElementByNameExpanded(p_szElementName) != NULL) ? 1 : 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 275–286 */
/* addr: 0x0028ca90  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 275
 *   +0x0004 -> line 279
 *   +0x0008 -> line 275
 *   +0x0014 -> line 279
 *   +0x0020 -> line 281
 *   +0x0034 -> line 282
 *   +0x003c -> line 283
 *   +0x0048 -> line 285
 *   +0x004c -> line 286
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
SAV2_tdstElement_* SAV2_fn_p_stFindElementByName(char* p_szElementName)
{
    SAV2_tdstElement_* p_stElement;



    for (p_stElement = SAV2_g_stList.SAV2_ListAnchor.hFirstElementDyn; p_stElement != NULL; p_stElement = p_stElement->hNextBrotherDyn)
    {
        if (strcasecmp((char*)p_stElement->p_szElementName, p_szElementName) == 0)
            return p_stElement;
    }

    return NULL;
}

/* The retail code expands the lookup into its callers but keeps the call in
 * SAV2_fn_vDeleteAllPipeline, so the expandable copy is a separate static
 * helper. */
#pragma auto_inline on
static SAV2_tdstElement_* SAV2_fn_p_stFindElementByNameExpanded(char* p_szElementName)
{
    SAV2_tdstElement_* p_stElement;



    for (p_stElement = SAV2_g_stList.SAV2_ListAnchor.hFirstElementDyn; p_stElement != NULL; p_stElement = p_stElement->hNextBrotherDyn)
    {
        if (strcasecmp((char*)p_stElement->p_szElementName, p_szElementName) == 0)
            return p_stElement;
    }

    return NULL;
}
#pragma auto_inline reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 246–272 */
/* addr: 0x0028caf0  size: 644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 246
 *   +0x001c -> line 249
 *   +0x0094 -> line 251
 *   +0x0098 -> line 249
 *   +0x00a0 -> line 251
 *   +0x00ac -> line 253
 *   +0x00c0 -> line 255
 *   +0x00cc -> line 256
 *   +0x0118 -> line 257
 *   +0x0120 -> line 258
 *   +0x0128 -> line 260
 *   +0x0130 -> line 261
 *   +0x0178 -> line 263
 *   +0x01a0 -> line 264
 *   +0x01a8 -> line 265
 *   +0x01bc -> line 266
 *   +0x01ec -> line 267
 *   +0x01f4 -> line 268
 *   +0x021c -> line 270
 *   +0x0244 -> line 271
 *   +0x0268 -> line 272
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vFreeAnElement(SAV2_tdstElement_* p_stElement)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 204–220 */
/* addr: 0x0028cd80  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 204
 *   +0x001c -> line 205
 *   +0x0024 -> line 206
 *   +0x0034 -> line 207
 *   +0x003c -> line 208
 *   +0x0050 -> line 209
 *   +0x0058 -> line 210
 *   +0x0060 -> line 211
 *   +0x0068 -> line 212
 *   +0x0074 -> line 213
 *   +0x007c -> line 214
 *   +0x0090 -> line 215
 *   +0x0094 -> line 220
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Debug info says void; the element type is returned in $v0. */
SAV2_tdeDataType_ SAV2_fn_eGiveElementTypeFromAIType(tdeVariableType_ _eIAType) { SAV2_tdeDataType_ eDataType = 0; if ((_eIAType == E_vt_Boolean) || (_eIAType == E_vt__128To127) || (_eIAType == E_vt_0To255))
        eDataType = SAV2_eU8;
    else if ((_eIAType == E_vt__32768To32767) || (_eIAType == E_vt_0To65535))
        eDataType = SAV2_eU16;
    else if ((_eIAType == E_vt_Integer) || (_eIAType == E_vt_PositiveInteger))
        eDataType = SAV2_eU32;
    else if (_eIAType == E_vt_Float)
        eDataType = SAV2_eFloat;
    else if (_eIAType == E_vt_Vector)
        eDataType = SAV2_eVector;
    else if ((_eIAType == E_vt_String) || (_eIAType == E_vt_Text))
        eDataType = SAV2_eString;
    return eDataType;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 157–188 */
/* addr: 0x0028ce20  size: 536 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 157
 *   +0x0004 -> line 159
 *   +0x0008 -> line 157
 *   +0x0028 -> line 159
 *   +0x0030 -> line 160
 *   +0x0034 -> line 164
 *   +0x0058 -> line 165
 *   +0x0064 -> line 166
 *   +0x0084 -> line 167
 *   +0x0088 -> line 170
 *   +0x00ac -> line 171
 *   +0x00b8 -> line 172
 *   +0x00d8 -> line 173
 *   +0x00dc -> line 176
 *   +0x0104 -> line 177
 *   +0x0110 -> line 178
 *   +0x0134 -> line 179
 *   +0x0140 -> line 180
 *   +0x0164 -> line 181
 *   +0x0170 -> line 182
 *   +0x0194 -> line 183
 *   +0x01a0 -> line 184
 *   +0x01c4 -> line 185
 *   +0x01d0 -> line 186
 *   +0x01f4 -> line 187
 *   +0x01fc -> line 188
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAV2_fn_vFindGoodTypeAndOptionsFromString(char* p_szElementOptions, SAV2_tdeDataType_* p_ucType, unsigned char* p_bStatic, unsigned char* p_bSave)
{
    /* TODO: decompile from asm/... */
}
