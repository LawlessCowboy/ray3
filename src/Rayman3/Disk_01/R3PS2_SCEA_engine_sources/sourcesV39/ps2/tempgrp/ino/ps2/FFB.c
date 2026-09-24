/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct INO_stForceFeedBack INO_stForceFeedBack;
typedef struct INO_stDIDevice INO_stDIDevice;
typedef struct SVG_stMCStatus_ SVG_stMCStatus_;

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

struct INO_stForceFeedBack {
    unsigned int m_ulInUseSince; /* +0x0 */
    unsigned int m_ulInUseUntil; /* +0x4 */
    unsigned char m_ucFadeInStartValue; /* +0x8 */
    unsigned int m_ulFadeInTime; /* +0xc */
    unsigned char m_ucConstantValue; /* +0x10 */
    int m_lConstantTime; /* +0x14 */
    unsigned char m_ucFadeOutStopValue; /* +0x18 */
    unsigned int m_ulFadeOutTime; /* +0x1c */
    unsigned char m_ucSmallActuator; /* +0x20 */
};

struct INO_stDIDevice {
    INO_stForceFeedBack m_stForceFeedBack[3]; /* +0x0 */
    INO_stForceFeedBack m_stForceFeedBackPrecreated[20]; /* +0x6c */
};

struct SVG_stMCStatus_ {
    int iPort; /* +0x0 */
    int iSlot; /* +0x4 */
    int iStatus; /* +0x8 */
};

static int INO_gs_EffectsArePaused;
int INO_gs_a_bIsForceFeedBack[2];
INO_stDIDevice INO_g_a_stDIDevice[2];
SVG_stMCStatus_ g_axPadMapping;
int MENU_g_bVibration;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 212–224 */
/* addr: 0x002f0080  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 212
 *   +0x001c -> line 217
 *   +0x0030 -> line 220
 *   +0x0038 -> line 221
 *   +0x00f8 -> line 224
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int INOPS2_fn_iWaitCmd(int _iPort, int _iSlot, int time_to_wait)
{
    int iSceInfo;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 559–564 */
/* addr: 0x002f0190  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 559
 *   +0x000c -> line 560
 *   +0x0014 -> line 562
 *   +0x0018 -> line 564
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vResumeAllFFBEffectForAllDevice(void)
{
    if (MENU_g_bVibration) {
        INO_gs_EffectsArePaused = 0;
    } else {
        INO_gs_EffectsArePaused = 1;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 551–552 */
/* addr: 0x002f01b0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 551
 *   +0x0004 -> line 552
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vPauseAllFFBEffectForAllDevice(void)
{
    INO_gs_EffectsArePaused = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 504–545 */
/* addr: 0x002f01c0  size: 712 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 504
 *   +0x0024 -> line 506
 *   +0x0028 -> line 504
 *   +0x0030 -> line 513
 *   +0x005c -> line 515
 *   +0x0060 -> line 519
 *   +0x0064 -> line 515
 *   +0x0068 -> line 519
 *   +0x0074 -> line 523
 *   +0x00fc -> line 524
 *   +0x0108 -> line 528
 *   +0x019c -> line 530
 *   +0x0208 -> line 537
 *   +0x0234 -> line 539
 *   +0x0254 -> line 542
 *   +0x0274 -> line 543
 *   +0x0278 -> line 544
 *   +0x0280 -> line 542
 *   +0x0284 -> line 544
 *   +0x029c -> line 545
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vForceFeedBackRunTime(unsigned int ulCurrentTime, stDevice* hDev)
{
    unsigned char _bSmallActuator;
    short wTotalFFB;
    short wDev;
    short i;
    unsigned char act_direct[6];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 473–497 */
/* addr: 0x002f0490  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 473
 *   +0x0018 -> line 474
 *   +0x001c -> line 477
 *   +0x0048 -> line 481
 *   +0x0054 -> line 483
 *   +0x0070 -> line 486
 *   +0x0084 -> line 487
 *   +0x00b0 -> line 493
 *   +0x00c4 -> line 496
 *   +0x00d4 -> line 497
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int INO_fn_bIsSmallActuatorActivated(unsigned int _ulCurrentTime, INO_stForceFeedBack* _p_stFFB)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 421–461 */
/* addr: 0x002f0570  size: 1052 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 421
 *   +0x000c -> line 422
 *   +0x0014 -> line 425
 *   +0x002c -> line 426
 *   +0x0030 -> line 429
 *   +0x005c -> line 433
 *   +0x0068 -> line 435
 *   +0x0084 -> line 438
 *   +0x0234 -> line 444
 *   +0x0260 -> line 450
 *   +0x0268 -> line 453
 *   +0x0414 -> line 461
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucFFBIntensityAtTime(INO_stForceFeedBack* _p_stFFB, unsigned int _ulCurrentTime)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 389–410 */
/* addr: 0x002f0990  size: 380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 389
 *   +0x0024 -> line 395
 *   +0x0050 -> line 397
 *   +0x006c -> line 398
 *   +0x0078 -> line 404
 *   +0x00d0 -> line 406
 *   +0x00d4 -> line 404
 *   +0x00d8 -> line 406
 *   +0x00e0 -> line 404
 *   +0x00e8 -> line 406
 *   +0x00f8 -> line 407
 *   +0x0160 -> line 410
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
signed char INO_fn_cStopFFBEffectWithFade(unsigned int ulCurrentTime, stDevice* hDev, signed char cEffectNumber, float xFadeOutStopValue, float xFadeOutTime)
{
    float xConstantValue;
    signed char cNewEffectNumber;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 377–381 */
/* addr: 0x002f0b10  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 377
 *   +0x0018 -> line 379
 *   +0x0074 -> line 380
 *   +0x0094 -> line 381
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vStopAllFFBEffectForAllDevice(unsigned int ulCurrentTime)
{
    signed char i;

    for (i = 0; i < 2; i++) {
        signed char j;
        int effectOffset;

        for (j = 0, effectOffset = 0; j < 3; j++, effectOffset += sizeof(INO_stForceFeedBack)) {
            if ((j != -1) && (j < 3)) {
                ((INO_stDIDevice*)((char*)&INO_g_a_stDIDevice[i] + effectOffset))->m_stForceFeedBack[0].m_ulInUseUntil = ulCurrentTime;
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 366–371 */
/* addr: 0x002f0bb0  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 366
 *   +0x002c -> line 368
 *   +0x0030 -> line 370
 *   +0x0034 -> line 368
 *   +0x0038 -> line 370
 *   +0x00a4 -> line 371
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vStopAllFFBEffectForDevice(unsigned int ulCurrentTime, stDevice* hDev)
{
    short wDev;

    if (hDev != NULL) {
        signed char i;
        int effectOffset;

        wDev = hDev->m_wPort;
        if (INO_gs_a_bIsForceFeedBack[wDev]) {
            for (i = 0, effectOffset = 0; i < 3; i++, effectOffset += sizeof(INO_stForceFeedBack)) {
                if ((i != -1) && (i < 3)) {
                    ((INO_stDIDevice*)((char*)&INO_g_a_stDIDevice[wDev] + effectOffset))->m_stForceFeedBack[0].m_ulInUseUntil = ulCurrentTime;
                }
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 340–348 */
/* addr: 0x002f0c60  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 340
 *   +0x002c -> line 342
 *   +0x004c -> line 343
 *   +0x0054 -> line 347
 *   +0x009c -> line 348
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vStopFFBEffect(unsigned int ulCurrentTime, stDevice* hDev, signed char cEffectNumber)
{
    if ((hDev != NULL) && (INO_gs_a_bIsForceFeedBack[hDev->m_wPort])) {
        if ((cEffectNumber != -1) && (cEffectNumber < 3)) {
            if ((cEffectNumber != -1) && (cEffectNumber < 3)) {
                INO_g_a_stDIDevice[hDev->m_wPort].m_stForceFeedBack[cEffectNumber].m_ulInUseUntil = ulCurrentTime;
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 264–313 */
/* addr: 0x002f0d10  size: 1384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 264
 *   +0x0004 -> line 268
 *   +0x0030 -> line 270
 *   +0x0034 -> line 273
 *   +0x0038 -> line 270
 *   +0x003c -> line 273
 *   +0x0064 -> line 275
 *   +0x0078 -> line 276
 *   +0x0080 -> line 277
 *   +0x0088 -> line 276
 *   +0x008c -> line 277
 *   +0x00b0 -> line 278
 *   +0x00c4 -> line 279
 *   +0x00cc -> line 281
 *   +0x00e4 -> line 284
 *   +0x00e8 -> line 281
 *   +0x00fc -> line 282
 *   +0x0100 -> line 284
 *   +0x0104 -> line 282
 *   +0x010c -> line 284
 *   +0x0110 -> line 282
 *   +0x0124 -> line 284
 *   +0x0310 -> line 285
 *   +0x0360 -> line 286
 *   +0x03b4 -> line 287
 *   +0x0408 -> line 288
 *   +0x045c -> line 291
 *   +0x0460 -> line 288
 *   +0x0464 -> line 291
 *   +0x0474 -> line 293
 *   +0x0478 -> line 295
 *   +0x0480 -> line 298
 *   +0x04d0 -> line 299
 *   +0x0528 -> line 302
 *   +0x052c -> line 303
 *   +0x0538 -> line 304
 *   +0x0558 -> line 310
 *   +0x0560 -> line 313
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
signed char INO_fn_cCreateAndLaunchConstantFFBEffect(unsigned int ulCurrentTime, stDevice* hDev, float xFadeInStartValue, float xFadeInTime, float xConstantValue, float xConstantTime, float xFadeOutStopValue, float xFadeOutTime)
{
    unsigned char ucSmallActuator;
    INO_stForceFeedBack* p_stUsedForceFeedBack;
    short wDev;
    short wEffectNumber;
    short i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 241–251 */
/* addr: 0x002f1280  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 241
 *   +0x002c -> line 243
 *   +0x004c -> line 244
 *   +0x0054 -> line 250
 *   +0x0080 -> line 251
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vStopPreCreatedFFBEffect(unsigned int ulCurrentTime, stDevice* hDev, signed char cEffectNumber)
{
    if ((hDev != NULL) && (INO_gs_a_bIsForceFeedBack[hDev->m_wPort])) {
        if ((cEffectNumber != -1) && (cEffectNumber < 20)) {
            INO_g_a_stDIDevice[hDev->m_wPort].m_stForceFeedBackPrecreated[cEffectNumber].m_ulInUseUntil = ulCurrentTime;
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 212–230 */
/* addr: 0x002f1310  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 212
 *   +0x002c -> line 214
 *   +0x004c -> line 215
 *   +0x0054 -> line 219
 *   +0x007c -> line 221
 *   +0x0080 -> line 222
 *   +0x008c -> line 223
 *   +0x00ac -> line 229
 *   +0x00b0 -> line 230
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vStartPreCreatedFFBEffect(unsigned int ulCurrentTime, stDevice* hDev, signed char cEffectNumber)
{
    INO_stForceFeedBack* p_stUsedForceFeedBack;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 198–201 */
/* addr: 0x002f13d0  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 198
 *   +0x0014 -> line 199
 *   +0x0028 -> line 200
 *   +0x0094 -> line 201
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vDeleteAllPreCreatedConstantFFBEffectForAllDevices(void)
{
    short j;
    short i;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 20; j++) {
            INO_g_a_stDIDevice[i].m_stForceFeedBackPrecreated[j].m_ulInUseSince = 0;
            INO_g_a_stDIDevice[i].m_stForceFeedBackPrecreated[j].m_ulInUseUntil = 0;
            INO_g_a_stDIDevice[i].m_stForceFeedBackPrecreated[j].m_ucFadeInStartValue = 0;
            INO_g_a_stDIDevice[i].m_stForceFeedBackPrecreated[j].m_ulFadeInTime = 0;
            INO_g_a_stDIDevice[i].m_stForceFeedBackPrecreated[j].m_ucConstantValue = 0;
            INO_g_a_stDIDevice[i].m_stForceFeedBackPrecreated[j].m_lConstantTime = 0;
            INO_g_a_stDIDevice[i].m_stForceFeedBackPrecreated[j].m_ucFadeOutStopValue = 0;
            INO_g_a_stDIDevice[i].m_stForceFeedBackPrecreated[j].m_ulFadeOutTime = 0;
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 186–190 */
/* addr: 0x002f1470  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 186
 *   +0x002c -> line 187
 *   +0x0030 -> line 188
 *   +0x0034 -> line 187
 *   +0x0038 -> line 188
 *   +0x005c -> line 189
 *   +0x00a4 -> line 190
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vDeleteAllPreCreatedConstantFFBEffectForDevice(stDevice* hDev)
{
    short wDev;
    short i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 170–178 */
/* addr: 0x002f1520  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 170
 *   +0x002c -> line 172
 *   +0x004c -> line 173
 *   +0x0054 -> line 177
 *   +0x0130 -> line 178
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void INO_fn_vDeletePreCreatedConstantFFBEffect(stDevice* hDev, signed char cEffectNumber)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\FFB.c lines 122–161 */
/* addr: 0x002f1660  size: 1268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 122
 *   +0x0004 -> line 126
 *   +0x0030 -> line 131
 *   +0x0034 -> line 128
 *   +0x0038 -> line 131
 *   +0x0060 -> line 133
 *   +0x0070 -> line 134
 *   +0x0078 -> line 135
 *   +0x0080 -> line 134
 *   +0x0084 -> line 135
 *   +0x00a8 -> line 136
 *   +0x00bc -> line 137
 *   +0x00c4 -> line 139
 *   +0x00dc -> line 143
 *   +0x00e0 -> line 139
 *   +0x00f4 -> line 141
 *   +0x00f8 -> line 143
 *   +0x00fc -> line 141
 *   +0x0104 -> line 143
 *   +0x0108 -> line 141
 *   +0x010c -> line 139
 *   +0x0110 -> line 141
 *   +0x0120 -> line 143
 *   +0x030c -> line 144
 *   +0x035c -> line 145
 *   +0x03b0 -> line 146
 *   +0x0404 -> line 147
 *   +0x0408 -> line 146
 *   +0x040c -> line 147
 *   +0x0410 -> line 149
 *   +0x0418 -> line 147
 *   +0x041c -> line 149
 *   +0x0420 -> line 147
 *   +0x0430 -> line 149
 *   +0x0438 -> line 151
 *   +0x043c -> line 153
 *   +0x0444 -> line 156
 *   +0x0494 -> line 157
 *   +0x04ec -> line 161
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
signed char INO_fn_cPreCreateConstantFFBEffect(stDevice* hDev, float xFadeInStartValue, float xFadeInTime, float xConstantValue, float xConstantTime, float xFadeOutStopValue, float xFadeOutTime)
{
    unsigned char ucSmallActuator;
    INO_stForceFeedBack* p_stUsedForceFeedBack;
    short wDev;
    short wEffectNumber;
    short i;
    /* TODO: decompile from asm/... */
}
