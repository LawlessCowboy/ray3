/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef union tduIdInterpret_ tduIdInterpret_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef union RGBAStruct_ RGBAStruct_;
typedef union tduGetSetParamForNode_ tduGetSetParamForNode_;
typedef union anon_3 anon_3;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tduGetSetParam_ tduGetSetParam_;
typedef struct anon_6 anon_6;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstArray_ tdstArray_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstTreeInterpret_ tdstTreeInterpret_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct _tdstCheapCharacter _tdstCheapCharacter;
typedef struct _tdstCheapCharacterList _tdstCheapCharacterList;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstBrain_ tdstBrain_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstList_ tdstList_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct AI_tdstBatchOrder_ AI_tdstBatchOrder_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct LST2_tdstAnchorTotdxHandleToTransitionOpt LST2_tdstAnchorTotdxHandleToTransitionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToProhibitOpt LST2_tdstAnchorTotdxHandleToProhibitOpt;
typedef struct tdstState_ tdstState_;
typedef struct stTfmtStatus_ stTfmtStatus_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstDsgVarInfo_ tdstDsgVarInfo_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstActionTableEntry_ tdstActionTableEntry_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct LST2_tdstAnchorToWP_tdHandleOfArcDyn LST2_tdstAnchorToWP_tdHandleOfArcDyn;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tdstFogParams_ tdstFogParams_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstTransition_ tdstTransition_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct SVG_stMCStatus_ SVG_stMCStatus_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct anon_2 anon_2;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct stMorphData stMorphData;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct _stMenuPause _stMenuPause;
typedef struct tdstEvent_ tdstEvent_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;

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

typedef enum tdeProcedureId_ {
    eProc_SetHitPoints = 0,
    eProc_SetHitPointsInit = 1,
    eProc_SetHitPointsToInitValue = 2,
    eProc_SetHitPointsToMaxValue = 3,
    eProc_AddHitPoints = 4,
    eProc_SubHitPoints = 5,
    eProc_SetHitPointsMax = 6,
    eProc_SetHitPointsMaxToInitValue = 7,
    eProc_SetHitPointsMaxToMaxValue = 8,
    eProc_AddHitPointsMax = 9,
    eProc_SubHitPointsMax = 10,
    eProc_TransparentDisplay = 11,
    eProc_SetTransparency = 12,
    eProc_ACT_SetDrawFlag = 13,
    eProc_SkinMaterial = 14,
    eProc_SkinIndex = 15,
    eProc_ModuleTransparentDisplay = 16,
    eProc_ModuleTransparentDisplay2 = 17,
    eProc_SetModuleTransparency = 18,
    eProc_SetModuleTransparency2 = 19,
    eProc_ListAffectPersoZDD = 20,
    eProc_ListAffectModuleZDD = 21,
    eProc_ListAffectPersoZDE = 22,
    eProc_ListAffectModuleZDE = 23,
    eProc_ListAffectPersoTypeZDE = 24,
    eProc_ListAffectModuleTypeZDE = 25,
    eProc_ListAffectTypeZDEWithTypeZDE = 26,
    eProc_AddPersoInList = 27,
    eProc_AddPersoInListAt = 28,
    eProc_DeletePersoAtInList = 29,
    eProc_FindPersoAndDeleteInList = 30,
    eProc_ListSelect = 31,
    eProc_ListUnSelect = 32,
    eProc_ListSort = 33,
    eProc_ListSortByFamily = 34,
    eProc_ListSortByModel = 35,
    eProc_FillListWithAllPersoOfAFamily = 36,
    eProc_FillListWithAllPersoOfAModel = 37,
    eProc_DeleteFamilyInList = 38,
    eProc_DeleteModelInList = 39,
    eProc_ListUnion = 40,
    eProc_ListInter = 41,
    eProc_ListDiff = 42,
    eProc_ListAdd = 43,
    eProc_FogActivate = 44,
    eProc_SetFogColor = 45,
    eProc_SetFogNearFarInf = 46,
    eProc_SetFogBlend = 47,
    eProc_RestoreFog = 48,
    eProc_SaveFog = 49,
    eProc_Magnet_ActiveMagnet = 50,
    eProc_Magnet_DeactiveMagnet = 51,
    eProc_Magnet_SetStrength = 52,
    eProc_Magnet_SetFar = 53,
    eProc_Magnet_SetNear = 54,
    eProc_Magnet_SetDuration = 55,
    eProc_FootPath_AddFootPrint = 56,
    eProc_FootPath_Clear = 57,
    eProc_SinEffect_SetFreq = 58,
    eProc_SinEffect_SetAmplitude = 59,
    eProc_SinEffect_SetState = 60,
    eProc_SinEffect_SetFreq3D = 61,
    eProc_SinEffect_SetFreq3DMesh = 62,
    eProc_SinEffect_SetFreq3DRLI = 63,
    eProc_SinEffect_SetRLIAmplitude = 64,
    eProc_SinEffect_SetRLIBase = 65,
    eProc_SPO_SetDrawFlag = 66,
    eProc_SPO_SetEngineDisplayModeFlag = 67,
    eProc_DeactivateBut = 68,
    eProc_ActivateBut = 69,
    eProc_None = 70,
    eProc_Trace = 71,
    eProc_ChangeComport = 72,
    eProc_ChangeComportReflex = 73,
    eProc_ChangeMyComport = 74,
    eProc_ChangeMyComportReflex = 75,
    eProc_ChangeMyComportAndMyReflex = 76,
    eProc_ChangeAction = 77,
    eProc_ChangeActionForce = 78,
    eProc_ChangeActionRandom = 79,
    eProc_ChangeActionWithEvents = 80,
    eProc_ChangeActionSmooth = 81,
    eProc_ChangeActionForceSmooth = 82,
    eProc_ChangeActionRandomSmooth = 83,
    eProc_ChangeActionWithEventsSmooth = 84,
    eProc_ChangeActionSmoothNL = 85,
    eProc_ChangeActionForceSmoothNL = 86,
    eProc_ChangeActionRandomSmoothNL = 87,
    eProc_ChangeActionWithEventsSmoothNL = 88,
    eKeyWord_Boucle = 89,
    eKeyWord_FinBoucle = 90,
    eKeyWord_Break = 91,
    eProc_PlayerIsDead = 92,
    eProc_ResetDynamicsWithCard = 93,
    eProc_BreakAI = 94,
    eProc_IgnoreTraceFlagForNextPicking = 95,
    eProc_SetMainActor = 96,
    eProc_ActivateObject = 97,
    eProc_DesactivateObject = 98,
    eProc_ChangeMap = 99,
    eProc_ChangeMapWithTransition = 100,
    eProc_ChangeMapNoAutosave = 101,
    eProc_SetActionReturn = 102,
    eProc_FactorAnimationFrameRate = 103,
    eProc_SetCharacterPriority = 104,
    eProc_ForcePersoHandling = 105,
    eProc_SetDynamicAlwaysActive = 106,
    eProc_PlayerIsDeadWithPlacement = 107,
    eProc_SwapLinkTableObjects = 108,
    eProc_ReinitTableObjects = 109,
    eProc_ChangeCurrentObjectTable = 110,
    eProc_BuildObjectTableFromTableAndString = 111,
    eProc_BuildObjectTableFromFormattedString = 112,
    eProc_TakeModuleControl = 113,
    eProc_TakeManyModulesControl = 114,
    eProc_ReleaseModuleControl = 115,
    eProc_QuitGame = 116,
    eProc_ActivateChannel = 117,
    eProc_DeactivateChannel = 118,
    eProc_PersoLightOn = 119,
    eProc_PersoLightOff = 120,
    eProc_SetPersoLightColor = 121,
    eProc_SetPersoLightNearFar = 122,
    eProc_SetPersoLightLittleBigAlpha = 123,
    eProc_SetPersoLightGyrophare = 124,
    eProc_SetPersoLightPulse = 125,
    eProc_SetPersoLightParalleleType = 126,
    eProc_SetPersoLightSphericalType = 127,
    eProc_SetPersoLightHotSpotType = 128,
    eProc_SetPersoLightAmbientType = 129,
    eProc_DefaultDisplay = 130,
    eProc_DisplayVignette = 131,
    eProc_DeleteVignette = 132,
    eProc_PRT_SetGeneratorOn = 133,
    eProc_PRT_SetGeneratorOff = 134,
    eProc_PRT_SetGenerator = 135,
    eProc_PRT_SetModeNone = 136,
    eProc_PRT_SetModeContinuous = 137,
    eProc_PRT_SetModeCrenel = 138,
    eProc_PRT_SetModeProbability = 139,
    eProc_PRT_SetNumberConstant = 140,
    eProc_PRT_SetNumberProbabilist = 141,
    eProc_PRT_SetInfiniteLifeTime = 142,
    eProc_PRT_SetConstantLifeTime = 143,
    eProc_PRT_SetPobabilistLifeTime = 144,
    eProc_Turn = 145,
    eProc_Turn2 = 146,
    eProc_DeltaTurnPerso = 147,
    eProc_TurnPerso = 148,
    eProc_KillPerso = 149,
    eProc_KillPersoAndClearVariable = 150,
    eProc_DeletePersoFromGame = 151,
    eProc_SetVMTColor = 152,
    eProc_SetVMTSpecularExponent = 153,
    eProc_SetVMTSpecularCoef = 154,
    eProc_SetVMTDiffuseCoef = 155,
    eProc_SetVMTAmbientCoef = 156,
    eProc_SetVMTAsChromed = 157,
    eProc_SetVMTTextureScrollingCoef = 158,
    eProc_LockVMT = 159,
    eProc_UnlockVMT = 160,
    eProc_SetVMTFrame = 161,
    eProc_OptionChangeDetailsValue = 162,
    eProc_OptionChangeActionKey = 163,
    eProc_OptionConfigureKey = 164,
    eProc_OptionGetCurrentKeyValue = 165,
    eProc_OptionChangeKeyValue = 166,
    eProc_OptionResetKeyValueToDefault = 167,
    eProc_BatchSetPersoAtModulePosition = 168,
    eProc_BatchSetPersoOrientation = 169,
    eProc_BatchSetPersoAtPerso = 170,
    eProc_SetPersoAbsolutePosition = 171,
    eProc_SetPersoAtModulePosition = 172,
    eProc_ForcePersoAveragePosition = 173,
    eProc_RelativeMovePerso = 174,
    eProc_ChangePersoAnySighting = 175,
    eProc_ChangePersoSightingWithOffset = 176,
    eProc_RotatePersoAroundX = 177,
    eProc_RotatePersoAroundY = 178,
    eProc_RotatePersoAroundZ = 179,
    eProc_RotatePersoAroundVector = 180,
    eProc_RotatePersoAroundVectorWithOffset = 181,
    eProc_RotatePersoAroundXwithOffset = 182,
    eProc_RotatePersoAroundYwithOffset = 183,
    eProc_RotatePersoAroundZwithOffset = 184,
    eProc_SetFullPersoOrientation = 185,
    eProc_SetFullPersoOrientationWithOffset = 186,
    eProc_ZoomPerso = 187,
    eProc_ChangeOneCustomBit = 188,
    eProc_ChangeManyCustomBits = 189,
    eProc_ChangeManyCustomBitsExtended = 190,
    eProc_ChangeOneCustomFloat = 191,
    eProc_ChangeOneCustomLong = 192,
    eProc_ChangeOneCustomVector = 193,
    eProc_ImposeSpeed = 194,
    eProc_ImposeSpeedX = 195,
    eProc_ImposeSpeedY = 196,
    eProc_ImposeSpeedZ = 197,
    eProc_ImposeSpeedXY = 198,
    eProc_ImposeSpeedXYZ = 199,
    eProc_ImposeAbsoluteSpeed = 200,
    eProc_ImposeAbsoluteSpeedX = 201,
    eProc_ImposeAbsoluteSpeedY = 202,
    eProc_ImposeAbsoluteSpeedZ = 203,
    eProc_ImposeAbsoluteSpeedXY = 204,
    eProc_ImposeAbsoluteSpeedXYZ = 205,
    eProc_ProposeSpeed = 206,
    eProc_ProposeSpeedX = 207,
    eProc_ProposeSpeedY = 208,
    eProc_ProposeSpeedZ = 209,
    eProc_ProposeSpeedXY = 210,
    eProc_ProposeSpeedXYZ = 211,
    eProc_ProposeAbsoluteSpeed = 212,
    eProc_ProposeAbsoluteSpeedX = 213,
    eProc_ProposeAbsoluteSpeedY = 214,
    eProc_ProposeAbsoluteSpeedZ = 215,
    eProc_ProposeAbsoluteSpeedXY = 216,
    eProc_ProposeAbsoluteSpeedXYZ = 217,
    eProc_FixePositionPerso = 218,
    eProc_FixePositionPersoWithInterpol = 219,
    eProc_AddSpeed = 220,
    eProc_AddSpeedX = 221,
    eProc_AddSpeedY = 222,
    eProc_AddSpeedZ = 223,
    eProc_AddSpeedXY = 224,
    eProc_AddSpeedXYZ = 225,
    eProc_AddAbsoluteSpeed = 226,
    eProc_AddAbsoluteSpeedX = 227,
    eProc_AddAbsoluteSpeedY = 228,
    eProc_AddAbsoluteSpeedZ = 229,
    eProc_AddAbsoluteSpeedXY = 230,
    eProc_AddAbsoluteSpeedXYZ = 231,
    eProc_PrepareMorph = 232,
    eProc_PrepareMorphMT = 233,
    eProc_StopMorph = 234,
    eProc_StopAllMorph = 235,
    eProc_Morphing = 236,
    eProc_MorphingMT = 237,
    eProc_ReleaseAllModulesControl = 238,
    eProc_ChangeModuleSighting = 239,
    eProc_SetModuleAbsolutePosition = 240,
    eProc_RelativeMoveModule = 241,
    eProc_ChangeModuleSightingWithOffset = 242,
    eProc_RotateModuleAroundX = 243,
    eProc_RotateModuleAroundY = 244,
    eProc_RotateModuleAroundZ = 245,
    eProc_RotateModuleAroundVector = 246,
    eProc_RotateModuleAroundVectorWithOffset = 247,
    eProc_RotateModuleAroundXwithOffset = 248,
    eProc_RotateModuleAroundYwithOffset = 249,
    eProc_RotateModuleAroundZwithOffset = 250,
    eProc_SetFullModuleOrientation = 251,
    eProc_SetFullModuleOrientationWithOffset = 252,
    eProc_ZoomModule = 253,
    eProc_SetColliderType = 254,
    eProc_SetColliderActor = 255,
    eProc_SetColliderVector = 256,
    eProc_SetColliderReal = 257,
    eProc_ReinitCollider = 258,
    eProc_ResetLastCollisionActor = 259,
    eProc_ClearCollisionReport = 260,
    eProc_SetGoThroughMechanicsHandling = 261,
    eProc_EraseLastGoThroughMaterial = 262,
    eProc_ChangeTextDefaultColor = 263,
    eProc_CreateTextWithParamFormat = 264,
    eProc_CreateTextWith2ParamsFormat = 265,
    eProc_StringAddChar = 266,
    eProc_StringReplaceChar = 267,
    eProc_StringRemoveChar = 268,
    eProc_ChangeLanguage = 269,
    eProc_IntToText = 270,
    eProc_FloatToText = 271,
    eProc_SetMechanicAnimation = 272,
    eProc_SetMechanicCollide = 273,
    eProc_SetMechanicGravity = 274,
    eProc_SetMechanicTilt = 275,
    eProc_SetMechanicGi = 276,
    eProc_SetMechanicClimb = 277,
    eProc_SetMechanicOnGround = 278,
    eProc_SetMechanicSpider = 279,
    eProc_SetMechanicShoot = 280,
    eProc_SetMechanicSwim = 281,
    eProc_SetMechanicNeverFall = 282,
    eProc_SetMechanicNewMechanic = 283,
    eProc_SetMechanicCollisionControl = 284,
    eProc_SetMechanicKeepSpeedZ = 285,
    eProc_SetMechanicSpeedLimit = 286,
    eProc_SetMechanicInertia = 287,
    eProc_SetMechanicStream = 288,
    eProc_SetMechanicStickOnPlatform = 289,
    eProc_SetMechanicScale = 290,
    eProc_SetMechanicGravityFactor = 291,
    eProc_SetMechanicSlide = 292,
    eProc_SetMechanicRebound = 293,
    eProc_SetMechanicSlopeLimit = 294,
    eProc_SetMechanicInertiaX = 295,
    eProc_SetMechanicInertiaY = 296,
    eProc_SetMechanicInertiaZ = 297,
    eProc_SetMechanicInertiaXYZ = 298,
    eProc_SetMechanicTiltIntensity = 299,
    eProc_SetMechanicTiltInertia = 300,
    eProc_SetMechanicTiltOrigin = 301,
    eProc_SetMechanicSpeedMax = 302,
    eProc_SetMechanicStreamPriority = 303,
    eProc_SetMechanicStreamSpeed = 304,
    eProc_SetMechanicStreamFactor = 305,
    eProc_AddMechanicStreamSpeed = 306,
    eProc_AddMechanicStreamSpeedList = 307,
    eProc_MoveLimit = 308,
    eProc_MoveLimitX = 309,
    eProc_MoveLimitY = 310,
    eProc_MoveLimitZ = 311,
    eProc_MoveLimitXYZ = 312,
    eProc_StopMoveLimitX = 313,
    eProc_StopMoveLimitY = 314,
    eProc_StopMoveLimitZ = 315,
    eProc_StopMoveLimitXYZ = 316,
    eProc_SetPlatformLink = 317,
    eProc_FreePlatformLink = 318,
    eProc_MecSetScale = 319,
    eProc_MecSetSlideFactorXYZ = 320,
    eProc_MecSetSlideFactorX = 321,
    eProc_MecSetSlideFactorY = 322,
    eProc_MecSetSlideFactorZ = 323,
    eProc_MecSetClimbSpeedLimit = 324,
    eProc_MecSetHangingLimit = 325,
    eProc_MecSetHangingOff = 326,
    eProc_MecSetBaseCoeff = 327,
    eProc_MecSetWalkCoeff = 328,
    eProc_HierSetFather = 329,
    eProc_HierFreeFather = 330,
    eProc_HierListOfSon = 331,
    eProc_HierSetPlatformType = 332,
    eProc_HierControlLink = 333,
    eProc_HierFreezeEngine = 334,
    eProc_FixePositionZDM = 335,
    eProc_FixePositionZDD = 336,
    eProc_FixePositionZDE = 337,
    eProc_ChangeGameMaterialZDE = 338,
    eProc_ChangeLightIntensity = 339,
    eProc_SPO_ChangeFlag = 340,
    eProc_SPO_ChangeFlagRecursively = 341,
    eProc_ActChangeSpoFlag = 342,
    eProc_ChangeScreenSize = 343,
    eProc_ChangeScreenClip = 344,
    eProc_ChangeScreenPos = 345,
    eProc_ChangeScreenPosPercent = 346,
    eProc_ChangeScreenPosPerThousand = 347,
    eProc_ChangeScreenRatio = 348,
    eProc_DisplayShadow = 349,
    eProc_ChangeShadowHeight = 350,
    eProc_ChangeShadowVector = 351,
    eProc_ForceActivationZDD = 352,
    eProc_ForceActivationZDM = 353,
    eProc_ForceActivationZDE = 354,
    eProc_ForceActivationZDR = 355,
    eProc_ForceDesactivationZDD = 356,
    eProc_ForceDesactivationZDM = 357,
    eProc_ForceDesactivationZDE = 358,
    eProc_ForceDesactivationZDR = 359,
    eProc_LibereActivationZDD = 360,
    eProc_LibereActivationZDM = 361,
    eProc_LibereActivationZDE = 362,
    eProc_LibereActivationZDR = 363,
    eProc_ActiveZDR = 364,
    eProc_SetNoCollisionWithMap = 365,
    eProc_SetNoCollisionWithProjectile = 366,
    eProc_SetNoCollisionWithSecondCharact = 367,
    eProc_SetNoCollisionWithMainCharact = 368,
    eProc_SetNoCollisionWithOtherSectors = 369,
    eProc_SetNoCollisionZdeWithProjectile = 370,
    eProc_SetCollComputeFrequency = 371,
    eProc_SetBrainComputeFrequency = 372,
    eProc_SetLightComputeFrequency = 373,
    eProc_SetUsedExitIdentifier = 374,
    eProc_GetUsedExitIdentifier = 375,
    eProc_SetGlobalCounter = 376,
    eProc_ReadAnalogJoystick = 377,
    eProc_SetAnalogJoystickAxes = 378,
    eProc_GetPadCalibration = 379,
    eProc_SetPadCalibration = 380,
    eProc_CancelKeyboardInertia = 381,
    eProc_SetAnalogJoystickAxes2 = 382,
    eProc_ReleaseAnalogJoystick = 383,
    eProc_SetBooleanInArray = 384,
    eProc_SetDefaultFormatCharacter = 385,
    eProc_SelectDriver = 386,
    eProc_SelectShapnessMax = 387,
    eProc_CenterScreen = 388,
    eProc_SelectResolution = 389,
    eProc_ChangeBrightness = 390,
    eProc_TexteEntier = 391,
    eProc_TexteReel = 392,
    eProc_SetTextureFiltering = 393,
    eProc_SetAntiAliasing = 394,
    eProc_DrawSegment = 395,
    eProc_UpdateChecksum = 396,
    eProc_ShellExecute = 397,
    eProc_ChangeSightingAccordingTime = 398,
    eProc_PAD2_SetGlobalVector = 399,
    eProc_PAD2_SetHorizontalAxis = 400,
    eProc_PAD2_SetVerticalAxis = 401,
    eProc_PAD2_SetAnalogForce = 402,
    eProc_PAD2_SetTrueAnalogForce = 403,
    eProc_PAD2_SetRotationAngle = 404,
    eProc_PAD2_SetPadSector = 405,
    eProc_PAD2_SetLongDescValue = 406,
    eProc_SetModifierModeNormal = 407,
    eProc_SetModifierModeLight = 408,
    eProc_SetModifierModeRGB = 409,
    eProc_ValidateMemoryCard = 410,
    eProc_AddMemoryCardString = 411,
    eProc_SetGlobalAccelerationFactorForAnims = 412,
    eProc_FixePointsDeMagie = 413,
    eProc_FixePointsDeMagieMax = 414,
    eProc_InitPointsDeMagie = 415,
    eProc_InitPointsDeMagieMax = 416,
    eProc_AjoutePointsDeMagie = 417,
    eProc_AjoutePointsDeMagieMax = 418,
    eProc_EnlevePointsDeMagie = 419,
    eProc_EnlevePointsDeMagieMax = 420,
    eProc_FixePointsDair = 421,
    eProc_FixePointsDairMax = 422,
    eProc_InitPointsDair = 423,
    eProc_InitPointsDairMax = 424,
    eProc_AjoutePointsDair = 425,
    eProc_AjoutePointsDairMax = 426,
    eProc_EnlevePointsDair = 427,
    eProc_EnlevePointsDairMax = 428,
    eProc_FixePositionFade = 429,
    eProc_FixeLumierePersoLocal = 430,
    eProc_FixeLumierePersoOnOff = 431,
    eProc_FixeLumiereStaticOnOff = 432,
    eProc_FixeLumiereStaticNearFar = 433,
    eProc_FixeLumiereStaticColor = 434,
    eProc_CalculeLumiere = 435,
    eProc_CalculeLumiereAvecOmbres = 436,
    eProc_NoRLI = 437,
    eProc_FixeRLI = 438,
    eProc_BlendRLI = 439,
    eProc_SetRadiusWP = 440,
    eProc_SetPositionAbsWP = 441,
    eProc_SetPositionRelWP = 442,
    eProc_ChangeTypeOfWP = 443,
    eProc_SetCapabilities = 444,
    eProc_AddCapabilities = 445,
    eProc_SubCapabilities = 446,
    eProc_ChangeCapabilities = 447,
    eProc_WPIndiquePlageValeur = 448,
    eProc_ReinitGraph = 449,
    eProc_FixeVitesseTexture = 450,
    eProc_ScrollingOnOff = 451,
    eProc_FixeDecalageTexture = 452,
    eProc_ScrollingPause = 453,
    eProc_ChangeCurrFrame = 454,
    eProc_ChangeRandomFrame = 455,
    eProc_FreezeAnim = 456,
    eProc_UnFreezeAnim = 457,
    eProc_SetDiscreetSpeed = 458,
    eProc_SetSuperimposed = 459,
    eProc_MJ_SetSuperimposed = 460,
    eProc_SetSuperimposed2 = 461,
    eProc_ReleaseSuperimposed = 462,
    eProc_SetSuperimposedClipping = 463,
    eProc_ResetSuperimposedClipping = 464,
    eProc_SetOutlineMode = 465,
    eProc_SetOutlineModeSPO = 466,
    eProc_SetSPOCoordinates = 467,
    eProc_SetSPOCoordinatesAndMoveType1 = 468,
    eProc_SetSPOCoordinatesAndMoveType2 = 469,
    eProc_SetSPOCoordinatesAndMoveType3 = 470,
    eProc_SetSPOCoordinatesAndMoveType4 = 471,
    eProc_SetSPOCoordsNoInt = 472,
    eProc_SetSPOCoordsAndMoveType1NoInt = 473,
    eProc_SetSPOCoordsAndMoveType2NoInt = 474,
    eProc_SetSPOCoordsAndMoveType3NoInt = 475,
    eProc_SetSPOCoordsAndMoveType4NoInt = 476,
    eProc_SetSOLFromWorldOrigin_SPOParam = 477,
    eProc_SetSOLFromInit_SPOParam = 478,
    eProc_SetSOLFromHere_SPOParam = 479,
    eProc_SetSOLToInit_SPOParam = 480,
    eProc_ReinitSOL_SPOParam = 481,
    eProc_SetSOLFromWorldOrigin_SOLParam = 482,
    eProc_SetSOLFromInit_SOLParam = 483,
    eProc_SetSOLFromHere_SOLParam = 484,
    eProc_SetSOLToInit_SOLParam = 485,
    eProc_ReinitSOL_SOLParam = 486,
    eProc_SOLAddCharacter = 487,
    eProc_SOLAddWaypoint = 488,
    eProc_SOLAddObject = 489,
    eProc_SOLDeleteCharacter = 490,
    eProc_SOLDeleteWaypoint = 491,
    eProc_SOLDeleteObject = 492,
    eProc_SwitchSuperimposedTab = 493,
    eProc_RotateSPOAroundX = 494,
    eProc_RotateSPOAroundXType1 = 495,
    eProc_RotateSPOAroundXType2 = 496,
    eProc_RotateSPOAroundXType3 = 497,
    eProc_RotateSPOAroundXType4 = 498,
    eProc_RotateSPOAroundY = 499,
    eProc_RotateSPOAroundYType1 = 500,
    eProc_RotateSPOAroundYType2 = 501,
    eProc_RotateSPOAroundYType3 = 502,
    eProc_RotateSPOAroundYType4 = 503,
    eProc_RotateSPOAroundZ = 504,
    eProc_RotateSPOAroundZType1 = 505,
    eProc_RotateSPOAroundZType2 = 506,
    eProc_RotateSPOAroundZType3 = 507,
    eProc_RotateSPOAroundZType4 = 508,
    eProc_RotateSPOAroundAxis = 509,
    eProc_RotateSPOAroundAxisType1 = 510,
    eProc_RotateSPOAroundAxisType2 = 511,
    eProc_RotateSPOAroundAxisType3 = 512,
    eProc_RotateSPOAroundAxisType4 = 513,
    eProc_RotateSPOToIdentity = 514,
    eProc_ChangeSPOSighting = 515,
    eProc_ChangeSPOSightingType1 = 516,
    eProc_ChangeSPOSightingType2 = 517,
    eProc_ChangeSPOSightingType3 = 518,
    eProc_ChangeSPOSightingType4 = 519,
    eProc_ChangeSPOAnySighting = 520,
    eProc_ChangeSPOAnySightingType1 = 521,
    eProc_ChangeSPOAnySightingType2 = 522,
    eProc_ChangeSPOAnySightingType3 = 523,
    eProc_ChangeSPOAnySightingType4 = 524,
    eProc_SetTractionFactor = 525,
    eProc_TurnToPositionAngle = 526,
    eProc_TurnToPositionSpeed = 527,
    eProc_SortArray = 528,
    eProc_ActiveJoystickAnal = 529,
    eProc_UnActiveJoystickAnal = 530,
    eProc_SetZDMSizeSphere = 531,
    eProc_SetZDDSizeCone = 532,
    eProc_ChangeCaractere = 533,
    eProc_FormateTexte = 534,
    eProc_FormateTexteTime = 535,
    eProc_ChangePersoSighting = 536,
    eProc_PlayDemo = 537,
    eProc_PlayAutoDemo = 538,
    eProc_SetCharacterNotResearched = 539,
    eProc_InitKeyBoardDirections = 540,
    eProc_InitKeyBoardBouton = 541,
    eProc_PadSetCenterposition = 542,
    eProc_PadSetMaximalValues = 543,
    eProc_ChangeTooFarLimit = 544,
    eProc_ChangeTransparencyZone = 545,
    eProc_SetBaseFrequenceForMenu = 546,
    eProc_SaveSinusContext = 547,
    eProc_RestoreSinusContext = 548,
    eProc_TextSuperImposed = 549,
    eProc_StartSubAnim = 550,
    eProc_StartSubAnimWithFrame = 551,
    eProc_StartSubAnimSmooth = 552,
    eProc_StartSubAnimSmoothWithFrame = 553,
    eProc_StopSubAnim = 554,
    eProc_WriteCBSubAnim = 555,
    eProc_EndSubAnim = 556,
    eProc_SetDynShadowLevel = 557,
    eProc_SetDynShadowClosed = 558,
    eProc_SetDynShadowSensitive = 559,
    eProc_SetCurrentLanguage = 560,
    eProc_CallSubRoutine = 561,
    eProc_ACTIndiquePlageValeur = 562,
    eProc_ActivateInternalLight = 563,
    eProc_SetInternalLightParams = 564,
    eProc_ToggleCinemascopeOn = 565,
    eProc_ToggleCinemascopeOff = 566,
    eProc_SetCinemascopeRatio = 567,
    eProc_Cam_UpdatePosition = 568,
    eProc_Cam_UpdatePositionLight = 569,
    eProc_Cam_ChangeShiftTarget = 570,
    eProc_Cam_ChangeShiftPos = 571,
    eProc_Cam_ChangeDistMin = 572,
    eProc_Cam_ChangeDistMax = 573,
    eProc_Cam_ChangeBoundDistMin = 574,
    eProc_Cam_ChangeBoundDistMax = 575,
    eProc_Cam_ChangeAngleAlpha = 576,
    eProc_Cam_ChangeAngleShiftAlpha = 577,
    eProc_Cam_ChangeAngleTheta = 578,
    eProc_Cam_ChangeAngleShiftTheta = 579,
    eProc_Cam_ChangeLinearSpeed = 580,
    eProc_Cam_ChangeLinearIncreaseSpeed = 581,
    eProc_Cam_ChangeLinearDecreaseSpeed = 582,
    eProc_Cam_ChangeAngularSpeed = 583,
    eProc_Cam_ChangeAngularIncreaseSpeed = 584,
    eProc_Cam_ChangeAngularDecreaseSpeed = 585,
    eProc_Cam_ChangeTargetSpeed = 586,
    eProc_Cam_ChangeTargetIncreaseSpeed = 587,
    eProc_Cam_ChangeTargetDecreaseSpeed = 588,
    eProc_Cam_ChangeFocal = 589,
    eProc_Cam_ChangeZMin = 590,
    eProc_Cam_ChangeZMax = 591,
    eProc_Cam_ChangeTgtPerso = 592,
    eProc_Cam_ChangeSecondTgtPerso = 593,
    eProc_Cam_ChangeChannel = 594,
    eProc_Cam_Activate = 595,
    eProc_Cam_AssociateViewport = 596,
    eProc_Cam_ResetIAFlags = 597,
    eProc_Cam_SetFlagNoDynamicTarget = 598,
    eProc_Cam_SetFlagNoAverageMoveTgtPerso = 599,
    eProc_Cam_SetFlagNoParseCutAngle = 600,
    eProc_Cam_SetFlagNoVisibility = 601,
    eProc_Cam_SetFlagNoVisibilityWithDynHie = 602,
    eProc_Cam_SetFlagNoDynChangeTheta = 603,
    eProc_Cam_SetFlagNoShiftUntilPosReached = 604,
    eProc_Cam_SetFlagNoDynSpeed = 605,
    eProc_Cam_ResetDNMFlags = 606,
    eProc_Cam_SetFlagNoLinearParsing = 607,
    eProc_Cam_SetFlagNoLinearInertia = 608,
    eProc_Cam_SetFlagNoAngularParsing = 609,
    eProc_Cam_SetFlagNoAngularInertia = 610,
    eProc_Cam_SetFlagNoTargetParsing = 611,
    eProc_Cam_SetFlagNoTargetInertia = 612,
    eProc_Cam_SetFlagFixedOrientation = 613,
    eProc_Cam_SetFlagNoObstacle = 614,
    eProc_Cam_SetFlagNoCollisionWhenNotMoving = 615,
    eProc_Cam_ChangeConstants = 616,
    eProc_Cam_SaveConstants = 617,
    eProc_Cam_RestoreConstants = 618,
    eProc_Cam_ShowInfo = 619,
    eProc_Cam_ForceTarget = 620,
    eProc_Cam_ForcePosition = 621,
    eProc_Cam_ForceRefAxis = 622,
    eProc_Cam_Reset = 623,
    eProc_Cam_ForceBestPos = 624,
    eProc_Cam_ForceNormalState = 625,
    eProc_Cam_ForceMovingOnRail = 626,
    eProc_Cam_SetCameraModeForEngine = 627,
    eProc_Cam_SetCameraTransparencyFlag = 628,
    eProc_InitCamShooter = 629,
    eProc_CSHRegisterIntegerVar = 630,
    eProc_CSHRegisterFloatVar = 631,
    eProc_CSHRegisterVectorVar = 632,
    eProc_CSHRegisterPersoVar = 633,
    eProc_CSHRegisterBooleanVar = 634,
    eProc_CSHGetViewFinderVMT = 635,
    eProc_CSHGetMAComports = 636,
    eProc_CSHInitBackMode = 637,
    eProc_CSHInitMarioMode = 638,
    eProc_CSHInitStrafeLockMode = 639,
    eProc_AddMainActor = 640,
    eProc_RemoveMainActor = 641,
    eProc_SetSkin = 642,
    eProc_SetGCubeVersion = 643,
    eProc_LinkInitAll = 644,
    eProc_SetAgoLink = 645,
    eProc_SetLag = 646,
    eProc_SetGaugeSpeed = 647,
    eProc_SetSendDataRate = 648,
    eProc_SetSendStatusPeriod = 649,
    eProc_SetLaunchSpeed = 650,
    eProc_SetFlagStraight = 651,
    eProc_SetUnlaunch = 652,
    eProc_LaunchAGO = 653,
    eProc_SetAGOClipping = 654,
    eProc_SetInGameMenu = 655,
    eProc_JffTxt_Affiche = 656,
    eProc_JffTxt_AfficheVmsInitPause = 657,
    eProc_JffTxt_AffichePadInitPause = 658,
    eProc_JffTxt_AfficheMultitapInitPause = 659,
    eProc_JffTxt_DemoPressStart = 660,
    eProc_JffTxt_Extend = 661,
    eProc_JffTxt_Modify = 662,
    eProc_JffTxt_PauseDrawStringGame = 663,
    eProc_JffTxt_PauseDrawStringInv = 664,
    eProc_JffTxt_PauseEnable = 665,
    eProc_JffTxt_IAmInTheInventory = 666,
    eProc_JffTxt_PauseInitVars = 667,
    eProc_JffTxt_SetColor = 668,
    eProc_JffTxt_SetTransp = 669,
    eProc_JffTxt_DoFadeIn = 670,
    eProc_JffTxt_DoFadeOut = 671,
    eProc_JffTxt_SetFrameMode = 672,
    eProc_JffTxt_GetBdBox = 673,
    eProc_FadeIn = 674,
    eProc_FadeOut = 675,
    eProc_CheatDoubleSpeed = 676,
    eProc_CheatInvertPad = 677,
    eProc_CheatRandomPad = 678,
    eProc_CheatRandomVignette = 679,
    eProc_MultiPlayer_SetAspectRatio = 680,
    eProc_MultiPlayer_SetNumberOfPlayers = 681,
    eProc_MultiPlayer_SetPlayerForViewport = 682,
    eProc_MultiPlayer_InvertViewports = 683,
    eProc_MultiPlayer_LanceIcone = 684,
    eProc_MultiPlayer_LanceGauge = 685,
    eProc_MultiPlayer_LanceBitmapFile = 686,
    eProc_MultiPlayer_LanceBitmapMemory = 687,
    eProc_MultiPlayer_JFFTXT_Affiche = 688,
    eProc_MultiPlayer_JFFTXT_AfficheOver3D = 689,
    eProc_MultiPlayer_JFFTXT_AfficheOver3DAttenuated = 690,
    eProc_MultiPlayer_SetViewportSizeAndPos = 691,
    eProc_MultiPlayer_SetViewportDisplayOrder = 692,
    eProc_SinEffect_SetSinusPreMultiplier = 693,
    eProc_MultiPlayer_LanceMask = 694,
    eProc_MultiPlayer_LanceBlur = 695,
    eProc_MultiPlayer_Prepare2DSprite = 696,
    eProc_PrintInLogWindow = 697,
    eProc_TransitionDeRLI = 698,
    eProc_AjoutDeRLI = 699,
    eProc_BlockingRLITransitions = 700,
    eProc_EnqueueVideo = 701,
    eProc_PlayVideo = 702,
    eProc_PlayVideoAfterLevel = 703,
    eProc_VideoQuality = 704,
    eProc_SetVsyncWait = 705,
    eProc_ActiveBrainDuringTransitions = 706,
    eProc_DeactiveBrainDuringTransitions = 707,
    eProc_DisplaySegment = 708,
    eProc_EndTransition = 709,
    eProc_StartCine = 710,
    eProc_EndCine = 711,
    eProc_SkipLoading_SetLoadingLevel = 712,
    eProc_SetDataPath = 713,
    eProc_SAV2_DeclareField = 714,
    eProc_SAV2_DeleteField = 715,
    eProc_SAV2_DeleteAllPipeline = 716,
    eProc_SAV2_DeleteAll = 717,
    eProc_SAV2_SetValue = 718,
    eProc_SAV2_SetValueIndex = 719,
    eProc_SAV2_AddSingleValueInPipeline = 720,
    eProc_SAV2_AddSingleValueForSave = 721,
    eProc_SAV2_GetValueString = 722,
    eProc_SAV2_GetValueStringIndex = 723,
    eProc_SAV2_AddArrayInPipeline = 724,
    eProc_SAV2_AddArrayForSave = 725,
    eProc_SAV2_GetArray = 726,
    eProc_SAV2_AutoSaveOnDisk = 727,
    eProc_SAV2_SaveOnDisk = 728,
    eProc_SAV2_LoadOnDisk = 729,
    eProc_SAV2_RemoveSaveOnDisk = 730,
    eProc_SAV2_ActualizeExistingSave = 731,
    eProc_SAV2_GetSaveNameFromSaveNumber = 732,
    eProc_SCT_EnableSectorSynchro = 733,
    eProc_SCT_DisableSectorSynchro = 734,
    eProc_ActivePortal = 735,
    eProc_DeactivePortal = 736,
    eProc_LogFileCreate = 737,
    eProc_LogFileAdd = 738,
    eProc_LogFileSeparator = 739,
    eProc_FFBStartPreCreatedEffect = 740,
    eProc_FFBStopPreCreatedEffect = 741,
    eProc_FFBStopAllEffectForAPad = 742,
    eProc_FFBStopAllEffectForAllPad = 743,
    eProc_FFBPauseAllEffectForAllPad = 744,
    eProc_FFBResumeAllEffectForAllPad = 745,
    eProc_FFBDeletePreCreatedEffect = 746,
    eProc_FFBDeleteAllPreCreatedEffectForAPad = 747,
    eProc_FFBDeleteAllPreCreatedEffectForAllPad = 748,
    eProc_FFBStopEffect = 749,
    eProc_SND_SetMechaSoundCharacter = 750,
    eProc_SND_SetMicroActivation = 751,
    eProc_SND_SaveCurrentTheme = 752,
    eProc_SND_RestoreLastTheme = 753,
    eProc_SND_SendSoundRequest = 754,
    eProc_SND_SendVoiceRequest = 755,
    eProc_SND_SendVoiceRequestWithLipsChannel = 756,
    eProc_SND_SendVoiceRequestWithLipsAuto = 757,
    eProc_SND_SendMusicRequest = 758,
    eProc_SND_SendMusicRequestWithMarkers = 759,
    eProc_SND_SendAmbianceRequest = 760,
    eProc_SND_SendMenuSndRequest = 761,
    eProc_SND_SendSoundRequestSemaphore = 762,
    eProc_SND_SendVoiceRequestSemaphore = 763,
    eProc_SND_SendVoiceRequestWithLipsChannelSemaphore = 764,
    eProc_SND_SendMusicRequestSemaphore = 765,
    eProc_SND_SendAmbianceRequestSemaphore = 766,
    eProc_SND_SendMenuSndRequestSemaphore = 767,
    eProc_SND_ChangeVolumeIdAmbiance = 768,
    eProc_SND_ChangeVolumeIdVoice = 769,
    eProc_SND_ChangeVolumeIdMusic = 770,
    eProc_SND_StopSound = 771,
    eProc_SND_StopVoice = 772,
    eProc_SND_StopMusic = 773,
    eProc_SND_StopAmbiance = 774,
    eProc_SND_StopMenuSnd = 775,
    eProc_SND_StopAllRequests = 776,
    eProc_SND_StopLipsChannel = 777,
    eProc_SND_StopLipsChannelAuto = 778,
    eProc_SND_SetSemaphoreCapacity = 779,
    eProc_SND_KillSemaphore = 780,
    eProc_SND_LoadBank = 781,
    eProc_SND_UnloadBank = 782,
    eProc_SND_SetVolumeSound = 783,
    eProc_SND_SetVolumeVoice = 784,
    eProc_SND_SetVolumeMusic = 785,
    eProc_SND_SetVolumeAmbiance = 786,
    eProc_SND_SetVolumeMenuSnd = 787,
    eProc_SND_ChangeVolumeSound = 788,
    eProc_SND_ChangeVolumeVoice = 789,
    eProc_SND_ChangeVolumeMusic = 790,
    eProc_SND_ChangeVolumeAmbiance = 791,
    eProc_SND_ChangeVolumeMenuSnd = 792,
    eProc_SND_PauseSound = 793,
    eProc_SND_PauseVoice = 794,
    eProc_SND_PauseMusic = 795,
    eProc_SND_PauseAmbiance = 796,
    eProc_SND_PauseMenuSound = 797,
    eProc_SND_PauseAllRequests = 798,
    eProc_SND_ResumeSound = 799,
    eProc_SND_ResumeVoice = 800,
    eProc_SND_ResumeMusic = 801,
    eProc_SND_ResumeAmbiance = 802,
    eProc_SND_ResumeMenuSound = 803,
    eProc_SND_ResumeAllRequests = 804,
    eProc_SND_SetDopplerEffect = 805,
    eProc_SND_SetInStereoMode = 806,
    eProc_SND_SetPrevMusicFadeOut = 807,
    eProc_SND_SetRollOffDistances = 808,
    eProc_SND_SetDefaultRollOffDistances = 809,
    eProc_SND_SaveSoundEventInSlotMemory = 810,
    eProc_SND_RestoreSoundEventInSlotMemory = 811,
    eProc_SND_ResetMusicMarkerSlot = 812,
    eProc_SND_PS2ChangeReverb = 813,
    eProc_SND_PS2SetReverbOn = 814,
    eProc_SND_SendJingleRequest = 815,
    eProc_SetSingleplayerMode = 816,
    eProc_SetMultiplayerMode = 817,
    eProc_DoNotLoadTextures = 818,
    eProc_DoNotLoadMaterialTextures = 819,
    eProc_SetFamilyToLoad = 820,
    eProc_SetActorToLoad = 821,
    eProc_MonitoringStart = 822,
    eProc_MonitoringStop = 823,
    eProc_TobyCreate = 824,
    eProc_TobyAddSegment = 825,
    eProc_TobySetTransparency = 826,
    eProc_TobyDestroy = 827,
    eProc_TobySetMaterial = 828,
    eProc_EnableWidescreen = 829,
    eProc_DisableWidescreen = 830,
    eProc_SetDisplayFrequency = 831,
    eProc_SetSaveGameAccessType = 832,
    eProc_SetFakeSpeedPercentage = 833,
    eProc_ExitFromDemo = 834,
    eProc_SetCurrentValueAsInit = 835,
    eProc_SetCheapCharacterListMinDistance = 836,
    eProc_SetCheapCharacterListMaxDistance = 837,
    eProc_SetCheapCharacterListTimer = 838,
    eProc_SetCheapCharacterListRefObj = 839,
    eProc_SetCheapCharacterListMode = 840,
    eProc_SetCheapCharacterListAura = 841,
    eProc_SetCheapCharacterNewPos = 842,
    eProc_SetCheapCharacterNewDir = 843,
    eProc_AddCheapCharacter = 844,
    eProc_ResetCheapCharacterList = 845,
    eProc_ActivateCheapCharacter = 846,
    eProc_DesactivateCheapCharacter = 847,
    eProc_SetCheapCharacterOptions = 848,
    eProc_R3SetScore = 849,
    eProc_R3SetNbCage = 850,
    eProc_R3SetCurrentEnvNumber = 851,
    eProc_R3SetNbCineOpen = 852,
    eProc_R3SetNbBonusOpen = 853,
    eProc_R3SetAutoSave = 854,
    eProc_R3SetEndOfGame = 855,
    eProc_WaterEffect_SetRandomPerturbationGeneration = 856,
    eProc_WaterEffect_GenerateImpulse = 857,
    eProc_WaterEffect_GenerateSplash = 858,
    eProc_AGO_Kill = 859,
    eProc_AGO_ReInit = 860,
    eProc_TakePicture = 861,
    eProc_ReleasePicture = 862,
    eProc_SFX_ActivateLightReflection = 863,
    eProc_SFX_ActivateWaterCircles = 864,
    eProc_SetActiveMcSlot = 865,
    eProc_GcResetToIpl = 866,
    eProc_ChangeActionSmoothProportional = 867,
    eProc_ChangeActionSmoothSymetric = 868,
    eProc_ChangeActionSmoothNoSpeed = 869,
    eProc_Begin2DMenu = 870,
    eProc_Begin2DMenuStart = 871,
    eProc_Begin2DMenuPhoto = 872,
    eProc_Begin2DMenuBonus = 873,
    eProc_Begin2DMenuBonusExit = 874,
    eProc_AllowNormalsRecomputing = 875,
    eNbProcedure = 876,
} tdeProcedureId_;

typedef enum tdeOperatorId_ {
    eOperator_ScalarPlusScalar = 0,
    eOperator_ScalarMinusScalar = 1,
    eOperator_ScalarMulScalar = 2,
    eOperator_ScalarDivScalar = 3,
    eOperator_ScalarUnaryMinus = 4,
    eOperator_ScalarModulo = 5,
    eOperator_PlusAffect = 6,
    eOperator_MinusAffect = 7,
    eOperator_MulAffect = 8,
    eOperator_DivAffect = 9,
    eOperator_PlusPlusAffect = 10,
    eOperator_MinusMinusAffect = 11,
    eOperator_Affect = 12,
    eOperator_Dot = 13,
    eOperator_GetVectorX = 14,
    eOperator_GetVectorY = 15,
    eOperator_GetVectorZ = 16,
    eOperator_VectorPlusVector = 17,
    eOperator_VectorMinusVector = 18,
    eOperator_VectorUnaryMinus = 19,
    eOperator_VectorMulScalar = 20,
    eOperator_VectorDivScalar = 21,
    eOperator_SetVectorX = 22,
    eOperator_SetVectorY = 23,
    eOperator_SetVectorZ = 24,
    eOperator_Ultra = 25,
    eOperator_ModelCast = 26,
    eOperator_Array = 27,
    eOperator_AffectArray = 28,
    eNbOperator = 29,
} tdeOperatorId_;

typedef enum tdeSOL_ObjType_ {
    eSOL_Error = 0,
    eSOL_SPO = 1,
    eSOL_Character = 2,
    eSOL_Waypoint = 3,
} tdeSOL_ObjType_;

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

typedef enum tdeSOL_ObjPersistence_ {
    eSOL_UnknownPersistence = 0,
    eSOL_Persistent = 1,
    eSOL_NonPersistent = 2,
} tdeSOL_ObjPersistence_;

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

typedef enum SAV2_tdeDataType_ {
    SAV2_eU8 = 1,
    SAV2_eU16 = 2,
    SAV2_eU32 = 3,
    SAV2_eFloat = 4,
    SAV2_eVector = 5,
    SAV2_eString = 6,
    SAV2_eNbType = 7,
} SAV2_tdeDataType_;

typedef enum e_ucListViewport_ {
    CAM_e_NoViewport = -1,
} e_ucListViewport_;

typedef enum tdeMetaActionId_ {
    eMetaAction_FrozenWait = 0,
    eMetaAction_ExecuteAction = 1,
    eMetaAction_ExecuteActionSmooth = 2,
    eMetaAction_WaitEndOfAction = 3,
    eMetaAction_WaitEndOfAnim = 4,
    eMetaAction_CamCineMoveAToBTgtC = 5,
    eMetaAction_CamCineMoveAToBTgtAC = 6,
    eMetaAction_CamCinePosATgtB = 7,
    eMetaAction_CamCinePosAMoveTgtBToC = 8,
    eMetaAction_CamCinePosATgtBTurnPosH = 9,
    eMetaAction_CamCinePosATgtBTurnTgtH = 10,
    eMetaAction_CamCinePosATgtBTurnPosV = 11,
    eMetaAction_CamCinePosATgtBTurnTgtV = 12,
    eNbMetaAction = 13,
} tdeMetaActionId_;

typedef enum e_ucCameraStates_ {
    CAM_e_State_GoToOptimal = 0,
    CAM_e_State_GoToComputedOptimal = 1,
    CAM_e_State_FailureVisibility = 2,
    CAM_e_State_FailureVisibilityWithoutCut = 3,
    CAM_e_TempState_GhostMode = 4,
    CAM_e_TempState_ApexMode = 5,
} e_ucCameraStates_;

union tduIdInterpret_ {
    tdeCondId_ eCondId; /* +0x0 */
    tdeKeyWordId_ eKeyWordId; /* +0x0 */
    tdeOperatorId_ eOperatorId; /* +0x0 */
    tdeFuncId_ eFuncId; /* +0x0 */
    tdeProcedureId_ eProcedureId; /* +0x0 */
    tdeFieldId_ eFieldId; /* +0x0 */
    tdeMetaActionId_ eMetaActionId; /* +0x0 */
    IPT_tdstEntryElement_* hInputAction; /* +0x0 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
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

union anon_3 {
    tduIdInterpret_ uId; /* +0x0 */
    tduGetSetParamForNode_ uParam; /* +0x0 */
};

struct tdstNodeInterpret_ {
    anon_3 uDummy; /* +0x0 */
    unsigned short uwNodeToSkip; /* +0x4 */
    unsigned char ucDepth; /* +0x6 */
    unsigned char eType; /* +0x7 */
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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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

struct tduGetSetParam_ {
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

struct anon_6 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_6 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct tdstComport_ {
    tdstTreeInterpret_* p_stRules; /* +0x0 */
    tdstTreeInterpret_* p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct tdstArray_ {
    tdeDsgVarTypeId_ eType; /* +0x0 */
    unsigned char ucMaxSize; /* +0x4 */
    tduGetSetParamForNode_ d_ArrayElement[255]; /* +0x8 */
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

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct tdstTreeInterpret_ {
    tdstNodeInterpret_* p_stNodeInterpret; /* +0x0 */
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

struct _tdstCheapCharacter {
    MTH4D_tdstVector_ stPosition; /* +0x0 */
    MTH4D_tdstVector_ stDirection; /* +0x10 */
    unsigned int lTakenTime; /* +0x20 */
    char cActivity; /* +0x24 */
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

struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    HIE_tdstSuperObject_* m_hSuperObject; /* +0x10 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
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

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
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

struct anon_0 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_1 {
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
    anon_0 m_stData6; /* +0x34 */
    anon_1 m_stData7; /* +0x44 */
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

struct tdstList_ {
    unsigned char ucNbElt; /* +0x0 */
    unsigned char ucMaxSize; /* +0x1 */
    HIE_tdstSuperObject_** p_hTabElt; /* +0x4 */
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

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
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

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct anon_4 {
    HIE_tdstSuperObject_* hPersoToMove; /* +0x0 */
    HIE_tdstSuperObject_* hRefPerso; /* +0x4 */
    unsigned char ucRefChannel; /* +0x8 */
    MTH3D_tdstVector_ stShift; /* +0xc */
};

struct anon_5 {
    HIE_tdstSuperObject_* hPerso; /* +0x0 */
    MTH3D_tdstVector_ stImposedAxis; /* +0x4 */
    MTH3D_tdstVector_ stProposedAxis; /* +0x10 */
    unsigned short uwMode; /* +0x1c */
    unsigned char bGlobalVectors; /* +0x1e */
};

struct AI_tdstBatchOrder_ {
    anon_4 SetPersoAtModPos; /* +0x0 */
    anon_5 SetPersoOrientation; /* +0x0 */
    unsigned char ucBatchOrderType; /* +0x20 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
};

struct LST2_tdstAnchorTotdxHandleToTransitionOpt {
    tdstTransition_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToProhibitOpt {
    tdstProhibit_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct stTfmtStatus_ {
    float xScreenWidth; /* +0x0 */
    float xBaseCharX; /* +0x4 */
    float xBaseCharZ; /* +0x8 */
    float xBaseToAddX; /* +0xc */
    float xRandomPosRadius; /* +0x10 */
    float xCharWidth; /* +0x14 */
    float xLineHeight; /* +0x18 */
    float xCharZoom; /* +0x1c */
    float xCurCharZoom; /* +0x20 */
    float xCurCharWidth; /* +0x24 */
    tdstObjectsTablesList_* hSourceObjectTable; /* +0x28 */
    char cJustificationMode; /* +0x2c */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct tdstSuperObjectLinks_ {
    HIE_tdstSuperObject_* h_SPORef; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ POS_SPO_Init; /* +0x10 */
    unsigned int ulNbLinkedObjects; /* +0x70 */
    unsigned int ulNbLinksAllocated; /* +0x74 */
    int LinkedObj; /* +0x78 */
    tdeSOL_ObjType_* eTypeOfLinkedObj; /* +0x7c */
    MAT_tdstTransformation_* POS_InitOfLinkedObj; /* +0x80 */
    tdeSOL_ObjPersistence_* ePersistenceOfLinkedObj; /* +0x84 */
};

struct tdstScriptAI_ {
    tdstComport_* p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
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

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct tdstActionTable_ {
    tdstActionTableEntry_* p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstDsgVarInfo_ {
    unsigned int ulOffsetInDsgMem; /* +0x0 */
    tdeDsgVarTypeId_ eDsgVarTypeId; /* +0x4 */
    unsigned short eSaveType; /* +0x8 */
    tdeObjectTreeInit_ eInitType; /* +0xc */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
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

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
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

struct LST2_tdstAnchorToWP_tdHandleOfArcDyn {
    WP_tdstArc_* hFirstElementDyn; /* +0x0 */
    WP_tdstArc_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstListOfArc_ {
    LST2_tdstAnchorToWP_tdHandleOfArcDyn m_hArc; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct tdstFogParams_ {
    float xDepthStart; /* +0x0 */
    float xDepthEnd; /* +0x4 */
    float xInfinite; /* +0x8 */
    float xBlendStart; /* +0xc */
    float xBlendEnd; /* +0x10 */
    GEO_tdstColor_ stColor; /* +0x14 */
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

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    tdstDsgVarInfo_* p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct tdstIntelligence_ {
    tdstScriptAI_** p_p_stScriptAI; /* +0x0 */
    tdstNodeInterpret_* p_stCurrentSchedule; /* +0x4 */
    tdstComport_* p_stCurrentComport; /* +0x8 */
    tdstComport_* p_stPrevComport; /* +0xc */
    tdstActionTable_* p_stActionTable; /* +0x10 */
    unsigned int ulNoComportInit; /* +0x14 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstDsgMem_ {
    tdstDsgVar_** p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct tdstMacro_ {
    tdstTreeInterpret_* p_stInitTree; /* +0x0 */
    tdstTreeInterpret_* p_stCurrentTree; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct WP_tdstArc_ {
    WP_tdstArc_* hNextBrotherDyn; /* +0x0 */
    WP_tdstArc_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToWP_tdHandleOfArcDyn* hFatherDyn; /* +0x8 */
    WP_tdstGraphNode_* m_hNode; /* +0xc */
    unsigned int m_ulCapability; /* +0x10 */
    unsigned int m_ulCapabilityInit; /* +0x14 */
    int m_lWeight; /* +0x18 */
    int m_lWeightInit; /* +0x1c */
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

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct tdstListOfMacro_ {
    tdstMacro_* p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
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

struct tdstTransition_ {
    tdstState_* h_TargetState; /* +0x0 */
    tdstState_* h_StateToGo; /* +0x4 */
    unsigned char ucLinkingType; /* +0x8 */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SVG_stMCStatus_ {
    int iPort; /* +0x0 */
    int iSlot; /* +0x4 */
    int iStatus; /* +0x8 */
};

struct tdstProhibit_ {
    tdstState_* h_ProhibitedState; /* +0x0 */
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

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_2 {
    int iMagicPoints4Ray; /* +0x0 */
    int iMagicPointsMax4Ray; /* +0x4 */
    float xAirPoints4Ray; /* +0x8 */
    float xAirPointsMax4Ray; /* +0xc */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct _stMenuPause {
    int pauseEnabled; /* +0x0 */
    int lIAmInTheInventory; /* +0x4 */
    int NumeroVp; /* +0x8 */
    float xXXXTransparency; /* +0xc */
    unsigned int ulTimer; /* +0x10 */
    int iVmsStringNumber; /* +0x14 */
    MTH3D_tdstVector_ stVmsPosition; /* +0x18 */
    float xVmsParameterInit; /* +0x24 */
    float xVmsParameter; /* +0x28 */
    int pszVmsString; /* +0x2c */
    char szVmsStringToDraw[256]; /* +0x30 */
    long lVmsPad; /* +0x130 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x134..0x137 */
    int iPadStringNumber; /* +0x138 */
    MTH3D_tdstVector_ stPadPosition; /* +0x13c */
    float xPadParameterInit; /* +0x148 */
    float xPadParameter; /* +0x14c */
    char pszPadString[256]; /* +0x150 */
    char szPadStringToDraw[256]; /* +0x250 */
    int pszMultitapString; /* +0x350 */
    int iDemoStringNumber; /* +0x354 */
    MTH3D_tdstVector_ stDemoPosition; /* +0x358 */
    float xDemoParameterInit; /* +0x364 */
    float xDemoParameter; /* +0x368 */
    int pszDemoString; /* +0x36c */
    char szDemoStringToDraw[256]; /* +0x370 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

unsigned char AI_g_ucLastMarioPadUsed;
unsigned char g_DoAutoSaveWhenChangeMap;
char TEXT_gc_ViewportFixed;
unsigned int g_bNoInterpolationForThisSPOMove;
unsigned int g_lNbListOfCheapCharacterList;
unsigned char g_bNoSpeedForIntermAnim;
int iNumLoop;
int AGO_g_SuperObjectForAGOs;
unsigned char g_bInGameMenu;
int g_PauseStringNumber;
int GlobalLoopInit[50];
int GlobalLoopTree[50];
int GlobalLoopCpt[50];
_tdstCheapCharacterList g_aListOfCheapCharacterList[10];
float TEXT_gaf_FloatParameters[10];
int TEXT_gai_IntParameters[10];
static unsigned short AI_gs_uwNbrBatchOrder;
static AI_tdstBatchOrder_ AI_gs_a_stBatchSetPersoTab[20];
_stMenuPause myMenuPause;
int g_iFalseTime;
int MC_ManagmentState;
int GLI_g_bWideScreenMode;
tdstEngineStructure_ g_stEngineStructure;
char g_CurrentSaveName;
unsigned short GAM_g_uwLoadingLevel;
int bChangedGamedataDirectory;
unsigned char g_bSectorDisplayPriorityFixed;
unsigned char g_a4_ucSectorDisplayPriority[4];
signed char INO_aJoyUsedByAI;
SVG_stMCStatus_ g_axPadMapping;
int g_GameHasNotStartedTheFirstBootCheck;
int AGO_g_iIndexOfClippedSprite;
int HIE_gs_lCurrentFrame;
int (*fni_CompareFloatLess)(void*, void*);
int (*fni_CompareFloatGreater)(void*, void*);
int (*fni_CompareIntegerLess)(void*, void*);
int (*fni_CompareIntegerGreater)(void*, void*);
anon_2 stExtendDatas4Ray;
float MEC_g_xClimbSpeedLimit;
int COLANTIBUG_hHandleOfCharacter;
float MEC_g_xWalkCoeff;
float MEC_g_xBaseCoeff;
char GLI_cGlobalFogIsOn;
unsigned char GLI_g_bSaveFog;
tdstFogParams_ GLI_g_stSaveFog;
float GLI_xFogBlendFar;
float GLI_xFogBlendNear;
float GLI_xFogInfinite;
float GLI_xFogFar;
float GLI_xFogNear;
GEO_tdstColor_ GLI_stFogColor;
int gp_stDynamicWorld;
unsigned char g_ucUseDefaultActionReturn;
unsigned char g_ucNewActionReturn;
char SAV2_g_LevelNameToSave[20];
int GLI_g_PerformAutosaveAfterVideo;
unsigned int g_ulOverRideRayTraceSpoMask;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6951–6965 */
/* addr: 0x002239d0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6951
 *   +0x0008 -> line 6955
 *   +0x000c -> line 6951
 *   +0x0014 -> line 6955
 *   +0x001c -> line 6956
 *   +0x0020 -> line 6955
 *   +0x0024 -> line 6956
 *   +0x004c -> line 6958
 *   +0x0054 -> line 6960
 *   +0x006c -> line 6963
 *   +0x007c -> line 6965
 *   +0x0088 -> line 6964
 *   +0x008c -> line 6965
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);

tdstNodeInterpret_* fn_p_stAllowNormalsRecomputing(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6916–6940 */
/* addr: 0x00223a70  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6916
 *   +0x0004 -> line 6919
 *   +0x0008 -> line 6916
 *   +0x0010 -> line 6917
 *   +0x0014 -> line 6919
 *   +0x0050 -> line 6922
 *   +0x0058 -> line 6923
 *   +0x0060 -> line 6925
 *   +0x0068 -> line 6926
 *   +0x0070 -> line 6928
 *   +0x0078 -> line 6929
 *   +0x0080 -> line 6931
 *   +0x0088 -> line 6932
 *   +0x0090 -> line 6934
 *   +0x0098 -> line 6939
 *   +0x009c -> line 6940
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st2DMenuProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case eProc_Begin2DMenu:
        ActivateInGameMenu2D();
        break;
    case eProc_Begin2DMenuStart:
        ActivateInGameMenu2DStart();
        break;
    case eProc_Begin2DMenuPhoto:
        ActivateInGameMenu2DPhoto();
        break;
    case eProc_Begin2DMenuBonus:
        ActivateInGameMenu2DBonus(0);
        break;
    case eProc_Begin2DMenuBonusExit:
        ActivateInGameMenu2DBonus(1);
        break;
    default:
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6901–6901 */
/* addr: 0x00223b20  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6901
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGcResetToIpl(tdstNodeInterpret_* p_stTree, tdstNodeInterpret_* p_stTree2)
{
    return p_stTree2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6875–6887 */
/* addr: 0x00223b30  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6875
 *   +0x0008 -> line 6879
 *   +0x0010 -> line 6887
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGcSetActiveMcSlot(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int stParam[4];
    return fn_p_stEvalTree(p_SuperObjPerso, p_stTree, (tdstGetSetParam_*)stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6852–6866 */
/* addr: 0x00223b50  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6852
 *   +0x0008 -> line 6857
 *   +0x0014 -> line 6858
 *   +0x0018 -> line 6857
 *   +0x001c -> line 6858
 *   +0x0034 -> line 6866
 *   +0x003c -> line 6865
 *   +0x0040 -> line 6866
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSFX_ActivateWaterCircles(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6834–6848 */
/* addr: 0x00223ba0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6834
 *   +0x0008 -> line 6839
 *   +0x0014 -> line 6840
 *   +0x0018 -> line 6839
 *   +0x001c -> line 6840
 *   +0x0034 -> line 6848
 *   +0x003c -> line 6847
 *   +0x0040 -> line 6848
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSFX_ActivateLightReflection(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6754–6777 */
/* addr: 0x00223bf0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6754
 *   +0x0008 -> line 6761
 *   +0x000c -> line 6754
 *   +0x0014 -> line 6761
 *   +0x0020 -> line 6765
 *   +0x002c -> line 6769
 *   +0x0040 -> line 6770
 *   +0x005c -> line 6777
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stWaterEffect_GenerateSplash(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6737–6750 */
/* addr: 0x00223c60  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6737
 *   +0x0008 -> line 6742
 *   +0x0010 -> line 6750
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stWaterEffect_GenerateImpulse(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int stParam[4];
    return fn_p_stEvalTree(p_SuperObjPerso, p_stTree, (tdstGetSetParam_*)stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6714–6733 */
/* addr: 0x00223c80  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6714
 *   +0x0008 -> line 6720
 *   +0x000c -> line 6714
 *   +0x0018 -> line 6720
 *   +0x0020 -> line 6721
 *   +0x0024 -> line 6720
 *   +0x0028 -> line 6721
 *   +0x0044 -> line 6724
 *   +0x004c -> line 6725
 *   +0x0068 -> line 6733
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stWaterEffect_SetRandomPerturbationGeneration(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6636–6695 */
/* addr: 0x00223d00  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6636
 *   +0x0014 -> line 6651
 *   +0x0030 -> line 6654
 *   +0x0058 -> line 6693
 *   +0x005c -> line 6695
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCurrentValueAsInit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6612–6630 */
/* addr: 0x00223d70  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6612
 *   +0x0004 -> line 6617
 *   +0x0008 -> line 6612
 *   +0x000c -> line 6613
 *   +0x0010 -> line 6617
 *   +0x0020 -> line 6620
 *   +0x002c -> line 6630
 *   +0x0030 -> line 6629
 *   +0x0034 -> line 6630
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDemoProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6591–6609 */
/* addr: 0x00223db0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6591
 *   +0x0004 -> line 6596
 *   +0x0008 -> line 6591
 *   +0x000c -> line 6592
 *   +0x0010 -> line 6596
 *   +0x0020 -> line 6599
 *   +0x002c -> line 6602
 *   +0x0034 -> line 6609
 *   +0x0038 -> line 6608
 *   +0x003c -> line 6609
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBulletTimeProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6569–6588 */
/* addr: 0x00223e00  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6569
 *   +0x0004 -> line 6575
 *   +0x0008 -> line 6569
 *   +0x000c -> line 6570
 *   +0x0010 -> line 6575
 *   +0x0020 -> line 6578
 *   +0x002c -> line 6581
 *   +0x0034 -> line 6588
 *   +0x0038 -> line 6587
 *   +0x003c -> line 6588
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMCProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6519–6565 */
/* addr: 0x00223e50  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6519
 *   +0x0004 -> line 6523
 *   +0x0008 -> line 6519
 *   +0x0010 -> line 6520
 *   +0x0014 -> line 6523
 *   +0x0038 -> line 6527
 *   +0x003c -> line 6529
 *   +0x0044 -> line 6534
 *   +0x004c -> line 6540
 *   +0x0054 -> line 6542
 *   +0x0058 -> line 6540
 *   +0x005c -> line 6542
 *   +0x0068 -> line 6545
 *   +0x0070 -> line 6549
 *   +0x0078 -> line 6553
 *   +0x0080 -> line 6564
 *   +0x0084 -> line 6565
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stScreenProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6494–6509 */
/* addr: 0x00223ef0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6494
 *   +0x0008 -> line 6499
 *   +0x000c -> line 6494
 *   +0x0014 -> line 6499
 *   +0x001c -> line 6503
 *   +0x0020 -> line 6499
 *   +0x0024 -> line 6501
 *   +0x0028 -> line 6503
 *   +0x0034 -> line 6504
 *   +0x003c -> line 6506
 *   +0x0048 -> line 6508
 *   +0x004c -> line 6509
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stAddMemoryCardString(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char* pszString;
    int pos;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6476–6490 */
/* addr: 0x00223f50  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6476
 *   +0x0008 -> line 6479
 *   +0x0014 -> line 6486
 *   +0x0020 -> line 6489
 *   +0x0024 -> line 6490
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stValidateMemoryCard(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6457–6471 */
/* addr: 0x00223f90  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6457
 *   +0x0008 -> line 6462
 *   +0x000c -> line 6457
 *   +0x0018 -> line 6462
 *   +0x0020 -> line 6463
 *   +0x0024 -> line 6462
 *   +0x0028 -> line 6463
 *   +0x0050 -> line 6466
 *   +0x005c -> line 6469
 *   +0x0064 -> line 6466
 *   +0x0068 -> line 6469
 *   +0x0070 -> line 6470
 *   +0x0074 -> line 6471
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTobySetMaterial(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6445–6454 */
/* addr: 0x00224020  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6445
 *   +0x0008 -> line 6449
 *   +0x000c -> line 6445
 *   +0x0010 -> line 6449
 *   +0x0018 -> line 6450
 *   +0x001c -> line 6449
 *   +0x0020 -> line 6450
 *   +0x0048 -> line 6452
 *   +0x0054 -> line 6453
 *   +0x0058 -> line 6454
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTobyDestroy(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6427–6441 */
/* addr: 0x00224090  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6427
 *   +0x0008 -> line 6432
 *   +0x000c -> line 6427
 *   +0x0018 -> line 6432
 *   +0x0020 -> line 6433
 *   +0x0024 -> line 6432
 *   +0x0028 -> line 6433
 *   +0x0050 -> line 6435
 *   +0x005c -> line 6438
 *   +0x0064 -> line 6435
 *   +0x0068 -> line 6438
 *   +0x0070 -> line 6440
 *   +0x0074 -> line 6441
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTobySetTransparency(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6407–6423 */
/* addr: 0x00224120  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6407
 *   +0x0008 -> line 6412
 *   +0x000c -> line 6407
 *   +0x0018 -> line 6412
 *   +0x0020 -> line 6413
 *   +0x0024 -> line 6412
 *   +0x0028 -> line 6413
 *   +0x0050 -> line 6415
 *   +0x005c -> line 6416
 *   +0x006c -> line 6418
 *   +0x0074 -> line 6416
 *   +0x0078 -> line 6418
 *   +0x0080 -> line 6419
 *   +0x0084 -> line 6418
 *   +0x0088 -> line 6419
 *   +0x0094 -> line 6421
 *   +0x00a0 -> line 6419
 *   +0x00a4 -> line 6421
 *   +0x00ac -> line 6422
 *   +0x00b0 -> line 6423
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stAddSegmentToToby(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    MTH3D_tdstVector_ stPt2;
    MTH3D_tdstVector_ stPt1;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6390–6403 */
/* addr: 0x002241f0  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6390
 *   +0x0008 -> line 6394
 *   +0x000c -> line 6390
 *   +0x001c -> line 6394
 *   +0x0024 -> line 6395
 *   +0x0028 -> line 6394
 *   +0x002c -> line 6395
 *   +0x005c -> line 6397
 *   +0x006c -> line 6398
 *   +0x0070 -> line 6397
 *   +0x0074 -> line 6398
 *   +0x009c -> line 6400
 *   +0x00b0 -> line 6402
 *   +0x00b4 -> line 6403
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCreateToby(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    long ID;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6378–6384 */
/* addr: 0x002242c0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6378
 *   +0x0008 -> line 6381
 *   +0x000c -> line 6378
 *   +0x0010 -> line 6381
 *   +0x0018 -> line 6382
 *   +0x001c -> line 6381
 *   +0x0020 -> line 6382
 *   +0x0050 -> line 6383
 *   +0x0054 -> line 6384
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMonitoringStop(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6369–6375 */
/* addr: 0x00224330  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6369
 *   +0x0008 -> line 6372
 *   +0x000c -> line 6369
 *   +0x0010 -> line 6372
 *   +0x0018 -> line 6373
 *   +0x001c -> line 6372
 *   +0x0020 -> line 6373
 *   +0x0050 -> line 6374
 *   +0x0054 -> line 6375
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMonitoringStart(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6347–6365 */
/* addr: 0x002243a0  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6347
 *   +0x0010 -> line 6349
 *   +0x0014 -> line 6352
 *   +0x0020 -> line 6355
 *   +0x0034 -> line 6357
 *   +0x003c -> line 6364
 *   +0x0040 -> line 6365
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stHandleActorDynamicLoad(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstEngineObject_* p_stEngineObject;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6325–6343 */
/* addr: 0x00224400  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6325
 *   +0x0010 -> line 6327
 *   +0x0014 -> line 6330
 *   +0x0020 -> line 6333
 *   +0x0034 -> line 6335
 *   +0x003c -> line 6342
 *   +0x0040 -> line 6343
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stHandleFamilyDynamicLoad(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstFamilyList_* hFamily;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6239–6321 */
/* addr: 0x00224460  size: 460 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6239
 *   +0x0004 -> line 6244
 *   +0x0008 -> line 6239
 *   +0x000c -> line 6246
 *   +0x0010 -> line 6239
 *   +0x002c -> line 6241
 *   +0x0030 -> line 6244
 *   +0x0034 -> line 6246
 *   +0x005c -> line 6251
 *   +0x0064 -> line 6252
 *   +0x0068 -> line 6253
 *   +0x0078 -> line 6256
 *   +0x00a0 -> line 6260
 *   +0x00b0 -> line 6262
 *   +0x00b4 -> line 6260
 *   +0x00b8 -> line 6262
 *   +0x00c0 -> line 6263
 *   +0x00c8 -> line 6267
 *   +0x00d0 -> line 6268
 *   +0x00d8 -> line 6272
 *   +0x00e0 -> line 6273
 *   +0x00e8 -> line 6277
 *   +0x00f8 -> line 6279
 *   +0x00fc -> line 6277
 *   +0x0100 -> line 6279
 *   +0x010c -> line 6280
 *   +0x0114 -> line 6284
 *   +0x0124 -> line 6286
 *   +0x0128 -> line 6284
 *   +0x012c -> line 6286
 *   +0x0138 -> line 6287
 *   +0x0140 -> line 6291
 *   +0x014c -> line 6292
 *   +0x0154 -> line 6296
 *   +0x015c -> line 6297
 *   +0x0164 -> line 6301
 *   +0x016c -> line 6302
 *   +0x0174 -> line 6306
 *   +0x017c -> line 6307
 *   +0x0184 -> line 6311
 *   +0x0194 -> line 6313
 *   +0x0198 -> line 6311
 *   +0x019c -> line 6313
 *   +0x01a8 -> line 6320
 *   +0x01ac -> line 6321
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stFFBProcedures(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulCurrentTime;
    unsigned char ucPadNumber;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6236–6236 */
/* addr: 0x00224630  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6236
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stLogFileProcedure(tdstNodeInterpret_* p_stTree, tdstNodeInterpret_* p_stTree2)
{
    return p_stTree2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6142–6169 */
/* addr: 0x00224640  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6142
 *   +0x000c -> line 6144
 *   +0x0010 -> line 6147
 *   +0x0018 -> line 6150
 *   +0x0038 -> line 6154
 *   +0x0040 -> line 6158
 *   +0x0048 -> line 6169
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stPortalActivationProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* param0;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6103–6138 */
/* addr: 0x002246a0  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6103
 *   +0x001c -> line 6104
 *   +0x0020 -> line 6112
 *   +0x0038 -> line 6115
 *   +0x0054 -> line 6119
 *   +0x0064 -> line 6121
 *   +0x007c -> line 6122
 *   +0x0084 -> line 6127
 *   +0x0090 -> line 6128
 *   +0x0094 -> line 6138
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSCT_UltraProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5899–6099 */
/* addr: 0x00224750  size: 1500 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5899
 *   +0x0004 -> line 5916
 *   +0x0008 -> line 5899
 *   +0x0024 -> line 5902
 *   +0x0028 -> line 5899
 *   +0x0030 -> line 5900
 *   +0x0034 -> line 5916
 *   +0x0068 -> line 5922
 *   +0x0074 -> line 5923
 *   +0x0080 -> line 5926
 *   +0x00a8 -> line 5930
 *   +0x00bc -> line 5931
 *   +0x00c4 -> line 5932
 *   +0x00cc -> line 5931
 *   +0x00d0 -> line 5932
 *   +0x00d8 -> line 5933
 *   +0x00dc -> line 5932
 *   +0x00e0 -> line 5933
 *   +0x0108 -> line 5934
 *   +0x011c -> line 5935
 *   +0x0134 -> line 5936
 *   +0x013c -> line 5941
 *   +0x0144 -> line 5942
 *   +0x014c -> line 5947
 *   +0x0154 -> line 5948
 *   +0x015c -> line 5953
 *   +0x0164 -> line 5954
 *   +0x016c -> line 5959
 *   +0x0180 -> line 5960
 *   +0x018c -> line 5961
 *   +0x0194 -> line 5966
 *   +0x01a4 -> line 5967
 *   +0x01d0 -> line 5968
 *   +0x01e4 -> line 5969
 *   +0x01f4 -> line 5970
 *   +0x01fc -> line 5975
 *   +0x0210 -> line 5976
 *   +0x021c -> line 5977
 *   +0x0224 -> line 5983
 *   +0x0250 -> line 5986
 *   +0x0254 -> line 5983
 *   +0x0258 -> line 5986
 *   +0x025c -> line 5983
 *   +0x0260 -> line 5984
 *   +0x0264 -> line 5986
 *   +0x0268 -> line 5983
 *   +0x0270 -> line 5984
 *   +0x0290 -> line 5985
 *   +0x0294 -> line 5986
 *   +0x029c -> line 5987
 *   +0x02a4 -> line 5988
 *   +0x02b0 -> line 5989
 *   +0x02d0 -> line 5991
 *   +0x02e4 -> line 5992
 *   +0x02f0 -> line 5994
 *   +0x0304 -> line 5995
 *   +0x0314 -> line 5996
 *   +0x0328 -> line 5998
 *   +0x0330 -> line 6003
 *   +0x0344 -> line 6004
 *   +0x0350 -> line 6005
 *   +0x0358 -> line 6010
 *   +0x036c -> line 6011
 *   +0x0378 -> line 6012
 *   +0x0380 -> line 6013
 *   +0x0388 -> line 6018
 *   +0x0398 -> line 6019
 *   +0x03c4 -> line 6020
 *   +0x03d8 -> line 6021
 *   +0x03e8 -> line 6022
 *   +0x03f0 -> line 6027
 *   +0x0424 -> line 6028
 *   +0x0428 -> line 6027
 *   +0x0430 -> line 6028
 *   +0x0450 -> line 6029
 *   +0x0454 -> line 6030
 *   +0x0460 -> line 6032
 *   +0x0474 -> line 6033
 *   +0x0484 -> line 6034
 *   +0x0498 -> line 6035
 *   +0x04a8 -> line 6036
 *   +0x04b0 -> line 6038
 *   +0x04b8 -> line 6043
 *   +0x04c0 -> line 6044
 *   +0x04c8 -> line 6049
 *   +0x04d8 -> line 6052
 *   +0x04e0 -> line 6054
 *   +0x04e8 -> line 6058
 *   +0x04f4 -> line 6061
 *   +0x0500 -> line 6067
 *   +0x0508 -> line 6068
 *   +0x0510 -> line 6073
 *   +0x0518 -> line 6074
 *   +0x0520 -> line 6079
 *   +0x0528 -> line 6080
 *   +0x0530 -> line 6085
 *   +0x0540 -> line 6086
 *   +0x0544 -> line 6085
 *   +0x0548 -> line 6086
 *   +0x057c -> line 6087
 *   +0x0584 -> line 6086
 *   +0x0588 -> line 6087
 *   +0x0594 -> line 6088
 *   +0x05a8 -> line 6089
 *   +0x05b0 -> line 6098
 *   +0x05b4 -> line 6099
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSAV2SaveProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    SAV2_tdeDataType_ eDataType;
    unsigned int ulMyVarSize;
    tdstArray_* p_stArray;
    unsigned char ucArrayId;
    AI_tdstMind_* p_stMind;
    unsigned int i;
    unsigned char bSave;
    unsigned char bStatic;
    SAV2_tdeDataType_ ucType;
    char* p_szElementOptions;
    char* p_szElementName;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5871–5889 */
/* addr: 0x00224d30  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5871
 *   +0x0010 -> line 5873
 *   +0x0014 -> line 5875
 *   +0x0020 -> line 5877
 *   +0x0034 -> line 5882
 *   +0x003c -> line 5888
 *   +0x0040 -> line 5889
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDoNotLoadTextures(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5850–5867 */
/* addr: 0x00224d90  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5850
 *   +0x0004 -> line 5852
 *   +0x0020 -> line 5855
 *   +0x002c -> line 5856
 *   +0x0034 -> line 5857
 *   +0x003c -> line 5859
 *   +0x0048 -> line 5860
 *   +0x0054 -> line 5866
 *   +0x0058 -> line 5867
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetGameMode(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case eProc_SetSingleplayerMode:
        GAM_g_uwLoadingLevel &= ~2;
        GAM_g_uwLoadingLevel |= 1;
        break;
    case eProc_SetMultiplayerMode:
        GAM_g_uwLoadingLevel &= ~1;
        GAM_g_uwLoadingLevel |= 2;
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5814–5845 */
/* addr: 0x00224df0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5814
 *   +0x0004 -> line 5819
 *   +0x0008 -> line 5814
 *   +0x0010 -> line 5815
 *   +0x0014 -> line 5819
 *   +0x0024 -> line 5823
 *   +0x0030 -> line 5824
 *   +0x0038 -> line 5826
 *   +0x0040 -> line 5833
 *   +0x0044 -> line 5836
 *   +0x0048 -> line 5833
 *   +0x004c -> line 5845
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDataPath(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char* pszChar;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5773–5809 */
/* addr: 0x00224e50  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5773
 *   +0x0004 -> line 5778
 *   +0x0008 -> line 5773
 *   +0x0014 -> line 5774
 *   +0x0018 -> line 5778
 *   +0x0028 -> line 5782
 *   +0x0030 -> line 5783
 *   +0x0034 -> line 5782
 *   +0x0038 -> line 5783
 *   +0x0060 -> line 5785
 *   +0x0088 -> line 5788
 *   +0x0090 -> line 5789
 *   +0x0098 -> line 5791
 *   +0x00a0 -> line 5792
 *   +0x00a8 -> line 5796
 *   +0x00b0 -> line 5800
 *   +0x00b4 -> line 5809
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stLoadingLevel(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5721–5767 */
/* addr: 0x00224f20  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5721
 *   +0x0004 -> line 5729
 *   +0x0008 -> line 5721
 *   +0x0010 -> line 5727
 *   +0x0014 -> line 5729
 *   +0x0030 -> line 5732
 *   +0x003c -> line 5733
 *   +0x0044 -> line 5735
 *   +0x004c -> line 5736
 *   +0x0054 -> line 5737
 *   +0x005c -> line 5738
 *   +0x0064 -> line 5741
 *   +0x0070 -> line 5742
 *   +0x0078 -> line 5744
 *   +0x0080 -> line 5745
 *   +0x0088 -> line 5747
 *   +0x0090 -> line 5752
 *   +0x0098 -> line 5755
 *   +0x00b0 -> line 5758
 *   +0x00b4 -> line 5767
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stStartCine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    char* p_szString;
    tdstGetSetParam_ stParam;
    CINE_tdstCine_* hCine;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5708–5713 */
/* addr: 0x00224ff0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5708
 *   +0x000c -> line 5710
 *   +0x0014 -> line 5712
 *   +0x0018 -> line 5713
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern void fn_vStopTransition(void);

tdstNodeInterpret_* fn_p_stEndTransitionProcedure(tdstNodeInterpret_* p_stTree, tdstNodeInterpret_* p_stTree2)
{
    fn_vStopTransition();
    return p_stTree2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5666–5705 */
/* addr: 0x00225020  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5666
 *   +0x0004 -> line 5676
 *   +0x0008 -> line 5666
 *   +0x0010 -> line 5668
 *   +0x0014 -> line 5676
 *   +0x0024 -> line 5679
 *   +0x0030 -> line 5681
 *   +0x003c -> line 5683
 *   +0x004c -> line 5705
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDisplaySegment(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5637–5663 */
/* addr: 0x00225080  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5637
 *   +0x0010 -> line 5640
 *   +0x0014 -> line 5639
 *   +0x0018 -> line 5640
 *   +0x001c -> line 5642
 *   +0x0024 -> line 5644
 *   +0x0040 -> line 5647
 *   +0x0044 -> line 5648
 *   +0x004c -> line 5652
 *   +0x0050 -> line 5663
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBrainActivationProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstBrain_* h_Brain;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5616–5634 */
/* addr: 0x002250f0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5616
 *   +0x0004 -> line 5621
 *   +0x0008 -> line 5616
 *   +0x0010 -> line 5618
 *   +0x0014 -> line 5621
 *   +0x0024 -> line 5624
 *   +0x002c -> line 5625
 *   +0x0030 -> line 5624
 *   +0x0034 -> line 5625
 *   +0x004c -> line 5627
 *   +0x0050 -> line 5634
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetVSyncWait(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5564–5609 */
/* addr: 0x00225150  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5564
 *   +0x0004 -> line 5571
 *   +0x0008 -> line 5564
 *   +0x0024 -> line 5569
 *   +0x0028 -> line 5571
 *   +0x0058 -> line 5574
 *   +0x0064 -> line 5575
 *   +0x006c -> line 5576
 *   +0x0074 -> line 5575
 *   +0x0078 -> line 5576
 *   +0x0080 -> line 5577
 *   +0x00b4 -> line 5578
 *   +0x00c8 -> line 5579
 *   +0x00cc -> line 5578
 *   +0x00d0 -> line 5579
 *   +0x00f8 -> line 5583
 *   +0x0110 -> line 5584
 *   +0x0118 -> line 5585
 *   +0x0120 -> line 5589
 *   +0x0128 -> line 5590
 *   +0x012c -> line 5589
 *   +0x0130 -> line 5590
 *   +0x0158 -> line 5591
 *   +0x016c -> line 5592
 *   +0x0174 -> line 5595
 *   +0x017c -> line 5596
 *   +0x0184 -> line 5599
 *   +0x018c -> line 5600
 *   +0x0190 -> line 5609
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stVideoProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    char cCanInterrupt;
    char* p_szVideoName;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5509–5555 */
/* addr: 0x00225300  size: 608 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5509
 *   +0x0004 -> line 5517
 *   +0x0008 -> line 5509
 *   +0x0020 -> line 5515
 *   +0x0024 -> line 5517
 *   +0x004c -> line 5520
 *   +0x0054 -> line 5521
 *   +0x0058 -> line 5520
 *   +0x005c -> line 5521
 *   +0x008c -> line 5522
 *   +0x0098 -> line 5523
 *   +0x00c4 -> line 5524
 *   +0x00d4 -> line 5525
 *   +0x00d8 -> line 5524
 *   +0x00dc -> line 5525
 *   +0x0104 -> line 5527
 *   +0x0128 -> line 5529
 *   +0x0130 -> line 5532
 *   +0x0138 -> line 5533
 *   +0x016c -> line 5534
 *   +0x017c -> line 5535
 *   +0x01a8 -> line 5536
 *   +0x01b8 -> line 5539
 *   +0x01bc -> line 5536
 *   +0x01c0 -> line 5539
 *   +0x01ec -> line 5541
 *   +0x01f4 -> line 5544
 *   +0x01fc -> line 5545
 *   +0x0200 -> line 5544
 *   +0x0204 -> line 5545
 *   +0x022c -> line 5547
 *   +0x023c -> line 5549
 *   +0x0240 -> line 5555
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stRLIProcedure2(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    unsigned int ulDuration;
    unsigned char ucValue;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5358–5500 */
/* addr: 0x00225560  size: 948 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5358
 *   +0x0004 -> line 5364
 *   +0x0008 -> line 5358
 *   +0x001c -> line 5359
 *   +0x0020 -> line 5364
 *   +0x006c -> line 5368
 *   +0x0074 -> line 5371
 *   +0x0080 -> line 5373
 *   +0x0088 -> line 5381
 *   +0x0090 -> line 5382
 *   +0x0094 -> line 5383
 *   +0x00a4 -> line 5384
 *   +0x00a8 -> line 5385
 *   +0x00b8 -> line 5387
 *   +0x00c0 -> line 5386
 *   +0x00c4 -> line 5387
 *   +0x00cc -> line 5390
 *   +0x0108 -> line 5396
 *   +0x010c -> line 5395
 *   +0x0110 -> line 5396
 *   +0x0114 -> line 5397
 *   +0x0118 -> line 5399
 *   +0x011c -> line 5397
 *   +0x0120 -> line 5398
 *   +0x0124 -> line 5400
 *   +0x012c -> line 5407
 *   +0x0130 -> line 5403
 *   +0x0134 -> line 5404
 *   +0x0138 -> line 5405
 *   +0x013c -> line 5406
 *   +0x0140 -> line 5407
 *   +0x0144 -> line 5410
 *   +0x014c -> line 5420
 *   +0x0154 -> line 5421
 *   +0x0158 -> line 5425
 *   +0x015c -> line 5423
 *   +0x0164 -> line 5425
 *   +0x016c -> line 5426
 *   +0x0174 -> line 5428
 *   +0x017c -> line 5430
 *   +0x0180 -> line 5433
 *   +0x0190 -> line 5435
 *   +0x01dc -> line 5436
 *   +0x022c -> line 5438
 *   +0x023c -> line 5440
 *   +0x0240 -> line 5438
 *   +0x0244 -> line 5440
 *   +0x028c -> line 5441
 *   +0x02d8 -> line 5443
 *   +0x02e8 -> line 5445
 *   +0x02f0 -> line 5452
 *   +0x02f8 -> line 5454
 *   +0x0300 -> line 5453
 *   +0x0304 -> line 5454
 *   +0x030c -> line 5457
 *   +0x0310 -> line 5454
 *   +0x0314 -> line 5457
 *   +0x031c -> line 5459
 *   +0x0324 -> line 5461
 *   +0x032c -> line 5466
 *   +0x0334 -> line 5468
 *   +0x033c -> line 5467
 *   +0x0340 -> line 5468
 *   +0x034c -> line 5471
 *   +0x0364 -> line 5473
 *   +0x036c -> line 5478
 *   +0x0374 -> line 5479
 *   +0x0378 -> line 5480
 *   +0x0388 -> line 5483
 *   +0x038c -> line 5480
 *   +0x0390 -> line 5483
 *   +0x0398 -> line 5485
 *   +0x039c -> line 5500
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMultiPlayerProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int a2_ulPos[2];
    unsigned int a2_ulSize[2];
    unsigned char ucVpNum;
    unsigned char unNumberOfColumns;
    unsigned char ucNumberOfPlayers;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5300–5333 */
/* addr: 0x00225920  size: 512 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5300
 *   +0x0008 -> line 5308
 *   +0x000c -> line 5300
 *   +0x0024 -> line 5308
 *   +0x002c -> line 5312
 *   +0x0030 -> line 5308
 *   +0x0034 -> line 5312
 *   +0x0060 -> line 5317
 *   +0x0064 -> line 5314
 *   +0x006c -> line 5312
 *   +0x0070 -> line 5314
 *   +0x0078 -> line 5317
 *   +0x007c -> line 5314
 *   +0x009c -> line 5317
 *   +0x00c4 -> line 5322
 *   +0x00c8 -> line 5319
 *   +0x00d0 -> line 5317
 *   +0x00d4 -> line 5319
 *   +0x00dc -> line 5322
 *   +0x00e0 -> line 5319
 *   +0x0100 -> line 5322
 *   +0x0128 -> line 5327
 *   +0x012c -> line 5324
 *   +0x0134 -> line 5322
 *   +0x0138 -> line 5324
 *   +0x0140 -> line 5327
 *   +0x0144 -> line 5324
 *   +0x0164 -> line 5327
 *   +0x0188 -> line 5331
 *   +0x01d8 -> line 5332
 *   +0x01dc -> line 5333
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stJFFTXTGetBdBox(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    int* x2;
    int* y1f;
    int* x1;
    tdstGetSetParam_ stParam;
    long StringNumber;
    unsigned char ucVarId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5207–5290 */
/* addr: 0x00225b20  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5207
 *   +0x0008 -> line 5213
 *   +0x000c -> line 5207
 *   +0x001c -> line 5208
 *   +0x0020 -> line 5213
 *   +0x0028 -> line 5214
 *   +0x002c -> line 5216
 *   +0x0070 -> line 5222
 *   +0x007c -> line 5223
 *   +0x0080 -> line 5224
 *   +0x0090 -> line 5225
 *   +0x0094 -> line 5226
 *   +0x00a4 -> line 5229
 *   +0x00a8 -> line 5226
 *   +0x00ac -> line 5229
 *   +0x00bc -> line 5234
 *   +0x00c4 -> line 5240
 *   +0x00d0 -> line 5243
 *   +0x00d4 -> line 5240
 *   +0x00d8 -> line 5243
 *   +0x00e0 -> line 5248
 *   +0x00e8 -> line 5252
 *   +0x00f0 -> line 5257
 *   +0x00f8 -> line 5261
 *   +0x0100 -> line 5266
 *   +0x0108 -> line 5272
 *   +0x0118 -> line 5275
 *   +0x011c -> line 5272
 *   +0x0120 -> line 5275
 *   +0x0128 -> line 5280
 *   +0x012c -> line 5290
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stJFFTXTSettings(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned long ulGreen;
    unsigned long ulRed;
    int StringNumber;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5193–5202 */
/* addr: 0x00225c70  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5193
 *   +0x0004 -> line 5198
 *   +0x0008 -> line 5193
 *   +0x000c -> line 5200
 *   +0x0010 -> line 5198
 *   +0x0014 -> line 5200
 *   +0x001c -> line 5198
 *   +0x0020 -> line 5200
 *   +0x0028 -> line 5201
 *   +0x0038 -> line 5202
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetMenuPausePad(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5031–5190 */
/* addr: 0x00225cc0  size: 1188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5031
 *   +0x0004 -> line 5037
 *   +0x0008 -> line 5031
 *   +0x000c -> line 5037
 *   +0x0010 -> line 5031
 *   +0x0024 -> line 5037
 *   +0x0034 -> line 5039
 *   +0x0038 -> line 5037
 *   +0x003c -> line 5039
 *   +0x0044 -> line 5037
 *   +0x0048 -> line 5042
 *   +0x0050 -> line 5044
 *   +0x005c -> line 5046
 *   +0x0068 -> line 5047
 *   +0x0070 -> line 5048
 *   +0x0078 -> line 5051
 *   +0x0080 -> line 5052
 *   +0x008c -> line 5057
 *   +0x0098 -> line 5058
 *   +0x00f0 -> line 5060
 *   +0x0150 -> line 5062
 *   +0x0158 -> line 5064
 *   +0x0180 -> line 5067
 *   +0x0184 -> line 5068
 *   +0x019c -> line 5072
 *   +0x01a0 -> line 5068
 *   +0x01a4 -> line 5072
 *   +0x01d8 -> line 5074
 *   +0x01e4 -> line 5075
 *   +0x01fc -> line 5080
 *   +0x026c -> line 5082
 *   +0x0274 -> line 5098
 *   +0x0284 -> line 5099
 *   +0x0294 -> line 5102
 *   +0x02a8 -> line 5124
 *   +0x02ac -> line 5102
 *   +0x02c4 -> line 5124
 *   +0x02e8 -> line 5142
 *   +0x0304 -> line 5147
 *   +0x030c -> line 5154
 *   +0x0324 -> line 5163
 *   +0x0330 -> line 5165
 *   +0x0348 -> line 5170
 *   +0x03b8 -> line 5171
 *   +0x03d0 -> line 5174
 *   +0x03dc -> line 5175
 *   +0x03e4 -> line 5178
 *   +0x03f8 -> line 5180
 *   +0x0404 -> line 5181
 *   +0x041c -> line 5186
 *   +0x048c -> line 5190
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vTXTAffichePause(int _lVMSOrPad, int DeconenctedPadId)
{
    char PadStr[4];
    unsigned int ulTimer;
    char cPort;
    long lPad;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4975–5026 */
/* addr: 0x00226170  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4975
 *   +0x0008 -> line 4976
 *   +0x0014 -> line 4978
 *   +0x0054 -> line 4981
 *   +0x0068 -> line 4982
 *   +0x0070 -> line 4984
 *   +0x0084 -> line 4985
 *   +0x008c -> line 4988
 *   +0x00a0 -> line 4992
 *   +0x00a8 -> line 4994
 *   +0x00bc -> line 4995
 *   +0x00c4 -> line 4997
 *   +0x00d8 -> line 5000
 *   +0x00e0 -> line 5003
 *   +0x011c -> line 5006
 *   +0x0130 -> line 5007
 *   +0x0138 -> line 5009
 *   +0x014c -> line 5010
 *   +0x0154 -> line 5013
 *   +0x0168 -> line 5017
 *   +0x0170 -> line 5019
 *   +0x0184 -> line 5020
 *   +0x018c -> line 5022
 *   +0x01a0 -> line 5026
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vSetControllerMessage(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4529–4954 */
/* addr: 0x00226320  size: 2892 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4529
 *   +0x0004 -> line 4545
 *   +0x0008 -> line 4529
 *   +0x003c -> line 4530
 *   +0x0040 -> line 4545
 *   +0x00f8 -> line 4552
 *   +0x0100 -> line 4553
 *   +0x0104 -> line 4552
 *   +0x0108 -> line 4555
 *   +0x0114 -> line 4556
 *   +0x0118 -> line 4558
 *   +0x0128 -> line 4560
 *   +0x012c -> line 4565
 *   +0x0130 -> line 4561
 *   +0x0134 -> line 4565
 *   +0x0138 -> line 4562
 *   +0x013c -> line 4565
 *   +0x0140 -> line 4560
 *   +0x0144 -> line 4561
 *   +0x0148 -> line 4565
 *   +0x0154 -> line 4566
 *   +0x015c -> line 4568
 *   +0x0164 -> line 4566
 *   +0x0168 -> line 4568
 *   +0x0170 -> line 4571
 *   +0x0174 -> line 4568
 *   +0x0178 -> line 4571
 *   +0x01ec -> line 4574
 *   +0x01f4 -> line 4584
 *   +0x01fc -> line 4585
 *   +0x0200 -> line 4587
 *   +0x0210 -> line 4588
 *   +0x0214 -> line 4590
 *   +0x0224 -> line 4592
 *   +0x0228 -> line 4595
 *   +0x0238 -> line 4597
 *   +0x023c -> line 4598
 *   +0x0240 -> line 4599
 *   +0x0244 -> line 4601
 *   +0x0250 -> line 4597
 *   +0x0254 -> line 4598
 *   +0x025c -> line 4599
 *   +0x0260 -> line 4601
 *   +0x0268 -> line 4602
 *   +0x028c -> line 4605
 *   +0x02a0 -> line 4606
 *   +0x02a8 -> line 4608
 *   +0x02b0 -> line 4606
 *   +0x02b4 -> line 4608
 *   +0x02bc -> line 4609
 *   +0x02dc -> line 4611
 *   +0x02ec -> line 4613
 *   +0x02f0 -> line 4611
 *   +0x02f4 -> line 4617
 *   +0x0304 -> line 4613
 *   +0x0308 -> line 4614
 *   +0x0310 -> line 4615
 *   +0x0314 -> line 4617
 *   +0x0360 -> line 4619
 *   +0x0368 -> line 4632
 *   +0x0370 -> line 4633
 *   +0x0374 -> line 4635
 *   +0x0384 -> line 4636
 *   +0x0388 -> line 4638
 *   +0x0398 -> line 4640
 *   +0x039c -> line 4643
 *   +0x03ac -> line 4645
 *   +0x03b0 -> line 4646
 *   +0x03b8 -> line 4647
 *   +0x03c0 -> line 4649
 *   +0x03cc -> line 4645
 *   +0x03d0 -> line 4646
 *   +0x03d8 -> line 4647
 *   +0x03dc -> line 4649
 *   +0x03e4 -> line 4651
 *   +0x03e8 -> line 4655
 *   +0x03ec -> line 4652
 *   +0x03f0 -> line 4655
 *   +0x03f4 -> line 4653
 *   +0x03f8 -> line 4655
 *   +0x0400 -> line 4656
 *   +0x0420 -> line 4658
 *   +0x0434 -> line 4659
 *   +0x043c -> line 4661
 *   +0x0444 -> line 4659
 *   +0x0448 -> line 4661
 *   +0x0450 -> line 4663
 *   +0x0454 -> line 4669
 *   +0x0460 -> line 4663
 *   +0x0464 -> line 4664
 *   +0x046c -> line 4665
 *   +0x0470 -> line 4669
 *   +0x0478 -> line 4677
 *   +0x047c -> line 4669
 *   +0x0480 -> line 4677
 *   +0x0484 -> line 4672
 *   +0x0488 -> line 4677
 *   +0x048c -> line 4671
 *   +0x0490 -> line 4673
 *   +0x0494 -> line 4677
 *   +0x04a4 -> line 4676
 *   +0x04a8 -> line 4677
 *   +0x04b4 -> line 4681
 *   +0x04c4 -> line 4683
 *   +0x04e8 -> line 4684
 *   +0x04f0 -> line 4685
 *   +0x0500 -> line 4687
 *   +0x055c -> line 4688
 *   +0x0564 -> line 4692
 *   +0x0568 -> line 4693
 *   +0x0588 -> line 4695
 *   +0x0594 -> line 4697
 *   +0x0598 -> line 4700
 *   +0x059c -> line 4697
 *   +0x05a0 -> line 4700
 *   +0x05a8 -> line 4697
 *   +0x05b4 -> line 4698
 *   +0x05bc -> line 4700
 *   +0x0610 -> line 4708
 *   +0x061c -> line 4716
 *   +0x0620 -> line 4712
 *   +0x0624 -> line 4714
 *   +0x0628 -> line 4716
 *   +0x0630 -> line 4717
 *   +0x0638 -> line 4719
 *   +0x064c -> line 4721
 *   +0x0654 -> line 4722
 *   +0x0658 -> line 4725
 *   +0x065c -> line 4723
 *   +0x0660 -> line 4725
 *   +0x0668 -> line 4721
 *   +0x066c -> line 4722
 *   +0x0674 -> line 4723
 *   +0x0678 -> line 4725
 *   +0x0684 -> line 4726
 *   +0x0690 -> line 4728
 *   +0x0698 -> line 4726
 *   +0x069c -> line 4728
 *   +0x06a4 -> line 4729
 *   +0x06c8 -> line 4731
 *   +0x06d0 -> line 4738
 *   +0x06d4 -> line 4734
 *   +0x06d8 -> line 4736
 *   +0x06dc -> line 4738
 *   +0x06e4 -> line 4739
 *   +0x06ec -> line 4741
 *   +0x0700 -> line 4743
 *   +0x0708 -> line 4744
 *   +0x070c -> line 4747
 *   +0x0710 -> line 4745
 *   +0x0714 -> line 4747
 *   +0x071c -> line 4743
 *   +0x0720 -> line 4744
 *   +0x0728 -> line 4745
 *   +0x072c -> line 4747
 *   +0x0738 -> line 4748
 *   +0x0750 -> line 4750
 *   +0x0760 -> line 4751
 *   +0x0784 -> line 4753
 *   +0x078c -> line 4760
 *   +0x0790 -> line 4756
 *   +0x0794 -> line 4758
 *   +0x0798 -> line 4760
 *   +0x07a0 -> line 4761
 *   +0x07a8 -> line 4763
 *   +0x07bc -> line 4765
 *   +0x07c4 -> line 4766
 *   +0x07c8 -> line 4769
 *   +0x07cc -> line 4767
 *   +0x07d0 -> line 4769
 *   +0x07d8 -> line 4765
 *   +0x07dc -> line 4766
 *   +0x07e4 -> line 4767
 *   +0x07e8 -> line 4769
 *   +0x07f4 -> line 4771
 *   +0x0800 -> line 4773
 *   +0x0808 -> line 4771
 *   +0x080c -> line 4773
 *   +0x0814 -> line 4774
 *   +0x0838 -> line 4776
 *   +0x0840 -> line 4784
 *   +0x0844 -> line 4780
 *   +0x0848 -> line 4782
 *   +0x084c -> line 4784
 *   +0x0854 -> line 4785
 *   +0x085c -> line 4787
 *   +0x0870 -> line 4789
 *   +0x0878 -> line 4790
 *   +0x087c -> line 4793
 *   +0x0880 -> line 4791
 *   +0x0884 -> line 4793
 *   +0x088c -> line 4789
 *   +0x0890 -> line 4790
 *   +0x0898 -> line 4791
 *   +0x089c -> line 4793
 *   +0x08a8 -> line 4794
 *   +0x08b4 -> line 4796
 *   +0x08bc -> line 4794
 *   +0x08c0 -> line 4796
 *   +0x08c8 -> line 4797
 *   +0x08ec -> line 4799
 *   +0x08f4 -> line 4802
 *   +0x08fc -> line 4803
 *   +0x0904 -> line 4805
 *   +0x090c -> line 4808
 *   +0x0914 -> line 4809
 *   +0x091c -> line 4811
 *   +0x0924 -> line 4817
 *   +0x0928 -> line 4818
 *   +0x092c -> line 4820
 *   +0x0930 -> line 4817
 *   +0x0934 -> line 4820
 *   +0x093c -> line 4823
 *   +0x0944 -> line 4830
 *   +0x094c -> line 4833
 *   +0x0958 -> line 4835
 *   +0x0960 -> line 4843
 *   +0x0968 -> line 4846
 *   +0x0974 -> line 4848
 *   +0x097c -> line 4853
 *   +0x0984 -> line 4854
 *   +0x0988 -> line 4856
 *   +0x0998 -> line 4858
 *   +0x099c -> line 4862
 *   +0x09a0 -> line 4859
 *   +0x09a4 -> line 4862
 *   +0x09a8 -> line 4860
 *   +0x09ac -> line 4862
 *   +0x09b0 -> line 4858
 *   +0x09b4 -> line 4859
 *   +0x09b8 -> line 4862
 *   +0x09c4 -> line 4863
 *   +0x09cc -> line 4869
 *   +0x09d4 -> line 4863
 *   +0x09d8 -> line 4869
 *   +0x09e0 -> line 4900
 *   +0x09e4 -> line 4869
 *   +0x09e8 -> line 4900
 *   +0x0a58 -> line 4912
 *   +0x0a60 -> line 4916
 *   +0x0a68 -> line 4917
 *   +0x0a6c -> line 4919
 *   +0x0a7c -> line 4922
 *   +0x0a84 -> line 4920
 *   +0x0a88 -> line 4922
 *   +0x0a90 -> line 4925
 *   +0x0a94 -> line 4922
 *   +0x0a98 -> line 4925
 *   +0x0ac0 -> line 4926
 *   +0x0ac8 -> line 4933
 *   +0x0ad0 -> line 4934
 *   +0x0ad4 -> line 4936
 *   +0x0ae4 -> line 4939
 *   +0x0aec -> line 4937
 *   +0x0af0 -> line 4939
 *   +0x0af8 -> line 4942
 *   +0x0afc -> line 4939
 *   +0x0b00 -> line 4942
 *   +0x0b0c -> line 4944
 *   +0x0b10 -> line 4954
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stJFFTXTProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int Position;
    float xSqDistance;
    MTH3D_tdstVector_ stOffset;
    float xFar;
    float xNear;
    float xSize;
    int NumeroVp;
    char* pszString;
    int ID;
    float xParameter;
    MTH3D_tdstVector_ stPosition;
    int StringNumber;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4524–4524 */
/* addr: 0x00226e70  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4524
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCheatCodeProcedure(tdstNodeInterpret_* p_stTree, tdstNodeInterpret_* p_stTree2)
{
    return p_stTree2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4450–4483 */
/* addr: 0x00226e80  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4450
 *   +0x0004 -> line 4455
 *   +0x0008 -> line 4450
 *   +0x0010 -> line 4451
 *   +0x0014 -> line 4455
 *   +0x0024 -> line 4458
 *   +0x0030 -> line 4460
 *   +0x003c -> line 4462
 *   +0x0040 -> line 4463
 *   +0x0048 -> line 4464
 *   +0x0050 -> line 4465
 *   +0x0054 -> line 4464
 *   +0x0058 -> line 4465
 *   +0x0060 -> line 4466
 *   +0x0068 -> line 4470
 *   +0x0078 -> line 4473
 *   +0x007c -> line 4483
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stInGameMenuProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    unsigned char s_ucPreviousNumberOfColumns;
    unsigned char s_ucPreviousNumberOfPlayers;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4390–4422 */
/* addr: 0x00226f10  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4390
 *   +0x0004 -> line 4393
 *   +0x0008 -> line 4390
 *   +0x0010 -> line 4391
 *   +0x0014 -> line 4393
 *   +0x0030 -> line 4398
 *   +0x0038 -> line 4403
 *   +0x0040 -> line 4421
 *   +0x0044 -> line 4422
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTakePictureProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case eProc_TakePicture:
        GLI_vAskToTakePicture();
        return p_stTree;
    case eProc_ReleasePicture:
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4012–4365 */
/* addr: 0x00226f70  size: 2532 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4012
 *   +0x0004 -> line 4021
 *   +0x0008 -> line 4012
 *   +0x0034 -> line 4013
 *   +0x0038 -> line 4021
 *   +0x00bc -> line 4032
 *   +0x00c4 -> line 4033
 *   +0x00c8 -> line 4032
 *   +0x00cc -> line 4035
 *   +0x00d8 -> line 4036
 *   +0x00dc -> line 4038
 *   +0x00ec -> line 4040
 *   +0x00f0 -> line 4041
 *   +0x00f4 -> line 4042
 *   +0x00f8 -> line 4044
 *   +0x0104 -> line 4040
 *   +0x0108 -> line 4041
 *   +0x0110 -> line 4042
 *   +0x0114 -> line 4044
 *   +0x011c -> line 4046
 *   +0x0120 -> line 4050
 *   +0x012c -> line 4046
 *   +0x0130 -> line 4047
 *   +0x0138 -> line 4048
 *   +0x013c -> line 4050
 *   +0x0144 -> line 4051
 *   +0x0164 -> line 4053
 *   +0x0174 -> line 4056
 *   +0x0178 -> line 4053
 *   +0x017c -> line 4056
 *   +0x0194 -> line 4058
 *   +0x019c -> line 4070
 *   +0x01a4 -> line 4071
 *   +0x01a8 -> line 4073
 *   +0x01b8 -> line 4074
 *   +0x01bc -> line 4076
 *   +0x01cc -> line 4078
 *   +0x01d0 -> line 4079
 *   +0x01d4 -> line 4080
 *   +0x01d8 -> line 4082
 *   +0x01e4 -> line 4078
 *   +0x01e8 -> line 4079
 *   +0x01f0 -> line 4080
 *   +0x01f4 -> line 4082
 *   +0x01fc -> line 4084
 *   +0x0200 -> line 4088
 *   +0x020c -> line 4084
 *   +0x0210 -> line 4085
 *   +0x0218 -> line 4086
 *   +0x021c -> line 4088
 *   +0x0224 -> line 4089
 *   +0x0248 -> line 4091
 *   +0x0258 -> line 4092
 *   +0x0278 -> line 4094
 *   +0x0288 -> line 4097
 *   +0x0290 -> line 4095
 *   +0x0294 -> line 4097
 *   +0x029c -> line 4100
 *   +0x02a0 -> line 4097
 *   +0x02a4 -> line 4100
 *   +0x02c4 -> line 4102
 *   +0x02cc -> line 4113
 *   +0x02dc -> line 4114
 *   +0x02e0 -> line 4116
 *   +0x02f0 -> line 4117
 *   +0x02f4 -> line 4119
 *   +0x0304 -> line 4121
 *   +0x0308 -> line 4122
 *   +0x030c -> line 4123
 *   +0x0310 -> line 4125
 *   +0x031c -> line 4121
 *   +0x0320 -> line 4122
 *   +0x0328 -> line 4123
 *   +0x032c -> line 4125
 *   +0x0334 -> line 4127
 *   +0x0338 -> line 4131
 *   +0x0344 -> line 4127
 *   +0x0348 -> line 4128
 *   +0x0350 -> line 4129
 *   +0x0354 -> line 4131
 *   +0x0360 -> line 4132
 *   +0x036c -> line 4133
 *   +0x037c -> line 4134
 *   +0x0388 -> line 4135
 *   +0x0390 -> line 4137
 *   +0x03a4 -> line 4138
 *   +0x03c4 -> line 4139
 *   +0x03cc -> line 4140
 *   +0x03ec -> line 4141
 *   +0x03f8 -> line 4142
 *   +0x0410 -> line 4144
 *   +0x041c -> line 4151
 *   +0x0424 -> line 4152
 *   +0x0428 -> line 4154
 *   +0x0438 -> line 4156
 *   +0x043c -> line 4157
 *   +0x0440 -> line 4158
 *   +0x0444 -> line 4160
 *   +0x0450 -> line 4156
 *   +0x0454 -> line 4157
 *   +0x045c -> line 4158
 *   +0x0460 -> line 4160
 *   +0x0468 -> line 4162
 *   +0x046c -> line 4166
 *   +0x0478 -> line 4162
 *   +0x047c -> line 4163
 *   +0x0484 -> line 4164
 *   +0x0488 -> line 4166
 *   +0x0490 -> line 4167
 *   +0x0494 -> line 4169
 *   +0x04a4 -> line 4170
 *   +0x04a8 -> line 4169
 *   +0x04ac -> line 4170
 *   +0x04c8 -> line 4175
 *   +0x04e0 -> line 4180
 *   +0x04e8 -> line 4188
 *   +0x04f0 -> line 4189
 *   +0x04f4 -> line 4191
 *   +0x0504 -> line 4192
 *   +0x0508 -> line 4193
 *   +0x0518 -> line 4194
 *   +0x051c -> line 4195
 *   +0x052c -> line 4197
 *   +0x0534 -> line 4196
 *   +0x0538 -> line 4197
 *   +0x0540 -> line 4201
 *   +0x0544 -> line 4197
 *   +0x0548 -> line 4201
 *   +0x054c -> line 4202
 *   +0x0550 -> line 4201
 *   +0x0554 -> line 4202
 *   +0x0558 -> line 4201
 *   +0x056c -> line 4202
 *   +0x05d4 -> line 4205
 *   +0x05d8 -> line 4202
 *   +0x05e0 -> line 4205
 *   +0x05e8 -> line 4202
 *   +0x05ec -> line 4205
 *   +0x0604 -> line 4206
 *   +0x0664 -> line 4210
 *   +0x066c -> line 4206
 *   +0x0678 -> line 4210
 *   +0x0700 -> line 4219
 *   +0x0704 -> line 4218
 *   +0x0708 -> line 4210
 *   +0x070c -> line 4219
 *   +0x0710 -> line 4210
 *   +0x0714 -> line 4219
 *   +0x07a0 -> line 4222
 *   +0x07a8 -> line 4232
 *   +0x07b0 -> line 4238
 *   +0x07c0 -> line 4244
 *   +0x07d0 -> line 4249
 *   +0x07d8 -> line 4258
 *   +0x07e0 -> line 4261
 *   +0x07f0 -> line 4267
 *   +0x0800 -> line 4275
 *   +0x0808 -> line 4284
 *   +0x0810 -> line 4287
 *   +0x0820 -> line 4293
 *   +0x0830 -> line 4298
 *   +0x0838 -> line 4307
 *   +0x0840 -> line 4308
 *   +0x0844 -> line 4307
 *   +0x0848 -> line 4308
 *   +0x0870 -> line 4310
 *   +0x0878 -> line 4315
 *   +0x0880 -> line 4328
 *   +0x0888 -> line 4329
 *   +0x08b8 -> line 4331
 *   +0x08c8 -> line 4332
 *   +0x08f4 -> line 4334
 *   +0x0904 -> line 4336
 *   +0x0908 -> line 4337
 *   +0x090c -> line 4338
 *   +0x0910 -> line 4340
 *   +0x091c -> line 4336
 *   +0x0920 -> line 4337
 *   +0x0928 -> line 4338
 *   +0x092c -> line 4340
 *   +0x0934 -> line 4342
 *   +0x0938 -> line 4346
 *   +0x0944 -> line 4342
 *   +0x0948 -> line 4343
 *   +0x0950 -> line 4344
 *   +0x0954 -> line 4346
 *   +0x095c -> line 4349
 *   +0x0964 -> line 4347
 *   +0x0968 -> line 4349
 *   +0x0970 -> line 4352
 *   +0x0974 -> line 4349
 *   +0x0978 -> line 4352
 *   +0x09ac -> line 4355
 *   +0x09b0 -> line 4365
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stAGOProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    GLI_tdstMaterial_* hVisualMaterial;
    MTH3D_tdstVector_ stDirection;
    MTH3D_tdstVector_ stPosition;
    unsigned int dwPartNumber;
    tdstGetSetParam_ stParam;
    float fRate;
    int lBottom;
    int lLeft;
    int lTop;
    char* p_ucFilenameOrMemoryAddress;
    MTH3D_tdstVector_ stVect2;
    MTH3D_tdstVector_ stVect1;
    int NumeroBitmap;
    int NumeroVp;
    GLI_tdstMaterial_* hVisualMaterial1;
    int NumeroGauge;
    int NumeroIcone;
    unsigned int PartType;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3961–3968 */
/* addr: 0x00227960  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3961
 *   +0x000c -> line 3964
 *   +0x0010 -> line 3961
 *   +0x0018 -> line 3963
 *   +0x001c -> line 3964
 *   +0x0024 -> line 3967
 *   +0x0028 -> line 3968
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDummy(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    printf("ProcedureDummy %d, spo=0x%x!\n", eProcedureId, p_SuperObjPerso);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3930–3951 */
/* addr: 0x002279a0  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3930
 *   +0x0008 -> line 3934
 *   +0x0014 -> line 3937
 *   +0x0020 -> line 3942
 *   +0x0028 -> line 3945
 *   +0x0038 -> line 3946
 *   +0x003c -> line 3948
 *   +0x0058 -> line 3949
 *   +0x0068 -> line 3951
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBreakKeyword(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int lValue;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3918–3927 */
/* addr: 0x00227a20  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3918
 *   +0x000c -> line 3919
 *   +0x0014 -> line 3921
 *   +0x002c -> line 3922
 *   +0x0038 -> line 3923
 *   +0x0048 -> line 3925
 *   +0x004c -> line 3926
 *   +0x0050 -> line 3925
 *   +0x0058 -> line 3927
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stEndLoopKeyWord(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    if (!iNumLoop)
        return p_stTree;
    GlobalLoopCpt[iNumLoop - 1]--;
    if (GlobalLoopCpt[iNumLoop - 1] > 0)
        return (tdstNodeInterpret_*)GlobalLoopTree[iNumLoop - 1];
    iNumLoop--;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3899–3914 */
/* addr: 0x00227a80  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3899
 *   +0x0004 -> line 3904
 *   +0x0008 -> line 3899
 *   +0x000c -> line 3904
 *   +0x0010 -> line 3899
 *   +0x0014 -> line 3906
 *   +0x0018 -> line 3904
 *   +0x001c -> line 3900
 *   +0x0020 -> line 3904
 *   +0x0028 -> line 3906
 *   +0x0030 -> line 3907
 *   +0x004c -> line 3908
 *   +0x0058 -> line 3909
 *   +0x0068 -> line 3911
 *   +0x0078 -> line 3912
 *   +0x0084 -> line 3914
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stLoopKeyWord(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stValue;
    tdstNodeInterpret_* p_stTreeInit;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3860–3896 */
/* addr: 0x00227b20  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3864
 *   +0x0004 -> line 3860
 *   +0x0008 -> line 3864
 *   +0x0010 -> line 3866
 *   +0x0020 -> line 3873
 *   +0x0028 -> line 3875
 *   +0x0038 -> line 3878
 *   +0x0040 -> line 3879
 *   +0x004c -> line 3881
 *   +0x0050 -> line 3882
 *   +0x0058 -> line 3885
 *   +0x0060 -> line 3889
 *   +0x0064 -> line 3890
 *   +0x0078 -> line 3892
 *   +0x0090 -> line 3896
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSkipLoop(tdstNodeInterpret_* p_stTreeInit)
{
    tdstNodeInterpret_* p_stTree;
    int iLevel;
    iLevel = 0;
    p_stTree = p_stTreeInit;
    if (p_stTreeInit->uwNodeToSkip) {
        p_stTree = p_stTreeInit + p_stTreeInit->uwNodeToSkip;
    } else {
        while (p_stTree->eType != 8) {
            if (p_stTree->eType == 4) {
                if (p_stTree->uDummy.uId.eKeyWordId == eKeyWord_Boucle)
                    iLevel++;
                else if (p_stTree->uDummy.uId.eKeyWordId == eKeyWord_FinBoucle) {
                    iLevel--;
                    if (iLevel <= 0) {
                        p_stTree++;
                        break;
                    }
                }
            }
            p_stTree++;
        }
        p_stTreeInit->uwNodeToSkip = p_stTree - p_stTreeInit;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3792–3840 */
/* addr: 0x00227bc0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3792
 *   +0x0008 -> line 3804
 *   +0x000c -> line 3792
 *   +0x0014 -> line 3804
 *   +0x0020 -> line 3805
 *   +0x002c -> line 3806
 *   +0x0034 -> line 3805
 *   +0x0038 -> line 3806
 *   +0x0040 -> line 3809
 *   +0x0048 -> line 3807
 *   +0x004c -> line 3809
 *   +0x0054 -> line 3812
 *   +0x006c -> line 3814
 *   +0x0070 -> line 3815
 *   +0x0074 -> line 3819
 *   +0x0078 -> line 3814
 *   +0x007c -> line 3817
 *   +0x0080 -> line 3819
 *   +0x0088 -> line 3820
 *   +0x0094 -> line 3822
 *   +0x00b0 -> line 3826
 *   +0x00b8 -> line 3828
 *   +0x00bc -> line 3833
 *   +0x00c0 -> line 3834
 *   +0x00c4 -> line 3840
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_ACT_SetDrawFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdst3dData_* h3dData;
    int lDrawMask;
    int lType;
    int lMask;
    int lBit;
    HIE_tdstSuperObject_* hCharact;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3741–3775 */
/* addr: 0x00227ca0  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3741
 *   +0x0008 -> line 3750
 *   +0x000c -> line 3741
 *   +0x0010 -> line 3750
 *   +0x0018 -> line 3752
 *   +0x001c -> line 3750
 *   +0x0020 -> line 3751
 *   +0x0024 -> line 3752
 *   +0x002c -> line 3755
 *   +0x0040 -> line 3759
 *   +0x004c -> line 3760
 *   +0x0060 -> line 3762
 *   +0x007c -> line 3765
 *   +0x008c -> line 3766
 *   +0x0094 -> line 3768
 *   +0x00a4 -> line 3775
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SPO_SetEngineDisplayModeFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int lType;
    int lMask;
    int lBit;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3657–3725 */
/* addr: 0x00227d60  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3657
 *   +0x0008 -> line 3668
 *   +0x000c -> line 3657
 *   +0x0014 -> line 3668
 *   +0x001c -> line 3669
 *   +0x0020 -> line 3668
 *   +0x0024 -> line 3670
 *   +0x0030 -> line 3672
 *   +0x0038 -> line 3671
 *   +0x003c -> line 3672
 *   +0x0044 -> line 3675
 *   +0x005c -> line 3703
 *   +0x0060 -> line 3701
 *   +0x0064 -> line 3705
 *   +0x0070 -> line 3706
 *   +0x007c -> line 3708
 *   +0x0098 -> line 3712
 *   +0x00a0 -> line 3714
 *   +0x00a4 -> line 3719
 *   +0x00a8 -> line 3725
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SPO_SetDrawFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int lDrawMask;
    int lType;
    int lMask;
    int lBit;
    HIE_tdstSuperObject_* hSpo;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3607–3641 */
/* addr: 0x00227e20  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3607
 *   +0x0008 -> line 3614
 *   +0x000c -> line 3607
 *   +0x0010 -> line 3614
 *   +0x0018 -> line 3615
 *   +0x001c -> line 3614
 *   +0x0020 -> line 3617
 *   +0x002c -> line 3619
 *   +0x0034 -> line 3623
 *   +0x003c -> line 3626
 *   +0x0048 -> line 3627
 *   +0x0080 -> line 3629
 *   +0x0090 -> line 3630
 *   +0x009c -> line 3631
 *   +0x00ac -> line 3632
 *   +0x00b8 -> line 3634
 *   +0x00c0 -> line 3640
 *   +0x00c4 -> line 3641
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SinusEffect_SetState(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char cFlag;
    char cState;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3560–3598 */
/* addr: 0x00227f00  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3560
 *   +0x0008 -> line 3570
 *   +0x000c -> line 3560
 *   +0x001c -> line 3562
 *   +0x0020 -> line 3570
 *   +0x0028 -> line 3571
 *   +0x002c -> line 3570
 *   +0x0030 -> line 3572
 *   +0x003c -> line 3573
 *   +0x0040 -> line 3574
 *   +0x0054 -> line 3583
 *   +0x0060 -> line 3585
 *   +0x006c -> line 3589
 *   +0x0074 -> line 3590
 *   +0x0080 -> line 3592
 *   +0x0088 -> line 3597
 *   +0x008c -> line 3598
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SinusEffect_SetRLIParams(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xBlue;
    float xGreen;
    float xRed;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3534–3552 */
/* addr: 0x00227fb0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3534
 *   +0x0008 -> line 3540
 *   +0x0018 -> line 3541
 *   +0x0020 -> line 3543
 *   +0x0024 -> line 3541
 *   +0x0030 -> line 3542
 *   +0x0034 -> line 3541
 *   +0x0038 -> line 3542
 *   +0x0044 -> line 3544
 *   +0x0048 -> line 3542
 *   +0x0050 -> line 3543
 *   +0x005c -> line 3544
 *   +0x0064 -> line 3545
 *   +0x006c -> line 3551
 *   +0x0070 -> line 3552
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SinusEffect_SetAmplitude(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    MTH3D_tdstVector_ stAmp;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3499–3518 */
/* addr: 0x00228030  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3499
 *   +0x0008 -> line 3506
 *   +0x000c -> line 3499
 *   +0x0018 -> line 3506
 *   +0x0020 -> line 3507
 *   +0x0024 -> line 3506
 *   +0x0028 -> line 3509
 *   +0x0034 -> line 3510
 *   +0x0038 -> line 3512
 *   +0x0048 -> line 3515
 *   +0x004c -> line 3512
 *   +0x0050 -> line 3515
 *   +0x005c -> line 3517
 *   +0x0060 -> line 3518
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SinusEffect_SetPreMultiplier(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float Y;
    float X;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3446–3483 */
/* addr: 0x002280b0  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3446
 *   +0x0008 -> line 3453
 *   +0x000c -> line 3446
 *   +0x0024 -> line 3448
 *   +0x0028 -> line 3453
 *   +0x0030 -> line 3454
 *   +0x0034 -> line 3453
 *   +0x0038 -> line 3455
 *   +0x0044 -> line 3456
 *   +0x0048 -> line 3455
 *   +0x004c -> line 3458
 *   +0x0058 -> line 3460
 *   +0x0068 -> line 3461
 *   +0x006c -> line 3460
 *   +0x0070 -> line 3464
 *   +0x0088 -> line 3466
 *   +0x0094 -> line 3467
 *   +0x00a4 -> line 3468
 *   +0x00ac -> line 3469
 *   +0x00b4 -> line 3471
 *   +0x00c0 -> line 3472
 *   +0x00c8 -> line 3473
 *   +0x00d4 -> line 3475
 *   +0x00e0 -> line 3482
 *   +0x00e4 -> line 3483
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SinusEffect_SetFreq(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int lZFreq;
    int lYFreq;
    int lXFreq;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3352–3383 */
/* addr: 0x002281c0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3352
 *   +0x0004 -> line 3358
 *   +0x0008 -> line 3352
 *   +0x0010 -> line 3353
 *   +0x0014 -> line 3358
 *   +0x0030 -> line 3361
 *   +0x003c -> line 3362
 *   +0x0044 -> line 3364
 *   +0x004c -> line 3366
 *   +0x0054 -> line 3371
 *   +0x005c -> line 3373
 *   +0x0060 -> line 3383
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMenuAndVignetteProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char* p_szString;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3229–3347 */
/* addr: 0x00228230  size: 888 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3229
 *   +0x0008 -> line 3239
 *   +0x000c -> line 3229
 *   +0x0028 -> line 3233
 *   +0x002c -> line 3229
 *   +0x0034 -> line 3230
 *   +0x0038 -> line 3239
 *   +0x0040 -> line 3240
 *   +0x0044 -> line 3242
 *   +0x004c -> line 3244
 *   +0x005c -> line 3247
 *   +0x00e8 -> line 3251
 *   +0x00f8 -> line 3253
 *   +0x0104 -> line 3254
 *   +0x0110 -> line 3256
 *   +0x0118 -> line 3260
 *   +0x0128 -> line 3262
 *   +0x0138 -> line 3263
 *   +0x0164 -> line 3264
 *   +0x0168 -> line 3263
 *   +0x016c -> line 3264
 *   +0x0174 -> line 3266
 *   +0x017c -> line 3271
 *   +0x018c -> line 3273
 *   +0x019c -> line 3274
 *   +0x01a8 -> line 3275
 *   +0x01b8 -> line 3277
 *   +0x01c0 -> line 3281
 *   +0x01d0 -> line 3283
 *   +0x01dc -> line 3284
 *   +0x01e8 -> line 3286
 *   +0x01f0 -> line 3290
 *   +0x0200 -> line 3292
 *   +0x020c -> line 3293
 *   +0x0218 -> line 3295
 *   +0x0220 -> line 3299
 *   +0x022c -> line 3300
 *   +0x0230 -> line 3299
 *   +0x0234 -> line 3300
 *   +0x023c -> line 3301
 *   +0x0244 -> line 3308
 *   +0x0250 -> line 3309
 *   +0x0274 -> line 3310
 *   +0x0284 -> line 3312
 *   +0x0288 -> line 3310
 *   +0x028c -> line 3312
 *   +0x02bc -> line 3314
 *   +0x02c4 -> line 3318
 *   +0x02d4 -> line 3319
 *   +0x02dc -> line 3320
 *   +0x02e4 -> line 3324
 *   +0x02ec -> line 3325
 *   +0x02f4 -> line 3330
 *   +0x0300 -> line 3331
 *   +0x0304 -> line 3330
 *   +0x0308 -> line 3331
 *   +0x033c -> line 3332
 *   +0x0344 -> line 3336
 *   +0x034c -> line 3338
 *   +0x0350 -> line 3347
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stVisualMaterialProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int lValue;
    GEO_tdstColor_ stColor;
    tdstNodeInterpret_* p_stTreeOrg;
    GLI_tdstMaterial_* hVisualMaterial;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3086–3226 */
/* addr: 0x002285b0  size: 660 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3086
 *   +0x0010 -> line 3098
 *   +0x0014 -> line 3086
 *   +0x0018 -> line 3092
 *   +0x001c -> line 3086
 *   +0x0028 -> line 3087
 *   +0x0030 -> line 3099
 *   +0x0048 -> line 3102
 *   +0x005c -> line 3104
 *   +0x0084 -> line 3119
 *   +0x00a4 -> line 3121
 *   +0x00b8 -> line 3131
 *   +0x00c8 -> line 3132
 *   +0x00d0 -> line 3136
 *   +0x00fc -> line 3137
 *   +0x0104 -> line 3140
 *   +0x0114 -> line 3144
 *   +0x0134 -> line 3145
 *   +0x014c -> line 3146
 *   +0x0154 -> line 3148
 *   +0x016c -> line 3149
 *   +0x0170 -> line 3150
 *   +0x0174 -> line 3152
 *   +0x0180 -> line 3154
 *   +0x0188 -> line 3157
 *   +0x0190 -> line 3173
 *   +0x01b0 -> line 3175
 *   +0x01c4 -> line 3184
 *   +0x01d4 -> line 3185
 *   +0x01dc -> line 3189
 *   +0x0208 -> line 3190
 *   +0x0210 -> line 3197
 *   +0x0214 -> line 3199
 *   +0x0220 -> line 3201
 *   +0x0224 -> line 3202
 *   +0x022c -> line 3206
 *   +0x0234 -> line 3207
 *   +0x0248 -> line 3209
 *   +0x0250 -> line 3211
 *   +0x0260 -> line 3212
 *   +0x0264 -> line 3214
 *   +0x026c -> line 3217
 *   +0x0270 -> line 3225
 *   +0x0274 -> line 3226
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTransparenceProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned short uwChannelNumber;
    HIE_tdstSuperObject_* hModule;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned char bModule;
    int lValue;
    float xValue;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3037–3080 */
/* addr: 0x00228850  size: 436 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3037
 *   +0x0018 -> line 3038
 *   +0x0020 -> line 3047
 *   +0x0038 -> line 3050
 *   +0x0058 -> line 3053
 *   +0x0064 -> line 3054
 *   +0x0068 -> line 3053
 *   +0x006c -> line 3055
 *   +0x0074 -> line 3058
 *   +0x00f4 -> line 3064
 *   +0x00fc -> line 3066
 *   +0x010c -> line 3067
 *   +0x0110 -> line 3070
 *   +0x0198 -> line 3079
 *   +0x019c -> line 3080
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSkinMaterialProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    short xIndex;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    GLI_tdstMaterial_* hMaterial;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3018–3030 */
/* addr: 0x00228a10  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3018
 *   +0x0010 -> line 3020
 *   +0x001c -> line 3022
 *   +0x0028 -> line 3023
 *   +0x0034 -> line 3025
 *   +0x0044 -> line 3026
 *   +0x0050 -> line 3028
 *   +0x0054 -> line 3027
 *   +0x0058 -> line 3028
 *   +0x005c -> line 3027
 *   +0x0060 -> line 3028
 *   +0x0064 -> line 3027
 *   +0x0068 -> line 3028
 *   +0x006c -> line 3029
 *   +0x0078 -> line 3030
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateCharacterSkinList(tdst3dData_* h_3dData, GLI_tdstMaterial_* hMaterial, short _xSkinIndex)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2935–2962 */
/* addr: 0x00228a90  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2935
 *   +0x0018 -> line 2936
 *   +0x0020 -> line 2943
 *   +0x0038 -> line 2946
 *   +0x004c -> line 2949
 *   +0x0054 -> line 2951
 *   +0x0064 -> line 2952
 *   +0x006c -> line 2961
 *   +0x0070 -> line 2962
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDisplayProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2900–2928 */
/* addr: 0x00228b20  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2900
 *   +0x0008 -> line 2904
 *   +0x000c -> line 2900
 *   +0x0018 -> line 2904
 *   +0x0020 -> line 2905
 *   +0x0024 -> line 2904
 *   +0x0028 -> line 2907
 *   +0x003c -> line 2909
 *   +0x0044 -> line 2910
 *   +0x004c -> line 2912
 *   +0x0058 -> line 2913
 *   +0x0060 -> line 2915
 *   +0x0068 -> line 2916
 *   +0x0074 -> line 2918
 *   +0x007c -> line 2922
 *   +0x0084 -> line 2925
 *   +0x008c -> line 2927
 *   +0x0090 -> line 2928
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeActionRandomProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    void* hIdCard;
    DNM_stDynamics* p_stDynamics;
    tdstDynam_* h_Dynam;
    tdstState_* h_WantedState;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2760–2895 */
/* addr: 0x00228bd0  size: 584 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2760
 *   +0x0020 -> line 2766
 *   +0x0024 -> line 2760
 *   +0x0028 -> line 2764
 *   +0x002c -> line 2760
 *   +0x0034 -> line 2768
 *   +0x0038 -> line 2765
 *   +0x003c -> line 2773
 *   +0x0054 -> line 2775
 *   +0x0068 -> line 2815
 *   +0x00e4 -> line 2818
 *   +0x00ec -> line 2825
 *   +0x00fc -> line 2826
 *   +0x0100 -> line 2828
 *   +0x0108 -> line 2835
 *   +0x0118 -> line 2836
 *   +0x011c -> line 2835
 *   +0x0120 -> line 2838
 *   +0x0130 -> line 2839
 *   +0x0134 -> line 2841
 *   +0x013c -> line 2846
 *   +0x0148 -> line 2847
 *   +0x014c -> line 2846
 *   +0x0150 -> line 2851
 *   +0x0158 -> line 2854
 *   +0x0168 -> line 2855
 *   +0x016c -> line 2854
 *   +0x0170 -> line 2857
 *   +0x0174 -> line 2863
 *   +0x0180 -> line 2865
 *   +0x0190 -> line 2866
 *   +0x0194 -> line 2865
 *   +0x0198 -> line 2871
 *   +0x01c4 -> line 2873
 *   +0x01d0 -> line 2874
 *   +0x01d8 -> line 2876
 *   +0x01e4 -> line 2877
 *   +0x01ec -> line 2879
 *   +0x01f4 -> line 2880
 *   +0x0200 -> line 2882
 *   +0x0208 -> line 2886
 *   +0x0210 -> line 2889
 *   +0x0218 -> line 2892
 *   +0x021c -> line 2894
 *   +0x0220 -> line 2895
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeActionProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    void* hIdCard;
    DNM_stDynamics* p_stDynamics;
    tdstDynam_* h_Dynam;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    unsigned char bProportional;
    float xNLParameter;
    unsigned int ulNbFramesForMerging;
    unsigned char bHandleSkippedEventsIfRelevant;
    tdstState_* h_WantedState;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2674–2746 */
/* addr: 0x00228e20  size: 652 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2674
 *   +0x002c -> line 2680
 *   +0x0030 -> line 2686
 *   +0x0048 -> line 2690
 *   +0x005c -> line 2692
 *   +0x006c -> line 2697
 *   +0x0078 -> line 2698
 *   +0x0080 -> line 2700
 *   +0x008c -> line 2701
 *   +0x0094 -> line 2705
 *   +0x0098 -> line 2707
 *   +0x009c -> line 2705
 *   +0x00b4 -> line 2707
 *   +0x00d0 -> line 2715
 *   +0x00dc -> line 2716
 *   +0x00e0 -> line 2715
 *   +0x00e4 -> line 2716
 *   +0x0104 -> line 2718
 *   +0x0114 -> line 2719
 *   +0x0134 -> line 2721
 *   +0x0144 -> line 2722
 *   +0x0148 -> line 2721
 *   +0x014c -> line 2722
 *   +0x0168 -> line 2724
 *   +0x016c -> line 2725
 *   +0x0170 -> line 2724
 *   +0x0174 -> line 2725
 *   +0x0178 -> line 2724
 *   +0x017c -> line 2725
 *   +0x01ec -> line 2727
 *   +0x01f4 -> line 2731
 *   +0x020c -> line 2732
 *   +0x0214 -> line 2737
 *   +0x021c -> line 2740
 *   +0x0230 -> line 2741
 *   +0x0238 -> line 2740
 *   +0x0258 -> line 2741
 *   +0x0260 -> line 2745
 *   +0x0264 -> line 2746
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTurnPersoProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    MTH3D_tdstVector_ stVertex1;
    MTH3D_tdstVector_ stVertexDirection;
    HIE_tdstSuperObject_* p_stAimedObject;
    DNM_stDynamics* p_stDynamic;
    tdstDynam_* h_Dynam;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2621–2665 */
/* addr: 0x00239400  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2621
 *   +0x0020 -> line 2624
 *   +0x0024 -> line 2633
 *   +0x003c -> line 2637
 *   +0x004c -> line 2638
 *   +0x0050 -> line 2637
 *   +0x0054 -> line 2638
 *   +0x0070 -> line 2640
 *   +0x007c -> line 2641
 *   +0x0084 -> line 2643
 *   +0x008c -> line 2644
 *   +0x0094 -> line 2647
 *   +0x00b0 -> line 2651
 *   +0x00b4 -> line 2650
 *   +0x00b8 -> line 2651
 *   +0x00c0 -> line 2650
 *   +0x00c4 -> line 2651
 *   +0x0100 -> line 2652
 *   +0x010c -> line 2653
 *   +0x0114 -> line 2656
 *   +0x0128 -> line 2664
 *   +0x012c -> line 2665
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTurnProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstDynam_* hDynam;
    DNM_stDynamics* p_stDynamics;
    tdeProcedureId_ eProcedureId;
    float xAngle;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2575–2615 */
/* addr: 0x00239550  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2575
 *   +0x0008 -> line 2584
 *   +0x000c -> line 2575
 *   +0x001c -> line 2577
 *   +0x0028 -> line 2584
 *   +0x0030 -> line 2585
 *   +0x0034 -> line 2587
 *   +0x0038 -> line 2584
 *   +0x003c -> line 2587
 *   +0x0044 -> line 2603
 *   +0x0048 -> line 2587
 *   +0x004c -> line 2603
 *   +0x0070 -> line 2604
 *   +0x0098 -> line 2614
 *   +0x009c -> line 2615
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeMyComportIntelligenceAndReflexProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstComport_* p_stReflex;
    tdstComport_* p_stIntell;
    AI_tdstMind_* p_stMind;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2535–2569 */
/* addr: 0x00239610  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2535
 *   +0x0014 -> line 2537
 *   +0x0020 -> line 2542
 *   +0x0028 -> line 2561
 *   +0x002c -> line 2542
 *   +0x0030 -> line 2561
 *   +0x0064 -> line 2568
 *   +0x0068 -> line 2569
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeMyComportReflexProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    AI_tdstMind_* p_stMind;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2497–2530 */
/* addr: 0x00239690  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2497
 *   +0x0010 -> line 2499
 *   +0x001c -> line 2504
 *   +0x0028 -> line 2522
 *   +0x006c -> line 2529
 *   +0x0070 -> line 2530
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeMyComportIntelligenceProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    AI_tdstMind_* p_stMind;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2450–2492 */
/* addr: 0x00239720  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2450
 *   +0x0008 -> line 2459
 *   +0x000c -> line 2450
 *   +0x0018 -> line 2459
 *   +0x0024 -> line 2460
 *   +0x0034 -> line 2464
 *   +0x0038 -> line 2462
 *   +0x003c -> line 2464
 *   +0x0040 -> line 2462
 *   +0x0048 -> line 2464
 *   +0x0050 -> line 2467
 *   +0x0068 -> line 2484
 *   +0x00a0 -> line 2491
 *   +0x00a4 -> line 2492
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeComportReflexProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    AI_tdstMind_* p_stMind;
    unsigned char bTest;
    HIE_tdstSuperObject_* p_stAimedObject;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2395–2445 */
/* addr: 0x002397e0  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2395
 *   +0x0008 -> line 2404
 *   +0x000c -> line 2395
 *   +0x0018 -> line 2404
 *   +0x0024 -> line 2406
 *   +0x0030 -> line 2408
 *   +0x003c -> line 2409
 *   +0x0044 -> line 2412
 *   +0x0050 -> line 2416
 *   +0x0054 -> line 2414
 *   +0x0058 -> line 2416
 *   +0x005c -> line 2414
 *   +0x0064 -> line 2416
 *   +0x006c -> line 2419
 *   +0x0088 -> line 2437
 *   +0x00c0 -> line 2444
 *   +0x00c4 -> line 2445
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeComportIntelligenceProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    AI_tdstMind_* p_stMind;
    unsigned char bTest;
    HIE_tdstSuperObject_* p_stAimedObject;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2347–2364 */
/* addr: 0x002398c0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2347
 *   +0x000c -> line 2349
 *   +0x0018 -> line 2354
 *   +0x0028 -> line 2357
 *   +0x0030 -> line 2362
 *   +0x0038 -> line 2364
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInternalChangeComportProcedure(tdstIntelligence_* p_stAimedPersoIntelligenceOrReflex, tdstComport_* p_stComport, unsigned char _bContinueExecution)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2323–2335 */
/* addr: 0x00239910  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2323
 *   +0x0008 -> line 2329
 *   +0x000c -> line 2323
 *   +0x0010 -> line 2329
 *   +0x001c -> line 2331
 *   +0x0028 -> line 2332
 *   +0x0060 -> line 2334
 *   +0x0064 -> line 2335
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTraceProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stValue;
    int s_iActivated;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2317–2317 */
/* addr: 0x00239990  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2317
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stNoneProcedure(tdstNodeInterpret_* p_stTree, tdstNodeInterpret_* p_stTree2)
{
    return p_stTree2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2280–2301 */
/* addr: 0x002399a0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2280
 *   +0x0010 -> line 2283
 *   +0x0014 -> line 2286
 *   +0x0020 -> line 2289
 *   +0x0040 -> line 2292
 *   +0x0048 -> line 2293
 *   +0x0050 -> line 2295
 *   +0x0058 -> line 2300
 *   +0x005c -> line 2301
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stKeyboardProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    IPT_tdstEntryElement_* IPT_xHandle;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1988–2142 */
/* addr: 0x00239a10  size: 912 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1988
 *   +0x0024 -> line 1989
 *   +0x0028 -> line 1996
 *   +0x0040 -> line 2000
 *   +0x0068 -> line 2002
 *   +0x0070 -> line 2004
 *   +0x0080 -> line 2010
 *   +0x00a8 -> line 2013
 *   +0x00b4 -> line 2019
 *   +0x00bc -> line 2023
 *   +0x00c8 -> line 2029
 *   +0x00d0 -> line 2036
 *   +0x00e0 -> line 2037
 *   +0x00e4 -> line 2036
 *   +0x00e8 -> line 2037
 *   +0x0108 -> line 2039
 *   +0x0118 -> line 2042
 *   +0x011c -> line 2039
 *   +0x0120 -> line 2042
 *   +0x0148 -> line 2044
 *   +0x0150 -> line 2050
 *   +0x0164 -> line 2051
 *   +0x0170 -> line 2052
 *   +0x0188 -> line 2057
 *   +0x0190 -> line 2065
 *   +0x01a0 -> line 2066
 *   +0x01a4 -> line 2065
 *   +0x01a8 -> line 2066
 *   +0x01c8 -> line 2067
 *   +0x01d0 -> line 2069
 *   +0x01e0 -> line 2071
 *   +0x01e4 -> line 2069
 *   +0x01e8 -> line 2071
 *   +0x020c -> line 2073
 *   +0x0214 -> line 2081
 *   +0x0224 -> line 2082
 *   +0x022c -> line 2084
 *   +0x0238 -> line 2082
 *   +0x023c -> line 2084
 *   +0x0244 -> line 2087
 *   +0x0248 -> line 2084
 *   +0x024c -> line 2087
 *   +0x0274 -> line 2089
 *   +0x027c -> line 2097
 *   +0x028c -> line 2098
 *   +0x0294 -> line 2100
 *   +0x02a0 -> line 2098
 *   +0x02a4 -> line 2100
 *   +0x02ac -> line 2101
 *   +0x02d0 -> line 2103
 *   +0x02e0 -> line 2106
 *   +0x02e4 -> line 2103
 *   +0x02e8 -> line 2106
 *   +0x0314 -> line 2108
 *   +0x031c -> line 2112
 *   +0x0328 -> line 2113
 *   +0x0330 -> line 2118
 *   +0x033c -> line 2119
 *   +0x0344 -> line 2124
 *   +0x0350 -> line 2125
 *   +0x0358 -> line 2129
 *   +0x0364 -> line 2130
 *   +0x036c -> line 2140
 *   +0x0370 -> line 2142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stPersoLightProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned char bOnOff;
    GEO_tdstColor_ stColor;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstMSLight_* h_MSLight;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1850–1983 */
/* addr: 0x00239da0  size: 748 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1850
 *   +0x0018 -> line 1852
 *   +0x001c -> line 1858
 *   +0x0048 -> line 1863
 *   +0x0050 -> line 1864
 *   +0x0054 -> line 1863
 *   +0x0058 -> line 1864
 *   +0x0080 -> line 1871
 *   +0x008c -> line 1872
 *   +0x0098 -> line 1874
 *   +0x009c -> line 1877
 *   +0x00a4 -> line 1883
 *   +0x00b0 -> line 1884
 *   +0x00bc -> line 1886
 *   +0x00d0 -> line 1889
 *   +0x00d8 -> line 1896
 *   +0x00e0 -> line 1897
 *   +0x0104 -> line 1899
 *   +0x0108 -> line 1901
 *   +0x0118 -> line 1904
 *   +0x013c -> line 1906
 *   +0x014c -> line 1909
 *   +0x016c -> line 1912
 *   +0x0174 -> line 1919
 *   +0x017c -> line 1920
 *   +0x01a0 -> line 1922
 *   +0x01a4 -> line 1924
 *   +0x01b4 -> line 1927
 *   +0x01d4 -> line 1930
 *   +0x01dc -> line 1936
 *   +0x01e8 -> line 1939
 *   +0x0200 -> line 1940
 *   +0x0204 -> line 1947
 *   +0x0208 -> line 1940
 *   +0x020c -> line 1946
 *   +0x0210 -> line 1947
 *   +0x0214 -> line 1941
 *   +0x021c -> line 1940
 *   +0x0220 -> line 1942
 *   +0x0228 -> line 1941
 *   +0x022c -> line 1943
 *   +0x0234 -> line 1942
 *   +0x0238 -> line 1944
 *   +0x0240 -> line 1943
 *   +0x0244 -> line 1944
 *   +0x0248 -> line 1951
 *   +0x0254 -> line 1956
 *   +0x0260 -> line 1959
 *   +0x0278 -> line 1960
 *   +0x0280 -> line 1966
 *   +0x0284 -> line 1961
 *   +0x0288 -> line 1966
 *   +0x028c -> line 1967
 *   +0x0290 -> line 1962
 *   +0x0294 -> line 1963
 *   +0x0298 -> line 1964
 *   +0x029c -> line 1960
 *   +0x02a0 -> line 1961
 *   +0x02a8 -> line 1962
 *   +0x02ac -> line 1967
 *   +0x02b0 -> line 1962
 *   +0x02b4 -> line 1963
 *   +0x02bc -> line 1964
 *   +0x02c4 -> line 1971
 *   +0x02d0 -> line 1982
 *   +0x02d4 -> line 1983
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stFogProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    GEO_tdstColor_ stColor;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    char cGlobalFogIsOn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1801–1837 */
/* addr: 0x0023a090  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1801
 *   +0x001c -> line 1804
 *   +0x0020 -> line 1810
 *   +0x0038 -> line 1815
 *   +0x0048 -> line 1816
 *   +0x004c -> line 1818
 *   +0x006c -> line 1821
 *   +0x0078 -> line 1822
 *   +0x0080 -> line 1826
 *   +0x008c -> line 1827
 *   +0x0090 -> line 1837
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeActivationChannelProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    unsigned short uwChannelNumber;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1759–1796 */
/* addr: 0x0023a140  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1759
 *   +0x0004 -> line 1762
 *   +0x0008 -> line 1759
 *   +0x0010 -> line 1760
 *   +0x0014 -> line 1762
 *   +0x0024 -> line 1765
 *   +0x002c -> line 1767
 *   +0x0034 -> line 1795
 *   +0x0038 -> line 1796
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSaveGameProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case eProc_QuitGame:
        fn_vChangeEngineMode(2);
        fn_vSetProcedureActionReturn(3);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1704–1754 */
/* addr: 0x0023a190  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1704
 *   +0x0004 -> line 1705
 *   +0x0008 -> line 1704
 *   +0x000c -> line 1705
 *   +0x0010 -> line 1704
 *   +0x0014 -> line 1705
 *   +0x0018 -> line 1704
 *   +0x0024 -> line 1705
 *   +0x002c -> line 1710
 *   +0x0030 -> line 1706
 *   +0x0034 -> line 1710
 *   +0x003c -> line 1711
 *   +0x0048 -> line 1713
 *   +0x0078 -> line 1717
 *   +0x007c -> line 1718
 *   +0x0088 -> line 1721
 *   +0x0098 -> line 1723
 *   +0x00a8 -> line 1724
 *   +0x00b0 -> line 1730
 *   +0x00c0 -> line 1732
 *   +0x00c8 -> line 1737
 *   +0x00d8 -> line 1738
 *   +0x00e0 -> line 1742
 *   +0x00f0 -> line 1743
 *   +0x00f4 -> line 1754
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stModuleControlProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int lModuleId;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1587–1662 */
/* addr: 0x0023a2a0  size: 672 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1587
 *   +0x0008 -> line 1592
 *   +0x000c -> line 1587
 *   +0x0030 -> line 1589
 *   +0x0034 -> line 1592
 *   +0x003c -> line 1593
 *   +0x005c -> line 1601
 *   +0x0064 -> line 1602
 *   +0x0068 -> line 1601
 *   +0x006c -> line 1602
 *   +0x0078 -> line 1603
 *   +0x009c -> line 1604
 *   +0x00ac -> line 1605
 *   +0x00d8 -> line 1606
 *   +0x00e8 -> line 1607
 *   +0x00ec -> line 1606
 *   +0x00f0 -> line 1607
 *   +0x0118 -> line 1609
 *   +0x0120 -> line 1610
 *   +0x0124 -> line 1612
 *   +0x0140 -> line 1614
 *   +0x0148 -> line 1624
 *   +0x014c -> line 1620
 *   +0x0150 -> line 1622
 *   +0x0154 -> line 1624
 *   +0x015c -> line 1625
 *   +0x0168 -> line 1626
 *   +0x0174 -> line 1628
 *   +0x017c -> line 1626
 *   +0x0180 -> line 1628
 *   +0x0190 -> line 1629
 *   +0x0198 -> line 1631
 *   +0x01a0 -> line 1634
 *   +0x01b8 -> line 1635
 *   +0x01d8 -> line 1636
 *   +0x01e0 -> line 1638
 *   +0x01f4 -> line 1641
 *   +0x01f8 -> line 1640
 *   +0x01fc -> line 1641
 *   +0x0204 -> line 1642
 *   +0x022c -> line 1644
 *   +0x0234 -> line 1647
 *   +0x0244 -> line 1649
 *   +0x0250 -> line 1650
 *   +0x026c -> line 1652
 *   +0x0270 -> line 1662
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBuildObjectTableFromTableAndStringProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    short wSourceObject;
    tdstObjectsTablesList_* hSourceObjectTable;
    short wTargetObject;
    short wNbObjectsInSourceTable;
    short wNbObjectsInTargetTable;
    stTfmtStatus_ stStatus;
    int lStart;
    char* pszChar;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1514–1570 */
/* addr: 0x0023a540  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1514
 *   +0x0008 -> line 1519
 *   +0x000c -> line 1514
 *   +0x0018 -> line 1516
 *   +0x001c -> line 1519
 *   +0x0024 -> line 1521
 *   +0x004c -> line 1526
 *   +0x0050 -> line 1525
 *   +0x0054 -> line 1526
 *   +0x005c -> line 1527
 *   +0x0060 -> line 1526
 *   +0x0064 -> line 1527
 *   +0x0070 -> line 1532
 *   +0x0078 -> line 1538
 *   +0x007c -> line 1539
 *   +0x008c -> line 1541
 *   +0x0094 -> line 1543
 *   +0x009c -> line 1544
 *   +0x00a4 -> line 1551
 *   +0x00ac -> line 1555
 *   +0x00bc -> line 1570
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stLinkTableProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstObjectsTablesList_* hTable;
    unsigned char ucObj1;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1462–1507 */
/* addr: 0x0023a620  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1462
 *   +0x0008 -> line 1467
 *   +0x000c -> line 1462
 *   +0x0020 -> line 1464
 *   +0x0024 -> line 1467
 *   +0x002c -> line 1468
 *   +0x0030 -> line 1467
 *   +0x0034 -> line 1470
 *   +0x0044 -> line 1473
 *   +0x0050 -> line 1475
 *   +0x005c -> line 1476
 *   +0x0064 -> line 1479
 *   +0x0078 -> line 1482
 *   +0x00a4 -> line 1485
 *   +0x00ac -> line 1486
 *   +0x00b4 -> line 1490
 *   +0x00bc -> line 1491
 *   +0x00c4 -> line 1495
 *   +0x00d0 -> line 1496
 *   +0x00d8 -> line 1506
 *   +0x00dc -> line 1507
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stListEnsembleProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstList_* p_stListC;
    tdstList_* p_stListB;
    tdstList_* p_stListA;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1305–1457 */
/* addr: 0x0023a720  size: 1080 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1305
 *   +0x0008 -> line 1310
 *   +0x000c -> line 1305
 *   +0x001c -> line 1307
 *   +0x0020 -> line 1310
 *   +0x0028 -> line 1313
 *   +0x0054 -> line 1317
 *   +0x0068 -> line 1319
 *   +0x0080 -> line 1320
 *   +0x0088 -> line 1324
 *   +0x00ac -> line 1326
 *   +0x00c8 -> line 1327
 *   +0x00d0 -> line 1331
 *   +0x00e0 -> line 1332
 *   +0x00e4 -> line 1331
 *   +0x00e8 -> line 1332
 *   +0x00f0 -> line 1333
 *   +0x00f8 -> line 1338
 *   +0x010c -> line 1340
 *   +0x0124 -> line 1341
 *   +0x012c -> line 1345
 *   +0x0144 -> line 1349
 *   +0x015c -> line 1354
 *   +0x017c -> line 1355
 *   +0x0198 -> line 1359
 *   +0x01a8 -> line 1360
 *   +0x01ac -> line 1359
 *   +0x01b0 -> line 1360
 *   +0x01b8 -> line 1361
 *   +0x01c0 -> line 1365
 *   +0x01d0 -> line 1366
 *   +0x01d4 -> line 1365
 *   +0x01d8 -> line 1366
 *   +0x01e0 -> line 1367
 *   +0x01e8 -> line 1377
 *   +0x0200 -> line 1380
 *   +0x0270 -> line 1383
 *   +0x0278 -> line 1392
 *   +0x0290 -> line 1395
 *   +0x0310 -> line 1397
 *   +0x0318 -> line 1407
 *   +0x032c -> line 1408
 *   +0x0330 -> line 1407
 *   +0x0334 -> line 1410
 *   +0x0340 -> line 1411
 *   +0x0348 -> line 1413
 *   +0x035c -> line 1414
 *   +0x0370 -> line 1416
 *   +0x0378 -> line 1417
 *   +0x0384 -> line 1418
 *   +0x0390 -> line 1420
 *   +0x0398 -> line 1429
 *   +0x03ac -> line 1430
 *   +0x03b0 -> line 1429
 *   +0x03b4 -> line 1432
 *   +0x03c0 -> line 1433
 *   +0x03c8 -> line 1436
 *   +0x03e8 -> line 1441
 *   +0x03f8 -> line 1443
 *   +0x0400 -> line 1444
 *   +0x040c -> line 1445
 *   +0x0418 -> line 1447
 *   +0x041c -> line 1457
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stListProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstBrain_* hBrain;
    unsigned char ucPos;
    AI_tdstAIModel_* p_stModel;
    HIE_tdstSuperObject_* hPerso;
    tdstFamilyList_* hFamily;
    tdstList_* p_stList;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam2;
    tdstGetSetParam_ stParam1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1272–1296 */
/* addr: 0x0023ab60  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1272
 *   +0x0020 -> line 1276
 *   +0x0034 -> line 1279
 *   +0x0044 -> line 1282
 *   +0x004c -> line 1283
 *   +0x0054 -> line 1285
 *   +0x0064 -> line 1287
 *   +0x006c -> line 1292
 *   +0x0078 -> line 1294
 *   +0x00f8 -> line 1295
 *   +0x0108 -> line 1296
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vFillListWithAllPersoOfAModel(tdstList_* _p_stList, HIE_tdstSuperObject_* _hFather, AI_tdstAIModel_* _p_stModel)
{
    tdstBrain_* hBrain;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1249–1268 */
/* addr: 0x0023ac90  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1249
 *   +0x0020 -> line 1253
 *   +0x0034 -> line 1256
 *   +0x0044 -> line 1258
 *   +0x0058 -> line 1260
 *   +0x0060 -> line 1264
 *   +0x006c -> line 1266
 *   +0x00e0 -> line 1267
 *   +0x00f0 -> line 1268
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vFillListWithAllPersoOfAFamilly(tdstList_* _p_stList, HIE_tdstSuperObject_* _hFather, tdstFamilyList_* _hFamily)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1148–1242 */
/* addr: 0x0023ada0  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1148
 *   +0x0008 -> line 1153
 *   +0x000c -> line 1148
 *   +0x0020 -> line 1150
 *   +0x0024 -> line 1153
 *   +0x0030 -> line 1163
 *   +0x003c -> line 1167
 *   +0x0048 -> line 1168
 *   +0x004c -> line 1170
 *   +0x005c -> line 1173
 *   +0x0060 -> line 1170
 *   +0x0064 -> line 1173
 *   +0x0074 -> line 1174
 *   +0x007c -> line 1180
 *   +0x008c -> line 1184
 *   +0x0098 -> line 1186
 *   +0x00ac -> line 1187
 *   +0x00b4 -> line 1189
 *   +0x00c0 -> line 1191
 *   +0x00d4 -> line 1192
 *   +0x00dc -> line 1199
 *   +0x00f0 -> line 1204
 *   +0x00f8 -> line 1205
 *   +0x0100 -> line 1209
 *   +0x0110 -> line 1210
 *   +0x0118 -> line 1213
 *   +0x012c -> line 1221
 *   +0x0144 -> line 1222
 *   +0x014c -> line 1225
 *   +0x0160 -> line 1230
 *   +0x0178 -> line 1241
 *   +0x017c -> line 1242
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stListZDDZDEProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned short xMask;
    short xIndex;
    unsigned short xPersoMask;
    tdstList_* p_stList;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1095–1139 */
/* addr: 0x0023af40  size: 416 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1095
 *   +0x0008 -> line 1099
 *   +0x000c -> line 1095
 *   +0x001c -> line 1097
 *   +0x0020 -> line 1099
 *   +0x0028 -> line 1104
 *   +0x0068 -> line 1107
 *   +0x00bc -> line 1112
 *   +0x00c4 -> line 1113
 *   +0x00cc -> line 1117
 *   +0x00d4 -> line 1118
 *   +0x00dc -> line 1123
 *   +0x0130 -> line 1128
 *   +0x0184 -> line 1139
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stHitPointsMaxProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1037–1088 */
/* addr: 0x0023b0e0  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1037
 *   +0x0008 -> line 1041
 *   +0x000c -> line 1037
 *   +0x001c -> line 1039
 *   +0x0020 -> line 1041
 *   +0x0028 -> line 1046
 *   +0x0050 -> line 1049
 *   +0x00a8 -> line 1055
 *   +0x00b0 -> line 1054
 *   +0x00b4 -> line 1055
 *   +0x00bc -> line 1056
 *   +0x00c0 -> line 1055
 *   +0x00c4 -> line 1056
 *   +0x00cc -> line 1058
 *   +0x00d4 -> line 1062
 *   +0x00dc -> line 1063
 *   +0x00e4 -> line 1068
 *   +0x00ec -> line 1069
 *   +0x00f4 -> line 1074
 *   +0x014c -> line 1078
 *   +0x01a4 -> line 1087
 *   +0x01a8 -> line 1088
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stHitPointsProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstEngineObject_* hPerso;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1016–1030 */
/* addr: 0x0023b2b0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1016
 *   +0x0008 -> line 1022
 *   +0x0010 -> line 1030
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stLogWindowProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int stParam[4];
    return fn_p_stEvalTree(p_SuperObjPerso, p_stTree, (tdstGetSetParam_*)stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 962–1007 */
/* addr: 0x0023b2d0  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 962
 *   +0x001c -> line 963
 *   +0x0020 -> line 969
 *   +0x0038 -> line 972
 *   +0x004c -> line 976
 *   +0x0058 -> line 978
 *   +0x0060 -> line 980
 *   +0x0074 -> line 987
 *   +0x0078 -> line 990
 *   +0x0084 -> line 987
 *   +0x0088 -> line 992
 *   +0x0094 -> line 994
 *   +0x0098 -> line 992
 *   +0x009c -> line 996
 *   +0x00a0 -> line 994
 *   +0x00a4 -> line 996
 *   +0x00a8 -> line 994
 *   +0x00ac -> line 995
 *   +0x00b0 -> line 994
 *   +0x00b4 -> line 995
 *   +0x00cc -> line 996
 *   +0x00d4 -> line 998
 *   +0x00d8 -> line 1000
 *   +0x00dc -> line 1007
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDynamProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulIndex;
    tdstCineinfo_* hCineinfo;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 922–956 */
/* addr: 0x0023b3d0  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 922
 *   +0x0008 -> line 931
 *   +0x000c -> line 922
 *   +0x0014 -> line 924
 *   +0x0018 -> line 931
 *   +0x0030 -> line 937
 *   +0x0044 -> line 941
 *   +0x0094 -> line 945
 *   +0x0098 -> line 956
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMiscMoreProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam2;
    tdstGetSetParam_ stParam1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 732–915 */
/* addr: 0x0023b480  size: 876 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 732
 *   +0x0008 -> line 736
 *   +0x000c -> line 732
 *   +0x0024 -> line 734
 *   +0x0028 -> line 736
 *   +0x0030 -> line 738
 *   +0x00ac -> line 742
 *   +0x00b0 -> line 746
 *   +0x00c8 -> line 749
 *   +0x00d0 -> line 751
 *   +0x00e0 -> line 754
 *   +0x00ec -> line 759
 *   +0x00f0 -> line 761
 *   +0x00f8 -> line 763
 *   +0x0100 -> line 769
 *   +0x0108 -> line 773
 *   +0x0114 -> line 774
 *   +0x011c -> line 777
 *   +0x0120 -> line 779
 *   +0x012c -> line 784
 *   +0x0130 -> line 785
 *   +0x0134 -> line 784
 *   +0x0138 -> line 785
 *   +0x013c -> line 787
 *   +0x0144 -> line 790
 *   +0x014c -> line 795
 *   +0x0158 -> line 797
 *   +0x0168 -> line 799
 *   +0x0170 -> line 800
 *   +0x0178 -> line 802
 *   +0x0184 -> line 803
 *   +0x01b8 -> line 806
 *   +0x01c0 -> line 810
 *   +0x01c8 -> line 812
 *   +0x01d4 -> line 813
 *   +0x01d8 -> line 815
 *   +0x01dc -> line 817
 *   +0x01ec -> line 820
 *   +0x01f4 -> line 824
 *   +0x0218 -> line 825
 *   +0x0220 -> line 832
 *   +0x0228 -> line 834
 *   +0x0230 -> line 838
 *   +0x0238 -> line 839
 *   +0x0240 -> line 848
 *   +0x024c -> line 849
 *   +0x0264 -> line 851
 *   +0x0270 -> line 852
 *   +0x0278 -> line 854
 *   +0x0280 -> line 857
 *   +0x0290 -> line 860
 *   +0x02a8 -> line 862
 *   +0x02bc -> line 863
 *   +0x02c4 -> line 866
 *   +0x02d0 -> line 869
 *   +0x02e0 -> line 873
 *   +0x02e4 -> line 881
 *   +0x02f0 -> line 885
 *   +0x0308 -> line 886
 *   +0x0320 -> line 894
 *   +0x0328 -> line 898
 *   +0x032c -> line 899
 *   +0x0334 -> line 900
 *   +0x033c -> line 904
 *   +0x0344 -> line 905
 *   +0x0348 -> line 915
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMiscProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char* pMapName;
    DNM_stDynamics* p_stDynamic;
    tdstDynam_* hDynam;
    HIE_tdstSuperObject_* hChild;
    unsigned char bPlatform;
    tdstStandardGame_* hStdGame;
    unsigned char bFreeze;
    tdstEngineObject_* p_stObj;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 629–715 */
/* addr: 0x0023b7f0  size: 704 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 629
 *   +0x0004 -> line 639
 *   +0x0008 -> line 629
 *   +0x0028 -> line 636
 *   +0x002c -> line 629
 *   +0x0030 -> line 630
 *   +0x0034 -> line 639
 *   +0x0050 -> line 642
 *   +0x0078 -> line 644
 *   +0x007c -> line 642
 *   +0x0080 -> line 644
 *   +0x0084 -> line 642
 *   +0x0088 -> line 644
 *   +0x008c -> line 642
 *   +0x0094 -> line 644
 *   +0x00ac -> line 647
 *   +0x00b0 -> line 650
 *   +0x00c8 -> line 652
 *   +0x00fc -> line 654
 *   +0x0144 -> line 655
 *   +0x0158 -> line 661
 *   +0x0160 -> line 664
 *   +0x0188 -> line 666
 *   +0x0190 -> line 671
 *   +0x01a8 -> line 674
 *   +0x01b0 -> line 679
 *   +0x01b8 -> line 682
 *   +0x01bc -> line 679
 *   +0x01c0 -> line 685
 *   +0x01d4 -> line 687
 *   +0x0208 -> line 689
 *   +0x024c -> line 690
 *   +0x0260 -> line 696
 *   +0x0268 -> line 699
 *   +0x0290 -> line 701
 *   +0x0298 -> line 704
 *   +0x029c -> line 715
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stKillPersoAndClearVariableProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    _tdstCheapCharacterList* pCheapList;
    unsigned int i;
    unsigned char ucVarId;
    AI_tdstMind_* p_stMind;
    tdstGetSetParam_ stParam;
    tdstEngineObject_* hKilledObject;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 626–626 */
/* addr: 0x0023bab0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 626
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDeletePersoFromGameProcedure(tdstNodeInterpret_* p_stTree, tdstNodeInterpret_* p_stTree2)
{
    return p_stTree2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 500–566 */
/* addr: 0x0023bac0  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 500
 *   +0x0004 -> line 502
 *   +0x0008 -> line 500
 *   +0x001c -> line 501
 *   +0x0020 -> line 502
 *   +0x0050 -> line 506
 *   +0x0058 -> line 511
 *   +0x0080 -> line 512
 *   +0x0084 -> line 514
 *   +0x008c -> line 515
 *   +0x0098 -> line 518
 *   +0x00a0 -> line 521
 *   +0x00a8 -> line 527
 *   +0x00b4 -> line 529
 *   +0x00bc -> line 535
 *   +0x00c4 -> line 536
 *   +0x00cc -> line 538
 *   +0x00d8 -> line 540
 *   +0x00e0 -> line 543
 *   +0x00e8 -> line 544
 *   +0x00f0 -> line 546
 *   +0x00f8 -> line 551
 *   +0x0104 -> line 555
 *   +0x010c -> line 556
 *   +0x0110 -> line 566
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMiscNoProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    void* hMecIdCard;
    DNM_stDynamics* p_stDynamics;
    tdstDynam_* h_Dynam;
    tdstComport_* p_stComport;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 431–492 */
/* addr: 0x0023bbf0  size: 420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 431
 *   +0x0020 -> line 432
 *   +0x0024 -> line 439
 *   +0x003c -> line 442
 *   +0x0080 -> line 446
 *   +0x008c -> line 448
 *   +0x0090 -> line 446
 *   +0x0094 -> line 448
 *   +0x00cc -> line 450
 *   +0x00d4 -> line 456
 *   +0x00d8 -> line 455
 *   +0x00e8 -> line 456
 *   +0x00f0 -> line 461
 *   +0x00fc -> line 463
 *   +0x0100 -> line 461
 *   +0x0104 -> line 463
 *   +0x013c -> line 464
 *   +0x0144 -> line 470
 *   +0x0150 -> line 472
 *   +0x0160 -> line 474
 *   +0x0168 -> line 479
 *   +0x0174 -> line 480
 *   +0x0184 -> line 481
 *   +0x0188 -> line 492
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMiscUltraProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 232–277 */
/* addr: 0x0023bda0  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 232
 *   +0x0004 -> line 237
 *   +0x0008 -> line 232
 *   +0x0024 -> line 233
 *   +0x0028 -> line 237
 *   +0x0044 -> line 242
 *   +0x0054 -> line 243
 *   +0x0058 -> line 242
 *   +0x005c -> line 248
 *   +0x0070 -> line 251
 *   +0x009c -> line 254
 *   +0x00a4 -> line 255
 *   +0x00ac -> line 257
 *   +0x00b4 -> line 258
 *   +0x00bc -> line 260
 *   +0x00c4 -> line 261
 *   +0x00cc -> line 263
 *   +0x00d4 -> line 264
 *   +0x00dc -> line 266
 *   +0x00e4 -> line 267
 *   +0x00ec -> line 270
 *   +0x00f4 -> line 272
 *   +0x00fc -> line 276
 *   +0x0100 -> line 277
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stR3SetValue(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulValue;
    unsigned int ulIndEnv;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}
