/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct _stCriticalSection _stCriticalSection;

struct _stCriticalSection {
    int Sid; /* +0x0 */
    int OwnerThreadId; /* +0x4 */
    int ReentrancyCount; /* +0x8 */
};

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
extern unsigned char HMU_g_bHMU_CS_Created;
extern _stCriticalSection g_stHMU_CS;
extern void PS2_fn_vCreateCriticalSection(_stCriticalSection* p_stCS);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c lines 47–53 */
/* addr: 0x002ee650  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 47
 *   +0x0008 -> line 48
 *   +0x0014 -> line 50
 *   +0x001c -> line 51
 *   +0x0024 -> line 53
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vCreateCriticalSection(void)
{
    if (HMU_g_bHMU_CS_Created == 0)
    {
        PS2_fn_vCreateCriticalSection(&g_stHMU_CS);
        HMU_g_bHMU_CS_Created = 1;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c lines 85–87 */
/* addr: 0x002ee680  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 85
 *   +0x0004 -> line 86
 *   +0x0008 -> line 85
 *   +0x000c -> line 86
 *   +0x0028 -> line 87
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INO_fn_wIsJoystickConnectedFast(stDevice* _hDev)
{
    if (*(unsigned short *)_hDev == 0x10)
        return INOPS2_fn_wJoyCheckConnectionFast(*(short *)((unsigned char *)_hDev + 2));
    return -1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\joyinit.c lines 80–82 */
/* addr: 0x002ee6c0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 *   +0x0004 -> line 81
 *   +0x0008 -> line 80
 *   +0x000c -> line 81
 *   +0x0028 -> line 82
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INO_fn_wIsJoystickConnected(stDevice* _hDev)
{
    /* TODO: decompile from asm/... */
}
