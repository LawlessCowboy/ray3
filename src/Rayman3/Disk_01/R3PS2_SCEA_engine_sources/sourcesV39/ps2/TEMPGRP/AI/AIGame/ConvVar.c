/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ConvVar.c */
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
typedef struct anon_1 anon_1;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef union anon_0 anon_0;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstSaveTypeEntry_ tdstSaveTypeEntry_;
typedef struct tdstInitTypeEntry_ tdstInitTypeEntry_;
typedef struct tdstDsgVarTypeTableEntry_ tdstDsgVarTypeTableEntry_;

struct anon_1 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_1 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

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

struct tdstSaveTypeEntry_ {
    unsigned short eFlags; /* +0x0 */
};

struct tdstInitTypeEntry_ {
    tdeObjectTreeInit_ eFlags; /* +0x0 */
};

struct tdstDsgVarTypeTableEntry_ {
    tdeVariableType_ eVariableType; /* +0x0 */
    unsigned char (*p_fn_ucGetDsgVarFunction)(void*, unsigned char, tdstGetSetParam_*); /* +0x4 */
    unsigned char (*p_fn_ucSetDsgVarFunction)(void*, unsigned char, tdstGetSetParam_*); /* +0x8 */
};

static tdstDsgVarTypeTableEntry_ a_stDsgVarTypeTable[35];
tdstSaveTypeEntry_ a_st_SaveTypeTable[3];
tdstInitTypeEntry_ a_st_InitTypeTable[4];

 tdeVariableType_ fn_GetDsgVarType(tdeDsgVarTypeId_ eDsgVarTypeId)
{
    return a_stDsgVarTypeTable[eDsgVarTypeId].eVariableType;
}

tdstNodeInterpret_* fn_p_stEvalDsgVarRef(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstDsgMem_* p_stDsgMem;
    tdstDsgVarInfo_* p_stDsgVarInfo;
    tdstDsgVarInfo_* p_stDsgVarTypeInfo;
    unsigned int ulOffsetInDsgMem;
    tdeDsgVarTypeId_ eDsgVarTypeId;

    p_stDsgMem = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stDsgMem;
    p_stDsgVarInfo = (*p_stDsgMem->p_p_stDsgVar)->p_stDsgVarInfo;
    p_stDsgVarTypeInfo = (tdstDsgVarInfo_ *)((char *)p_stDsgVarInfo + 4);
    ulOffsetInDsgMem = *(unsigned int *)((char *)p_stDsgVarInfo + p_stTree->uDummy.uParam.ucValue * 16);
    eDsgVarTypeId = *(tdeDsgVarTypeId_ *)((char *)p_stDsgVarTypeInfo + p_stTree->uDummy.uParam.ucValue * 16);
    a_stDsgVarTypeTable[eDsgVarTypeId].p_fn_ucGetDsgVarFunction(
        (char *)p_stDsgMem->p_cDsgMemBuffer + ulOffsetInDsgMem,
        0,
        p_stValue);
    return ++p_stTree;
}

unsigned char (*fn_p_fn_pGetDsgVarSetFunctionPtr(tdeDsgVarTypeId_ eDsgVarTypeId))(void*, unsigned char, tdstGetSetParam_*)
{
    return a_stDsgVarTypeTable[eDsgVarTypeId].p_fn_ucSetDsgVarFunction;
}

unsigned char (*fn_p_fn_pGetDsgVarGetFunctionPtr(tdeDsgVarTypeId_ eDsgVarTypeId))(void*, unsigned char, tdstGetSetParam_*)
{
    return a_stDsgVarTypeTable[eDsgVarTypeId].p_fn_ucGetDsgVarFunction;
}
