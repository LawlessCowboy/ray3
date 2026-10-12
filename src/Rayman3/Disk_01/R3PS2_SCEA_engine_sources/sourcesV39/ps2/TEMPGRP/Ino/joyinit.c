/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

extern unsigned char HMU_g_bHMU_CS_Created;
extern _stCriticalSection g_stHMU_CS;
extern void PS2_fn_vCreateCriticalSection(_stCriticalSection* p_stCS);
extern int INOPS2_fn_wJoyCheckConnectionFast(short _wJoystickNum);
extern int INOPS2_fn_wJoyCheckConnection(short _wJoystickNum);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    anon_0* m_p_stState; /* +0x8 */
    anon_0* m_p_stLastState; /* +0xc */
    short (*m_pfnRead)(stDevice*); /* +0x10 */
};

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
};

short (*INOPS2_fn_wReadJoystick)(stDevice*);

void HMU_fn_vCreateCriticalSection(void)
{
    if (HMU_g_bHMU_CS_Created == 0)
    {
        PS2_fn_vCreateCriticalSection(&g_stHMU_CS);
        HMU_g_bHMU_CS_Created = 1;
    }
}

short INO_fn_wIsJoystickConnectedFast(stDevice* _hDev)
{
    if (*(unsigned short *)_hDev == 0x10)
        return INOPS2_fn_wJoyCheckConnectionFast(*(short *)((unsigned char *)_hDev + 2));
    return -1;
}

short INO_fn_wIsJoystickConnected(stDevice* _hDev)
{
    if (_hDev->m_uwType == 0x10)
        return INOPS2_fn_wJoyCheckConnection(_hDev->m_wPort);
    return -1;
}
