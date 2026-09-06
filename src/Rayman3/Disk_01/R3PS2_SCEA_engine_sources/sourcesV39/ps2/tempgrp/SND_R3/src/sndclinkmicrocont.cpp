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
typedef struct CMicrophone CMicrophone;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct smap smap;
typedef struct iterator iterator;
typedef struct C3DParam C3DParam;
typedef struct streebase streebase;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

struct less {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
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

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    spair m_oValue; /* +0x10 */
};

struct CLinkMicroCont {
    /* C++ base smap at +0x0. */
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
    _tdstAllRetMicroSound* mrstIMicro; /* +0x0 */
    int ms32MicroId; /* +0x4 */
    CMicrophone* mroMicro; /* +0x8 */
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

struct CMicrophone {
    /* C++ base C3DParam at +0x0. */
    sset m_oNotifTargets; /* +0x34 */
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

struct smap {
    stree _Tr; /* +0x0 */
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
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
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
unsigned char _NilElmt__Q24usnd9streebase(void)
{
    _stVector st_Tangent;
    _stVector st_Normal;
    _stVector st_Velocity;
    _stVector st_Position;
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
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
void CLinkMicroCont::mfn_roGetInstance(void)
{
    CLinkMicroCont o_LinkMicroCont;
    signed char init;
    /* TODO: decompile from asm/... */
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
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
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
unsigned char CLinkMicroCont::mfn_bSetMicroInterface(_tdstAllRetMicroSound* pst_IMicro)
{
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
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
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
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
    CMicrophone* po_Microphone;
    int s32_Answer;
    int s32_MicroId;
    signed char init;
    /* TODO: decompile from asm/... */
}
