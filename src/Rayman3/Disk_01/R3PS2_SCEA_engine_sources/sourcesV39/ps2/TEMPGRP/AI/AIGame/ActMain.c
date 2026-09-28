/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ActMain.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstState_ tdstState_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef union RGBAStruct_ RGBAStruct_;
typedef union tduGetSetParam_ tduGetSetParam_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct LST2_tdstAnchorTotdxHandleToTransitionOpt LST2_tdstAnchorTotdxHandleToTransitionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToProhibitOpt LST2_tdstAnchorTotdxHandleToProhibitOpt;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef union anon_0 anon_0;

extern float g_DistanceWaypointMin;
extern float g_DistanceWaypointMax;

struct MTH4D_tdstVector_ { float xX; float xY; float xZ; float xW; };
union tduGetSetParam_ { int lValue; float xValue; void *pValue; };
struct _stTimerCount { unsigned long m_ulLowPart; unsigned long m_ulHighPart; };
struct tdstEngineTimerStructure_ { unsigned int ulTrameNumber; short sTimerHandle; unsigned int ulCurrentTimerCount; unsigned int ulDeltaTimerCount; unsigned int a_ulCounter[16]; unsigned int ulUsefulDeltaTime; unsigned int ulPauseTime; float xFrameLength; _stTimerCount stRealTimeCount; _stTimerCount stPauseTime; unsigned int ulTickPerMS; };
struct tdstPLA_Hierarchy_ { unsigned int ulNbOfCouples; tdstCouple_* d_stCouples; };
union RGBAStruct_ { int Color; };
union HIE_tduLinkedObject_ { int p_Void; };
struct LST2_tdstAnchorTotdxHandleToStateOpt { tdstState_* hFirstElementOpt; int lNumberOfElementsOpt; };
struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt { tdstObjectsTablesList_* hFirstElementOpt; int lNumberOfElementsOpt; };
struct LST2_tdstAnchorTotdxHandleToTransitionOpt { void* hFirstElementOpt; int lNumberOfElementsOpt; };
struct LST2_tdstAnchorTotdxHandleToProhibitOpt { void* hFirstElementOpt; int lNumberOfElementsOpt; };
struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn { void* hFirstElementDyn; void* hLastElementDyn; int lNumberOfElementsDyn; };
union anon_0 { int uDummy; };

typedef enum MAT_tdeTranformationType_ { MAT_eTransform_Uninitialized = 0, MAT_eTransform_Identity = 1, MAT_eTransform_Translation = 2, MAT_eTransform_Zoom = 3, MAT_eTransform_Scale = 4, MAT_eTransform_Rotation = 5, MAT_eTransform_RotationZoom = 6, MAT_eTransform_RotationScale = 7, MAT_eTransform_ComplexRotationScale = 8, MAT_eTransform_Undefined = 9 } MAT_tdeTranformationType_;
typedef enum tdeObjectTreeInit_ { OTI_WhenGameStart = 0, OTI_MapLoaded = 1, OTI_ReinitTheMap = 2, OTI_LoadSavedGame = 3, OTI_PlayerDead = 4, OTI_WhenGoOutOfZone = 4, OTI_Always = 4, OTI_AlwaysCreated = 5 } tdeObjectTreeInit_;
typedef enum tdeMetaActionId_ { eMetaAction_FrozenWait = 0, eMetaAction_ExecuteAction = 1, eMetaAction_ExecuteActionSmooth = 2, eMetaAction_WaitEndOfAction = 3, eMetaAction_WaitEndOfAnim = 4, eMetaAction_CamCineMoveAToBTgtC = 5, eMetaAction_CamCineMoveAToBTgtAC = 6, eMetaAction_CamCinePosATgtB = 7, eMetaAction_CamCinePosAMoveTgtBToC = 8, eMetaAction_CamCinePosATgtBTurnPosH = 9, eMetaAction_CamCinePosATgtBTurnTgtH = 10, eMetaAction_CamCinePosATgtBTurnPosV = 11, eMetaAction_CamCinePosATgtBTurnTgtV = 12, eNbMetaAction = 13 } tdeMetaActionId_;

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct aggregate aggregate;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct _RollOffParam _RollOffParam;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct tdstState_ tdstState_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct tdstTreeInterpret_ tdstTreeInterpret_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct CINE_Manager_ CINE_Manager_;
typedef union tduGetSetParamForNode_ tduGetSetParamForNode_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct stMorphData stMorphData;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct tdstDsgVarInfo_ tdstDsgVarInfo_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstActionTableEntry_ tdstActionTableEntry_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;

typedef enum tdeFieldId_ {
    eField_Position = 0,
    eField_Orientation = 1,
    eField_Speed = 2,
    eField_NormSpeed = 3,
    eField_AbsoluteAxisX = 4,
    eField_AbsoluteAxisY = 5,
    eField_AbsoluteAxisZ = 6,
    eField_PrevComportIntell = 7,
    eField_PrevComportReflex = 8,
    eField_ShadowScaleX = 9,
    eField_ShadowScaleY = 10,
    eField_PadGlobalVector = 11,
    eField_PadHorizontalAxis = 12,
    eField_PadVerticalAxis = 13,
    eField_PadAnalogForce = 14,
    eField_PadTrueAnalogForce = 15,
    eField_PadRotationAngle = 16,
    eField_PadSector = 17,
    eField_SystemData = 18,
    eField_SystemTime = 19,
    eNbField = 20,
} tdeFieldId_;

typedef enum e_ucListViewport_ {
    CAM_e_NoViewport = -1,
} e_ucListViewport_;

typedef enum tdeDsgVarTypeId_ {
    eDsgVarType_Boolean = 0,
    eDsgVarType__128To127 = 1,
    eDsgVarType_0To255 = 2,
    eDsgVarType__32768To32767 = 3,
    eDsgVarType_0To65535 = 4,
    eDsgVarType_Integer = 5,
    eDsgVarType_PositiveInteger = 6,
    eDsgVarType_Float = 7,
    eDsgVarType_Vector = 8,
    eDsgVarType_List = 9,
    eDsgVarType_Comport = 10,
    eDsgVarType_Action = 11,
    eDsgVarType_Caps = 12,
    eDsgVarType_Input = 13,
    eDsgVarType_SoundEvent = 14,
    eDsgVarType_Light = 15,
    eDsgVarType_GameMaterial = 16,
    eDsgVarType_VisualMaterial = 17,
    eDsgVarType_Perso = 18,
    eDsgVarType_WayPoint = 19,
    eDsgVarType_Graph = 20,
    eDsgVarType_Text = 21,
    eDsgVarType_SuperObject = 22,
    eDsgVarType_SOLinks = 23,
    eDsgVarType_IntegerArray = 24,
    eDsgVarType_FloatArray = 25,
    eDsgVarType_VectorArray = 26,
    eDsgVarType_PersoArray = 27,
    eDsgVarType_WayPointArray = 28,
    eDsgVarType_GraphArray = 29,
    eDsgVarType_TextArray = 30,
    eDsgVarType_SuperObjectArray = 31,
    eDsgVarType_SOLinksArray = 32,
    eDsgVarType_SoundEventArray = 33,
    eDsgVarType_VisualMatArray = 34,
    eNbDsgVarType = 35,
} tdeDsgVarTypeId_;

typedef enum tdeKeyWordId_ {
    eKeyWord_If = 0,
    eKeyWord_IfNot = 1,
    eKeyWord_If2 = 2,
    eKeyWord_If4 = 3,
    eKeyWord_If8 = 4,
    eKeyWord_If16 = 5,
    eKeyWord_If32 = 6,
    eKeyWord_If64 = 7,
    eKeyWord_IfNot2 = 8,
    eKeyWord_IfNot4 = 9,
    eKeyWord_IfNot8 = 10,
    eKeyWord_IfNot16 = 11,
    eKeyWord_IfNot32 = 12,
    eKeyWord_IfNot64 = 13,
    eKeyWord_IfDebug = 14,
    eKeyWord_IfNotU64 = 15,
    eKeyWord_Then = 16,
    eKeyWord_Else = 17,
    eKeyWord_EngineGoto = 18,
    eKeyWord_Me = 19,
    eKeyWord_MainActor = 20,
    eKeyWord_Nobody = 21,
    eKeyWord_NoInput = 22,
    eKeyWord_NoSoundEvent = 23,
    eKeyWord_NoLight = 24,
    eKeyWord_NoSuperObject = 25,
    eKeyWord_Nowhere = 26,
    eKeyWord_NoSOL = 27,
    eKeyWord_EmptyText = 28,
    eKeyWord_CapsNull = 29,
    eKeyWord_NoGraph = 30,
    eKeyWord_NoAction = 31,
    eKeyWord_NoGameMaterial = 32,
    eKeyWord_NoVisualMaterial = 33,
    eKeyWord_While = 34,
    eKeyWord_BeginWhile = 35,
    eKeyWord_EndWhile = 36,
    eNbKeyWord = 37,
} tdeKeyWordId_;

typedef enum e_ucCameraStates_ {
    CAM_e_State_GoToOptimal = 0,
    CAM_e_State_GoToComputedOptimal = 1,
    CAM_e_State_FailureVisibility = 2,
    CAM_e_State_FailureVisibilityWithoutCut = 3,
    CAM_e_TempState_GhostMode = 4,
    CAM_e_TempState_ApexMode = 5,
} e_ucCameraStates_;

typedef enum tdeFuncId_ {
    eFunc_GetPersoAbsolutePosition = 0,
    eFunc_GetMyAbsolutePosition = 1,
    eFunc_GetAngleAroundZToPerso = 2,
    eFunc_DistanceToPerso = 3,
    eFunc_DistanceXToPerso = 4,
    eFunc_DistanceYToPerso = 5,
    eFunc_DistanceZToPerso = 6,
    eFunc_DistanceXYToPerso = 7,
    eFunc_DistanceXZToPerso = 8,
    eFunc_DistanceYZToPerso = 9,
    eFunc_DistanceToPersoCenter = 10,
    eFunc_DistanceXToPersoCenter = 11,
    eFunc_DistanceYToPersoCenter = 12,
    eFunc_DistanceZToPersoCenter = 13,
    eFunc_DistanceXYToPersoCenter = 14,
    eFunc_DistanceXZToPersoCenter = 15,
    eFunc_DistanceYZToPersoCenter = 16,
    eCond_GetRadiusWP = 17,
    eCond_CircularInterpolationBetween3WP = 18,
    eCond_BezierBetween3WP = 19,
    eFunc_DistanceToWP = 20,
    eFunc_GetWPAbsolutePosition = 21,
    eFunc_Int = 22,
    eFunc_RandomInt = 23,
    eFunc_Real = 24,
    eFunc_Sinus = 25,
    eFunc_Cosinus = 26,
    eFunc_Square = 27,
    eFunc_SquareRoot = 28,
    eFunc_RandomReal = 29,
    eFunc_MinimumReal = 30,
    eFunc_MaximumReal = 31,
    eFunc_DegreeToRadian = 32,
    eFunc_RadianToDegree = 33,
    eFunc_AbsoluteValue = 34,
    eFunc_LimitRealInRange = 35,
    eFunc_Sign = 36,
    eFunc_Cube = 37,
    eFunc_Modulo = 38,
    eFunc_TernInf = 39,
    eFunc_TernSup = 40,
    eFunc_TernEq = 41,
    eFunc_TernInfEq = 42,
    eFunc_TernSupEq = 43,
    eFunc_TernOp = 44,
    eFunc_TemporalRealCombination = 45,
    eFunc_GetHitPoints = 46,
    eFunc_AddAndGetHitPoints = 47,
    eFunc_SubAndGetHitPoints = 48,
    eFunc_GetHitPointsMax = 49,
    eFunc_AddAndGetHitPointsMax = 50,
    eFunc_SubAndGetHitPointsMax = 51,
    eFunc_ListSize = 52,
    eFunc_GivePersoInList = 53,
    eFunc_AbsoluteVector = 54,
    eFunc_RelativeVector = 55,
    eFunc_VecteurLocalToGlobal = 56,
    eFunc_VecteurGlobalToLocal = 57,
    eFunc_GetMagnetStrength = 58,
    eFunc_GetMagnetFar = 59,
    eFunc_GetMagnetNear = 60,
    eFunc_GetMagnetDuration = 61,
    eFunc_SPO_GetDrawFlag = 62,
    eFunc_GetSPO_GetCollidedSPO = 63,
    eFunc_GetSPO_GetCollidedWallSPO = 64,
    eFunc_GetSPO_GetCollidedCeilingSPO = 65,
    eFunc_GetTime = 66,
    eFunc_GetElapsedTime = 67,
    eFunc_GetDeltaT = 68,
    eFunc_GetFrameLength = 69,
    eFunc_GetFirstActivePad = 70,
    eFunc_InputAnalogicValueX = 71,
    eFunc_InputRealAnalogicValueX = 72,
    eFunc_InputAnalogicValueY = 73,
    eFunc_InputRealAnalogicValueY = 74,
    eFunc_InputAnalogicValue = 75,
    eFunc_InputRealAnalogicValue = 76,
    eFunc_VitessePadAnalogique = 77,
    eFunc_GenerateObject = 78,
    eFunc_CountGeneratedObjects = 79,
    eFunc_GetGlobalCounter = 80,
    eFunc_GetSubMapId = 81,
    eFunc_AddColor = 82,
    eFunc_AddRed = 83,
    eFunc_AddGreen = 84,
    eFunc_AddBlue = 85,
    eFunc_AddAlpha = 86,
    eFunc_ColorRedGreenBlueAlpha = 87,
    eFunc_ColorRedGreenBlue = 88,
    eFunc_ColorRed = 89,
    eFunc_ColorGreen = 90,
    eFunc_ColorBlue = 91,
    eFunc_ColorAlpha = 92,
    eFunc_GetVMTColor = 93,
    eFunc_GetVMTSpecularCoef = 94,
    eFunc_GetVMTSpecularExponent = 95,
    eFunc_GetVMTDiffuseCoef = 96,
    eFunc_GetVMTAmbientCoef = 97,
    eFunc_GetVMTTextureScrollingCoefU = 98,
    eFunc_GetVMTTextureScrollingCoefV = 99,
    eFunc_GetVMTFrame = 100,
    eFunc_GetVMTNumberOfFrames = 101,
    eFunc_MP_GetNumberOfPlayers = 102,
    eFunc_MP_GetMaxNumberOfPlayers = 103,
    eFunc_MP_GetViewPortOfPlayer = 104,
    eFunc_MP_GetActiveMainActors = 105,
    eFunc_PAD_GetHorizontalInvertion = 106,
    eFunc_PAD_GetVerticalInvertion = 107,
    eFunc_GetRLITableIndex = 108,
    eFunc_PAD2_GetGlobalVector = 109,
    eFunc_PAD2_GetHorizontalAxis = 110,
    eFunc_PAD2_GetVerticalAxis = 111,
    eFunc_PAD2_GetAnalogForce = 112,
    eFunc_PAD2_GetTrueAnalogForce = 113,
    eFunc_PAD2_GetRotationAngle = 114,
    eFunc_PAD2_GetPadSector = 115,
    eFunc_PAD2_GetLongDescValue = 116,
    eFunc_TXT_GetNumberOfLines = 117,
    eFunc_InputAnalogicValue2 = 118,
    eFunc_InputAnalogicValueV = 119,
    eFunc_InputRealAnalogicValueV = 120,
    eFunc_InputAnalogicValueZ = 121,
    eFunc_InputRealAnalogicValueZ = 122,
    eProc_SAV2_GetValue = 123,
    eProc_SAV2_GetValueIndex = 124,
    eProc_SAV2_GetNumberOfExistingSave = 125,
    eProc_SAV2_GetTimeSaveGame = 126,
    eProc_SAV2_GetDateSaveGame = 127,
    eFunc_GetTransitionSectorID = 128,
    eFunc_FFBPreCreateConstantEffect = 129,
    eFunc_FFBCreateAndLaunchConstantEffect = 130,
    eFunc_FFBStopEffectWithFade = 131,
    eFunc_CreateCheapCharacterList = 132,
    eFunc_TestCheapCharacterList = 133,
    eFunc_GetClosestCheapCharacter = 134,
    eFunc_GetFurthestCheapCharacter = 135,
    eFunc_GetReactivateCheapCharacter = 136,
    eFunc_LitPointsDeMagie = 137,
    eFunc_LitPointsDeMagieMax = 138,
    eFunc_AjouteEtLitPointsDeMagie = 139,
    eFunc_AjouteEtLitPointsDeMagieMax = 140,
    eFunc_EnleveEtLitPointsDeMagie = 141,
    eFunc_EnleveEtLitPointsDeMagieMax = 142,
    eFunc_LitPointsDair = 143,
    eFunc_LitPointsDairMax = 144,
    eFunc_AjouteEtLitPointsDair = 145,
    eFunc_AjouteEtLitPointsDairMax = 146,
    eFunc_EnleveEtLitPointsDair = 147,
    eFunc_EnleveEtLitPointsDairMax = 148,
    eFunc_PersoLePlusProche = 149,
    eFunc_PersoLePlusProcheExtended = 150,
    eFunc_PersoLePlusProcheDansSecteurCourant = 151,
    eFunc_PersoLePlusProcheDansSecteurCourantExtended = 152,
    eFunc_NearerActorInFieldOfVision = 153,
    eFunc_NearerActorInFieldOfVisionExtended = 154,
    eFunc_NearerActorOfFamilyInFieldOfVision = 155,
    eFunc_NearerActorOfFamilyInFieldOfVisionExtended = 156,
    eFunc_NearerActorInFieldOfVisionWithOffset = 157,
    eFunc_NearerActorInFieldOfVisionWithOffsetExtended = 158,
    eFunc_NearerActorOfFamilyInFOVWithOffset = 159,
    eFunc_NearerActorOfFamilyInFOVWithOffsetExtended = 160,
    eFunc_GetNbActivePerso = 161,
    eFunc_CibleLaPlusProche = 162,
    eFunc_CibleLaPlusProcheExtended = 163,
    eFunc_CibleLaPlusProcheAvecAngles = 164,
    eFunc_CibleLaPlusProcheAvecAnglesExtended = 165,
    eFunc_GetCloserNetwork = 166,
    eFunc_NetWorkCloserCollisionWP = 167,
    eFunc_ReseauWPLePlusProche = 168,
    eFunc_ReseauWPLePlusProcheZPoids = 169,
    eFunc_NetworkCloserWPOfType = 170,
    eFunc_NetworkCloserCollisionWPOfType = 171,
    eFunc_NetworkCloserWPOfExactType = 172,
    eFunc_ReseauWPLePlusDansLAxe = 173,
    eFunc_ReseauWPLePlusDansLAxe2 = 174,
    eFunc_ReseauWPLePlusProcheAvecAngle = 175,
    eFunc_NetworkNextWPWithCapa = 176,
    eFunc_NetworkNextWPWithExactCapa = 177,
    eFunc_NetworkNextWPWithCapaOptimalWeight = 178,
    eFunc_NetworkNextWPOfType = 179,
    eFunc_NetworkNextWPOfExactType = 180,
    eFunc_NetworkAffectTypeOfConnectedWP = 181,
    eFunc_NetworkAffectTypeOfConnectedWPWithCapa = 182,
    eFunc_ReseauCheminLePlusCourt = 183,
    eFunc_NetworkBuildOrderedPath = 184,
    eFunc_NetworkBuildOrderedPathCircular = 185,
    eFunc_NetworkAllocateGraphToMSWay = 186,
    eFunc_NetworkAllocateGraphToMSWayCircular = 187,
    eFunc_NetworkBuildRandomPath = 188,
    eFunc_NetworkBuildRandomCircularPath = 189,
    eFunc_ReseauLitIndexCourant = 190,
    eFunc_ReseauForceIndexCourant = 191,
    eFunc_ReseauLitPremierIndex = 192,
    eFunc_ReseauLitDernierIndex = 193,
    eFunc_ReseauIncrementIndex = 194,
    eFunc_ReseauDecrementIndex = 195,
    eFunc_ReseauLitWPAIndex = 196,
    eFunc_ReseauLitCapaciteLiaisonAIndex = 197,
    eFunc_ReseauChangeCapaciteLiaisonAIndex = 198,
    eFunc_ReseauLitPoidsLiaisonAIndex = 199,
    eFunc_ReseauChangePoidsLiaisonAIndex = 200,
    eFunc_NetworkGetIndexOfWPInMSWay = 201,
    eFunc_NetworkForceWPToCurrent = 202,
    eFunc_NetworkTestTheEnds = 203,
    eFunc_ReseauLitCapaciteLiaisonDansGraph = 204,
    eFunc_ReseauChangeCapaciteLiaisonDansGraph = 205,
    eFunc_ReseauLitPoidsLiaisonDansGraph = 206,
    eFunc_ReseauChangePoidsLiaisonDansGraph = 207,
    eFunc_NetworkGetTypeOfWP = 208,
    eFunc_GetCapabilities = 209,
    eFunc_CapabilityAtBitNumber = 210,
    eFunc_GetScrollSpeed = 211,
    eFunc_MTGetScrollSpeed = 212,
    eFunc_GetNbFrame = 213,
    eFunc_DotProduct = 214,
    eFunc_CrossProduct = 215,
    eFunc_Normalize = 216,
    eFunc_GetSPOCoordinates = 217,
    eFunc_GetSPOSighting = 218,
    eFunc_GetSPOHorizon = 219,
    eFunc_GetSPOBanking = 220,
    eFunc_GetTractionFactor = 221,
    eFunc_GetCenterZDEType = 222,
    eFunc_GetCenterZDMType = 223,
    eFunc_GetCenterZDRType = 224,
    eFunc_GetCenterZDDType = 225,
    eFunc_TextAffiche = 226,
    eFunc_MJTextAffiche = 227,
    eFunc_GetCPUCounter = 228,
    eFunc_TurnToPosition = 229,
    eFunc_FormatMemCard = 230,
    eFunc_GetDefaultLanguage = 231,
    eFunc_PS2_MagicBox = 232,
    eFunc_SAV2_DoVarsNeedToBeSet = 233,
    eFunc_CINEGetGenerateEvent = 234,
    eFunc_StringCompare = 235,
    eFunc_EmptyString = 236,
    eFunc_VitesseHorizontaleDuPerso = 237,
    eFunc_VitesseVerticaleDuPerso = 238,
    eFunc_GetPersoZoomFactor = 239,
    eFunc_GetPersoSighting = 240,
    eFunc_GetPersoHorizon = 241,
    eFunc_GetPersoBanking = 242,
    eFunc_LitPositionZDM = 243,
    eFunc_LitPositionZDE = 244,
    eFunc_LitPositionZDD = 245,
    eFunc_LitCentreZDM = 246,
    eFunc_LitCentreZDE = 247,
    eFunc_LitCentreZDD = 248,
    eFunc_LitAxeZDM = 249,
    eFunc_LitAxeZDE = 250,
    eFunc_LitAxeZDD = 251,
    eFunc_LitDimensionZDM = 252,
    eFunc_LitDimensionZDE = 253,
    eFunc_LitDimensionZDD = 254,
    eFunc_VecteurPointAxe = 255,
    eFunc_VecteurPointSegment = 256,
    eFunc_VectorContribution = 257,
    eFunc_VectorCombination = 258,
    eFunc_TemporalVectorCombination = 259,
    eFunc_ScaledVector = 260,
    eFunc_GetVectorNorm = 261,
    eFunc_RotateVector = 262,
    eFunc_VectorAngle = 263,
    eFunc_VectorCos = 264,
    eFunc_VectorSin = 265,
    eFunc_GetNormalCollideVector = 266,
    eFunc_GetNormalSlopeVector = 267,
    eFunc_GetNormalSlopeVectorAndAngle = 268,
    eFunc_GetNormalCollideVector2 = 269,
    eFunc_GetCollidePoint = 270,
    eFunc_GetCollidePoint2 = 271,
    eFunc_GetHandsCollidePoint = 272,
    eFunc_GetCollideRate = 273,
    eFunc_GetCollideRate2 = 274,
    eFunc_GetCollideMaterialType = 275,
    eFunc_GetCollideMaterialType2 = 276,
    eFunc_GetCollideMaterialDirection = 277,
    eFunc_GetCollideMaterialCoeff = 278,
    eFunc_GetCollideMaterialTypeForAi = 279,
    eFunc_GetCollisionPoint = 280,
    eFunc_GetCollisionVector = 281,
    eFunc_GetCollisionPerso = 282,
    eFunc_GetCollisionPointMaterial = 283,
    eFunc_GetFirstCollisionInfo = 284,
    eFunc_GetLastTraversedMaterialType = 285,
    eFunc_GetLastTraversedMaterial = 286,
    eFunc_GetCurrentCollidedGMT = 287,
    eFunc_GetColliderType = 288,
    eFunc_GetColliderActor = 289,
    eFunc_GetColliderVector = 290,
    eFunc_GetColliderReal = 291,
    eFunc_GetLastCollisionActor = 292,
    eFunc_ComputeRebondVector = 293,
    eFunc_GetModuleAbsolutePosition = 294,
    eFunc_GetModuleRelativePosition = 295,
    eFunc_GetModuleZoomFactor = 296,
    eFunc_GetModuleSighting = 297,
    eFunc_GetModuleHorizon = 298,
    eFunc_GetModuleBanking = 299,
    eFunc_CastIntegerToChannel = 300,
    eFunc_GetSlotDate = 301,
    eFunc_GetSlotName = 302,
    eFunc_GetSlotScore = 303,
    eFunc_GetStringCharAt = 304,
    eFunc_ScanAsciiKey = 305,
    eFunc_GetFormattedTextInfo = 306,
    eFunc_GetInputEntryName = 307,
    eFunc_GetMechanicGravityFactor = 308,
    eFunc_GetMechanicSlide = 309,
    eFunc_GetMechanicRebound = 310,
    eFunc_GetMechanicSlopeLimit = 311,
    eFunc_GetMechanicInertiaX = 312,
    eFunc_GetMechanicInertiaY = 313,
    eFunc_GetMechanicInertiaZ = 314,
    eFunc_GetMechanicTiltIntensity = 315,
    eFunc_GetMechanicTiltInertia = 316,
    eFunc_GetMechanicTiltOrigin = 317,
    eFunc_GetMechanicMaxSpeed = 318,
    eFunc_GetMechanicStreamPriority = 319,
    eFunc_GetMechanicStreamSpeed = 320,
    eFunc_GetMechanicStreamFactor = 321,
    eFunc_GetSlideFactorX = 322,
    eFunc_GetSlideFactorY = 323,
    eFunc_GetSlideFactorZ = 324,
    eFunc_JumpImpulsion = 325,
    eFunc_GetSpeedAnim = 326,
    eFunc_HierGetFather = 327,
    eFunc_GetActivationZDD = 328,
    eFunc_GetActivationZDM = 329,
    eFunc_GetActivationZDE = 330,
    eFunc_GetActivationZDR = 331,
    eFunc_GetCollisionFrequency = 332,
    eFunc_GetBrainFrequency = 333,
    eFunc_GetLightFrequency = 334,
    eFunc_GetBooleanInArray = 335,
    eFunc_GetNumberOfBooleanInArray = 336,
    eFunc_GetButtonName = 337,
    eFunc_GetOneCustomFloat = 338,
    eFunc_GetOneCustomLong = 339,
    eFunc_GetOneCustomVector = 340,
    eFunc_GetDriversAvailable = 341,
    eFunc_GetCurrentLanguageId = 342,
    eFunc_GetNbLanguages = 343,
    eFunc_GetLanguageText = 344,
    eFunc_TextToInt = 345,
    eFunc_NbAvailableResolution = 346,
    eFunc_CurrentResolution = 347,
    eFunc_SaveResolution = 348,
    eFunc_IsResolutionAvailable = 349,
    eFunc_GetBrightness = 350,
    eFunc_NameResolution = 351,
    eFunc_GetTextureFiltering = 352,
    eFunc_GetAntiAliasing = 353,
    eFunc_GetSaturationDistance = 354,
    eFunc_GetBackgroundDistance = 355,
    eFunc_GetTooFarLimit = 356,
    eFunc_GetTransparencyZoneMin = 357,
    eFunc_GetTransparencyZoneMax = 358,
    eFunc_GetCurrentFrame = 359,
    eFunc_ExecuteVariable = 360,
    eFunc_ComputeProtectKey = 361,
    eFunc_Xor = 362,
    eFunc_And = 363,
    eFunc_Or = 364,
    eFunc_Not = 365,
    eFunc_DivUnsigned = 366,
    eFunc_MulUnsigned = 367,
    eFunc_AddUnsigned = 368,
    eFunc_SubUnsigned = 369,
    eFunc_GetMemoryValue = 370,
    eFunc_GetXBoxRegion = 371,
    eFunc_CreditsBegin = 372,
    eFunc_CreditsGetChapter = 373,
    eFunc_CreditsGetPageFromCurrentChapter = 374,
    eFct_Cam_GetShiftTarget = 375,
    eFct_Cam_GetShiftPos = 376,
    eFct_Cam_GetDistMin = 377,
    eFct_Cam_GetDistMax = 378,
    eFct_Cam_GetBoundDistMin = 379,
    eFct_Cam_GetBoundDistMax = 380,
    eFct_Cam_GetAngleAlpha = 381,
    eFct_Cam_GetAngleShiftAlpha = 382,
    eFct_Cam_GetAngleTheta = 383,
    eFct_Cam_GetAngleShiftTheta = 384,
    eFct_Cam_GetLinearSpeed = 385,
    eFct_Cam_GetLinearIncreaseSpeed = 386,
    eFct_Cam_GetLinearDecreaseSpeed = 387,
    eFct_Cam_GetAngularSpeed = 388,
    eFct_Cam_GetAngularIncreaseSpeed = 389,
    eFct_Cam_GetAngularDecreaseSpeed = 390,
    eFct_Cam_GetTargetSpeed = 391,
    eFct_Cam_GetTargetIncreaseSpeed = 392,
    eFct_Cam_GetTargetDecreaseSpeed = 393,
    eFct_Cam_GetFocal = 394,
    eFct_Cam_GetZMin = 395,
    eFct_Cam_GetZMax = 396,
    eFct_Cam_GetTargetedSuperObject = 397,
    eFct_Cam_GetTypeOfViewport = 398,
    eFct_Cam_GetCameraOfViewport = 399,
    eFct_Cam_GetMainCamera = 400,
    eFct_Cam_ComputeTargetWithTgtPerso = 401,
    eFct_Cam_GetCurrentTargetPosition = 402,
    eFct_Cam_GetSectorCameraType = 403,
    eFct_Cam_GetBestPos = 404,
    eFct_Cam_GetTransparencyFlag = 405,
    eFct_Cam_SetMirrorFlag = 406,
    eFct_Cam_GetMirrorFlag = 407,
    eFunc_CAM_GetViewportCoordinates = 408,
    eFunc_CSHBackMode = 409,
    eFunc_CSHMarioMode = 410,
    eFunc_CSHStrafeLockMode = 411,
    eProc_GetViewFinderDistance = 412,
    eFunc_LinkInit = 413,
    eFunc_LinkDoBehaviour = 414,
    eFunc_LinkKill = 415,
    eFunc_LinkGetNoCutpoints = 416,
    eFunc_LinkGetCutPoint = 417,
    eFunc_FollowLinkDirection = 418,
    eFunc_SND_GetSoundHandle = 419,
    eFunc_SND_GetSendSoundRequestHandleState = 420,
    eFunc_SND_GetSendVoiceRequestHandleState = 421,
    eFunc_SND_GetSendMusicRequestHandleState = 422,
    eFunc_SND_GetSendAmbianceRequestHandleState = 423,
    eFunc_SND_GetSendMenuSndRequestHandleState = 424,
    eFunc_SND_GetSoundVolume = 425,
    eFunc_SND_GetVoiceVolume = 426,
    eFunc_SND_GetMusicVolume = 427,
    eFunc_SND_GetAmbianceVolume = 428,
    eFunc_SND_GetMenuSndVolume = 429,
    eFunc_IsSoundPlaying = 430,
    eProc_SND_GetMusicMarker = 431,
    eFunc_MonitoringSetVariable = 432,
    eFunc_R3GetScore = 433,
    eFunc_R3GetNbCage = 434,
    eFunc_PS2DemoGetParameter = 435,
    eFunc_GetScreenDisplayFrequency = 436,
    eFunc_GetLastSaveGameOperationResult = 437,
    eFunc_SinEffect_GetSinusPosition = 438,
    eFunc_SFX_GetLightReflectionStatus = 439,
    eFunc_SFX_GetWaterCirclesStatus = 440,
    eFunc_SFX_IsLightReflectionPossible = 441,
    eFunc_SFX_IsWaterCirclesPossible = 442,
    eFunc_AGO_GetHandle = 443,
    eFunc_IsMcValid = 444,
    eFunc_FormatMc = 445,
    eNbFunc = 446,
} tdeFuncId_;

typedef enum tdeCondId_ {
    eCond_Et = 0,
    eCond_Ou = 1,
    eCond_Not = 2,
    eCond_XOr = 3,
    eCond_Equal = 4,
    eCond_Different = 5,
    eCond_Lesser = 6,
    eCond_Greater = 7,
    eCond_LesserOrEqual = 8,
    eCond_GreaterOrEqual = 9,
    eCond_CollidePersoZDDNoWithPerso = 10,
    eCond_CollideModuleZDDNoWithPerso = 11,
    eCond_CollidePersoAllZDDWithPerso = 12,
    eCond_CollidePersoZDDWithAnyPerso = 13,
    eCond_CollideModuleZDDWithAnyPerso = 14,
    eCond_CollidePersoZDENoWithPersoZDENo = 15,
    eCond_CollideModuleZDENoWithPersoZDENo = 16,
    eCond_CollidePersoZDENoWithModuleZDENo = 17,
    eCond_CollideModuleZDENoWithModuleZDENo = 18,
    eCond_CollidePersoZDENoWithPersoTypeZDE = 19,
    eCond_CollideModuleZDENoWithPersoTypeZDE = 20,
    eCond_CollidePersoTypeZDEWithPersoTypeZDE = 21,
    eCond_CollidePersoAllZDEWithPersoAllZDE = 22,
    eCond_CollidePersoTypeZDEWithPersoAllZDE = 23,
    eCond_CollidePersoAllZDEWithPersoTypeZDE = 24,
    eCond_CollidePersoZDENoWithTypeZDE = 25,
    eCond_CollideModuleZDENoWithTypeZDE = 26,
    eCond_CollideWithGround = 27,
    eCond_CollideWithWall = 28,
    eCond_CollideWithNothing = 29,
    eCond_CollideWithCeiling = 30,
    eCond_CollideWithPerso = 31,
    eCond_CollideWithWater = 32,
    eCond_CollideWithThisPerso = 33,
    eCond_ZDMCollideWithGround = 34,
    eCond_ZDMCollideWithWall = 35,
    eCond_ZDMCollideWithNothing = 36,
    eCond_ZDMCollideWithCeiling = 37,
    eCond_IsPersoInList = 38,
    eCond_IsModelInList = 39,
    eCond_IsFamilyInList = 40,
    eCond_ListEmptyTest = 41,
    eCond_UserEvent_IsSet = 42,
    eCond_UserEvent_IsSet2 = 43,
    eCond_UserEvent_IsSet3 = 44,
    eCond_PressedBut = 45,
    eCond_JustPressedBut = 46,
    eCond_ReleasedBut = 47,
    eCond_JustReleasedBut = 48,
    eCond_IsTimeElapsed = 49,
    eCond_IsValidObject = 50,
    eCond_IsValidWayPoint = 51,
    eCond_IsValidGMT = 52,
    eCond_IsValidVMT = 53,
    eCond_IsValidAction = 54,
    eCond_IsValidText = 55,
    eCond_IsValidSPO = 56,
    eCond_IsValidGraph = 57,
    eCond_SeePerso = 58,
    eCond_IsActivable = 59,
    eCond_IsAlreadyHandled = 60,
    eCond_Alw_IsMine = 61,
    eCond_IsPersoLightOn = 62,
    eCond_IsPersoLightPulseOn = 63,
    eCond_IsPersoLightGyroPhareOn = 64,
    eCond_IsRLITransitionInProgress = 65,
    eCond_IsInAlwaysActiveList = 66,
    eCond_IsAlwaysActive = 67,
    eCond_IsAnActivePad = 68,
    eCond_IsMultitap = 69,
    eCond_SAV2_IsValid = 70,
    eCond_IsWidescreen = 71,
    eCond_EngineIsInPAL = 72,
    eCond_IsZDMCollideWithObstacle = 73,
    eCond_IsZDMCollideWithWall = 74,
    eCond_IsZDMCollideWithGround = 75,
    eCond_IsZDMCollideWithCeiling = 76,
    eCond_CmtIdentifierContainsMask = 77,
    eCond_HitByCollider = 78,
    eCond_IsTypeOfGMTCollide = 79,
    eCond_IsInComport = 80,
    eCond_IsInReflexComport = 81,
    eCond_IsInAction = 82,
    eCond_ChangeActionEnable = 83,
    eCond_EngineReinitRequested = 84,
    eCond_IsThereMechEvent = 85,
    eCond_CollisionWP = 86,
    eCond_IsCustomBitSet = 87,
    eCond_IsPersoActive = 88,
    eCond_CheckActionEnd = 89,
    eCond_IsCurrentStateCustomBitSet = 90,
    eCond_IsGiBlock = 91,
    eCond_IsMechanicBlock = 92,
    eCond_IsMechanicAnimation = 93,
    eCond_IsMechanicCollide = 94,
    eCond_IsMechanicGravity = 95,
    eCond_IsMechanicTilt = 96,
    eCond_IsMechanicGi = 97,
    eCond_IsMechanicClimb = 98,
    eCond_IsMechanicOnGround = 99,
    eCond_IsMechanicSpider = 100,
    eCond_IsMechanicShoot = 101,
    eCond_IsMechanicSwim = 102,
    eCond_IsMechanicNeverFall = 103,
    eCond_IsMechanicCollisionControl = 104,
    eCond_IsMechanicKeepSpeedZ = 105,
    eCond_IsMechanicSpeedLimit = 106,
    eCond_IsMechanicInertia = 107,
    eCond_IsMechanicStream = 108,
    eCond_IsMechanicStickOnPlatform = 109,
    eCond_IsMechanicPatformCrash = 110,
    eCond_IsMechanicScale = 111,
    eCond_IsMechanicExec = 112,
    eCond_CanFall = 113,
    eCond_IsMechanicCrash = 114,
    eCond_IsNullVector = 115,
    eCond_HierIsSonOfActor = 116,
    eCond_IsMorphing = 117,
    eCond_CheckAnimEnd = 118,
    eCond_CheckAnimSmooth = 119,
    eCond_HasTheCapability = 120,
    eCond_HasOneOfTheCapabilities = 121,
    eCond_HasTheCapabilityNumber = 122,
    eCond_PersoHasTheCapability = 123,
    eCond_PersoHasOneOfTheCapabilities = 124,
    eCond_PersoHasTheCapabilityNumber = 125,
    eCond_MagnetIsActivated = 126,
    eCond_NEstPasEnCollisionAvecMap = 127,
    eCond_NEstPasEnCollisionAvecProjectile = 128,
    eCond_NEstPasEnCollisionAvecSecondCharact = 129,
    eCond_NEstPasEnCollisionAvecMainCharact = 130,
    eCond_NEstPasEnCollisionAvecAutresSecteurs = 131,
    eCond_IsInFamily = 132,
    eCond_IsInModel = 133,
    eCond_AJoypadIsConnected = 134,
    eCond_AKeyJustPressed = 135,
    eCond_AButtonPadJustPressed = 136,
    eCond_IsInDemoMode = 137,
    eCond_IsShapnessMax = 138,
    eCond_IsTooFar = 139,
    eCond_IsSubAnimPlaying = 140,
    eCond_TestCBSubAnim = 141,
    eCond_IsInSubAnim = 142,
    eCond_IsSubAnimNearEnd = 143,
    eCond_IsSameSPO = 144,
    eCond_PressedPadBut = 145,
    eCond_JustPressedPadBut = 146,
    eCond_ReleasedPadBut = 147,
    eCond_JustReleasedPadBut = 148,
    eCond_IsCinePlaying = 149,
    eCond_LoadInProgress = 150,
    eCond_SAV2LastError = 151,
    eCond_CheckMCStatus = 152,
    eCond_Cam_IsActive = 153,
    eCond_Cam_IsViewportOwner = 154,
    eCond_Cam_IsFlagNoDynamicTarget = 155,
    eCond_Cam_IsFlagNoAverageMoveTgtPerso = 156,
    eCond_Cam_IsFlagNoParseCutAngle = 157,
    eCond_Cam_IsFlagNoVisibility = 158,
    eCond_Cam_IsFlagNoVisibilityWithDynHie = 159,
    eCond_Cam_IsFlagNoDynChangeTheta = 160,
    eCond_Cam_IsFlagNoShiftUntilPosReached = 161,
    eCond_Cam_IsFlagNoDynSpeed = 162,
    eCond_Cam_IsFlagNoLinearParsing = 163,
    eCond_Cam_IsFlagNoLinearInertia = 164,
    eCond_Cam_IsFlagNoAngularParsing = 165,
    eCond_Cam_IsFlagNoAngularInertia = 166,
    eCond_Cam_IsFlagNoTargetParsing = 167,
    eCond_Cam_IsFlagNoTargetInertia = 168,
    eCond_Cam_IsFlagNoObstacle = 169,
    eCond_Cam_IsFlagFixedOrientation = 170,
    eCond_Cam_IsFlagForcedPosition = 171,
    eCond_Cam_IsFlagForcedTarget = 172,
    eCond_Cam_IsFlagForcedAxis = 173,
    eCond_SND_IsInStereoMode = 174,
    eCond_SND_IsMusicPlaying = 175,
    eCond_SND_IsVoicePlaying = 176,
    eCond_SND_IsEventValid = 177,
    eNbCond = 178,
} tdeCondId_;

struct tdstIntelligence_ {
    tdstScriptAI_** p_p_stScriptAI; /* +0x0 */
    tdstNodeInterpret_* p_stCurrentSchedule; /* +0x4 */
    tdstComport_* p_stCurrentComport; /* +0x8 */
    tdstComport_* p_stPrevComport; /* +0xc */
    tdstActionTable_* p_stActionTable; /* +0x10 */
    unsigned int ulNoComportInit; /* +0x14 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
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

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
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

struct tdstDsgMem_ {
    tdstDsgVar_** p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct tdstAChannel_ {
    HIE_tdstSuperObject_* hSupObject; /* +0x0 */
    HIE_tdstSuperObject_* hZoomSupObject; /* +0x4 */
    tdstAChannel_* p_stNextActiveChannel; /* +0x8 */
    tdstAChannel_* p_stFatherChannel; /* +0xc */
    /* aggregate */ int ax_InterpolatedPositions; /* +0x10 */
    unsigned char _extractor_padding_00[116]; /* implicitly added by extractor; +0x14..0x87 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn {
    CINE_tdstCineActor_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCineActor_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
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

struct tdstMacro_ {
    tdstTreeInterpret_* p_stInitTree; /* +0x0 */
    tdstTreeInterpret_* p_stCurrentTree; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
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

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstState_ {
    tdstAnim3d_* p_stAnim; /* +0x0 */
    LST2_tdstAnchorTotdxHandleToTransitionOpt hForTransitionArray; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToProhibitOpt hForProhibitArray; /* +0xc */
    tdstState_* h_NextState; /* +0x14 */
    int h_LinkedMechanicsIdCard; /* +0x18 */
    int szLevelList; /* +0x1c */
    int szAnimationSectionName; /* +0x20 */
    unsigned char ucRepeatAnimation; /* +0x24 */
    signed char scSpeedAnim; /* +0x25 */
    unsigned char ucTransitionStatusFlag; /* +0x26 */
    unsigned char ucCustomBits; /* +0x27 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct tdstTreeInterpret_ {
    tdstNodeInterpret_* p_stNodeInterpret; /* +0x0 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstNodeInterpret_ {
    anon_0 uDummy; /* +0x0 */
    unsigned short uwNodeToSkip; /* +0x4 */
    unsigned char ucDepth; /* +0x6 */
    unsigned char eType; /* +0x7 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstComport_ {
    tdstTreeInterpret_* p_stRules; /* +0x0 */
    tdstTreeInterpret_* p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
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

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
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
    /* aggregate */ int a_stCustomVectors; /* +0x4c */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
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

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

union tduGetSetParamForNode_ {
    float xValue; /* +0x0 */
    int lValue; /* +0x0 */
    unsigned int ulValue; /* +0x0 */
    short wValue; /* +0x0 */
    unsigned short uwValue; /* +0x0 */
    char cValue; /* +0x0 */
    unsigned char ucValue; /* +0x0 */
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
    MTH3D_tdstVector_* p_stVectorValue; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    WP_tdstGraph_* hGraph; /* +0x0 */
    tdstMacro_* p_stMacro; /* +0x0 */
    CINE_tdstCine_* p_stCine; /* +0x0 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct tdstScriptAI_ {
    tdstComport_* p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
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

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct tdstActionTable_ {
    tdstActionTableEntry_* p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstDsgVarInfo_ {
    unsigned int ulOffsetInDsgMem; /* +0x0 */
    tdeDsgVarTypeId_ eDsgVarTypeId; /* +0x4 */
    unsigned short eSaveType; /* +0x8 */
    tdeObjectTreeInit_ eInitType; /* +0xc */
};

struct tdstActionParam_ {
    tduGetSetParam_ a_uParam[8]; /* +0x0 */
};

struct tdstActionTableEntry_ {
    tdstActionParam_ stActionParam; /* +0x0 */
    tdstNodeInterpret_* p_stNode; /* +0x60 */
    unsigned char bUsed; /* +0x64 */
    unsigned char ucNumRule; /* +0x65 */
    unsigned char bUseDefaultActionReturn; /* +0x66 */
    unsigned char ucNewActionReturn; /* +0x67 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    tdstDsgVarInfo_* p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
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

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
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
    /* aggregate */ int a_hSO_CurrentMainPlayers; /* +0xf4 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0xf8..0x103 */
    short hGLDDevice; /* +0x104 */
    /* aggregate */ int a_hGLDViewport; /* +0x106 */
    unsigned char _extractor_padding_02[6]; /* implicitly added by extractor; +0x10a..0x10f */
    /* aggregate */ int a_stViewportAttr; /* +0x110 */
    unsigned char _extractor_padding_03[556]; /* implicitly added by extractor; +0x114..0x33f */
    /* aggregate */ int a_p_stGameViewportCamera; /* +0x340 */
    unsigned char _extractor_padding_04[16]; /* implicitly added by extractor; +0x344..0x353 */
    /* aggregate */ int a_hGLDFixViewport; /* +0x354 */
    unsigned char _extractor_padding_05[8]; /* implicitly added by extractor; +0x358..0x35f */
    /* aggregate */ int a_stFixViewportAttr; /* +0x360 */
    unsigned char _extractor_padding_06[556]; /* implicitly added by extractor; +0x364..0x58f */
    /* aggregate */ int a_stFixAttributes3D; /* +0x590 */
    unsigned char _extractor_padding_07[36]; /* implicitly added by extractor; +0x594..0x5b7 */
    /* aggregate */ int a_p_stFixCamera; /* +0x5b8 */
    unsigned char _extractor_padding_08[16]; /* implicitly added by extractor; +0x5bc..0x5cb */
    /* aggregate */ int a_stGameAttributes3D; /* +0x5cc */
    unsigned char _extractor_padding_09[36]; /* implicitly added by extractor; +0x5d0..0x5f3 */
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
    unsigned char _extractor_padding_10[4]; /* implicitly added by extractor; +0x63c..0x63f */
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
    tdstPLA_Deformation_ stDeformation; /* +0x14 */
    tdstAnim3d_* p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    HIE_tdstSuperObject_* hMechaCharacter; /* +0xc */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
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
    /* aggregate */ int hSkinMaterial; /* +0x1c4 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x1c8..0x1d3 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    /* aggregate */ int xSkinIndex; /* +0x1d8 */
};

tdstEngineStructure_ g_stEngineStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ActMain.c lines 76–78 */
/* addr: 0x00200c10  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 76
 *   +0x0004 -> line 78
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitDistanceWaypoint(void)
{
    g_DistanceWaypointMin = 0.0f;
    g_DistanceWaypointMax = 0.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ActMain.c lines 202–217 */
/* addr: 0x00200c20  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 202
 *   +0x000c -> line 206
 *   +0x0010 -> line 202
 *   +0x0014 -> line 206
 *   +0x0038 -> line 217
 *   +0x003c -> line 216
 *   +0x0040 -> line 217
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_lGetActionParamlValue(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso);

unsigned char fn_ucFrozenWait(HIE_tdstSuperObject_* p_SuperObjPerso)
{
    if (g_stEngineStructure.stEngineTimer.ulCurrentTimerCount < (unsigned int)fn_lGetActionParamlValue(0, p_SuperObjPerso))
        return 1;
    return 4;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ActMain.c lines 157–198 */
/* addr: 0x00200c70  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 157
 *   +0x0010 -> line 159
 *   +0x001c -> line 191
 *   +0x0040 -> line 197
 *   +0x0044 -> line 198
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stFrozenWaitInit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ActMain.c lines 143–147 */
/* addr: 0x00200cd0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 143
 *   +0x0008 -> line 145
 *   +0x0010 -> line 147
 *   +0x0014 -> line 145
 *   +0x0024 -> line 147
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_ucWaitEndOfAnim(HIE_tdstSuperObject_* p_SuperObjPerso)
{
    return PLA_fn_bTestIfEndOfAnim(p_SuperObjPerso) ? 4 : 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ActMain.c lines 132–136 */
/* addr: 0x00200d00  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 132
 *   +0x0008 -> line 134
 *   +0x0010 -> line 136
 *   +0x0014 -> line 134
 *   +0x0024 -> line 136
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_ucWaitEndOfAction(HIE_tdstSuperObject_* p_SuperObjPerso)
{
    return PLA_fn_bTestIfEndOfAction(p_SuperObjPerso) ? 4 : 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ActMain.c lines 78–99 */
/* addr: 0x00200d30  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 78
 *   +0x0014 -> line 79
 *   +0x0024 -> line 82
 *   +0x0038 -> line 83
 *   +0x0040 -> line 86
 *   +0x0050 -> line 93
 *   +0x0058 -> line 97
 *   +0x0070 -> line 99
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucExecuteAction(HIE_tdstSuperObject_* p_SuperObjPerso)
{
    tdstState_* h_WantedState;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ActMain.c lines 23–72 */
/* addr: 0x00200dc0  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 23
 *   +0x0018 -> line 25
 *   +0x001c -> line 29
 *   +0x0028 -> line 30
 *   +0x0034 -> line 33
 *   +0x0038 -> line 30
 *   +0x003c -> line 35
 *   +0x0040 -> line 33
 *   +0x0044 -> line 35
 *   +0x0060 -> line 48
 *   +0x0094 -> line 50
 *   +0x009c -> line 53
 *   +0x00ac -> line 64
 *   +0x00b4 -> line 53
 *   +0x00b8 -> line 64
 *   +0x00e0 -> line 69
 *   +0x00f0 -> line 71
 *   +0x00f4 -> line 72
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stExecuteActionInit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    long lNbFrame;
    tdeMetaActionId_ eMetaActionId;
    tdstState_* h_WantedState;
    /* TODO: decompile from asm/... */
}
