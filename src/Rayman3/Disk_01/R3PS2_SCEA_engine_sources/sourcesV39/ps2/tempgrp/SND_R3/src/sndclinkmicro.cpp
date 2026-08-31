/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkmicro.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CLinkMicro CLinkMicro;
typedef struct _stVector _stVector;
typedef struct streebase streebase;
typedef struct C3DParam C3DParam;
typedef struct sTreeLink sTreeLink;
typedef struct CMicrophone CMicrophone;
typedef struct C3DDirection C3DDirection;
typedef struct V3Ds V3Ds;
typedef struct sset sset;

struct CLinkMicro {
    int mrstIMicro; /* +0x0 */
    int ms32MicroId; /* +0x4 */
    int mroMicro; /* +0x8 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
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

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

/* addr: 0x001cf610  size: 8 bytes */
void CMusicMarkerNotifTarget::fv_vVarAccessed(void)
{
    /* TODO: decompile from asm/... */
}
