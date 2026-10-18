/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\StrIntel.c */
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
typedef struct tdstList_ tdstList_;
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

unsigned char g_ucNewActionReturn;
unsigned char g_ucUseDefaultActionReturn;
unsigned char g_ucAIModuleId;
unsigned char g_ucMmgModuleId;

struct tdstList_ {
    unsigned char ucNbElt; /* +0x0 */
    unsigned char ucMaxSize; /* +0x1 */
    HIE_tdstSuperObject_** p_hTabElt; /* +0x4 */
};

void fn_vOnAIErm_M_UpdateLastError(int FatalErrorNum, char* szMsg);

void fn_vPutInList(tdstList_* p_List, HIE_tdstSuperObject_* p_Perso)
{

    if (p_List->ucNbElt < p_List->ucMaxSize)
    {
        p_List->p_hTabElt[p_List->ucNbElt++] = p_Perso;
    }


    else
        fn_vOnAIErm_M_UpdateLastError(14, NULL);
}

unsigned char fn_ucGetTreeNbParam(tdstNodeInterpret_* p_stTree)
{
    unsigned char ucDepth;
    unsigned char ucNbParam;

    ucNbParam = 0;
    ucDepth = (p_stTree - 1)->ucDepth;
    while ((p_stTree->ucDepth > ucDepth) && (p_stTree->eType != E_ti_EndTree))
    {
        if (p_stTree->ucDepth == ucDepth + 1)
            ucNbParam++;
        p_stTree++;
    }
    return ucNbParam;
}

unsigned char fn_ucChangeComportIntell(tdstIntelligence_* p_stIntelligence, tdstComport_* p_stComport)
{
    p_stIntelligence->p_stPrevComport = p_stIntelligence->p_stCurrentComport;
    p_stIntelligence->p_stCurrentComport = p_stComport;
    fn_vInitActionTable(p_stIntelligence);
    if (p_stComport->p_stSchedule == NULL)
        p_stIntelligence->p_stCurrentSchedule = NULL;
    else
        p_stIntelligence->p_stCurrentSchedule = p_stComport->p_stSchedule->p_stNodeInterpret;
    return 1;
}

void fn_vReinitComport(tdstIntelligence_* p_stIntelligence)
{
    tdstComport_* p_stComport = (tdstComport_*)p_stIntelligence->ulNoComportInit;

    p_stIntelligence->p_stPrevComport = p_stIntelligence->p_stCurrentComport;
    p_stIntelligence->p_stCurrentComport = p_stComport;
    fn_vInitActionTable(p_stIntelligence);
    if (p_stComport->p_stSchedule == NULL)
        p_stIntelligence->p_stCurrentSchedule = NULL;
    else
        p_stIntelligence->p_stCurrentSchedule = p_stComport->p_stSchedule->p_stNodeInterpret;
    p_stIntelligence->p_stPrevComport = p_stIntelligence->p_stCurrentComport;
}
