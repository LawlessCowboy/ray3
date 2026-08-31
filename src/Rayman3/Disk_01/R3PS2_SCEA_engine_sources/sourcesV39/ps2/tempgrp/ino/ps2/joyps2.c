/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stButtonCaps stButtonCaps;
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct stAxisCaps stAxisCaps;
typedef struct stJoystickCaps stJoystickCaps;

struct stButtonCaps {
    int m_lRange; /* +0x0 */
};

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

struct stAxisCaps {
    int m_lRange; /* +0x0 */
};

struct stJoystickCaps {
    stAxisCaps m_a_stAxisCaps[6]; /* +0x0 */
    stButtonCaps m_a_stButtonCaps[16]; /* +0x18 */
};

/* array */ int g_axPadMapping[2];
static int gs_iScePadInit;
signed char INO_aJoyUsedByAI[16];
static int gs_a_DeconnectedJoy[2];
static int gs_a_InitializedJoy[2];
long double a_u128PadDmaBuf[2][16];
unsigned int GLI_g_bInExpertRasters;
unsigned int GLI_g_bInMenu;
int g_EngineHasBeenPausedBecauseOfMC;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 28–28 */
/* addr: 0x002eef80  size: 12 bytes */
unsigned short INO_fn_uwJoyPreviousDirections(stDevice* _hDev)
{
    /* line map: */
    /*   line 28 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 792–802 */
/* addr: 0x002eef90  size: 280 bytes */
short INOPS2_fn_wReadJoystick(stDevice* _p_stDev, stJoystickCaps* p_stCaps, /* function pointer */ int p_stState)
{
    short wPort;
    short wReturn;
    /* line map: */
    /*   line 797 @ +0x000 */
    /*   line 792 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 798 @ +0x000 */
    /*   line 798 @ +0x000 */
    /*   line 802 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 773–773 */
/* addr: 0x002ef0b0  size: 44 bytes */
short INOPS2_fn_wJoyCheckConnectionFast(short _wJoystickNum)
{
    /* line map: */
    /*   line 773 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 741–761 */
/* addr: 0x002ef0e0  size: 656 bytes */
short INOPS2_fn_wJoyCheckConnection(short _wJoystickNum)
{
    int iSlot;
    int iPort;
    unsigned char act_align[6];
    /* line map: */
    /*   line 741 @ +0x000 */
    /*   line 741 @ +0x000 */
    /*   line 741 @ +0x000 */
    /*   line 741 @ +0x000 */
    /*   line 741 @ +0x000 */
    /*   line 741 @ +0x000 */
    /*   line 742 @ +0x000 */
    /*   line 742 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 724–729 */
/* addr: 0x002ef370  size: 28 bytes */
short INOPS2_fn_wJoyGetJoystickCaps(stJoystickCaps* _p_stJoyCaps)
{
    /* line map: */
    /*   line 728 @ +0x000 */
    /*   line 724 @ +0x000 */
    /*   line 729 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 626–684 */
/* addr: 0x002ef390  size: 876 bytes */
short INOPS2_fn_wRegisterJoystick(short _wJoystickNum)
{
    int iSlot;
    int iPort;
    int s_bBlackBoxPadDeclared;
    /* line map: */
    /*   line 626 @ +0x000 */
    /*   line 626 @ +0x000 */
    /*   line 626 @ +0x000 */
    /*   line 626 @ +0x000 */
    /*   line 626 @ +0x000 */
    /*   line 629 @ +0x000 */
    /*   line 629 @ +0x000 */
    /*   line 629 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 599–605 */
/* addr: 0x002ef700  size: 88 bytes */
short INOPS2_fn_wInit(void)
{
    /* line map: */
    /*   line 599 @ +0x000 */
    /*   line 602 @ +0x000 */
    /*   line 605 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 329–587 */
/* addr: 0x002ef760  size: 2324 bytes */
short fn_wJoyGetJoystickState(short _wJoystickNum, /* function pointer */ int _p_stJoyState, stJoystickCaps* _p_stJoyCaps, stButtonCaps* p_stButtonCaps)
{
    short xButton;
    float* p_fButtonValue;
    unsigned char* p_ucButtonValue;
    int lAxisCaps;
    signed char cAxisValue;
    int v2;
    int v1;
    /* aggregate */ int stContData;
    /* line map: */
    /*   line 329 @ +0x000 */
    /*   line 356 @ +0x000 */
    /*   line 359 @ +0x000 */
    /*   line 359 @ +0x000 */
    /*   line 423 @ +0x000 */
    /*   line 437 @ +0x000 */
    /*   line 440 @ +0x000 */
    /*   line 444 @ +0x000 */
    /* TODO: decompile from asm/... */
}
