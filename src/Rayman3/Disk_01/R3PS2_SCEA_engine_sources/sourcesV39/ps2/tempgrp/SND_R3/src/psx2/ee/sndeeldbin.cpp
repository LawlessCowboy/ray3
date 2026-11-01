/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct CAllocBlock CAllocBlock;
typedef struct CBankDesc CBankDesc;
typedef struct CBankDescCont CBankDescCont;
typedef struct CEventResData CEventResData;
typedef struct CLookupElement CLookupElement;
typedef struct CRefIdObj CRefIdObj;
typedef struct CSwitchElement CSwitchElement;
typedef struct CTextFile CTextFile;
typedef struct CTextFileSrc CTextFileSrc;
namespace usnd { struct CUUID; }
typedef usnd::CUUID CUUID;
namespace usnd { struct sstring; }
typedef usnd::sstring sstring;
namespace usnd { struct CIdObj; }
typedef usnd::CIdObj CIdObj;
namespace usnd { struct CResData; }
typedef usnd::CResData CResData;
namespace usnd { struct CSwitchResData; }
typedef usnd::CSwitchResData CSwitchResData;
namespace usnd { template <class T> struct CIdObjPtr; }
typedef usnd::CIdObjPtr<CResData> CIdObjPtr;
namespace usnd { struct CPS2IdObjInfo; }
typedef usnd::CPS2IdObjInfo CPS2IdObjInfo;
namespace usnd { struct CPS2IdObjLoader; }
typedef usnd::CPS2IdObjLoader CPS2IdObjLoader;
namespace usnd { class CPS2FileSrcFlow; }
typedef usnd::CPS2FileSrcFlow CPS2FileSrcFlow;

typedef enum anon_enum_001a827b {
    E_INVALID_SIZE = -1,
} anon_enum_001a827b;

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

struct CBankDesc : usnd::sset<CUUID, CLesser, usnd::sallocator<CUUID> > {
    CPS2IdObjLoader* mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
    CResData* mfn_poAddCResDataAlone(const CUUID& ro_Id);
    CResData* mfn_poAddCResData(const CUUID& ro_Id);
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

struct CSwitchElement {
    CIdObjPtr m_pTarget; /* +0x0 */
    unsigned int m_uiValue; /* +0x4 */
};

struct CBankDescCont : usnd::smap<sstring, CBankDesc*, usnd::less<sstring>, usnd::sallocator<CBankDesc*> > {
    CPS2IdObjLoader moLoader; /* +0x10 */
    unsigned char mfn_bRemoveBankDesc(const char* pIdStr);
    CBankDesc* mfn_poAddBankDesc(const char* pIdStr);
};

struct CEventResData : CResData {
    float m_fCoeffA; /* +0x18 */
    float m_fCoeffB; /* +0x1c */
    float m_fCoeffC; /* +0x20 */
    float m_fCoeffD; /* +0x24 */
    tdeEventType m_eEventType; /* +0x28 */
    CIdObjPtr m_pTargetRes; /* +0x2c */
};

struct CTextFile {
    CPS2FileSrcFlow m_File; /* +0x0 */
    sstring mostringName; /* +0x28 */
    unsigned char m_bOpened; /* +0x2c */
    anon_enum_001a827b eState; /* +0x30 */
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

void SND_fn_vStartLoad(void)
{
    g_pSoundCache = fn_pvMallocInBinaryPreservingTheCurrentMode(0x7D000);
    usnd::CPS2FileSrcFlow::fs_vUseCache(g_pSoundCache, 0x7D000);
}

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

int SND_fn_bDesInitDataLoadSnd(void)
{
    return 1;
}

unsigned char fn_bSetLanguage(void);
int SND_fn_bInitDataLoadSnd(void)
{
    fn_bSetLanguage();
    return 1;
}
