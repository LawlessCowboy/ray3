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
    anon_0* m_p_stState; /* +0x8 */
    anon_0* m_p_stLastState; /* +0xc */
    short (*m_pfnRead)(stDevice*); /* +0x10 */
};

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
};

unsigned char g_ucINOModuleId;
unsigned char INO_gs_ucINOInitOK;
short INO_gs_xNbDevice;
int INO_g_bUsingMouse;
int INO_gs_a_tdhDevice[2];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 19–77 */
/* addr: 0x002ee700  size: 372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 19
 *   +0x000c -> line 23
 *   +0x0028 -> line 25
 *   +0x0030 -> line 28
 *   +0x003c -> line 29
 *   +0x0048 -> line 32
 *   +0x004c -> line 38
 *   +0x0050 -> line 32
 *   +0x0054 -> line 38
 *   +0x0058 -> line 33
 *   +0x005c -> line 38
 *   +0x006c -> line 39
 *   +0x007c -> line 41
 *   +0x0084 -> line 42
 *   +0x0094 -> line 45
 *   +0x00a8 -> line 46
 *   +0x00b8 -> line 48
 *   +0x00c0 -> line 51
 *   +0x00d4 -> line 52
 *   +0x00e4 -> line 54
 *   +0x00ec -> line 57
 *   +0x010c -> line 59
 *   +0x0120 -> line 62
 *   +0x0130 -> line 64
 *   +0x0138 -> line 67
 *   +0x0144 -> line 70
 *   +0x0154 -> line 73
 *   +0x0160 -> line 76
 *   +0x0164 -> line 77
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_hCreateJoystickDevice(short _wPort)
{
    stDevice* p_stDev;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 487–489 */
/* addr: 0x002ee880  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 487
 *   +0x0004 -> line 489
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INO_fn_wInvalidateHandle(stDevice* hDev)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 453–476 */
/* addr: 0x002ee890  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 453
 *   +0x0004 -> line 458
 *   +0x0008 -> line 453
 *   +0x000c -> line 458
 *   +0x001c -> line 459
 *   +0x0024 -> line 463
 *   +0x0028 -> line 461
 *   +0x002c -> line 463
 *   +0x0034 -> line 465
 *   +0x0038 -> line 466
 *   +0x0054 -> line 469
 *   +0x0060 -> line 470
 *   +0x0064 -> line 469
 *   +0x0068 -> line 470
 *   +0x0070 -> line 472
 *   +0x0078 -> line 474
 *   +0x00a0 -> line 476
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int INO_fn_wIsJoyConnected(int JoyNb)
{
    stDevice* hDev;
    int iResult;
    stDevice* p_hDevice;
    short xIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 422–450 */
/* addr: 0x002ee940  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 422
 *   +0x0004 -> line 425
 *   +0x0008 -> line 422
 *   +0x0010 -> line 425
 *   +0x0024 -> line 428
 *   +0x0034 -> line 440
 *   +0x0048 -> line 442
 *   +0x0054 -> line 443
 *   +0x005c -> line 446
 *   +0x006c -> line 450
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INO_fn_wIsConnectedFast(stDevice* _hDev)
{
    short wResult;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 333–387 */
/* addr: 0x002ee9c0  size: 624 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 333
 *   +0x0014 -> line 337
 *   +0x0018 -> line 333
 *   +0x001c -> line 336
 *   +0x0020 -> line 333
 *   +0x0024 -> line 339
 *   +0x0028 -> line 333
 *   +0x0034 -> line 339
 *   +0x0044 -> line 341
 *   +0x004c -> line 344
 *   +0x0098 -> line 346
 *   +0x009c -> line 347
 *   +0x00a0 -> line 346
 *   +0x00ac -> line 347
 *   +0x00b0 -> line 348
 *   +0x00b8 -> line 350
 *   +0x00bc -> line 351
 *   +0x00d0 -> line 353
 *   +0x00e4 -> line 355
 *   +0x0104 -> line 357
 *   +0x0108 -> line 359
 *   +0x0178 -> line 362
 *   +0x018c -> line 364
 *   +0x01b0 -> line 366
 *   +0x01b4 -> line 364
 *   +0x01b8 -> line 366
 *   +0x01c0 -> line 364
 *   +0x01c4 -> line 366
 *   +0x01cc -> line 368
 *   +0x01f0 -> line 381
 *   +0x0210 -> line 383
 *   +0x0234 -> line 384
 *   +0x0244 -> line 386
 *   +0x0248 -> line 387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INO_fn_wReadAllDevices(unsigned short _uwType, short _wMode)
{
    short wReadResult;
    stDevice* hDev;
    short wOneGood;
    short wResult;
    stDevice* p_hDevice;
    short xIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 318–327 */
/* addr: 0x002eec30  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 318
 *   +0x001c -> line 320
 *   +0x008c -> line 322
 *   +0x0090 -> line 323
 *   +0x0094 -> line 322
 *   +0x009c -> line 323
 *   +0x00a4 -> line 326
 *   +0x00a8 -> line 327
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INO_fn_wDeactivateDevice(stDevice* _hDev)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 305–314 */
/* addr: 0x002eece0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 305
 *   +0x001c -> line 307
 *   +0x008c -> line 309
 *   +0x0090 -> line 310
 *   +0x0094 -> line 309
 *   +0x009c -> line 310
 *   +0x00a4 -> line 313
 *   +0x00a8 -> line 314
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INO_fn_wActivateDevice(stDevice* _hDev)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 196–238 */
/* addr: 0x002eed90  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 196
 *   +0x0004 -> line 199
 *   +0x0008 -> line 196
 *   +0x000c -> line 199
 *   +0x001c -> line 201
 *   +0x0024 -> line 203
 *   +0x0034 -> line 208
 *   +0x003c -> line 211
 *   +0x0050 -> line 214
 *   +0x0058 -> line 226
 *   +0x0060 -> line 228
 *   +0x0080 -> line 238
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_hCreateDevice(unsigned short _uwType, short _wPort, short _wHistoricSize)
{
    stDevice* p_stDev;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ino\inomain.c lines 169–181 */
/* addr: 0x002eee20  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 169
 *   +0x0014 -> line 172
 *   +0x0020 -> line 174
 *   +0x0038 -> line 176
 *   +0x00c0 -> line 177
 *   +0x00c8 -> line 176
 *   +0x00cc -> line 177
 *   +0x00e0 -> line 179
 *   +0x00e4 -> line 181
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vRelease(void)
{
    short xIndex;
    /* TODO: decompile from asm/... */
}
