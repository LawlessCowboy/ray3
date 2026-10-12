/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ConvFild.c */
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
typedef struct anon_0 anon_0;
typedef struct tdstFieldTypeEntry_ tdstFieldTypeEntry_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef union anon_1 anon_1;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstFieldEntry_ tdstFieldEntry_;

typedef enum tdeFieldTypeId_ {
    eFieldType_Integer = 0,
    eFieldType_Float = 1,
    eFieldType_Vector = 2,
    eFieldType_Comport = 3,
    eFieldType_0To255 = 4,
    eNbFieldType = 5,
} tdeFieldTypeId_;

struct anon_0 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstFieldTypeEntry_ {
    tdeVariableType_ eType; /* +0x0 */
    void (*fn_p_fn_vGetTypeFunction)(tdstGetSetParam_*); /* +0x4 */
    void (*fn_p_fn_vSetTypeFunction)(tdstGetSetParam_*); /* +0x8 */
};

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

union anon_1 {
    tduIdInterpret_ uId; /* +0x0 */
    tduGetSetParamForNode_ uParam; /* +0x0 */
};

struct tdstNodeInterpret_ {
    anon_1 uDummy; /* +0x0 */
    unsigned short uwNodeToSkip; /* +0x4 */
    unsigned char ucDepth; /* +0x6 */
    unsigned char eType; /* +0x7 */
};

struct tdstFieldEntry_ {
    tdeFieldTypeId_ eType; /* +0x0 */
    unsigned char (*p_fn_cGetFieldFunction)(HIE_tdstSuperObject_*, tdstGetSetParam_*); /* +0x4 */
    unsigned char (*p_fn_cSetFieldFunction)(HIE_tdstSuperObject_*, tdstGetSetParam_*); /* +0x8 */
};

tdstFieldEntry_ a_stFieldTable[20];
tdstFieldTypeEntry_ a_stFieldTypeTable[5];

unsigned char (*fn_p_fn_pGetFieldSetFunctionPtr(tdeFieldId_ eFieldId))(HIE_tdstSuperObject_*, tdstGetSetParam_*)
{
    return a_stFieldTable[eFieldId].p_fn_cSetFieldFunction;
}

unsigned char (*fn_p_fn_pGetFieldGetFunctionPtr(tdeFieldId_ eFieldId))(HIE_tdstSuperObject_*, tdstGetSetParam_*)
{
    return a_stFieldTable[eFieldId].p_fn_cGetFieldFunction;
}

tdeFieldTypeId_ fn_eGetEngineFieldType(tdeFieldId_ eFieldId)
{
    return a_stFieldTable[eFieldId].eType;
}

void (*fn_p_fn_pGetFieldTypeSetFunctionPtr(tdeFieldTypeId_ eFieldTypeId))(tdstGetSetParam_*)
{
    return a_stFieldTypeTable[eFieldTypeId].fn_p_fn_vSetTypeFunction;
}

void (*fn_p_fn_pGetFieldTypeGetFunctionPtr(tdeFieldTypeId_ eFieldTypeId))(tdstGetSetParam_*)
{
    return a_stFieldTypeTable[eFieldTypeId].fn_p_fn_vGetTypeFunction;
}
