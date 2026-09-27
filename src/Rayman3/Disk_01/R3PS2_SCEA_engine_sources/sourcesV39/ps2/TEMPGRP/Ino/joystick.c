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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joystick.c lines 139–162 */
/* addr: 0x002eef20  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 139
 *   +0x0008 -> line 140
 *   +0x0014 -> line 152
 *   +0x0020 -> line 155
 *   +0x003c -> line 157
 *   +0x0040 -> line 162
 *   +0x0044 -> line 161
 *   +0x0048 -> line 162
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joystick.c lines 36–37 */
/* addr: 0x002eef70  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 36
 *   +0x0004 -> line 37
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int INO_fn_ulJoyPreviousButtons(stDevice* _hDev)
{
    return *(unsigned int*)((char*)_hDev->m_p_stLastState + 4);
}
