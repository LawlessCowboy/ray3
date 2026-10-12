/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ConvCond.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/GMT.h"
#include "r3/MOR.h"
#include "r3/SECT.h"
#include "r3/WP.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef union anon_0 anon_0;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct anon_1 anon_1;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstConditionEntry_ tdstConditionEntry_;

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

struct tdstConditionEntry_ {
    tdstNodeInterpret_* (*p_fn_p_stConditionFunction)(HIE_tdstSuperObject_*, tdstNodeInterpret_*, int*); /* +0x0 */
    unsigned char bUltraCondtionFlag; /* +0x4 */
};

tdstConditionEntry_ a_stConditionTable[178];

tdstNodeInterpret_* fn_p_stEvalCondition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int lValue = 0;
    int bValue;
    tdstNodeInterpret_* p_stNextTree;

    p_stNextTree = p_stTree + 1;
    a_stConditionTable[(unsigned int)p_stTree->uDummy.uId.eCondId].p_fn_p_stConditionFunction(p_SuperObjPerso, p_stNextTree, &lValue);
    bValue = lValue ? 1 : 0;
    *(int *)p_stValue = bValue;
    *(tdeVariableType_ *)((unsigned char *)p_stValue + 0xC) = E_vt_Integer;
}

unsigned char fn_ucGetConditionUltraOperator(tdeCondId_ eCondId)
{
    return a_stConditionTable[eCondId].bUltraCondtionFlag;
}
