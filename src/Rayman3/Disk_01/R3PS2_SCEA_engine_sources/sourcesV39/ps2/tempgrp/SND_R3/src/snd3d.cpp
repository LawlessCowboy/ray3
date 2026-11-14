/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
extern "C" int strcmp(const char*, const char*);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CLinkCallbackResObj CLinkCallbackResObj;
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct less less;
typedef struct stree stree;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct V3Ds V3Ds;
typedef struct smap smap;
typedef struct CProgramHdr CProgramHdr;
typedef struct CResType CResType;
typedef struct sTreeLink sTreeLink;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
typedef struct sstring sstring;
typedef struct CResObjState CResObjState;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct CResObj CResObj;
typedef struct CLookupElement CLookupElement;
namespace usnd { struct CResData; }
typedef usnd::CResData CResData;
typedef struct sset sset;
typedef struct CActorResData CActorResData;
typedef struct CSoundSemaphore CSoundSemaphore;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
namespace usnd { template <class T> struct TTypedVar; }
typedef usnd::TTypedVar<int> TTypedVar;
namespace usnd { struct CEventResData; }
namespace usnd { struct CUUID; }
typedef usnd::CEventResData CEventResData;
typedef struct streebase streebase;
typedef struct CLinkCallbackResObjCont CLinkCallbackResObjCont;
typedef struct _stVector _stVector;
namespace usnd { struct CVar; }
typedef usnd::CVar CVar;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CIdObj CIdObj;
typedef struct CSndVarType CSndVarType;

/* The original STL allocator is only present as an empty base/member in the
 * recovered declarations used by this translation unit.  Keep it opaque
 * until its complete library layout is recovered. */
struct sallocator {};

/* The recovered out-of-line Jingle helpers. */
struct Jingle {
    static void fs_vAddJingle(int, int, int, int);
    static void fs_vSynchronise(void);
};

namespace usnd {
struct CMicroManager {
    static CMicroManager& fs_roGetInst(void);
    static void fs_vSetPanOn(bool);
};
struct CPS2Box {
    static void fs_vSetMono(bool);
};
}

extern "C" void usnd_vLeaveCritSect(unsigned int);
extern "C" unsigned int usnd_uiCreateCritSect(void);
extern "C" unsigned int usnd_uiTryToEnterCritSect(unsigned int);
extern "C" void usnd_vEnterCritSect(unsigned int);

struct CSoundSemaphoreCont {
    /* The singleton call has no incoming this argument in the target. */
    static CSoundSemaphoreCont* mfn_roGetInstance(void);
    unsigned char mfn_bRemoveSoundSemaphore(int);
    unsigned char mfn_bSynchroSoundSemaphore(void);
    CSoundSemaphore* mfn_poAddSoundSemaphore(int, int);
    CSoundSemaphore* mfn_poFindSoundSemaphore(int);
};

typedef enum tdeEventType {
    EPLAYEVENT = 0,
    ESTOPEVENT = 1,
    EPITCHEVENT = 2,
    EVOLUMEEVENT = 3,
    EEXTRAEVENT = 4,
    ESTOPALLEVENT = 5,
    ESTOPANDGO = 6,
} tdeEventType;

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
    int fn_bIsSoundPlaying(int);
    int fn_bIsSoundPlaying(usnd::CResData*);
    unsigned char mfn_bExecute(int, const usnd::CUUID&);
    static int ss32CurrentRefreshChannel;
};

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x8..0xb */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
    CExtraEventActor* mfn_poGetExtraEventActorInstance(int, const usnd::CEventResData*);
    CExtraEventActor* mfn_poAddExtraEventActorInstance(int, const usnd::CEventResData*);
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct smap {
    stree _Tr; /* +0x0 */
};
/* The usnd STL containers used by CLinkTypeActorCont. */
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
    struct const_iterator {
        const_iterator(sTreeLink* po_Link) : _Ptr(po_Link) {}
        const V& operator*(void) const { return ((sTreeNode*)_Ptr)->m_oValue; }
        bool operator==(const const_iterator& ro_It) const { return _Ptr == ro_It._Ptr; }
        bool operator!=(const const_iterator& ro_It) const { return !(_Ptr == ro_It._Ptr); }
        sTreeNode* _Mynode(void) const { return (sTreeNode*)_Ptr; }
        sTreeLink* _Ptr; /* +0x0 */
    };
    static const K& _Key(sTreeNode* po_Node) { return po_Node->m_oValue.first; }
    sTreeLink* _Lbound(const K& ro_Key) const;
    unsigned int size(void) const { return _Size; }
    const_iterator end(void) const { return const_iterator(_HeadLink); }
    const_iterator find(const K& ro_Key) const
    {
        const_iterator oIt = _Lbound(ro_Key);
        return (oIt == end() || key_compare(ro_Key, _Key(oIt._Mynode()))) ? end() : oIt;
    }
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
    typedef typename _Imp::const_iterator const_iterator;
    iterator begin(void) { return _Tr.begin(); }
    iterator end(void) { return _Tr.end(); }
    const_iterator end(void) const { return _Tr.end(); }
    const_iterator find(const K& ro_Key) const { return _Tr.find(ro_Key); }
    unsigned int size(void) const { return _Tr.size(); }
    _Imp _Tr; /* +0x0 */
};

struct CStringIsLess {
    bool operator()(const char* const& rpc_Left, const char* const& rpc_Right) const { return strcmp(rpc_Left, rpc_Right) < 0; }
};

template <class T> struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
    operator T*(void) const;
};
}
typedef usnd::CIdObjPtr<CResData> CIdObjPtr;

struct CProgramHdr {
    typedef usnd::smap<const char*, unsigned int, usnd::CStringIsLess, usnd::sallocator<unsigned int> > tdHandlerMap;
    unsigned int m_uiConstHdrSize; /* +0x0 */
    unsigned int m_uiSectionNb; /* +0x4 */
    unsigned int m_uiMainStackSize; /* +0x8 */
    unsigned int m_uiInitStackSize; /* +0xc */
    unsigned int m_uiDestrStackSize; /* +0x10 */
    unsigned int m_uiHdlrNb; /* +0x14 */
    unsigned int m_uiLocalFnNb; /* +0x18 */
    unsigned int m_uiProgVarSize; /* +0x1c */
    unsigned int m_uiConstVarPos; /* +0x20 */
    unsigned int m_uiConstVarSize; /* +0x24 */
    unsigned int m_uiDestrCodePos; /* +0x28 */
    unsigned int m_uiDestrCodeSize; /* +0x2c */
    unsigned int m_uiInitCodePos; /* +0x30 */
    unsigned int m_uiInitCodeSize; /* +0x34 */
    unsigned int m_uiMainPos; /* +0x38 */
    unsigned int m_uiMainSize; /* +0x3c */
    unsigned int m_uiFnDescrPos; /* +0x40 */
    unsigned int m_uiFnDescrSize; /* +0x44 */
    unsigned int m_uiPrivCodePos; /* +0x48 */
    unsigned int m_uiPrivCodeSize; /* +0x4c */
    unsigned int m_uiVarDescrPos; /* +0x50 */
    unsigned int m_uiVarDescrSize; /* +0x54 */
    unsigned int m_uiPreDestrCodePos; /* +0x58 */
    unsigned int m_uiPreDestrCodeSize; /* +0x5c */
    unsigned int m_uiObjectVarNb; /* +0x60 */
    tdHandlerMap m_oHandlerIds; /* +0x64 */
    int m_aiStdHandlerIds[33]; /* +0x74 */
    unsigned int f_uiGetNbHandlers(void) const { return m_oHandlerIds.size(); }
    unsigned int f_uiGetHandlerId(const char* pcName) const
    {
        tdHandlerMap::const_iterator it = m_oHandlerIds.find(pcName);
        if (it == m_oHandlerIds.end())
            return f_uiGetNbHandlers();
        return (*it).second;
    }
};

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
    unsigned char _extractor_padding_00[0x24];
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
    unsigned char _extractor_padding_00[0x24];
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

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CActorProgramContext {
    /* C++ base CProgramContext at +0x0. */
    /* C++ base CVarAccess at +0xc. */
    /* Virtual order from the retail __vt__Q24usnd20CActorProgramContext. */
    virtual void fv_vAddRunningObj(CResObj& ro_Obj, void* pv_UserData, int s32_Data, bool b_Flag, CResObj* po_Parent);
    virtual bool fv_bAddRunningObj(CResObj& ro_Obj, CResObj& ro_Parent, bool b_Flag);
    virtual void fv_vRemoveRunningObj(CResObj& ro_Obj);
    virtual unsigned int fv_uiGetAllRunningObjs(CResObj** ppo_Objs, unsigned int ui_Max);
    virtual void fv_vCallHandler(const char* sz_Name, void* pv_Param);
    virtual void fv_vAddRunningObjRef(CResObj& ro_Obj);
    virtual void fv_vReleaseRunningObjRef(CResObj& ro_Obj);
    virtual bool fv_bAreThereRunningObjs(void);
    virtual unsigned int fv_uiGetRunningObjsWithUserData(int* pvi_UserData, CResObj** ppo_Objs, unsigned int ui_Max, unsigned int ui_Extra);
    unsigned char _extractor_padding_00[0xc]; /* implicitly added by extractor; +0x4..0xf */
    CResObjState m_oObjStates; /* +0x10 */
    CActorResObj* m_pActor; /* +0x38 */
    smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
};

/* The postponed-play helper the theme check calls. */
struct PostponedPlay {
    static unsigned char fs_bIsSoundPlaying(usnd::CResData*, CExtraEventActor*);
    static void fs_vSynchro(void);
    static unsigned char fs_bPlay(const usnd::CEventResData&, int, void (*)(int), CExtraEventActor*);
};

struct CActorResObj {
    /* C++ base CResObj at +0x0. */
    unsigned char _extractor_padding_00[0xc]; /* implicitly added by extractor; +0x0..0xb */
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

namespace usnd {
struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CRTTIClass {
    virtual ~CRTTIClass();
    virtual void* fv_roGetClassInfo(void) const;
    virtual void fv_vReadFromFlow(void* roFlow);
    virtual void fv_vWriteToFlow(void* roFlow);
};

struct CIdObj : CRTTIClass {
    CUUID m_oId; /* +0x4 */
    virtual void fv_vSetId(const CUUID& roId);
};

struct CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
    virtual void fv_vGetReferencedObjects(CRefIdObj** ppoObjs, unsigned int& ruiNbObjs, CUUID* poIds, unsigned int& ruiNbIds);
};
}

struct usnd::CResData : usnd::CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
    virtual CResType& fv_roGetResType(void) const;
};
struct sset {
    stree _Tr; /* +0x0 */
};

struct CSoundSemaphore : smap {
    unsigned int mu32ChannelId; /* +0x10 */
    unsigned int mu32ChannelSize; /* +0x14 */
    int mfn_bAddSoundRequest(int, int, int);
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
    int mfn_bSoundPlaying(void);
    CLinkActor* mfn_poGetActorFromIdInTypeActorInstance(int);
    CLinkActor* mfn_poAddActorInTypeActorInstance(int, int);
};

struct usnd::CEventResData : usnd::CResData {
    float m_fCoeffA; /* +0x18 */
    float m_fCoeffB; /* +0x1c */
    float m_fCoeffC; /* +0x20 */
    float m_fCoeffD; /* +0x24 */
    tdeEventType m_eEventType; /* +0x28 */
    ::CIdObjPtr m_pTargetRes; /* +0x2c */
};

/* Not in the recovered debug: the random and program resource layouts the
 * theme test reads in the retail code. */
namespace usnd {
struct CRandomElement {
    float m_fProbability; /* +0x0 */
    CIdObjPtr<CResData> m_oResData; /* +0x4 */
};

struct CRandomResData : CResData {
    unsigned int m_uiNbElements; /* +0x18 */
    unsigned int m_auiUnknown[2]; /* +0x1c */
    CRandomElement* m_poElements; /* +0x24 */
};

struct CProgramResData : CResData {
    unsigned int m_auiUnknown[2]; /* +0x18 */
    CProgramHdr m_oHdr; /* +0x20 */
    unsigned int f_uiGetHandlerId(const char* pcName) const { return m_oHdr.f_uiGetHandlerId(pcName); }
    unsigned int f_uiGetNbHandlers(void) const { return m_oHdr.m_oHandlerIds.size(); }
};

struct CRandomResType {
    static CResType& fs_roGetInst(void);
};

struct CProgramResType {
    static CResType& fs_roGetInst(void);
};
}

/* The usnd singly linked list behind CLinkCallbackResObjCont. */
namespace usnd {
template <class T, class ALLOC> struct slist {
    struct _Node {
        _Node* _pNext; /* +0x0 */
        _Node* _pPrev; /* +0x4 */
        T _Value; /* +0x8 */
    };
    slist(const ALLOC& ro_Alloc = ALLOC()) : m_oAllocator(ro_Alloc), _Head(_Buynode(0, 0)), _Size(0) {}
    _Node* _Buynode(_Node* _Narg, _Node* _Parg);
    ALLOC m_oAllocator; /* +0x0 */
    _Node* _Head; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};
}

struct CLinkCallbackResObjCont : usnd::slist<CLinkCallbackResObj*, usnd::sallocator<CLinkCallbackResObj*> > {
    ~CLinkCallbackResObjCont();
    static CLinkCallbackResObjCont& mfn_roGetInstance(void)
    {
        static CLinkCallbackResObjCont o_Singleton;
        return o_Singleton;
    }
    unsigned char mfn_bSynchroCallbackInstance(void);
};

struct CLinkMicroCont {
    static CLinkMicroCont* mfn_roGetInstance(void);
    unsigned char mfn_bSynchroMicroInstance(void);
};

namespace usnd {
struct CL2PS2CoreMgr {
    static void fs_vUpdate(void);
};
}

/* The postponed-play and jingle helpers the synchro pass drives. */
extern "C" void GLI_vStartSoundCounter(int);
extern "C" void GLI_vEndSoundCounter(int);
extern "C" int GAM_fn_iIsGamePaused(void);
extern "C" void fn_vValidateAllOption(void);
extern "C" void SND_fn_vSetVolumeLineSound(int, int);

struct CLinkTypeActorCont : usnd::smap<int, CLinkTypeActor*, usnd::less<int>, usnd::sallocator<CLinkTypeActor*> > {
    static CLinkTypeActorCont* mfn_roGetInstance(void);
    CLinkTypeActor* mfn_poGetActorTypeFromId(int);
    void mfn_vSynchroActorInstance(void);
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
};

union _SND_tduRefEvt {
    float fTheme; /* +0x0: MWCC copies a union through its first member */
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

/* usnd::CVar is polymorphic (its vtable pointer occupies +0x0); the value
 * member of usnd::TTypedVar<T> therefore starts at +0x1c. */
struct usnd::CVar {
    virtual ~CVar(void);
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
    void f_vValueChanged(void);
};

struct _SND_tdstBlockEvent {
    unsigned char _extractor_padding_00[0x14]; /* +0x0..0x13 */
    CLinkActor* m_poLinkActor; /* +0x14 */
    unsigned char _extractor_padding_01[0x14]; /* +0x18..0x2b */
    CIdObjPtr m_oResId; /* +0x2c */
};

_SND_tduRefEvt g_oLastTheme;
_SND_tduRefEvt g_oLastSavedTheme;
int g_lSoundObjectTypeMusic;
int g_lSoundVolumeLineVoices;
int g_lSoundVolumeLineSound;
int g_lSoundVolumeLineMusic;
int g_lSoundVolumeLineAmbiance;
int g_lSoundVolumeLineMenu;
unsigned int gs_uiCritSect;
int g_bInStereo;
static int g_bUseNearestMicro;

char g_szMarker[2];

namespace usnd {
template <class T>
struct TTypedVar : CVar {
    T m_oValue; /* +0x1c */
    void f_vSetValue(T oValue);
};

template <> void TTypedVar<int>::f_vSetValue(int oValue) { m_oValue = oValue; f_vValueChanged(); }
}

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
extern "C" int SND_fn_bIsTypePlayingSound(int s32_TypeId);
extern "C" _SND_tdstBlockEvent* SND_fn_pstGetLastEventForObjectTypeSound(void);
extern "C" void SND_fn_vSetMusicFadeOut(void);
extern "C" int SND_fn_bGetStereoSound(void);
extern "C" void SND_fn_vSetPan(int b_pan);
extern "C" void SND_fn_vSetStereoSound(int b_Stereo);
extern "C" void SND_fn_vSetDopplerFactorSound(void);
extern "C" void SND_fn_vSynchroSound(void);
extern "C" void SND_fn_vResetLastMarker(void);
extern "C" int SND_fn_s32GetLastMarker(void);
extern "C" void SND_fn_vChangeVolumeSound(void);
extern "C" int SND_fn_bIsSoundPlaying(_SND_tduRefEvt u_RefEvt);
extern "C" int SND_fn_s32GetSoundHandleState(int s32_ObjectId, int s32_TypeId, int s32_HandleId);
extern "C" int SND_fn_s32SendRequestSound(int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int));
extern "C" int SND_fn_s32SendRequestJingle(int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int), int s32_VolumeLine);
extern "C" int SND_fn_s32SendRequestSemaphoreSound(int s32_SemaphoreId, int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int));
extern "C" int SND_fn_bRemoveSemaphoreSound(int s32_SemaphoreId);
extern "C" int SND_fn_s32AddSemaphoreSound(int s32_SemaphoreId, int s32_SemaphoreSize);
extern "C" int SND_fn_hGetCurrentSoundHandle(void);
extern "C" void SND_fn_vClearLastTheme(void);
extern "C" int SND_fn_bGetLastTheme(_SND_tduRefEvt* p_RefEvt);
extern "C" void SND_fn_vSaveLastTheme(void);

void fn_vUnlockSound__Fv(void)
{
    return usnd_vLeaveCritSect(gs_uiCritSect);
}

extern "C" unsigned int usnd_uiCreateCritSect(void);
extern "C" unsigned int usnd_uiTryToEnterCritSect(unsigned int);
extern "C" void usnd_vEnterCritSect(unsigned int);

unsigned char fn_bLockSound__Fb(unsigned char bIgnoreIfCantAccess)
{
    unsigned char bRet;

    bRet = 1;

    if (!gs_uiCritSect)
        gs_uiCritSect = usnd_uiCreateCritSect();

    if (bIgnoreIfCantAccess)
    {
        bRet = usnd_uiTryToEnterCritSect(gs_uiCritSect) == 1;
    }
    else
    {
        usnd_vEnterCritSect(gs_uiCritSect);
    }

    return bRet;
}

extern "C" void SND_fn_vSaveLastTheme(void)
{
    CExtraEventActor* po_EventActor;
    _SND_tdstBlockEvent* pstTheme;
    unsigned char flag;
    CResData* po_ResData;
    CResObjParams* pParams;
    CLinkActor* po_LinkActor;
    CLinkTypeActor* po_TypeActor;
    unsigned int uiResult;

    g_oLastSavedTheme.Id = 0;
    pstTheme = g_oLastTheme.pstPtr;
    if (pstTheme != NULL)
    {
        po_TypeActor = CLinkTypeActorCont::mfn_roGetInstance()->mfn_poGetActorTypeFromId(g_lSoundObjectTypeMusic);
        if (po_TypeActor != NULL)
        {
            po_LinkActor = po_TypeActor->mfn_poGetActorFromIdInTypeActorInstance(-1);
            if (po_LinkActor != NULL)
            {
                po_EventActor = po_LinkActor->mfn_poGetExtraEventActorInstance(-1, NULL);
                if (po_EventActor != NULL)
                {
                    flag = 0;
                    po_ResData = pstTheme->m_oResId;
                    pParams = po_EventActor->m_oResObjParams.m_poNext;
                    while (pParams != NULL && pParams->m_poResData != po_ResData)
                    {
                        pParams = pParams->m_poNext;
                    }
                    if (pParams != NULL)
                    {
                        uiResult = po_EventActor->mpoActorObj->m_oProgramContext.fv_uiGetRunningObjsWithUserData((int*)pParams, (CResObj**)-1, 0, 0);
                        flag = (uiResult != 0);
                        if (!flag)
                        {
                            flag = PostponedPlay::fs_bIsSoundPlaying(po_ResData, po_EventActor);
                        }
                    }
                    if (flag)
                    {
                        g_oLastSavedTheme = g_oLastTheme;
                    }
                    else
                    {
                        g_oLastTheme.Id = 0;
                    }
                }
            }
        }
    }
}

int SND_fn_bGetLastTheme(_SND_tduRefEvt* p_RefEvt)
{
    int bRet;
    bRet = 0;
    if (g_oLastSavedTheme.Id && p_RefEvt) {
        *p_RefEvt = g_oLastSavedTheme;
        g_oLastTheme.Id = 0; g_oLastSavedTheme.Id = 0;
        bRet = 1;
    }
    return bRet;
}

void SND_fn_vClearLastTheme(void)
{
    g_oLastTheme.Id = 0;
    g_oLastSavedTheme.Id = 0;
}

int SND_fn_hGetCurrentSoundHandle(void)
{
    static int s32_SoundHandle = -2;
    return s32_SoundHandle;
}

int SND_fn_s32AddSemaphoreSound(int s32_SemaphoreId, int s32_SemaphoreSize)
{
    int s32_Answer;
    s32_Answer = -3;
    if (CSoundSemaphoreCont::mfn_roGetInstance()->mfn_poAddSoundSemaphore(s32_SemaphoreId, s32_SemaphoreSize))
        s32_Answer = s32_SemaphoreId;
    return s32_Answer;
}

int SND_fn_bRemoveSemaphoreSound(int s32_SemaphoreId)
{
    int b_Answer;
    b_Answer = 0;
    if (CSoundSemaphoreCont::mfn_roGetInstance()->mfn_bRemoveSoundSemaphore(s32_SemaphoreId))
        b_Answer = 1;
    return b_Answer;
}

extern "C" int SND_fn_s32SendRequestSemaphoreSound(int s32_SemaphoreId, int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int))
{
    int s32_Answer;
    CSoundSemaphore* po_Channel;
    int bRes;

    s32_Answer = -2;
    if (!gs_uiCritSect) gs_uiCritSect = usnd_uiCreateCritSect(); bRes = usnd_uiTryToEnterCritSect(gs_uiCritSect) == 1; if (bRes)
    {
        s32_Answer = -2; po_Channel = CSoundSemaphoreCont::mfn_roGetInstance()->mfn_poFindSoundSemaphore(s32_SemaphoreId);
        if (po_Channel != NULL && (po_Channel == NULL || po_Channel->mu32ChannelSize == po_Channel->_Tr._Size))
        {
        }
        else
        {
            s32_Answer = SND_fn_s32SendRequestSound(s32_ObjectId, s32_ChannelId, s32_TypeId, u_RefEvt, s32_Prio, pfn_Proc);
            if (po_Channel != NULL && s32_Answer != -2)
                po_Channel->mfn_bAddSoundRequest(s32_ObjectId, s32_TypeId, s32_Answer);
        }
        usnd_vLeaveCritSect(gs_uiCritSect);
    }
    return s32_Answer;
}

extern "C" int SND_fn_s32SendRequestJingle(int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int), int s32_VolumeLine)
{
    int s32_Answer;
    int bRes;

    s32_Answer = -2;
    if (!gs_uiCritSect) gs_uiCritSect = usnd_uiCreateCritSect(); bRes = usnd_uiTryToEnterCritSect(gs_uiCritSect) == 1; if (bRes)
    {
        s32_Answer = SND_fn_s32SendRequestSound(s32_ObjectId, s32_ChannelId, s32_TypeId, u_RefEvt, s32_Prio, pfn_Proc);
        if (s32_Answer != -2)
            Jingle::fs_vAddJingle(s32_ObjectId, s32_TypeId, s32_Answer, s32_VolumeLine);
        usnd_vLeaveCritSect(gs_uiCritSect);
    }
    return s32_Answer;
}

extern "C" void SND_fn_vKillAllObjectTypeSound(int s32_TypeId);

/* A theme is a program event whose program has an OnIsTheme handler. */
inline void SND_fn_vCheckTheme(_SND_tduRefEvt u_RefEvt)
{
    CEventResData* po_EventResData;
    CResData* po_ResData;
    CProgramHdr* po_ProgHdr;

    po_EventResData = (CEventResData*)u_RefEvt.pstPtr;
    if (po_EventResData == (CEventResData*)-1 || po_EventResData == NULL || po_EventResData->m_eEventType != EPLAYEVENT)
        return;
    po_ResData = po_EventResData->m_pTargetRes;
    if (&po_ResData->fv_roGetResType() == &usnd::CRandomResType::fs_roGetInst() && ((usnd::CRandomResData*)po_ResData)->m_uiNbElements > 1)
        po_ResData = ((usnd::CRandomResData*)po_ResData)->m_poElements[0].m_oResData;
    if (&po_ResData->fv_roGetResType() != &usnd::CProgramResType::fs_roGetInst())
        return;
    po_ProgHdr = &((usnd::CProgramResData*)po_ResData)->m_oHdr;
    if (po_ProgHdr->f_uiGetHandlerId("OnIsTheme") != po_ProgHdr->f_uiGetNbHandlers())
        g_oLastTheme = u_RefEvt;
}

extern "C" int SND_fn_s32SendRequestSound(int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int))
{
    int bRes;
    int s32_Answer;
    CEventResData* ro_EventResData;
    CSoundSemaphore* po_Channel;
    int s32_SemId;
    CResData* po_ResData;
    CLinkActor* po_LinkActor;
    CLinkTypeActor* po_TypeActor;
    CExtraEventActor* po_EventActor;
    s32_Answer = -2;
    if (!gs_uiCritSect) gs_uiCritSect = usnd_uiCreateCritSect(); bRes = usnd_uiTryToEnterCritSect(gs_uiCritSect) == 1; if (bRes)
    {
        GLI_vStartSoundCounter(0);

        ro_EventResData = (CEventResData*)u_RefEvt.pstPtr;
        if (ro_EventResData != (CEventResData*)-1 && ro_EventResData != NULL)
        {
            if (s32_TypeId == g_lSoundObjectTypeMusic)
            {
                SND_fn_vCheckTheme(u_RefEvt);
            }

            switch (ro_EventResData->m_eEventType)
            {
            case EPLAYEVENT:
            case EPITCHEVENT:
            case EVOLUMEEVENT:
            case EEXTRAEVENT:
            case ESTOPANDGO:
                po_Channel = NULL;
                if (ro_EventResData->m_fCoeffB != 0.0f)
                {
                    s32_SemId = (int)ro_EventResData->m_fCoeffB;
                    if (CSoundSemaphoreCont::mfn_roGetInstance()->mfn_poAddSoundSemaphore(s32_SemId, 1))
                    {
                        po_Channel = CSoundSemaphoreCont::mfn_roGetInstance()->mfn_poFindSoundSemaphore(s32_SemId);
                    }
                }
                if (po_Channel != NULL && (po_Channel == NULL || po_Channel->mu32ChannelSize == po_Channel->_Tr._Size))
                {
                }
                else
                {
                    po_TypeActor = CLinkTypeActorCont::mfn_roGetInstance()->mfn_poGetActorTypeFromId(s32_TypeId);

                    po_LinkActor = po_TypeActor->mfn_poAddActorInTypeActorInstance(s32_ObjectId, s32_ChannelId);

                    po_EventActor = po_LinkActor->mfn_poAddExtraEventActorInstance(s32_ChannelId, ro_EventResData);
                    if (po_EventActor != NULL)
                    {
                        static int s32_Handle = 2;

                        if (PostponedPlay::fs_bPlay(*ro_EventResData, s32_Handle, pfn_Proc, po_EventActor))
                        {
                            s32_Answer = s32_Handle++;

                            if (po_Channel != NULL)
                                po_Channel->mfn_bAddSoundRequest(s32_ObjectId, s32_TypeId, s32_Answer);
                        }
                    }
                }
                break;

            case ESTOPEVENT:
                po_ResData = ro_EventResData->m_pTargetRes;

                po_TypeActor = CLinkTypeActorCont::mfn_roGetInstance()->mfn_poGetActorTypeFromId(s32_TypeId);

                po_LinkActor = po_TypeActor->mfn_poGetActorFromIdInTypeActorInstance(s32_ObjectId);
                if (po_LinkActor != NULL)
                {
                    po_EventActor = po_LinkActor->mfn_poGetExtraEventActorInstance(s32_ChannelId, NULL);
                    if (po_EventActor != NULL)
                    {
                        if (po_EventActor->mfn_bExecute(1, po_ResData->m_oId))
                        {
                            s32_Answer = 1;
                        }
                    }
                }
                break;

            case ESTOPALLEVENT:
                SND_fn_vKillAllObjectTypeSound(-2);
                s32_Answer = 1;
                break;
            }
        }
        GLI_vEndSoundCounter(0);
        {
            static int s32_SoundHandle = -2;
            s32_SoundHandle = s32_Answer;
        }
        usnd_vLeaveCritSect(gs_uiCritSect);
    }
    return s32_Answer;
}

extern "C" int SND_fn_s32GetSoundHandleState(int s32_ObjectId, int s32_TypeId, int s32_HandleId)
{
    int s32_Answer;
    CExtraEventActor* po_EventActor;
    CLinkActor* po_LinkActor;
    CLinkTypeActor* po_TypeActor;

    if (s32_HandleId == -2)
        return -1;
    po_TypeActor = CLinkTypeActorCont::mfn_roGetInstance()->mfn_poGetActorTypeFromId(s32_TypeId);
    if (po_TypeActor == NULL)
        return 3;
    po_LinkActor = po_TypeActor->mfn_poGetActorFromIdInTypeActorInstance(s32_ObjectId);
    if (po_LinkActor == NULL)
        return 3;
    s32_Answer = 2;
    po_EventActor = po_LinkActor->m_oExtraActors.m_poNext;
    while (po_EventActor != NULL && s32_Answer == 2)
    {
        if (po_EventActor->meExtraCoeff == 0)
        {
            if (po_EventActor->fn_bIsSoundPlaying(s32_HandleId))
                s32_Answer = 0;
        }
        po_EventActor = po_EventActor->m_poNext;
    }
    return s32_Answer;
}

extern "C" int SND_fn_bIsSoundPlaying(_SND_tduRefEvt u_RefEvt)
{
    CResData* po_ResData;
    CLinkActor* poActor;
    CExtraEventActor* poEEActor;
    CLinkTypeActorCont::iterator it_Type;

    if (u_RefEvt.pstPtr == (_SND_tdstBlockEvent*)-1 || u_RefEvt.pstPtr == NULL)
    {
        return 0;
    }
    po_ResData = u_RefEvt.pstPtr->m_oResId;
    if (po_ResData == NULL)
    {
        return 0;
    }
    CLinkTypeActorCont* poCont = CLinkTypeActorCont::mfn_roGetInstance();
    for (it_Type = poCont->begin(); it_Type != poCont->end(); ++it_Type)
    {
        poActor = (*it_Type).second->m_oActors.m_poNext;
        while (poActor)
        {
            poEEActor = poActor->m_oExtraActors.m_poNext;
            while (poEEActor)
            {
                if (poEEActor->fn_bIsSoundPlaying(po_ResData))
                    return 1;
                poEEActor = poEEActor->m_poNext;
            }
            poActor = poActor->m_poNext;
        }
    }
    return 0;
}

void SND_fn_vChangeVolumeSound(void)
{
    /* TODO: decompile from asm/... */
}

int SND_fn_s32GetLastMarker(void)
{
    return g_szMarker[0];
}

void SND_fn_vResetLastMarker(void)
{
    g_szMarker[0] = '*';
}

void SND_fn_vSynchroSound(void)
{
    int currentPause;

    GLI_vStartSoundCounter(0);
    static int inPause = 0;
    currentPause = GAM_fn_iIsGamePaused();
    if (currentPause)
    {
        inPause = currentPause;
        SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMusic, 0);
        SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineSound, 0);
        SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineVoices, 0);
        SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineAmbiance, 0);
        SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMenu, 0);
    }
    else if (inPause != currentPause)
    {
        inPause = currentPause;
        fn_vValidateAllOption();
    }
    if (!gs_uiCritSect) gs_uiCritSect = usnd_uiCreateCritSect(); if ((usnd_uiTryToEnterCritSect(gs_uiCritSect) == 1) == 1)
    {
        PostponedPlay::fs_vSynchro();
        CLinkCallbackResObjCont::mfn_roGetInstance().mfn_bSynchroCallbackInstance();
        CLinkMicroCont::mfn_roGetInstance()->mfn_bSynchroMicroInstance();
        CExtraEventActor::ss32CurrentRefreshChannel++;
        if (CExtraEventActor::ss32CurrentRefreshChannel >= 5)
            CExtraEventActor::ss32CurrentRefreshChannel = 0;
        CLinkTypeActorCont::mfn_roGetInstance()->mfn_vSynchroActorInstance();
        CSoundSemaphoreCont::mfn_roGetInstance()->mfn_bSynchroSoundSemaphore();
        Jingle::fs_vSynchronise();
        usnd::CL2PS2CoreMgr::fs_vUpdate();
        GLI_vEndSoundCounter(0);
        usnd_vLeaveCritSect(gs_uiCritSect);
    }
}

void SND_fn_vSetDopplerFactorSound(void)
{
    /* TODO: decompile from asm/... */
}

void SND_fn_vSetStereoSound(int b_Stereo)
{
    g_bInStereo = b_Stereo;
    return usnd::CPS2Box::fs_vSetMono(b_Stereo ^ 1);
}

void SND_fn_vSetPan(int b_pan)
{
    usnd::CMicroManager::fs_roGetInst(); usnd::CMicroManager::fs_vSetPanOn(b_pan == 1);
}

int SND_fn_bGetStereoSound(void)
{
    return g_bInStereo;
}

void SND_fn_vSetMusicFadeOut(void)
{
}

_SND_tdstBlockEvent* SND_fn_pstGetLastEventForObjectTypeSound(void)
{
    return (_SND_tdstBlockEvent*)0;
}

extern "C" int SND_fn_bIsTypePlayingSound(int s32_TypeId)
{
    CLinkTypeActor* po_TypeActor;
    po_TypeActor = CLinkTypeActorCont::mfn_roGetInstance()->mfn_poGetActorTypeFromId(s32_TypeId);
    return po_TypeActor->mfn_bSoundPlaying() ? 1 : 0;
}
