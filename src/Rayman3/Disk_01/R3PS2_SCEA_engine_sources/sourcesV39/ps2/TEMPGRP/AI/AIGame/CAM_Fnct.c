/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Fnct.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/DNM.h"
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/GLI.h"
#include "r3/GMT.h"
#include "r3/HIE.h"
#include "r3/LST2.h"
#include "r3/MAT.h"
#include "r3/MOR.h"
#include "r3/MTH.h"
#include "r3/SECT.h"
#include "r3/WP.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct anon_0 anon_0;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef union anon_3 anon_3;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct CAM_tdstComputedPosition_ CAM_tdstComputedPosition_;
typedef struct CAM_tdstUpdateCamera_ CAM_tdstUpdateCamera_;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;

struct anon_0 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
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

struct CAM_tdstComputedPosition_ {
    MTH3D_tdstVector_ stTarget; /* +0x0 */
    MTH3D_tdstVector_ stMovePos; /* +0xc */
    MTH3D_tdstVector_ stRefAxisZ; /* +0x18 */
    float xLinearSpeed; /* +0x24 */
    float xAngularSpeed; /* +0x28 */
    float xTargetSpeed; /* +0x2c */
};

struct CAM_tdstUpdateCamera_ {
    DNM_stReport* p_stReport; /* +0x0 */
    DNM_stDynamics* p_stDynamics; /* +0x4 */
    tdstCineinfo_* hCineinfo; /* +0x8 */
    tdstInternalStructurCineinfo_* hCineinfoWork; /* +0xc */
    tdstInternalStructurCineinfo_* hCineinfoCurrent; /* +0x10 */
    tdstInternalStructurCineinfo_* hCineinfoInit; /* +0x14 */
    tdstInternalStructurCineinfo_* hCineinfoVisibility; /* +0x18 */
    HIE_tdstSuperObject_* hSuperObjCamera; /* +0x1c */
    MTH3D_tdstVector_ stCurrentCameraPos; /* +0x20 */
    MTH3D_tdstVector_ stWantedCameraPos; /* +0x2c */
    MTH3D_tdstVector_ stRealWantedCameraPos; /* +0x38 */
    MTH3D_tdstVector_ stTargetedPersoRealPos; /* +0x44 */
    MTH3D_tdstVector_ stTargetedPersoPos; /* +0x50 */
    MTH3D_tdstVector_ stSecondTargetedPersoRealPos; /* +0x5c */
    MTH3D_tdstVector_ stSecondTargetedPersoPos; /* +0x68 */
    char cHasCutAlpha; /* +0x74 */
    float xAngleAlphaCut; /* +0x78 */
    float xAngleDeltaAlphaCut; /* +0x7c */
    char cTgtPersoIsMovingAbsolute; /* +0x80 */
    MTH3D_tdstVector_ stTgtPersoMoveAbsolute; /* +0x84 */
    char cTgtPersoIsMovingRelative; /* +0x90 */
    MTH3D_tdstVector_ stTgtPersoMoveRelative; /* +0x94 */
    CAM_tdstComputedPosition_ stCptPos; /* +0xa0 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_2 {
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
    anon_1 m_stData6; /* +0x34 */
    anon_2 m_stData7; /* +0x44 */
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

tdstEngineStructure_ g_stEngineStructure;
char cCanTestStatic;
char cNoDynChangeTheta;
char cRefAxisIsAlreadyComputed;

/* Declared without a narrow return type here: retail passes the result on without an andi. */
int fn_ucGetFunctionUltraOperator(tdeFuncId_ eFuncId);
void fn_vGetUltraOperatorPerso(int bYouHaveRightToUseThisFunction, HIE_tdstSuperObject_* hCurrentSuperObjPerso, HIE_tdstSuperObject_** hNewSuperObjPerso);
tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
tdstNodeInterpret_* CAM_fn_p_GetViewportCoordinates(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
void fn_vGetViewportCoordinates(MTH3D_tdstVector_* pDestination2D, MTH3D_tdstVector_* pWorldPoint, GLD_tdstViewportAttributes_* _p_stViewport);
tdstNodeInterpret_* CAM_fn_p_stGetSetMirrorFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stGetSetTransparencyFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stGetBestPos(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stComputeCurrentTarget(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stComputeTargetWithTgtPerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stGetCameraOfViewport(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stGetSectorCameraType(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stGetTypeOfViewport(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stGetTargetedSuperObject(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stGetRealParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* CAM_fn_p_stGetVectorParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);

void CAM_fn_vSetCineinfoWorkFromCurrent(tdstCineinfo_* _hCineinfo);
void CAM_fn_vInitCameraStructure(HIE_tdstSuperObject_* _hSuperObjPerso, CAM_tdstUpdateCamera_* _p_stStruct);
void CAM_fn_vComputeReferencePoint(CAM_tdstUpdateCamera_* _p_stStruct);
void CAM_fn_vComputeTarget(CAM_tdstUpdateCamera_* _p_stStruct);
void CAM_fn_vComputeRealWantedPos(CAM_tdstUpdateCamera_* _p_stStruct);
void CAM_fn_vComputeMovePosWithDynTheta(CAM_tdstUpdateCamera_* _p_stStruct);
void CAM_fn_vForceFailureVisibility(CAM_tdstUpdateCamera_* _p_stStruct);

DNM_stParsingDatas* fn_p_stDynamGetParsingDatas(tdstDynam_* _hDynam);

void CAM_fn_vSetCineinfoWorkFromCurrent(tdstCineinfo_* _hCineinfo);
void CAM_fn_vInitCameraStructure(HIE_tdstSuperObject_* _hSuperObjPerso, CAM_tdstUpdateCamera_* _p_stStruct);
void CAM_fn_vComputeReferencePoint(CAM_tdstUpdateCamera_* _p_stStruct);
void CAM_fn_vComputeTarget(CAM_tdstUpdateCamera_* _p_stStruct);

HIE_tdstSuperObject_* CAM_fn_hGetActiveCamera(int lViewportNumber);
void fn_vOnAIErm_M_UpdateLastError(int FatalErrorNum, char* szMsg);

HIE_tdstSuperObject_* fn_h_SectInfoGetCurrentSector(tdstSectInfo_* h_SectInfo);
char fn_cGetSectorCameraType(HIE_tdstSuperObject_* _hSprObjSector);

tdstNodeInterpret_* CAM_fn_p_stGetVectorParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hCamera;
    tdstCineinfo_* hCineInfo;
    int lCurrentValue;
    MTH3D_tdstVector_* p_stInitialValue = NULL;
    MTH3D_tdstVector_* p_stCurrentValue = NULL;
    MTH3D_tdstVector_* p_stWorkValue = NULL;
    MTH3D_tdstVector_* p_stVisValue = NULL;
    tdeFuncId_ eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hCamera);
    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    lCurrentValue = p_stValue->uDummy.uParam.lValue;
    switch (eFuncId)
    {
    case eFct_Cam_GetShiftTarget:
        p_stInitialValue = &hCineInfo->hInit->stShiftTarget;
        p_stCurrentValue = &hCineInfo->hCurrent->stShiftTarget;
        p_stWorkValue = &hCineInfo->hWork->stShiftTarget;
        p_stVisValue = &hCineInfo->hVisibility->stShiftTarget;
        break;
    case eFct_Cam_GetShiftPos:
        p_stInitialValue = &hCineInfo->hInit->stShiftPos;
        p_stCurrentValue = &hCineInfo->hCurrent->stShiftPos;
        p_stWorkValue = &hCineInfo->hWork->stShiftPos;
        p_stVisValue = &hCineInfo->hVisibility->stShiftPos;
        break;
    }
    {
        MTH3D_tdstVector_* p_stValueVector;
        if (lCurrentValue == 1)
        {
            if (hCineInfo->ucVolIAFlags & 1)
                p_stValueVector = p_stWorkValue;
            else
                p_stValueVector = p_stCurrentValue;
        }
        else if (lCurrentValue == -1)
            p_stValueVector = p_stInitialValue;
        else if (hCineInfo->ucPerIAFlags & 2)
            p_stValueVector = p_stVisValue;
        else
            p_stValueVector = p_stCurrentValue;
        ((int*)&p_stValue->uDummy.uParam.stVectorValue)[0] = ((int*)p_stValueVector)[0];
    }
    {
        MTH3D_tdstVector_* p_stValueVector;
        if (lCurrentValue == 1)
        {
            if (hCineInfo->ucVolIAFlags & 1)
                p_stValueVector = p_stWorkValue;
            else
                p_stValueVector = p_stCurrentValue;
        }
        else if (lCurrentValue == -1)
            p_stValueVector = p_stInitialValue;
        else if (hCineInfo->ucPerIAFlags & 2)
            p_stValueVector = p_stVisValue;
        else
            p_stValueVector = p_stCurrentValue;
        ((int*)&p_stValue->uDummy.uParam.stVectorValue)[1] = ((int*)p_stValueVector)[1];
    }
    {
        MTH3D_tdstVector_* p_stValueVector;
        if (lCurrentValue == 1)
        {
            if (hCineInfo->ucVolIAFlags & 1)
                p_stValueVector = p_stWorkValue;
            else
                p_stValueVector = p_stCurrentValue;
        }
        else if (lCurrentValue == -1)
            p_stValueVector = p_stInitialValue;
        else if (hCineInfo->ucPerIAFlags & 2)
            p_stValueVector = p_stVisValue;
        else
            p_stValueVector = p_stCurrentValue;
        ((int*)&p_stValue->uDummy.uParam.stVectorValue)[2] = ((int*)p_stValueVector)[2];
    }
    p_stValue->eType = E_vt_Vector;
    return p_stTree;
}

tdstNodeInterpret_* CAM_fn_p_stGetRealParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hCamera;
    tdstCineinfo_* hCineInfo;
    int lCurrentValue;
    float* p_xInitialValue = NULL;
    float* p_xCurrentValue = NULL;
    float* p_xWorkValue = NULL;
    float* p_xVisValue = NULL;
    tdeFuncId_ eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hCamera);
    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    lCurrentValue = p_stValue->uDummy.uParam.lValue;
    switch (eFuncId)
    {
    case eFct_Cam_GetDistMin:
        p_xInitialValue = &hCineInfo->hInit->xDistMin;
        p_xCurrentValue = &hCineInfo->hCurrent->xDistMin;
        p_xWorkValue = &hCineInfo->hWork->xDistMin;
        p_xVisValue = &hCineInfo->hVisibility->xDistMin;
        break;
    case eFct_Cam_GetDistMax:
        p_xInitialValue = &hCineInfo->hInit->xDistMax;
        p_xCurrentValue = &hCineInfo->hCurrent->xDistMax;
        p_xWorkValue = &hCineInfo->hWork->xDistMax;
        p_xVisValue = &hCineInfo->hVisibility->xDistMax;
        break;
    case eFct_Cam_GetBoundDistMin:
        p_xInitialValue = &hCineInfo->hInit->xBoundDistMin;
        p_xCurrentValue = &hCineInfo->hCurrent->xBoundDistMin;
        p_xWorkValue = &hCineInfo->hWork->xBoundDistMin;
        p_xVisValue = &hCineInfo->hVisibility->xBoundDistMin;
        break;
    case eFct_Cam_GetBoundDistMax:
        p_xInitialValue = &hCineInfo->hInit->xBoundDistMax;
        p_xCurrentValue = &hCineInfo->hCurrent->xBoundDistMax;
        p_xWorkValue = &hCineInfo->hWork->xBoundDistMax;
        p_xVisValue = &hCineInfo->hVisibility->xBoundDistMax;
        break;
    case eFct_Cam_GetAngleAlpha:
        p_xInitialValue = &hCineInfo->hInit->xAngleAlpha;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngleAlpha;
        p_xWorkValue = &hCineInfo->hWork->xAngleAlpha;
        p_xVisValue = &hCineInfo->hVisibility->xAngleAlpha;
        break;
    case eFct_Cam_GetAngleShiftAlpha:
        p_xInitialValue = &hCineInfo->hInit->xAngleShiftAlpha;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngleShiftAlpha;
        p_xWorkValue = &hCineInfo->hWork->xAngleShiftAlpha;
        p_xVisValue = &hCineInfo->hVisibility->xAngleShiftAlpha;
        break;
    case eFct_Cam_GetAngleTheta:
        p_xInitialValue = &hCineInfo->hInit->xAngleTheta;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngleTheta;
        p_xWorkValue = &hCineInfo->hWork->xAngleTheta;
        p_xVisValue = &hCineInfo->hVisibility->xAngleTheta;
        break;
    case eFct_Cam_GetAngleShiftTheta:
        p_xInitialValue = &hCineInfo->hInit->xAngleShiftTheta;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngleShiftTheta;
        p_xWorkValue = &hCineInfo->hWork->xAngleShiftTheta;
        p_xVisValue = &hCineInfo->hVisibility->xAngleShiftTheta;
        break;
    case eFct_Cam_GetLinearSpeed:
        p_xInitialValue = &hCineInfo->hInit->xLinearSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xLinearSpeed;
        p_xWorkValue = &hCineInfo->hWork->xLinearSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xLinearSpeed;
        break;
    case eFct_Cam_GetLinearIncreaseSpeed:
        p_xInitialValue = &hCineInfo->hInit->xLinearIncreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xLinearIncreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xLinearIncreaseSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xLinearIncreaseSpeed;
        break;
    case eFct_Cam_GetLinearDecreaseSpeed:
        p_xInitialValue = &hCineInfo->hInit->xLinearDecreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xLinearDecreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xLinearDecreaseSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xLinearDecreaseSpeed;
        break;
    case eFct_Cam_GetAngularSpeed:
        p_xInitialValue = &hCineInfo->hInit->xAngularSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngularSpeed;
        p_xWorkValue = &hCineInfo->hWork->xAngularSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xAngularSpeed;
        break;
    case eFct_Cam_GetAngularIncreaseSpeed:
        p_xInitialValue = &hCineInfo->hInit->xAngularIncreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngularIncreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xAngularIncreaseSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xAngularIncreaseSpeed;
        break;
    case eFct_Cam_GetAngularDecreaseSpeed:
        p_xInitialValue = &hCineInfo->hInit->xAngularDecreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngularDecreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xAngularDecreaseSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xAngularDecreaseSpeed;
        break;
    case eFct_Cam_GetTargetSpeed:
        p_xInitialValue = &hCineInfo->hInit->xTargetSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xTargetSpeed;
        p_xWorkValue = &hCineInfo->hWork->xTargetSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xTargetSpeed;
        break;
    case eFct_Cam_GetTargetIncreaseSpeed:
        p_xInitialValue = &hCineInfo->hInit->xTargetIncreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xTargetIncreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xTargetIncreaseSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xTargetIncreaseSpeed;
        break;
    case eFct_Cam_GetTargetDecreaseSpeed:
        p_xInitialValue = &hCineInfo->hInit->xTargetDecreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xTargetDecreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xTargetDecreaseSpeed;
        p_xVisValue = &hCineInfo->hVisibility->xTargetDecreaseSpeed;
        break;
    case eFct_Cam_GetFocal:
        p_xInitialValue = &hCineInfo->hInit->xFocal;
        p_xCurrentValue = &hCineInfo->hCurrent->xFocal;
        p_xWorkValue = &hCineInfo->hWork->xFocal;
        p_xVisValue = &hCineInfo->hVisibility->xFocal;
        break;
    case eFct_Cam_GetZMin:
        p_xInitialValue = &hCineInfo->hInit->xZMin;
        p_xCurrentValue = &hCineInfo->hCurrent->xZMin;
        p_xWorkValue = &hCineInfo->hWork->xZMin;
        p_xVisValue = &hCineInfo->hVisibility->xZMin;
        break;
    case eFct_Cam_GetZMax:
        p_xInitialValue = &hCineInfo->hInit->xZMax;
        p_xCurrentValue = &hCineInfo->hCurrent->xZMax;
        p_xWorkValue = &hCineInfo->hWork->xZMax;
        p_xVisValue = &hCineInfo->hVisibility->xZMax;
        break;
    }
    {
        float xValue;
        if (lCurrentValue == 1)
        {
            if (hCineInfo->ucVolIAFlags & 1)
                xValue = *p_xWorkValue;
            else
                xValue = *p_xCurrentValue;
        }
        else if (lCurrentValue == -1)
            xValue = *p_xInitialValue;
        else if (hCineInfo->ucPerIAFlags & 2)
            xValue = *p_xVisValue;
        else
            xValue = *p_xCurrentValue;
        p_stValue->uDummy.uParam.xValue = xValue;
    }
    p_stValue->eType = E_vt_Float;
    return p_stTree;
}

tdstNodeInterpret_* CAM_fn_p_stGetTargetedSuperObject(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int lCurrentValue;
    HIE_tdstSuperObject_* param0;
    tdstCineinfo_* hCineInfo;
    HIE_tdstSuperObject_* hCamera;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hCamera);
    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    lCurrentValue = p_stValue->uDummy.uParam.lValue;
    if (lCurrentValue == 1)
    {
        if (hCineInfo->ucVolIAFlags & 1)
            param0 = hCineInfo->hWork->hSuperObjectTargeted;
        else
            param0 = hCineInfo->hCurrent->hSuperObjectTargeted;
    }
    else if (lCurrentValue == -1)
    {
        param0 = hCineInfo->hInit->hSuperObjectTargeted;
    }
    else
    {
        if (hCineInfo->ucPerIAFlags & 2)
            param0 = hCineInfo->hVisibility->hSuperObjectTargeted;
        else
            param0 = hCineInfo->hCurrent->hSuperObjectTargeted;
    }
    p_stValue->uDummy.uParam.p_stEngObjValue = param0 == 0 ? 0 : (param0->ulTypeOfLinkedObject != 2 ? 0 : param0->hLinkedObject.p_stCharacter); p_stValue->eType = E_vt_Perso;

    return p_stTree;
}

tdstNodeInterpret_* CAM_fn_p_stGetTypeOfViewport(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int lCurrentValue;
    int lTypeOfViewport;
    tdstCineinfo_* hCineInfo;
    HIE_tdstSuperObject_* hCamera;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hCamera);
    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    lCurrentValue = p_stValue->uDummy.uParam.lValue;
    if (lCurrentValue == 1)
    {
        if (hCineInfo->ucVolIAFlags & 1)
            lTypeOfViewport = hCineInfo->hWork->eTypeOfViewport;
        else
            lTypeOfViewport = hCineInfo->hCurrent->eTypeOfViewport;
    }
    else if (lCurrentValue == -1)
    {
        lTypeOfViewport = hCineInfo->hInit->eTypeOfViewport;
    }
    else
    {
        if (hCineInfo->ucPerIAFlags & 2)
            lTypeOfViewport = hCineInfo->hVisibility->eTypeOfViewport;
        else
            lTypeOfViewport = hCineInfo->hCurrent->eTypeOfViewport;
    }
    p_stValue->uDummy.uParam.lValue = lTypeOfViewport; p_stValue->eType = E_vt_Integer;
    return p_stTree;
}

tdstNodeInterpret_* CAM_fn_p_stGetSectorCameraType(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hCurrentSectorCamera;
    int lType;
    HIE_tdstSuperObject_* hCamera;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hCamera);

    hCurrentSectorCamera = fn_h_SectInfoGetCurrentSector(hCamera->hLinkedObject.p_stCharacter->h_SectInfo);

    lType = fn_cGetSectorCameraType(hCurrentSectorCamera);

    p_stValue->uDummy.uParam.lValue = (long)lType; p_stValue->eType = E_vt_Integer;
    return p_stTree;
}

tdstNodeInterpret_* CAM_fn_p_stGetCameraOfViewport(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    switch (eFuncId)
    {
    case eFct_Cam_GetCameraOfViewport:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uDummy.uParam.p_stEngObjValue = CAM_fn_hGetActiveCamera(p_stValue->uDummy.uParam.lValue) == 0 ? 0 : (CAM_fn_hGetActiveCamera(p_stValue->uDummy.uParam.lValue)->ulTypeOfLinkedObject != 2 ? 0 : CAM_fn_hGetActiveCamera(p_stValue->uDummy.uParam.lValue)->hLinkedObject.p_stCharacter); p_stValue->eType = E_vt_Perso;
        return p_stTree;
    case eFct_Cam_GetMainCamera:
        p_stValue->uDummy.uParam.p_stEngObjValue = CAM_fn_hGetActiveCamera(0) == 0 ? 0 : (CAM_fn_hGetActiveCamera(0)->ulTypeOfLinkedObject != 2 ? 0 : CAM_fn_hGetActiveCamera(0)->hLinkedObject.p_stCharacter); p_stValue->eType = E_vt_Perso;
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(0x27, 0);
        return p_stTree;
    }
}

tdstNodeInterpret_* CAM_fn_p_stComputeTargetWithTgtPerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    /* The retail keeps the saved flags in a 32-bit local (lhu s0 / ori v0,s0,1 /
       sh, no sign extension), so the extracted "unsigned short" width is widened. */
    unsigned int uwMemoFlags;
    CAM_tdstUpdateCamera_ stStruct;
    HIE_tdstSuperObject_* hCamera;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hCamera);
    CAM_fn_vSetCineinfoWorkFromCurrent(hCamera->hLinkedObject.p_stCharacter->h_Cineinfo);
    CAM_fn_vInitCameraStructure(hCamera, &stStruct);
    if (stStruct.hCineinfoCurrent->hSuperObjectTargeted == 0)
    {
        /* The retail reads the zero vector through a null pointer; the PS2
           scratchpad at address 0 reads back as zero. */
        ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[0] = ((unsigned int*)((MTH3D_tdstVector_*)0))[0]; ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[1] = ((unsigned int*)((MTH3D_tdstVector_*)0))[1]; ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[2] = ((unsigned int*)((MTH3D_tdstVector_*)0))[2]; p_stValue->eType = E_vt_Vector;
        return p_stTree;
    }
    else
    {
        uwMemoFlags = stStruct.hCineinfoWork->uwIAFlags;
        stStruct.hCineinfoWork->uwIAFlags = uwMemoFlags | 1;
        stStruct.hCineinfoWork->uwIAFlags = (unsigned int)stStruct.hCineinfoWork->uwIAFlags & 0xEFFF;
        CAM_fn_vComputeReferencePoint(&stStruct);
        CAM_fn_vComputeTarget(&stStruct);
        stStruct.hCineinfoWork->uwIAFlags = uwMemoFlags;
        ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[0] = ((unsigned int*)&stStruct.stCptPos.stTarget)[0]; ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[1] = ((unsigned int*)&stStruct.stCptPos.stTarget)[1]; ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[2] = ((unsigned int*)&stStruct.stCptPos.stTarget)[2]; p_stValue->eType = E_vt_Vector;
        return p_stTree;
    }
}

tdstNodeInterpret_* CAM_fn_p_stComputeCurrentTarget(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    DNM_stParsingDatas* p_stParsingDatas;
    tdstDynam_* h_Dynam;
    HIE_tdstSuperObject_* hCamera;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hCamera);

    h_Dynam = hCamera->hLinkedObject.p_stCharacter->h_Dynam;
    if (!h_Dynam)
        return p_stTree;
    p_stParsingDatas = fn_p_stDynamGetParsingDatas(h_Dynam);
    if (!p_stParsingDatas)
        return p_stTree;

    *(int*)&p_stValue->uDummy.uParam.stVectorValue.xX = *(int*)&p_stParsingDatas->stVector.xX; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xY = *(int*)&p_stParsingDatas->stVector.xY; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xZ = *(int*)&p_stParsingDatas->stVector.xZ;
    p_stValue->eType = E_vt_Vector;
    return p_stTree;
}

tdstNodeInterpret_* CAM_fn_p_stGetBestPos(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MTH3D_tdstVector_ stVec;
    CAM_tdstUpdateCamera_ stStruct;
    tdstCineinfo_* hCineinfo;
    HIE_tdstSuperObject_* hCamera;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hCamera);
    hCineinfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    if (!hCineinfo->bCanDoBestPos)
    {
        ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[0] = ((unsigned int*)&hCamera->hGlobalMatrix->stTransformMatrix.stCol_3)[0]; ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[1] = ((unsigned int*)&hCamera->hGlobalMatrix->stTransformMatrix.stCol_3)[1]; ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[2] = ((unsigned int*)&hCamera->hGlobalMatrix->stTransformMatrix.stCol_3)[2];
        p_stValue->eType = E_vt_Vector;
        return p_stTree;
    }
    CAM_fn_vSetCineinfoWorkFromCurrent(hCineinfo);
    CAM_fn_vInitCameraStructure(hCamera, &stStruct);
    cRefAxisIsAlreadyComputed = (stStruct.hCineinfoWork->uwIAFlags & 0x4000) ? 1 : 0;
    cNoDynChangeTheta = (stStruct.hCineinfoWork->uwIAFlags & 0x20) ? 1 : 0;
    cCanTestStatic = 1;
    CAM_fn_vComputeReferencePoint(&stStruct);
    CAM_fn_vComputeTarget(&stStruct);
    CAM_fn_vComputeRealWantedPos(&stStruct);
    CAM_fn_vComputeMovePosWithDynTheta(&stStruct);
    if (stStruct.hCineinfoCurrent->hSuperObjectTargeted == 0)
        return p_stTree;
    CAM_fn_vForceFailureVisibility(&stStruct);
    if (stStruct.hCineinfo->eState == 2)
    {
        ((unsigned int*)&stVec)[0] = ((unsigned int*)&stStruct.hCineinfo->stLastFailedWanted)[0]; ((unsigned int*)&stVec)[1] = ((unsigned int*)&stStruct.hCineinfo->stLastFailedWanted)[1]; ((unsigned int*)&stVec)[2] = ((unsigned int*)&stStruct.hCineinfo->stLastFailedWanted)[2];
        hCineinfo->bCanDoBestPos = 0;
    }
    else
    {
        stVec.xX = 0.0f; stVec.xY = 0.0f; stVec.xZ = 0.0f;
    }
    stStruct.hCineinfo->eState = 0;
    ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[0] = ((unsigned int*)&stVec)[0]; ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[1] = ((unsigned int*)&stVec)[1]; ((unsigned int*)&p_stValue->uDummy.uParam.stVectorValue)[2] = ((unsigned int*)&stVec)[2];
    p_stValue->eType = E_vt_Vector;
    return p_stTree;
}

tdstNodeInterpret_* CAM_fn_p_stGetSetTransparencyFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned char lValue; /* debug record: long; retail re-narrows the result with andi before the int store */
    HIE_tdstSuperObject_* hCamera;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hCamera);

    lValue = CAM_fn_ucGetTransparencyFlag(hCamera->hLinkedObject.p_stCharacter->h_Cineinfo);
    p_stValue->uDummy.uParam.lValue = lValue; p_stValue->eType = E_vt_Integer;
    return p_stTree;
}

tdstNodeInterpret_* CAM_fn_p_stGetSetMirrorFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    unsigned char bValue;
    tdstCineinfo_* hCineinfo;
    HIE_tdstSuperObject_* hCamera;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hCamera);

    hCineinfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;

    switch (eFuncId)
    {
    case eFct_Cam_SetMirrorFlag:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        bValue = p_stValue->uDummy.uParam.ucValue;
        CAM_fn_vSetMirrorFlag(hCineinfo, bValue);
        p_stValue->uDummy.uParam.lValue = (long)bValue; p_stValue->eType = E_vt_Integer;

        p_stValue->uDummy.uParam.ucValue = bValue; return p_stTree;

    case eFct_Cam_GetMirrorFlag:
        bValue = CAM_fn_bGetMirrorFlag(hCineinfo);
        p_stValue->uDummy.uParam.lValue = (long)bValue; p_stValue->eType = E_vt_Integer;
        return p_stTree;
    }

    return p_stTree;
}

void fn_vGetViewportCoordinates(MTH3D_tdstVector_* pDestination2D, MTH3D_tdstVector_* pWorldPoint, GLD_tdstViewportAttributes_* _p_stViewport)
{
    GLI_vGet2DPercentPointFrom3DWorldPoint(_p_stViewport, pDestination2D, pWorldPoint);
}

tdstNodeInterpret_* CAM_fn_p_GetViewportCoordinates(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    GLD_tdstViewportAttributes_* _p_stViewport;
    MTH3D_tdstVector_ vWorldPoint;
    /* The retail copies the 2D result word by word; the int view keeps the
       source loads sp-relative and the destination a single base register. */
    union { MTH3D_tdstVector_ v; int i[3]; } st2DVertex;
    tdstCineinfo_* hCineInfo;
    HIE_tdstSuperObject_* hCamera;
    tdstGetSetParam_ stValue;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hCamera);
    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    _p_stViewport = &g_stEngineStructure.a_stViewportAttr[hCineInfo->hCurrent->eTypeOfViewport];
    vWorldPoint.xX = stValue.uDummy.uParam.stVectorValue.xX;
    vWorldPoint.xY = stValue.uDummy.uParam.stVectorValue.xY;
    vWorldPoint.xZ = stValue.uDummy.uParam.stVectorValue.xZ;
    GLI_vGet2DPercentPointFrom3DWorldPoint(_p_stViewport, &st2DVertex.v, &vWorldPoint);
    *(int*)&p_stValue->uDummy.uParam.stVectorValue.xX = st2DVertex.i[0]; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xY = st2DVertex.i[1]; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xZ = st2DVertex.i[2]; p_stValue->eType = E_vt_Vector;
    return p_stTree;
}
