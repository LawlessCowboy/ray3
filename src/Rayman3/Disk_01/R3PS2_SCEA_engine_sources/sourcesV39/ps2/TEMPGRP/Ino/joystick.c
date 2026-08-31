/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joystick.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct stDevice stDevice;

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
};

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    int m_p_stState; /* +0x8 */
    int m_p_stLastState; /* +0xc */
    int m_pfnRead; /* +0x10 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joystick.c lines 140–162 */
/* addr: 0x002eef20  size: 80 bytes */
short INO_fn_wInit(void)
{
    /* line map: */
    /*   line 140 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joystick.c lines 37–37 */
/* addr: 0x002eef70  size: 12 bytes */
unsigned int INO_fn_ulJoyPreviousButtons(stDevice* _hDev)
{
    /* line map: */
    /*   line 37 @ +0x000 */
    /* TODO: decompile from asm/... */
}
