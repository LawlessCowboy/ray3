/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern "C" void usnd_free(void* pv);
extern "C" void* usnd_malloc(unsigned int uiSize);
extern "C" int usnd_memcmp(void* pvDest, void* pvSrc, unsigned int uiSize);

struct sallocator {};
typedef int CFlow;
typedef struct CExtraEventActorPool CExtraEventActorPool;

/* Recovered aggregate layouts from MWCC debug type records. */
namespace usnd { struct CRTTIClass; }
typedef usnd::CRTTIClass CRTTIClass;
namespace usnd { struct CVarAccess; }
typedef usnd::CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct pointer pointer;
namespace usnd { struct CStringIsLess; }
typedef usnd::CStringIsLess CStringIsLess;
typedef struct stree stree;
typedef struct V3Ds V3Ds;
namespace usnd { struct C3DDirection; }
typedef usnd::C3DDirection C3DDirection;
typedef struct _RollOffParam _RollOffParam;
typedef struct CExtraEventActor CExtraEventActor;
struct CExtraEventActorPool {
    int _placeholder;
    static CExtraEventActor ms_oPosPool;
    static CExtraEventActor ms_oNoPosPool;
    /* Target uses a0 as the actor, with no implicit pool argument. */
    static void f_vSalvageActor(CExtraEventActor*);
    static CExtraEventActor* fs_poGetAnActor(int);
};
typedef struct iterator_base iterator_base;
typedef struct CLinkActor CLinkActor;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct sstring sstring;
namespace usnd { struct CResData; }
typedef usnd::CResData CResData;
typedef struct TTypedVar TTypedVar;
namespace usnd { struct CUUID; }
typedef usnd::CUUID CUUID;
namespace usnd { struct CIdObj; }
typedef usnd::CIdObj CIdObj;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct less less;
namespace usnd { struct CPitchActorModifier; }
typedef usnd::CPitchActorModifier CPitchActorModifier;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct C2DParams C2DParams;
typedef struct const_iterator const_iterator;
typedef union CVal CVal;
namespace usnd { struct CRolloffParam; }
typedef usnd::CRolloffParam CRolloffParam;
typedef struct sset sset;
namespace usnd { struct CVar; }
typedef usnd::CVar CVar;
namespace usnd { struct CEventResData; }
typedef usnd::CEventResData CEventResData;
typedef struct smap smap;
namespace usnd { struct CRefIdObj; }
typedef usnd::CRefIdObj CRefIdObj;
namespace usnd { struct CResObj; }
typedef usnd::CResObj CResObj;
namespace usnd { struct CResObjState; }
typedef usnd::CResObjState CResObjState;
namespace usnd { struct CCritSect; }
typedef usnd::CCritSect CCritSect;
namespace usnd { struct CActorProgramContext; }
typedef usnd::CActorProgramContext CActorProgramContext;
typedef struct streebase streebase;
typedef struct TBaseVarType TBaseVarType;
typedef struct CMusicMarkerNotifTarget CMusicMarkerNotifTarget;
namespace usnd { struct CVarData; }
typedef usnd::CVarData CVarData;
namespace usnd { struct CSwitchResData; }
typedef usnd::CSwitchResData CSwitchResData;
namespace usnd { struct C3DParam; }
typedef usnd::C3DParam C3DParam;
namespace usnd { struct CVolumeActorModifier; }
typedef usnd::CVolumeActorModifier CVolumeActorModifier;
namespace usnd { struct CActorResObj; }
typedef usnd::CActorResObj CActorResObj;
namespace usnd { struct CFloatVarType; }
typedef usnd::CFloatVarType CFloatVarType;
typedef struct _stVector _stVector;
namespace usnd { struct CBoolRefParam; }
typedef usnd::CBoolRefParam CBoolRefParam;
namespace usnd { struct CLookupElement; }
typedef usnd::CLookupElement CLookupElement;
typedef struct sTreeLink sTreeLink;
namespace usnd { struct CProgramHdr; }
typedef usnd::CProgramHdr CProgramHdr;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
namespace usnd { struct CSrcFlow; }
typedef usnd::CSrcFlow CSrcFlow;
typedef struct stMusicMarkerSlot stMusicMarkerSlot;
namespace usnd { struct CSndVarType; }
typedef usnd::CSndVarType CSndVarType;
namespace usnd { struct CCmdInterface; }
typedef usnd::CCmdInterface CCmdInterface;
namespace usnd { struct CResType; }
typedef usnd::CResType CResType;
namespace usnd { struct CIdObjPtrMgr; }
typedef usnd::CIdObjPtrMgr CIdObjPtrMgr;
namespace usnd { struct CClassInfo; }
typedef usnd::CClassInfo CClassInfo;
namespace usnd { struct CActorResData; }
typedef usnd::CActorResData CActorResData;
typedef struct TTypedVarData TTypedVarData;
namespace usnd { struct CBaseVarType; }
typedef usnd::CBaseVarType CBaseVarType;
namespace usnd { struct CNotifTarget; }
typedef usnd::CNotifTarget CNotifTarget;
typedef struct CSwitchElement CSwitchElement;
namespace usnd { struct CProgramContext; }
typedef usnd::CProgramContext CProgramContext;
namespace usnd { struct CActorModifiers; }
typedef usnd::CActorModifiers CActorModifiers;
typedef struct stMiniStackDesc stMiniStackDesc;
typedef struct iterator iterator;
typedef struct CMarkerNotifTarget CMarkerNotifTarget;

typedef enum tdeType {
    EBASE = 0,
    EARRAY = 1,
    ESTRUCT = 2,
    EOBJECT = 3,
    ERESID = 4,
    EENUM = 5,
} tdeType;

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

typedef enum tdeBaseType {
    EINT = 0,
    EFLOAT = 1,
    ESTRING = 2,
    EBOOL = 3,
    ECHAR = 4,
} tdeBaseType;

struct usnd::CStringIsLess {
    /* C++ base binary_function at +0x0. */
    bool operator()(const char* pc_Left, const char* pc_Right) const;
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

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct usnd::C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

namespace usnd {
/* vtable: fv_vRelease at +0x8, fv_vAddRef at +0xc (retail __vt__Q24usnd10CInterface). */
struct CInterface {
    CInterface() {}
    virtual void fv_vRelease(void);
    virtual void fv_vAddRef(void);
};
}

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

/* The constructor and f_vIsolate are defined out of line at the end of this
 * file (original lines 251-256 and 232-239) and marked auto_inline, so that
 * fs_poGetAnActor inlines them while their standalone symbols are emitted.
 *
 * E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 251–256 */
/* addr: 0x001cf290  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 251
 *   +0x0024 -> line 256
 *   +0x0028 -> line 251
 *   +0x004c -> line 256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 232–239 */
/* addr: 0x001cf320  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 232
 *   +0x000c -> line 233
 *   +0x0014 -> line 234
 *   +0x0020 -> line 235
 *   +0x0028 -> line 237
 *   +0x002c -> line 239
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
struct CExtraEventActor {
    struct CResObjParams : usnd::CInterface {
        CResObjParams* m_poNext; /* +0x4 */
        CResObjParams* m_poPrevious; /* +0x8 */
        unsigned int m_uiNbRefs; /* +0xc */
        int m_s32Handle; /* +0x10 */
        CResData* m_poResData; /* +0x14 */
        void (*m_pfn_Proc)(int); /* +0x18 */
        static void* operator new(unsigned int uiSize) { return usnd_malloc(uiSize); }
        CResObjParams() : m_poNext(0), m_poPrevious(0), m_uiNbRefs(0), m_s32Handle(0), m_poResData(0), m_pfn_Proc(0) {}
        virtual void fv_vRelease(void);
        virtual void fv_vAddRef(void);
        void f_vIsolate(void)
        {
            if (m_poPrevious)
                m_poPrevious->m_poNext = m_poNext;
            if (m_poNext)
                m_poNext->m_poPrevious = m_poPrevious;
            m_poNext = 0;
            m_poPrevious = 0;
        }
    };

    struct CResObjParamsPool {
        static CResObjParams ms_oPool;
        static void f_vSalvage(CResObjParams* poParams)
        {
            poParams->m_poNext = ms_oPool.m_poNext;
            poParams->m_poPrevious = &ms_oPool;
            if (poParams->m_poNext)
                poParams->m_poNext->m_poPrevious = poParams;
            ms_oPool.m_poNext = poParams;
        }
    };

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
    static int ss32RefreshChannelCount[8];
    static int ss32CurrentRefreshChannel;
    static void operator delete(void* pv) { usnd_free(pv); }
    static void* operator new(unsigned int uiSize) { return usnd_malloc(uiSize); }
    CExtraEventActor();
    CExtraEventActor(int s32_ACPObjectId);
    ~CExtraEventActor();
    unsigned char mfn_bExecute(int s32_CmdId, const CUUID& roId);
    unsigned char mfn_bPlay(const CEventResData& ro_EventResData, int s32_EventId, void (*pfn_Proc)(int));
    unsigned char fn_bIsSoundPlaying(int s32_Handle);
    unsigned char fn_bIsSoundPlaying(CResData* po_ResData);
    unsigned char fn_bIsResourcesAllowed(const CResData& ro_ResData);
    unsigned char mfn_bApplyPositionAndVelocity(void);
    unsigned char mfn_bApplyAllParams(bool bforce);
    unsigned char mfn_bApplySectorActivation(void);
    void f_vDesInit(void);
    void f_vInit(const CLinkTypeActor& ro_ActorType, int s32_ACPObjectId, int s32_ACPChannelId, const CEventResData* poResData);
    void f_vInitActorObj(int s32_ACPObjectId);
    void f_vInsertAfter(CExtraEventActor* pParam);
    void f_vIsolate(void);
};
typedef CExtraEventActor::CResObjParams CResObjParams;

CExtraEventActor CExtraEventActorPool::ms_oPosPool;
CExtraEventActor CExtraEventActorPool::ms_oNoPosPool;

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
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

struct sstring {
    int m_pcData; /* +0x0 */
};

struct usnd::CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

namespace usnd {
inline bool operator==(const CUUID& a, const CUUID& b)
{
    return b.m_uiHighWord == a.m_uiHighWord && b.m_uiLowWord == a.m_uiLowWord;
}
}

namespace usnd { struct CDestFlow; }

struct usnd::CRTTIClass {
    virtual ~CRTTIClass();
    virtual CClassInfo& fv_roGetClassInfo(void) const;
    virtual void fv_vReadFromFlow(CSrcFlow& roFlow);
    virtual void fv_vWriteToFlow(CDestFlow& roFlow);
};

struct usnd::CIdObj : CRTTIClass {
    CUUID m_oId; /* +0x4 */
    virtual void fv_vSetId(const CUUID& roId);
};

struct usnd::CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
    virtual void fv_vGetReferencedObjects(CRefIdObj** ppoObjs, unsigned int& ruiNbObjs, CUUID* poIds, unsigned int& ruiNbIds);
};

struct usnd::CResData : CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
    virtual CResType& fv_roGetResType(void) const;
    virtual CResObj* fv_poCreateResObj(void);
    virtual void fv_vUpdateData(unsigned int uiVersionId, CSrcFlow& roFlow);
};

struct sset {
    stree _Tr; /* +0x0 */
};

namespace usnd { struct CVarNotifTarget; }

struct usnd::CVar {
    virtual ~CVar();
    void f_vAddNotifTarget(CVarNotifTarget& roTarget);
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct TTypedVar : CVar {
    sstring m_oValue; /* +0x1c */
};

struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
};

struct less {
    /* C++ base binary_function at +0x0. */
};


struct spair {
    int first; /* +0x0 */
    unsigned int second; /* +0x4 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    spair m_oValue; /* +0x10 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct const_iterator {
    /* C++ base iterator_base at +0x0. */
};

union CVal {
    int pcBool; /* +0x0 */
    TTypedVar* poBoolVar; /* +0x0 */
};

struct usnd::CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
    CRolloffParam(float fStabilisationDistance, float fStabilisationVolume, float fSaturationDistance);
    CRolloffParam(void) {}
};

struct usnd::CEventResData : CResData {
    float m_fCoeffA; /* +0x18 */
    float m_fCoeffB; /* +0x1c */
    float m_fCoeffC; /* +0x20 */
    float m_fCoeffD; /* +0x24 */
    tdeEventType m_eEventType; /* +0x28 */
    CIdObjPtr m_pTargetRes; /* +0x2c */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct usnd::CResObj {
    virtual ~CResObj();
    virtual void fv_vExecCmd(unsigned int ui_CmdId, void* pv_Data);
    CResData& f_roGetResData(void);
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
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

struct usnd::CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct usnd::CVarAccess {
    virtual CVar* fv_poGetVar(const char* pcName);
    virtual CVar* fv_poCreateVar(const char* pcName, const CSndVarType& roType, CVarData* poData);
};

struct usnd::CProgramContext {
    virtual void fv_vAddRunningObj(CResObj& roObj, void* pvUserData, int iUserData, bool bFlag, CResObj* poParent);
    virtual bool fv_bAddRunningObj(CResObj& roObj, CResObj& roParent, bool bFlag);
    virtual void fv_vRemoveRunningObj(CResObj& roObj);
    virtual unsigned int fv_uiGetAllRunningObjs(CResObj** ppoObjs, unsigned int uiMaxObjs);
    virtual void fv_vCallHandler(const char* pcName, void* pvData);
    virtual void fv_vAddRunningObjRef(CResObj& roObj);
    virtual void fv_vReleaseRunningObjRef(CResObj& roObj);
    virtual bool fv_bAreThereRunningObjs(void);
    virtual unsigned int fv_uiGetRunningObjsWithUserData(void* pvUserData, int iUserDataSize, CResObj** ppoObjs, unsigned int uiMaxObjs);
    virtual bool fv_bGetRunningObjUserData(CResObj* poObj, void*& pvUserData, int& riUserDataSize, unsigned int& ruiUserData);
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct usnd::CActorProgramContext : CProgramContext, CVarAccess {
    CResObjState m_oObjStates; /* +0x10 */
    CActorResObj* m_pActor; /* +0x38 */
    smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
};

struct TBaseVarType {
    /* C++ base CBaseVarType at +0x0. */
};

struct usnd::CNotifTarget : usnd::CInterface {
};

struct usnd::CVarNotifTarget : CNotifTarget {
};

struct CMusicMarkerNotifTarget : usnd::CVarNotifTarget {
    void fv_vVarChanged(CVar& roVar);
    void fv_vVarDestroyed(CVar& roVar);
};

struct usnd::CVarData {
    CSndVarType* m_poType; /* +0x4 */
};

struct usnd::CSwitchResData : CResData {
    unsigned int m_uiNbElmts; /* +0x18 */
    unsigned int m_uiInfoType; /* +0x1c */
    unsigned int m_uiDefaultIndex; /* +0x20 */
    float m_fVolume; /* +0x24 */
    CSwitchElement* m_paElements; /* +0x28 */
    CResObj* f_poCreateResObjForValue(unsigned int uiValue);
};

struct usnd::C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct usnd::CActorModifiers : usnd::CVarNotifTarget {
    virtual void fv_vUnknown10(void);
    virtual void f_vAddVar(TTypedVar* poVar, float fCoeff); /* vtable +0x14 */
    virtual void f_vRemoveVar(TTypedVar* poVar); /* vtable +0x18 */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct usnd::CPitchActorModifier : CActorModifiers {
};

struct usnd::CVolumeActorModifier : CActorModifiers {
};

struct usnd::CActorResObj : CResObj {
    virtual void fv_vApply3DParams(void); /* vtable +0x10 */
    virtual void fv_vCallHandler(const char* pcName, void* pvData); /* vtable +0x14 */
    C3DParam& f_roGet3DParams(void);
    void f_vRefresh(void);
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

struct usnd::CFloatVarType {
    /* C++ base TBaseVarType at +0x0. */
    virtual void fv_vUnknown8(void);
    virtual void fv_vUnknownC(void);
    virtual void fv_vUnknown10(void);
    virtual TTypedVar* fv_poCreateVar(const char* pcName, void* pvData); /* vtable +0x14 */
    static CFloatVarType& fs_roGetInst(void);
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct usnd::CBoolRefParam {
    unsigned int uiRefType; /* +0x0 */
    CVal m_uValue; /* +0x4 */
    unsigned int m_uiValue; /* +0x8 */
    CBoolRefParam();
    bool f_bGetValue(void);
};

struct usnd::CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

/* usnd::CProgramHdr is defined before fn_bIsResourcesAllowed, after the
 * usnd STL templates its handler map needs. */

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};


struct usnd::CSrcFlow {
    /* C++ base CFlow at +0x0. */
    CFlow CFlow; /* +0x8 */
};

struct stMusicMarkerSlot {
    char szName[32]; /* +0x0 */
    int szBuffer; /* +0x20 */
    int iBufferSize; /* +0x24 */
};

struct usnd::CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct usnd::CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct usnd::CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct usnd::CIdObjPtrMgr {
    sset m_oLookupTables; /* +0x0 */
    smap m_oElmtReferences; /* +0x10 */
    unsigned char m_bEnable; /* +0x20 */
    static CIdObjPtrMgr& fs_roGetInst(void);
    CRefIdObj* f_poGetIdObj(const CUUID& roId);
};

struct usnd::CClassInfo {
    unsigned int m_uiObjSize; /* +0x0 */
    sTreeNode m_oNode; /* +0x4 */
    int m_czClassName; /* +0x1c */
    unsigned int m_uiVersionId; /* +0x20 */
    /* function pointer */ int m_pfnCreateObj; /* +0x24 */
    CRTTIClass* (*m_pfnStreamObj)(CSrcFlow*); /* +0x28 */
    CClassInfo* m_poBaseClass; /* +0x2c */
};

struct usnd::CActorResData : CResData {
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
};

struct CLinkTypeActorCont : smap {
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
    static CLinkTypeActorCont& mfn_roGetInstance(void);
};

extern CMusicMarkerNotifTarget g_oMusicMarkerNotifTarget;

struct TTypedVarData {
    /* C++ base CVarData at +0x0. */
    float m_oValue; /* +0x8 */
};

struct usnd::CBaseVarType {
    /* C++ base CSndVarType at +0x0. */
    tdeBaseType m_eBaseType; /* +0xc */
};

struct CSwitchElement {
    CIdObjPtr m_pTarget; /* +0x0 */
    unsigned int m_uiValue; /* +0x4 */
};

struct stMiniStackDesc {
    int s32System; /* +0x0 */
    int s32Address; /* +0x4 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CMarkerNotifTarget {
    /* C++ base CNotifTarget at +0x0. */
    void fv_vNotify(void* pvParams, void* pvValue);
};

struct PostponedPlay {
    static unsigned char fs_bIsPending(CExtraEventActor* pEActor);
    static unsigned char fs_bExecute(int s32_CmdId, const usnd::CUUID& roId, CExtraEventActor* pEActor);
    static unsigned char fs_bIsSoundPlaying(int s32_Handle, CExtraEventActor* pEActor);
    static unsigned char fs_bIsSoundPlaying(usnd::CResData* po_ResData, CExtraEventActor* pEActor);
};

unsigned int g_uiLastSwitchValue;
unsigned int g_uiNextSwitchValue;
int SND_g_iNbMusicMarkerSlots;
stMusicMarkerSlot* SND_g_a_tdstMusicMarkerSlots;

/* fn_iTransferIOPData (retail debug: lines 83-138 here) lives in psx2/ee/sndeevid.cpp. */

#pragma auto_inline on

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 243–248 */
/* addr: 0x001cf2f0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 243
 *   +0x0008 -> line 244
 *   +0x000c -> line 245
 *   +0x0018 -> line 246
 *   +0x001c -> line 248
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::f_vInsertAfter(CExtraEventActor* pParam)
{
    m_poNext = pParam->m_poNext;
    m_poPrevious = pParam;
    if (m_poNext)
        m_poNext->m_poPrevious = this;
    pParam->m_poNext = this;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 1002–1006 */
/* addr: 0x001cdaf0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1002
 *   +0x0010 -> line 1005
 *   +0x003c -> line 1006
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActorPool::f_vSalvageActor(CExtraEventActor* poEventActor)
{
    if (poEventActor->ms32ACPObjectId != -1) {
        poEventActor->f_vInsertAfter(&ms_oPosPool);
    }
}

#pragma auto_inline reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 985–998 */
/* addr: 0x001cdb40  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 985
 *   +0x0004 -> line 987
 *   +0x0008 -> line 985
 *   +0x0014 -> line 987
 *   +0x001c -> line 988
 *   +0x0028 -> line 990
 *   +0x0034 -> line 992
 *   +0x003c -> line 993
 *   +0x0070 -> line 995
 *   +0x00dc -> line 997
 *   +0x00e0 -> line 998
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
inline CExtraEventActor::CExtraEventActor(int s32_ACPObjectId)
    : m_poNext(0), m_poPrevious(0), m_poIntSwitchVar(0), mpoActorObj(0),
      mpoVolumeModifier(0), mpoPitchModifier(0), mpoActorType(0)
{
    f_vInitActorObj(s32_ACPObjectId);
}

CExtraEventActor* CExtraEventActorPool::fs_poGetAnActor(int s32_ACPObjectId)
{
    CExtraEventActor* poEventActor;
    if (s32_ACPObjectId == -1)
        poEventActor = ms_oNoPosPool.m_poNext;
    else
        poEventActor = ms_oPosPool.m_poNext;
    if (poEventActor)
        poEventActor->f_vIsolate();
    else
    {
        poEventActor = new CExtraEventActor(s32_ACPObjectId);
    }
    return poEventActor;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 957–978 */
/* addr: 0x001cdc40  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 957
 *   +0x0028 -> line 961
 *   +0x002c -> line 962
 *   +0x0034 -> line 964
 *   +0x006c -> line 966
 *   +0x00f0 -> line 968
 *   +0x00f4 -> line 969
 *   +0x00f8 -> line 970
 *   +0x00fc -> line 971
 *   +0x0108 -> line 975
 *   +0x0120 -> line 978
 *   +0x0124 -> line 975
 *   +0x0128 -> line 978
 *   +0x012c -> line 975
 *   +0x0130 -> line 978
 *   +0x0134 -> line 975
 *   +0x0138 -> line 978
 *   +0x013c -> line 975
 *   +0x0140 -> line 978
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma auto_inline on

unsigned char CExtraEventActor::mfn_bExecute(int s32_CmdId, const CUUID& roId)
{
    unsigned char bAnswer;
    CResObjParams* pParams;
    CResObjState* pState;

    pParams = m_oResObjParams.m_poNext;
    bAnswer = 0;
    while (pParams)
    {
        if (pParams->m_poResData->m_oId == roId)
        {
            /* The retail line map puts the whole inner loop on one line. */
            pState = mpoActorObj->m_oProgramContext.m_oObjStates.m_poNext; while (pState) { if (pState->f_bHasUserData(pParams, -1)) pState->f_vExecCmd(s32_CmdId, NULL); pState = pState->m_poNext; }
            bAnswer = 1;
        }
        pParams = pParams->m_poNext;
    }
    return bAnswer | PostponedPlay::fs_bExecute(s32_CmdId, roId, this);
}

#pragma auto_inline reset

namespace usnd {
template <class T> struct CIdObjPtr {
    operator T*(void) const;
};
struct CSwitchResType { static CSwitchResType* fs_roGetInst(void); };
struct CWavResType { static CWavResType* fs_roGetInst(void); };
}
extern "C" int rand(void);
extern unsigned char g_bUseMarkersForNextRequest;
extern CMarkerNotifTarget g_oMarkerNotifTarget;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 820–953 */
/* addr: 0x001cdd90  size: 1336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 820
 *   +0x0034 -> line 825
 *   +0x0048 -> line 828
 *   +0x0054 -> line 829
 *   +0x005c -> line 830
 *   +0x0064 -> line 833
 *   +0x0068 -> line 835
 *   +0x0080 -> line 837
 *   +0x0088 -> line 844
 *   +0x00a8 -> line 851
 *   +0x00b8 -> line 853
 *   +0x00c8 -> line 854
 *   +0x00d0 -> line 855
 *   +0x00d4 -> line 857
 *   +0x00e0 -> line 858
 *   +0x00e8 -> line 861
 *   +0x00fc -> line 862
 *   +0x0104 -> line 865
 *   +0x010c -> line 866
 *   +0x0114 -> line 871
 *   +0x013c -> line 873
 *   +0x0154 -> line 881
 *   +0x0158 -> line 880
 *   +0x015c -> line 881
 *   +0x0170 -> line 889
 *   +0x0204 -> line 890
 *   +0x0208 -> line 891
 *   +0x020c -> line 890
 *   +0x0214 -> line 891
 *   +0x0234 -> line 893
 *   +0x0258 -> line 895
 *   +0x0270 -> line 914
 *   +0x0274 -> line 905
 *   +0x0278 -> line 908
 *   +0x027c -> line 905
 *   +0x0280 -> line 908
 *   +0x0284 -> line 906
 *   +0x0288 -> line 908
 *   +0x028c -> line 906
 *   +0x0290 -> line 908
 *   +0x02bc -> line 914
 *   +0x02d0 -> line 915
 *   +0x02e4 -> line 917
 *   +0x02f8 -> line 918
 *   +0x0304 -> line 919
 *   +0x030c -> line 922
 *   +0x0318 -> line 923
 *   +0x031c -> line 922
 *   +0x0320 -> line 923
 *   +0x041c -> line 925
 *   +0x0424 -> line 927
 *   +0x0448 -> line 928
 *   +0x0450 -> line 932
 *   +0x0458 -> line 938
 *   +0x0470 -> line 940
 *   +0x04b0 -> line 942
 *   +0x04b8 -> line 940
 *   +0x04bc -> line 942
 *   +0x04d8 -> line 943
 *   +0x04f0 -> line 946
 *   +0x0508 -> line 947
 *   +0x050c -> line 953
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bPlay(const CEventResData& ro_EventResData, int s32_EventId, void (*pfn_Proc)(int))
{
    CResObj* po_ResObj;
    CResData* po_ResData;
    CSwitchResData* pSwitchResData;
    unsigned int uiInfoType;
    const CEventResData* po_EventResData;
    unsigned char b_Answer;
    CResObjParams* poParams;
    CResObjState* pState;
    CProgramContext* poContext;

    if (mbAllSoundPaused)
        return 0;

    po_ResData = (CResData*)*(const usnd::CIdObjPtr<CResData>*)&ro_EventResData.m_pTargetRes;
    if (!po_ResData)
        return 0;

    poContext = &mpoActorObj->m_oProgramContext;
    if (!fn_bIsResourcesAllowed(*po_ResData))
        return 0;

    if (&po_ResData->fv_roGetResType() == (CResType*)usnd::CSwitchResType::fs_roGetInst())
    {
        pSwitchResData = (CSwitchResData*)po_ResData;
        uiInfoType = pSwitchResData->m_uiInfoType;
        if (g_uiNextSwitchValue == (unsigned int)-1)
            g_uiLastSwitchValue = mpoActorType->mstIActor.Switch(ms32ACPObjectId, uiInfoType);
        else
            g_uiLastSwitchValue = g_uiNextSwitchValue;
        po_ResObj = pSwitchResData->f_poCreateResObjForValue(g_uiLastSwitchValue);
    }
    else
    {
        po_ResObj = po_ResData->fv_poCreateResObj();
        g_uiLastSwitchValue = (unsigned int)-1;
    }
    if (!po_ResObj)
        return 0;

    if (&po_ResObj->f_roGetResData().fv_roGetResType() == (CResType*)usnd::CWavResType::fs_roGetInst())
    {
        switch (g_bUseMarkersForNextRequest)
        {
        case 1:
        {
            int a1_Params[1];
            a1_Params[0] = (int)&g_oMarkerNotifTarget;
            po_ResObj->fv_vExecCmd(0x3F5, a1_Params);
        }
        }
    }

    poParams = CResObjParamsPool::ms_oPool.m_poNext;
    if (poParams)
        poParams->f_vIsolate();
    else
        poParams = new CResObjParams;
    poParams->fv_vAddRef();
    poParams->m_s32Handle = s32_EventId;
    poParams->m_poResData = po_ResData;
    poParams->m_pfn_Proc = pfn_Proc;
    poParams->m_poNext = m_oResObjParams.m_poNext;
    poParams->m_poPrevious = &m_oResObjParams;
    if (poParams->m_poNext)
        poParams->m_poNext->m_poPrevious = poParams;
    m_oResObjParams.m_poNext = poParams;

    poContext->fv_vAddRunningObj(*po_ResObj, poParams, -1, false, 0);

    switch (ro_EventResData.m_eEventType)
    {
    case ESTOPANDGO:
    {
        int s32_StopLowWord = 0;
        int s32_StopHighWord = 0;
        int s32_PlayLowWord = 0;
        int s32_PlayHighWord = 0;
        stMiniStackDesc st_Stack[4] = {
            {1, (int)&s32_StopLowWord},
            {1, (int)&s32_StopHighWord},
            {1, (int)&s32_PlayLowWord},
            {1, (int)&s32_PlayHighWord},
        };
        CUUID o_StopId;
        CUUID o_PlayId;

        mpoActorObj->fv_vCallHandler("OnGetStopNGoIds", st_Stack);
        poContext->fv_vRemoveRunningObj(*po_ResObj);

        o_StopId.m_uiHighWord = s32_StopHighWord;
        o_StopId.m_uiLowWord = s32_StopLowWord;
        o_PlayId.m_uiHighWord = s32_PlayHighWord;
        o_PlayId.m_uiLowWord = s32_PlayLowWord;
        po_EventResData = (const CEventResData*)usnd::CIdObjPtrMgr::fs_roGetInst().f_poGetIdObj(o_PlayId);

        b_Answer = mfn_bExecute(1, o_StopId);
        if (po_EventResData)
            b_Answer = mfn_bPlay(*po_EventResData, s32_EventId, pfn_Proc) && b_Answer;
        else
            b_Answer = 0;
    }
    break;
    default:
    {
        if (ro_EventResData.m_fCoeffA != 0.0f)
        {
            float fNewPitch = 1.0f + ro_EventResData.m_fCoeffA * (float)(rand() * 2 - 0x7FFFFFFF) / 2147483648.0f;
            if (fNewPitch <= 0.0f)
                fNewPitch = 1e-7f;
            po_ResObj->fv_vExecCmd(0xC, &fNewPitch);
        }
        po_ResObj->fv_vExecCmd(0, 0);
        b_Answer = 1;
    }
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 815–815 */
/* addr: 0x001ce2d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 815
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetSwitchMaterial(int iNB)
{
    g_uiNextSwitchValue = (unsigned int)iNB;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 811–811 */
/* addr: 0x001ce2e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 811
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_iGetSwitchMaterial(void)
{
    return (int)g_uiLastSwitchValue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 798–799 */
/* addr: 0x001ce2f0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 798
 *   +0x000c -> line 799
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" char g_szMarker[2];

void CMarkerNotifTarget::fv_vNotify(void* pvParams, void* pvValue)
{
    g_szMarker[0] = ***(char***)pvValue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 751–780 */
/* addr: 0x001ce310  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 751
 *   +0x0020 -> line 754
 *   +0x0024 -> line 755
 *   +0x002c -> line 757
 *   +0x0038 -> line 759
 *   +0x003c -> line 760
 *   +0x0048 -> line 762
 *   +0x0050 -> line 764
 *   +0x0078 -> line 766
 *   +0x0088 -> line 768
 *   +0x0090 -> line 769
 *   +0x00b4 -> line 770
 *   +0x00cc -> line 771
 *   +0x00d4 -> line 772
 *   +0x00e4 -> line 773
 *   +0x00e8 -> line 777
 *   +0x00f4 -> line 780
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::fn_bIsSoundPlaying(int s32_Handle)
{
    unsigned int uiObjNum;
    unsigned int uiResult;
    CResObjParams* pParams;
    static CResObj* apObjects[100];

    pParams = m_oResObjParams.m_poNext;
    while (pParams)
    {
        if (pParams->m_s32Handle == s32_Handle)
            break;
        pParams = pParams->m_poNext;
    }
    if (pParams)
    {
        uiObjNum = mpoActorObj->m_oProgramContext.fv_uiGetRunningObjsWithUserData(pParams, -1, apObjects, 100);
        for (uiResult = 0; uiResult < uiObjNum; uiResult++)
        {
            CBoolRefParam oBoolRef;
            apObjects[uiResult]->fv_vExecCmd(4, &oBoolRef);
            if (oBoolRef.f_bGetValue() == true)
                return 1;
        }
    }
    return PostponedPlay::fs_bIsSoundPlaying(s32_Handle, this);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 719–748 */
/* addr: 0x001ce430  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 719
 *   +0x0020 -> line 722
 *   +0x0024 -> line 723
 *   +0x002c -> line 725
 *   +0x0038 -> line 727
 *   +0x003c -> line 728
 *   +0x0048 -> line 730
 *   +0x0050 -> line 731
 *   +0x0058 -> line 733
 *   +0x0080 -> line 735
 *   +0x0090 -> line 737
 *   +0x0098 -> line 738
 *   +0x00bc -> line 739
 *   +0x00d4 -> line 740
 *   +0x00dc -> line 741
 *   +0x00f0 -> line 745
 *   +0x00fc -> line 748
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::fn_bIsSoundPlaying(CResData* po_ResData)
{
    unsigned int uiObjNum;
    unsigned int uiResult;
    CResObjParams* pParams;
    static CResObj* apObjects[100];

    pParams = m_oResObjParams.m_poNext;
    while (pParams)
    {
        if (pParams->m_poResData == po_ResData)
            break;
        pParams = pParams->m_poNext;
    }
    if (!pParams)
        return 0;
    uiObjNum = mpoActorObj->m_oProgramContext.fv_uiGetRunningObjsWithUserData(pParams, -1, apObjects, 100);
    for (uiResult = 0; uiResult < uiObjNum; uiResult++)
    {
        CBoolRefParam oBoolRef;
        apObjects[uiResult]->fv_vExecCmd(4, &oBoolRef);
        if (oBoolRef.f_bGetValue() == true)
            return 1;
    }
    return PostponedPlay::fs_bIsSoundPlaying(po_ResData, this);
}

/* The Pustl map of handler names (C4_R3 harmonx stree.h/smap.h). Only the
 * members this function needs are declared; those defined in the class body
 * are inline, the others stay out of line to keep the retail calls. */
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
        bool operator==(const iterator_base& ro_It) const;
        sTreeLink* _Ptr; /* +0x0 */
    };
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

template <class T> struct sallocator {
};

template <class T> struct less {
    bool operator()(const T& ro_Left, const T& ro_Right) const;
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
        bool operator!=(const iterator& ro_It) const { return !(_Ptr == ro_It._Ptr); }
    };
    struct const_iterator : iterator_base {
        const_iterator(sTreeNode* po_Node);
        const_iterator(const const_iterator& ro_It);
        const V& operator*(void) const { return ((sTreeNode*)_Ptr)->m_oValue; }
        bool operator!=(const const_iterator& ro_It) const { return !(_Ptr == ro_It._Ptr); }
        sTreeNode* _Mynode(void) const;
    };
    sTreeNode* _GetHead(void) const;
    sTreeLink*& _Lmost(void) { return _GetHead()->m_poLeft; }
    iterator begin(void) { return iterator(_Lmost()); }
    iterator end(void) { return iterator(_HeadLink); }
    static const K& _Key(sTreeNode* po_Node);
    unsigned int size(void) const { return _Size; }
    const_iterator end(void) const;
    const_iterator lower_bound(const K& ro_Key) const;
    const_iterator find(const K& ro_Key) const
    {
        const_iterator oIt = lower_bound(ro_Key);
        return (oIt == end() || key_compare(ro_Key, _Key(oIt._Mynode()))) ? end() : oIt;
    }
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
    const_iterator end(void) const { return const_iterator(_Tr._GetHead()); }
    const_iterator find(const K& ro_Key) const { return _Tr.find(ro_Key); }
    unsigned int size(void) const { return _Tr.size(); }
    _Imp _Tr; /* +0x0 */
};

struct CProgramHdr {
    typedef smap<const char*, unsigned int, CStringIsLess, sallocator<unsigned int> > tdHandlerMap;
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
    unsigned int f_uiGetHandlerId(const char* pcName) const
    {
        tdHandlerMap::const_iterator it = m_oHandlerIds.find(pcName);
        return it != m_oHandlerIds.end() ? (*it).second : m_oHandlerIds.size();
    }
};

/* Not in the recovered debug; the header sits at +0x20 in the retail code. */
struct CProgramResData : CResData {
    unsigned int m_auiUnknown[2]; /* +0x18 */
    CProgramHdr m_oHdr; /* +0x20 */
};

struct CProgramResType {
    static CResType& fs_roGetInst(void);
};
}

struct CLinkMicro;
struct CLinkMicroCont : usnd::smap<int, CLinkMicro*, usnd::less<int>, usnd::sallocator<CLinkMicro*> > {
    static CLinkMicroCont& mfn_roGetInstance(void);
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 650–698 */
/* addr: 0x001ce550  size: 572 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 650
 *   +0x0024 -> line 652
 *   +0x0034 -> line 654
 *   +0x0044 -> line 655
 *   +0x004c -> line 659
 *   +0x006c -> line 660
 *   +0x0074 -> line 666
 *   +0x0078 -> line 664
 *   +0x007c -> line 663
 *   +0x0080 -> line 664
 *   +0x0084 -> line 666
 *   +0x0148 -> line 667
 *   +0x0154 -> line 675
 *   +0x0158 -> line 676
 *   +0x0160 -> line 678
 *   +0x0168 -> line 679
 *   +0x0180 -> line 681
 *   +0x0188 -> line 685
 *   +0x01a8 -> line 687
 *   +0x01b8 -> line 689
 *   +0x01c0 -> line 690
 *   +0x01e4 -> line 691
 *   +0x01fc -> line 692
 *   +0x0204 -> line 693
 *   +0x0214 -> line 695
 *   +0x0218 -> line 697
 *   +0x021c -> line 698
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::fn_bIsResourcesAllowed(const CResData& ro_ResData)
{
    unsigned int uiObjNum;
    unsigned int uiResult;
    CResObjParams* pParams;
    char* czStrTheme;
    CProgramHdr* ro_ProgHdr;
    static CResObj* apObjects[100];

    ro_ResData.fv_roGetClassInfo();

    if (ms32ACPObjectId == -1)
        return 1;

    if (&ro_ResData.fv_roGetResType() != &usnd::CProgramResType::fs_roGetInst())
        return 1;

    ro_ProgHdr = &((usnd::CProgramResData&)ro_ResData).m_oHdr;
    czStrTheme = "OnIsTheme";

    if (ro_ProgHdr->f_uiGetHandlerId(czStrTheme) == ro_ProgHdr->m_oHandlerIds.size())
        return 1;

    pParams = m_oResObjParams.m_poNext;
    while (pParams && pParams->m_poResData != &ro_ResData)
        pParams = pParams->m_poNext;
    if (pParams)
    {
        uiObjNum = mpoActorObj->m_oProgramContext.fv_uiGetRunningObjsWithUserData(pParams, -1, apObjects, 100);
        for (uiResult = 0; uiResult < uiObjNum; uiResult++)
        {
            CBoolRefParam oBoolRef;
            apObjects[uiResult]->fv_vExecCmd(4, &oBoolRef);
            if (oBoolRef.f_bGetValue() == true)
                return 0;
        }
    }
    return 1;
}

namespace usnd {
float FASTPS2SQRTF(float f);
template <class T> struct TTypedVar {
    const T& f_oGetValue(void);
    void f_vSetValue(T oValue);
};
}
float int2dB(int s32_volume);

inline bool fn_bDiffers(const V3Ds& roA, float fX, float fY, float fZ)
{
    return fX != roA.fX || fY != roA.fY || fZ != roA.fZ;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 589–646 */
/* addr: 0x001ce790  size: 564 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 589
 *   +0x0004 -> line 592
 *   +0x0008 -> line 589
 *   +0x001c -> line 592
 *   +0x0028 -> line 593
 *   +0x0030 -> line 598
 *   +0x004c -> line 599
 *   +0x0054 -> line 603
 *   +0x005c -> line 608
 *   +0x0060 -> line 603
 *   +0x0064 -> line 604
 *   +0x0070 -> line 608
 *   +0x00cc -> line 610
 *   +0x00e0 -> line 613
 *   +0x010c -> line 616
 *   +0x0110 -> line 618
 *   +0x0114 -> line 616
 *   +0x011c -> line 618
 *   +0x0178 -> line 623
 *   +0x0190 -> line 627
 *   +0x0194 -> line 624
 *   +0x0198 -> line 627
 *   +0x019c -> line 624
 *   +0x01a4 -> line 627
 *   +0x01c8 -> line 630
 *   +0x01e0 -> line 631
 *   +0x01e8 -> line 634
 *   +0x01f0 -> line 635
 *   +0x01f8 -> line 638
 *   +0x0200 -> line 640
 *   +0x0218 -> line 645
 *   +0x021c -> line 646
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bApplyPositionAndVelocity(void)
{
    float f32_Value;
    C3DParam* ro_Params;
    _stVector stPos;
    _stVector stVelocity;

    if (ms32ACPObjectId == -1)
        return 1;
    if (!mpoActorType->mstIActor.pfnPosition(ms32ACPObjectId, ms32ACPChannelId, &stPos))
        return 0;

    ro_Params = &mpoActorObj->f_roGet3DParams();
    if (fn_bDiffers(ro_Params->m_oPos, stPos.f32x, stPos.f32y, stPos.f32z))
        mpoActorObj->fv_vApply3DParams();

    if (meExtraCoeff && mpoActorType->mstIActor.pfnVelocity(ms32ACPObjectId, ms32ACPChannelId, &stVelocity))
    {
        if (fn_bDiffers(ro_Params->m_oSpeed, stVelocity.f32x, stVelocity.f32y, stVelocity.f32z))
        {
            float fDist = usnd::FASTPS2SQRTF(stVelocity.f32x * stVelocity.f32x + stVelocity.f32y * stVelocity.f32y + stVelocity.f32z * stVelocity.f32z);
            f32_Value = mfCoeffB + mfCoeffA * fDist;
            switch (meExtraCoeff)
            {
            case EVOLUMEEVENT:
                ((usnd::TTypedVar<float>*)mpoVolumeModifier)->f_vSetValue(int2dB((int)f32_Value));
                break;
            case EPITCHEVENT:
                ((usnd::TTypedVar<float>*)mpoPitchModifier)->f_vSetValue(f32_Value);
                break;
            case EEXTRAEVENT:
                ((usnd::TTypedVar<float>*)mpoVolumeModifier)->f_vSetValue(f32_Value);
                ((usnd::TTypedVar<float>*)mpoPitchModifier)->f_vSetValue(mfCoeffD + mfCoeffC * fDist);
                break;
            }
        }
    }
    return 1;
}

inline void fn_vSendRolloff(CActorResObj* po, const CRolloffParam& ro)
{
    po->fv_vExecCmd(0x44C, (void*)&ro);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 545–586 */
/* addr: 0x001ce9d0  size: 576 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 545
 *   +0x0028 -> line 548
 *   +0x002c -> line 552
 *   +0x0044 -> line 554
 *   +0x004c -> line 560
 *   +0x0050 -> line 562
 *   +0x0058 -> line 560
 *   +0x005c -> line 562
 *   +0x0098 -> line 564
 *   +0x00b4 -> line 571
 *   +0x00c8 -> line 572
 *   +0x01c8 -> line 573
 *   +0x01d4 -> line 574
 *   +0x01ec -> line 575
 *   +0x01f8 -> line 576
 *   +0x01fc -> line 580
 *   +0x0210 -> line 582
 *   +0x0218 -> line 585
 *   +0x021c -> line 586
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bApplyAllParams(bool bforce)
{
    unsigned char b_Answer;
    CActorProgramContext* poContext = &mpoActorObj->m_oProgramContext;
    unsigned char bApply;

    if (ms32RefreshChannel != ss32CurrentRefreshChannel && !bforce)
        return 1;

    b_Answer = ms32ACPObjectId == -1;
    bApply = 1;
    {
        bool bBusy = PostponedPlay::fs_bIsPending(this) || poContext->fv_bAreThereRunningObjs();
        if (!bBusy && !bforce)
            bApply = 0;
    }

    if (!b_Answer && bApply && !mbWaitForKill)
    {
        unsigned char bNoObject;
        _RollOffParam stRollOff;

        mbWaitForKill = !mfn_bApplyPositionAndVelocity();
        bNoObject = ms32ACPObjectId == -1;
        if (!bNoObject && mpoActorType->mstIActor.pfnRollOff(ms32ACPObjectId, ms32ACPChannelId, &stRollOff))
        {
            int iBackGround = stRollOff.rDistBackGround;
            if (iBackGround != mstRollOff.rDistBackGround || stRollOff.rDistSatur != mstRollOff.rDistSatur)
            {
                float fSatur = stRollOff.rDistSatur / 65536.0f;
                float fVolume = int2dB(stRollOff.ucBackgroundVol);
                fn_vSendRolloff(mpoActorObj, CRolloffParam(fSatur, iBackGround / 65536.0f, fVolume));
                mstRollOff.rDistBackGround = stRollOff.rDistBackGround;
                mstRollOff.rDistSatur = stRollOff.rDistSatur;
                mstRollOff.ucBackgroundVol = stRollOff.ucBackgroundVol;
            }
            bNoObject = 1;
        }
        {
            unsigned char bWait = !bNoObject;
            if (bWait)
                bWait = mbWaitForKill;
            mbWaitForKill = bWait;
        }
        if (mbWaitForKill)
            mpoActorObj->fv_vExecCmd(1, 0);
        mfn_bApplySectorActivation();
        b_Answer = 1;
    }

    if (bApply && !mbAllSoundPaused)
        mpoActorObj->f_vRefresh();
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 505–542 */
/* addr: 0x001cec10  size: 396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 505
 *   +0x0004 -> line 509
 *   +0x0008 -> line 505
 *   +0x0018 -> line 509
 *   +0x0024 -> line 517
 *   +0x004c -> line 523
 *   +0x0078 -> line 524
 *   +0x007c -> line 523
 *   +0x0088 -> line 524
 *   +0x00c8 -> line 527
 *   +0x0108 -> line 528
 *   +0x010c -> line 530
 *   +0x0120 -> line 532
 *   +0x0138 -> line 533
 *   +0x013c -> line 534
 *   +0x0144 -> line 535
 *   +0x0158 -> line 537
 *   +0x0170 -> line 538
 *   +0x0174 -> line 541
 *   +0x0178 -> line 542
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bApplySectorActivation(void)
{
    CLinkMicroCont::iterator it;
    unsigned char b_Answer;

    b_Answer = 1;
    if (ms32ACPObjectId != -1)
    {
        b_Answer = 0;
        for (it = CLinkMicroCont::mfn_roGetInstance().begin(); !b_Answer && it != CLinkMicroCont::mfn_roGetInstance().end(); ++it)
            b_Answer = (char)b_Answer | (char)(unsigned char)(mpoActorType->mstIActor.pfnMicroLink(ms32ACPObjectId, ms32ACPChannelId, (*it).first) ? 1 : 0);

        if (CLinkMicroCont::mfn_roGetInstance().begin() == CLinkMicroCont::mfn_roGetInstance().end())
            b_Answer = 1;

        if (!b_Answer && !mbAllSoundPaused)
        {
            mpoActorObj->fv_vExecCmd(2, 0);
            mbAllSoundPaused = 1;
        }
        else if (b_Answer && mbAllSoundPaused)
        {
            mpoActorObj->fv_vExecCmd(3, 0);
            mbAllSoundPaused = 0;
        }
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 436–448 */
/* addr: 0x001cedc0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 436
 *   +0x0010 -> line 440
 *   +0x001c -> line 441
 *   +0x0034 -> line 442
 *   +0x0040 -> line 443
 *   +0x0058 -> line 444
 *   +0x005c -> line 447
 *   +0x0060 -> line 444
 *   +0x0064 -> line 447
 *   +0x0080 -> line 448
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma auto_inline on
void CExtraEventActor::f_vDesInit(void)
{
    if (mpoVolumeModifier)
        delete mpoVolumeModifier;
    if (mpoPitchModifier)
        delete mpoPitchModifier;
    mpoVolumeModifier = mpoPitchModifier = 0;

    ss32RefreshChannelCount[ms32RefreshChannel]--;
}
#pragma auto_inline reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 422–432 */
/* addr: 0x001cee50  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 422
 *   +0x001c -> line 423
 *   +0x0028 -> line 425
 *   +0x0098 -> line 426
 *   +0x00b4 -> line 428
 *   +0x00c0 -> line 429
 *   +0x00d8 -> line 431
 *   +0x00f4 -> line 432
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CExtraEventActor::~CExtraEventActor()
{
    if (mpoActorObj)
    {
        f_vDesInit();
        delete mpoActorObj;
        if (m_poIntSwitchVar)
            delete m_poIntSwitchVar;
    }
}

extern "C" void SND_fn_vGetDefaultRollOff(_RollOffParam* pst_RollOff);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 330–418 */
/* addr: 0x001cef60  size: 632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 330
 *   +0x0004 -> line 336
 *   +0x0008 -> line 330
 *   +0x000c -> line 336
 *   +0x0010 -> line 330
 *   +0x0038 -> line 334
 *   +0x003c -> line 336
 *   +0x0048 -> line 338
 *   +0x006c -> line 339
 *   +0x0088 -> line 341
 *   +0x009c -> line 343
 *   +0x00a0 -> line 345
 *   +0x00c0 -> line 349
 *   +0x00cc -> line 352
 *   +0x00d4 -> line 354
 *   +0x00ec -> line 356
 *   +0x00f0 -> line 357
 *   +0x0114 -> line 363
 *   +0x0118 -> line 364
 *   +0x011c -> line 366
 *   +0x0120 -> line 370
 *   +0x0128 -> line 372
 *   +0x0130 -> line 373
 *   +0x0138 -> line 374
 *   +0x0140 -> line 375
 *   +0x0148 -> line 376
 *   +0x014c -> line 377
 *   +0x0154 -> line 380
 *   +0x0158 -> line 381
 *   +0x0168 -> line 388
 *   +0x0174 -> line 393
 *   +0x017c -> line 395
 *   +0x0180 -> line 393
 *   +0x0184 -> line 395
 *   +0x01a0 -> line 396
 *   +0x01c0 -> line 400
 *   +0x01e0 -> line 401
 *   +0x0200 -> line 407
 *   +0x0210 -> line 409
 *   +0x0224 -> line 410
 *   +0x0228 -> line 412
 *   +0x0230 -> line 410
 *   +0x0238 -> line 411
 *   +0x0240 -> line 412
 *   +0x0248 -> line 413
 *   +0x0250 -> line 415
 *   +0x0258 -> line 418
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::f_vInit(const CLinkTypeActor& ro_ActorType, int s32_ACPObjectId, int s32_ACPChannelId, const CEventResData* poResData)
{
    CFloatVarType* roFloatVarType;
    int i;
    int min;

    min = 0;
    for (i = 0; i < 5 && ss32RefreshChannelCount[i] != 0; i++)
    {
        if (ss32RefreshChannelCount[i] < ss32RefreshChannelCount[min])
            min = i;
    }
    if (i < 5)
        ms32RefreshChannel = i;
    else
        ms32RefreshChannel = min;
    ss32RefreshChannelCount[ms32RefreshChannel]++;

    if (mpoActorType != &ro_ActorType)
    {
        if (mpoActorType)
            mpoActorObj->m_oVolModifier.f_vRemoveVar(mpoActorType->mroVolumeModifier);
        mpoActorType = (CLinkTypeActor*)&ro_ActorType;
        mpoActorObj->m_oVolModifier.f_vAddVar(mpoActorType->mroVolumeModifier, 1.0f);
    }

    ms32ACPObjectId = s32_ACPObjectId;
    ms32ACPChannelId = s32_ACPChannelId;
    mbWaitForKill = 0;
    mbAllSoundPaused = 0;
    if (poResData)
    {
        meExtraCoeff = poResData->m_eEventType;
        mfCoeffA = poResData->m_fCoeffA;
        mfCoeffB = poResData->m_fCoeffB;
        mfCoeffC = poResData->m_fCoeffC;
        mfCoeffD = poResData->m_fCoeffD;
    }
    else
    {
        meExtraCoeff = (tdeEventType)0;
        mfCoeffA = mfCoeffB = mfCoeffC = mfCoeffD = 0.0f;
    }

    if (meExtraCoeff)
    {
        roFloatVarType = &CFloatVarType::fs_roGetInst();
        mpoVolumeModifier = roFloatVarType->fv_poCreateVar("Vol", 0);
        mpoPitchModifier = roFloatVarType->fv_poCreateVar("Pitch", 0);
        mpoActorObj->m_oVolModifier.f_vAddVar(mpoVolumeModifier, 1.0f);
        mpoActorObj->m_oPitchModifier.f_vAddVar(mpoPitchModifier, 1.0f);
    }

    if (ms32ACPObjectId != -1)
    {
        mpoActorType->mstIActor.pfnRollOff(ms32ACPObjectId, ms32ACPChannelId, &mstRollOff);
        mstRollOff.rDistSatur--;
        mstRollOff.rDistBackGround--;
        mfn_bApplyAllParams(true);
    }
    else
    {
        SND_fn_vGetDefaultRollOff(&mstRollOff);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 287–326 */
/* addr: 0x001cf1e0  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 287
 *   +0x0004 -> line 299
 *   +0x0008 -> line 287
 *   +0x0010 -> line 288
 *   +0x0014 -> line 299
 *   +0x0020 -> line 302
 *   +0x002c -> line 305
 *   +0x003c -> line 307
 *   +0x0044 -> line 311
 *   +0x0050 -> line 313
 *   +0x0064 -> line 320
 *   +0x0084 -> line 321
 *   +0x008c -> line 323
 *   +0x0094 -> line 326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::f_vInitActorObj(int s32_ACPObjectId)
{
    TTypedVar* pMarkerVar;
    CActorResData* poActorResData;

    ms32ACPObjectId = s32_ACPObjectId;

    if (ms32ACPObjectId != -1) {
        poActorResData = CLinkTypeActorCont::mfn_roGetInstance().m_poStandardActorResData;
        mpoActorObj = (CActorResObj*)poActorResData->fv_poCreateResObj();
    } else {
        poActorResData = CLinkTypeActorCont::mfn_roGetInstance().m_poMusicActorResData;
        mpoActorObj = (CActorResObj*)poActorResData->fv_poCreateResObj();

        pMarkerVar = (TTypedVar*)mpoActorObj->m_oProgramContext.m_poOwnerVarAcc->fv_poGetVar("sMarker");
        if (pMarkerVar)
            pMarkerVar->f_vAddNotifTarget(g_oMusicMarkerNotifTarget);
    }
}

/* The constructor and f_vIsolate are defined out of line (original lines
 * 251-256 and 232-239) and marked auto_inline, so that fs_poGetAnActor
 * inlines them while the standalone symbols are still emitted.
 *
 * E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 251–256 */
/* addr: 0x001cf290  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 251
 *   +0x0024 -> line 256
 *   +0x0028 -> line 251
 *   +0x004c -> line 256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 232–239 */
/* addr: 0x001cf320  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 232
 *   +0x000c -> line 233
 *   +0x0014 -> line 234
 *   +0x0020 -> line 235
 *   +0x0028 -> line 237
 *   +0x002c -> line 239
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma auto_inline on
CExtraEventActor::CExtraEventActor()
    : m_poNext(0), m_poPrevious(0), m_poIntSwitchVar(0), mpoActorObj(0),
      mpoVolumeModifier(0), mpoPitchModifier(0), mpoActorType(0)
{
}

void CExtraEventActor::f_vIsolate(void)
{
    if (m_poPrevious)
        m_poPrevious->m_poNext = m_poNext;
    if (m_poNext)
        m_poNext->m_poPrevious = m_poPrevious;
    m_poPrevious = m_poNext = 0;
}
#pragma auto_inline reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 173–174 */
/* addr: 0x001cf360  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 173
 *   +0x0008 -> line 174
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::CResObjParams::fv_vAddRef(void)
{
    m_uiNbRefs++;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 156–168 */
/* addr: 0x001cf370  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 156
 *   +0x000c -> line 157
 *   +0x0018 -> line 158
 *   +0x0024 -> line 161
 *   +0x0030 -> line 162
 *   +0x0038 -> line 164
 *   +0x0064 -> line 165
 *   +0x0068 -> line 164
 *   +0x006c -> line 165
 *   +0x0094 -> line 168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::CResObjParams::fv_vRelease(void)
{
    m_uiNbRefs--;
    if (m_uiNbRefs == 0) {
        if (m_pfn_Proc)
            m_pfn_Proc(m_s32Handle);

        f_vIsolate();
        CResObjParamsPool::f_vSalvage(this);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 136–136 */
/* addr: 0x001cf420  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 136
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_iSetNbMusicMarkerSlots(int iNB)
{
    SND_g_iNbMusicMarkerSlots = iNB;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 131–131 */
/* addr: 0x001cf430  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_p_stSetMusicMarkerSlots(stMusicMarkerSlot* p_stPointer)
{
    SND_g_a_tdstMusicMarkerSlots = p_stPointer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 126–126 */
/* addr: 0x001cf440  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_iGetNbMusicMarkerSlots(void)
{
    return SND_g_iNbMusicMarkerSlots;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 121–121 */
/* addr: 0x001cf450  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 121
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
stMusicMarkerSlot* SND_fn_p_stGetMusicMarkerSlots(void)
{
    return SND_g_a_tdstMusicMarkerSlots;
}

extern "C" unsigned int strlen(const char* pc);
extern "C" int strncasecmp(const char* a, const char* b, unsigned int n);
extern "C" char* strncpy(char* d, const char* a, unsigned int n);
extern "C" void* memset(void* d, int v, unsigned int n);
extern "C" void* usnd_memcpy(void* d, const void* a, unsigned int n);

namespace usnd {
struct sstring {
    char* m_pcData;
    static char* ms_czNil;
    unsigned short f_usLength(void) const
    {
        if (m_pcData)
            return strlen(m_pcData);
        return 0;
    }
    void f_vAssign(const char* pc, unsigned int usLen)
    {
        if (!usLen)
            m_pcData = ms_czNil;
        else
        {
            m_pcData = (char*)usnd_malloc(usLen + 1);
            usnd_memcpy(m_pcData, pc, usLen + 1);
        }
    }
    sstring(const sstring& ro) { f_vAssign(ro.m_pcData, ro.f_usLength()); }
    ~sstring() { if (m_pcData != ms_czNil) usnd_free(m_pcData); }
};
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 92–109 */
/* addr: 0x001cf460  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 92
 *   +0x0004 -> line 93
 *   +0x0008 -> line 92
 *   +0x0014 -> line 93
 *   +0x0070 -> line 96
 *   +0x007c -> line 98
 *   +0x0084 -> line 100
 *   +0x00b0 -> line 102
 *   +0x00c8 -> line 103
 *   +0x00e4 -> line 104
 *   +0x00e8 -> line 103
 *   +0x00ec -> line 105
 *   +0x0104 -> line 106
 *   +0x0134 -> line 107
 *   +0x016c -> line 108
 *   +0x0184 -> line 109
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CMusicMarkerNotifTarget::fv_vVarChanged(CVar& roVar)
{
    int i;
    usnd::sstring szMarker(((usnd::TTypedVar<usnd::sstring>&)roVar).f_oGetValue());

    if (SND_g_a_tdstMusicMarkerSlots)
    {
        for (i = 0; i < SND_g_iNbMusicMarkerSlots - 1; i++)
        {
            const char* pcMarker = szMarker.m_pcData;
            if (!strncasecmp(SND_g_a_tdstMusicMarkerSlots[i].szName, pcMarker, strlen(SND_g_a_tdstMusicMarkerSlots[i].szName)))
            {
                memset((void*)SND_g_a_tdstMusicMarkerSlots[i].szBuffer, 0, SND_g_a_tdstMusicMarkerSlots[i].iBufferSize);
                strncpy((char*)SND_g_a_tdstMusicMarkerSlots[i].szBuffer, szMarker.m_pcData, SND_g_a_tdstMusicMarkerSlots[i].iBufferSize - 1);
            }
        }
        memset(*(void**)(((int)SND_g_a_tdstMusicMarkerSlots - 8) + SND_g_iNbMusicMarkerSlots * 40), 0, *(int*)(((int)SND_g_a_tdstMusicMarkerSlots - 4) + SND_g_iNbMusicMarkerSlots * 40));
        strncpy(*(char**)(((int)SND_g_a_tdstMusicMarkerSlots - 8) + SND_g_iNbMusicMarkerSlots * 40), szMarker.m_pcData, *(int*)(((int)SND_g_a_tdstMusicMarkerSlots - 4) + SND_g_iNbMusicMarkerSlots * 40) - 1);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 110–110 */
/* addr: 0x001cf600  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CMusicMarkerNotifTarget::fv_vVarDestroyed(CVar& roVar)
{
}
