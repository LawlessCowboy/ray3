/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkcallbackresobj.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct C3DParam C3DParam;
typedef struct CResObjState CResObjState;
typedef struct CResType CResType;
typedef struct C2DParams C2DParams;
typedef struct CResObj CResObj;
typedef struct smap smap;
typedef struct CResData CResData;
typedef struct CIdObj CIdObj;
typedef struct CCmdInterface CCmdInterface;
typedef struct CCritSect CCritSect;
typedef struct CActorResObj CActorResObj;
typedef struct streebase streebase;
typedef struct sstring sstring;
typedef struct C3DDirection C3DDirection;
typedef struct V3Ds V3Ds;
typedef struct sTreeLink sTreeLink;
typedef struct smap smap;
typedef struct CRefIdObj CRefIdObj;
typedef struct CRolloffParam CRolloffParam;
typedef struct smap smap;
typedef struct smap smap;

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct CResObjState {
    int m_poResObj; /* +0x0 */
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
    int m_poNext; /* +0x18 */
    int m_poPrevious; /* +0x1c */
    int m_poOwner; /* +0x20 */
    unsigned int m_uiLockCount; /* +0x24 */
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
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CActorResObj {
    /* C++ base CResObj at +0x0. */
    C3DParam m_o3DParams; /* +0xc */
    /* aggregate */ int m_oPitchModifier; /* +0x3c */
    CRolloffParam m_oRolloff; /* +0x60 */
    C2DParams m_o2DParams; /* +0x6c */
    unsigned char m_b3DParamsChanged; /* +0x7c */
    unsigned char m_b3DRes; /* +0x7d */
    sstring m_sName; /* +0x80 */
    unsigned char m_b2DParamsComputed; /* +0x84 */
    /* aggregate */ int m_oVolModifier; /* +0x88 */
    /* aggregate */ int m_oProgramContext; /* +0xac */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkcallbackresobj.cpp lines 56–66 */
/* addr: 0x001c9830  size: 244 bytes */
unsigned char CLinkCallbackResObjCont::mfn_bSynchroCallbackInstance(/* function pointer */ int ro_LinkCallback)
{
    iterator it;
    /* line map: */
    /*   line 56 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 65 @ +0x000 */
    /*   line 66 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkcallbackresobj.cpp lines 84–100 */
/* addr: 0x001c9930  size: 172 bytes */
unsigned char CLinkCallbackResObj::mfn_bSynchroCallbackResObj(void)
{
    int i;
    int nb;
    /* aggregate */ int aResObj;
    unsigned char b_Answer;
    /* line map: */
    /*   line 84 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 89 @ +0x000 */
    /*   line 94 @ +0x000 */
    /*   line 97 @ +0x000 */
    /*   line 100 @ +0x000 */
    /* TODO: decompile from asm/... */
}
