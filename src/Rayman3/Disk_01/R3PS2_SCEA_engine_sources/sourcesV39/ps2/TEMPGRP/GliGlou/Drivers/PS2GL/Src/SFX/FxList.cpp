/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct C_BaseFx C_BaseFx;
typedef struct C_FxList C_FxList;

struct C_BaseFx {
    unsigned int m_FogIsOn_saved; /* +0x0 */
    unsigned int m_FogColor_saved; /* +0x4 */
    float m_fFogOOStartMinusEnd_saved; /* +0x8 */
    float m_fFogEnd_saved; /* +0xc */
    unsigned int m_FogIsOn; /* +0x10 */
    unsigned int m_FogColor; /* +0x14 */
    float m_fFogOOStartMinusEnd; /* +0x18 */
    float m_fFogEnd; /* +0x1c */
    int m_pSearchKey; /* +0x20 */
};

struct C_FxList {
    int pFirst; /* +0x0 */
};

int PS2glAllocator64;
int PS2glLiberator;
anon_0 __vt__8C_BaseFx;
int GLI_BIG_GLOBALS_xFogIsOn;
float g_fFogEnd;
float GLI_g_OOStartMinusEnd;
unsigned int GLI_g_CurrentSDLFogColor;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 101–106 */
/* addr: 0x002ecb10  size: 136 bytes */
void ~C_(void)
{
    /* line map: */
    /*   line 101 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 106 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 126–129 */
/* addr: 0x002ecba0  size: 84 bytes */
void C_::SearchElement(void* pSearchKey, /* function pointer */ int p)
{
    /* line map: */
    /*   line 126 @ +0x000 */
    /*   line 129 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 101–113 */
/* addr: 0x002ecc00  size: 120 bytes */
void C_::vAddElement(C_BaseFx* pElement, /* function pointer */ int p2, /* function pointer */ int p)
{
    /* line map: */
    /*   line 101 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 108 @ +0x000 */
    /*   line 113 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 85–91 */
/* addr: 0x002ecc80  size: 72 bytes */
void C_::DeleteAllSDLs(/* function pointer */ int pNext, /* function pointer */ int p)
{
    /* line map: */
    /*   line 85 @ +0x000 */
    /*   line 89 @ +0x000 */
    /*   line 91 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 71–79 */
/* addr: 0x002eccd0  size: 88 bytes */
void C_::DeleteAllNoFree(/* function pointer */ int pNext, /* function pointer */ int p)
{
    /* line map: */
    /*   line 71 @ +0x000 */
    /*   line 75 @ +0x000 */
    /*   line 77 @ +0x000 */
    /*   line 79 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 56–65 */
/* addr: 0x002ecd30  size: 116 bytes */
void C_::DeleteAll(/* function pointer */ int pNext, /* function pointer */ int p)
{
    /* line map: */
    /*   line 56 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 65 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 48–48 */
/* addr: 0x002ecdb0  size: 160 bytes */
void ~C_(void)
{
    /* line map: */
    /*   line 48 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 44–44 */
/* addr: 0x002ece50  size: 12 bytes */
void C_(void)
{
    /* line map: */
    /*   line 44 @ +0x000 */
    /* TODO: decompile from asm/... */
}
