/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct CLinkActorPool CLinkActorPool;
typedef struct sallocator sallocator;
struct sallocator { int data[4]; };
typedef struct CResObj CResObj;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct CEventResData CEventResData;
typedef struct CResObjState CResObjState;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct less less;
typedef struct stree stree;
typedef struct sset sset;
typedef struct sstring sstring;
typedef struct CVar CVar;
typedef struct smap smap;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct _stVector _stVector;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CActorResObj CActorResObj;
typedef struct CActorModifiers CActorModifiers;
typedef struct CUUID CUUID;
typedef struct CLookupElement CLookupElement;
typedef struct TTypedVar TTypedVar;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CCmdInterface CCmdInterface;
typedef struct CSndVarType CSndVarType;
typedef struct CStringIsLess CStringIsLess;
typedef struct CIdObj CIdObj;
typedef struct CRefIdObj CRefIdObj;
typedef struct streebase streebase;
typedef struct CProgramContext CProgramContext;
typedef struct CResData CResData;
typedef struct sTreeLink sTreeLink;
typedef struct CResType CResType;

typedef enum tdeType {
    EBASE = 0,
    EARRAY = 1,
    ESTRUCT = 2,
    EOBJECT = 3,
    ERESID = 4,
    EENUM = 5,
} tdeType;

typedef enum tdeEventType {
    EPLAYEVENT = 0,
    ESTOPEVENT = 1,
    EPITCHEVENT = 2,
    EVOLUMEEVENT = 3,
    EEXTRAEVENT = 4,
    ESTOPALLEVENT = 5,
    ESTOPANDGO = 6,
} tdeEventType;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct CResObjParams {
    /* C++ base CInterface at +0x0: vtable pointer (retail
     * __vt__Q216CExtraEventActor13CResObjParams: fv_vRelease, fv_vAddRef). */
    virtual void fv_vRelease(void);
    virtual void fv_vAddRef(void);
    CResObjParams* m_poNext; /* +0x4 */
    CResObjParams* m_poPrevious; /* +0x8 */
    unsigned int m_uiNbRefs; /* +0xc */
    int m_s32Handle; /* +0x10 */
    CResData* m_poResData; /* +0x14 */
    void (*m_pfn_Proc)(int); /* +0x18 */
};

namespace usnd { struct CEventResData; }

struct CExtraEventActor {
    CExtraEventActor* m_poNext; /* +0x0 */
    CExtraEventActor* m_poPrevious; /* +0x4 */
    TTypedVar* m_poIntSwitchVar; /* +0x8 */
    CActorResObj* mpoActorObj; /* +0xc */
    TTypedVar* mpoVolumeModifier; /* +0x10 */
    TTypedVar* mpoPitchModifier; /* +0x14 */
    CLinkTypeActor* mpoActorType; /* +0x18 */
    int ms32ACPObjectId; /* +0x1c */
    int ms32ACPChannelId; /* +0x20 */
    tdeEventType meExtraCoeff; /* +0x24 */
    float mfCoeffA; /* +0x28 */
    float mfCoeffB; /* +0x2c */
    float mfCoeffC; /* +0x30 */
    float mfCoeffD; /* +0x34 */
    int ms32RefreshChannel; /* +0x38 */
    _RollOffParam mstRollOff; /* +0x3c */
    unsigned char mbWaitForKill; /* +0x48 */
    unsigned char mbAllSoundPaused; /* +0x49 */
    CResObjParams m_oResObjParams; /* +0x4c */
    void f_vIsolate(void);
    void f_vDesInit(void);
    unsigned char mfn_bApplyAllParams(bool b_Force);
    CExtraEventActor();
    ~CExtraEventActor();
    void f_vInit(const CLinkTypeActor& ro_Type, int s32_ObjectId, int s32_ChannelId, const usnd::CEventResData* po_ResData);
    void f_vInsertAfter(CExtraEventActor* po_Previous);
    /* Inlined validity test (original name unknown). */
    unsigned char mfn_bIsValid(void) { if (ms32ACPObjectId == -1) return 1; return (mstRollOff.rDistBackGround != 0) && (mstRollOff.rDistSatur != 0); }
};

struct CExtraEventActorPool {
    static void f_vSalvageActor(CExtraEventActor* poActor);
    static CExtraEventActor* fs_poGetAnActor(int s32_ObjectId);
};

extern "C" void usnd_free(void* pv);
extern "C" void* usnd_malloc(unsigned int uiSize);

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    virtual ~CLinkActor(); /* vtable pointer at +0x8 (retail __vt__10CLinkActor) */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
    unsigned char mfn_bSynchroniseActorInstance(void);
    unsigned char mfn_bExecuteActorInstance(int s32_CmdId, int s32_ChannelId);
    CExtraEventActor* mfn_poAddExtraEventActorInstance(int s32_ChannelId, const usnd::CEventResData* poResData);
    CExtraEventActor* mfn_poGetExtraEventActorInstance(int s32_ChannelId, const usnd::CEventResData* po_ResData);
    void f_vInsertAfter(CLinkActor* pParam);
    void f_vIsolate(void);
    void f_vDesInit(void);
    void f_vInit(CLinkTypeActor& ro_Type, int s32_ObjectId);
    static void operator delete(void* pv) { usnd_free(pv); }
    static void* operator new(unsigned int uiSize) { return usnd_malloc(uiSize); }
    CLinkActor() : mpoType(0) { m_poNext = 0; m_poPrevious = 0; }
};

struct CLinkActorPool {
    static CLinkActor ms_oPool;
    static void f_vSalvageActor(CLinkActor*);
    CLinkActor* fs_poGetAnActor(void);
};

struct CResObj {
    virtual ~CResObj();
    virtual void fv_vExecCmd(unsigned int ui_CmdId, void* pv_Data);
    bool f_bExecCmd(unsigned int ui_CmdId, void* pv_Data) { fv_vExecCmd(ui_CmdId, pv_Data); return true; }
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CResData : CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CEventResData : CResData {
    float m_fCoeffA; /* +0x18 */
    float m_fCoeffB; /* +0x1c */
    float m_fCoeffC; /* +0x20 */
    float m_fCoeffD; /* +0x24 */
    tdeEventType m_eEventType; /* +0x28 */
    CIdObjPtr m_pTargetRes; /* +0x2c */
};

struct CResObjState {
    CResObj* m_poResObj; /* +0x0 */
    unsigned int m_uiInstance; /* +0x4 */
    unsigned char m_bPlayable; /* +0x8 */
    unsigned char m_b2DRes; /* +0x9 */
    unsigned char m_b3DRes; /* +0xa */
    unsigned char m_bHasPosition; /* +0xb */
    unsigned char m_bAcceptsSet2DParamsCmd; /* +0xc */
    unsigned char m_bOwnerIsAProgram; /* +0xd */
    unsigned char m_bResident; /* +0xe */
    int m_pvUserData; /* +0x10 */
    int m_iUserDataSize; /* +0x14 */
    CResObjState* m_poNext; /* +0x18 */
    CResObjState* m_poPrevious; /* +0x1c */
    CResObj* m_poOwner; /* +0x20 */
    unsigned int m_uiLockCount; /* +0x24 */
};

struct _tdstAllRetObjectSound {
    int (*X)(int); /* +0x0 */
    int (*Y)(int); /* +0x4 */
    int (*Z)(int); /* +0x8 */
    int (*VX)(int); /* +0xc */
    int (*VY)(int); /* +0x10 */
    int (*VZ)(int); /* +0x14 */
    unsigned char (*REVERB)(int); /* +0x18 */
    void (*ExtraCoef)(int, _SND_tduRefEvt, int*, int*, int*); /* +0x1c */
    int (*Switch)(int, int); /* +0x20 */
    int (*MicroLink)(int, int); /* +0x24 */
    int (*pfnPosition)(int, int, _stVector*); /* +0x28 */
    int (*pfnVelocity)(int, int, _stVector*); /* +0x2c */
    int (*pfnMicroLink)(int, int, int); /* +0x30 */
    int (*pfnRollOff)(int, int, _RollOffParam*); /* +0x34 */
    int (*pfnInfo)(int, int, char*, int); /* +0x38 */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    TTypedVar* mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    _tdstAllRetObjectSound mstIActor; /* +0x88 */
    virtual ~CLinkTypeActor(); /* vtable pointer at +0xc4 (retail __vt__14CLinkTypeActor) */
    static void operator delete(void* pv) { usnd_free(pv); }
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct stree : streebase {
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CActorProgramContext {
    /* C++ base CProgramContext at +0x0. */
    /* C++ base CVarAccess at +0xc. */
    CResObjState m_oObjStates; /* +0x10 */
    CActorResObj* m_pActor; /* +0x38 */
    smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct CPitchActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct CActorResObj : CResObj {
    C3DParam m_o3DParams; /* +0xc */
    CPitchActorModifier m_oPitchModifier; /* +0x3c */
    CRolloffParam m_oRolloff; /* +0x60 */
    C2DParams m_o2DParams; /* +0x6c */
    unsigned char m_b3DParamsChanged; /* +0x7c */
    unsigned char m_b3DRes; /* +0x7d */
    sstring m_sName; /* +0x80 */
    unsigned char m_b2DParamsComputed; /* +0x84 */
    CVolumeActorModifier m_oVolModifier; /* +0x88 */
    CActorProgramContext m_oProgramContext; /* +0xac */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct TTypedVar : CVar {
    float m_oValue; /* +0x1c */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};












































CLinkTypeActor::~CLinkTypeActor()
{
}

CLinkActor CLinkActorPool::ms_oPool;

void CLinkActorPool::f_vSalvageActor(CLinkActor* poActor)
{
    poActor->m_poNext = ms_oPool.m_poNext;
    poActor->m_poPrevious = &ms_oPool;
    if (poActor->m_poNext != 0)
        poActor->m_poNext->m_poPrevious = poActor;
    ms_oPool.m_poNext = poActor;
}

CLinkActor* CLinkActorPool::fs_poGetAnActor(void)
{
    CLinkActor* poActor;

    poActor = ms_oPool.m_poNext;
    if (poActor)
        poActor->f_vIsolate();
    else
        poActor = new CLinkActor;
    return poActor;
}

unsigned char CLinkActor::mfn_bSynchroniseActorInstance(void)
{
    unsigned char b_Answer;
    CExtraEventActor* poEEActor;

    b_Answer = 0;
    for (poEEActor = m_oExtraActors.m_poNext; poEEActor != NULL; poEEActor = poEEActor->m_poNext)
        b_Answer = poEEActor->mfn_bApplyAllParams(false) || b_Answer;
    return b_Answer;
}

/* Scoped opt_lifetimes off: both loops share one poEEActor web, which gives
 * retail's s2 (actor) / s3 (bool temp) assignment in the -2 channel loop
 * (measured pragma sweep). */
#pragma push
#pragma opt_lifetimes off
unsigned char CLinkActor::mfn_bExecuteActorInstance(int s32_CmdId, int s32_ChannelId)
{
    unsigned char b_Answer;
    CExtraEventActor* poEEActor;

    b_Answer = 1;
    if (s32_ChannelId != -2)
    {
        poEEActor = m_oExtraActors.m_poNext;
        while (poEEActor != NULL)
        {
            if (poEEActor->ms32ACPChannelId == s32_ChannelId)
            {
                b_Answer = poEEActor->mpoActorObj->f_bExecCmd(s32_CmdId, NULL) && b_Answer;
            }
            poEEActor = poEEActor->m_poNext;
        }
    }
    else
    {
        for (poEEActor = m_oExtraActors.m_poNext; poEEActor != NULL; poEEActor = poEEActor->m_poNext)
        {
            if (!(b_Answer = poEEActor->mpoActorObj->f_bExecCmd(s32_CmdId, NULL) && b_Answer))
                break;
        }
    }
    return b_Answer;
}
#pragma pop

#pragma auto_inline on
CExtraEventActor* CLinkActor::mfn_poAddExtraEventActorInstance(int s32_ChannelId, const usnd::CEventResData* poResData)
{
    static int s32_InstanceId = 0;
    CExtraEventActor* poEventActor;

    poEventActor = mfn_poGetExtraEventActorInstance(s32_ChannelId, poResData);
    if (poEventActor)
        return poEventActor;

    poEventActor = CExtraEventActorPool::fs_poGetAnActor(ms32ACPObjectId);
    poEventActor->f_vInit(*mpoType, ms32ACPObjectId, s32_ChannelId, poResData);
    if (!poEventActor->mfn_bIsValid())
    {
        poEventActor->f_vDesInit();
        CExtraEventActorPool::f_vSalvageActor(poEventActor);
        return NULL;
    }
    poEventActor->f_vInsertAfter(&m_oExtraActors);
    s32_InstanceId++;
    return poEventActor;
}
#pragma auto_inline reset

#pragma auto_inline on
CExtraEventActor* CLinkActor::mfn_poGetExtraEventActorInstance(int s32_ChannelId, const usnd::CEventResData* po_ResData)
{
    CExtraEventActor* poEEActor;
    tdeEventType e_Type;

    e_Type = po_ResData ? *(const tdeEventType*)((const char*)po_ResData + 0x28) : (tdeEventType)0;
    for (poEEActor = m_oExtraActors.m_poNext; poEEActor != NULL; poEEActor = poEEActor->m_poNext)
    {
        if ((poEEActor->meExtraCoeff == e_Type) && (poEEActor->ms32ACPChannelId == s32_ChannelId))
            return poEEActor;
    }
    return NULL;
}
#pragma auto_inline reset

void CLinkActor::f_vInsertAfter(CLinkActor* pParam)
{
    m_poNext = pParam->m_poNext;
    m_poPrevious = pParam;
    if (m_poNext != 0)
        m_poNext->m_poPrevious = this;
    pParam->m_poNext = this;
}

#pragma auto_inline on
void CLinkActor::f_vIsolate(void)
{
    if (m_poPrevious != 0)
        m_poPrevious->m_poNext = m_poNext;
    if (m_poNext != 0)
        m_poNext->m_poPrevious = m_poPrevious;
    m_poNext = 0;
    m_poPrevious = 0;
}
#pragma auto_inline reset

#pragma auto_inline on
void CLinkActor::f_vDesInit(void)
{
    CExtraEventActor* poEEActor;

    while ((poEEActor = m_oExtraActors.m_poNext) != NULL)
    {
        poEEActor->f_vIsolate();
        poEEActor->f_vDesInit();
        CExtraEventActorPool::f_vSalvageActor(poEEActor);
    }
    mpoType = NULL;
}
#pragma auto_inline reset

void CLinkActor::f_vInit(CLinkTypeActor& ro_Type, int s32_ObjectId)
{
    mpoType = &ro_Type;
    ms32ACPObjectId = s32_ObjectId;
    mfn_poAddExtraEventActorInstance(-1, NULL);
}

CLinkActor::~CLinkActor(void)
{
    f_vDesInit();
}
