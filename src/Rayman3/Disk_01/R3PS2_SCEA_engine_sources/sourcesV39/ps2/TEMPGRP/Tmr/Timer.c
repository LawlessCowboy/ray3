/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _stTimerCount _stTimerCount;
typedef struct _tdstTimer _tdstTimer;

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct _tdstTimer {
    short m_wTimerType; /* +0x0 */
    short m_wTimerState; /* +0x2 */
    _stTimerCount m_stTimerCount_InitValue; /* +0x8 */
    _stTimerCount m_stTimerCount_LastValue; /* +0x18 */
    _stTimerCount m_stTimerCount_TotalValue; /* +0x28 */
    unsigned int m_ulEventId; /* +0x38 */
    void (*m_p_fn_vEventCallback)(void); /* +0x3c */
};

unsigned char g_ucTmrModuleId;
short wTimerCount;
short TimerLibOk;
short TMR_g_wErmOK;
_tdstTimer a_stTimerTab[16];
unsigned int a3_ulEventFrequency[3];
unsigned int a3_ulTimerFrequency[3];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 81–88 */
/* addr: 0x00322b80  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 81
 *   +0x0018 -> line 84
 *   +0x001c -> line 83
 *   +0x0020 -> line 84
 *   +0x002c -> line 86
 *   +0x0030 -> line 85
 *   +0x0040 -> line 88
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern unsigned char g_ucNbRLIUse;
extern char g_ucIndex1;
extern char g_ucIndex2;
extern float g_xPercent;

void HIE_vSetCharactereRLI(unsigned char ucNbRLI, unsigned char ucIndex1, unsigned char ucIndex2, float xPercent)
{
    if (ucNbRLI <= 2 || ucNbRLI >= 0)
    {
        g_ucNbRLIUse = ucNbRLI;
        g_ucIndex1 = (char)ucIndex1 - 1;
        g_ucIndex2 = (char)ucIndex2 - 1;
        g_xPercent = xPercent;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 551–561 */
/* addr: 0x00322bd0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 551
 *   +0x0008 -> line 553
 *   +0x0014 -> line 555
 *   +0x0038 -> line 556
 *   +0x0040 -> line 558
 *   +0x004c -> line 560
 *   +0x0050 -> line 561
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short TMR_fn_wWait(unsigned int ulTimeToWait)
{

    if (!TimerLibOk)
    {
        Erm_fn_v_UpdateLastError(1, g_ucTmrModuleId, 0, 2, -1, 255, 255, NULL);
        return 0x7FFF;
    }

    fn_vTimerWait(ulTimeToWait * 294912);

    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 443–475 */
/* addr: 0x00322c30  size: 380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 443
 *   +0x0008 -> line 444
 *   +0x0014 -> line 446
 *   +0x0038 -> line 447
 *   +0x0040 -> line 449
 *   +0x0050 -> line 451
 *   +0x0074 -> line 452
 *   +0x007c -> line 454
 *   +0x0094 -> line 456
 *   +0x00b8 -> line 457
 *   +0x00c0 -> line 459
 *   +0x00dc -> line 461
 *   +0x0100 -> line 462
 *   +0x0108 -> line 465
 *   +0x010c -> line 467
 *   +0x0110 -> line 465
 *   +0x0114 -> line 467
 *   +0x011c -> line 468
 *   +0x0128 -> line 469
 *   +0x012c -> line 468
 *   +0x0130 -> line 469
 *   +0x013c -> line 470
 *   +0x0148 -> line 471
 *   +0x014c -> line 470
 *   +0x0150 -> line 471
 *   +0x015c -> line 472
 *   +0x0168 -> line 474
 *   +0x016c -> line 472
 *   +0x0170 -> line 475
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short TMR_fn_wResetTimer(short wTimerHandle)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 366–436 */
/* addr: 0x00322db0  size: 756 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 366
 *   +0x0010 -> line 373
 *   +0x001c -> line 375
 *   +0x0040 -> line 376
 *   +0x0048 -> line 378
 *   +0x005c -> line 380
 *   +0x0080 -> line 381
 *   +0x0088 -> line 383
 *   +0x00a0 -> line 385
 *   +0x00c4 -> line 386
 *   +0x00cc -> line 388
 *   +0x00e8 -> line 390
 *   +0x010c -> line 391
 *   +0x0114 -> line 402
 *   +0x0140 -> line 407
 *   +0x0148 -> line 409
 *   +0x014c -> line 408
 *   +0x0150 -> line 409
 *   +0x0154 -> line 408
 *   +0x0158 -> line 409
 *   +0x015c -> line 408
 *   +0x0160 -> line 409
 *   +0x0164 -> line 410
 *   +0x01c4 -> line 411
 *   +0x01cc -> line 415
 *   +0x01d0 -> line 416
 *   +0x01d4 -> line 415
 *   +0x01d8 -> line 416
 *   +0x01dc -> line 415
 *   +0x01e0 -> line 416
 *   +0x01e4 -> line 415
 *   +0x01e8 -> line 417
 *   +0x01f0 -> line 415
 *   +0x01f4 -> line 417
 *   +0x01f8 -> line 416
 *   +0x01fc -> line 418
 *   +0x0208 -> line 416
 *   +0x020c -> line 418
 *   +0x0210 -> line 419
 *   +0x026c -> line 420
 *   +0x0274 -> line 425
 *   +0x0278 -> line 426
 *   +0x027c -> line 432
 *   +0x0280 -> line 433
 *   +0x0284 -> line 432
 *   +0x028c -> line 433
 *   +0x0290 -> line 432
 *   +0x0294 -> line 433
 *   +0x02d0 -> line 435
 *   +0x02d4 -> line 433
 *   +0x02e0 -> line 436
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short TMR_fn_wReadTimer(short wTimerHandle, _stTimerCount* p_stTimerCount)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 332–359 */
/* addr: 0x003230b0  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 332
 *   +0x0008 -> line 335
 *   +0x0014 -> line 337
 *   +0x0038 -> line 338
 *   +0x0040 -> line 340
 *   +0x0050 -> line 342
 *   +0x0074 -> line 343
 *   +0x007c -> line 345
 *   +0x0098 -> line 347
 *   +0x00bc -> line 348
 *   +0x00c4 -> line 353
 *   +0x00d0 -> line 356
 *   +0x00d4 -> line 353
 *   +0x00d8 -> line 356
 *   +0x00dc -> line 354
 *   +0x00e0 -> line 356
 *   +0x00e4 -> line 354
 *   +0x00e8 -> line 356
 *   +0x00ec -> line 354
 *   +0x00f0 -> line 353
 *   +0x00f4 -> line 358
 *   +0x00f8 -> line 354
 *   +0x0100 -> line 356
 *   +0x0104 -> line 359
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short TMR_fn_wSetTimerValue(short wTimerHandle, _stTimerCount* p_stValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 154–200 */
/* addr: 0x003231c0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 154
 *   +0x0010 -> line 158
 *   +0x001c -> line 160
 *   +0x0040 -> line 161
 *   +0x0048 -> line 163
 *   +0x0058 -> line 165
 *   +0x007c -> line 166
 *   +0x0084 -> line 168
 *   +0x009c -> line 170
 *   +0x00c0 -> line 171
 *   +0x00c8 -> line 173
 *   +0x00e4 -> line 175
 *   +0x0108 -> line 176
 *   +0x0110 -> line 186
 *   +0x0118 -> line 188
 *   +0x0128 -> line 189
 *   +0x0134 -> line 188
 *   +0x0138 -> line 191
 *   +0x013c -> line 189
 *   +0x0144 -> line 191
 *   +0x0150 -> line 193
 *   +0x0154 -> line 194
 *   +0x0158 -> line 193
 *   +0x015c -> line 194
 *   +0x0160 -> line 193
 *   +0x0164 -> line 194
 *   +0x0168 -> line 193
 *   +0x016c -> line 194
 *   +0x0170 -> line 197
 *   +0x0174 -> line 199
 *   +0x0178 -> line 197
 *   +0x017c -> line 200
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short TMR_fn_wStartTimer(short wTimerHandle)
{
    _stTimerCount stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 110–147 */
/* addr: 0x00323350  size: 436 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 *   +0x0008 -> line 113
 *   +0x0014 -> line 115
 *   +0x0038 -> line 116
 *   +0x0040 -> line 118
 *   +0x0050 -> line 120
 *   +0x0074 -> line 121
 *   +0x007c -> line 123
 *   +0x008c -> line 125
 *   +0x00b0 -> line 126
 *   +0x00b8 -> line 128
 *   +0x00d0 -> line 130
 *   +0x00f4 -> line 131
 *   +0x00fc -> line 134
 *   +0x010c -> line 135
 *   +0x0140 -> line 136
 *   +0x014c -> line 138
 *   +0x0170 -> line 139
 *   +0x0178 -> line 142
 *   +0x0180 -> line 143
 *   +0x0184 -> line 142
 *   +0x018c -> line 143
 *   +0x019c -> line 144
 *   +0x01a8 -> line 147
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short TMR_fn_wCreateTimer(short wTimerType)
{
    short i;
    /* TODO: decompile from asm/... */
}
