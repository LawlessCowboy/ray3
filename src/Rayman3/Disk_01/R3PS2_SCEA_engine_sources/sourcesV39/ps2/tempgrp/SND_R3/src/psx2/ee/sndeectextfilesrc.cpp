/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern "C" char* strchr(const char* s, int c);
extern "C" unsigned int strlen(const char* pch_Str);
extern "C" void usnd_free(void* pv_Ptr);

/* Recovered aggregate layouts from MWCC debug type records. */
namespace usnd
{
struct CResData;
struct CUUID;
struct sstring;
}

typedef usnd::CResData CResData;
typedef usnd::CUUID CUUID;
typedef usnd::sstring sstring;
typedef struct CTextFileSrc CTextFileSrc;
typedef struct CPS2FileSrcFlow CPS2FileSrcFlow;
typedef struct CTextFile CTextFile;
typedef struct CSrcFlow CSrcFlow;
typedef struct CFlow CFlow;
typedef struct CBankDesc CBankDesc;
struct usnd::CUUID {
    CUUID(void);
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};
struct CFlow { int data[2]; };

typedef enum anon_enum_001bafa4 {
    E_INVALID_SIZE = -1,
} anon_enum_001bafa4;

typedef enum anon_enum_001bafd7 {
    E_BUFFER_SIZE = 1024,
} anon_enum_001bafd7;

struct usnd::sstring {
    char* m_pcData; /* +0x0 */
    static char* ms_czNil;
    void _Init(const char* pch_Str, unsigned int ui_Length);
    sstring& operator=(const char* pch_Str)
    {
        unsigned int ui_Length = strlen(pch_Str);
        char* pch_Old = m_pcData;
        _Init(pch_Str, ui_Length);
        if (pch_Old != ms_czNil)
            usnd_free(pch_Old);
        return *this;
    }
    unsigned short length(void) const { return m_pcData ? (unsigned short)strlen(m_pcData) : 0; }
};

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
    virtual ~CSrcFlow();
    virtual unsigned int fv_uiRead(void* p_Buffer, unsigned int ui_Size, unsigned int ui_Nb) = 0;
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
    anon_enum_001bafa4 eState; /* +0x30 */
    unsigned char mfn_bOpen(const char* pch_FilePath)
    {
        if (!m_bOpened)
        {
            mostringName = pch_FilePath;
            if (mostringName.length())
                m_bOpened = m_File.f_bOpen(mostringName.m_pcData, E_RamLocation_RAM);
            return m_bOpened;
        }
        return 0;
    }
    bool mfn_bRead(void* p_Buffer, unsigned int dw_Size)
    {
        bool b_Answer = false;
        if (m_bOpened)
            b_Answer = m_File.fv_uiRead(p_Buffer, 1, dw_Size) == dw_Size;
        return b_Answer;
    }
};

struct CTextFileSrc : CTextFile {
    anon_enum_001bafd7 eCTextFileSrc; /* +0x34 */
    char* mpchBuffer1; /* +0x38 */
    char* mpchBuffer2; /* +0x3c */
    char* mpchBufferEnd; /* +0x40 */
    char mchBuffer[2048]; /* +0x44 */
    char* mpchCurrent; /* +0x844 */
    unsigned int mdwPosition; /* +0x848 */
    unsigned char mfn_bRead(sstring& ro_Sentence);
    char* mfn_pchParseChar(void) const;
    unsigned char mfn_bOpen(const char* pch_FilePath);
};


/* The usnd set CBankDesc derives from (see sndeecbankdesc.cpp); only the
 * members this function needs are declared. */
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
        bool operator==(const iterator_base& ro_It) const { return _Ptr == ro_It._Ptr; }
        sTreeLink* _Ptr; /* +0x0 */
    };
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

template <class T> struct binary_function {
};

template <class T> struct less : binary_function<T> {
    bool operator()(const T& ro_Left, const T& ro_Right) const { return ro_Left < ro_Right; }
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
        iterator(sTreeNode* po_Node);
        iterator(const iterator& ro_It) : iterator_base(ro_It._Ptr) {}
        V& operator*(void) const { return ((sTreeNode*)_Ptr)->m_oValue; }
    };
    sTreeNode* _GetHead(void) const;
    sTreeNode* _Lbound(const K& ro_Key) const;
    iterator end(void) { return iterator(_GetHead()); }
    spair<iterator, bool> insert(const V& ro_Value);
    iterator lower_bound(const K& ro_Key) { return iterator(_Lbound(ro_Key)); }
    iterator find(const K& ro_Key)
    {
        KFN o_Kfn;
        iterator it = lower_bound(ro_Key);
        return (it == end() || key_compare(ro_Key, o_Kfn(*it))) ? end() : it;
    }
    ALLOC allocator; /* +0xc */
    CMP key_compare; /* +0xd */
};

template <class K, class CMP, class ALLOC>
struct sset {
    struct _Kfn {
        _Kfn(void) {}
        const K& operator()(const K& ro_Value) const;
    };
    typedef stree<K, K, _Kfn, CMP, ALLOC> _Imp;
    typedef typename _Imp::iterator iterator;
    iterator end(void) { return iterator(_Tr._HeadLink); }
    iterator find(const K& ro_Key) { return _Tr.find(ro_Key); }
    void insert(const K& ro_Value) { _Tr.insert(ro_Value); }
    _Imp _Tr; /* +0x0 */
};

struct CIdObj;
struct CIdObjPtrMgr {
    static CIdObjPtrMgr& fs_roGetInst(void);
    CIdObj* f_poGetIdObj(const CUUID& ro_Id);
    unsigned int f_uiGetPendingReferences(CUUID* pa_Id, unsigned int ui_Nb);
};
struct CPS2IdObjLoader {
    CIdObj* f_poLoadIdObj(const CUUID& ro_Id);
    void f_vPreloadObjects(CUUID* pa_Id, unsigned int ui_Nb);
};
}
using usnd::CPS2IdObjLoader;

struct CBankDesc : usnd::sset<CResData*, usnd::less<CResData*>, usnd::sallocator<CResData*> > {
    CResData* mfn_poAddCResData(const CUUID& ro_cuuid);
    CPS2IdObjLoader* mroLoader; /* +0x10 */
    usnd::sstring mostringName; /* +0x14 */
};

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */


#define M_MIN(a, b) (((a) < (b)) ? (a) : (b))

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 44–59 */
/* addr: 0x0018bd80  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 44
 *   +0x0014 -> line 46
 *   +0x009c -> line 48
 *   +0x00a0 -> line 49
 *   +0x00a8 -> line 50
 *   +0x00e0 -> line 52
 *   +0x0104 -> line 55
 *   +0x0110 -> line 58
 *   +0x0114 -> line 59
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

unsigned char CTextFileSrc::mfn_bOpen(const char* pch_FilePath)
{
    if (CTextFile::mfn_bOpen(pch_FilePath))
    {
        mdwPosition = 0;
        mpchCurrent = mpchBuffer1;
        if (CTextFile::mfn_bRead(mpchBuffer1, E_BUFFER_SIZE))
        {
            CTextFile::mfn_bRead(mpchBuffer2, E_BUFFER_SIZE);
        }
        return 1;
    }

    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 83–145 */
/* addr: 0x0018bcd0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 83
 *   +0x0014 -> line 97
 *   +0x0020 -> line 98
 *   +0x0024 -> line 97
 *   +0x0028 -> line 98
 *   +0x0030 -> line 100
 *   +0x0044 -> line 112
 *   +0x0054 -> line 114
 *   +0x005c -> line 120
 *   +0x0064 -> line 122
 *   +0x006c -> line 124
 *   +0x0074 -> line 126
 *   +0x007c -> line 132
 *   +0x0088 -> line 141
 *   +0x0098 -> line 145
 *   +0x009c -> line 143
 *   +0x00a0 -> line 145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char* CTextFileSrc::mfn_pchParseChar(void) const
{
    char* pch_SlashR;
    char* pch_SlashN;
    char* pch_Answer;

    pch_SlashN = strchr((char*)mpchCurrent, '\n');
    pch_SlashR = strchr((char*)mpchCurrent, '\r');

    pch_Answer = NULL;
    if (pch_SlashN != (char*)mpchCurrent && pch_SlashR != (char*)mpchCurrent)
    {
        if (!pch_SlashN && !pch_SlashR)
            pch_Answer = (char*)mpchBufferEnd;
        else if (!pch_SlashN)
            pch_Answer = pch_SlashR;
        else if (!pch_SlashR)
            pch_Answer = pch_SlashN;
        else
            pch_Answer = M_MIN(pch_SlashN, pch_SlashR);

        pch_Answer = M_MIN(pch_Answer, (char*)mpchBufferEnd);
    }

    return pch_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 148–192 */
/* addr: 0x0018b910  size: 752 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 148
 *   +0x0030 -> line 152
 *   +0x003c -> line 153
 *   +0x0074 -> line 154
 *   +0x007c -> line 159
 *   +0x0088 -> line 160
 *   +0x0090 -> line 162
 *   +0x0098 -> line 163
 *   +0x0170 -> line 165
 *   +0x0178 -> line 167
 *   +0x017c -> line 168
 *   +0x0180 -> line 167
 *   +0x0184 -> line 169
 *   +0x0188 -> line 177
 *   +0x01a4 -> line 178
 *   +0x01c8 -> line 181
 *   +0x01d4 -> line 182
 *   +0x01f8 -> line 183
 *   +0x0200 -> line 186
 *   +0x0204 -> line 187
 *   +0x0210 -> line 188
 *   +0x0250 -> line 189
 *   +0x02c0 -> line 191
 *   +0x02c4 -> line 192
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CTextFileSrc::mfn_bRead(sstring& ro_Sentence)
{
    char* pch_StringNext;
    unsigned int dw_Size;
    char* pch_StringEnd;
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 37–67 */
/* addr: 0x0018b760  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 *   +0x0018 -> line 40
 *   +0x0030 -> line 41
 *   +0x003c -> line 43
 *   +0x004c -> line 44
 *   +0x0058 -> line 47
 *   +0x0078 -> line 49
 *   +0x0080 -> line 51
 *   +0x0090 -> line 52
 *   +0x009c -> line 53
 *   +0x00c0 -> line 61
 *   +0x0180 -> line 63
 *   +0x018c -> line 66
 *   +0x0190 -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CResData* CBankDesc::mfn_poAddCResData(const CUUID& ro_cuuid)
{
    CResData* po_Answer;

    po_Answer = (CResData*)usnd::CIdObjPtrMgr::fs_roGetInst().f_poGetIdObj(ro_cuuid);

    if (!po_Answer)
    {
        po_Answer = (CResData*)mroLoader->f_poLoadIdObj(ro_cuuid);
        if (po_Answer)
        {
            CUUID aId[20];
            int nb;

            while ((nb = usnd::CIdObjPtrMgr::fs_roGetInst().f_uiGetPendingReferences(aId, 20)) != 0)
            {
                if (nb > 20)
                    nb = 20;
                mroLoader->f_vPreloadObjects(aId, nb);
            }
        }
    }

    if (find(po_Answer) == end())
    {
        insert(po_Answer);
    }

    return po_Answer;
}
