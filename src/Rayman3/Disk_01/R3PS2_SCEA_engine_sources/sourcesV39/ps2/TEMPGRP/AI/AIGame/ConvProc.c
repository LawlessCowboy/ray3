/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ConvProc.c */
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
typedef struct tdstProcedureEntry_ tdstProcedureEntry_;

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

struct tdstProcedureEntry_ {
    tdstNodeInterpret_* (*p_fn_p_stProcedureFunction)(HIE_tdstSuperObject_*, tdstNodeInterpret_*); /* +0x0 */
    unsigned char bUltraProcedureFlag; /* +0x4 */
};

tdstProcedureEntry_ a_stProcedureTable[876];

/* MWCC does not accept the unnamed function-pointer declarator emitted by
 * the debug extractor.  Spell the recovered callback type explicitly. */
typedef tdstNodeInterpret_ *(*tdstProcedureFunction_)(HIE_tdstSuperObject_ *, tdstNodeInterpret_ *);

tdstProcedureFunction_ fn_p_fn_pGetProcedureFunctionPtr(tdeProcedureId_ eProcedureId)
{
    return a_stProcedureTable[eProcedureId].p_fn_p_stProcedureFunction;
}

unsigned char fn_ucGetProcedureUltraOperator(tdeProcedureId_ eProcId)
{
    return a_stProcedureTable[eProcId].bUltraProcedureFlag;
}
