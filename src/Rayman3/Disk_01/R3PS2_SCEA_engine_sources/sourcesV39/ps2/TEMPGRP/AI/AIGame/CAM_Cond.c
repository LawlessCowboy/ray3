/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Cond.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/GMT.h"
#include "r3/HIE.h"
#include "r3/LST2.h"
#include "r3/MAT.h"
#include "r3/MOR.h"
#include "r3/MTH.h"
#include "r3/SECT.h"
#include "r3/WP.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef union anon_0 anon_0;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct anon_1 anon_1;
typedef struct tdstGetSetParam_ tdstGetSetParam_;

union anon_0 {
    tduIdInterpret_ uId; /* +0x0 */
    tduGetSetParamForNode_ uParam; /* +0x0 */
};

struct tdstNodeInterpret_ {
    anon_0 uDummy; /* +0x0 */
    unsigned short uwNodeToSkip; /* +0x4 */
    unsigned char ucDepth; /* +0x6 */
    unsigned char eType; /* +0x7 */
};

struct anon_1 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_1 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

int fn_ucGetConditionUltraOperator(tdeCondId_ eCondId);
void fn_vGetUltraOperatorPerso(int bYouHaveRightToUseThisFunction, HIE_tdstSuperObject_* hCurrentSuperObjPerso, HIE_tdstSuperObject_** hNewSuperObjPerso);
tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
void fn_vOnAIErm_M_UpdateLastError(int FatalErrorNum, char* szMsg);

tdstNodeInterpret_* CAM_fn_p_stIs(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    HIE_tdstSuperObject_* hCamera;
    tdstCineinfo_* hCineInfo;
    tdstInternalStructurCineinfo_* hIntCineInfo;
    tdstGetSetParam_ stValue;
    int lCurrentValue;
    tdeCondId_ eCondId;

    eCondId = (p_stTree - 1)->uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hCamera);
    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    lCurrentValue = stValue.uDummy.uParam.lValue;
    if (lCurrentValue == 1)
    {
        if (hCineInfo->ucVolIAFlags & 1)
            hIntCineInfo = hCineInfo->hWork;
        else
            hIntCineInfo = hCineInfo->hCurrent;
    }
    else if (lCurrentValue == -1)
    {
        hIntCineInfo = hCineInfo->hInit;
    }
    else
    {
        if (hCineInfo->ucPerIAFlags & 2)
            hIntCineInfo = hCineInfo->hVisibility;
        else
            hIntCineInfo = hCineInfo->hCurrent;
    }

    switch (eCondId)
    {
    case eCond_Cam_IsActive:
        *p_lValue = hIntCineInfo->bIsActive;
        return p_stTree;
    case eCond_Cam_IsViewportOwner:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
        *p_lValue = (stValue.uDummy.uParam.ulValue == hIntCineInfo->eTypeOfViewport);
        return p_stTree;
    case eCond_Cam_IsFlagNoDynamicTarget:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x1;
        return p_stTree;
    case eCond_Cam_IsFlagNoAverageMoveTgtPerso:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x2;
        return p_stTree;
    case eCond_Cam_IsFlagNoParseCutAngle:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x4;
        return p_stTree;
    case eCond_Cam_IsFlagNoVisibility:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x8;
        return p_stTree;
    case eCond_Cam_IsFlagNoVisibilityWithDynHie:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x10;
        return p_stTree;
    case eCond_Cam_IsFlagNoDynChangeTheta:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x20;
        return p_stTree;
    case eCond_Cam_IsFlagNoShiftUntilPosReached:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x40;
        return p_stTree;
    case eCond_Cam_IsFlagNoDynSpeed:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x80;
        return p_stTree;
    case eCond_Cam_IsFlagNoLinearParsing:
        *p_lValue = hIntCineInfo->uwDNMFlags & 0x1;
        return p_stTree;
    case eCond_Cam_IsFlagNoLinearInertia:
        *p_lValue = hIntCineInfo->uwDNMFlags & 0x2;
        return p_stTree;
    case eCond_Cam_IsFlagNoAngularParsing:
        *p_lValue = hIntCineInfo->uwDNMFlags & 0x4;
        return p_stTree;
    case eCond_Cam_IsFlagNoAngularInertia:
        *p_lValue = hIntCineInfo->uwDNMFlags & 0x8;
        return p_stTree;
    case eCond_Cam_IsFlagNoTargetParsing:
        *p_lValue = hIntCineInfo->uwDNMFlags & 0x10;
        return p_stTree;
    case eCond_Cam_IsFlagNoTargetInertia:
        *p_lValue = hIntCineInfo->uwDNMFlags & 0x20;
        return p_stTree;
    case eCond_Cam_IsFlagNoObstacle:
        *p_lValue = hIntCineInfo->uwDNMFlags & 0x40;
        return p_stTree;
    case eCond_Cam_IsFlagFixedOrientation:
        *p_lValue = hIntCineInfo->uwDNMFlags & 0x80;
        return p_stTree;
    case eCond_Cam_IsFlagForcedPosition:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x1000;
        return p_stTree;
    case eCond_Cam_IsFlagForcedAxis:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x4000;
        return p_stTree;
    case eCond_Cam_IsFlagForcedTarget:
        *p_lValue = hIntCineInfo->uwIAFlags & 0x2000;
        return p_stTree;
    }
    fn_vOnAIErm_M_UpdateLastError(43, NULL);
    return p_stTree;
}
