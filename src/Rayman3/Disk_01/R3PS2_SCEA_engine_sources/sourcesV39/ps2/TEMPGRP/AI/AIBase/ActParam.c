/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\ActParam.c */
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
typedef union anon_4 anon_4;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;

/* Shared AI parameter value tag recovered from the neighbouring AI/GAM
 * translation units.  ActParam has stack instances of tdstGetSetParam_, so
 * the tag and its containing aggregate must be complete in this TU. */
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

union anon_4 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_4 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

extern tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*);
extern char* szGetMetaActionTypeInParamFromId(tdeMetaActionId_);
extern void fn_vSetActionParamlValue(unsigned char, HIE_tdstSuperObject_*, int);
extern void fn_vSetActionParamxValue(unsigned char, HIE_tdstSuperObject_*, float);
extern void fn_vSetActionParamp_stVertex(unsigned char, HIE_tdstSuperObject_*, MTH3D_tdstVector_*);
extern void fn_vSetActionParamStateValue(unsigned char, HIE_tdstSuperObject_*, tdstState_*);
extern int toupper(int);
extern size_t strlen(const char*);

inline int MTH_M_xRealToLong(float xValue)
{
    int lResult;
    asm
    {
        cvt.w.s f30, xValue
        mfc1 lResult, f30
    }
    return lResult;
}

tdstNodeInterpret_* fn_p_stDefaultActionInit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char* szTypeParam;
    unsigned char ucNbParam;
    unsigned char ucParam;
    char cType;
    tdstGetSetParam_ stParam;

    szTypeParam = szGetMetaActionTypeInParamFromId(p_stTree[-1].uDummy.uId.eMetaActionId);
    ucNbParam = strlen(szTypeParam);
    ucParam = 0;

    if (ucNbParam != 0) {
        while (ucParam < ucNbParam) {
            p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
            cType = toupper(szTypeParam[ucParam]);

            if (cType == "L"[0]) {
                fn_vSetActionParamlValue(
                    ucParam,
                    p_SuperObjPerso,
                    stParam.eType == E_vt_Float
                        ? MTH_M_xRealToLong(stParam.uDummy.uParam.xValue)
                        : stParam.uDummy.uParam.lValue);
            } else if (cType == "X"[0]) {
                fn_vSetActionParamxValue(
                    ucParam,
                    p_SuperObjPerso,
                    stParam.eType == E_vt_Float
                        ? stParam.uDummy.uParam.xValue
                        : (float)stParam.uDummy.uParam.lValue);
            } else if (cType == "V"[0]) {
                fn_vSetActionParamp_stVertex(ucParam, p_SuperObjPerso, &stParam.uDummy.uParam.stVectorValue);
            } else if (cType == "A"[0]) {
                fn_vSetActionParamStateValue(ucParam, p_SuperObjPerso, stParam.uDummy.uParam.tdxstHandleToState);
            }
            ucParam++;
        }
    }

    return p_stTree;
}

MTH3D_tdstVector_* fn_p_stGetActionParamp_stVertex(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso)
{
    tdstIntelligence_* p_stIntelligence;

    if (p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->bDoingIntel)
        p_stIntelligence = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence;
    else
        p_stIntelligence = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stReflex;
    return &p_stIntelligence->p_stActionTable->p_stEntry[p_stIntelligence->p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].stVectorValue;
}

void fn_vSetActionParamp_stVertex(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso, MTH3D_tdstVector_* p_stVertex)
{
    tdstIntelligence_* p_stIntelligence;

    if (p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->bDoingIntel)
        p_stIntelligence = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence;
    else
        p_stIntelligence = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stReflex;
    *(int*)&p_stIntelligence->p_stActionTable->p_stEntry[p_stIntelligence->p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].stVectorValue.xX = *(int*)&p_stVertex->xX; *(int*)&p_stIntelligence->p_stActionTable->p_stEntry[p_stIntelligence->p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].stVectorValue.xY = *(int*)&p_stVertex->xY; *(int*)&p_stIntelligence->p_stActionTable->p_stEntry[p_stIntelligence->p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].stVectorValue.xZ = *(int*)&p_stVertex->xZ;
}

tdstState_* fn_xGetActionParamStateValue(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso)
{
    tdstIntelligence_* p_stIntelligence;

    if (p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->bDoingIntel)
        p_stIntelligence = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence;
    else
        p_stIntelligence = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stReflex;
    return p_stIntelligence->p_stActionTable->p_stEntry[p_stIntelligence->p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].tdxstHandleToState;
}

void fn_vSetActionParamStateValue(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso, tdstState_* hState)
{
    tdstIntelligence_* p_stIntelligence;

    if (p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->bDoingIntel)
        p_stIntelligence = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence;
    else
        p_stIntelligence = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stReflex;
    p_stIntelligence->p_stActionTable->p_stEntry[p_stIntelligence->p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].tdxstHandleToState = hState;
}

int fn_lGetActionParamlValue(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso)
{
    tdstActionTable_* p_stActionTable;
    p_stActionTable = (p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->bDoingIntel ? p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence : p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stReflex)->p_stActionTable;
    return p_stActionTable->p_stEntry[p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].lValue;
}

void fn_vSetActionParamlValue(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso, int lValue)
{
    tdstActionTable_* p_stActionTable;
    p_stActionTable = (p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->bDoingIntel ? p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence : p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stReflex)->p_stActionTable;
    p_stActionTable->p_stEntry[p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].lValue = lValue;
}

float fn_xGetActionParamxValue(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso)
{
    tdstActionTable_* p_stActionTable;
    p_stActionTable = (p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->bDoingIntel ? p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence : p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stReflex)->p_stActionTable;
    return p_stActionTable->p_stEntry[p_stActionTable->ucCurrentEntry].stActionParam.a_uParam[ucN].xValue;
}
