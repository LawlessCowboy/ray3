/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c */
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

unsigned char g_ucINOModuleId;
unsigned char INO_gs_ucINOInitOK;
short INO_gs_xNbDevice;
int INO_g_bUsingMouse;
/* aggregate */ int INO_gs_a_tdhDevice;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 23–76 */
/* addr: 0x002ee700  size: 372 bytes */
void INO_fn_hCreateJoystickDevice(short _wPort, stDevice* p_stDev)
{
    /* line map: */
    /*   line 23 @ +0x000 */
    /*   line 28 @ +0x000 */
    /*   line 32 @ +0x000 */
    /*   line 32 @ +0x000 */
    /*   line 33 @ +0x000 */
    /*   line 39 @ +0x000 */
    /*   line 42 @ +0x000 */
    /*   line 46 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 489–489 */
/* addr: 0x002ee880  size: 12 bytes */
short INO_fn_wInvalidateHandle(stDevice* hDev)
{
    /* line map: */
    /*   line 489 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 458–474 */
/* addr: 0x002ee890  size: 172 bytes */
int INO_fn_wIsJoyConnected(int JoyNb, stDevice* hDev, stDevice* p_hDevice)
{
    int iResult;
    short xIndex;
    /* line map: */
    /*   line 458 @ +0x000 */
    /*   line 458 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 466 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 474 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 425–450 */
/* addr: 0x002ee940  size: 124 bytes */
short INO_fn_wIsConnectedFast(stDevice* _hDev)
{
    short wResult;
    /* line map: */
    /*   line 425 @ +0x000 */
    /*   line 425 @ +0x000 */
    /*   line 440 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 450 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 336–387 */
/* addr: 0x002ee9c0  size: 624 bytes */
short INO_fn_wReadAllDevices(unsigned short _uwType, short _wMode, stDevice* hDev, stDevice* p_hDevice)
{
    short wReadResult;
    short wOneGood;
    short wResult;
    short xIndex;
    /* line map: */
    /*   line 337 @ +0x000 */
    /*   line 336 @ +0x000 */
    /*   line 339 @ +0x000 */
    /*   line 339 @ +0x000 */
    /*   line 344 @ +0x000 */
    /*   line 347 @ +0x000 */
    /*   line 347 @ +0x000 */
    /*   line 350 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 320–327 */
/* addr: 0x002eec30  size: 176 bytes */
short INO_fn_wDeactivateDevice(stDevice* _hDev)
{
    /* line map: */
    /*   line 320 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 327 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 307–314 */
/* addr: 0x002eece0  size: 176 bytes */
short INO_fn_wActivateDevice(stDevice* _hDev)
{
    /* line map: */
    /*   line 307 @ +0x000 */
    /*   line 310 @ +0x000 */
    /*   line 310 @ +0x000 */
    /*   line 314 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 199–238 */
/* addr: 0x002eed90  size: 140 bytes */
void INO_fn_hCreateDevice(unsigned short _uwType, short _wPort, short _wHistoricSize, stDevice* p_stDev)
{
    /* line map: */
    /*   line 199 @ +0x000 */
    /*   line 199 @ +0x000 */
    /*   line 203 @ +0x000 */
    /*   line 211 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 238 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 172–179 */
/* addr: 0x002eee20  size: 252 bytes */
void INO_fn_vRelease(void)
{
    short xIndex;
    /* line map: */
    /*   line 172 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 179 @ +0x000 */
    /* TODO: decompile from asm/... */
}
