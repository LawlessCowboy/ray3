/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicro.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CLinkMicro CLinkMicro;
typedef struct _stVector _stVector;
typedef struct _tdstAllRetMicroSound _tdstAllRetMicroSound;
typedef struct streebase streebase;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct sTreeLink sTreeLink;
typedef struct less less;
typedef struct stree stree;
typedef struct sset sset;
typedef struct CMicrophone CMicrophone;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

struct CLinkMicro {
    _tdstAllRetMicroSound* mrstIMicro; /* +0x0 */
    int ms32MicroId; /* +0x4 */
    CMicrophone* mroMicro; /* +0x8 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
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

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
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

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CMicrophone {
    /* C++ base C3DParam at +0x0. */
    sset m_oNotifTargets; /* +0x34 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicro.cpp lines 111–111 */
/* addr: 0x001cf610  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CMusicMarkerNotifTarget::fv_vVarAccessed(void)
{
    /* TODO: decompile from asm/... */
}
