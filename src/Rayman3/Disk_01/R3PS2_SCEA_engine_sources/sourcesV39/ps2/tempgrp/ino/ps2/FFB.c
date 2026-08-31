/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct INO_stDIDevice INO_stDIDevice;

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

struct INO_stDIDevice {
    /* array */ int m_stForceFeedBack[3]; /* +0x0 */
    /* array */ int m_stForceFeedBackPrecreated[20]; /* +0x6c */
};

static int INO_gs_EffectsArePaused;
int INO_gs_a_bIsForceFeedBack[2];
INO_stDIDevice INO_g_a_stDIDevice[2];
/* array */ int g_axPadMapping;
int MENU_g_bVibration;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 217–221 */
/* addr: 0x002f0080  size: 272 bytes */
int INOPS2_fn_iWaitCmd(int _iPort, int _iSlot, int time_to_wait)
{
    int iSceInfo;
    /* line map: */
    /*   line 217 @ +0x000 */
    /*   line 221 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 560–564 */
/* addr: 0x002f0190  size: 32 bytes */
void INO_fn_vResumeAllFFBEffectForAllDevice(void)
{
    /* line map: */
    /*   line 560 @ +0x000 */
    /*   line 564 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 552–552 */
/* addr: 0x002f01b0  size: 12 bytes */
void INO_fn_vPauseAllFFBEffectForAllDevice(void)
{
    /* line map: */
    /*   line 552 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 506–545 */
/* addr: 0x002f01c0  size: 712 bytes */
void INO_fn_vForceFeedBackRunTime(unsigned int ulCurrentTime, stDevice* hDev)
{
    unsigned char _bSmallActuator;
    short wTotalFFB;
    short wDev;
    short i;
    unsigned char act_direct[6];
    /* line map: */
    /*   line 506 @ +0x000 */
    /*   line 513 @ +0x000 */
    /*   line 519 @ +0x000 */
    /*   line 519 @ +0x000 */
    /*   line 524 @ +0x000 */
    /*   line 530 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 543 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 474–497 */
/* addr: 0x002f0490  size: 220 bytes */
int INO_fn_bIsSmallActuatorActivated(unsigned int _ulCurrentTime, /* function pointer */ int _p_stFFB)
{
    /* line map: */
    /*   line 474 @ +0x000 */
    /*   line 481 @ +0x000 */
    /*   line 486 @ +0x000 */
    /*   line 493 @ +0x000 */
    /*   line 497 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 422–461 */
/* addr: 0x002f0570  size: 1052 bytes */
unsigned char fn_ucFFBIntensityAtTime(/* function pointer */ int _p_stFFB, unsigned int _ulCurrentTime)
{
    /* line map: */
    /*   line 422 @ +0x000 */
    /*   line 426 @ +0x000 */
    /*   line 433 @ +0x000 */
    /*   line 438 @ +0x000 */
    /*   line 450 @ +0x000 */
    /*   line 461 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 395–410 */
/* addr: 0x002f0990  size: 380 bytes */
signed char INO_fn_cStopFFBEffectWithFade(unsigned int ulCurrentTime, stDevice* hDev, signed char cEffectNumber, float xFadeOutStopValue, float xFadeOutTime)
{
    float xConstantValue;
    signed char cNewEffectNumber;
    /* line map: */
    /*   line 395 @ +0x000 */
    /*   line 398 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 410 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 379–381 */
/* addr: 0x002f0b10  size: 156 bytes */
void INO_fn_vStopAllFFBEffectForAllDevice(unsigned int ulCurrentTime)
{
    signed char i;
    /* line map: */
    /*   line 379 @ +0x000 */
    /*   line 381 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 368–371 */
/* addr: 0x002f0bb0  size: 172 bytes */
void INO_fn_vStopAllFFBEffectForDevice(unsigned int ulCurrentTime, stDevice* hDev)
{
    short wDev;
    /* line map: */
    /*   line 368 @ +0x000 */
    /*   line 368 @ +0x000 */
    /*   line 371 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 342–347 */
/* addr: 0x002f0c60  size: 164 bytes */
void INO_fn_vStopFFBEffect(unsigned int ulCurrentTime, stDevice* hDev, signed char cEffectNumber)
{
    /* line map: */
    /*   line 342 @ +0x000 */
    /*   line 347 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 268–313 */
/* addr: 0x002f0d10  size: 1384 bytes */
signed char INO_fn_cCreateAndLaunchConstantFFBEffect(unsigned int ulCurrentTime, stDevice* hDev, float xFadeInStartValue, float xFadeInTime, float xConstantValue, float xConstantTime, float xFadeOutStopValue, float xFadeOutTime, /* function pointer */ int p_stUsedForceFeedBack)
{
    unsigned char ucSmallActuator;
    short wDev;
    short wEffectNumber;
    short i;
    /* line map: */
    /*   line 268 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 278 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 281 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 243–250 */
/* addr: 0x002f1280  size: 136 bytes */
void INO_fn_vStopPreCreatedFFBEffect(unsigned int ulCurrentTime, stDevice* hDev, signed char cEffectNumber)
{
    /* line map: */
    /*   line 243 @ +0x000 */
    /*   line 250 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 214–229 */
/* addr: 0x002f1310  size: 184 bytes */
void INO_fn_vStartPreCreatedFFBEffect(unsigned int ulCurrentTime, stDevice* hDev, signed char cEffectNumber, /* function pointer */ int p_stUsedForceFeedBack)
{
    /* line map: */
    /*   line 214 @ +0x000 */
    /*   line 219 @ +0x000 */
    /*   line 222 @ +0x000 */
    /*   line 229 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 199–201 */
/* addr: 0x002f13d0  size: 156 bytes */
void INO_fn_vDeleteAllPreCreatedConstantFFBEffectForAllDevices(void)
{
    short j;
    short i;
    /* line map: */
    /*   line 199 @ +0x000 */
    /*   line 201 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 187–189 */
/* addr: 0x002f1470  size: 172 bytes */
void INO_fn_vDeleteAllPreCreatedConstantFFBEffectForDevice(stDevice* hDev)
{
    short wDev;
    short i;
    /* line map: */
    /*   line 187 @ +0x000 */
    /*   line 187 @ +0x000 */
    /*   line 189 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 172–177 */
/* addr: 0x002f1520  size: 312 bytes */
void INO_fn_vDeletePreCreatedConstantFFBEffect(stDevice* hDev, signed char cEffectNumber)
{
    /* line map: */
    /*   line 172 @ +0x000 */
    /*   line 177 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 126–157 */
/* addr: 0x002f1660  size: 1268 bytes */
signed char INO_fn_cPreCreateConstantFFBEffect(stDevice* hDev, float xFadeInStartValue, float xFadeInTime, float xConstantValue, float xConstantTime, float xFadeOutStopValue, float xFadeOutTime, /* function pointer */ int p_stUsedForceFeedBack)
{
    unsigned char ucSmallActuator;
    short wDev;
    short wEffectNumber;
    short i;
    /* line map: */
    /*   line 126 @ +0x000 */
    /*   line 128 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 143 @ +0x000 */
    /*   line 141 @ +0x000 */
    /* TODO: decompile from asm/... */
}
