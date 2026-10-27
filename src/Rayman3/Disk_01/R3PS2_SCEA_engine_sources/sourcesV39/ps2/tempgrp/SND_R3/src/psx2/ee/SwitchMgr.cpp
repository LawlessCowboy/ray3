/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern "C" void* usnd_malloc(unsigned int ui_Size);
extern "C" int usnd_memcmp(void* pvDest, void* pvSrc, unsigned int uiSize);
extern "C" void SND_fn_vSynchroSound(void);
inline void* operator new(size_t, void* p) { return p; }


/* Recovered aggregate layouts from MWCC debug type records. */
namespace usnd { struct CVarAccess; }
typedef usnd::CVarAccess CVarAccess;
typedef struct JingleList JingleList;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct TTypedVar TTypedVar;
namespace usnd { struct CStringIsLess; }
typedef usnd::CStringIsLess CStringIsLess;
typedef struct stree stree;
namespace usnd { struct CSndVarType; }
typedef usnd::CSndVarType CSndVarType;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct sstring sstring;
namespace usnd { struct CResData; }
typedef usnd::CResData CResData;
typedef struct less less;
namespace usnd { struct CResObjState; }
typedef usnd::CResObjState CResObjState;
typedef struct V3Ds V3Ds;
namespace usnd { struct C3DDirection; }
typedef usnd::C3DDirection C3DDirection;
namespace usnd { struct C3DParam; }
typedef usnd::C3DParam C3DParam;
namespace usnd { struct CPitchActorModifier; }
typedef usnd::CPitchActorModifier CPitchActorModifier;
namespace usnd { struct CRolloffParam; }
typedef usnd::CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
namespace usnd { struct CVolumeActorModifier; }
typedef usnd::CVolumeActorModifier CVolumeActorModifier;
typedef struct smap smap;
namespace usnd { struct CCritSect; }
typedef usnd::CCritSect CCritSect;
namespace usnd { struct CActorProgramContext; }
typedef usnd::CActorProgramContext CActorProgramContext;
namespace usnd { struct CActorResObj; }
typedef usnd::CActorResObj CActorResObj;
typedef struct iterator_base iterator_base;
namespace usnd { struct CCmdInterface; }
typedef usnd::CCmdInterface CCmdInterface;
namespace usnd { struct CResType; }
typedef usnd::CResType CResType;
typedef struct CSwitchElement CSwitchElement;
namespace usnd { struct CUUID; }
typedef usnd::CUUID CUUID;
typedef struct SwitchElt SwitchElt;
namespace usnd { struct CIdObj; }
typedef usnd::CIdObj CIdObj;
typedef struct SwitchData SwitchData;
typedef struct sTreeLink sTreeLink;
namespace usnd { struct CActorModifiers; }
typedef usnd::CActorModifiers CActorModifiers;
typedef struct sset sset;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
namespace usnd { struct CSwitchResData; }
typedef usnd::CSwitchResData CSwitchResData;
typedef struct spair spair;
typedef struct CAllocBlock CAllocBlock;
namespace usnd { struct CPS2IdObjLoader; }
typedef usnd::CPS2IdObjLoader CPS2IdObjLoader;
namespace usnd { struct CResObj; }
typedef usnd::CResObj CResObj;
typedef struct _stVector _stVector;
namespace usnd { struct CProgramContext; }
typedef usnd::CProgramContext CProgramContext;
typedef union CVal CVal;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct sTreeNode sTreeNode;
namespace usnd { struct CVar; }
typedef usnd::CVar CVar;
typedef struct streebase streebase;
typedef struct iterator iterator;
namespace usnd { struct CLookupElement; }
typedef usnd::CLookupElement CLookupElement;
namespace usnd { struct CBoolRefParam; }
typedef usnd::CBoolRefParam CBoolRefParam;
namespace usnd { struct CRefIdObj; }
typedef usnd::CRefIdObj CRefIdObj;
namespace usnd { struct CIndexAllocator; }
typedef usnd::CIndexAllocator CIndexAllocator;
namespace usnd { struct CActorResData; }
typedef usnd::CActorResData CActorResData;

typedef struct sallocator sallocator;
struct sallocator {
};

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

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

struct sstring {
    int m_pcData; /* +0x0 */
};

struct usnd::CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct stree : streebase {
    sallocator allocator; /* +0xc */
    CStringIsLess key_compare; /* +0xd */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct usnd::CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct TTypedVar : CVar {
    float m_oValue; /* +0x1c */
};

struct usnd::CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
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
    static int ss32CurrentRefreshChannel;
};

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x8..0xb */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
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
};

struct usnd::CUUID {
    CUUID(void);
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct usnd::CIdObj {
    /* C++ base CRTTIClass at +0x0: vtable pointer (retail
     * __vt__Q24usnd6CIdObj starts with the destructor). */
    virtual ~CIdObj();
    CUUID m_oId; /* +0x4 */
};

struct usnd::CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
};

struct usnd::CResData : CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct usnd::CResObjState {
    CResObj* m_poResObj; /* +0x0 */
    unsigned int m_uiInstance; /* +0x4 */
    unsigned char m_bPlayable; /* +0x8 */
    unsigned char m_b2DRes; /* +0x9 */
    unsigned char m_b3DRes; /* +0xa */
    unsigned char m_bHasPosition; /* +0xb */
    unsigned char m_bAcceptsSet2DParamsCmd; /* +0xc */
    unsigned char m_bOwnerIsAProgram; /* +0xd */
    unsigned char m_bResident; /* +0xe */
    void* m_pvUserData; /* +0x10 */
    int m_iUserDataSize; /* +0x14 */
    CResObjState* m_poNext; /* +0x18 */
    CResObjState* m_poPrevious; /* +0x1c */
    CResObj* m_poOwner; /* +0x20 */
    unsigned int m_uiLockCount; /* +0x24 */
    void f_vExecCmd(unsigned int ui_Cmd, void* pv_Param);
    bool f_bHasUserData(void* pv_UserData, int i_UserDataSize) const
    {
        if (m_iUserDataSize != i_UserDataSize)
            return false;
        if (m_iUserDataSize <= 0)
            return m_pvUserData == pv_UserData;
        return usnd_memcmp(m_pvUserData, pv_UserData, m_iUserDataSize) == 0;
    }
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct usnd::C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct usnd::C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct usnd::CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0; virtual order from retail
       __vt__Q24usnd15CActorModifiers. */
    virtual void fv_vVarChanged(CVar& ro_Var);
    virtual void fv_vVarDestroyed(CVar& ro_Var);
    virtual void fv_vVarAccessed(CVar& ro_Var);
    virtual void fv_vAddModifier(CVar& ro_Var, float f_Value);
    virtual void fv_vRemoveModifier(CVar& ro_Var);
    CActorResObj* m_pActor; /* +0x4 */
    ::smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct usnd::CPitchActorModifier : CActorModifiers {
};

struct usnd::CRolloffParam {
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

struct usnd::CVolumeActorModifier : CActorModifiers {
};

struct usnd::CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct usnd::CActorProgramContext {
    /* C++ base CProgramContext at +0x0; virtual order from retail
       __vt__Q24usnd20CActorProgramContext. */
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
    ::smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
};

struct usnd::CResObj {
    virtual ~CResObj();
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct usnd::CActorResObj : CResObj {
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

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct usnd::CCmdInterface {
    ::smap m_oCommands; /* +0x0 */
    ::smap m_oInterfaces; /* +0x10 */
    ::smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct usnd::CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    ::smap m_oCommands; /* +0x3c */
};

namespace usnd {
template <class T> struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
    ~CIdObjPtr(void);
    const CUUID& f_roGetId(void) const;
    operator T*(void) const;
};
}
typedef usnd::CIdObjPtr<CResData> CIdObjPtr;

struct SwitchElt {
    unsigned int m_uiVal; /* +0x0 */
    CResData* m_pData; /* +0x4 */
    CUUID m_oId; /* +0x8 */
};

/* Address view of a SwitchElt whose data pointer comes first. */
struct SwitchEltData {
    CResData* m_pData; /* +0x0 */
    unsigned int m_uiVal; /* +0x4 */
    CUUID m_oId; /* +0x8 */
};

struct SwitchData {
    CSwitchResData* m_pSwitchData; /* +0x0 */
    SwitchElt* m_pElt; /* +0x4 */
    SwitchData* m_pNext; /* +0x8 */
    unsigned int m_uiDefault; /* +0xc */
    unsigned int m_nbElt; /* +0x10 */
    SwitchData(CSwitchResData* pSwitchData, SwitchData* pNext);
    void RebuildSwitch(void);
    unsigned char f_bFindData(CResData* pData);
    void f_vUpdateWaves(char* pTex, unsigned int nbTex, CPS2IdObjLoader* pLoader);
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

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
    static CLinkTypeActorCont& mfn_roGetInstance(void);
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
};

struct usnd::CSwitchResData : CResData {
    struct CSwitchElement {
        CSwitchElement(unsigned int ui_Value, const CUUID& ro_Id);
        CIdObjPtr<CResData> m_pTarget; /* +0x0 */
        unsigned int m_uiValue; /* +0x4 */
    };
    unsigned int m_uiNbElmts; /* +0x18 */
    unsigned int m_uiInfoType; /* +0x1c */
    unsigned int m_uiDefaultIndex; /* +0x20 */
    float m_fVolume; /* +0x24 */
    CSwitchElement* m_paElements; /* +0x28 */
};

inline SwitchData::SwitchData(CSwitchResData* pSwitchData, SwitchData* pNext)
{
    unsigned int i;

    m_pNext = pNext;
    m_pSwitchData = pSwitchData;
    m_pElt = (SwitchElt*)usnd_malloc(m_pSwitchData->m_uiNbElmts * sizeof(SwitchElt));
    m_nbElt = m_pSwitchData->m_uiNbElmts;
    m_uiDefault = m_pSwitchData->m_uiDefaultIndex;
    for (i = 0; i < m_nbElt; i++)
    {
        m_pElt[i].m_pData = NULL;
        m_pElt[i].m_uiVal = m_pSwitchData->m_paElements[i].m_uiValue;
        m_pElt[i].m_oId = m_pSwitchData->m_paElements[i].m_pTarget.f_roGetId();
    }
    /* Retail addresses the default element as (m_pElt + 4) + m_uiDefault * 16
     * and stores the data pointer at offset 0 of that address, i.e. the
     * member offset stays unfolded in the base pointer.  The plain
     * "m_pElt[m_uiDefault].m_pData" spelling folds the +4 into the store
     * displacement, so the element is addressed through a pointer to its
     * data field instead.  The dead index assignment keeps MWCC from
     * coalescing the base and the index into the same register. */
    CResData* pTarget = m_pSwitchData->m_paElements[m_uiDefault].m_pTarget;
    int iIndex;
    char* pc = (char*)m_pElt;
    pc = pc + 4;
    ((SwitchEltData*)pc)[iIndex = m_uiDefault].m_pData = pTarget;
    RebuildSwitch();
}

struct spair {
    int first; /* +0x0 */
    CLinkTypeActor* second; /* +0x4 */
};

struct CAllocBlock {
    CAllocBlock* m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct usnd::CPS2IdObjLoader {
    ::smap m_oIdObjsCache; /* +0x0 */
    ::smap m_oIndex; /* +0x10 */
    CIdObj* f_poLoadIdObj(const CUUID& ro_Id);
    void f_vPreloadObjects(CUUID* pa_oIds, unsigned int ui_Nb);
};

namespace usnd {
struct CIdObjPtrMgr {
    static CIdObjPtrMgr& fs_roGetInst(void);
    CIdObj* f_poGetIdObj(const CUUID& ro_Id);
    unsigned int f_uiGetPendingReferences(CUUID* pa_oIds, unsigned int ui_Max);
};
}

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct usnd::CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

union CVal {
    int pcBool; /* +0x0 */
    TTypedVar* poBoolVar; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct sTreeNode : sTreeLink {
    spair m_oValue; /* +0x10 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct usnd::CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct usnd::CBoolRefParam {
    unsigned int uiRefType; /* +0x0 */
    CVal m_uValue; /* +0x4 */
    unsigned int m_uiValue; /* +0x8 */
};

struct usnd::CIndexAllocator {
    CAllocBlock* m_poAllocBlocks; /* +0x0 */
    char m_cRootNodeBuffer[40]; /* +0x4 */
    unsigned int m_uiNbAllocs; /* +0x2c */
};

struct usnd::CActorResData : CResData {
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    ::smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
};

extern "C" int SND_fn_s32GetVolumeLineSound(int s32_LineId);
extern "C" void SND_fn_vSetVolumeLineSound(int s32_LineId, int s32_VolValue);

struct JingleElt {
    JingleElt(int s32_ObjectId, int s32_TypeId, int s32_HandleId)
    {
        m_pNext = NULL;
        m_pPrev = NULL;
        m_ObjectId = s32_ObjectId;
        m_TypeId = s32_TypeId;
        m_HandleId = s32_HandleId;
    }
    void* operator new(size_t ui_Size)
    {
        JingleElt* p = ms_pFree;
        if (p)
            ms_pFree = p->m_pNext;
        else
            p = (JingleElt*)usnd_malloc(ui_Size);
        return p;
    }
    JingleElt* m_pNext; /* +0x0 */
    JingleElt* m_pPrev; /* +0x4 */
    int m_ObjectId; /* +0x8 */
    int m_TypeId; /* +0xc */
    int m_HandleId; /* +0x10 */
    static JingleElt* ms_pFree;
};

struct JingleList {
    JingleList(int iVolumeLine, int uOldVol)
    {
        m_pNext = NULL;
        m_pPrev = NULL;
        m_pFirst = NULL;
        m_iVolumeLine = iVolumeLine;
        m_uOldVol = uOldVol;
    }
    void* operator new(size_t ui_Size)
    {
        JingleList* p = ms_pFree;
        if (p)
            ms_pFree = p->m_pNext;
        else
            p = (JingleList*)usnd_malloc(ui_Size);
        return p;
    }
    int m_iVolumeLine; /* +0x0 */
    int m_uOldVol; /* +0x4 */
    JingleList* m_pNext; /* +0x8 */
    JingleList* m_pPrev; /* +0xc */
    JingleElt* m_pFirst; /* +0x10 */
    static JingleList* ms_pFree;
};

struct Jingle {
    static JingleList* ms_pFirst;
    static void fs_vAddJingle(int, int, int, int);
};

extern "C" void usnd_free(void* pv_Ptr);
unsigned char fn_bLockSound(bool bIgnoreIfCantAccess);
void fn_vUnlockSound(void);
namespace usnd {
struct CPS2WaveFileIdObj {
    static void fs_vLoadStatic(void);
};
}
extern "C" void usnd_memcpy(void* pvDest, void* pvSrc, unsigned int uiSize);

/* The retail debug attributes this method to AGO.c lines 93-143, but it is
 * C++ (usnd templates and constructors) and belongs with SwitchData. */
void SwitchData::RebuildSwitch(void)
{
    unsigned int pos;
    unsigned int i;

    if (m_pSwitchData->m_paElements)
    {
        for (i = 0; i < m_pSwitchData->m_uiNbElmts; i++)
            m_pSwitchData->m_paElements[i].~CSwitchElement();
        usnd_free(m_pSwitchData->m_paElements);
    }

    pos = 0;
    for (i = 0; i < m_nbElt; i++)
    {
        if (m_pElt[i].m_pData)
            pos++;
    }

    m_pSwitchData->m_uiNbElmts = pos;
    if (pos)
    {
        m_pSwitchData->m_paElements = (CSwitchResData::CSwitchElement*)usnd_malloc(pos * sizeof(CSwitchResData::CSwitchElement));
        pos = 0;
        for (i = 0; i < m_nbElt; i++)
        {
            if (m_pElt[i].m_pData)
            {
                if (i == m_uiDefault)
                    m_pSwitchData->m_uiDefaultIndex = pos;
                new (&m_pSwitchData->m_paElements[pos]) CSwitchResData::CSwitchElement(m_pElt[i].m_uiVal, m_pElt[i].m_oId);
                pos++;
            }
        }
    }
    else
    {
        m_pSwitchData->m_paElements = NULL;
    }
}

struct SwitchMgr {
    static unsigned int ms_nbTex;
    static unsigned int ms_nbTexMax;
    static char* ms_pTex;
    static CResData** ms_pDel;
    static unsigned int ms_nbDel;
    static unsigned int ms_maxDel;
    static SwitchData* ms_pList;
    static void fs_vAddDataToDelete(CResData*);
    static void fs_vStopAll(void);
    static void fs_vUpdateWaves(CPS2IdObjLoader*);
    static void fs_vClearTexture(void);
    static void fs_vAddTexture(unsigned int);
    static void fs_vAdd(CSwitchResData*);
    /* Inline list search; the name is not recovered (retail keeps pData in a
       saved register, as an inlined parameter). */
    static SwitchData* fs_pFindData(CResData* pData)
    {
        SwitchData* pTmp;
        for (pTmp = ms_pList; pTmp && !pTmp->f_bFindData(pData); pTmp = pTmp->m_pNext) ;
        return pTmp;
    }
};



























































unsigned int SwitchMgr::ms_nbTex;
unsigned int SwitchMgr::ms_nbTexMax;

void Jingle::fs_vAddJingle(int s32_ObjectId, int s32_TypeId, int s32_HandleId, int iVolumeLine)
{
    int uVol;
    JingleList* pList;

    for (pList = ms_pFirst; pList && (pList->m_iVolumeLine != iVolumeLine); pList = pList->m_pNext)
        ;
    if (pList == NULL)
    {
        uVol = SND_fn_s32GetVolumeLineSound(iVolumeLine);
        pList = new JingleList(iVolumeLine, uVol);
        if (pList)
        {
            pList->m_pNext = ms_pFirst;
            pList->m_pPrev = NULL;
            if (ms_pFirst)
                ms_pFirst->m_pPrev = pList;
            ms_pFirst = pList;
            SND_fn_vSetVolumeLineSound(iVolumeLine, uVol);
        }
    }
    if (pList)
    {
        JingleElt* pElt = new JingleElt(s32_ObjectId, s32_TypeId, s32_HandleId);
        if (pElt)
        {
            pElt->m_pNext = pList->m_pFirst;
            pElt->m_pPrev = NULL;
            if (pList->m_pFirst)
                pList->m_pFirst->m_pPrev = pElt;
            pList->m_pFirst = pElt;
        }
    }
}

void SwitchMgr::fs_vAddDataToDelete(CResData* pData)
{
    CResData** pDel;
    int i;

    for (i = 0; (i < ms_nbDel) && (ms_pDel[i] != pData); i++) ;

    if (i == ms_nbDel)
    {
        if (ms_maxDel == ms_nbDel)
        {
            ms_maxDel += 16;
            pDel = (CResData**)usnd_malloc(ms_maxDel * sizeof(CResData*));
            if (ms_pDel)
            {
                usnd_memcpy(pDel, ms_pDel, ms_nbDel * sizeof(CResData*));
                usnd_free(ms_pDel);
            }
            ms_pDel = pDel;
        }
        ms_pDel[ms_nbDel] = pData;
        ms_nbDel++;
    }
}

void SwitchMgr::fs_vStopAll(void)
{
    CExtraEventActor* poEEActor;
    CResObjParams* pParams;
    CResObjState* poState;
    CActorProgramContext* poContext;
    SwitchData* pTmp;
    CLinkActor* poActor;
    CLinkTypeActorCont::iterator itLTAC;

    CLinkTypeActorCont& rLTAC = CLinkTypeActorCont::mfn_roGetInstance();

    for (itLTAC = rLTAC.begin(); itLTAC != rLTAC.end(); ++itLTAC)
    {
        poActor = (*itLTAC).second->m_oActors.m_poNext;
        while (poActor)
        {
            poEEActor = poActor->m_oExtraActors.m_poNext;
            while (poEEActor)
            {
                poContext = &poEEActor->mpoActorObj->m_oProgramContext;
                if (poContext->fv_bAreThereRunningObjs())
                {
                    pParams = poEEActor->m_oResObjParams.m_poNext;
                    while (pParams)
                    {
                        pTmp = ms_pList;
                        while (pTmp)
                        {
                            if (pParams->m_poResData == pTmp->m_pSwitchData)
                            {
                                for (poState = poContext->m_oObjStates.m_poNext; poState; poState = poState->m_poNext)
                                {
                                    if (poState->f_bHasUserData(pParams, -1))
                                        poState->f_vExecCmd(1, NULL);
                                }
                            }
                            pTmp = pTmp->m_pNext;
                        }
                        pParams = pParams->m_poNext;
                    }
                }
                poEEActor = poEEActor->m_poNext;
            }
            poActor = poActor->m_poNext;
        }
    }

    for (CExtraEventActor::ss32CurrentRefreshChannel = 0; CExtraEventActor::ss32CurrentRefreshChannel < 5; CExtraEventActor::ss32CurrentRefreshChannel++)
    {
        SND_fn_vSynchroSound();
        SND_fn_vSynchroSound();
    }
}

void SwitchMgr::fs_vUpdateWaves(CPS2IdObjLoader* pLoader)
{
    SwitchData* pTmp;
    unsigned int i;

    pTmp = ms_pList;
    while (pTmp)
    {
        pTmp->f_vUpdateWaves(ms_pTex, ms_nbTex, pLoader);
        pTmp = pTmp->m_pNext;
    }

    if (pLoader)
    {
        usnd::CPS2WaveFileIdObj::fs_vLoadStatic();
    }

    fn_bLockSound(false);
    fs_vStopAll();

    pTmp = ms_pList;
    while (pTmp)
    {
        pTmp->RebuildSwitch();
        pTmp = pTmp->m_pNext;
    }
    fn_vUnlockSound();

    for (i = 0; i < ms_nbDel; i++)
    {
        pTmp = fs_pFindData(ms_pDel[i]);
        if (pTmp == NULL)
            delete ms_pDel[i];
    }
    ms_nbDel = 0;
}

void SwitchMgr::fs_vClearTexture(void)
{
    SwitchMgr::ms_nbTexMax = 0;
    SwitchMgr::ms_nbTex = 0;
}

void SwitchMgr::fs_vAddTexture(unsigned int uiTexture)
{
    char* pTex;

    if (ms_nbTexMax == ms_nbTex)
    {
        ms_nbTexMax += 16;
        pTex = (char*)usnd_malloc(ms_nbTexMax);
        if (ms_pTex)
        {
            usnd_memcpy(pTex, ms_pTex, ms_nbTex);
            usnd_free(ms_pTex);
        }
        ms_pTex = pTex;
    }
    ms_pTex[ms_nbTex] = uiTexture;
    ms_nbTex++;
}

void SwitchMgr::fs_vAdd(CSwitchResData* pSwitchData)
{
    void* ptr;

    ptr = usnd_malloc(sizeof(SwitchData));
    if (ptr)
    {
        ms_pList = new (ptr) SwitchData(pSwitchData, ms_pList);
    }
}

unsigned char SwitchData::f_bFindData(CResData* pData)
{
    unsigned int i;
    for (i = 0; (i < m_nbElt) && (m_pElt[i].m_pData != pData); i++) ;

    return i != m_nbElt;
}

void SwitchData::f_vUpdateWaves(char* pTex, unsigned int nbTex, CPS2IdObjLoader* pLoader)
{
    int nb;
    unsigned int j;
    unsigned int i;

    for (i = 0; i < m_nbElt; i++)
    {
        for (j = 0; (j < nbTex) && (m_pElt[i].m_uiVal != pTex[j]); j++) ;

        if (pLoader && (m_pElt[i].m_pData == NULL) && ((j != nbTex) || (m_uiDefault == i)))
        {
            m_pElt[i].m_pData = (CResData*)usnd::CIdObjPtrMgr::fs_roGetInst().f_poGetIdObj(m_pElt[i].m_oId);
            if (m_pElt[i].m_pData == NULL)
            {
                m_pElt[i].m_pData = (CResData*)pLoader->f_poLoadIdObj(m_pElt[i].m_oId);
                if (m_pElt[i].m_pData)
                {
                    CUUID aId[20];
                    while ((nb = usnd::CIdObjPtrMgr::fs_roGetInst().f_uiGetPendingReferences(aId, 20)) != 0)
                    {
                        if (nb > 20)
                            nb = 20;
                        pLoader->f_vPreloadObjects(aId, nb);
                    }
                }
            }
        }
        else if (m_pElt[i].m_pData && (i != m_uiDefault) && (j == nbTex))
        {
            CResData* pData = m_pElt[i].m_pData;
            m_pElt[i].m_pData = NULL;
            SwitchMgr::fs_vAddDataToDelete(pData);
        }
    }
}
