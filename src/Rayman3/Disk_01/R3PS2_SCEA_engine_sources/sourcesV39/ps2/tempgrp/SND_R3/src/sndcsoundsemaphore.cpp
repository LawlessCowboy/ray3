/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern "C" void* usnd_malloc(unsigned int ui_Size);
extern "C" void usnd_free(void* pv_Ptr);
extern "C" int SND_fn_s32GetSoundHandleState(int s32_ObjectId, int s32_TypeId, int s32_HandleId);

/* Recovered aggregate layouts from MWCC debug type records.  The usnd
 * containers are a renamed Dinkumware red-black tree; only the members this
 * translation unit needs are declared.  Members defined in the class body are
 * inline, the others are out-of-line template instances. */
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
    void deallocate(void* pv_Ptr, unsigned int ui_Count);
};

template <class T1, class T2> struct spair {
    spair(void) {}
    spair(const T1& ro_First, const T2& ro_Second) : first(ro_First), second(ro_Second) {}
    T1 first;
    T2 second;
};

template <class T> void _Destroy(T* po_Object)
{
    po_Object->~T();
}

template <class K, class V, class KFN, class CMP, class ALLOC>
struct stree : streebase {
    struct sTreeNode : sTreeLink {
        V m_oValue; /* +0x10 */
    };
    struct iterator : iterator_base {
        iterator(void) {}
        iterator(sTreeNode* po_Node);
        iterator(const iterator& ro_It);
        V& operator*(void) const { return ((sTreeNode*)_Ptr)->m_oValue; }
        void operator++(void);
        bool operator!=(const iterator& ro_It) const { return !(_Ptr == ro_It._Ptr); }
        sTreeNode* _Mynode(void) const;
    };
    stree(const CMP& ro_Pred, bool b_Multi, const ALLOC& ro_Alloc) : streebase(b_Multi), allocator(ro_Alloc), key_compare(ro_Pred)
    {
        _Init();
    }
    void _Init(void)
    {
        _HeadLink = _Buynode(&_NilElmt, _Red);
        _Size = 0;
        _GetHead()->m_poLeft = _HeadLink;
        _GetHead()->m_poRight = _HeadLink;
    }
    sTreeNode* _GetHead(void) const;
    sTreeLink* _Lmost(void);
    sTreeLink* _Buynode(sTreeLink* po_Parent, _Redbl e_Color)
    {
        sTreeNode* poNode = (sTreeNode*)usnd_malloc(sizeof(sTreeNode));
        poNode->m_poParent = po_Parent;
        poNode->m_eColor = e_Color;
        return poNode;
    }
    iterator begin(void) { return iterator((sTreeNode*)_Lmost()->m_poLeft); }
    iterator end(void);
    iterator erase(iterator o_First, iterator o_Last)
    {
        while (o_First != o_Last)
        {
            _Erase(o_First._Mynode());
            ++o_First;
        }
        return o_First;
    }
    void erase(iterator o_It)
    {
        sTreeNode* poNode;
        iterator oNode = o_It;
        ++o_It;
        poNode = (sTreeNode*)base_erase(oNode._Ptr);
        _Destroy(&poNode->m_oValue);
        allocator.deallocate(poNode, 1);
    }
    iterator lower_bound(const K& ro_Key);
    static const K& _Key(sTreeNode* po_Node);
    iterator find(const K& ro_Key)
    {
        iterator oIt = lower_bound(ro_Key);
        return (oIt == end() || key_compare(ro_Key, _Key(oIt._Mynode()))) ? end() : oIt;
    }
    void _Erase(sTreeNode* po_Node);
    ALLOC allocator; /* +0xc */
    CMP key_compare; /* +0xd */
};

template <class K, class V, class KFN, class CMP, class ALLOC>
void stree<K, V, KFN, CMP, ALLOC>::_Erase(typename stree<K, V, KFN, CMP, ALLOC>::sTreeNode* po_Node)
{
    if (po_Node == &_NilElmt)
        return;
    do
    {
        sTreeLink* poRight = po_Node->m_poRight; if (poRight != &_NilElmt) { do { _Erase((sTreeNode*)poRight->m_poRight); usnd_free(poRight); poRight = poRight->m_poLeft; } while (poRight != &_NilElmt); }
        usnd_free(po_Node); po_Node = (sTreeNode*)po_Node->m_poLeft;
    } while (po_Node != &_NilElmt);
}

template <class K, class V, class KFN, class CMP, class ALLOC>
typename stree<K, V, KFN, CMP, ALLOC>::iterator stree<K, V, KFN, CMP, ALLOC>::end(void)
{
    iterator oIt;
    oIt._Ptr = _HeadLink;
    return oIt;
}

template <class K, class T, class CMP, class ALLOC>
struct smap {
    struct _Kfn {
    };
    typedef stree<K, spair<const K, T>, _Kfn, CMP, ALLOC> _Imp;
    typedef typename _Imp::iterator iterator;
    smap(const CMP& ro_Pred = CMP(), const ALLOC& ro_Alloc = ALLOC()) : _Tr(ro_Pred, false, ro_Alloc) {}
    iterator begin(void) { return _Tr.begin(); }
    iterator end(void) { return _Tr.end(); }
    iterator find(const K& ro_Key) { return _Tr.find(ro_Key); }
    iterator _EndNode(void) { return _Tr.iterator(_Tr._GetHead()); }
    void erase(iterator o_It) { _Tr.erase(o_It); }
    _Imp _Tr; /* +0x0 */
};
}

struct CSoundSemaphoreInfo {
    int ms32ObjectId; /* +0x0 */
    int ms32TypeId; /* +0x4 */
    int ms32HandleId; /* +0x8 */
};

struct CSoundSemaphore : usnd::smap<int, CSoundSemaphoreInfo*, usnd::less<int>, usnd::sallocator<CSoundSemaphoreInfo*> > {
    unsigned int mu32ChannelId; /* +0x10 */
    unsigned int mu32ChannelSize; /* +0x14 */
    CSoundSemaphore(unsigned int, unsigned int);
    ~CSoundSemaphore();
    void f_vSynchro(void);
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 442–448 */
/* addr: 0x001caab0  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 442
 *   +0x0010 -> line 444
 *   +0x002c -> line 445
 *   +0x0030 -> line 446
 *   +0x0038 -> line 447
 *   +0x0040 -> line 448
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The retail object (0x001caab0) holds the out-of-line copy of the
 * stree::_Init template member for the smap<int, CSoundSemaphore*> container
 * that CSoundSemaphoreCont owns; the debug record for that address only
 * carries the streebase::_NilElmt static member name, so the extractor
 * emitted the placeholder below.  The template member itself is defined in
 * the class body above. */
void _NilElmt__Q24usnd9streebase(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 62–98 */
/* addr: 0x001cabd0  size: 640 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 62
 *   +0x001c -> line 65
 *   +0x0020 -> line 67
 *   +0x0044 -> line 69
 *   +0x0048 -> line 70
 *   +0x0090 -> line 84
 *   +0x00ac -> line 86
 *   +0x00b0 -> line 88
 *   +0x00bc -> line 90
 *   +0x00f0 -> line 92
 *   +0x00fc -> line 93
 *   +0x024c -> line 96
 *   +0x0258 -> line 97
 *   +0x0260 -> line 98
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Placeholder destructor: the retail object destroys the container with
 * erase(begin(), end()), which is what instantiates the out-of-line
 * stree::erase(iterator, iterator) and stree::_Erase template members. */
CSoundSemaphore::~CSoundSemaphore(void)
{
    _Tr.erase(_Tr.begin(), _Tr.end());
}

void CSoundSemaphore::f_vSynchro(void)
{
    /* The handles whose sound request finished are collected in a static
     * table (the retail object keeps it in .bss, not on the stack). */
    static int sauiHandlesToDelete[50];
    unsigned int uiTemp;
    CSoundSemaphoreInfo* ro_Info;
    int uiNbHandlesToDelete;
    iterator it;

    uiNbHandlesToDelete = 0;

    for (it = begin(); it != end(); it._Inc())
    {
        ro_Info = (*it).second;
        switch (SND_fn_s32GetSoundHandleState(ro_Info->ms32ObjectId, ro_Info->ms32TypeId, ro_Info->ms32HandleId))
        {
        case 0:
        case 1:
            break;
        case -1:
        case 2:
        case 3:
        default:
            sauiHandlesToDelete[uiNbHandlesToDelete++] = ro_Info->ms32HandleId;
            break;
        }
        if (uiNbHandlesToDelete == 50)
            break;
    }

    for (uiTemp = 0; uiTemp < (unsigned int)uiNbHandlesToDelete; uiTemp++)
    {
        int s32HandleId = sauiHandlesToDelete[uiTemp];
        iterator itFound = find(s32HandleId);
        if (itFound != _EndNode())
        {
            usnd_free((*itFound).second);
            erase(itFound);
        }
    }

    if (uiNbHandlesToDelete == 50)
    {
        f_vSynchro();
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 430–438 */
/* addr: 0x001cb610  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 430
 *   +0x0004 -> line 431
 *   +0x0008 -> line 430
 *   +0x000c -> line 431
 *   +0x0010 -> line 430
 *   +0x0020 -> line 431
 *   +0x0028 -> line 433
 *   +0x0068 -> line 436
 *   +0x0074 -> line 437
 *   +0x0088 -> line 438
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The reconstructed body now lives in the usnd::stree template member
 * _Erase() defined above the smap stand-in; the original malformed
 * template-instantiation body is retained below as evidence. */
#if 0
void _Erase__Q24usnd215stree<i,Q24usnd32spair<Ci,P19CSoundSemaphoreInfo>,Q34usnd90smap<i,P19CSoundSemaphoreInfo,Q24usnd7less<i>,Q24usnd34sallocator<P19CSoundSemaphoreInfo>>4_Kfn,Q24usnd7less<i>,Q24usnd34sallocator<P19CSoundSemaphoreInfo>>FPQ34usnd215stree<i,Q24usnd32spair<Ci,P19CSoundSemaphoreInfo>,Q34usnd90smap<i,P19CSoundSemaphoreInfo,Q24usnd7less<i>,Q24usnd34sallocator<P19CSoundSemaphoreInfo>>4_Kfn,Q24usnd7less<i>,Q24usnd34sallocator<P19CSoundSemaphoreInfo>>9sTreeNode(sTreeNode* _pNode)
{
    sTreeNode* _pNode2;
    /* TODO: decompile from asm/... */
}

#endif

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 29–32 */
/* addr: 0x001cb6b0  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 29
 *   +0x0084 -> line 32
 *   +0x0088 -> line 29
 *   +0x008c -> line 32
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CSoundSemaphore::CSoundSemaphore(unsigned int u32_ChannelId, unsigned int u32_ChannelSize) : mu32ChannelId(u32_ChannelId), mu32ChannelSize(u32_ChannelSize)
{
}
