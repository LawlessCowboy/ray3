/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ConvFunc.c */
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

typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef tdstNodeInterpret_* (*tdstFunctionPointer_)(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*);

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
typedef struct tdstFunctionEntry_ tdstFunctionEntry_;

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

struct tdstFunctionEntry_ {
    tdstNodeInterpret_* (*p_fn_p_stFunctionFunction)(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*); /* +0x0 */
    unsigned char bUltraFunctionFlag; /* +0x4 */
};

tdstFunctionEntry_ a_stFunctionTable[446];

tdstFunctionPointer_ fn_p_fn_pGetFunctionFunctionPtr(tdeFuncId_ eFuncId)
{
    return a_stFunctionTable[eFuncId].p_fn_p_stFunctionFunction;
}

unsigned char fn_ucGetFunctionUltraOperator(tdeFuncId_ eFuncId)
{
    return a_stFunctionTable[eFuncId].bUltraFunctionFlag;
}
