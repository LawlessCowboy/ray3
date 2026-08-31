/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    int m_p_stState; /* +0x8 */
    int m_p_stLastState; /* +0xc */
    int m_pfnRead; /* +0x10 */
};

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
};

short (*INOPS2_fn_wReadJoystick)(stDevice*);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c lines 48–51 */
/* addr: 0x002ee650  size: 48 bytes */
void HMU_fn_vCreateCriticalSection(void)
{
    /* line map: */
    /*   line 48 @ +0x000 */
    /*   line 51 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c lines 86–86 */
/* addr: 0x002ee680  size: 52 bytes */
short INO_fn_wIsJoystickConnectedFast(stDevice* _hDev)
{
    /* line map: */
    /*   line 86 @ +0x000 */
    /*   line 86 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c lines 81–81 */
/* addr: 0x002ee6c0  size: 52 bytes */
short INO_fn_wIsJoystickConnected(stDevice* _hDev)
{
    /* line map: */
    /*   line 81 @ +0x000 */
    /*   line 81 @ +0x000 */
    /* TODO: decompile from asm/... */
}
