/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2init.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_19 anon_19;
typedef struct anon_6 anon_6;
typedef struct anon_2 anon_2;
typedef struct anon_18 anon_18;
typedef struct anon_14 anon_14;
typedef struct anon_1 anon_1;
typedef struct anon_13 anon_13;
typedef struct anon_23 anon_23;
typedef struct anon_0 anon_0;
typedef struct anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct anon_7 anon_7;
typedef struct anon_10 anon_10;
typedef struct anon_15 anon_15;
typedef struct anon_8 anon_8;
typedef struct anon_16 anon_16;
typedef struct anon_9 anon_9;
typedef struct anon_11 anon_11;
typedef struct anon_20 anon_20;
typedef struct anon_22 anon_22;
typedef struct anon_21 anon_21;
typedef struct anon_12 anon_12;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_17 anon_17;

struct anon_19 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_6 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_2 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_18 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_14 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_1 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_13 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_23 {
    unsigned long ATE : 1; /* bit 0, byte +0x0 */
    unsigned long ATST : 3; /* bit 1, byte +0x0 */
    unsigned long AREF : 8; /* bit 4, byte +0x0 */
    unsigned long AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned long DATE : 1; /* bit 14, byte +0x0 */
    unsigned long DATM : 1; /* bit 15, byte +0x0 */
    unsigned long ZTE : 1; /* bit 16, byte +0x0 */
    unsigned long ZTST : 2; /* bit 17, byte +0x0 */
    unsigned long pad19 : 45; /* bit 19, byte +0x0 */
};

struct anon_0 {
    anon_19 frame1; /* +0x0 */
    unsigned long frame1addr; /* +0x8 */
    anon_6 zbuf1; /* +0x10 */
    long zbuf1addr; /* +0x18 */
    anon_2 xyoffset1; /* +0x20 */
    long xyoffset1addr; /* +0x28 */
    anon_18 scissor1; /* +0x30 */
    long scissor1addr; /* +0x38 */
    anon_14 prmodecont; /* +0x40 */
    long prmodecontaddr; /* +0x48 */
    anon_1 colclamp; /* +0x50 */
    long colclampaddr; /* +0x58 */
    anon_13 dthe; /* +0x60 */
    long dtheaddr; /* +0x68 */
    anon_23 test1; /* +0x70 */
    long test1addr; /* +0x78 */
};

struct anon_3 {
    unsigned int INT : 1; /* bit 0, byte +0x0 */
    unsigned int FFMD : 1; /* bit 1, byte +0x0 */
    unsigned int DPMS : 2; /* bit 2, byte +0x0 */
    unsigned int p0 : 28; /* bit 4, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_4 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_5 {
    unsigned int DX : 12; /* bit 0, byte +0x0 */
    unsigned int DY : 11; /* bit 12, byte +0x0 */
    unsigned int MAGH : 4; /* bit 23, byte +0x0 */
    unsigned int MAGV : 2; /* bit 27, byte +0x0 */
    unsigned int p0 : 3; /* bit 29, byte +0x0 */
    unsigned int DW : 12; /* bit 0, byte +0x4 */
    unsigned int DH : 11; /* bit 12, byte +0x4 */
    unsigned int p1 : 9; /* bit 23, byte +0x4 */
};

struct anon_7 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int p0 : 8; /* bit 24, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_10 {
    unsigned long PRIM : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct anon_15 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_8 {
    anon_23 testa; /* +0x0 */
    long testaaddr; /* +0x8 */
    anon_10 prim; /* +0x10 */
    long primaddr; /* +0x18 */
    anon_15 rgbaq; /* +0x20 */
    long rgbaqaddr; /* +0x28 */
    anon_4 xyz2a; /* +0x30 */
    long xyz2aaddr; /* +0x38 */
    anon_4 xyz2b; /* +0x40 */
    long xyz2baddr; /* +0x48 */
    anon_23 testb; /* +0x50 */
    long testbaddr; /* +0x58 */
};

struct anon_16 {
    unsigned int DIR : 1; /* bit 0, byte +0x0 */
    unsigned int p0 : 1; /* bit 1, byte +0x0 */
    unsigned int MOD : 2; /* bit 2, byte +0x0 */
    unsigned int ASP : 2; /* bit 4, byte +0x0 */
    unsigned int TTE : 1; /* bit 6, byte +0x0 */
    unsigned int TIE : 1; /* bit 7, byte +0x0 */
    unsigned int STR : 1; /* bit 8, byte +0x0 */
    unsigned int p1 : 7; /* bit 9, byte +0x0 */
    unsigned int TAG : 16; /* bit 16, byte +0x0 */
};

struct anon_9 {
    anon_16 chcr; /* +0x0 */
    unsigned int p0[3]; /* +0x4 */
    int madr; /* +0x10 */
    unsigned int p1[3]; /* +0x14 */
    unsigned int qwc; /* +0x20 */
    unsigned int p2[3]; /* +0x24 */
    _sceDmaTag* tadr; /* +0x30 */
    unsigned int p3[3]; /* +0x34 */
    int as0; /* +0x40 */
    unsigned int p4[3]; /* +0x44 */
    int as1; /* +0x50 */
    unsigned int p5[3]; /* +0x54 */
    unsigned int p6[4]; /* +0x60 */
    unsigned int p7[4]; /* +0x70 */
    int sadr; /* +0x80 */
    unsigned int p8[3]; /* +0x84 */
};

struct anon_11 {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct anon_20 {
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

struct anon_22 {
    unsigned int FBP : 9; /* bit 0, byte +0x0 */
    unsigned int FBW : 6; /* bit 9, byte +0x0 */
    unsigned int PSM : 5; /* bit 15, byte +0x0 */
    unsigned int p0 : 12; /* bit 20, byte +0x0 */
    unsigned int DBX : 11; /* bit 0, byte +0x4 */
    unsigned int DBY : 11; /* bit 11, byte +0x4 */
    unsigned int p1 : 10; /* bit 22, byte +0x4 */
};

struct anon_21 {
    anon_20 pmode; /* +0x0 */
    anon_3 smode2; /* +0x8 */
    anon_22 dispfb; /* +0x10 */
    anon_5 display; /* +0x18 */
    anon_7 bgcolor; /* +0x20 */
};

struct anon_12 {
    anon_21 disp[2]; /* +0x0 */
    anon_11 giftag0; /* +0x50 */
    anon_0 draw0; /* +0x60 */
    anon_8 clear0; /* +0xe0 */
    anon_11 giftag1; /* +0x140 */
    anon_0 draw1; /* +0x150 */
    anon_8 clear1; /* +0x1d0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_17 {
    int pCurrent; /* +0x0 */
    int pBase; /* +0x4 */
    int pDmaTag; /* +0x8 */
    int pGifTag; /* +0xc */
};

int dmaGIF;
anon_12 PS2INIT_db;
void (*fn_v_EngMain_VBLCallback)(void);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2init.c lines 67–67 */
/* addr: 0x003181f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GEO_tdstVisualSet_* PO_fn_hGetVisualSet(PO_tdstPhysicalObject_* _hPhysicalObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2init.c lines 426–489 */
/* addr: 0x00318200  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 426
 *   +0x0004 -> line 434
 *   +0x0008 -> line 426
 *   +0x000c -> line 434
 *   +0x0010 -> line 426
 *   +0x0014 -> line 434
 *   +0x0018 -> line 426
 *   +0x0034 -> line 434
 *   +0x0040 -> line 435
 *   +0x0048 -> line 438
 *   +0x0060 -> line 439
 *   +0x006c -> line 442
 *   +0x0078 -> line 443
 *   +0x0084 -> line 446
 *   +0x0090 -> line 447
 *   +0x009c -> line 448
 *   +0x00d0 -> line 450
 *   +0x00dc -> line 453
 *   +0x00e8 -> line 454
 *   +0x00f4 -> line 457
 *   +0x0108 -> line 458
 *   +0x0114 -> line 461
 *   +0x0120 -> line 462
 *   +0x012c -> line 465
 *   +0x0138 -> line 466
 *   +0x0144 -> line 470
 *   +0x0180 -> line 471
 *   +0x018c -> line 474
 *   +0x0198 -> line 475
 *   +0x01a4 -> line 478
 *   +0x01b4 -> line 479
 *   +0x01c0 -> line 482
 *   +0x01c8 -> line 486
 *   +0x01e8 -> line 487
 *   +0x01f4 -> line 489
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ClearVRAM(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    anon_17 gif_pkt;
    long double mem[15];
    /* TODO: decompile from asm/... */
}
