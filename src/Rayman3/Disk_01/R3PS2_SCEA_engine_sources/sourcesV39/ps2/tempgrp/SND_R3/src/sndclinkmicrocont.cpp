/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct less less;
typedef struct stree stree;
typedef struct sTreeLink sTreeLink;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct CLinkMicroCont CLinkMicroCont;
typedef struct iterator_base iterator_base;
typedef struct _stVector _stVector;
typedef struct CLinkMicro CLinkMicro;
typedef struct _tdstAllRetMicroSound _tdstAllRetMicroSound;
typedef struct sset sset;
namespace usnd { struct CMicrophone; }
typedef usnd::CMicrophone CMicrophone;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct smap smap;
typedef struct iterator iterator;
typedef struct C3DParam C3DParam;
typedef struct streebase streebase;

/* Empty allocator support object recovered from the STL-backed tree layout. */
struct sallocator {};

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

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

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct spair {
    int first; /* +0x0 */
    CLinkMicro* second; /* +0x4 */
};

struct sTreeNode : sTreeLink {
    spair m_oValue; /* +0x10 */
};


struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CLinkMicro {
    CLinkMicro(_tdstAllRetMicroSound* pst_IMicro, int s32_MicroId, CMicrophone* po_Microphone)
        : mrstIMicro(pst_IMicro), ms32MicroId(s32_MicroId), mroMicro(po_Microphone)
    {
        mfn_bApplyPositionAndVelocity();
    }
    void* operator new(size_t ui_Size);
    _tdstAllRetMicroSound* mrstIMicro; /* +0x0 */
    int ms32MicroId; /* +0x4 */
    CMicrophone* mroMicro; /* +0x8 */
    unsigned char mfn_bApplyPositionAndVelocity(void);
};

struct _tdstAllRetMicroSound {
    int (*X)(int); /* +0x0 */
    int (*Y)(int); /* +0x4 */
    int (*Z)(int); /* +0x8 */
    int (*VX)(int); /* +0xc */
    int (*VY)(int); /* +0x10 */
    int (*VZ)(int); /* +0x14 */
    int (*DNX)(int); /* +0x18 */
    int (*DNY)(int); /* +0x1c */
    int (*DNZ)(int); /* +0x20 */
    int (*DTX)(int); /* +0x24 */
    int (*DTY)(int); /* +0x28 */
    int (*DTZ)(int); /* +0x2c */
    int (*Filtre)(int); /* +0x30 */
    int (*pfnPosition)(int, _stVector*); /* +0x34 */
    int (*pfnVelocity)(int, _stVector*); /* +0x38 */
    int (*pfnNormal)(int, _stVector*); /* +0x3c */
    int (*pfnTangent)(int, _stVector*); /* +0x40 */
};

struct sset {
    stree _Tr; /* +0x0 */
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

struct usnd::CMicrophone : C3DParam {
    /* vtable pointer at +0x30 (retail __vt__Q24usnd11CMicrophone). */
    virtual ~CMicrophone();
    virtual void fv_vSetPos(float f_X, float f_Y, float f_Z);
    virtual void fv_vSetSpeed(float f_X, float f_Y, float f_Z);
    virtual void fv_vSetOrientation(float f_FrontX, float f_FrontY, float f_FrontZ, float f_TopX, float f_TopY, float f_TopZ);
    sset m_oNotifTargets; /* +0x34 */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

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
        iterator(const iterator& ro_It);
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
        usnd_free(base_erase((o_It++)._Ptr));
    }
    ALLOC allocator; /* +0xc */
    CMP key_compare; /* +0xd */
};

template <class K, class V, class KFN, class CMP, class ALLOC>
stree<K, V, KFN, CMP, ALLOC>::iterator::iterator(const iterator& ro_It)
    : iterator_base(ro_It._Ptr)
{
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
    void erase(iterator o_It) { _Tr.erase(o_It); }
    iterator find(const K& ro_Key) { return _Tr.find(ro_Key); }
    spair<iterator, bool> insert(const spair<const K, T>& ro_Value) { return _Tr.insert(ro_Value); }
    _Imp _Tr; /* +0x0 */
};
}

inline void* CLinkMicro::operator new(size_t ui_Size)
{
    return usnd_malloc(ui_Size);
}

namespace usnd {
struct CMicroFactory {
    CMicrophone* f_poCreateMicrophone(void);
    bool f_bDeleteMicrophone(CMicrophone* po_Microphone);
};
struct CMicroManager : CMicroFactory {
    static CMicroManager& fs_roGetInst(void);
};
}

extern "C" void fn_vConstructTdstAllRetMicroSound(_tdstAllRetMicroSound* pst_Dst);

struct CLinkMicroCont : usnd::smap<int, CLinkMicro*, usnd::less<int>, usnd::sallocator<CLinkMicro*> > {
    CLinkMicroCont(void)
    {
        fn_vConstructTdstAllRetMicroSound(&mstIMicro);
    }
    ~CLinkMicroCont();
    static _tdstAllRetMicroSound mstIMicro;
    static CLinkMicroCont& mfn_roGetInstance(void);
    unsigned char mfn_bSynchroMicroInstance(void);
    unsigned char mfn_bSetMicroInterface(const _tdstAllRetMicroSound* pst_IMicro);
    unsigned char mfn_bRemoveMicroInstance(int s32_MicroId);
    int mfn_s32AddMicroInstance(void);
};



















/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 37–87 */
/* addr: 0x001cf620  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 *   +0x0008 -> line 45
 *   +0x000c -> line 37
 *   +0x0018 -> line 45
 *   +0x0034 -> line 51
 *   +0x0050 -> line 52
 *   +0x0054 -> line 54
 *   +0x0070 -> line 60
 *   +0x008c -> line 62
 *   +0x00c4 -> line 84
 *   +0x00c8 -> line 64
 *   +0x00cc -> line 79
 *   +0x00d0 -> line 69
 *   +0x00d4 -> line 79
 *   +0x00d8 -> line 64
 *   +0x00dc -> line 69
 *   +0x00e0 -> line 84
 *   +0x00e4 -> line 79
 *   +0x00ec -> line 84
 *   +0x0104 -> line 86
 *   +0x0108 -> line 87
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CLinkMicro::mfn_bApplyPositionAndVelocity(void)
{
    _stVector st_Position;
    _stVector st_Velocity;
    _stVector st_Normal;
    _stVector st_Tangent;
    unsigned char b_Answer = 0;

    if (mrstIMicro->pfnPosition(ms32MicroId, &st_Position))
    {
        mroMicro->fv_vSetPos(st_Position.f32x, st_Position.f32y, st_Position.f32z);
        b_Answer = 1;
    }
    if (mrstIMicro->pfnVelocity(ms32MicroId, &st_Velocity))
    {
        mroMicro->fv_vSetSpeed(st_Velocity.f32x, st_Velocity.f32y, st_Velocity.f32z);
    }
    if (mrstIMicro->pfnNormal(ms32MicroId, &st_Normal) && mrstIMicro->pfnTangent(ms32MicroId, &st_Tangent))
    {
        mroMicro->fv_vSetOrientation(st_Normal.f32x, st_Normal.f32y, st_Normal.f32z,
                                     st_Tangent.f32y * st_Normal.f32z - st_Tangent.f32z * st_Normal.f32y,
                                     st_Tangent.f32x * st_Normal.f32z - st_Tangent.f32z * st_Normal.f32x,
                                     st_Tangent.f32x * st_Normal.f32y - st_Tangent.f32y * st_Normal.f32x);
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 116–119 */
/* addr: 0x001cf740  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 116
 *   +0x0008 -> line 117
 *   +0x0088 -> line 119
 *   +0x008c -> line 118
 *   +0x0094 -> line 119
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CLinkMicroCont& CLinkMicroCont::mfn_roGetInstance(void)
{
    static CLinkMicroCont o_LinkMicroCont;

    return o_LinkMicroCont;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 104–114 */
/* addr: 0x001cfb20  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 104
 *   +0x0014 -> line 109
 *   +0x0034 -> line 111
 *   +0x0050 -> line 112
 *   +0x0080 -> line 114
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CLinkMicroCont::mfn_bSynchroMicroInstance(void)
{
    iterator it;
    unsigned char b_Answer = 1;

    for (it = begin(); it != end(); ++it)
    {
        b_Answer = (*it).second->mfn_bApplyPositionAndVelocity() && b_Answer;
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 97–102 */
/* addr: 0x001cfbc0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 97
 *   +0x0008 -> line 98
 *   +0x0010 -> line 99
 *   +0x0014 -> line 98
 *   +0x00cc -> line 102
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CLinkMicroCont::mfn_bSetMicroInterface(const _tdstAllRetMicroSound* pst_IMicro)
{
    unsigned char b_Answer = 0;

    if (pst_IMicro)
    {
        b_Answer = 1;
        mstIMicro.X = pst_IMicro->X;
        mstIMicro.Y = pst_IMicro->Y;
        mstIMicro.Z = pst_IMicro->Z;
        mstIMicro.VX = pst_IMicro->VX;
        mstIMicro.VY = pst_IMicro->VY;
        mstIMicro.VZ = pst_IMicro->VZ;
        mstIMicro.DNX = pst_IMicro->DNX;
        mstIMicro.DNY = pst_IMicro->DNY;
        mstIMicro.DNZ = pst_IMicro->DNZ;
        mstIMicro.DTX = pst_IMicro->DTX;
        mstIMicro.DTY = pst_IMicro->DTY;
        mstIMicro.DTZ = pst_IMicro->DTZ;
        mstIMicro.pfnPosition = pst_IMicro->pfnPosition;
        mstIMicro.pfnVelocity = pst_IMicro->pfnVelocity;
        mstIMicro.pfnNormal = pst_IMicro->pfnNormal;
        mstIMicro.pfnTangent = pst_IMicro->pfnTangent;
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 77–90 */
/* addr: 0x001cfca0  size: 516 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 77
 *   +0x0008 -> line 82
 *   +0x000c -> line 77
 *   +0x001c -> line 82
 *   +0x0020 -> line 77
 *   +0x0024 -> line 82
 *   +0x0028 -> line 77
 *   +0x002c -> line 81
 *   +0x0030 -> line 82
 *   +0x00ec -> line 83
 *   +0x00f4 -> line 84
 *   +0x01bc -> line 85
 *   +0x01d0 -> line 86
 *   +0x01e0 -> line 87
 *   +0x01e4 -> line 89
 *   +0x01e8 -> line 90
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CLinkMicroCont::mfn_bRemoveMicroInstance(int s32_MicroId)
{
    unsigned char b_Answer = 0;
    iterator it = _Tr.lower_bound(s32_MicroId);

    if (it == _Tr.end() || _Tr.key_compare(s32_MicroId, _Tr._Key(it._Mynode())))
    {
        it = _Tr.end();
    }
    if (it._Ptr != _Tr._GetHead())
    {
        CLinkMicro* pMicro = (*it).second;

        _Tr.erase(_Tr.find(s32_MicroId));
        usnd::CMicroManager::fs_roGetInst().f_bDeleteMicrophone(pMicro->mroMicro);
        usnd_free(pMicro);
        b_Answer = 1;
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 44–64 */
/* addr: 0x001cffa0  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 44
 *   +0x001c -> line 49
 *   +0x0030 -> line 50
 *   +0x0038 -> line 51
 *   +0x0050 -> line 54
 *   +0x008c -> line 55
 *   +0x0094 -> line 56
 *   +0x00b0 -> line 58
 *   +0x00b8 -> line 60
 *   +0x00cc -> line 62
 *   +0x00d0 -> line 64
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CLinkMicroCont::mfn_s32AddMicroInstance(void)
{
    int s32_Answer = -1;
    CMicrophone* po_Microphone;

    po_Microphone = usnd::CMicroManager::fs_roGetInst().f_poCreateMicrophone();
    if (po_Microphone)
    {
        static int s32_MicroId = 1;
        CLinkMicro* po_LinkMicro = new CLinkMicro(&mstIMicro, ++s32_MicroId, po_Microphone);
        if (po_LinkMicro)
        {
            usnd::spair<const int, CLinkMicro*> o_Pair(s32_MicroId, po_LinkMicro);
            insert(o_Pair);
            s32_Answer = s32_MicroId;
        }
        else
        {
            usnd::CMicroManager::fs_roGetInst().f_bDeleteMicrophone(po_Microphone);
        }
    }
    return s32_Answer;
}
