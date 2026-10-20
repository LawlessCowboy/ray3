/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesccont.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern "C" unsigned int strlen(const char* pch_Str);
extern "C" void* usnd_malloc(unsigned int ui_Size);
extern "C" void usnd_memcpy(void* pv_Dest, void* pv_Src, unsigned int ui_Size);
extern "C" void usnd_free(void* pv_Ptr);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct iterator iterator;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
namespace usnd { struct CUUID; }
typedef usnd::CUUID CUUID;
namespace usnd { struct sstring; }
typedef usnd::sstring sstring;
typedef struct CPS2IdObjInfo CPS2IdObjInfo;
typedef struct less less;
typedef struct stree stree;
typedef struct smap smap;
namespace usnd { struct CResData; }
typedef usnd::CResData CResData;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct TTypedVar TTypedVar;
typedef struct CPS2IdObjLoader CPS2IdObjLoader;
typedef struct CBankDescCont CBankDescCont;
typedef struct CResObj CResObj;
typedef struct sallocator sallocator;
struct sallocator { int data[4]; };
typedef struct iterator_base iterator_base;
typedef struct sset sset;
typedef struct CVar CVar;
typedef struct CCritSect CCritSect;
typedef struct CBankDesc CBankDesc;
typedef struct CResObjState CResObjState;
typedef struct sTreeLink sTreeLink;
typedef struct CRolloffParam CRolloffParam;
typedef struct CActorResData CActorResData;
typedef union CVal CVal;
typedef struct CBoolRefParam CBoolRefParam;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CIndexAllocator CIndexAllocator;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CCmdInterface CCmdInterface;
typedef struct CResType CResType;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct C2DParams C2DParams;
typedef struct CActorResObj CActorResObj;
typedef struct CAllocBlock CAllocBlock;
typedef struct CActorModifiers CActorModifiers;
typedef struct CSndVarType CSndVarType;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct _stVector _stVector;
typedef struct PostponedPlay PostponedPlay;
typedef struct streebase streebase;
namespace usnd { struct CIdObj; }
typedef usnd::CIdObj CIdObj;
typedef struct CStringIsLess CStringIsLess;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef struct CProgramContext CProgramContext;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct CLookupElement CLookupElement;
typedef struct CEventResData CEventResData;
namespace usnd { struct CRefIdObj; }
typedef usnd::CRefIdObj CRefIdObj;

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

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct spair {
    iterator first; /* +0x0 */
    unsigned char second; /* +0x4 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct sTreeNode : sTreeLink {
    spair m_oValue; /* +0x10 */
};

struct usnd::CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct usnd::sstring {
    char* m_pcData; /* +0x0 */
    static char* ms_czNil;
    void _Init(const char* pch_Str, unsigned int ui_Length);
    bool operator<(const sstring& ro_Other) const;
};

struct CPS2IdObjInfo {
    CUUID m_oId; /* +0x0 */
    unsigned int m_uiOffset; /* +0x8 */
    sstring m_strFileName; /* +0xc */
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

struct smap {
    stree _Tr; /* +0x0 */
};

struct usnd::CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct usnd::CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
};

struct usnd::CResData : CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
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
};

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x8..0xb */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
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

/* Container templates recovered from the retail symbol names: the map is
   usnd::smap<K,T,CMP,ALLOC> on top of
   usnd::stree<K, spair<const K,T>, smap<K,T,CMP,ALLOC>::_Kfn, CMP, ALLOC>,
   the set is usnd::sset<K,CMP,ALLOC> on top of
   usnd::stree<K, K, sset<K,CMP,ALLOC>::_Kfn, CMP, ALLOC>. */
namespace usnd {

struct binary_function {
    binary_function(void) {}
};

template <class T> struct less : binary_function {
};

template <class T> struct sallocator {
};

template <class T1, class T2> struct spair {
    T1 first;
    T2 second;
    spair(void) {}
    spair(const T1& ro_First, const T2& ro_Second) : first(ro_First), second(ro_Second) {}
};

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

template <class K, class V, class KFN, class CMP, class ALLOC>
struct stree : streebase {
    struct sTreeNode : sTreeLink {
        V m_oValue; /* +0x10 */
    };
    struct iterator : iterator_base {
        iterator(void) {}
        /* The retail has no iterator(sTreeLink*) overload: the pointer
         * constructor takes sTreeNode* and forwards to the base's
         * iterator_base(sTreeLink*) constructor. */
        iterator(sTreeNode* po_Node) : iterator_base((sTreeLink*)po_Node) {}
        V& operator*(void) const { return ((sTreeNode*)_Ptr)->m_oValue; }
        iterator& operator++(void) { _Inc(); return *this; }
        bool operator==(const iterator& ro_It) const { return _Ptr == ro_It._Ptr; }
        bool operator!=(const iterator& ro_It) const { return !(*this == ro_It); }
    };
    stree(const CMP& ro_Compare = CMP(), bool b_Multi = false, const ALLOC& ro_Alloc = ALLOC());
    sTreeLink* _Lmost(void);
    sTreeLink* _Lbound(const K& ro_Key) const;
    void insert(const V& ro_Value);
    iterator begin(void) { return iterator((sTreeNode*)_Lmost()->m_poLeft); }
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

template <class K, class CMP, class ALLOC>
struct sset {
    struct _Kfn {
    };
    typedef stree<K, K, _Kfn, CMP, ALLOC> _Imp;
    _Imp _Tr; /* +0x0 */
};

}

struct CPS2IdObjLoader {
    smap m_oIdObjsCache; /* +0x0 */
    smap m_oIndex; /* +0x10 */
};

struct CBankDescCont : usnd::smap<usnd::sstring, CBankDesc*, usnd::less<usnd::sstring>, usnd::sallocator<CBankDesc*> > {
    CPS2IdObjLoader moLoader; /* +0x10 */
    CBankDesc* mfn_poAddBankDesc(const char* pch_FileName);
};

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

typedef usnd::spair<const usnd::sstring, CBankDesc* > TS_Pair;
typedef usnd::smap<usnd::sstring, CBankDesc*, usnd::less<usnd::sstring>, usnd::sallocator<CBankDesc*> >::_Imp::sTreeNode TS_TreeNode;

struct CBankDesc : usnd::sset<CResData*, usnd::less<CResData*>, usnd::sallocator<CResData*> > {
    CPS2IdObjLoader* mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
    static void* operator new(size_t ui_Size) { return usnd_malloc(ui_Size); }
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

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct CActorResData : usnd::CResData {
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
};

union CVal {
    int pcBool; /* +0x0 */
    TTypedVar* poBoolVar; /* +0x0 */
};

struct CBoolRefParam {
    unsigned int uiRefType; /* +0x0 */
    CVal m_uValue; /* +0x4 */
    unsigned int m_uiValue; /* +0x8 */
};

struct CActorProgramContext {
    /* C++ base CProgramContext at +0x0. */
    /* C++ base CVarAccess at +0xc. */
    CResObjState m_oObjStates; /* +0x10 */
    CActorResObj* m_pActor; /* +0x38 */
    smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
};

struct CIndexAllocator {
    CAllocBlock* m_poAllocBlocks; /* +0x0 */
    char m_cRootNodeBuffer[40]; /* +0x4 */
    unsigned int m_uiNbAllocs; /* +0x2c */
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

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct CPitchActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
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

struct CAllocBlock {
    CAllocBlock* m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
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

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct PostponedPlay {
    PostponedPlay* m_pNext; /* +0x0 */
    PostponedPlay* m_pPrev; /* +0x4 */
    CEventResData* m_pData; /* +0x8 */
    int m_s32Handle; /* +0xc */
    int m_s32LastCmd; /* +0x10 */
    void (*m_pProc)(int); /* +0x14 */
    CExtraEventActor* m_pEActor; /* +0x18 */
    unsigned int m_u32EngineContext; /* +0x1c */
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct CLinkTypeActorCont : smap {
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct CEventResData : CResData {
    float m_fCoeffA; /* +0x18 */
    float m_fCoeffB; /* +0x1c */
    float m_fCoeffC; /* +0x20 */
    float m_fCoeffD; /* +0x24 */
    tdeEventType m_eEventType; /* +0x28 */
    CIdObjPtr m_pTargetRes; /* +0x2c */
};


/* Text file source classes.  CFlow is the virtual base of CSrcFlow, so
   CPS2FileSrcFlow carries MWCC's hidden virtual-base constructor argument and
   stores the virtual base after its own members (the object layout recovered
   from the retail debug records: vbase pointer at +0x0, vtable pointer at
   +0x4, members at +0x8..+0x1f, virtual base at +0x20). */
/* ERamLocation is a global enumeration in the retail sources. */
typedef enum _ERamLocation {
    E_RamLocation_RAM = 0,
} _ERamLocation;

namespace usnd {

class CFlow {
public:
    virtual bool fv_bIsEnd(void);
};

class CSrcFlow : public virtual CFlow {
public:
};

class CPS2FileSrcFlow : public CSrcFlow {
public:
    CPS2FileSrcFlow(void);
    virtual bool fv_bIsEnd(void);
    virtual unsigned int fv_uiRead(void* p_Buffer, unsigned int ui_Size, unsigned int ui_Nb);
    virtual ~CPS2FileSrcFlow();
    unsigned int m_uiFileHandle; /* +0x8 */
    unsigned int m_uiFileOffset; /* +0xc */
    unsigned int m_uiSize; /* +0x10 */
    unsigned int m_uiPos; /* +0x14 */
    unsigned int m_uiEndPos; /* +0x18 */
    unsigned char m_bUseCache; /* +0x1c */
    bool f_bOpen(const char* pch_FilePath, _ERamLocation e_RamLocation);
};

}

struct CTextFile {
    usnd::CPS2FileSrcFlow m_File; /* +0x0 */
    usnd::sstring mostringName; /* +0x28 */
    unsigned char m_bOpened; /* +0x2c */
    int eState; /* +0x30 */
};

struct CTextFileSrc : CTextFile {
    CTextFileSrc(const char* pch_FilePath);
    int eCTextFileSrc; /* +0x34 */
    char* mpchBuffer1; /* +0x38 */
    char* mpchBuffer2; /* +0x3c */
    char* mpchBufferEnd; /* +0x40 */
    char mchBuffer[2048]; /* +0x44 */
    char* mpchCurrent; /* +0x844 */
    unsigned int mdwPosition; /* +0x848 */
};



























































/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesccont.cpp lines 30–40 */
/* addr: 0x0018beb0  size: 304 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 30
 *   +0x00ac -> line 36
 *   +0x00b4 -> line 37
 *   +0x00c0 -> line 38
 *   +0x00f8 -> line 39
 *   +0x011c -> line 40
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Reconstruction in progress: 296/304 bytes, 5/5 relocations match.  Two
   MWCC codegen residuals remain (the retail keeps 'this' in two stack slots
   around the CPS2FileSrcFlow base-constructor call, and it materialises the
   "read == 0x400" test as a value instead of branching on the argument
   register); see the recorded attempt in config/matches.json. */
CTextFileSrc::CTextFileSrc(const char* pch_FilePath) { mostringName._Init(pch_FilePath, strlen(pch_FilePath)); m_bOpened = 0; unsigned short us_Len = mostringName.m_pcData ? (unsigned short)strlen(mostringName.m_pcData) : 0; if (us_Len) m_bOpened = m_File.f_bOpen(mostringName.m_pcData, E_RamLocation_RAM); mpchBuffer1 = &mchBuffer[0]; mpchBuffer2 = &mchBuffer[1024]; mpchBufferEnd = &mchBuffer[2048];

    mdwPosition = 0;
    mpchCurrent = mpchBuffer1;
    if (m_bOpened && m_File.fv_uiRead(mpchBuffer1, 1, 0x400) == 0x400)
    { if (m_bOpened) { m_File.fv_uiRead(mpchBuffer2, 1, 0x400); } }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesccont.cpp lines 63–68 */
/* addr: 0x0018cad0  size: 468 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 63
 *   +0x0020 -> line 64
 *   +0x005c -> line 66
 *   +0x0120 -> line 67
 *   +0x01b8 -> line 68
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Reconstruction in progress: 380/468 bytes, 18/18 relocations match.  The
   remaining differences are the callee-saved register assignment, the extra
   local the retail passes to insert(), and the shape of the map lookup; see
   the recorded attempt in config/matches.json. */
CBankDesc* CBankDescCont::mfn_poAddBankDesc(const char* pch_FileName)
{
    char* pch_Copy;
    CBankDesc* po_BankDesc;
    unsigned int ui_Len;
    usnd::sstring o_Key;

    ui_Len = strlen(pch_FileName);
    if (ui_Len)
    {
        pch_Copy = (char*)usnd_malloc(ui_Len + 1);
        usnd_memcpy(pch_Copy, (void*)pch_FileName, ui_Len + 1);
    }
    else
    {
        pch_Copy = usnd::sstring::ms_czNil;
    }

    po_BankDesc = new CBankDesc;
    if (po_BankDesc)
    {
        po_BankDesc->mroLoader = &moLoader;
        po_BankDesc->mostringName._Init(pch_FileName, strlen(pch_FileName));
    }

    o_Key.m_pcData = pch_Copy;
    {
        TS_Pair o_Pair;
        ((usnd::sstring*)&o_Pair.first)->_Init(pch_Copy, (unsigned short)strlen(pch_Copy));
        o_Pair.second = po_BankDesc;
        _Tr.insert(o_Pair);
    }
    if (o_Key.m_pcData != usnd::sstring::ms_czNil)
        usnd_free(o_Key.m_pcData);

    {
        usnd::streebase::sTreeLink* po_Link = _Tr._Lbound(o_Key);
        usnd::smap<usnd::sstring, CBankDesc*, usnd::less<usnd::sstring>, usnd::sallocator<CBankDesc*> >::iterator it((TS_TreeNode*)po_Link);
        usnd::smap<usnd::sstring, CBankDesc*, usnd::less<usnd::sstring>, usnd::sallocator<CBankDesc*> >::iterator itEnd((TS_TreeNode*)_Tr._HeadLink);

        if (it == itEnd || o_Key < (*it).first)
        {
            po_BankDesc = NULL;
        }
        else
        {
            po_BankDesc = (*it).second;
        }
    }

    return po_BankDesc;
}
