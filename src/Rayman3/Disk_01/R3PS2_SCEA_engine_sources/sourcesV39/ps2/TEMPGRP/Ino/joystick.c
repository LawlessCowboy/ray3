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
    anon_0* m_p_stState; /* +0x8 */
    anon_0* m_p_stLastState; /* +0xc */
    short (*m_pfnRead)(stDevice*); /* +0x10 */
};

extern unsigned char INO_gs_ucINOInitOK;
extern int INO_gs_a_tdhDevice[2];
extern short INOPS2_fn_wInit(void);

short INO_fn_wInit(void)
{
    if (!INO_gs_ucINOInitOK) {
        memset(INO_gs_a_tdhDevice, 0, sizeof(INO_gs_a_tdhDevice));
        if (INOPS2_fn_wInit() == 1) {
            INO_gs_ucINOInitOK = 1;
        }
    }
    return INO_gs_ucINOInitOK;
}

unsigned int INO_fn_ulJoyPreviousButtons(stDevice* _hDev)
{
    return *(unsigned int*)((char*)_hDev->m_p_stLastState + 4);
}
