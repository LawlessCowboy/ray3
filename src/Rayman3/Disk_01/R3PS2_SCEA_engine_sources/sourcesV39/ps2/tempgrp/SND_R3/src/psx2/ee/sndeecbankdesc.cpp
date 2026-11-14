/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern "C" void usnd_free(void* pv_Ptr);

/* The usnd containers are a renamed Dinkumware red-black tree; only the
 * members this translation unit needs are declared.  Members defined in the
 * class body are inline, the others are out-of-line template instances. */
namespace usnd {
struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CRTTIClass {
    virtual ~CRTTIClass();
};

struct CIdObj : CRTTIClass {
    CUUID m_oId; /* +0x4 */
};

struct CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
};

struct sstring {
    ~sstring()
    {
        if (m_pcData != ms_czNil)
            usnd_free(m_pcData);
    }
    char* m_pcData; /* +0x0 */
    static char* ms_czNil;
};

struct CResData : CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

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
        iterator& operator++(void) { _Inc(); return *this; }
        bool operator!=(const iterator& ro_It) const { return !(*this == ro_It); }
    };
    ~stree()
    {
        erase(iterator(_GetHead()->m_poLeft), iterator(_HeadLink));
        usnd_free(_HeadLink);
        _HeadLink = 0;
        _Size = 0;
    }
    sTreeNode* _GetHead(void) const;
    sTreeNode* _Lbound(const K& ro_Key) const;
    sTreeLink*& _Lmost(void);
    iterator begin(void) { return iterator(_Lmost()); }
    iterator end(void) { return iterator(_GetHead()); }
    iterator erase(iterator o_First, iterator o_Last);
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
    iterator begin(void) { return _Tr.begin(); }
    iterator end(void) { return iterator(_Tr._HeadLink); }
    iterator find(const K& ro_Key) { return _Tr.find(ro_Key); }
    void insert(const K& ro_Value) { _Tr.insert(ro_Value); }
    _Imp _Tr; /* +0x0 */
};
}

using usnd::CUUID;
using usnd::CResData;

namespace usnd {
struct CIdObjPtrMgr {
    static CIdObjPtrMgr& fs_roGetInst(void);
    CIdObj* f_poGetIdObj(const CUUID& ro_Id);
};
struct CPS2IdObjLoader {
    CIdObj* f_poLoadIdObj(const CUUID& ro_Id);
};
}
using usnd::CPS2IdObjLoader;

struct CBankDesc : usnd::sset<CResData*, usnd::less<CResData*>, usnd::sallocator<CResData*> > {
    ~CBankDesc();
    void operator delete(void* pv_Ptr) { usnd_free(pv_Ptr); }
    CResData* mfn_poAddCResDataAlone(const CUUID& ro_cuuid);
    CPS2IdObjLoader* mroLoader; /* +0x10 */
    usnd::sstring mostringName; /* +0x14 */
};

extern "C" void HMU_fn_pvSndMalloc(unsigned int u32Size);

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
extern "C" void usnd_malloc(unsigned int uiSize);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp lines 97–103 */
/* addr: 0x0018afa0  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 97
 *   +0x001c -> line 100
 *   +0x003c -> line 101
 *   +0x0058 -> line 102
 *   +0x0118 -> line 103
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CBankDesc::~CBankDesc()
{
    iterator it;

    for (it = begin(); it != end(); ++it)
    {
        delete *it;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp lines 72–92 */
/* addr: 0x0018b2f0  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 72
 *   +0x0018 -> line 75
 *   +0x0030 -> line 77
 *   +0x003c -> line 79
 *   +0x004c -> line 86
 *   +0x010c -> line 88
 *   +0x0118 -> line 91
 *   +0x011c -> line 92
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

CResData* CBankDesc::mfn_poAddCResDataAlone(const CUUID& ro_cuuid)
{
    CResData* po_Answer;

    po_Answer = (CResData*)usnd::CIdObjPtrMgr::fs_roGetInst().f_poGetIdObj(ro_cuuid);

    if (!po_Answer)
    {
        po_Answer = (CResData*)mroLoader->f_poLoadIdObj(ro_cuuid);
    }

    if (find(po_Answer) == end())
    {
        insert(po_Answer);
    }

    return po_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp lines 57–57 */
/* addr: 0x0018af90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 57
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void usnd_malloc(unsigned int uiSize)
{
    return HMU_fn_pvSndMalloc(uiSize);
}
