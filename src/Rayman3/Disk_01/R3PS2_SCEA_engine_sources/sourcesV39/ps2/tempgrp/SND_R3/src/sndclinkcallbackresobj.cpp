/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkcallbackresobj.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CResObjState CResObjState;
typedef struct CStringIsLess CStringIsLess;
typedef struct stree stree;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct smap smap;
typedef struct CCmdInterface CCmdInterface;
typedef struct CResType CResType;
typedef struct C2DParams C2DParams;
typedef struct CResObj CResObj;
typedef struct CProgramContext CProgramContext;
typedef struct sstring sstring;
typedef struct CResData CResData;
typedef struct CLinkCallbackResObj CLinkCallbackResObj;
typedef struct CLinkCallbackResObjCont CLinkCallbackResObjCont;
typedef struct sallocator sallocator;
struct sallocator {
};
typedef struct CUUID CUUID;
typedef struct CIdObj CIdObj;
typedef struct CCritSect CCritSect;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CRolloffParam CRolloffParam;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct streebase streebase;
typedef struct CActorModifiers CActorModifiers;
typedef struct less less;
typedef struct sTreeLink sTreeLink;
typedef struct CRefIdObj CRefIdObj;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

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

struct CStringIsLess {
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

struct smap {
    stree _Tr; /* +0x0 */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0; virtual order from retail
       __vt__Q24usnd15CActorModifiers. */
    virtual void fv_vVarChanged(struct CVar& ro_Var);
    virtual void fv_vVarDestroyed(struct CVar& ro_Var);
    virtual void fv_vVarAccessed(struct CVar& ro_Var);
    virtual void fv_vAddModifier(struct CVar& ro_Var, float f_Value);
    virtual void fv_vRemoveModifier(struct CVar& ro_Var);
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CPitchActorModifier : CActorModifiers {
};

struct CVolumeActorModifier : CActorModifiers {
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

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct CResObj {
    virtual ~CResObj();
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CResData : CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CLinkCallbackResObj {
    CActorResObj* mroActorObj; /* +0x0 */
    CResObj* mroResObj; /* +0x4 */
    void (*mpfnProc)(int); /* +0x8 */
    int ms32Param; /* +0xc */
    ~CLinkCallbackResObj();
    unsigned char mfn_bSynchroCallbackResObj(void);
};

extern "C" void usnd_free(void* pv_Ptr);

namespace usnd {
template <class T> struct sallocator {
};

/* Renamed Dinkumware list; members in the class body are inline. */
template <class T, class ALLOC> struct slist {
    struct _Node {
        _Node* _Next; /* +0x0 */
        _Node* _Prev; /* +0x4 */
        T _Value; /* +0x8 */
    };
    struct const_iterator {
        const_iterator(void) {}
        const_iterator(_Node* po_Node);
        const_iterator(const const_iterator& ro_It);
        const T& operator*(void) const { return _Ptr->_Value; }
        const_iterator& operator++(void) { _Ptr = _Ptr->_Next; return *this; }
        const_iterator operator++(int) { const_iterator oTmp = *this; ++*this; return oTmp; }
        bool operator!=(const const_iterator& ro_It) const { return !(_Ptr == ro_It._Ptr); }
        _Node* _Mynode(void) const { return _Ptr; }
        _Node* _Ptr; /* +0x0 */
    };
    struct iterator : const_iterator {
        iterator(void) {}
        iterator(_Node* po_Node) { _Ptr = po_Node; }
        T& operator*(void) const { return _Ptr->_Value; }
    };
    iterator begin(void) { return iterator(_Head->_Next); }
    iterator end(void) { return iterator(_Head); }
    iterator erase(iterator o_It)
    {
        _Node* poNode = (o_It++)._Mynode();
        poNode->_Prev->_Next = poNode->_Next;
        poNode->_Next->_Prev = poNode->_Prev;
        usnd_free(poNode);
        --_Size;
        return o_It;
    }
    ALLOC allocator; /* +0x0 */
    _Node* _Head; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};
}

struct CLinkCallbackResObjCont : usnd::slist<CLinkCallbackResObj*, usnd::sallocator<CLinkCallbackResObj*> > {
    unsigned char mfn_bSynchroCallbackInstance(void);
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct CActorProgramContext {
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
    smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
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

struct less {
    /* C++ base binary_function at +0x0. */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};






























/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkcallbackresobj.cpp lines 49–67 */
/* addr: 0x001c9830  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 49
 *   +0x0014 -> line 56
 *   +0x0024 -> line 58
 *   +0x002c -> line 60
 *   +0x003c -> line 62
 *   +0x0090 -> line 63
 *   +0x0098 -> line 62
 *   +0x00a4 -> line 63
 *   +0x00ac -> line 64
 *   +0x00b0 -> line 65
 *   +0x00dc -> line 67
 *   +0x00e0 -> line 66
 *   +0x00e4 -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CLinkCallbackResObjCont::mfn_bSynchroCallbackInstance(void)
{
    CLinkCallbackResObj* ro_LinkCallback;
    iterator it;

    for (it = begin(); it != end(); ++it)
    {
        ro_LinkCallback = *it;
        if (!ro_LinkCallback->mfn_bSynchroCallbackResObj())
        {
            erase(it);
            delete ro_LinkCallback;
        }
    }
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkcallbackresobj.cpp lines 57–100 */
/* addr: 0x001c9930  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 57
 *   +0x0004 -> line 84
 *   +0x0008 -> line 57
 *   +0x000c -> line 84
 *   +0x0010 -> line 57
 *   +0x001c -> line 84
 *   +0x0020 -> line 83
 *   +0x0024 -> line 84
 *   +0x0034 -> line 87
 *   +0x0044 -> line 89
 *   +0x005c -> line 92
 *   +0x0064 -> line 94
 *   +0x0078 -> line 95
 *   +0x008c -> line 97
 *   +0x0094 -> line 99
 *   +0x0098 -> line 100
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CLinkCallbackResObj::mfn_bSynchroCallbackResObj(void)
{
    int i;
    int nb;
    int aResObj[100];
    unsigned char b_Answer = 0;

    nb = mroActorObj->m_oProgramContext.fv_uiGetAllRunningObjs((CResObj**)aResObj, 100);
    for (i = 0; i < nb; i++)
    {
        if (mroResObj == ((CResObj**)aResObj)[i])
        {
            b_Answer = 1;
            break;
        }
    }
    if (!b_Answer && mpfnProc)
        mpfnProc(ms32Param);
    return b_Answer;
}
