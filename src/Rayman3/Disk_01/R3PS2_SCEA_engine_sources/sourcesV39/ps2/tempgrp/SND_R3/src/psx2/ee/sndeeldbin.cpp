/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef union _tduRefRes _tduRefRes;
typedef struct _tdstInfoTrackMem _tdstInfoTrackMem;
typedef struct iterator iterator;
typedef struct spair spair;
typedef struct _tdstTypeSwitchMem _tdstTypeSwitchMem;
typedef struct _tdstTypeThemeMem _tdstTypeThemeMem;
typedef struct CIndexAllocator CIndexAllocator;
typedef struct less less;
typedef struct stree stree;
namespace usnd { struct CSwitchResData; }
typedef usnd::CSwitchResData CSwitchResData;
namespace usnd { struct CUUID; }
typedef usnd::CUUID CUUID;
typedef struct sTreeNode sTreeNode;
typedef struct smap smap;
typedef struct sTreeLink sTreeLink;
typedef struct _tdstRandomElement _tdstRandomElement;
namespace usnd { struct sstring; }
typedef usnd::sstring sstring;
typedef struct CBankDesc CBankDesc;
typedef struct iterator_base iterator_base;
typedef struct _tdstThemePartOutro _tdstThemePartOutro;
typedef struct _stCdBlock _stCdBlock;
typedef struct _tdstThemePart _tdstThemePart;
namespace usnd { class CSrcFlow; }
typedef usnd::CSrcFlow CSrcFlow;
typedef struct CAllocBlock CAllocBlock;
namespace usnd { struct CPS2IdObjLoader; }
typedef usnd::CPS2IdObjLoader CPS2IdObjLoader;
namespace usnd { class CPS2FileSrcFlow; }
typedef usnd::CPS2FileSrcFlow CPS2FileSrcFlow;
typedef struct _tdstTypeRandomMem _tdstTypeRandomMem;
typedef struct _stMemBlockA _stMemBlockA;
typedef struct stSampleMemory stSampleMemory;
typedef struct stSampleCDStreaming stSampleCDStreaming;
typedef union _tduDataSample _tduDataSample;
typedef struct _tdstRangeSplitListMem _tdstRangeSplitListMem;
typedef struct _tdstTypeSplitMem _tdstTypeSplitMem;
typedef struct _tdstTypeSampleMem _tdstTypeSampleMem;
typedef struct _tdstMidiMemory _tdstMidiMemory;
typedef struct _tdstMidiStreaming _tdstMidiStreaming;
typedef union _tduDataMidi _tduDataMidi;
typedef struct _tdstTypeMidiMem _tdstTypeMidiMem;
typedef struct _tdstTypeCD _tdstTypeCD;
typedef struct _tdstInfoTrackList _tdstInfoTrackList;
typedef struct _tdstTypeSequenceMem _tdstTypeSequenceMem;
typedef union _tduResMem _tduResMem;
typedef struct _tdstBlockResourceMem _tdstBlockResourceMem;
typedef struct CSwitchElement CSwitchElement;
namespace usnd { struct CResData; }
typedef usnd::CResData CResData;
namespace usnd { template <class T> struct CIdObjPtr; }
typedef usnd::CIdObjPtr<CResData> CIdObjPtr;
typedef struct CEventResData CEventResData;
typedef struct sset sset;
typedef struct CBankDescCont CBankDescCont;
typedef struct _tdstRangeSplitMem _tdstRangeSplitMem;
namespace usnd { struct CIdObj; }
typedef usnd::CIdObj CIdObj;
typedef struct CLookupElement CLookupElement;
typedef struct streebase streebase;
typedef struct CTextFile CTextFile;
typedef struct _tdstSwitchElement _tdstSwitchElement;
typedef struct CRefIdObj CRefIdObj;
namespace usnd { struct CPS2IdObjInfo; }
typedef usnd::CPS2IdObjInfo CPS2IdObjInfo;
typedef struct CTextFileSrc CTextFileSrc;

typedef enum tdeTypeStorage {
    TYPE_EXTERNAL = 0,
    TYPE_MEGAFILE = 1,
    TYPE_BIGFILE = 2,
    STORAGE_FOR_ALIGNEMENT = 321148536,
} tdeTypeStorage;

typedef enum tdeTypeZip {
    SAMPLE_INVALID = 0,
    SAMPLE_PCM = 1,
    SAMPLE_MPEG = 2,
    SAMPLE_AIFF = 3,
    SAMPLE_ADPCM = 4,
    SAMPLE_ADPCM_TO_CONVERT = 5,
    SAMPLE_FOR_ALIGNEMENT = 321148536,
} tdeTypeZip;

typedef enum _tdeTypeTransition {
    TRANSITION_CROSSFADE = 0,
    TRANSITION_ATENDOFPART = 1,
    TRANSITION_OUTRO = 2,
    TRANSITION_FOR_ALIGNEMENT = 321148536,
} _tdeTypeTransition;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

typedef enum anon_enum_001a827b {
    E_INVALID_SIZE = -1,
} anon_enum_001a827b;

typedef enum _tdeTypeResource {
    TYPE_INVALID = 0,
    TYPE_SAMPLE = 1,
    TYPE_MIDI = 2,
    TYPE_CDAUDIO = 3,
    TYPE_SEQUENCE = 4,
    TYPE_SWITCH_OLD = 5,
    TYPE_SPLIT = 6,
    TYPE_THEME_OLD = 7,
    TYPE_SWITCH = 8,
    TYPE_THEME_OLD2 = 9,
    TYPE_RANDOM = 10,
    TYPE_THEME = 11,
    TYPE_FOR_ALIGNEMENT = 321148536,
} _tdeTypeResource;

typedef enum anon_enum_001a8842 {
    E_BUFFER_SIZE = 1024,
} anon_enum_001a8842;

typedef enum tdeEventType {
    EPLAYEVENT = 0,
    ESTOPEVENT = 1,
    EPITCHEVENT = 2,
    EVOLUMEEVENT = 3,
    EEXTRAEVENT = 4,
    ESTOPALLEVENT = 5,
    ESTOPANDGO = 6,
} tdeEventType;

union _tduRefRes {
    unsigned int Id; /* +0x0 */
    _tdstBlockResourceMem* pstPtr; /* +0x0 */
};

struct _tdstInfoTrackMem {
    unsigned int ulFadeIn; /* +0x0 */
    unsigned int ulFadeOut; /* +0x4 */
    unsigned int ulCrossFade; /* +0x8 */
    _tduRefRes uRes; /* +0xc */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct spair {
    iterator first; /* +0x0 */
    unsigned char second; /* +0x4 */
};

struct _tdstTypeSwitchMem {
    _tdstSwitchElement* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
    unsigned int ulNbElements; /* +0x8 */
    int lTypeSwitch; /* +0xc */
    int hDefault; /* +0x10 */
    int bDynamic : 1; /* bit 0, byte +0x14 */
    int bMaintainIfSwitched : 1; /* bit 1, byte +0x14 */
};

struct _tdstTypeThemeMem {
    unsigned int ulStartLoop; /* +0x0 */
    unsigned int ulEndLoopObsolet; /* +0x4 */
    unsigned int ulNbParts; /* +0x8 */
    _tdstThemePartOutro* pstPartOutro; /* +0xc */
    int rFadeDuration; /* +0x10 */
    unsigned int ulNbLoops; /* +0x14 */
    _tdstThemePart* hFirstElementOpt; /* +0x18 */
    int lNumberOfElementsOpt; /* +0x1c */
};

struct CIndexAllocator {
    CAllocBlock* m_poAllocBlocks; /* +0x0 */
    char m_cRootNodeBuffer[40]; /* +0x4 */
    unsigned int m_uiNbAllocs; /* +0x2c */
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
    CIndexAllocator allocator; /* +0xc */
    less key_compare; /* +0x3c */
};

extern "C" void* usnd_malloc(unsigned int ui_Size);
extern "C" void usnd_free(void* p_Mem);
extern "C" void* usnd_memcpy(void* p_Dst, const void* p_Src, unsigned int ui_Size);
extern "C" unsigned int strlen(const char*);

struct usnd::sstring {
    char* m_pcData; /* +0x0 */
    static char* ms_czNil;

    sstring(void) { m_pcData = ms_czNil; }
    sstring(const char* pch_Str) { _Init(pch_Str, strlen(pch_Str)); }
    ~sstring(void)
    {
        if (m_pcData != ms_czNil)
            usnd_free(m_pcData);
    }
    void _Init(const char* pch_Str, unsigned int ui_Length)
    {
        if (ui_Length == 0)
            m_pcData = ms_czNil;
        else {
            m_pcData = (char*)usnd_malloc(ui_Length + 1);
            usnd_memcpy(m_pcData, pch_Str, ui_Length + 1);
        }
    }
    const char* c_str(void) const { return m_pcData; }
};

struct usnd::CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */

    CUUID(void);
    CUUID(unsigned int ui_HighWord, unsigned int ui_LowWord)
    {
        m_uiHighWord = ui_HighWord;
        m_uiLowWord = ui_LowWord;
    }
};

/* The usnd set of CUUIDs that gs_oListToLoad holds (renamed Dinkumware
   xtree); only the members this unit uses are declared. */
struct CLesser {};
namespace usnd {
struct streebase {
    enum _Redbl {
        _Red = 0,
        _Black = 1
    };
    struct sTreeLink {
        sTreeLink* m_poLeft; /* +0x0 */
        sTreeLink* m_poParent; /* +0x4 */
        sTreeLink* m_poRight; /* +0x8 */
        _Redbl m_eColor; /* +0xc */
    };
    struct iterator_base {
        iterator_base(void) {}
        iterator_base(sTreeLink* po_Link);
        void _Inc(void);
        sTreeLink* _Ptr; /* +0x0 */
    };
    streebase(bool b_Multi) : _Multi(b_Multi) {}
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

template <class T> struct binary_function {
};

template <class T> struct less : binary_function<T> {
    bool operator()(const T& ro_Left, const T& ro_Right) const;
};

template <class T> struct sallocator {};

template <class T, int N> struct CIndexAllocator {
    CIndexAllocator(void);
    CIndexAllocator(const CIndexAllocator& ro_Other);
    ~CIndexAllocator(void);
    CAllocBlock* m_poAllocBlocks; /* +0x0 */
    char m_cRootNodeBuffer[N]; /* +0x4 */
    unsigned int m_uiNbAllocs;
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
        iterator(const iterator& ro_It) { _Ptr = ro_It._Ptr; }
        V& operator*(void) const { return ((sTreeNode*)_Ptr)->m_oValue; }
        iterator& operator++(void) { _Inc(); return *this; }
        bool operator!=(const iterator& ro_It) const { return !(_Ptr == ro_It._Ptr); }
    };
    stree(const CMP& ro_Pred, bool b_Multi, const ALLOC& ro_Alloc) : streebase(b_Multi), allocator(ro_Alloc), key_compare(ro_Pred)
    {
        _Init();
    }
    ~stree(void);
    void _Init(void);
    sTreeLink* _GetHead(void) const;
    sTreeLink*& _Lmost(void) { return _GetHead()->m_poLeft; }
    iterator begin(void) { return iterator(_Lmost()); }
    iterator end(void) { return iterator(_HeadLink); }
    iterator erase(iterator o_First, iterator o_Last);
    void clear(void) { erase(begin(), end()); }
    spair<iterator, bool> insert(const V& ro_Value);
    ALLOC allocator; /* +0xc */
    CMP key_compare; /* +0xd */
};

template <class K, class CMP, class ALLOC>
struct sset {
    struct _Kfn {};
    typedef stree<K, K, _Kfn, CMP, ALLOC> _Imp;
    typedef typename _Imp::iterator iterator;
    sset(const CMP& ro_Pred = CMP(), const ALLOC& ro_Alloc = ALLOC()) : _Tr(ro_Pred, false, ro_Alloc) {}
    iterator begin(void) { return _Tr.begin(); }
    iterator end(void) { return _Tr.end(); }
    spair<iterator, bool> insert(const K& ro_Value) { return _Tr.insert(ro_Value); }
    _Imp _Tr; /* +0x0 */
};

template <class K, class T, class CMP, class ALLOC>
struct smap {
    struct _Kfn {};
    typedef stree<K, spair<const K, T>, _Kfn, CMP, ALLOC> _Imp;
    smap(const CMP& ro_Pred = CMP(), const ALLOC& ro_Alloc = ALLOC()) : _Tr(ro_Pred, false, ro_Alloc) {}
    _Imp _Tr; /* +0x0 */
};
}

typedef usnd::sset<CUUID, CLesser, usnd::sallocator<CUUID> > TS_UUIDSet;

namespace usnd {
struct CRTTIClass {
    /* C++ base with a virtual destructor: the vtable pointer sits at +0x0. */
    virtual ~CRTTIClass();
};
}

struct usnd::CIdObj : usnd::CRTTIClass {
    CUUID m_oId; /* +0x4 */
};

struct CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

/* usnd::CIdObjPtr<T> is a template in the retail sources; its const member
   __rf mangles to __rf__Q24usnd27CIdObjPtr<Q24usnd8CResData>CFv, and the
   conversion operator to CResData* to
   __opPQ24usnd8CResData__Q24usnd27CIdObjPtr<Q24usnd8CResData>CFv. */
namespace usnd {
template <class T> struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
    operator T*() const
    {
        if (m_poElmt)
            return (T*)m_poElmt->m_poIdObj;
        return NULL;
    }
    const CUUID& f_roGetId(void) const;
};
}

/* The retail object file of this unit carries an out-of-line copy of that
   conversion operator although no function of the unit calls it: the retail
   compiler emits a copy of every member of an instantiated class template.
   MWCC only emits one when the address of the member is taken, so keep that
   reference here. */
typedef usnd::CResData* (usnd::CIdObjPtr<usnd::CResData>::*PFN_CONVERT)(void) const;
static PFN_CONVERT ms_pfnConvert =
    (PFN_CONVERT)&usnd::CIdObjPtr<usnd::CResData>::operator usnd::CResData*;

struct usnd::CResData : CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct usnd::CSwitchResData : CResData {
    unsigned int m_uiNbElmts; /* +0x18 */
    unsigned int m_uiInfoType; /* +0x1c */
    unsigned int m_uiDefaultIndex; /* +0x20 */
    float m_fVolume; /* +0x24 */
    CSwitchElement* m_paElements; /* +0x28 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct sTreeNode : sTreeLink {
    CUUID m_oValue; /* +0x10 */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct _tdstRandomElement {
    _tduRefRes uRes; /* +0x0 */
    int rProb; /* +0x4 */
    int bCanBeChosenTwice; /* +0x8 */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CBankDesc : sset {
    CPS2IdObjLoader* mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
    CResData* mfn_poAddCResDataAlone(const CUUID& ro_Id);
    CResData* mfn_poAddCResData(const CUUID& ro_Id);
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct _tdstThemePartOutro {
    _tduRefRes uRes; /* +0x0 */
    _tdeTypeTransition eTransition; /* +0x4 */
    int rFadeDuration; /* +0x8 */
};

struct _stCdBlock {
    unsigned int u32Size; /* +0x0 */
    unsigned int u32Sector; /* +0x4 */
};

struct _tdstThemePart {
    _tduRefRes uRes; /* +0x0 */
    int bLoopStart : 1; /* bit 0, byte +0x4 */
    int bLoopEnd : 1; /* bit 1, byte +0x4 */
    int lNbLoops; /* +0x8 */
    _tdeTypeTransition eTransition; /* +0xc */
    int rFadeDuration; /* +0x10 */
};

/* Text file source classes.  CFlow is the virtual base of CSrcFlow, so
   CPS2FileSrcFlow carries MWCC's hidden virtual-base constructor argument and
   stores the virtual base after its own members (the object layout recovered
   from the retail debug records: vbase pointer at +0x0, vtable pointer at
   +0x4, members at +0x8..+0x1f, virtual base at +0x20). */
namespace usnd {

class CFlow {
public:
    virtual bool fv_bIsEnd(void);
    int m_data; /* +0x4 */
};

class CSrcFlow : public virtual CFlow {
public:
};

class CPS2FileSrcFlow : public CSrcFlow {
public:
    unsigned int m_uiFileHandle; /* +0x8 */
    unsigned int m_uiFileOffset; /* +0xc */
    unsigned int m_uiSize; /* +0x10 */
    unsigned int m_uiPos; /* +0x14 */
    unsigned int m_uiEndPos; /* +0x18 */
    unsigned char m_bUseCache; /* +0x1c */
    ~CPS2FileSrcFlow(void);
    static void fs_vStopCache(void);
    static void fs_vUseCache(void* p_Buffer, unsigned int ui_Size);
};

}

struct CAllocBlock {
    CAllocBlock* m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct usnd::CPS2IdObjInfo {
    CUUID m_oId; /* +0x0 */
    unsigned int m_uiOffset; /* +0x8 */
    sstring m_strFileName; /* +0xc */
};

struct usnd::CPS2IdObjLoader {
    smap<CUUID, CIdObj*, less<CUUID>, sallocator<CIdObj*> > m_oIdObjsCache; /* +0x0 */
    smap<CUUID, CPS2IdObjInfo, less<CUUID>, CIndexAllocator<CPS2IdObjInfo, 40> > m_oIndex; /* +0x10 */
    unsigned char f_bLoadBank(const char* pch_FileName);
    void fv_FlushCache(void);
    void f_vClearIndex(void);
};

struct _tdstTypeRandomMem {
    unsigned int ulNbElements; /* +0x0 */
    int rProbNothing; /* +0x4 */
    int bNothingCanBeChosenTwice; /* +0x8 */
    int lLastElementChoosen; /* +0xc */
    int lLastResChoosen; /* +0x10 */
    _tdstRandomElement* hFirstElementOpt; /* +0x14 */
    int lNumberOfElementsOpt; /* +0x18 */
};

struct _stMemBlockA {
    unsigned int u32Size; /* +0x0 */
    unsigned int u32Addr; /* +0x4 */
};

struct stSampleMemory {
    _stMemBlockA stLeft; /* +0x0 */
    _stMemBlockA stRight; /* +0x8 */
};

struct stSampleCDStreaming {
    _stCdBlock stCdBlock; /* +0x0 */
    unsigned int u32Channel; /* +0x8 */
    unsigned int u32Interleave; /* +0xc */
};

union _tduDataSample {
    stSampleMemory stRAMMem; /* +0x0 */
    stSampleMemory stRAMStream; /* +0x0 */
    stSampleMemory stCDMem; /* +0x0 */
    stSampleCDStreaming stCDStream; /* +0x0 */
};

struct _tdstRangeSplitListMem {
    _tdstRangeSplitMem* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct _tdstTypeSplitMem {
    unsigned int ulNbRanges; /* +0x0 */
    int bStayActive; /* +0x4 */
    _tdstRangeSplitListMem stRangeList; /* +0x8 */
};

struct _tdstTypeSampleMem {
    int bPitchable : 1; /* bit 0, byte +0x0 */
    int bVolable : 1; /* bit 1, byte +0x0 */
    int bPanable : 1; /* bit 2, byte +0x0 */
    int bSpacable : 1; /* bit 3, byte +0x0 */
    int bReverbable : 1; /* bit 4, byte +0x0 */
    int bStream : 1; /* bit 5, byte +0x0 */
    int bOnCD : 1; /* bit 6, byte +0x0 */
    int bLoop : 1; /* bit 7, byte +0x0 */
    int bInterleave : 1; /* bit 8, byte +0x0 */
    tdeTypeZip eZip; /* +0x4 */
    signed char s8Channels; /* +0x8 */
    signed char s8Resolution; /* +0x9 */
    unsigned short u16Freq; /* +0xa */
    unsigned int u32Volume; /* +0xc */
    unsigned int rLoopEntry; /* +0x10 */
    _tduDataSample uData; /* +0x14 */
};

struct _tdstMidiMemory {
    unsigned int ulLength; /* +0x0 */
    unsigned int ulNbLoops; /* +0x4 */
};

struct _tdstMidiStreaming {
    char fichier[25]; /* +0x0 */
    unsigned int Offset; /* +0x1c */
    int iLoop; /* +0x20 */
    int iLast; /* +0x24 */
};

union _tduDataMidi {
    _tdstMidiMemory stMem; /* +0x0 */
    _tdstMidiStreaming stStream; /* +0x0 */
};

struct _tdstTypeMidiMem {
    int bStream : 1; /* bit 0, byte +0x0 */
    int bVolable : 1; /* bit 1, byte +0x0 */
    int bLoop : 1; /* bit 2, byte +0x0 */
    unsigned int ulNbLoops; /* +0x4 */
    unsigned int ulStartLoop; /* +0x8 */
    unsigned int ulEndLoop; /* +0xc */
    _tduDataMidi uData; /* +0x10 */
};

struct _tdstTypeCD {
    int iBidon; /* +0x0 */
};

struct _tdstInfoTrackList {
    _tdstInfoTrackMem* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct _tdstTypeSequenceMem {
    int bLoop; /* +0x0 */
    unsigned int ulStartLoop; /* +0x4 */
    unsigned int ulEndLoop; /* +0x8 */
    unsigned int ulNbLoops; /* +0xc */
    unsigned int ulNbElements; /* +0x10 */
    _tdstInfoTrackList stResList; /* +0x14 */
};

union _tduResMem {
    _tdstTypeSampleMem stSample; /* +0x0 */
    _tdstTypeMidiMem stMidi; /* +0x0 */
    _tdstTypeCD stCD; /* +0x0 */
    _tdstTypeSequenceMem stSequence; /* +0x0 */
    _tdstTypeSwitchMem stSwitch; /* +0x0 */
    _tdstTypeSplitMem stSplit; /* +0x0 */
    _tdstTypeThemeMem stTheme; /* +0x0 */
    _tdstTypeRandomMem stRandom; /* +0x0 */
};

struct _tdstBlockResourceMem {
    unsigned int Id; /* +0x0 */
    _tdeTypeResource eType; /* +0x4 */
    tdeTypeStorage eStorage; /* +0x8 */
    unsigned char ucVolume; /* +0xc */
    int bIsLoaded; /* +0x10 */
    _tduResMem uRes; /* +0x14 */
};

struct CSwitchElement {
    CIdObjPtr m_pTarget; /* +0x0 */
    unsigned int m_uiValue; /* +0x4 */
};

struct CEventResData : CResData {
    float m_fCoeffA; /* +0x18 */
    float m_fCoeffB; /* +0x1c */
    float m_fCoeffC; /* +0x20 */
    float m_fCoeffD; /* +0x24 */
    tdeEventType m_eEventType; /* +0x28 */
    CIdObjPtr m_pTargetRes; /* +0x2c */
};

struct CBankDescCont : smap {
    CPS2IdObjLoader moLoader; /* +0x10 */
    unsigned char mfn_bRemoveBankDesc(const char* pIdStr);
    CBankDesc* mfn_poAddBankDesc(const char* pIdStr);
};

struct _tdstRangeSplitMem {
    _tduRefRes uRes; /* +0x0 */
    int rPitchA; /* +0x4 */
    int rPitchB; /* +0x8 */
    int rPitchC; /* +0xc */
    int rPitchD; /* +0x10 */
    int rCoefPitch; /* +0x14 */
    unsigned char ucVolume; /* +0x18 */
    int rCoefMagAB; /* +0x1c */
    int rCoefMagCD; /* +0x20 */
};

struct CTextFile {
    CPS2FileSrcFlow m_File; /* +0x0 */
    sstring mostringName; /* +0x28 */
    unsigned char m_bOpened; /* +0x2c */
    anon_enum_001a827b eState; /* +0x30 */
};

struct _tdstSwitchElement {
    _tduRefRes uRes; /* +0x0 */
    int hIndice; /* +0x4 */
};


struct CTextFileSrc : CTextFile {
    anon_enum_001a8842 eCTextFileSrc; /* +0x34 */
    int mpchBuffer1; /* +0x38 */
    int mpchBuffer2; /* +0x3c */
    int mpchBufferEnd; /* +0x40 */
    char mchBuffer[2048]; /* +0x44 */
    int mpchCurrent; /* +0x844 */
    unsigned int mdwPosition; /* +0x848 */
    CTextFileSrc(const char* pch_FileName);
    unsigned char mfn_bRead(sstring& ro_Sentence);
    unsigned char mfn_bOpen(const char* pch_FileName);
};


























































int CD_ProgressCallBack;
static CBankDescCont* gro_BankCont;
static CPS2IdObjLoader* gro_BankLoader;
static char gch_Title[256];
static char gch_SoundFolder[1024];
static char gch_DivertSoundFolder[1024];
TS_UUIDSet gs_oListToLoad;
void* g_pSoundCache;

namespace usnd {
struct CIdObjPtrMgr {
    static CIdObjPtrMgr& fs_roGetInst(void);
    CIdObj* f_poGetIdObj(const CUUID& ro_Id);
};
}

namespace usnd {
struct CPS2WaveFileIdObj {
    static void fs_vLoadStatic(void);
};
}

extern "C" int LS_fn_iRemainingSizeToLoad(void);
extern "C" int atoi(const char*);

struct SwitchMgr {
    static void fs_vUpdateWaves(CPS2IdObjLoader*);
    static void fs_vClearTexture(void);
    static void fs_vAddTexture(unsigned int);
    static void fs_vAdd(CSwitchResData* po_Data);
};

extern "C" int strncmp(const char*, const char*, unsigned int);
extern "C" int strcmp(const char*, const char*);
extern "C" char* strcpy(char*, const char*);
extern "C" int printf(const char*, ...);
extern "C" int sprintf(char*, const char*, ...);
extern "C" unsigned int usnd_uiGetTime(void);
extern "C" char* fn_szGetGameDataPath(void);
extern "C" char* FMN_SCE_AddBaseDirectory(char* szFileName);
void fn_vUpdateSwitches(const char* pIdStr);
unsigned char fn_s8Digit(unsigned char s8_Digit);
extern "C" void SND_fn_vClearLastTheme(void);
extern "C" int SND_fn_iGetSwitchMaterial(void);
extern "C" void* fn_pvMallocInBinaryPreservingTheCurrentMode(unsigned int uiSize);
extern "C" void fn_vFreeInBinaryPreservingTheCurrentMode(void* p_Mem);
extern "C" int SND_fn_bLoadBank(char* pch_NameWithoutExt);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 89–94 */
/* addr: 0x00189600  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 89
 *   +0x0008 -> line 91
 *   +0x0030 -> line 92
 *   +0x0034 -> line 93
 *   +0x0044 -> line 94
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Retail expands this into SND_fn_bLoadBank and also keeps it out of line. */
#pragma auto_inline on
void fs_vUppercase(char* p)
{
    for (; *p; p++) {
        if (*p >= 'a' && *p <= 'z')
            *p -= 'a' - 'A';
    }
}
#pragma auto_inline reset

/* The debug record for the retail function at 0x00187a60 names it
   _NilElmt__Q24usnd9streebase, but the ELF symbol there is the indexed
   const conversion operator of usnd::CIdObjPtr<usnd::CResData>, which is
   defined with the class template above (the ms_pfnConvert reference keeps
   the compiler from folding it away, so the retail's out-of-line copy is
   emitted). */
/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 251–254 */
/* addr: 0x00187a60  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 251
 *   +0x0018 -> line 254
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 419–480 */
/* addr: 0x00187a80  size: 616 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 419
 *   +0x000c -> line 425
 *   +0x002c -> line 426
 *   +0x0040 -> line 427
 *   +0x0084 -> line 438
 *   +0x0094 -> line 440
 *   +0x00a8 -> line 442
 *   +0x00ac -> line 443
 *   +0x00c0 -> line 442
 *   +0x00c4 -> line 443
 *   +0x0130 -> line 446
 *   +0x0138 -> line 449
 *   +0x014c -> line 451
 *   +0x015c -> line 452
 *   +0x0170 -> line 456
 *   +0x018c -> line 457
 *   +0x01a0 -> line 458
 *   +0x01e4 -> line 468
 *   +0x01f0 -> line 471
 *   +0x01f8 -> line 476
 *   +0x0200 -> line 477
 *   +0x0240 -> line 478
 *   +0x0258 -> line 480
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateSwitches(const char* pIdStr)
{
    char ch_Path[1024];

    sprintf(ch_Path, "\\%sBIN\\WORLD\\SOUND\\%s.SMT;1", fn_szGetGameDataPath(), pIdStr);
    strcpy(ch_Path, FMN_SCE_AddBaseDirectory(ch_Path));
    fs_vUppercase(ch_Path);

    CTextFileSrc o_File("");

    if (o_File.mfn_bOpen(ch_Path))
    {
        sstring o_Sentence;
        CPS2IdObjLoader oLoader;

        SwitchMgr::fs_vClearTexture();

        while (o_File.mfn_bRead(o_Sentence))
        {
            SwitchMgr::fs_vAddTexture(atoi(o_Sentence.c_str()));
        }

        sprintf(ch_Path, "\\%sBIN\\WORLD\\SOUND\\FIXESW.HX2;1", fn_szGetGameDataPath());
        strcpy(ch_Path, FMN_SCE_AddBaseDirectory(ch_Path));
        fs_vUppercase(ch_Path);

        oLoader.f_bLoadBank(ch_Path);
        SwitchMgr::fs_vUpdateWaves(&oLoader);
        oLoader.fv_FlushCache();
        oLoader.f_vClearIndex();
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 352–412 */
/* addr: 0x00188700  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 352
 *   +0x0004 -> line 359
 *   +0x0008 -> line 352
 *   +0x0018 -> line 359
 *   +0x0024 -> line 361
 *   +0x0034 -> line 365
 *   +0x0040 -> line 369
 *   +0x0064 -> line 371
 *   +0x0074 -> line 375
 *   +0x007c -> line 378
 *   +0x008c -> line 380
 *   +0x00a4 -> line 381
 *   +0x00ac -> line 384
 *   +0x00b8 -> line 386
 *   +0x00c0 -> line 384
 *   +0x00c8 -> line 386
 *   +0x00d0 -> line 388
 *   +0x00e4 -> line 389
 *   +0x00ec -> line 392
 *   +0x00f4 -> line 395
 *   +0x00f8 -> line 396
 *   +0x012c -> line 400
 *   +0x0134 -> line 405
 *   +0x0174 -> line 407
 *   +0x017c -> line 408
 *   +0x0184 -> line 410
 *   +0x018c -> line 411
 *   +0x0194 -> line 412
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vLoadSwitches(CBankDesc* po_BankDesc)
{
    TS_UUIDSet::iterator it;

    g_pSoundCache = fn_pvMallocInBinaryPreservingTheCurrentMode(0x7D000);

    usnd::CPS2FileSrcFlow::fs_vUseCache(g_pSoundCache, 0x7D000);

    SND_fn_bLoadBank("fixeSW");

    for (it = gs_oListToLoad.begin(); it != gs_oListToLoad.end(); ++it)
    {
        if ((*it).m_uiHighWord == 1)
        {
            CUUID switchId;
            CSwitchResData* pSwitchData;
            CEventResData* pEventData;

            po_BankDesc->mfn_poAddCResDataAlone(*it);
            pEventData = (CEventResData*)usnd::CIdObjPtrMgr::fs_roGetInst().f_poGetIdObj(*it);
            if (pEventData)
            {
                switchId = pEventData->m_pTargetRes.f_roGetId();
                po_BankDesc->mfn_poAddCResDataAlone(switchId);
                pSwitchData = (CSwitchResData*)usnd::CIdObjPtrMgr::fs_roGetInst().f_poGetIdObj(switchId);
                if (pSwitchData)
                {
                    SwitchMgr::fs_vAdd(pSwitchData);
                }
            }
        }
    }

    SwitchMgr::fs_vUpdateWaves(gro_BankLoader);

    gs_oListToLoad._Tr.clear();

    gro_BankLoader->fv_FlushCache();
    gro_BankLoader->f_vClearIndex();

    usnd::CPS2FileSrcFlow::fs_vStopCache();
    fn_vFreeInBinaryPreservingTheCurrentMode(g_pSoundCache);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 293–345 */
/* addr: 0x00188ad0  size: 472 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 293
 *   +0x001c -> line 296
 *   +0x0024 -> line 299
 *   +0x0028 -> line 296
 *   +0x002c -> line 299
 *   +0x0038 -> line 304
 *   +0x0044 -> line 306
 *   +0x0048 -> line 307
 *   +0x006c -> line 309
 *   +0x0090 -> line 311
 *   +0x0098 -> line 314
 *   +0x00a4 -> line 315
 *   +0x00b0 -> line 316
 *   +0x00e4 -> line 319
 *   +0x0124 -> line 321
 *   +0x0130 -> line 322
 *   +0x0148 -> line 323
 *   +0x0150 -> line 326
 *   +0x0158 -> line 328
 *   +0x0164 -> line 329
 *   +0x017c -> line 332
 *   +0x0184 -> line 333
 *   +0x018c -> line 336
 *   +0x0194 -> line 337
 *   +0x019c -> line 341
 *   +0x01b4 -> line 343
 *   +0x01bc -> line 345
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vFinishLoad(char* pIdStr)
{
    TS_UUIDSet::iterator it;
    CBankDesc* po_BankDesc;
    int iStepSize;
    unsigned int uiTime;
    int iNbBanks;

    iStepSize = 0;
    uiTime = usnd_uiGetTime();

    po_BankDesc = gro_BankCont->mfn_poAddBankDesc(pIdStr);

    if (CD_ProgressCallBack)
    {
        iNbBanks = gs_oListToLoad._Tr._Size;
        iStepSize = (LS_fn_iRemainingSizeToLoad() - 1300000) / iNbBanks;
    }

    for (it = gs_oListToLoad.begin(); it != gs_oListToLoad.end(); ++it)
    {
        po_BankDesc->mfn_poAddCResData(*it);

        if (CD_ProgressCallBack)
            ((void (*)(int))CD_ProgressCallBack)(iStepSize);
    }

    gs_oListToLoad._Tr.clear();

    printf("TIME spent to read the HX2 files \n");
    printf("FINISH Time = %d\n", usnd_uiGetTime() - uiTime);

    uiTime = usnd_uiGetTime();

    usnd::CPS2WaveFileIdObj::fs_vLoadStatic();

    printf("TIME spent to load the sound ressources in SPU RAM \n");
    printf("FINISH Time = %d\n", usnd_uiGetTime() - uiTime);

    gro_BankLoader->fv_FlushCache();
    gro_BankLoader->f_vClearIndex();

    usnd::CPS2FileSrcFlow::fs_vStopCache();
    fn_vFreeInBinaryPreservingTheCurrentMode(g_pSoundCache);

    if (!strcmp("fixe", pIdStr))
    {
        fn_vLoadSwitches(po_BankDesc);
    }
}


/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 283–288 */
/* addr: 0x00188cb0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 283
 *   +0x0004 -> line 285
 *   +0x0008 -> line 283
 *   +0x000c -> line 285
 *   +0x0018 -> line 287
 *   +0x0028 -> line 288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vStartLoad(void)
{
    g_pSoundCache = fn_pvMallocInBinaryPreservingTheCurrentMode(0x7D000);
    usnd::CPS2FileSrcFlow::fs_vUseCache(g_pSoundCache, 0x7D000);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 266–272 */
/* addr: 0x00188cf0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 266
 *   +0x0004 -> line 269
 *   +0x0008 -> line 266
 *   +0x000c -> line 269
 *   +0x0024 -> line 272
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
_SND_tdstBlockEvent* SND_fn_pstGetBlockEventFromId(unsigned int u32_EvtId)
{
    CEventResData* po_Answer;

    po_Answer = (CEventResData*)usnd::CIdObjPtrMgr::fs_roGetInst().f_poGetIdObj(CUUID(1, u32_EvtId));
    return (_SND_tdstBlockEvent*)po_Answer;
}

static inline void fs_vUpdateSwitchTextures(void)
{
    int iMaterial = SND_fn_iGetSwitchMaterial();
    SwitchMgr::fs_vClearTexture();
    if (iMaterial != -1)
        SwitchMgr::fs_vAddTexture(iMaterial);
    SwitchMgr::fs_vUpdateWaves(gro_BankLoader);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 238–261 */
/* addr: 0x00188d20  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 238
 *   +0x0014 -> line 242
 *   +0x002c -> line 243
 *   +0x0030 -> line 246
 *   +0x0038 -> line 247
 *   +0x0040 -> line 250
 *   +0x0048 -> line 255
 *   +0x0064 -> line 257
 *   +0x0090 -> line 260
 *   +0x0094 -> line 261
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_bUnloadBank(char* pIdStr)
{
    int b_Answer;

    b_Answer = 0;
    if (gro_BankCont->mfn_bRemoveBankDesc(pIdStr))
        b_Answer = 1;

    gro_BankLoader->fv_FlushCache();
    gro_BankLoader->f_vClearIndex();

    SND_fn_vClearLastTheme();

    if (strncmp(pIdStr, "transit", 7))
        fs_vUpdateSwitchTextures();

    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 162–233 */
/* addr: 0x00188dd0  size: 980 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 162
 *   +0x0018 -> line 166
 *   +0x0020 -> line 170
 *   +0x0024 -> line 166
 *   +0x0028 -> line 170
 *   +0x003c -> line 172
 *   +0x0044 -> line 175
 *   +0x0050 -> line 176
 *   +0x0068 -> line 178
 *   +0x0070 -> line 185
 *   +0x0090 -> line 186
 *   +0x00a4 -> line 187
 *   +0x00e4 -> line 198
 *   +0x00f0 -> line 200
 *   +0x00fc -> line 201
 *   +0x0114 -> line 203
 *   +0x011c -> line 209
 *   +0x013c -> line 210
 *   +0x0150 -> line 211
 *   +0x0194 -> line 219
 *   +0x01a0 -> line 221
 *   +0x01e4 -> line 222
 *   +0x01f8 -> line 224
 *   +0x01fc -> line 226
 *   +0x0348 -> line 227
 *   +0x0360 -> line 229
 *   +0x036c -> line 230
 *   +0x0384 -> line 232
 *   +0x03b4 -> line 233
 *   +0x03b8 -> line 232
 *   +0x03bc -> line 233
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_bLoadBank(char* pch_NameWithoutExt)
{
    unsigned int uiTime;
    char ch_Path[1024];

    uiTime = usnd_uiGetTime();

    if (strcmp(pch_NameWithoutExt, "fixe"))
    {
        fn_vUpdateSwitches(pch_NameWithoutExt);
    }

    printf("TIME spent to update switches files \n");
    printf("LOAD Time = %d\n", usnd_uiGetTime() - uiTime);

    uiTime = usnd_uiGetTime();

    sprintf(ch_Path, "\\%sBIN\\WORLD\\SOUND\\%s.HX2;1", fn_szGetGameDataPath(), pch_NameWithoutExt);
    strcpy(ch_Path, FMN_SCE_AddBaseDirectory(ch_Path));
    fs_vUppercase(ch_Path);

    gro_BankLoader->f_bLoadBank(ch_Path);

    printf("TIME spent to read the HX2 index files \n");
    printf("LOAD Time = %d\n", usnd_uiGetTime() - uiTime);

    uiTime = usnd_uiGetTime();

    sprintf(ch_Path, "\\%sBIN\\WORLD\\SOUND\\%s.BNH;1", fn_szGetGameDataPath(), pch_NameWithoutExt);
    strcpy(ch_Path, FMN_SCE_AddBaseDirectory(ch_Path));
    fs_vUppercase(ch_Path);

    CTextFileSrc o_File(ch_Path);

    sstring o_Sentence("");
    while (o_File.mfn_bRead(o_Sentence))
    {
        const char* pch = o_Sentence.c_str();
        CUUID oId(
            (fn_s8Digit(pch[9]) << 28) | (fn_s8Digit(pch[10]) << 24) | (fn_s8Digit(pch[11]) << 20) | (fn_s8Digit(pch[12]) << 16) |
            (fn_s8Digit(pch[13]) << 12) | (fn_s8Digit(pch[14]) << 8) | (fn_s8Digit(pch[15]) << 4) | fn_s8Digit(pch[16]),
            (fn_s8Digit(pch[21]) << 28) | (fn_s8Digit(pch[22]) << 24) | (fn_s8Digit(pch[23]) << 20) | (fn_s8Digit(pch[24]) << 16) |
            (fn_s8Digit(pch[25]) << 12) | (fn_s8Digit(pch[26]) << 8) | (fn_s8Digit(pch[27]) << 4) | fn_s8Digit(pch[28]));
        gs_oListToLoad.insert(oId);
    }

    printf("TIME spent to read the BNH files \n");
    printf("LOAD Time = %d\n", usnd_uiGetTime() - uiTime);

    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 120–136 */
/* addr: 0x00189560  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 120
 *   +0x001c -> line 121
 *   +0x0020 -> line 122
 *   +0x0028 -> line 124
 *   +0x0038 -> line 125
 *   +0x003c -> line 126
 *   +0x0044 -> line 128
 *   +0x005c -> line 129
 *   +0x0064 -> line 136
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_s8Digit(unsigned char s8_Digit)
{
    unsigned char s8_Answer;

    if (s8_Digit >= '0' && s8_Digit <= '9') {
        s8_Answer = s8_Digit - '0';
    }
    else {
        if (s8_Digit >= 'A' && s8_Digit <= 'F') {
            s8_Answer = s8_Digit - 'A' + 10;
        }
        else {
            if (s8_Digit >= 'a' && s8_Digit <= 'f') {
                s8_Answer = s8_Digit - 'a' + 10;
            }
            else
                s8_Answer = 0;
        }
    }

    return s8_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 111–111 */
/* addr: 0x001895d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_bDesInitDataLoadSnd(void)
{
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 99–104 */
/* addr: 0x001895e0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 99
 *   +0x0008 -> line 101
 *   +0x0010 -> line 104
 *   +0x0014 -> line 103
 *   +0x0018 -> line 104
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bSetLanguage(void);
int SND_fn_bInitDataLoadSnd(void)
{
    fn_bSetLanguage();
    return 1;
}
