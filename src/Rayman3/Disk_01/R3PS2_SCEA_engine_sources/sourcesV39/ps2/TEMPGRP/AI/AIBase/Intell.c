/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c */
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
typedef struct tdstTypeEntry_ tdstTypeEntry_;

typedef enum tdeTypeInterpret_ {
    E_ti_KeyWord = 0,
    E_ti_Condition = 1,
    E_ti_Operator = 2,
    E_ti_Function = 3,
    E_ti_Procedure = 4,
    E_ti_MetaAction = 5,
    E_ti_BeginMacro = 6,
    E_ti_EndMacro = 7,
    E_ti_EndTree = 8,
    E_ti_Field = 9,
    E_ti_DsgVar = 10,
    E_ti_DsgVarRef = 11,
    E_ti_Constant = 12,
    E_ti_Real = 13,
    E_ti_Button = 14,
    E_ti_ConstantVector = 15,
    E_ti_Vector = 16,
    E_ti_Mask = 17,
    E_ti_Module = 18,
    E_ti_DsgVarId = 19,
    E_ti_String = 20,
    E_ti_LipsSynchroRef = 21,
    E_ti_FamilyRef = 22,
    E_ti_PersoRef = 23,
    E_ti_ActionRef = 24,
    E_ti_SuperObjectRef = 25,
    E_ti_SOLinksRef = 26,
    E_ti_WayPointRef = 27,
    E_ti_TextRef = 28,
    E_ti_ComportRef = 29,
    E_ti_ModuleRef = 30,
    E_ti_SoundEventRef = 31,
    E_ti_ObjectTableRef = 32,
    E_ti_GameMaterialRef = 33,
    E_ti_VisualMaterialRef = 34,
    E_ti_ParticleGenerator = 35,
    E_ti_Color = 36,
    E_ti_ModelRef = 37,
    E_ti_Light = 38,
    E_ti_Caps = 39,
    E_ti_Graph = 40,
    E_ti_MacroRef = 41,
    E_ti_Unknown = 42,
    E_ti_CineRef = 43,
    E_ti_NbTypes = 44,
} tdeTypeInterpret_;

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

struct tdstTypeEntry_ {
    tdstNodeInterpret_* (*p_fn_p_stEvalTypePtr)(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*); /* +0x0 */
};

unsigned char g_ucAIModuleId;
unsigned char ucIsInSchedule;
unsigned char g_ucIsInMacro;
int g_p_stTreeMacro;
tdstTypeEntry_ a_stTypeTable[44];
unsigned char ucProcedureActionReturn;
unsigned char bSomethingDone;
unsigned char g_ucNRule;
int g_p_stIntelligence;
int iNumLoop;
int GROS_ANTIBUG_DE_LA_MORT_QUI_TUE;
unsigned char g_ucUseDefaultActionReturn;
unsigned char g_ucNewActionReturn;

/* Defined in List.c; the recovered declaration is required for pointer return
 * type checking when evaluating a macro node. */
tdstNodeInterpret_* fn_p_stEvalSubRoutine(
    HIE_tdstSuperObject_* p_SuperObjPerso,
    tdstNodeInterpret_* p_stTree,
    tdstGetSetParam_* p_stValue,
    tdstMacro_* p_stMacro);

void fn_vSetFieldTypeComport(void)
{
    return;
}

tdstNodeInterpret_* fn_p_stEvalCineRef(void* p_stContext, tdstNodeInterpret_* p_stTree)
{
    (void)p_stContext;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    return p_stTree;
}

unsigned char fn_ucIsRuleInActionTable(tdstIntelligence_* p_stIntelligence, unsigned char ucNumRule);
tdstNodeInterpret_* fn_p_stGetTableAction(tdstIntelligence_* p_stIntelligence, unsigned char ucNEntry);
void fn_vUnuseAllRulesFromSchedule(tdstIntelligence_* p_stIntelligence);
unsigned char fn_ucIntelligenceRulesEngine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstIntelligence_* p_stIntelligence);
unsigned char fn_ucIntelligenceScheduleEngine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstIntelligence_* p_stIntelligence);
int printf(const char* fmt, ...);

static inline void fn_vSetScheduleFromActionTable(tdstIntelligence_* p_stIntelligence)
{
    unsigned char ucIndTabAction;

    ucIndTabAction = fn_ucIsRuleInActionTable(p_stIntelligence, 0);
    if (ucIndTabAction < p_stIntelligence->p_stActionTable->ucNbEntries)
    {
        p_stIntelligence->p_stCurrentSchedule = fn_p_stGetTableAction(p_stIntelligence, ucIndTabAction);
        fn_vUnuseAllRulesFromSchedule(p_stIntelligence);
    }
}

unsigned char fn_bIntelligenceEngine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstIntelligence_* p_stIntelligence)
{
    unsigned char ReturnValue;
    unsigned char ucReturn;

    ReturnValue = 0;
    do
    {
        bSomethingDone = 0;
        ucReturn = fn_ucIntelligenceRulesEngine(p_SuperObjPerso, p_stIntelligence);
        if ((ucReturn & 8) != 8)
        {
            if ((ucReturn & 1) == 1 || bSomethingDone)
            {
                fn_vSetScheduleFromActionTable(p_stIntelligence);
            }
            else
            {
                ucReturn = fn_ucIntelligenceScheduleEngine(p_SuperObjPerso, p_stIntelligence);
            }
        }
        ReturnValue |= bSomethingDone;
    } while ((ucReturn & 8) == 8 && (ucReturn & 1) != 1 && !GROS_ANTIBUG_DE_LA_MORT_QUI_TUE);

    if (GROS_ANTIBUG_DE_LA_MORT_QUI_TUE)
    {
        GROS_ANTIBUG_DE_LA_MORT_QUI_TUE = 0;
        printf("Gros antibug qui tache tellement que meme SKIP y peut rien faire !\n");
        iNumLoop = 0;
    }

    return ReturnValue;
}

tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
tdstNodeInterpret_* fn_p_stIntelligenceEvalTreeEngine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);

unsigned char fn_ucIntelligenceScheduleEngine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstIntelligence_* p_stIntelligence)
{
    unsigned char ucReturn;
    tdstGetSetParam_ stValue;
    unsigned char ucIndTabAction;
    tdstNodeInterpret_* p_stTree;

    g_p_stIntelligence = (int)p_stIntelligence;
    ucIsInSchedule = 1;

    p_stTree = p_stIntelligence->p_stCurrentSchedule;

    if (p_stTree == NULL)
    {
        return 0x10;
    }

    g_ucNRule = 0;
    ucIndTabAction = fn_ucIsRuleInActionTable(p_stIntelligence, 0);
    if (ucIndTabAction < p_stIntelligence->p_stActionTable->ucNbEntries)
    {
        p_stTree = fn_p_stGetTableAction(p_stIntelligence, ucIndTabAction);
    }

    if (p_stTree->eType == 8)
    {
        p_stTree = p_stIntelligence->p_stCurrentComport->p_stSchedule->p_stNodeInterpret;
    }

    p_stTree = fn_p_stIntelligenceEvalTreeEngine(p_SuperObjPerso, p_stTree, &stValue);
    ucReturn = stValue.uDummy.uParam.ucValue;

    if ((ucReturn & 8) != 8 && (ucReturn & 2) != 2)
    {
        p_stIntelligence->p_stCurrentSchedule = p_stTree;
    }

    return ucReturn;
}

unsigned char fn_ucIntelligenceRulesEngine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstIntelligence_* p_stIntelligence)
{
    char cNRule;
    unsigned char ucIndTabAction;
    tdstGetSetParam_ stValue;
    tdstNodeInterpret_* p_stTree;
    char cNIntelligenceRule;
    unsigned char ucTableNbEntries;
    int count;

    count = 0;
    g_p_stIntelligence = (int)p_stIntelligence;
    ucIsInSchedule = 0;

restart:
    cNIntelligenceRule = (char)p_stIntelligence->p_stCurrentComport->ucNbRules - 1;
    ucTableNbEntries = p_stIntelligence->p_stActionTable->ucNbEntries;

    for (cNRule = 0; cNRule <= cNIntelligenceRule; cNRule++)
    {
        g_ucNRule = cNRule + 1;

        ucIndTabAction = fn_ucIsRuleInActionTable(p_stIntelligence, g_ucNRule);
        if (ucIndTabAction < ucTableNbEntries)
            p_stTree = fn_p_stGetTableAction(p_stIntelligence, ucIndTabAction);
        else
            p_stTree = p_stIntelligence->p_stCurrentComport->p_stRules[cNRule].p_stNodeInterpret;

        p_stTree = fn_p_stIntelligenceEvalTreeEngine(p_SuperObjPerso, p_stTree, &stValue);
        ucIndTabAction = stValue.uDummy.uParam.ucValue;

        if ((ucIndTabAction & 1) == 1)
            return 1;

        if ((ucIndTabAction & 8) == 8)
        {
            bSomethingDone = 0;
            if (++count != 200)
                goto restart;
            printf("AI DeadLoop : Antibug (Intell.c Line %d)\n", 1753);
        }

        if ((ucIndTabAction & 0x10) != 0x10)
            return 0;
    }

    return 0;
}

void fn_vUnuseCurrentActionTableEntry(tdstIntelligence_* p_stIntelligence);
void fn_vUnuseAllRulesWhichHaveGreaterNumRule(tdstIntelligence_* p_stIntelligence, unsigned char ucNumRule);

#pragma auto_inline on
tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    return a_stTypeTable[p_stTree->eType].p_fn_p_stEvalTypePtr(p_SuperObjPerso, p_stTree, p_stValue);
}
#pragma auto_inline reset

static inline unsigned char fn_ucGetActionReturn(unsigned char ucActionReturn, tdstNodeInterpret_* p_stTree, unsigned char ucDepthInit)
{
    if ((g_ucNewActionReturn & 0x20) != 0x20)
    {
        if (!g_ucUseDefaultActionReturn)
        {
            if (!((ucActionReturn & 4) == 4 && (unsigned char)(p_stTree->ucDepth == ucDepthInit)))
            {
                ucActionReturn &= 0x1c;
                ucActionReturn |= g_ucNewActionReturn;
            }
            g_ucNewActionReturn = 0x20;
            g_ucUseDefaultActionReturn = 1;
        }
        else
            g_ucUseDefaultActionReturn = 0;
    }
    return ucActionReturn;
}

tdstNodeInterpret_* fn_p_stIntelligenceEvalTreeEngine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned char ucDepthInit;
    unsigned char ucActionReturn;

    while (1)
    {
        ucDepthInit = p_stTree->ucDepth;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ucActionReturn = fn_ucGetActionReturn(p_stValue->uDummy.uParam.ucValue, p_stTree, ucDepthInit);

        if ((ucActionReturn & 0x10) == 0x10 || (ucActionReturn & 8) == 8)
        {
            p_stValue->uDummy.uParam.lValue = ucActionReturn;
            p_stValue->eType = E_vt_MetaActionReturn;
            return p_stTree;
        }

        if ((ucActionReturn & 4) == 4)
        {
            fn_vUnuseCurrentActionTableEntry((tdstIntelligence_*)g_p_stIntelligence);
        }

        if ((ucActionReturn & 1) == 1)
        {
            fn_vUnuseAllRulesWhichHaveGreaterNumRule((tdstIntelligence_*)g_p_stIntelligence, g_ucNRule);
            break;
        }

        if (p_stTree->eType == 8)
        {
            ucActionReturn = 0x10;
            break;
        }

        if ((ucActionReturn & 2) == 2)
            break;
        if (ucIsInSchedule)
            ((tdstIntelligence_*)g_p_stIntelligence)->p_stCurrentSchedule = p_stTree;
    }

    p_stValue->uDummy.uParam.ulValue = ucActionReturn;
    p_stValue->eType = E_vt_MetaActionReturn;
    return p_stTree;
}

typedef unsigned char (*tdfn_MetaActionFunction_)(HIE_tdstSuperObject_*);
typedef tdstNodeInterpret_* (*tdfn_MetaActionInitFunction_)(HIE_tdstSuperObject_*, tdstNodeInterpret_*);
tdfn_MetaActionFunction_ fn_p_fn_pGetMetaActionFunctionPtr(tdeMetaActionId_ eMetaActionId);
tdfn_MetaActionInitFunction_ fn_p_fn_pGetMetaActionInitFunctionPtr(tdeMetaActionId_ eMetaActionId);
unsigned char fn_ucIsRuleAndNodeInActionTable(tdstIntelligence_* p_stIntelligence, unsigned char ucNumRule, tdstNodeInterpret_* p_stNode);
unsigned char fn_ucFindPlaceInActionTable(tdstIntelligence_* p_stIntelligence);
void fn_vUseCurrentActionTableEntry(tdstIntelligence_* p_stIntelligence, unsigned char ucNRule, tdstNodeInterpret_* p_stNode);
void fn_vOnAIErm_M_UpdateLastError(int FatalErrorNum, char* szMsg);

/* Same walk as fn_p_stSkipThisArgument, but the retail inlined copy here
 * reads the depth after stepping the pointer. */
static inline tdstNodeInterpret_* fn_p_stSkipArgumentInline(tdstNodeInterpret_* p_stTree)
{
    unsigned char ucDepth;
    p_stTree++;
    ucDepth = (p_stTree - 1)->ucDepth;
    while (p_stTree->ucDepth > ucDepth && p_stTree->eType != 8) {
        p_stTree++;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalMetaAction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstNodeInterpret_* p_stTreeInit;
    tdeMetaActionId_ eMetaActionId;

    p_stTreeInit = g_ucIsInMacro ? (tdstNodeInterpret_*)g_p_stTreeMacro : p_stTree;
    if ((((tdstIntelligence_*)g_p_stIntelligence)->p_stActionTable->ucCurrentEntry = fn_ucIsRuleAndNodeInActionTable((tdstIntelligence_*)g_p_stIntelligence, g_ucNRule, p_stTreeInit)) < ((tdstIntelligence_*)g_p_stIntelligence)->p_stActionTable->ucNbEntries)
    {
        eMetaActionId = p_stTree->uDummy.uId.eMetaActionId;
        if (p_stTree->uwNodeToSkip)
        {
            p_stTree += p_stTree->uwNodeToSkip;
        }
        else
        {
            p_stTreeInit = p_stTree;
            p_stTree = fn_p_stSkipArgumentInline(p_stTree);
            p_stTreeInit->uwNodeToSkip = p_stTree - p_stTreeInit;
        }
        p_stValue->uDummy.uParam.ulValue = fn_p_fn_pGetMetaActionFunctionPtr(eMetaActionId)(p_SuperObjPerso); p_stValue->eType = E_vt_MetaActionReturn;
        bSomethingDone = 1;
        return p_stTree;
    }
    else
    {
        fn_vUnuseAllRulesWhichHaveGreaterNumRule((tdstIntelligence_*)g_p_stIntelligence, g_ucNRule);
        if ((((tdstIntelligence_*)g_p_stIntelligence)->p_stActionTable->ucCurrentEntry = fn_ucFindPlaceInActionTable((tdstIntelligence_*)g_p_stIntelligence)) < ((tdstIntelligence_*)g_p_stIntelligence)->p_stActionTable->ucNbEntries)
        {
            fn_vUseCurrentActionTableEntry((tdstIntelligence_*)g_p_stIntelligence, g_ucNRule, p_stTree);
            eMetaActionId = p_stTree->uDummy.uId.eMetaActionId;
            bSomethingDone = 1;
            p_stTree = fn_p_fn_pGetMetaActionInitFunctionPtr(eMetaActionId)(p_SuperObjPerso, p_stTree + 1); p_stValue->uDummy.uParam.ulValue = fn_p_fn_pGetMetaActionFunctionPtr(eMetaActionId)(p_SuperObjPerso); p_stValue->eType = E_vt_MetaActionReturn; return p_stTree;
        }
        else
        {
            fn_vOnAIErm_M_UpdateLastError(0x18, 0);
            p_stValue->uDummy.uParam.ulValue = 0; p_stValue->eType = E_vt_MetaActionReturn;
            return NULL;
        }
    }
}

tdstNodeInterpret_* fn_p_stSkipThisArgument(tdstNodeInterpret_* p_stTree)
{
    unsigned char ucDepth;
    ucDepth = p_stTree->ucDepth;
    p_stTree++;
    while (p_stTree->ucDepth > ucDepth && p_stTree->eType != 8) {
        p_stTree++;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stSwapNextParameter2(tdstNodeInterpret_* p_stTree)
{
    unsigned char ucDepth;
    ucDepth = (p_stTree - 1)->ucDepth;
    while (p_stTree->ucDepth > ucDepth && p_stTree->eType != 8) {
        p_stTree++;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stSwapNextParameter(tdstNodeInterpret_* p_stTree)
{
    unsigned char ucDepth;
    ucDepth = p_stTree->ucDepth;
    p_stTree++;
    while (p_stTree->ucDepth >= ucDepth && p_stTree->eType != 8) {
        p_stTree++;
    }
    return p_stTree;
}

tdstNodeInterpret_* (*fn_p_fn_pGetProcedureFunctionPtr(tdeProcedureId_ eProcedureId))(HIE_tdstSuperObject_*, tdstNodeInterpret_*);

tdstNodeInterpret_* fn_p_stEvalProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstNodeInterpret_* (*p_fn_p_stProcedureFunctionPtr)(HIE_tdstSuperObject_*, tdstNodeInterpret_*);

    p_fn_p_stProcedureFunctionPtr = fn_p_fn_pGetProcedureFunctionPtr(p_stTree->uDummy.uId.eProcedureId);
    ucProcedureActionReturn = 0;
    p_stTree = p_fn_p_stProcedureFunctionPtr(p_SuperObjPerso, ++p_stTree);
    p_stValue->uDummy.uParam.ulValue = ucProcedureActionReturn & ~4;
    p_stValue->eType = E_vt_MetaActionReturn;
    return p_stTree;
}

void fn_vSetProcedureActionReturn(unsigned char ucActionReturn)
{
    ucProcedureActionReturn = ucActionReturn;
}

tdstNodeInterpret_* (*fn_p_fn_pGetFunctionFunctionPtr(tdeFuncId_ eFuncId))(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*);

tdstNodeInterpret_* fn_p_stEvalFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstNodeInterpret_* (*p_fn_p_stFunctionFunctionPtr)(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*);

    p_fn_p_stFunctionFunctionPtr = fn_p_fn_pGetFunctionFunctionPtr(p_stTree->uDummy.uId.eFuncId);
    return p_fn_p_stFunctionFunctionPtr(p_SuperObjPerso, p_stTree + 1, p_stValue);
}

tdstNodeInterpret_* fn_p_stEvalNULL(void* p_stContext, tdstNodeInterpret_* p_stTree)
{
    (void)p_stContext;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalGraph(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.hGraph = p_stTree->uDummy.uParam.hGraph;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Graph;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalCaps(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Caps;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalLight(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.p_stLight = p_stTree->uDummy.uParam.p_stLight;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Light;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalVisualMaterialRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.hVisualMaterial = p_stTree->uDummy.uParam.hVisualMaterial;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_VisualMaterial;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalGameMaterialRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.hGameMaterial = p_stTree->uDummy.uParam.hGameMaterial;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_GameMaterial;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalParticleGenerator(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.hParticleGenerator = p_stTree->uDummy.uParam.hParticleGenerator;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_ParticleGenerator;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalTextRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.hText = p_stTree->uDummy.uParam.hText;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Text;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalComportRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.pComport = p_stTree->uDummy.uParam.pComport;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Comport;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalEndMacro(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.lValue = 0;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_MetaActionReturn;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalBeginMacro(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.lValue = 0;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_MetaActionReturn;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalEndOfTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.lValue = 16;
    p_stValue->eType = E_vt_MetaActionReturn;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalFamilyRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.hFamily = p_stTree->uDummy.uParam.hFamily;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Family;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalSoundEventRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.pSoundEvent = p_stTree->uDummy.uParam.pSoundEvent;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_SoundEvent;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalLipsSynchroRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.hLipsSynchro = p_stTree->uDummy.uParam.hLipsSynchro;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_LipsSynchro;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalString(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.szString = p_stTree->uDummy.uParam.szString;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_String;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalMask(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.uwValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Mask;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalDsgVarId(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_DsgVarId;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalModuleRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.p_stModel = p_stTree->uDummy.uParam.p_stModel;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Module;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalWayPointRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.m_hWayPoint = p_stTree->uDummy.uParam.m_hWayPoint;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_WayPoint;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalConstantVector(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    ((int *)&p_stValue->uDummy.uParam)[0] = ((int *)p_stTree->uDummy.uParam.p_stVectorValue)[0];
    ((int *)&p_stValue->uDummy.uParam)[1] = ((int *)p_stTree->uDummy.uParam.p_stVectorValue)[1];
    ((int *)&p_stValue->uDummy.uParam)[2] = ((int *)p_stTree->uDummy.uParam.p_stVectorValue)[2];
    p_stValue->eType = E_vt_Vector;
    return ++p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalVector(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstNodeInterpret_* p_stTreeInit;
    float x;
    float y;
    float z;

    p_stTreeInit = p_stTree;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTreeInit + 1, p_stValue);
    if (p_stValue->eType == E_vt_Float)
        x = *(float *)&p_stValue->uDummy.uParam.ulValue;
    else
        x = (float)*(int *)&p_stValue->uDummy.uParam.ulValue;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    if (p_stValue->eType == E_vt_Float)
        y = *(float *)&p_stValue->uDummy.uParam.ulValue;
    else
        y = (float)*(int *)&p_stValue->uDummy.uParam.ulValue;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    if (p_stValue->eType == E_vt_Float)
        z = *(float *)&p_stValue->uDummy.uParam.ulValue;
    else
        z = (float)*(int *)&p_stValue->uDummy.uParam.ulValue;

    ((float *)&p_stValue->uDummy.uParam)[0] = x;
    ((float *)&p_stValue->uDummy.uParam)[1] = y;
    ((float *)&p_stValue->uDummy.uParam)[2] = z;
    p_stValue->eType = E_vt_Vector;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalReal(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    *(float *)&p_stValue->uDummy.uParam.ulValue = *(float *)&p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Float;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalActionRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Action;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalPersoRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Perso;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalObjectTableRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_ObjectTable;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalSOLinksRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_SOLinks;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalSuperObjectRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_SuperObject;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalButton(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Button;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalConstant(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Integer;
    return p_stTree;
}

unsigned char fn_ucGetFieldValue(tdeFieldId_ eFieldId, HIE_tdstSuperObject_* hSuperObjPerso, tdstGetSetParam_* p_stGetSetParam);
void fn_vOnAIErm_M_UpdateLastError(int FatalErrorNum, char* szMsg);

tdstNodeInterpret_* fn_p_stEvalField(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned char bResult;
    bResult = fn_ucGetFieldValue(p_stTree->uDummy.uId.eFieldId, p_SuperObjPerso, p_stValue);
    if (!bResult)
        fn_vOnAIErm_M_UpdateLastError(10, 0);
    return ++p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalModelRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Model;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalColor(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.ulValue = p_stTree->uDummy.uParam.ulValue;
    p_stTree = (tdstNodeInterpret_*)((char*)p_stTree + 8);
    p_stValue->eType = E_vt_Color;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEvalMacro(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    return fn_p_stEvalSubRoutine(p_SuperObjPerso, p_stTree, p_stValue, p_stTree->uDummy.uParam.p_stMacro);
}
