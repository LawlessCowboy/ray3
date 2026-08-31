/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\read.c */
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

typedef enum anon_enum_000308e8 {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
} anon_enum_000308e8;

struct anon_0 {
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

struct anon_1 {
    anon_enum_000308e8 type; /* +0x0 */
    int header; /* +0x4 */
    int data; /* +0x8 */
    unsigned int len; /* +0xc */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
};

struct anon_2 {
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

struct anon_3 {
    unsigned char data[163840]; /* +0x0 */
    int put; /* +0x28000 */
    int count; /* +0x28004 */
    int size; /* +0x28008 */
};

struct anon_4 {
    long pts; /* +0x0 */
    long dts; /* +0x8 */
    int pos; /* +0x10 */
    int len; /* +0x14 */
};

struct anon_5 {
    int data; /* +0x0 */
    int tag; /* +0x4 */
    int n; /* +0x8 */
    int dmaStart; /* +0xc */
    int dmaN; /* +0x10 */
    int readBytes; /* +0x14 */
    int buffSize; /* +0x18 */
    anon_2 env; /* +0x1c */
    int sema; /* +0x40 */
    int isActive; /* +0x44 */
    long totalBytes; /* +0x48 */
    anon_4* ts; /* +0x50 */
    int n_ts; /* +0x54 */
    int count_ts; /* +0x58 */
    int wt_ts; /* +0x5c */
};

struct anon_6 {
    anon_0 mpeg; /* +0x0 */
    anon_5 vibuf; /* +0x48 */
    unsigned int state; /* +0xa8 */
    int sema; /* +0xac */
    int hid_endimage; /* +0xb0 */
    int hid_vblank; /* +0xb4 */
};

int VID_g_iHasAudio;
anon_6 videoDec;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\read.c lines 81–87 */
/* addr: 0x00131070  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 81
 *   +0x0004 -> line 82
 *   +0x0008 -> line 81
 *   +0x0014 -> line 83
 *   +0x001c -> line 84
 *   +0x0044 -> line 87
 *   +0x0048 -> line 86
 *   +0x004c -> line 87
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int vagCallbackLeft(anon_1* str)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\read.c lines 41–74 */
/* addr: 0x001310d0  size: 504 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 41
 *   +0x0004 -> line 45
 *   +0x0008 -> line 41
 *   +0x000c -> line 45
 *   +0x0010 -> line 41
 *   +0x0038 -> line 45
 *   +0x003c -> line 43
 *   +0x0040 -> line 45
 *   +0x005c -> line 54
 *   +0x0060 -> line 46
 *   +0x0064 -> line 54
 *   +0x007c -> line 55
 *   +0x0080 -> line 56
 *   +0x0084 -> line 55
 *   +0x008c -> line 58
 *   +0x0098 -> line 55
 *   +0x009c -> line 56
 *   +0x00a0 -> line 55
 *   +0x00a4 -> line 56
 *   +0x00a8 -> line 55
 *   +0x00ac -> line 58
 *   +0x0170 -> line 61
 *   +0x0178 -> line 62
 *   +0x01a0 -> line 63
 *   +0x01ac -> line 67
 *   +0x01bc -> line 73
 *   +0x01c8 -> line 74
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int videoCallback(anon_1* str, void* data)
{
    int d1;
    int d0;
    unsigned char* pd1Unc;
    unsigned char* pd0Unc;
    unsigned char* pd1;
    unsigned char* pd0;
    int s1;
    int s0;
    unsigned char* ps0;
    anon_3* rb;
    /* TODO: decompile from asm/... */
}
