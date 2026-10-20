/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct sallocator sallocator;
struct sallocator {
};

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct PostponedPlay PostponedPlay;
typedef struct CSoundSemaphoreCont CSoundSemaphoreCont;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct _stVector _stVector;
typedef struct less less;
typedef struct stree stree;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
typedef struct sstring sstring;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CResObjState CResObjState;
typedef struct smap smap;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct CCmdInterface CCmdInterface;
typedef struct TTypedVar TTypedVar;
typedef struct iterator_base iterator_base;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct sTreeLink sTreeLink;
typedef struct _RollOffParam _RollOffParam;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct sset sset;
typedef struct CActorResData CActorResData;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CResType CResType;
typedef struct CSndVarType CSndVarType;
typedef struct CResObj CResObj;
typedef struct CResData CResData;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct CStringIsLess CStringIsLess;
typedef struct streebase streebase;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CRefIdObj CRefIdObj;
typedef struct CUUID CUUID;
typedef struct CIdObj CIdObj;
typedef struct CProgramContext CProgramContext;
typedef struct iterator iterator;
typedef struct CVar CVar;
typedef struct CActorModifiers CActorModifiers;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

typedef enum tdeEventType {
    EPLAYEVENT = 0,
    ESTOPEVENT = 1,
    EPITCHEVENT = 2,
    EVOLUMEEVENT = 3,
    EEXTRAEVENT = 4,
    ESTOPALLEVENT = 5,
    ESTOPANDGO = 6,
} tdeEventType;

typedef enum tdeType {
    EBASE = 0,
    EARRAY = 1,
    ESTRUCT = 2,
    EOBJECT = 3,
    ERESID = 4,
    EENUM = 5,
} tdeType;

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
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

struct sstring {
    int m_pcData; /* +0x0 */
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

struct smap {
    stree _Tr; /* +0x0 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0: vtable pointer; virtual order from
     * retail __vt__Q24usnd15CActorModifiers. */
    virtual void fv_vVarChanged(CVar& ro_Var);
    virtual void fv_vVarDestroyed(CVar& ro_Var);
    virtual void fv_vVarAccessed(CVar& ro_Var);
    virtual void fv_vAddModifier(CVar& ro_Var, float f_Value);
    virtual void fv_vRemoveModifier(CVar& ro_Var);
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CPitchActorModifier : CActorModifiers {
};

struct CVolumeActorModifier : CActorModifiers {
};

struct CActorProgramContext {
    /* C++ base CProgramContext at +0x0; virtual order from retail
     * __vt__Q24usnd20CActorProgramContext. */
    virtual void fv_vAddRunningObj(CResObj& ro_Obj, void* pv_UserData, int s32_Data, bool b_Flag, CResObj* po_Parent);
    virtual bool fv_bAddRunningObj(CResObj& ro_Obj, CResObj& ro_Parent, bool b_Flag);
    virtual void fv_vRemoveRunningObj(CResObj& ro_Obj);
    virtual unsigned int fv_uiGetAllRunningObjs(CResObj** ppo_Objs, unsigned int ui_Max);
    virtual void fv_vCallHandler(const char* sz_Name, void* pv_Param);
    virtual void fv_vAddRunningObjRef(CResObj& ro_Obj);
    virtual void fv_vReleaseRunningObjRef(CResObj& ro_Obj);
    virtual bool fv_bAreThereRunningObjs(void);
    unsigned int a2_ulProgramContextData[2]; /* +0x4 */
    /* C++ base CVarAccess at +0xc. */
    unsigned int ulVarAccessVptr; /* +0xc */
    CResObjState m_oObjStates; /* +0x10 */
    CActorResObj* m_pActor; /* +0x38 */
    smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
};

struct CResObj {
    /* C++ base CRTTIClass at +0x0: vtable pointer (retail
     * __vt__Q24usnd7CResObj starts with the destructor). */
    virtual ~CResObj();
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct CActorResObj : CResObj {
    /* Virtual order from retail __vt__Q24usnd12CActorResObj: the destructor
     * at +0x8 and fv_vExecCmd at +0xc. */
    virtual ~CActorResObj();
    virtual void fv_vExecCmd(unsigned int ui_Cmd, void* pv_Param);
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

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct TTypedVar : CVar {
    float m_oValue; /* +0x1c */
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

/* The usnd containers are a renamed Dinkumware red-black tree.  The members
 * that the retail object calls out of line (_Lmost, the iterator_base
 * constructor and _Inc) stay out of line here so that the calls keep the
 * retail's jal/relocation shape. */
namespace usnd {
struct streebase {
    struct sTreeLink {
        sTreeLink* m_poLeft; /* +0x0 */
        sTreeLink* m_poParent; /* +0x4 */
        sTreeLink* m_poRight; /* +0x8 */
        int m_eColor; /* +0xc */
    };
    struct iterator_base {
        iterator_base(void) {}
        iterator_base(sTreeLink* po_Link);
        void _Inc(void);
        sTreeLink* _Ptr; /* +0x0 */
    };
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

template <class T> struct less {
};

template <class T> struct sallocator {
};

template <class T1, class T2> struct spair {
    T1 first;
    T2 second;
};

template <class K, class V, class KFN, class CMP, class ALLOC>
struct stree : streebase {
    struct sTreeNode : sTreeLink {
        V m_oValue; /* +0x10 */
    };
    struct iterator : iterator_base {
        iterator(void) {}
        iterator(sTreeLink* po_Link) : iterator_base(po_Link) {}
        V& operator*(void) const { return ((sTreeNode*)_Ptr)->m_oValue; }
        iterator& operator++(void) { _Inc(); return *this; }
        bool operator==(const iterator& ro_It) const { return _Ptr == ro_It._Ptr; }
        bool operator!=(const iterator& ro_It) const { return !(*this == ro_It); }
    };
    sTreeLink*& _Lmost(void);
    iterator begin(void) { return iterator(_Lmost()); }
    iterator end(void) { return iterator(_HeadLink); }
    ALLOC allocator; /* +0xc */
    CMP key_compare; /* +0xd */
};

template <class K, class T, class CMP, class ALLOC>
struct smap {
    struct _Kfn {
    };
    typedef stree<K, spair<const K, T>, _Kfn, CMP, ALLOC> _Imp;
    typedef typename _Imp::iterator iterator;
    iterator begin(void) { return _Tr.begin(); }
    iterator end(void) { return _Tr.end(); }
    _Imp _Tr; /* +0x0 */
};
}

struct CLinkTypeActorCont : usnd::smap<int, CLinkTypeActor*, usnd::less<int>, usnd::sallocator<CLinkTypeActor*> > {
    /* Recovered singleton and command signatures. */
    static CLinkTypeActorCont* mfn_roGetInstance(void);
    unsigned char mfn_bExecuteActorType(int s32_CmdId, int s32_TypeId);
    CLinkTypeActor* mfn_poGetActorTypeFromId(int s32_TypeId);
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
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

struct CExtraEventActor {
    /* Static channel counter shared with the actor scanner. */
    static int ss32CurrentRefreshChannel;
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
};

int CExtraEventActor::ss32CurrentRefreshChannel;

struct PostponedPlay {
    static void fs_vEmpty(void);
};

struct CSoundSemaphoreCont {
    static CSoundSemaphoreCont* mfn_roGetInstance(void);
    void mfn_vDelete(void);
};

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x8..0xb */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
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

struct CActorResData : CResData {
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
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

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct spair {
    int first; /* +0x0 */
    CLinkTypeActor* second; /* +0x4 */
};

struct sTreeNode : sTreeLink {
    spair m_oValue; /* +0x10 */
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct CLinkTypeActor {
    unsigned char mfn_bExecuteActorInTypeActorInstance(int s32_CmdId, int s32_ObjectId);
    CLinkActor m_oActors; /* +0x0 */
    TTypedVar* mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    _tdstAllRetObjectSound mstIActor; /* +0x88 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};














































int g_pauseCnt;

extern "C" void SND_fn_vSynchroSound(void);
extern "C" void SND_fn_vClearLastTheme(void);
extern "C" void usnd_free(void* pv_Ptr);

void SND_fn_vScanActor(void);

/* The retail object holds the deleting destructor of the callback object the
 * actor types own; the debug record for that address only carries the
 * streebase::_NilElmt static member name, so the extractor attributed it to
 * the wrong function here. */
struct CLinkCallbackResObj {
    CActorResObj* mroActorObj; /* +0x0 */
    CResObj* mroResObj; /* +0x4 */
    void (*mpfnProc)(int); /* +0x8 */
    int ms32Param; /* +0xc */
    ~CLinkCallbackResObj();
    /* The class releases its instances through the SND allocator. */
    static void operator delete(void* pv_Ptr) { usnd_free(pv_Ptr); }
};

CLinkCallbackResObj::~CLinkCallbackResObj()
{
    mroActorObj->m_oProgramContext.fv_vReleaseRunningObjRef(*mroResObj);
}

void SND_fn_vKillAllObjectSound(void)
{
    /* The statement grouping below follows the retail line table: the
     * pause test, its command and the counter update share one source
     * line, the two kill commands share the next one, and the loop body
     * ends on the line of the channel counter. */
    PostponedPlay::fs_vEmpty();

    SND_fn_vSynchroSound();

    if (g_pauseCnt == 0) CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(2, -2); g_pauseCnt++;


    CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(2, -2); CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(1, -2);

    CExtraEventActor::ss32CurrentRefreshChannel = 0;
    while (CExtraEventActor::ss32CurrentRefreshChannel < 5)
    {


        SND_fn_vSynchroSound();
        SND_fn_vSynchroSound();
        CExtraEventActor::ss32CurrentRefreshChannel++; }

    CSoundSemaphoreCont::mfn_roGetInstance()->mfn_vDelete();
    SND_fn_vScanActor();


    SND_fn_vClearLastTheme();

    g_pauseCnt = 0;
}

void SND_fn_vResumeSound(void)
{
    g_pauseCnt--;
    if (g_pauseCnt <= 0)
    {
        g_pauseCnt = 0;
        CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(3, -2);
    }
}

void SND_fn_vPauseSound(void)
{
    if (g_pauseCnt == 0)
        CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(2, -2);
    g_pauseCnt++;
}

void SND_fn_vResumeAllObjectTypeSound(int s32_TypeId)
{
    CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(3, s32_TypeId);
}

void SND_fn_vPauseAllObjectTypeSound(int s32_TypeId)
{
    CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(2, s32_TypeId);
}

void SND_fn_vKillAllObjectTypeSound(int s32_TypeId)
{
    CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(2, s32_TypeId);
    CLinkTypeActorCont::mfn_roGetInstance()->mfn_bExecuteActorType(1, s32_TypeId);
}

void SND_fn_vKillObjectSound2(int s32_ObjectId, int s32_TypeId)
{
    CLinkTypeActor* poType;
    poType = CLinkTypeActorCont::mfn_roGetInstance()->mfn_poGetActorTypeFromId(s32_TypeId);
    if (poType)
        poType->mfn_bExecuteActorInTypeActorInstance(1, s32_ObjectId);
}

void SND_fn_vScanActor(void)
{
    CLinkActor* poActor;
    CExtraEventActor* poEEActor;
    CLinkTypeActorCont* ro_TypeActorCont;
    CLinkTypeActorCont::iterator it_Type;

    ro_TypeActorCont = CLinkTypeActorCont::mfn_roGetInstance();
    for (it_Type = ro_TypeActorCont->begin(); it_Type != ro_TypeActorCont->end(); ++it_Type)
    {
        poActor = (*it_Type).second->m_oActors.m_poNext;
        while (poActor)
        {
            poEEActor = poActor->m_oExtraActors.m_poNext;
            while (poEEActor)
            {
                poEEActor->mpoActorObj->fv_vExecCmd(0x44D, NULL);
                poEEActor = poEEActor->m_poNext;
            }
            poActor = poActor->m_poNext;
        }
    }
}
