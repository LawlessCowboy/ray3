/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_3 anon_3;
typedef struct anon_10 anon_10;
typedef struct anon_14 anon_14;
typedef struct anon_2 anon_2;
typedef struct anon_4 anon_4;
typedef struct anon_9 anon_9;
typedef struct anon_6 anon_6;
typedef struct anon_11 anon_11;
typedef struct anon_13 anon_13;
typedef struct anon_7 anon_7;
typedef struct _Display _Display;
typedef struct anon_5 anon_5;
typedef struct anon_8 anon_8;
typedef struct anon_12 anon_12;
typedef struct ThreadParam ThreadParam;

typedef enum anon_enum_0002efe4 {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
} anon_enum_0002efe4;

struct anon_0 {
    unsigned char data[163840]; /* +0x0 */
    int put; /* +0x28000 */
    int count; /* +0x28004 */
    int size; /* +0x28008 */
};

struct anon_1 {
    anon_enum_0002efe4 type; /* +0x0 */
    int header; /* +0x4 */
    int data; /* +0x8 */
    unsigned int len; /* +0xc */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
};

struct anon_3 {
    int width; /* +0x0 */
    int height; /* +0x4 */
    int frameCount; /* +0x8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xc..0xf */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
    unsigned long flags; /* +0x20 */
    long pts2nd; /* +0x28 */
    long dts2nd; /* +0x30 */
    unsigned long flags2nd; /* +0x38 */
    int sys; /* +0x40 */
};

struct anon_10 {
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

struct anon_14 {
    int data; /* +0x0 */
    int tag; /* +0x4 */
    int n; /* +0x8 */
    int dmaStart; /* +0xc */
    int dmaN; /* +0x10 */
    int readBytes; /* +0x14 */
    int buffSize; /* +0x18 */
    anon_10 env; /* +0x1c */
    int sema; /* +0x40 */
    int isActive; /* +0x44 */
    long totalBytes; /* +0x48 */
    anon_12* ts; /* +0x50 */
    int n_ts; /* +0x54 */
    int count_ts; /* +0x58 */
    int wt_ts; /* +0x5c */
};

struct anon_2 {
    anon_3 mpeg; /* +0x0 */
    anon_14 vibuf; /* +0x48 */
    unsigned int state; /* +0xa8 */
    int sema; /* +0xac */
    int hid_endimage; /* +0xb0 */
    int hid_vblank; /* +0xb4 */
};

struct anon_4 {
    unsigned int EN1 : 1; /* bit 0, byte +0x0 */
    unsigned int EN2 : 1; /* bit 1, byte +0x0 */
    unsigned int CRTMD : 3; /* bit 2, byte +0x0 */
    unsigned int MMOD : 1; /* bit 5, byte +0x0 */
    unsigned int AMOD : 1; /* bit 6, byte +0x0 */
    unsigned int SLBG : 1; /* bit 7, byte +0x0 */
    unsigned int ALP : 8; /* bit 8, byte +0x0 */
    unsigned int p0 : 16; /* bit 16, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_9 {
    unsigned int INT : 1; /* bit 0, byte +0x0 */
    unsigned int FFMD : 1; /* bit 1, byte +0x0 */
    unsigned int DPMS : 2; /* bit 2, byte +0x0 */
    unsigned int p0 : 28; /* bit 4, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_6 {
    unsigned int FBP : 9; /* bit 0, byte +0x0 */
    unsigned int FBW : 6; /* bit 9, byte +0x0 */
    unsigned int PSM : 5; /* bit 15, byte +0x0 */
    unsigned int p0 : 12; /* bit 20, byte +0x0 */
    unsigned int DBX : 11; /* bit 0, byte +0x4 */
    unsigned int DBY : 11; /* bit 11, byte +0x4 */
    unsigned int p1 : 10; /* bit 22, byte +0x4 */
};

struct anon_11 {
    unsigned int DX : 12; /* bit 0, byte +0x0 */
    unsigned int DY : 11; /* bit 12, byte +0x0 */
    unsigned int MAGH : 4; /* bit 23, byte +0x0 */
    unsigned int MAGV : 2; /* bit 27, byte +0x0 */
    unsigned int p0 : 3; /* bit 29, byte +0x0 */
    unsigned int DW : 12; /* bit 0, byte +0x4 */
    unsigned int DH : 11; /* bit 12, byte +0x4 */
    unsigned int p1 : 9; /* bit 23, byte +0x4 */
};

struct anon_13 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int p0 : 8; /* bit 24, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_7 {
    anon_4 pmode; /* +0x0 */
    anon_9 smode2; /* +0x8 */
    anon_6 dispfb; /* +0x10 */
    anon_11 display; /* +0x18 */
    anon_13 bgcolor; /* +0x20 */
};

struct _Display {
    anon_7 dispenv; /* +0x0 */
    int fbp0; /* +0x28 */
    int fbp1; /* +0x2c */
    int fb_w; /* +0x30 */
    int fb_h; /* +0x34 */
};

struct anon_5 {
    unsigned int lsn; /* +0x0 */
    unsigned int size; /* +0x4 */
    char name[16]; /* +0x8 */
    unsigned char date[8]; /* +0x18 */
    unsigned int flag; /* +0x20 */
};

struct anon_8 {
    int isOnCD; /* +0x0 */
    int size; /* +0x4 */
    anon_5 fp; /* +0x8 */
    int iopBuf; /* +0x2c */
    int fd; /* +0x30 */
};

struct anon_12 {
    long pts; /* +0x0 */
    long dts; /* +0x8 */
    int pos; /* +0x10 */
    int len; /* +0x14 */
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

int g_start_it;
int g_iArraySizes;
int VID_g_iHasAudio;
unsigned int controller_val;
int frd;
anon_2 videoDec;
anon_8 infile;
int defaultTh;
int videoDecTh;
_Display display;
static long double controller_dma_buf[16];
static anon_12 timeStamp[512];
static int videoDecStack;
static int viBufData;
static int readBuf;
static int defStack;
static int mpegWork;
static int viBufTag;
int zeFrame;
int a7_p_vBuffers64_Pointers[8];
int _gp;
void (*videoDecMain)(anon_2*);
void (*defMainPtr)(void);
int (*vagCallbackLeft)(anon_3*, anon_1*, void*);
int (*videoCallback)(anon_3*, anon_1*, void*);
int SND_g_iEnoughSound;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 531–531 */
/* addr: 0x001308d0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 531
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ErrMessage(char* message)
{
    printf("[ Error ] %s\n", message);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 518–522 */
/* addr: 0x001308e0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 518
 *   +0x0008 -> line 521
 *   +0x0024 -> line 522
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void defMain(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 372–485 */
/* addr: 0x00130910  size: 564 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 372
 *   +0x0004 -> line 375
 *   +0x0008 -> line 372
 *   +0x000c -> line 376
 *   +0x0010 -> line 372
 *   +0x0030 -> line 375
 *   +0x0044 -> line 376
 *   +0x0048 -> line 382
 *   +0x0050 -> line 388
 *   +0x0058 -> line 394
 *   +0x0060 -> line 395
 *   +0x0090 -> line 406
 *   +0x00b0 -> line 413
 *   +0x0114 -> line 421
 *   +0x011c -> line 428
 *   +0x0124 -> line 436
 *   +0x0138 -> line 437
 *   +0x013c -> line 440
 *   +0x0148 -> line 441
 *   +0x014c -> line 442
 *   +0x0154 -> line 443
 *   +0x015c -> line 444
 *   +0x0160 -> line 445
 *   +0x0164 -> line 446
 *   +0x0168 -> line 437
 *   +0x016c -> line 440
 *   +0x0170 -> line 441
 *   +0x0178 -> line 442
 *   +0x017c -> line 443
 *   +0x0180 -> line 444
 *   +0x0184 -> line 446
 *   +0x0190 -> line 447
 *   +0x019c -> line 454
 *   +0x01a0 -> line 456
 *   +0x01a4 -> line 454
 *   +0x01a8 -> line 457
 *   +0x01ac -> line 454
 *   +0x01b0 -> line 460
 *   +0x01b4 -> line 455
 *   +0x01b8 -> line 459
 *   +0x01bc -> line 455
 *   +0x01c0 -> line 456
 *   +0x01c4 -> line 457
 *   +0x01c8 -> line 458
 *   +0x01cc -> line 460
 *   +0x01d8 -> line 461
 *   +0x01e8 -> line 476
 *   +0x0208 -> line 483
 *   +0x020c -> line 485
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void initAll(char* bsfilename, float fVolume)
{
    ThreadParam th_param;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 314–333 */
/* addr: 0x00130b50  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 314
 *   +0x0008 -> line 316
 *   +0x0018 -> line 317
 *   +0x0028 -> line 318
 *   +0x003c -> line 320
 *   +0x0040 -> line 319
 *   +0x0044 -> line 320
 *   +0x0054 -> line 321
 *   +0x0068 -> line 322
 *   +0x007c -> line 323
 *   +0x008c -> line 326
 *   +0x0090 -> line 323
 *   +0x0094 -> line 326
 *   +0x009c -> line 327
 *   +0x00a0 -> line 326
 *   +0x00a4 -> line 327
 *   +0x00a8 -> line 326
 *   +0x00b0 -> line 328
 *   +0x00b4 -> line 327
 *   +0x00b8 -> line 328
 *   +0x00bc -> line 327
 *   +0x00c4 -> line 329
 *   +0x00c8 -> line 328
 *   +0x00cc -> line 329
 *   +0x00d0 -> line 328
 *   +0x00d8 -> line 330
 *   +0x00dc -> line 329
 *   +0x00e0 -> line 330
 *   +0x00e4 -> line 329
 *   +0x00ec -> line 331
 *   +0x00f0 -> line 330
 *   +0x00f4 -> line 331
 *   +0x00f8 -> line 330
 *   +0x0100 -> line 332
 *   +0x0104 -> line 331
 *   +0x0108 -> line 332
 *   +0x010c -> line 331
 *   +0x0114 -> line 332
 *   +0x0120 -> line 333
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vAllocBuffers64(void)
{
    /* TODO: decompile from asm/... */
}

int GetThreadId(void);
int ReferThreadStatus(int tid, ThreadParam* info);
int RotateThreadReadyQueue(int prio);

#pragma auto_inline on
/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 297–301 */
/* addr: 0x00130c80  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 297
 *   +0x0008 -> line 299
 *   +0x001c -> line 300
 *   +0x0024 -> line 301
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void switchThread(void)
{
    ThreadParam th_param;

    ReferThreadStatus(GetThreadId(), &th_param);
    RotateThreadReadyQueue(th_param.currentPriority);
}
#pragma auto_inline reset

int scePadRead(int port, int slot, unsigned char* rdata);
int sceMpegDemuxPssRing(anon_2* vd, unsigned char* data, int size, void* ring, int ringsize);
int readBufBeginPut(anon_0* b, unsigned char** ptr);
int readBufEndPut(anon_0* b, int size);
int readBufBeginGet(anon_0* b, unsigned char** ptr);
int readBufEndGet(anon_0* b, int size);
int strFileRead(anon_8* file, void* buff, int size);
int videoDecAbort(anon_2* vd);
int videoDecFlush(anon_2* vd);
int videoDecIsFlushed(anon_2* vd);
unsigned int videoDecGetState(anon_2* vd);
/* The target writes COP0 register 24 (mtc0 zero, $24); C cannot express it.
 * Spelled with the R5900 alias mtbpc, MWCC schedules it like an ordinary
 * instruction, as in retail. */
inline void GAM_vClearCop0Register24(void)
{
    asm { mtbpc zero }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 151–290 */
/* addr: 0x00130cb0  size: 728 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 151
 *   +0x0004 -> line 166
 *   +0x0008 -> line 151
 *   +0x0024 -> line 161
 *   +0x0028 -> line 151
 *   +0x002c -> line 164
 *   +0x0030 -> line 151
 *   +0x0044 -> line 157
 *   +0x004c -> line 166
 *   +0x0050 -> line 158
 *   +0x0054 -> line 169
 *   +0x005c -> line 179
 *   +0x0064 -> line 182
 *   +0x007c -> line 184
 *   +0x0094 -> line 185
 *   +0x0098 -> line 191
 *   +0x00ac -> line 201
 *   +0x00c4 -> line 203
 *   +0x00cc -> line 210
 *   +0x00d4 -> line 211
 *   +0x00d8 -> line 218
 *   +0x00e4 -> line 219
 *   +0x00f8 -> line 221
 *   +0x0108 -> line 222
 *   +0x011c -> line 229
 *   +0x0124 -> line 231
 *   +0x0130 -> line 232
 *   +0x013c -> line 234
 *   +0x0144 -> line 235
 *   +0x014c -> line 236
 *   +0x0150 -> line 244
 *   +0x015c -> line 245
 *   +0x0168 -> line 248
 *   +0x0170 -> line 249
 *   +0x0178 -> line 251
 *   +0x0184 -> line 253
 *   +0x018c -> line 254
 *   +0x0194 -> line 257
 *   +0x01b4 -> line 261
 *   +0x01c0 -> line 262
 *   +0x01c4 -> line 264
 *   +0x01c8 -> line 266
 *   +0x01e4 -> line 268
 *   +0x01ec -> line 274
 *   +0x0214 -> line 276
 *   +0x021c -> line 278
 *   +0x0238 -> line 279
 *   +0x0254 -> line 282
 *   +0x025c -> line 285
 *   +0x0278 -> line 286
 *   +0x02a0 -> line 288
 *   +0x02a4 -> line 289
 *   +0x02a8 -> line 290
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int readMpeg(anon_2* vd, anon_0* rb, anon_8* file, int interruptable)
{
    int isPaused;
    unsigned char cdata[32];
    unsigned int pushed;
    unsigned int button_old;
    int proceed;
    int count;
    int writerest;
    int readrest;
    int getsize;
    int putsize;
    unsigned char* get_ptr;
    unsigned char* put_ptr;

    readrest = file->size;
    writerest = readrest;
    isPaused = 0;
    button_old = 0;
    SND_g_iEnoughSound = 1;
    g_start_it = 0;
    while (isPaused || (writerest > 4 && videoDecGetState(vd) != 3))
    {
        controller_val = 0;
        if (interruptable)
        {
            if (scePadRead(0, 0, cdata) > 0)
                controller_val = ((cdata[2] << 8) | cdata[3]) ^ 0xffff;
        }
        pushed = controller_val & (button_old ^ controller_val);
        button_old = controller_val;
        if ((pushed & 0x800) && vd->mpeg.frameCount > 10 && !isPaused)
            videoDecAbort(&videoDec);
        putsize = readBufBeginPut(rb, &put_ptr);
        if (readrest > 0 && putsize >= 0x8000)
        {
            count = strFileRead(file, put_ptr, 0x8000);
            if (count >= 0 && SND_g_iEnoughSound)
            {
                readBufEndPut(rb, count);
                readrest -= count;
            }
            else if (g_start_it)
            {
                videoDecAbort(&videoDec);
                return 0;
            }
        }
        putsize = readBufBeginPut(rb, &put_ptr);
        if (!g_start_it && !putsize)
            g_start_it = 1;
        if (g_start_it)
        {
            getsize = readBufBeginGet(rb, &get_ptr);
            if (getsize > 0)
            {
                count = sceMpegDemuxPssRing(vd, get_ptr, getsize, rb, rb->size);
                readBufEndGet(rb, count);
                writerest -= count;
            }
        }
        switchThread();
        GAM_vClearCop0Register24();
    }
    while (!videoDecFlush(vd) && SND_g_iEnoughSound)
        switchThread();
    while (!videoDecIsFlushed(vd) && videoDecGetState(vd) != 3)
        switchThread();
    GAM_vClearCop0Register24();
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 127–139 */
/* addr: 0x00130f90  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 127
 *   +0x0010 -> line 129
 *   +0x0018 -> line 131
 *   +0x0034 -> line 133
 *   +0x00c0 -> line 139
 *   +0x00cc -> line 138
 *   +0x00d0 -> line 139
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int movie(char* name, int interruptable, float fVolume)
{
    /* TODO: decompile from asm/... */
}
