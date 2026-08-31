/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct anon_7 anon_7;
typedef struct anon_8 anon_8;
typedef struct anon_9 anon_9;
typedef struct anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct anon_12 anon_12;
typedef struct anon_13 anon_13;
typedef struct anon_14 anon_14;
typedef struct ThreadParam ThreadParam;

struct anon_0 {
    unsigned char data[163840]; /* +0x0 */
    int put; /* +0x28000 */
    int count; /* +0x28004 */
    int size; /* +0x28008 */
};

struct anon_1 {
    /* aggregate */ int type; /* +0x0 */
    int header; /* +0x4 */
    int data; /* +0x8 */
    unsigned int len; /* +0xc */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
};

struct anon_2 {
    anon_3 mpeg; /* +0x0 */
    anon_14 vibuf; /* +0x48 */
    unsigned int state; /* +0xa8 */
    int sema; /* +0xac */
    int hid_endimage; /* +0xb0 */
    int hid_vblank; /* +0xb4 */
};

struct anon_3 {
    int width; /* +0x0 */
    int height; /* +0x4 */
    int frameCount; /* +0x8 */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
    unsigned long flags; /* +0x20 */
    long pts2nd; /* +0x28 */
    long dts2nd; /* +0x30 */
    unsigned long flags2nd; /* +0x38 */
    int sys; /* +0x40 */
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

struct anon_5 {
    unsigned int lsn; /* +0x0 */
    unsigned int size; /* +0x4 */
    char name[16]; /* +0x8 */
    unsigned char date[8]; /* +0x18 */
    unsigned int flag; /* +0x20 */
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

struct anon_7 {
    anon_4 pmode; /* +0x0 */
    anon_9 smode2; /* +0x8 */
    anon_6 dispfb; /* +0x10 */
    anon_11 display; /* +0x18 */
    anon_13 bgcolor; /* +0x20 */
};

struct anon_8 {
    int isOnCD; /* +0x0 */
    int size; /* +0x4 */
    anon_5 fp; /* +0x8 */
    int iopBuf; /* +0x2c */
    int fd; /* +0x30 */
};

struct anon_9 {
    unsigned int INT : 1; /* bit 0, byte +0x0 */
    unsigned int FFMD : 1; /* bit 1, byte +0x0 */
    unsigned int DPMS : 2; /* bit 2, byte +0x0 */
    unsigned int p0 : 28; /* bit 4, byte +0x0 */
    unsigned int p1; /* +0x4 */
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

struct anon_12 {
    long pts; /* +0x0 */
    long dts; /* +0x8 */
    int pos; /* +0x10 */
    int len; /* +0x14 */
};

struct anon_13 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int p0 : 8; /* bit 24, byte +0x0 */
    unsigned int p1; /* +0x4 */
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
    int ts; /* +0x50 */
    int n_ts; /* +0x54 */
    int count_ts; /* +0x58 */
    int wt_ts; /* +0x5c */
};

struct ThreadParam {
    int status; /* +0x0 */
    int entry; /* +0x4 */
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
/* aggregate */ int display;
static long double controller_dma_buf[16];
static anon_12 timeStamp[512];
static int videoDecStack;
static int viBufData;
static int readBuf;
static int defStack;
static int mpegWork;
static int viBufTag;
int zeFrame;
/* aggregate */ int a7_p_vBuffers64_Pointers;
int _gp;
void (*videoDecMain)(anon_2*);
void (*defMain)(void);
int (*vagCallbackLeft)(anon_3*, anon_1*, void*);
int (*videoCallback)(anon_3*, anon_1*, void*);
int SND_g_iEnoughSound;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 108–118 */
/* addr: 0x00130870  size: 84 bytes */
void InitGlDevice(void)
{
    /* line map: */
    /*   line 108 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 118 @ +0x000 */
    /*   line 118 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001308d0  size: 16 bytes */
void ErrMessage(char* message)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 521–521 */
/* addr: 0x001308e0  size: 44 bytes */
void defMain(void)
{
    /* line map: */
    /*   line 521 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 375–483 */
/* addr: 0x00130910  size: 564 bytes */
void initAll(char* bsfilename, float fVolume)
{
    ThreadParam th_param;
    /* line map: */
    /*   line 375 @ +0x000 */
    /*   line 376 @ +0x000 */
    /*   line 375 @ +0x000 */
    /*   line 382 @ +0x000 */
    /*   line 394 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 421 @ +0x000 */
    /*   line 436 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 316–332 */
/* addr: 0x00130b50  size: 300 bytes */
void fn_vAllocBuffers64(void)
{
    /* line map: */
    /*   line 316 @ +0x000 */
    /*   line 318 @ +0x000 */
    /*   line 319 @ +0x000 */
    /*   line 321 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 327 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 299–301 */
/* addr: 0x00130c80  size: 48 bytes */
void switchThread(void)
{
    ThreadParam th_param;
    /* line map: */
    /*   line 299 @ +0x000 */
    /*   line 301 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\main.c lines 157–289 */
/* addr: 0x00130cb0  size: 728 bytes */
int readMpeg(anon_2* vd, anon_0* rb, int interruptable)
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
    /* line map: */
    /*   line 166 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 157 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 179 @ +0x000 */
    /*   line 184 @ +0x000 */
    /*   line 191 @ +0x000 */
    /* TODO: decompile from asm/... */
}
