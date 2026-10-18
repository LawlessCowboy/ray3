/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\DsgMem.c */
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
typedef union anon_0 anon_0;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstList_ tdstList_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstArray_ tdstArray_;
typedef union anon_1 anon_1;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;

typedef enum tdeSOL_ObjType_ {
    eSOL_Error = 0,
    eSOL_SPO = 1,
    eSOL_Character = 2,
    eSOL_Waypoint = 3,
} tdeSOL_ObjType_;

typedef enum tdeSOL_ObjPersistence_ {
    eSOL_UnknownPersistence = 0,
    eSOL_Persistent = 1,
    eSOL_NonPersistent = 2,
} tdeSOL_ObjPersistence_;

union anon_0 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

struct tdstList_ {
    unsigned char ucNbElt; /* +0x0 */
    unsigned char ucMaxSize; /* +0x1 */
    HIE_tdstSuperObject_** p_hTabElt; /* +0x4 */
};

struct tdstSuperObjectLinks_ {
    HIE_tdstSuperObject_* h_SPORef; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ POS_SPO_Init; /* +0x10 */
    unsigned int ulNbLinkedObjects; /* +0x70 */
    unsigned int ulNbLinksAllocated; /* +0x74 */
    int LinkedObj; /* +0x78 */
    tdeSOL_ObjType_* eTypeOfLinkedObj; /* +0x7c */
    MAT_tdstTransformation_* POS_InitOfLinkedObj; /* +0x80 */
    tdeSOL_ObjPersistence_* ePersistenceOfLinkedObj; /* +0x84 */
};

struct tdstArray_ {
    tdeDsgVarTypeId_ eType; /* +0x0 */
    unsigned char ucMaxSize; /* +0x4 */
    tduGetSetParamForNode_ d_ArrayElement[255]; /* +0x8 */
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

void fn_vTestUnusedComport(void)
{
}

unsigned char (*fn_p_fn_pGetDsgVarSetFunctionPtr(tdeDsgVarTypeId_ eDsgVarTypeId))(void*, unsigned char, tdstGetSetParam_*);
#define DSG_VAR_INFO_FIELD(mind, id, field, type) \
    (*(type*)((char*)&(*(mind)->p_stDsgMem->p_p_stDsgVar)->p_stDsgVarInfo->field + (id) * (int)sizeof(tdstDsgVarInfo_)))
unsigned char fn_ucSetDsgVar(unsigned char ucId, unsigned char ucIndex, AI_tdstMind_* p_stPerso, tdstGetSetParam_* p_stGetSetParam)
{
    unsigned char (*p_fn_ucSetDsgVar)(void*, unsigned char, tdstGetSetParam_*);
    p_fn_ucSetDsgVar = fn_p_fn_pGetDsgVarSetFunctionPtr(DSG_VAR_INFO_FIELD(p_stPerso, ucId, eDsgVarTypeId, tdeDsgVarTypeId_));
    return p_fn_ucSetDsgVar((void*)(p_stPerso->p_stDsgMem->p_cDsgMemBuffer + DSG_VAR_INFO_FIELD(p_stPerso, ucId, ulOffsetInDsgMem, unsigned int)), ucIndex, p_stGetSetParam);
}

unsigned char (*fn_p_fn_pGetDsgVarSetFunctionPtr(tdeDsgVarTypeId_ eDsgVarTypeId))(void*, unsigned char, tdstGetSetParam_*);
unsigned char fn_ucSetDsgVarArray(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    unsigned char (*p_fn_ucSetDsgVar)(void*, unsigned char, tdstGetSetParam_*);
    tdstArray_* p_stArray;
    unsigned char ret;
    p_stArray = (tdstArray_*)pMyVarAddr;
    p_fn_ucSetDsgVar = fn_p_fn_pGetDsgVarSetFunctionPtr(p_stArray->eType);
    ret = p_fn_ucSetDsgVar(&p_stArray->d_ArrayElement[p_stArray->eType == eDsgVarType_Vector ? ucIndex * 3 : ucIndex], 0, p_stGetSetParam);
    return ret;
}

int fn_ucSetDsgVarVisualMaterial(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    GLI_tdstMaterial_* hVisualMaterial;
    hVisualMaterial = p_stGetSetParam->uDummy.uParam.hVisualMaterial;
    *(GLI_tdstMaterial_**)pMyVarAddr = hVisualMaterial;
    return (hVisualMaterial == NULL) ^ 1;
}

int fn_ucSetDsgVarGameMaterial(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    GMT_tdstGameMaterial_* hGameMaterial;
    hGameMaterial = p_stGetSetParam->uDummy.uParam.hGameMaterial;
    *(GMT_tdstGameMaterial_**)pMyVarAddr = hGameMaterial;
    return (hGameMaterial == NULL) ^ 1;
}

unsigned char fn_ucIsThereFloatIfYesConvertItToInteger(tdstGetSetParam_* p_stParam);
/* The setter callback has an unused byte argument; the target receives the parameter block in a2. */
unsigned char fn_ucSetDsgVarPositiveInteger(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
    *(unsigned int*)pMyVarAddr = p_stGetSetParam->uDummy.uParam.ulValue;
    return 1;
}

unsigned char fn_ucSetDsgVarInteger(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
    *(int*)pMyVarAddr = p_stGetSetParam->uDummy.uParam.lValue;
    return 1;
}

unsigned char fn_ucSetDsgVar0To65535(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
    *(unsigned short*)pMyVarAddr = p_stGetSetParam->uDummy.uParam.wValue;
    return 1;
}

unsigned char fn_ucSetDsgVar_32768To32767(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
    *(short*)pMyVarAddr = p_stGetSetParam->uDummy.uParam.wValue;
    return 1;
}

unsigned char fn_ucSetDsgVar0To255(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
    *(unsigned char*)pMyVarAddr = p_stGetSetParam->uDummy.uParam.ucValue;
    return 1;
}

unsigned char fn_ucSetDsgVar_128To127(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
    *(char*)pMyVarAddr = p_stGetSetParam->uDummy.uParam.cValue;
    return 1;
}

unsigned char fn_ucSetDsgVarBoolean(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    fn_ucIsThereFloatIfYesConvertItToInteger(p_stGetSetParam);
    *(char*)pMyVarAddr = p_stGetSetParam->uDummy.uParam.cValue;
    return 1;
}

unsigned char fn_ucSetDsgVarList(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    tdstList_* p_TgtList;
    tdstList_* p_SrcList;
    p_TgtList = (tdstList_*)pMyVarAddr;
    p_SrcList = *(tdstList_**)&p_stGetSetParam->uDummy.uParam;
    p_TgtList->ucNbElt = p_TgtList->ucMaxSize < p_SrcList->ucNbElt ? p_TgtList->ucMaxSize : p_SrcList->ucNbElt;
    memcpy(p_TgtList->p_hTabElt, p_SrcList->p_hTabElt, p_TgtList->ucNbElt * sizeof(HIE_tdstSuperObject_*));
    return 1;
}

unsigned char fn_ucSetDsgVarWayPoint(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    WP_tdstWayPoint_* m_hWayPoint;
    m_hWayPoint = p_stGetSetParam->uDummy.uParam.m_hWayPoint;
    *(WP_tdstWayPoint_**)pMyVarAddr = m_hWayPoint;
    return 1;
}

unsigned char fn_ucSetDsgVarGraph(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    WP_tdstGraph_* hGraph;
    hGraph = p_stGetSetParam->uDummy.uParam.hGraph;
    *(WP_tdstGraph_**)pMyVarAddr = hGraph;
    return 1;
}

unsigned char fn_ucSetDsgVarCaps(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    unsigned int xMask;
    xMask = *(unsigned int*)p_stGetSetParam;
    *(unsigned int*)pMyVarAddr = xMask;
    return 1;
}

unsigned char fn_ucSetDsgVarText(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    int hText;
    hText = p_stGetSetParam->uDummy.uParam.hText;
    *(int*)pMyVarAddr = hText;
    return 1;
}

unsigned char fn_ucSetDsgVarVector(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    unsigned int* p_stVertex;
    p_stVertex = (unsigned int*)p_stGetSetParam;
    ((unsigned int*)pMyVarAddr)[0] = p_stVertex[0];
    ((unsigned int*)pMyVarAddr)[1] = p_stVertex[1];
    ((unsigned int*)pMyVarAddr)[2] = p_stVertex[2];
    return 1;
}

int fn_ucSetDsgVarComport(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    tdstComport_* p_stComport;
    p_stComport = p_stGetSetParam->uDummy.uParam.pComport;
    *(tdstComport_**)pMyVarAddr = p_stComport;
    return (p_stComport == NULL) ^ 1;
}

unsigned char fn_ucSetDsgVarAction(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    tdstState_* hAction;
    hAction = p_stGetSetParam->uDummy.uParam.tdxstHandleToState;
    *(tdstState_**)pMyVarAddr = hAction;
    return 1;
}

unsigned char fn_ucSetDsgVarLight(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    GLI_tdstLight_* p_stLight;
    p_stLight = p_stGetSetParam->uDummy.uParam.p_stLight;
    *(GLI_tdstLight_**)pMyVarAddr = p_stLight;
    return 1;
}

unsigned char fn_ucSetDsgVarSoundEvent(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    _SND_tdstBlockEvent* pSoundEvent;
    pSoundEvent = p_stGetSetParam->uDummy.uParam.pSoundEvent;
    *(_SND_tdstBlockEvent**)pMyVarAddr = pSoundEvent;
    return 1;
}

unsigned char fn_ucSetDsgVarInput(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    IPT_tdstEntryElement_* hEntryElement;
    hEntryElement = *(IPT_tdstEntryElement_**)p_stGetSetParam;
    *(IPT_tdstEntryElement_**)pMyVarAddr = hEntryElement;
    return 1;
}

unsigned char fn_ucSetDsgVarSOLinks(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    tdstSuperObjectLinks_* p_stSOL;
    p_stSOL = p_stGetSetParam->uDummy.uParam.hSOLinks;

    if (p_stSOL != NULL)
        *(tdstSuperObjectLinks_**)pMyVarAddr = p_stSOL;
    else
        *(tdstSuperObjectLinks_**)pMyVarAddr = NULL;

    return 1;
}

unsigned char fn_ucSetDsgVarSuperObject(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    HIE_tdstSuperObject_* p_stObject;
    p_stObject = p_stGetSetParam->uDummy.uParam.hSuperObject;

    if (p_stObject != NULL)
        *(HIE_tdstSuperObject_**)pMyVarAddr = p_stObject;
    else
        *(HIE_tdstSuperObject_**)pMyVarAddr = NULL;

    return 1;
}

HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_* h_StdGame);
unsigned char fn_ucSetDsgVarPerso(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    tdstEngineObject_* p_stObject;
    p_stObject = p_stGetSetParam->uDummy.uParam.p_stEngObjValue;
    if (p_stObject &&
        p_stObject->h_StandardGame) {
        *(HIE_tdstSuperObject_**)pMyVarAddr = fn_h_StandardGameGetSuperObject(p_stObject->h_StandardGame);
        return 1;
    }
    *(HIE_tdstSuperObject_**)pMyVarAddr = 0;
    return 1;
}

unsigned char fn_ucSetDsgVarFloat(void* pMyVarAddr, unsigned char param0, tdstGetSetParam_* p_stGetSetParam)
{
    *(float*)pMyVarAddr = p_stGetSetParam->eType == E_vt_Float ? p_stGetSetParam->uDummy.uParam.xValue : (float)p_stGetSetParam->uDummy.uParam.lValue;
    return 1;
}

unsigned char (*fn_p_fn_pGetDsgVarGetFunctionPtr(tdeDsgVarTypeId_ eDsgVarTypeId))(void*, unsigned char, tdstGetSetParam_*);
unsigned char fn_ucGetDsgVar(unsigned char ucId, unsigned char ucIndex, AI_tdstMind_* p_stPerso, tdstGetSetParam_* p_stGetSetParam)
{
    unsigned char (*p_fn_ucGetDsgVar)(void*, unsigned char, tdstGetSetParam_*);
    char* pData;
    pData = *(char**)&p_stPerso->p_stDsgMem->p_cDsgMemBuffer + DSG_VAR_INFO_FIELD(p_stPerso, ucId, ulOffsetInDsgMem, unsigned int);
    p_fn_ucGetDsgVar = fn_p_fn_pGetDsgVarGetFunctionPtr(DSG_VAR_INFO_FIELD(p_stPerso, ucId, eDsgVarTypeId, tdeDsgVarTypeId_));
    return p_fn_ucGetDsgVar(pData, ucIndex, p_stGetSetParam);
}

unsigned char (*fn_p_fn_pGetDsgVarGetFunctionPtr(tdeDsgVarTypeId_ eDsgVarTypeId))(void*, unsigned char, tdstGetSetParam_*);
unsigned char fn_ucGetDsgVarArray(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    unsigned char (*p_fn_ucGetDsgVar)(void*, unsigned char, tdstGetSetParam_*);
    tdstArray_* p_stArray;
    unsigned char ret;
    p_stArray = (tdstArray_*)pMyVarAddr;
    p_fn_ucGetDsgVar = fn_p_fn_pGetDsgVarGetFunctionPtr(p_stArray->eType);
    ret = p_fn_ucGetDsgVar(&p_stArray->d_ArrayElement[p_stArray->eType == eDsgVarType_Vector ? ucIndex * 3 : ucIndex], 0, p_stGetSetParam);
    return ret;
}

unsigned char fn_ucGetDsgVarVisualMaterial(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    GLI_tdstMaterial_* hVisualMaterial;
    hVisualMaterial = *(GLI_tdstMaterial_**)pMyVarAddr;
    p_stGetSetParam->uDummy.uParam.hVisualMaterial = hVisualMaterial;
    p_stGetSetParam->eType = E_vt_VisualMaterial;
    return hVisualMaterial != NULL;
}

unsigned char fn_ucGetDsgVarGameMaterial(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    GMT_tdstGameMaterial_* hGameMaterial;
    hGameMaterial = *(GMT_tdstGameMaterial_**)pMyVarAddr;
    *(GMT_tdstGameMaterial_**)p_stGetSetParam = hGameMaterial;
    *((tdeVariableType_*)((char*)p_stGetSetParam + 12)) = E_vt_GameMaterial;
    return GMT_fn_b_ulIsValid(hGameMaterial) != 0;
}

unsigned char fn_ucGetDsgVarPositiveInteger(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.ulValue = *(unsigned int*)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_Integer;
    return 1;
}

unsigned char fn_ucGetDsgVarInteger(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.lValue = *(int*)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_Integer;
    return 1;
}

unsigned char fn_ucGetDsgVar0To65535(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.ulValue = *(unsigned short*)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_Integer;
    return 1;
}

unsigned char fn_ucGetDsgVar_32768To32767(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.lValue = *(short*)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_Integer;
    return 1;
}

unsigned char fn_ucGetDsgVar0To255(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.ulValue = *(unsigned char*)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_Integer;
    return 1;
}

unsigned char fn_ucGetDsgVar_128To127(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.lValue = *(char*)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_Integer;
    return 1;
}

unsigned char fn_ucGetDsgVarBoolean(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    char value = *(char*)pMyVarAddr;
    p_stGetSetParam->uDummy.uParam.lValue = value;
    /* The retail routine tags this byte-valued getter as integer (6). */
    p_stGetSetParam->eType = E_vt_Integer;
    return 1;
}

unsigned char fn_ucGetDsgVarList(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.p_stEngObjValue = pMyVarAddr;
    p_stGetSetParam->eType = E_vt_List;
    return 1;
}

unsigned char fn_ucGetDsgVarText(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    int hText = *(int*)pMyVarAddr;

    p_stGetSetParam->uDummy.uParam.hText = hText; p_stGetSetParam->eType = E_vt_Text;

    if (hText == -1) return 0; return 1;
}

unsigned char fn_ucGetDsgVarComport(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    tdstComport_* p_stComport;
    int eType;
    p_stComport = *(tdstComport_**)pMyVarAddr;
    eType = E_vt_Comport;
    p_stGetSetParam->uDummy.uParam.pComport = p_stComport;
    p_stGetSetParam->eType = eType;
    return (unsigned char)(((unsigned int)p_stComport == 0u) ^ 1u);
}

unsigned char fn_ucGetDsgVarAction(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    tdstState_* hAction = *(tdstState_**)pMyVarAddr;
    p_stGetSetParam->uDummy.uParam.tdxstHandleToState = hAction; p_stGetSetParam->eType = E_vt_Action;


    if (hAction == NULL) return 0; return 1;
}

unsigned char fn_ucGetDsgVarWayPoint(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.m_hWayPoint = *(WP_tdstWayPoint_**)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_WayPoint;
    return 1;
}

unsigned char fn_ucGetDsgVarGraph(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.hGraph = *(WP_tdstGraph_**)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_Graph;
    return 1;
}

unsigned char fn_ucGetDsgVarCaps(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    p_stGetSetParam->uDummy.uParam.ulValue = *(unsigned int*)pMyVarAddr;
    p_stGetSetParam->eType = E_vt_Caps;
    return 1;
}

unsigned char fn_ucGetDsgVarVector(void* pMyVarAddr, unsigned char ucIndex, tdstGetSetParam_* p_stGetSetParam)
{
    unsigned int* pSrc = (unsigned int*)pMyVarAddr;
    unsigned int* pDst = (unsigned int*)&p_stGetSetParam->uDummy.uParam.stVectorValue;
    pDst[0] = pSrc[0];
    pDst[1] = pSrc[1];
    pDst[2] = pSrc[2];
    p_stGetSetParam->eType = E_vt_Vector;
    return 1;
}

unsigned char fn_ucGetDsgVarSOLinks(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    tdstSuperObjectLinks_* hSOL;
    int eType;
    hSOL = *(tdstSuperObjectLinks_**)pMyVarAddr;
    eType = E_vt_SOLinks;
    p_stGetSetParam->uDummy.uParam.hSOLinks = hSOL;
    p_stGetSetParam->eType = eType;
    return (unsigned char)(((unsigned int)hSOL == 0u) ^ 1u);
}

unsigned char fn_ucGetDsgVarSuperObject(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    HIE_tdstSuperObject_* hSuperObject;
    int eType;
    hSuperObject = *(HIE_tdstSuperObject_**)pMyVarAddr;
    eType = E_vt_SuperObject;
    p_stGetSetParam->uDummy.uParam.hSuperObject = hSuperObject;
    p_stGetSetParam->eType = eType;
    return (unsigned char)(((unsigned int)hSuperObject == 0u) ^ 1u);
}

unsigned char fn_ucGetDsgVarLight(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    GLI_tdstLight_* hEntryElement;
    int eType;
    hEntryElement = *(GLI_tdstLight_**)pMyVarAddr;
    eType = E_vt_Light;
    p_stGetSetParam->uDummy.uParam.p_stLight = hEntryElement;
    p_stGetSetParam->eType = eType;
    return (unsigned char)(((unsigned int)hEntryElement == 0u) ^ 1u);
}

unsigned char fn_ucGetDsgVarSoundEvent(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    _SND_tdstBlockEvent* hEntryElement;
    int eType;
    hEntryElement = *(_SND_tdstBlockEvent**)pMyVarAddr;
    eType = E_vt_SoundEvent;
    p_stGetSetParam->uDummy.uParam.pSoundEvent = hEntryElement;
    p_stGetSetParam->eType = eType;
    return (unsigned char)(((unsigned int)hEntryElement == 0u) ^ 1u);
}

unsigned char fn_ucGetDsgVarInput(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    IPT_tdstEntryElement_* hEntryElement = *(IPT_tdstEntryElement_**)pMyVarAddr;

    *(IPT_tdstEntryElement_**)&p_stGetSetParam->uDummy.uParam = hEntryElement; p_stGetSetParam->eType = E_vt_Button;

    if (hEntryElement == NULL) return 0; return 1;
}

unsigned char fn_ucGetDsgVarPerso(void* pMyVarAddr, unsigned char unused, tdstGetSetParam_* p_stGetSetParam)
{
    HIE_tdstSuperObject_* param0;
    param0 = *(HIE_tdstSuperObject_**)pMyVarAddr;
    p_stGetSetParam->uDummy.uParam.p_stEngObjValue = param0 == 0 ? 0 : (param0->ulTypeOfLinkedObject != 2 ? 0 : param0->hLinkedObject.p_stCharacter); p_stGetSetParam->eType = E_vt_Perso;
    if (!param0)
        return 0;
    return 1;
}

unsigned char fn_ucGetDsgVarFloat(void* pMyVarAddr, void* param0, tdstGetSetParam_* p_stGetSetParam)
{
    *(float*)p_stGetSetParam = *(float*)pMyVarAddr;
    *((tdeVariableType_*)((char*)p_stGetSetParam + 12)) = E_vt_Float;
    return 1;
}
