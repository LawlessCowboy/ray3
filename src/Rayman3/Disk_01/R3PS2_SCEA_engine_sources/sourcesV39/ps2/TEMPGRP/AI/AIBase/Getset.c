/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Getset.c */
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
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef union anon_1 anon_1;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;

typedef enum tdeFieldTypeId_ {
    eFieldType_Integer = 0,
    eFieldType_Float = 1,
    eFieldType_Vector = 2,
    eFieldType_Comport = 3,
    eFieldType_0To255 = 4,
    eNbFieldType = 5,
} tdeFieldTypeId_;

/* The debug record for this anonymous value is a union, not a nested
 * structure.  MWCC consequently exposes each alternative directly through
 * uDummy (the recovered code uses uDummy.lValue/xValue/etc.). */
union anon_0 {
    tduGetSetParam_ uParam; /* +0x0 */
    float xValue; /* +0x0 */
    int lValue; /* +0x0 */
    unsigned int ulValue; /* +0x0 */
    MTH3D_tdstVector_ stVectorValue; /* +0x0 */
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

unsigned int fn_ulSizeOfDsgVar(tdeDsgVarTypeId_ eDsgVarTypeId, unsigned char ucNbElt)
{
    switch (eDsgVarTypeId) {
    case eDsgVarType_Caps: return 4;
    case eDsgVarType_Graph: return 4;
    case eDsgVarType_Boolean: return 1;
    case eDsgVarType__128To127: return 1;
    case eDsgVarType_0To255: return 1;
    case eDsgVarType__32768To32767: return 2;
    case eDsgVarType_0To65535: return 2;
    case eDsgVarType_Integer: return 4;
    case eDsgVarType_PositiveInteger: return 4;
    case eDsgVarType_Float: return 4;
    case eDsgVarType_WayPoint: return 4;
    case eDsgVarType_Perso: return 4;
    case eDsgVarType_Input: return 4;
    case eDsgVarType_SoundEvent: return 4;
    case eDsgVarType_Light: return 4;
    case eDsgVarType_SuperObject: return 4;
    case eDsgVarType_SOLinks: return 4;
    case eDsgVarType_Text: return 4;
    case eDsgVarType_List: return 8;
    case eDsgVarType_Vector: return 12;
    case eDsgVarType_Action: return 4;
    case eDsgVarType_Comport: return 4;
    case eDsgVarType_GameMaterial: return 4;
    case eDsgVarType_VisualMaterial: return 4;
    case eDsgVarType_VectorArray:
        return (unsigned int)ucNbElt * 12 + 8;
    case eDsgVarType_IntegerArray:
    case eDsgVarType_FloatArray:
    case eDsgVarType_PersoArray:
    case eDsgVarType_WayPointArray:
    case eDsgVarType_GraphArray:
    case eDsgVarType_TextArray:
    case eDsgVarType_SOLinksArray:
    case eDsgVarType_SoundEventArray:
    case eDsgVarType_VisualMatArray:
        return ((unsigned int)ucNbElt - 1) * 4 + 12;
    default:
        return 0;
    }
}

tdeFieldTypeId_ fn_eGetEngineFieldType(tdeFieldId_ eFieldId);
unsigned char (*fn_p_fn_pGetFieldGetFunctionPtr(tdeFieldId_ eFieldId))(HIE_tdstSuperObject_*, tdstGetSetParam_*);
void (*fn_p_fn_pGetFieldTypeGetFunctionPtr(tdeFieldTypeId_ eFieldTypeId))(tdstGetSetParam_*);

unsigned char fn_ucGetFieldValue(tdeFieldId_ eFieldId, HIE_tdstSuperObject_* hSuperObjPerso, tdstGetSetParam_* p_stGetSetParam)
{
    char ret;
    void (*p_fn_vGetFieldTypeFunction)(tdstGetSetParam_*);
    unsigned char (*p_fn_cGetFieldFunction)(HIE_tdstSuperObject_*, tdstGetSetParam_*);
    tdeFieldTypeId_ eFieldType;

    eFieldType = fn_eGetEngineFieldType(eFieldId);
    p_fn_cGetFieldFunction = fn_p_fn_pGetFieldGetFunctionPtr(eFieldId);
    p_fn_vGetFieldTypeFunction = fn_p_fn_pGetFieldTypeGetFunctionPtr(eFieldType);

    p_stGetSetParam->uDummy.stVectorValue.xX = 0.0f;
    p_stGetSetParam->uDummy.stVectorValue.xY = 0.0f;
    p_stGetSetParam->uDummy.stVectorValue.xZ = 0.0f;
    p_stGetSetParam->eType = E_vt_None;

    ret = p_fn_cGetFieldFunction(hSuperObjPerso, p_stGetSetParam);
    if (ret == 1)
        p_fn_vGetFieldTypeFunction(p_stGetSetParam);

    return ret;
}

/* Engine float-to-int conversion: retail converts through $f30 at 164 sites
 * in 77 game functions ("cvt.w.s $f30, x; mfc1 r, $f30"), a register MWCC
 * never picks for its own conversions. */
inline long MTH_M_xRealToLong(float _xValue)
{
    long _lResult;
    asm
    {
        cvt.w.s f30, _xValue
        mfc1 _lResult, f30
    }
    return _lResult;
}

void fn_vGetFieldType0To255(tdstGetSetParam_* p_stGetSetParam)
{
    if (p_stGetSetParam->eType == E_vt_Float) {
        p_stGetSetParam->uDummy.lValue = MTH_M_xRealToLong(p_stGetSetParam->uDummy.xValue); p_stGetSetParam->eType = E_vt_Integer;
    }
}

void fn_vGetFieldTypeInteger(tdstGetSetParam_* p_stGetSetParam)
{
    if (p_stGetSetParam->eType == E_vt_Float) {
        p_stGetSetParam->uDummy.lValue = MTH_M_xRealToLong(p_stGetSetParam->uDummy.xValue);
        p_stGetSetParam->eType = E_vt_Integer;
    }
}

void fn_vGetFieldTypeFloat(tdstGetSetParam_* p_stGetSetParam)
{
    if (p_stGetSetParam->eType != E_vt_Float) {
        p_stGetSetParam->uDummy.xValue = p_stGetSetParam->uDummy.lValue;
        p_stGetSetParam->eType = E_vt_Float;
    }
}

void fn_vGetFieldTypeVector(void)
{
    /* TODO: decompile from asm/... */
}

void fn_vGetFieldTypeComport(void)
{
    /* TODO: decompile from asm/... */
}

unsigned char (*fn_p_fn_pGetFieldSetFunctionPtr(tdeFieldId_ eFieldId))(HIE_tdstSuperObject_*, tdstGetSetParam_*);
void (*fn_p_fn_pGetFieldTypeSetFunctionPtr(tdeFieldTypeId_ eFieldTypeId))(tdstGetSetParam_*);

unsigned char fn_ucSetFieldValue(tdeFieldId_ eFieldId, HIE_tdstSuperObject_* hSuperObjPerso, tdstGetSetParam_* p_stGetSetParam)
{
    void (*p_fn_vSetFieldTypeFunction)(tdstGetSetParam_*);
    unsigned char (*p_fn_cSetFieldFunction)(HIE_tdstSuperObject_*, tdstGetSetParam_*);
    tdeFieldTypeId_ eFieldType;

    eFieldType = fn_eGetEngineFieldType(eFieldId);
    p_fn_cSetFieldFunction = fn_p_fn_pGetFieldSetFunctionPtr(eFieldId);
    p_fn_vSetFieldTypeFunction = fn_p_fn_pGetFieldTypeSetFunctionPtr(eFieldType);
    p_fn_vSetFieldTypeFunction(p_stGetSetParam);
    return p_fn_cSetFieldFunction(hSuperObjPerso, p_stGetSetParam);
}

void fn_vSetFieldType0To255(tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
}

void fn_vSetFieldTypeInteger(tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
}

void fn_vSetFieldTypeFloat(tdstGetSetParam_* p_stGetSetParam)
{
    if (p_stGetSetParam->eType != E_vt_Float) {
        p_stGetSetParam->uDummy.xValue = p_stGetSetParam->uDummy.lValue;
        p_stGetSetParam->eType = E_vt_Float;
    }
}

void fn_vSetFieldTypeVector(void)
{
    return;
}
