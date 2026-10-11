/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef union anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct SemaParam SemaParam;

union anon_0 {
    long double q; /* +0x0 */
    unsigned long l[2]; /* +0x0 */
    unsigned int i[4]; /* +0x0 */
    unsigned short s[8]; /* +0x0 */
    unsigned char c[16]; /* +0x0 */
};

struct anon_1 {
    unsigned int d4madr; /* +0x0 */
    unsigned int d4tadr; /* +0x4 */
    unsigned int d4qwc; /* +0x8 */
    unsigned int d4chcr; /* +0xc */
    unsigned int d3madr; /* +0x10 */
    unsigned int d3qwc; /* +0x14 */
    unsigned int d3chcr; /* +0x18 */
    unsigned int ipubp; /* +0x1c */
    unsigned int ipuctrl; /* +0x20 */
};

struct anon_2 {
    long pts; /* +0x0 */
    long dts; /* +0x8 */
    int pos; /* +0x10 */
    int len; /* +0x14 */
};

struct anon_3 {
    int data; /* +0x0 */
    int tag; /* +0x4 */
    int n; /* +0x8 */
    int dmaStart; /* +0xc */
    int dmaN; /* +0x10 */
    int readBytes; /* +0x14 */
    int buffSize; /* +0x18 */
    anon_1 env; /* +0x1c */
    int sema; /* +0x40 */
    int isActive; /* +0x44 */
    long totalBytes; /* +0x48 */
    anon_2* ts; /* +0x50 */
    int n_ts; /* +0x54 */
    int count_ts; /* +0x58 */
    int wt_ts; /* +0x5c */
};

struct SemaParam {
    int currentCount; /* +0x0 */
    int maxCount; /* +0x4 */
    int initCount; /* +0x8 */
    int numWaitThreads; /* +0xc */
    unsigned int attr; /* +0x10 */
    unsigned int option; /* +0x14 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 605–650 */
/* addr: 0x00131840  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 605
 *   +0x0004 -> line 606
 *   +0x0008 -> line 605
 *   +0x0030 -> line 606
 *   +0x0034 -> line 614
 *   +0x0038 -> line 608
 *   +0x003c -> line 613
 *   +0x0040 -> line 607
 *   +0x0048 -> line 608
 *   +0x004c -> line 619
 *   +0x0058 -> line 624
 *   +0x005c -> line 621
 *   +0x0060 -> line 624
 *   +0x0064 -> line 621
 *   +0x0068 -> line 624
 *   +0x006c -> line 622
 *   +0x0070 -> line 624
 *   +0x007c -> line 628
 *   +0x0080 -> line 624
 *   +0x008c -> line 627
 *   +0x0090 -> line 624
 *   +0x0098 -> line 630
 *   +0x009c -> line 624
 *   +0x00b0 -> line 630
 *   +0x00bc -> line 632
 *   +0x00c0 -> line 634
 *   +0x00c4 -> line 632
 *   +0x00dc -> line 634
 *   +0x0114 -> line 637
 *   +0x011c -> line 638
 *   +0x012c -> line 639
 *   +0x0138 -> line 640
 *   +0x0144 -> line 643
 *   +0x016c -> line 644
 *   +0x0170 -> line 645
 *   +0x0190 -> line 647
 *   +0x0198 -> line 650
 *   +0x019c -> line 649
 *   +0x01a0 -> line 650
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufGetTs(anon_3* f, anon_2* ts)
{
    int rd;
    int i;
    int wt;
    int tscount;
    int isEnd;
    int datasize;
    unsigned int stop;
    int bp;
    unsigned int ipubp;
    unsigned int d4madr;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 574–599 */
/* addr: 0x00131a10  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 574
 *   +0x0010 -> line 575
 *   +0x0014 -> line 574
 *   +0x001c -> line 577
 *   +0x0028 -> line 579
 *   +0x003c -> line 581
 *   +0x0044 -> line 583
 *   +0x005c -> line 585
 *   +0x0078 -> line 586
 *   +0x009c -> line 587
 *   +0x00c0 -> line 588
 *   +0x00e4 -> line 590
 *   +0x00f0 -> line 591
 *   +0x0110 -> line 593
 *   +0x0114 -> line 596
 *   +0x011c -> line 598
 *   +0x0120 -> line 599
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufPutTs(anon_3* f, anon_2* ts)
{
    int ret;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 530–567 */
/* addr: 0x00131b50  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 530
 *   +0x0004 -> line 532
 *   +0x0008 -> line 530
 *   +0x0010 -> line 531
 *   +0x0014 -> line 530
 *   +0x002c -> line 534
 *   +0x0034 -> line 551
 *   +0x0038 -> line 536
 *   +0x004c -> line 538
 *   +0x0064 -> line 542
 *   +0x0090 -> line 543
 *   +0x00b0 -> line 545
 *   +0x00c8 -> line 546
 *   +0x00d4 -> line 548
 *   +0x00e0 -> line 549
 *   +0x00ec -> line 551
 *   +0x00f0 -> line 552
 *   +0x00f4 -> line 553
 *   +0x00f8 -> line 554
 *   +0x00fc -> line 555
 *   +0x0100 -> line 556
 *   +0x0114 -> line 558
 *   +0x0120 -> line 559
 *   +0x0124 -> line 560
 *   +0x0128 -> line 562
 *   +0x0140 -> line 563
 *   +0x0148 -> line 567
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufModifyPts(anon_3* f, anon_2* new_ts)
{
    int loop;
    int datasize;
    int rd;
    anon_2* ts;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 515–521 */
/* addr: 0x00131ca0  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 515
 *   +0x0010 -> line 516
 *   +0x0018 -> line 518
 *   +0x0038 -> line 520
 *   +0x0040 -> line 521
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void viBufFlush(anon_3* f)
{
    WaitSema(f->sema);

    f->readBytes = (f->readBytes + 0x7ff) / 0x800 * 0x800;

    SignalSema(f->sema);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 498–508 */
/* addr: 0x00131cf0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 498
 *   +0x0010 -> line 501
 *   +0x0018 -> line 503
 *   +0x0020 -> line 505
 *   +0x0024 -> line 503
 *   +0x0028 -> line 505
 *   +0x0030 -> line 507
 *   +0x0034 -> line 508
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufCount(anon_3* f)
{
    int ret;
    WaitSema(f->sema);
    ret = f->readBytes + (f->dmaN << 11);
    SignalSema(f->sema);
    return ret;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 466–474 */
/* addr: 0x00131d40  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 466
 *   +0x000c -> line 467
 *   +0x005c -> line 468
 *   +0x0064 -> line 469
 *   +0x006c -> line 470
 *   +0x0074 -> line 472
 *   +0x007c -> line 474
 *   +0x0080 -> line 473
 *   +0x0084 -> line 474
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufDelete(anon_3* f)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 379–459 */
/* addr: 0x00131dd0  size: 944 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 379
 *   +0x0028 -> line 380
 *   +0x002c -> line 386
 *   +0x0030 -> line 383
 *   +0x0034 -> line 384
 *   +0x0038 -> line 385
 *   +0x003c -> line 383
 *   +0x0040 -> line 380
 *   +0x0044 -> line 383
 *   +0x0048 -> line 386
 *   +0x004c -> line 383
 *   +0x0058 -> line 391
 *   +0x005c -> line 384
 *   +0x0060 -> line 383
 *   +0x0064 -> line 391
 *   +0x006c -> line 396
 *   +0x007c -> line 398
 *   +0x0080 -> line 397
 *   +0x0084 -> line 399
 *   +0x0088 -> line 397
 *   +0x008c -> line 400
 *   +0x0090 -> line 399
 *   +0x0098 -> line 398
 *   +0x009c -> line 399
 *   +0x00a0 -> line 400
 *   +0x00c0 -> line 404
 *   +0x00c8 -> line 407
 *   +0x00cc -> line 404
 *   +0x00d0 -> line 407
 *   +0x00d4 -> line 404
 *   +0x00d8 -> line 407
 *   +0x00dc -> line 404
 *   +0x00e4 -> line 407
 *   +0x0104 -> line 408
 *   +0x010c -> line 409
 *   +0x0114 -> line 411
 *   +0x0170 -> line 415
 *   +0x0174 -> line 413
 *   +0x0178 -> line 414
 *   +0x017c -> line 413
 *   +0x0180 -> line 414
 *   +0x0184 -> line 415
 *   +0x0188 -> line 414
 *   +0x018c -> line 415
 *   +0x0190 -> line 414
 *   +0x0194 -> line 415
 *   +0x01d8 -> line 419
 *   +0x01e0 -> line 422
 *   +0x01ec -> line 419
 *   +0x01fc -> line 422
 *   +0x0218 -> line 423
 *   +0x021c -> line 424
 *   +0x0228 -> line 429
 *   +0x0240 -> line 430
 *   +0x0244 -> line 431
 *   +0x0250 -> line 432
 *   +0x02a0 -> line 435
 *   +0x02ac -> line 437
 *   +0x02d0 -> line 439
 *   +0x02d8 -> line 441
 *   +0x02f8 -> line 445
 *   +0x0300 -> line 446
 *   +0x0308 -> line 447
 *   +0x0310 -> line 448
 *   +0x031c -> line 449
 *   +0x0368 -> line 452
 *   +0x0370 -> line 454
 *   +0x0374 -> line 452
 *   +0x0378 -> line 454
 *   +0x037c -> line 456
 *   +0x0384 -> line 459
 *   +0x0388 -> line 458
 *   +0x038c -> line 459
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufRestartDMA(anon_3* f)
{
    int index_next;
    int index;
    unsigned int d4chcr_next;
    unsigned int d4tadr_next;
    unsigned int d4qwc_next;
    unsigned int d4madr_next;
    int bp;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 344–372 */
/* addr: 0x00132180  size: 356 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 344
 *   +0x0010 -> line 345
 *   +0x0018 -> line 349
 *   +0x0068 -> line 351
 *   +0x0074 -> line 352
 *   +0x0080 -> line 353
 *   +0x008c -> line 354
 *   +0x0098 -> line 358
 *   +0x00c0 -> line 361
 *   +0x010c -> line 362
 *   +0x0118 -> line 363
 *   +0x0124 -> line 364
 *   +0x0130 -> line 366
 *   +0x013c -> line 367
 *   +0x0148 -> line 369
 *   +0x0150 -> line 372
 *   +0x0154 -> line 371
 *   +0x0158 -> line 372
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufStopDMA(anon_3* f)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 247–337 */
/* addr: 0x001322f0  size: 756 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 247
 *   +0x0018 -> line 257
 *   +0x0024 -> line 259
 *   +0x0030 -> line 260
 *   +0x0038 -> line 261
 *   +0x0040 -> line 273
 *   +0x0090 -> line 274
 *   +0x0094 -> line 280
 *   +0x0098 -> line 274
 *   +0x009c -> line 280
 *   +0x00c0 -> line 281
 *   +0x00f8 -> line 282
 *   +0x0110 -> line 283
 *   +0x011c -> line 289
 *   +0x0128 -> line 290
 *   +0x012c -> line 289
 *   +0x0140 -> line 290
 *   +0x0150 -> line 291
 *   +0x0168 -> line 297
 *   +0x0170 -> line 298
 *   +0x0174 -> line 299
 *   +0x0178 -> line 298
 *   +0x017c -> line 299
 *   +0x0180 -> line 298
 *   +0x0184 -> line 305
 *   +0x0188 -> line 299
 *   +0x0190 -> line 298
 *   +0x01ac -> line 299
 *   +0x01d0 -> line 309
 *   +0x01dc -> line 311
 *   +0x021c -> line 318
 *   +0x0220 -> line 311
 *   +0x0224 -> line 317
 *   +0x0228 -> line 311
 *   +0x022c -> line 318
 *   +0x0230 -> line 311
 *   +0x0238 -> line 317
 *   +0x024c -> line 318
 *   +0x0258 -> line 320
 *   +0x0264 -> line 326
 *   +0x0270 -> line 327
 *   +0x0278 -> line 329
 *   +0x0284 -> line 331
 *   +0x02d0 -> line 334
 *   +0x02d8 -> line 336
 *   +0x02dc -> line 337
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufAddDMA(anon_3* f)
{
    int read_n;
    int read_start;
    int consume;
    int isNewData;
    unsigned int d4chcr;
    int last;
    int index;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 233–240 */
/* addr: 0x001325f0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 233
 *   +0x0014 -> line 234
 *   +0x0020 -> line 236
 *   +0x0024 -> line 237
 *   +0x002c -> line 236
 *   +0x0034 -> line 237
 *   +0x0040 -> line 239
 *   +0x0048 -> line 240
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void viBufEndPut(anon_3* f, int size)
{
    WaitSema(f->sema);
    f->readBytes += size;
    f->totalBytes += (long)size;
    SignalSema(f->sema);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 199–226 */
/* addr: 0x00132650  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 199
 *   +0x002c -> line 205
 *   +0x0038 -> line 210
 *   +0x0048 -> line 211
 *   +0x004c -> line 210
 *   +0x005c -> line 211
 *   +0x006c -> line 210
 *   +0x0070 -> line 213
 *   +0x0080 -> line 214
 *   +0x008c -> line 215
 *   +0x0090 -> line 216
 *   +0x0094 -> line 218
 *   +0x009c -> line 219
 *   +0x00a8 -> line 220
 *   +0x00b4 -> line 221
 *   +0x00bc -> line 222
 *   +0x00cc -> line 225
 *   +0x00d4 -> line 226
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void viBufBeginPut(anon_3* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
    int en;
    int es;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 149–191 */
/* addr: 0x00132750  size: 404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 149
 *   +0x0004 -> line 155
 *   +0x0008 -> line 149
 *   +0x000c -> line 159
 *   +0x0010 -> line 152
 *   +0x0018 -> line 153
 *   +0x001c -> line 159
 *   +0x0020 -> line 154
 *   +0x0024 -> line 155
 *   +0x0028 -> line 157
 *   +0x002c -> line 159
 *   +0x0034 -> line 160
 *   +0x0038 -> line 164
 *   +0x003c -> line 160
 *   +0x0044 -> line 161
 *   +0x0050 -> line 162
 *   +0x005c -> line 163
 *   +0x006c -> line 164
 *   +0x0080 -> line 170
 *   +0x0094 -> line 171
 *   +0x0098 -> line 177
 *   +0x009c -> line 171
 *   +0x00c4 -> line 177
 *   +0x00d8 -> line 178
 *   +0x00ec -> line 185
 *   +0x00f0 -> line 178
 *   +0x010c -> line 185
 *   +0x0110 -> line 186
 *   +0x0124 -> line 187
 *   +0x0134 -> line 188
 *   +0x0184 -> line 191
 *   +0x0188 -> line 190
 *   +0x018c -> line 191
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufReset(anon_3* f)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 114–142 */
/* addr: 0x001328f0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 114
 *   +0x0004 -> line 118
 *   +0x0008 -> line 114
 *   +0x000c -> line 120
 *   +0x0010 -> line 114
 *   +0x0014 -> line 117
 *   +0x001c -> line 118
 *   +0x002c -> line 129
 *   +0x0030 -> line 119
 *   +0x0034 -> line 120
 *   +0x0038 -> line 122
 *   +0x003c -> line 123
 *   +0x0040 -> line 129
 *   +0x0044 -> line 131
 *   +0x0054 -> line 137
 *   +0x005c -> line 139
 *   +0x0060 -> line 141
 *   +0x0064 -> line 142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CreateSema(SemaParam* param);

int viBufCreate(anon_3* f, long double* data, long double* tag, int size, anon_2* ts, int n_ts)
{
    SemaParam param;

    f->data = (int)data;
    f->tag = ((unsigned int)tag & 0x0fffffff) | 0x20000000;
    f->n = size;
    f->buffSize = size << 11;
    f->ts = ts;
    f->n_ts = n_ts;

    param.initCount = 1;
    param.maxCount = 1;
    f->sema = CreateSema(&param);

    viBufReset(f);

    f->totalBytes = 0;

    return 1;
}
