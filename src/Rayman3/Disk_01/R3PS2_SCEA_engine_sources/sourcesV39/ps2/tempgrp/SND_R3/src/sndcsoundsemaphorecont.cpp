/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;

extern "C" void* usnd_malloc(unsigned int ui_Size);
extern "C" void usnd_free(void* pv_Ptr);

/* The usnd containers are a renamed Dinkumware red-black tree; only the
 * members this translation unit needs are declared.  Members defined in the
 * class body are inline, the others are out-of-line template instances. */
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
        bool operator==(const iterator_base& ro_It) const;
        sTreeLink* _Ptr; /* +0x0 */
    };
    streebase(bool b_Multi) : _Multi(b_Multi) {}
    sTreeLink* base_erase(sTreeLink* po_Node);
    static sTreeLink _NilElmt;
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

template <class T> struct binary_function {
};

template <class T> struct less : binary_function<T> {
    bool operator()(const T& ro_Left, const T& ro_Right) const;
};

template <class T> struct sallocator {
};

template <class T1, class T2> struct spair {
    spair(void) {}
    spair(const T1& ro_First, const T2& ro_Second) : first(ro_First), second(ro_Second) {}
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
        /* The retail code copies iterators in two different ways: stree::find()
         * copies through the iterator's copy constructor (a call to
         * iterator_base(sTreeLink*)), while stree::erase() initialises its
         * by-value parameter with a plain memberwise copy of _Ptr.  MWCC cannot
         * produce both from one copy constructor, so the copy constructor below
         * is the trivial one that matches the erase() path; find() keeps the
         * retail's call shape only when the copy constructor is changed. */
        iterator(const iterator& ro_It) { _Ptr = ro_It._Ptr; }
        V& operator*(void) const { return ((sTreeNode*)_Ptr)->m_oValue; }
        iterator& operator++(void) { _Inc(); return *this; }
        iterator operator++(int) { iterator oTmp = *this; ++*this; return oTmp; }
        bool operator!=(const iterator& ro_It) const { return !(_Ptr == ro_It._Ptr); }
        sTreeNode* _Mynode(void) const;
    };
    stree(const CMP& ro_Pred, bool b_Multi, const ALLOC& ro_Alloc) : streebase(b_Multi), allocator(ro_Alloc), key_compare(ro_Pred)
    {
        _Init();
    }
    ~stree()
    {
        erase(begin(), end());
        usnd_free(_HeadLink);
        _HeadLink = 0;
        _Size = 0;
    }
    void _Init(void)
    {
        _HeadLink = _Buynode(&_NilElmt, _Red);
        _Size = 0;
        _GetHead()->m_poLeft = _HeadLink;
        _GetHead()->m_poRight = _HeadLink;
    }
    sTreeLink* _GetHead(void) const
    {
        return _HeadLink;
    }
    sTreeLink* _Buynode(sTreeLink* po_Parent, _Redbl e_Color)
    {
        sTreeNode* poNode = (sTreeNode*)usnd_malloc(sizeof(sTreeNode));
        poNode->m_poParent = po_Parent;
        poNode->m_eColor = e_Color;
        return poNode;
    }
    sTreeLink*& _Lmost(void)
    {
        return _GetHead()->m_poLeft;
    }
    iterator begin(void) { return iterator(_Lmost()); }
    iterator end(void) { return iterator(_HeadLink); }
    iterator erase(iterator o_First, iterator o_Last);
    iterator lower_bound(const K& ro_Key);
    spair<iterator, bool> insert(const V& ro_Value);
    static const K& _Key(sTreeNode* po_Node);
    iterator find(const K& ro_Key)
    {
        iterator oIt = lower_bound(ro_Key);
        return (oIt == end() || key_compare(ro_Key, _Key(oIt._Mynode()))) ? end() : oIt;
    }
    void erase(iterator o_It)
    {
        iterator oTmp(o_It._Ptr);
        ++o_It;
        iterator oRet(oTmp._Ptr);
        usnd_free(base_erase(oRet._Ptr));
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
    smap(const CMP& ro_Pred = CMP(), const ALLOC& ro_Alloc = ALLOC()) : _Tr(ro_Pred, false, ro_Alloc) {}
    iterator begin(void) { return _Tr.begin(); }
    iterator end(void) { return _Tr.end(); }
    void erase(iterator o_It) { _Tr.erase(o_It); }
    iterator find(const K& ro_Key) { return _Tr.find(ro_Key); }
    spair<iterator, bool> insert(const spair<const K, T>& ro_Value) { return _Tr.insert(ro_Value); }
    _Imp _Tr; /* +0x0 */
};
}

struct CSoundSemaphore : usnd::smap<int, struct CSoundSemaphoreInfo*, usnd::less<int>, usnd::sallocator<struct CSoundSemaphoreInfo*> > {
    CSoundSemaphore(unsigned int u32_ChannelId, unsigned int u32_ChannelSize);
    ~CSoundSemaphore();
    void* operator new(size_t ui_Size) { return usnd_malloc(ui_Size); }
    void f_vSynchro(void);
    unsigned int mu32ChannelId; /* +0x10 */
    unsigned int mu32ChannelSize; /* +0x14 */
};

struct CSoundSemaphoreCont : usnd::smap<int, CSoundSemaphore*, usnd::less<int>, usnd::sallocator<CSoundSemaphore*> > {
    typedef usnd::smap<int, CSoundSemaphore*, usnd::less<int>, usnd::sallocator<CSoundSemaphore*> >::_Imp _Tree;
    ~CSoundSemaphoreCont();
    void operator delete(void* pv_Ptr) { usnd_free(pv_Ptr); }
    unsigned char mfn_bRemoveSoundSemaphore(int s32_ChannelId);
    unsigned char mfn_bSynchroSoundSemaphore(void);
    CSoundSemaphore* mfn_poAddSoundSemaphore(int s32_ChannelId, int s32_ChannelSize);
    CSoundSemaphore* mfn_poFindSoundSemaphore(int s32_ChannelId);
    void mfn_vDelete(void);
    static CSoundSemaphoreCont& mfn_roGetInstance(void);
};












/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 57–59 */
/* addr: 0x001c9dd0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 57
 *   +0x0014 -> line 58
 *   +0x002c -> line 59
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
struct CLinkTypeActorCont {
    static CLinkTypeActorCont& mfn_roGetInstance(void);
    int mfn_s32AddActorType(int s32_VolId, const _tdstAllRetObjectSound* pst_IActor);
};

extern "C" int SND_fn_lAddObjectTypeSound2(_tdstAllRetObjectSound* pst_IActor, int s32_VolId)
{
    return CLinkTypeActorCont::mfn_roGetInstance().mfn_s32AddActorType(s32_VolId, pst_IActor);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 110–124 */
/* addr: 0x001c9e10  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 *   +0x0008 -> line 115
 *   +0x000c -> line 110
 *   +0x0018 -> line 114
 *   +0x0020 -> line 110
 *   +0x0024 -> line 115
 *   +0x00ac -> line 117
 *   +0x00b0 -> line 115
 *   +0x00b4 -> line 117
 *   +0x00d4 -> line 119
 *   +0x00e0 -> line 120
 *   +0x0118 -> line 121
 *   +0x011c -> line 123
 *   +0x0120 -> line 124
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CSoundSemaphoreCont::mfn_bRemoveSoundSemaphore(int s32_ChannelId)
{
    unsigned char b_Answer = 0;
    int lKey = s32_ChannelId;
    iterator it;

    it = find(lKey);
    if (it != end())
    {
        delete (*it).second;
        erase(it);
        b_Answer = 1;
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 98–107 */
/* addr: 0x001ca030  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 98
 *   +0x000c -> line 101
 *   +0x002c -> line 104
 *   +0x0034 -> line 105
 *   +0x0068 -> line 107
 *   +0x006c -> line 106
 *   +0x0070 -> line 107
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CSoundSemaphoreCont::mfn_bSynchroSoundSemaphore(void)
{
    iterator it_Cont;

    for (it_Cont = begin(); it_Cont != end(); ++it_Cont)
    {
        (*it_Cont).second->f_vSynchro();
    }
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 71–95 */
/* addr: 0x001ca0c0  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 71
 *   +0x0004 -> line 75
 *   +0x0008 -> line 71
 *   +0x002c -> line 75
 *   +0x004c -> line 79
 *   +0x0108 -> line 80
 *   +0x0110 -> line 82
 *   +0x011c -> line 84
 *   +0x0124 -> line 87
 *   +0x0148 -> line 88
 *   +0x0150 -> line 90
 *   +0x0164 -> line 94
 *   +0x0168 -> line 95
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CSoundSemaphore* CSoundSemaphoreCont::mfn_poAddSoundSemaphore(int s32_ChannelId, int s32_ChannelSize)
{
    CSoundSemaphore* po_Answer = NULL;

    if ((s32_ChannelId == -3) || (s32_ChannelId == -2) || (s32_ChannelId == -1))
        return po_Answer;

    iterator it = find(s32_ChannelId);
    if (it != end())
    {
        po_Answer = (*it).second;
    }
    if (po_Answer)
    {
        if (po_Answer->mu32ChannelSize != s32_ChannelSize)
            po_Answer->mu32ChannelSize = s32_ChannelSize;
    }
    else
    {
        po_Answer = new CSoundSemaphore(s32_ChannelId, s32_ChannelSize);
        if (po_Answer)
        {
            insert(usnd::spair<const int, CSoundSemaphore*>(s32_ChannelId, po_Answer));
        }
    }
    return po_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 58–67 */
/* addr: 0x001ca540  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 58
 *   +0x0008 -> line 63
 *   +0x000c -> line 58
 *   +0x001c -> line 63
 *   +0x00a8 -> line 64
 *   +0x00ac -> line 63
 *   +0x00b0 -> line 64
 *   +0x00d0 -> line 65
 *   +0x00d8 -> line 66
 *   +0x00dc -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CSoundSemaphore* CSoundSemaphoreCont::mfn_poFindSoundSemaphore(int s32_ChannelId)
{
    CSoundSemaphore* po_Answer = NULL;
    int lKey = s32_ChannelId;
    iterator it;

    it = find(lKey);
    if (it != end())
    {
        po_Answer = (*it).second;
    }
    return po_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 45–55 */
/* addr: 0x001ca630  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 45
 *   +0x0014 -> line 49
 *   +0x001c -> line 51
 *   +0x0030 -> line 52
 *   +0x0080 -> line 53
 *   +0x0084 -> line 54
 *   +0x00d0 -> line 55
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSoundSemaphoreCont::mfn_vDelete(void)
{
    iterator it;
    int i;

    for (i = 0; (begin() != end()) && (i < 30000); )
    {
        delete ((_Tree::sTreeNode*)_Tr._GetHead()->m_poLeft)->m_oValue.second;
        it = begin(); erase(it);
        i++;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 37–42 */
/* addr: 0x001ca720  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 *   +0x001c -> line 40
 *   +0x003c -> line 41
 *   +0x00e8 -> line 42
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CSoundSemaphoreCont::~CSoundSemaphoreCont()
{
    iterator it;

    for (it = begin(); it != end(); ++it)
    {
        delete (*it).second;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 30–33 */
/* addr: 0x001caa20  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 30
 *   +0x0008 -> line 31
 *   +0x007c -> line 33
 *   +0x0080 -> line 32
 *   +0x0088 -> line 33
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CSoundSemaphoreCont& CSoundSemaphoreCont::mfn_roGetInstance(void)
{
    static CSoundSemaphoreCont oSingleton;

    return oSingleton;
}
