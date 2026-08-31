/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sTreeLink sTreeLink;
typedef struct sTreeNode sTreeNode;
typedef struct CLinkMicroCont CLinkMicroCont;
typedef struct iterator_base iterator_base;
typedef struct _stVector _stVector;
typedef struct CLinkMicro CLinkMicro;
typedef struct CMicrophone CMicrophone;
typedef struct C3DDirection C3DDirection;
typedef struct V3Ds V3Ds;
typedef struct smap smap;
typedef struct sset sset;
typedef struct iterator iterator;
typedef struct C3DParam C3DParam;
typedef struct streebase streebase;

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CLinkMicroCont {
    /* C++ base smap at +0x0. */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CLinkMicro {
    int mrstIMicro; /* +0x0 */
    int ms32MicroId; /* +0x4 */
    int mroMicro; /* +0x8 */
};

struct CMicrophone {
    /* C++ base C3DParam at +0x0. */
    sset m_oNotifTargets; /* +0x34 */
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

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

/* aggregate */ int mstIMicro;
/* aggregate */ int __dt;
sTreeLink _NilElmt;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 45–86 */
/* addr: 0x001cf620  size: 284 bytes */
unsigned char _NilElmt__Q24usnd9streebase(void)
{
    _stVector st_Tangent;
    _stVector st_Normal;
    _stVector st_Velocity;
    _stVector st_Position;
    unsigned char b_Answer;
    /* line map: */
    /*   line 45 @ +0x000 */
    /*   line 45 @ +0x000 */
    /*   line 52 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 79 @ +0x000 */
    /*   line 79 @ +0x000 */
    /*   line 69 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 117–118 */
/* addr: 0x001cf740  size: 156 bytes */
void CLinkMicroCont::mfn_roGetInstance(void)
{
    CLinkMicroCont o_LinkMicroCont;
    signed char init;
    /* line map: */
    /*   line 117 @ +0x000 */
    /*   line 118 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 109–112 */
/* addr: 0x001cfb20  size: 148 bytes */
unsigned char CLinkMicroCont::mfn_bSynchroMicroInstance(void)
{
    iterator it;
    unsigned char b_Answer;
    /* line map: */
    /*   line 109 @ +0x000 */
    /*   line 112 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 98–98 */
/* addr: 0x001cfbc0  size: 212 bytes */
unsigned char CLinkMicroCont::mfn_bSetMicroInterface(/* function pointer */ int pst_IMicro)
{
    unsigned char b_Answer;
    /* line map: */
    /*   line 98 @ +0x000 */
    /*   line 98 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 81–90 */
/* addr: 0x001cfca0  size: 516 bytes */
unsigned char CLinkMicroCont::mfn_bRemoveMicroInstance(int s32_MicroId)
{
    unsigned char b_Answer;
    /* line map: */
    /*   line 82 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 83 @ +0x000 */
    /*   line 85 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 90 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicrocont.cpp lines 49–62 */
/* addr: 0x001cffa0  size: 236 bytes */
int CLinkMicroCont::mfn_s32AddMicroInstance(CMicrophone* po_Microphone)
{
    int s32_Answer;
    int s32_MicroId;
    signed char init;
    /* line map: */
    /*   line 49 @ +0x000 */
    /*   line 51 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 62 @ +0x000 */
    /* TODO: decompile from asm/... */
}
