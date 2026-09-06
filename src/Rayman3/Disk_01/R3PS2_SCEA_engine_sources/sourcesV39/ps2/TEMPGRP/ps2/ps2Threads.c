/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _stCriticalSection _stCriticalSection;
typedef struct ThreadParam ThreadParam;
typedef struct SemaParam SemaParam;

struct _stCriticalSection {
    int Sid; /* +0x0 */
    int OwnerThreadId; /* +0x4 */
    int ReentrancyCount; /* +0x8 */
};

struct ThreadParam {
    int status; /* +0x0 */
    void (*entry)(void*); /* +0x4 */
    int stack; /* +0x8 */
    int stackSize; /* +0xc */
    int gpReg; /* +0x10 */
    int initPriority; /* +0x14 */
    int currentPriority; /* +0x18 */
    unsigned int attr; /* +0x1c */
    unsigned int option; /* +0x20 */
    int waitType; /* +0x24 */
    int waitId; /* +0x28 */
    int wakeupCount; /* +0x2c */
};

struct SemaParam {
    int currentCount; /* +0x0 */
    int maxCount; /* +0x4 */
    int initCount; /* +0x8 */
    int numWaitThreads; /* +0xc */
    unsigned int attr; /* +0x10 */
    unsigned int option; /* +0x14 */
};

int g_iThreadDebugOutput;
int MTid;
int ETid;
int LTid;
int TOnSid;
int TOffSid;
int DisplaySid;
int LoadSuspendSid;
int ContextSaveSid;
_stCriticalSection stGL_CS;
unsigned char LTStack[131072];
unsigned char ETStack[131072];
int _gp;
void (*fn_vOneTrameThread)(void);
void (*fn_v_EngMain_MainLoop)(void);
unsigned int _heap_size;
unsigned int _end;
unsigned int _stack_size;
unsigned int _start;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 71–380 */
/* addr: 0x00318410  size: 924 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 71
 *   +0x0004 -> line 78
 *   +0x0008 -> line 71
 *   +0x0010 -> line 78
 *   +0x0018 -> line 81
 *   +0x0024 -> line 82
 *   +0x002c -> line 88
 *   +0x0038 -> line 93
 *   +0x0058 -> line 96
 *   +0x0078 -> line 104
 *   +0x0080 -> line 105
 *   +0x008c -> line 108
 *   +0x00a0 -> line 112
 *   +0x00a4 -> line 113
 *   +0x00c4 -> line 117
 *   +0x00cc -> line 118
 *   +0x00d8 -> line 134
 *   +0x00e0 -> line 139
 *   +0x00e4 -> line 140
 *   +0x0104 -> line 153
 *   +0x0110 -> line 155
 *   +0x0118 -> line 156
 *   +0x0120 -> line 157
 *   +0x0128 -> line 159
 *   +0x0138 -> line 162
 *   +0x0144 -> line 163
 *   +0x014c -> line 164
 *   +0x015c -> line 179
 *   +0x0168 -> line 180
 *   +0x0170 -> line 181
 *   +0x0194 -> line 188
 *   +0x019c -> line 191
 *   +0x01ac -> line 217
 *   +0x01b0 -> line 222
 *   +0x01b8 -> line 225
 *   +0x01c8 -> line 234
 *   +0x01d4 -> line 235
 *   +0x01dc -> line 236
 *   +0x020c -> line 243
 *   +0x0214 -> line 249
 *   +0x0224 -> line 262
 *   +0x0228 -> line 252
 *   +0x022c -> line 262
 *   +0x0238 -> line 263
 *   +0x0240 -> line 264
 *   +0x0270 -> line 270
 *   +0x0278 -> line 275
 *   +0x0288 -> line 285
 *   +0x0294 -> line 286
 *   +0x029c -> line 287
 *   +0x02cc -> line 293
 *   +0x02d4 -> line 298
 *   +0x02e4 -> line 300
 *   +0x02f0 -> line 301
 *   +0x0300 -> line 302
 *   +0x0308 -> line 308
 *   +0x0318 -> line 335
 *   +0x0328 -> line 337
 *   +0x0330 -> line 357
 *   +0x033c -> line 359
 *   +0x0344 -> line 361
 *   +0x0350 -> line 365
 *   +0x0358 -> line 366
 *   +0x0364 -> line 370
 *   +0x0374 -> line 373
 *   +0x037c -> line 376
 *   +0x0384 -> line 379
 *   +0x0388 -> line 380
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2_fn_lInit(void)
{
    int i;
    int i;
    int MTid;
    char* mes;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 530–568 */
/* addr: 0x003187b0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 530
 *   +0x0018 -> line 536
 *   +0x0024 -> line 537
 *   +0x0028 -> line 539
 *   +0x002c -> line 537
 *   +0x0030 -> line 539
 *   +0x0038 -> line 540
 *   +0x003c -> line 544
 *   +0x0048 -> line 545
 *   +0x004c -> line 548
 *   +0x0050 -> line 549
 *   +0x0058 -> line 550
 *   +0x005c -> line 551
 *   +0x0060 -> line 552
 *   +0x0064 -> line 553
 *   +0x006c -> line 559
 *   +0x007c -> line 564
 *   +0x0090 -> line 565
 *   +0x009c -> line 566
 *   +0x00b0 -> line 567
 *   +0x00bc -> line 568
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vFlipThreadsPriority(void)
{
    int ft_id;
    int bt_id;
    int ft_priority;
    int bt_priority;
    int lt_priority;
    int et_priority;
    ThreadParam T;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 505–526 */
/* addr: 0x00318890  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 505
 *   +0x0008 -> line 518
 *   +0x001c -> line 520
 *   +0x0024 -> line 522
 *   +0x0038 -> line 524
 *   +0x0040 -> line 526
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vWakeupMainThread(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 441–501 */
/* addr: 0x003188e0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 441
 *   +0x0008 -> line 444
 *   +0x0010 -> line 450
 *   +0x0024 -> line 452
 *   +0x003c -> line 454
 *   +0x0048 -> line 457
 *   +0x0050 -> line 461
 *   +0x0058 -> line 465
 *   +0x0070 -> line 471
 *   +0x007c -> line 473
 *   +0x0088 -> line 479
 *   +0x00a0 -> line 485
 *   +0x00ac -> line 496
 *   +0x00b4 -> line 500
 *   +0x00c8 -> line 501
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vThreadSwitch(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 400–422 */
/* addr: 0x003189c0  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 400
 *   +0x0004 -> line 403
 *   +0x0008 -> line 400
 *   +0x000c -> line 403
 *   +0x0014 -> line 404
 *   +0x0018 -> line 406
 *   +0x001c -> line 404
 *   +0x0020 -> line 406
 *   +0x0024 -> line 405
 *   +0x0028 -> line 407
 *   +0x002c -> line 404
 *   +0x0030 -> line 405
 *   +0x0034 -> line 409
 *   +0x0040 -> line 411
 *   +0x004c -> line 413
 *   +0x005c -> line 414
 *   +0x0080 -> line 418
 *   +0x008c -> line 420
 *   +0x0098 -> line 422
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_v_CreateTransitionThread(void)
{
    ThreadParam T;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 341–357 */
/* addr: 0x00318a70  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 341
 *   +0x0004 -> line 345
 *   +0x0008 -> line 341
 *   +0x000c -> line 347
 *   +0x0010 -> line 341
 *   +0x0018 -> line 345
 *   +0x001c -> line 344
 *   +0x0024 -> line 347
 *   +0x0030 -> line 354
 *   +0x0034 -> line 352
 *   +0x0038 -> line 351
 *   +0x003c -> line 354
 *   +0x0048 -> line 357
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vCreateSwitchSemaphores(void)
{
    SemaParam S;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 315–315 */
/* addr: 0x00318ad0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 315
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vSignalEndOfDisplay(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 289–298 */
/* addr: 0x00318ae0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 289
 *   +0x0004 -> line 293
 *   +0x0008 -> line 289
 *   +0x000c -> line 295
 *   +0x0010 -> line 293
 *   +0x0014 -> line 295
 *   +0x0020 -> line 298
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vCreateDisplaySemaphore(void)
{
    SemaParam S;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 282–282 */
/* addr: 0x00318b10  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 282
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vWaitTransitionOff(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 272–272 */
/* addr: 0x00318b20  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 272
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vWaitTransitionOn(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 262–262 */
/* addr: 0x00318b30  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 262
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vTriggerTransitionOff(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 252–252 */
/* addr: 0x00318b40  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 252
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vTriggerTransitionOn(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 229–245 */
/* addr: 0x00318b50  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 229
 *   +0x0004 -> line 233
 *   +0x0008 -> line 229
 *   +0x000c -> line 235
 *   +0x0010 -> line 229
 *   +0x0018 -> line 233
 *   +0x001c -> line 232
 *   +0x0024 -> line 235
 *   +0x0030 -> line 242
 *   +0x0034 -> line 240
 *   +0x0038 -> line 239
 *   +0x003c -> line 242
 *   +0x0048 -> line 245
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vCreateTransitionSemaphores(void)
{
    SemaParam S;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 224–224 */
/* addr: 0x00318bb0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 224
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vLeaveGLCriticalSection(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 218–218 */
/* addr: 0x00318bc0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 218
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vEnterGLCriticalSection(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 211–211 */
/* addr: 0x00318bd0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vCreateGLCriticalSection(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 168–204 */
/* addr: 0x00318be0  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 168
 *   +0x0004 -> line 173
 *   +0x0008 -> line 168
 *   +0x000c -> line 173
 *   +0x0014 -> line 174
 *   +0x0018 -> line 176
 *   +0x001c -> line 174
 *   +0x0020 -> line 176
 *   +0x0024 -> line 175
 *   +0x0028 -> line 177
 *   +0x002c -> line 174
 *   +0x0030 -> line 175
 *   +0x0034 -> line 179
 *   +0x0040 -> line 181
 *   +0x004c -> line 183
 *   +0x005c -> line 184
 *   +0x0080 -> line 188
 *   +0x0090 -> line 190
 *   +0x009c -> line 196
 *   +0x00a4 -> line 200
 *   +0x00b0 -> line 202
 *   +0x00bc -> line 204
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_v_CreateEngineThread(void)
{
    ThreadParam T;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 155–164 */
/* addr: 0x00318cb0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 155
 *   +0x0008 -> line 159
 *   +0x0010 -> line 161
 *   +0x001c -> line 163
 *   +0x0020 -> line 164
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_uiGetStackBaseAddress(void)
{
    ThreadParam T;
    int Tid;
    /* TODO: decompile from asm/... */
}
