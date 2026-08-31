/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SVG_stMCStatus_ SVG_stMCStatus_;
typedef struct anon_1 anon_1;
typedef struct anon_0 anon_0;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;

struct SVG_stMCStatus_ {
    int iPort; /* +0x0 */
    int iSlot; /* +0x4 */
    int iStatus; /* +0x8 */
};

struct anon_1 {
    unsigned char Resv2; /* +0x0 */
    unsigned char Sec; /* +0x1 */
    unsigned char Min; /* +0x2 */
    unsigned char Hour; /* +0x3 */
    unsigned char Day; /* +0x4 */
    unsigned char Month; /* +0x5 */
    unsigned short Year; /* +0x6 */
};

struct anon_0 {
    anon_1 _Create; /* +0x0 */
    anon_1 _Modify; /* +0x8 */
    unsigned int FileSizeByte; /* +0x10 */
    unsigned short AttrFile; /* +0x14 */
    unsigned short Reserve1; /* +0x16 */
    unsigned int Reserve2; /* +0x18 */
    unsigned int PdaAplNo; /* +0x1c */
    unsigned char EntryName[32]; /* +0x20 */
};

struct anon_2 {
    int szFileNameRead; /* +0x0 */
    int szFileNameSave; /* +0x4 */
    unsigned int u32Size; /* +0x8 */
    int pData; /* +0xc */
};

struct anon_3 {
    unsigned char Head[4]; /* +0x0 */
    unsigned short Reserv1; /* +0x4 */
    unsigned short OffsLF; /* +0x6 */
    unsigned int Reserv2; /* +0x8 */
    unsigned int TransRate; /* +0xc */
    int BgColor[4][4]; /* +0x10 */
    float LightDir[3][4]; /* +0x50 */
    float LightColor[3][4]; /* +0x80 */
    float Ambient[4]; /* +0xb0 */
    unsigned char TitleName[68]; /* +0xc0 */
    unsigned char FnameView[64]; /* +0x104 */
    unsigned char FnameCopy[64]; /* +0x144 */
    unsigned char FnameDel[64]; /* +0x184 */
    unsigned char Reserve3[512]; /* +0x1c4 */
};

int gUpdateFielInfo;
int bSetMC;
int bCheckMC;
int bOverwriteMC;
static anon_2 SVG_gs_a3_stIconDesc[3];
static unsigned char gs_bSceMcOpIsSuccessful;
static int SVG_gs_lActiveVmsNumber;
static int gs_iSceMcOpStatus;
int gs_iSceMcOpChanged;
int gs_iSceMcOpWarned;
anon_0 gFileInfo;
anon_0 gFileInfo2;
int MC_g_GroupSaveGameAndOptions;
int SVG_g_iFreeClustersAfter;
int SVG_g_iFreeClustersBefore;
static SVG_stMCStatus_ gs_a_stCardStatus[2];
int (*SVG_fn_iMCStatusComparer)(SVG_stMCStatus_*, SVG_stMCStatus_*);
SVG_stMCStatus_ g_axPadMapping;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 143–168 */
/* addr: 0x00133950  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 143
 *   +0x0014 -> line 144
 *   +0x0018 -> line 145
 *   +0x001c -> line 146
 *   +0x0020 -> line 148
 *   +0x0028 -> line 151
 *   +0x0034 -> line 152
 *   +0x00e0 -> line 153
 *   +0x0130 -> line 154
 *   +0x0138 -> line 157
 *   +0x014c -> line 158
 *   +0x015c -> line 160
 *   +0x0178 -> line 162
 *   +0x0180 -> line 163
 *   +0x0184 -> line 164
 *   +0x018c -> line 168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SVG_fn_vCheckStatusChangeInMC0(void)
{
    unsigned int iResultInfo;
    int iType;
    unsigned int bResult;
    unsigned int u32RetryCount;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 171–178 */
/* addr: 0x00133b00  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 171
 *   +0x000c -> line 173
 *   +0x0014 -> line 174
 *   +0x0018 -> line 175
 *   +0x001c -> line 176
 *   +0x0020 -> line 177
 *   +0x0024 -> line 178
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_iGetChangeInMC0AndReset(void)
{
    int iReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 181–184 */
/* addr: 0x00133b40  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 181
 *   +0x0008 -> line 182
 *   +0x0010 -> line 183
 *   +0x0014 -> line 184
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_iGetChangeInMC0(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 188–190 */
/* addr: 0x00133b70  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 188
 *   +0x0008 -> line 189
 *   +0x000c -> line 190
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SVG_fn_vSetMC0AsChanged(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 224–267 */
/* addr: 0x00133b90  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 224
 *   +0x000c -> line 237
 *   +0x0024 -> line 239
 *   +0x0058 -> line 245
 *   +0x0068 -> line 264
 *   +0x006c -> line 267
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SVG_fn_szGetSonyCompliantDirName(char* _szUserName)
{
    char s_szCompliantName[21];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 274–288 */
/* addr: 0x00133c10  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 274
 *   +0x0018 -> line 278
 *   +0x012c -> line 280
 *   +0x0140 -> line 281
 *   +0x014c -> line 282
 *   +0x0158 -> line 284
 *   +0x0164 -> line 287
 *   +0x0168 -> line 288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32Format(int _iPort, int _iSlot)
{
    unsigned int u32RetryCount;
    int iResult;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 317–327 */
/* addr: 0x00133d90  size: 404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 317
 *   +0x0020 -> line 318
 *   +0x0028 -> line 320
 *   +0x014c -> line 322
 *   +0x0160 -> line 323
 *   +0x016c -> line 324
 *   +0x0178 -> line 326
 *   +0x017c -> line 327
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32GetFileInfo(int _iPort, int _iSlot, char* _szFileName, anon_0* _pRes)
{
    unsigned int u32RetryCount;
    int iFd;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 330–356 */
/* addr: 0x00133f30  size: 576 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 330
 *   +0x0024 -> line 332
 *   +0x002c -> line 335
 *   +0x0030 -> line 338
 *   +0x0058 -> line 340
 *   +0x007c -> line 341
 *   +0x0088 -> line 344
 *   +0x01ac -> line 346
 *   +0x01c0 -> line 347
 *   +0x01e0 -> line 349
 *   +0x01f8 -> line 350
 *   +0x0204 -> line 351
 *   +0x0210 -> line 353
 *   +0x021c -> line 355
 *   +0x0220 -> line 356
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32GetFileAttributes(int _iPort, int _iSlot, char* _szFileName)
{
    unsigned int u32RetryCount;
    int i;
    unsigned short t;
    int iFd;
    anon_0 Res;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 408–420 */
/* addr: 0x00134170  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 408
 *   +0x0014 -> line 412
 *   +0x0030 -> line 414
 *   +0x0054 -> line 416
 *   +0x0060 -> line 418
 *   +0x0064 -> line 420
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32GetFileSize(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 424–426 */
/* addr: 0x001341f0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 424
 *   +0x0008 -> line 425
 *   +0x0010 -> line 426
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_SetAsCurrentMemoryCard(int cmc)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 434–468 */
/* addr: 0x00134210  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 434
 *   +0x0014 -> line 438
 *   +0x0030 -> line 440
 *   +0x00a8 -> line 446
 *   +0x00b4 -> line 448
 *   +0x00d8 -> line 453
 *   +0x0180 -> line 459
 *   +0x018c -> line 461
 *   +0x0198 -> line 466
 *   +0x019c -> line 468
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32GetFileCoherence(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 471–505 */
/* addr: 0x001343c0  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 471
 *   +0x0014 -> line 475
 *   +0x0030 -> line 485
 *   +0x0054 -> line 490
 *   +0x00fc -> line 496
 *   +0x0108 -> line 498
 *   +0x0114 -> line 503
 *   +0x0118 -> line 505
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32GetFileCoherence2(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 512–537 */
/* addr: 0x001344f0  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 512
 *   +0x0014 -> line 516
 *   +0x0030 -> line 518
 *   +0x0054 -> line 523
 *   +0x0060 -> line 524
 *   +0x006c -> line 525
 *   +0x0078 -> line 526
 *   +0x0084 -> line 527
 *   +0x0090 -> line 528
 *   +0x009c -> line 531
 *   +0x00a0 -> line 532
 *   +0x00ac -> line 534
 *   +0x00b0 -> line 535
 *   +0x00b4 -> line 537
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32SetFileCoherence(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 540–565 */
/* addr: 0x001345c0  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 540
 *   +0x0014 -> line 544
 *   +0x0030 -> line 546
 *   +0x0054 -> line 551
 *   +0x0060 -> line 552
 *   +0x006c -> line 553
 *   +0x0078 -> line 554
 *   +0x0084 -> line 555
 *   +0x0090 -> line 556
 *   +0x009c -> line 559
 *   +0x00a0 -> line 560
 *   +0x00ac -> line 562
 *   +0x00b0 -> line 563
 *   +0x00b4 -> line 565
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32SetFileCoherence2(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 572–608 */
/* addr: 0x00134690  size: 1672 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 572
 *   +0x0040 -> line 573
 *   +0x0048 -> line 577
 *   +0x0164 -> line 579
 *   +0x0178 -> line 580
 *   +0x0184 -> line 583
 *   +0x0294 -> line 585
 *   +0x02a8 -> line 586
 *   +0x02b8 -> line 589
 *   +0x03c4 -> line 591
 *   +0x03d8 -> line 592
 *   +0x03e4 -> line 593
 *   +0x03f0 -> line 600
 *   +0x03fc -> line 602
 *   +0x0504 -> line 603
 *   +0x0518 -> line 604
 *   +0x063c -> line 605
 *   +0x0650 -> line 607
 *   +0x0654 -> line 608
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32WriteToFile(int _iPort, int _iSlot, char* _szFileName, void* _pData, unsigned int _u32DataSize)
{
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    int iFd;
    int iResult;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 616–647 */
/* addr: 0x00134d20  size: 1060 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 616
 *   +0x0034 -> line 617
 *   +0x003c -> line 622
 *   +0x0054 -> line 624
 *   +0x016c -> line 626
 *   +0x0180 -> line 627
 *   +0x018c -> line 630
 *   +0x029c -> line 632
 *   +0x02b0 -> line 633
 *   +0x02c0 -> line 636
 *   +0x03cc -> line 638
 *   +0x03e0 -> line 639
 *   +0x03ec -> line 640
 *   +0x03f8 -> line 646
 *   +0x03fc -> line 647
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32ReadFromFile(int _iPort, int _iSlot, char* _szFileName, void* _pData, unsigned int _u32DataSize)
{
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    char real_name[256];
    int iFd;
    int iResult;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 654–682 */
/* addr: 0x00135150  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 654
 *   +0x0024 -> line 655
 *   +0x0028 -> line 661
 *   +0x0044 -> line 662
 *   +0x0060 -> line 664
 *   +0x006c -> line 666
 *   +0x0078 -> line 667
 *   +0x0090 -> line 669
 *   +0x00a0 -> line 670
 *   +0x00ac -> line 672
 *   +0x00d4 -> line 673
 *   +0x00e0 -> line 675
 *   +0x00f0 -> line 676
 *   +0x00f8 -> line 677
 *   +0x0100 -> line 681
 *   +0x0104 -> line 682
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32ReadUnknownFile(int _iPort, int _iSlot, char* _szFileName, void** _ppData, unsigned int* _pu32DataSize)
{
    char real_name[256];
    anon_0 FileInfo;
    int iFd;
    int iResult;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 690–714 */
/* addr: 0x00135270  size: 552 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 690
 *   +0x0020 -> line 694
 *   +0x013c -> line 697
 *   +0x0150 -> line 699
 *   +0x0160 -> line 700
 *   +0x016c -> line 702
 *   +0x017c -> line 703
 *   +0x0188 -> line 704
 *   +0x0198 -> line 705
 *   +0x01a4 -> line 706
 *   +0x01b4 -> line 707
 *   +0x01c0 -> line 708
 *   +0x01cc -> line 709
 *   +0x01f4 -> line 712
 *   +0x0208 -> line 713
 *   +0x020c -> line 714
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32Query(int _iPort, int _iSlot, int* _p_iFreeClusters)
{
    unsigned int u32RetryCount;
    int iResult;
    int iFormat;
    int iType;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 731–811 */
/* addr: 0x001354a0  size: 524 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 731
 *   +0x0020 -> line 735
 *   +0x013c -> line 738
 *   +0x0150 -> line 740
 *   +0x0160 -> line 741
 *   +0x016c -> line 743
 *   +0x017c -> line 744
 *   +0x0188 -> line 745
 *   +0x0198 -> line 746
 *   +0x01a4 -> line 747
 *   +0x01c0 -> line 752
 *   +0x01c8 -> line 755
 *   +0x01d4 -> line 756
 *   +0x01e0 -> line 807
 *   +0x01ec -> line 810
 *   +0x01f0 -> line 811
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32QueryAndCheckSpace(int _iPort, int _iSlot, int* _p_iFreeClusters)
{
    int iFreeSpace;
    unsigned int u32RetryCount;
    int iResult;
    int iFormat;
    int iType;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 872–987 */
/* addr: 0x001356b0  size: 820 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 872
 *   +0x002c -> line 921
 *   +0x0030 -> line 924
 *   +0x003c -> line 926
 *   +0x004c -> line 927
 *   +0x005c -> line 928
 *   +0x0080 -> line 931
 *   +0x0088 -> line 932
 *   +0x008c -> line 934
 *   +0x0094 -> line 937
 *   +0x009c -> line 938
 *   +0x00a0 -> line 939
 *   +0x00b8 -> line 941
 *   +0x00c4 -> line 944
 *   +0x00dc -> line 946
 *   +0x00e4 -> line 947
 *   +0x00e8 -> line 948
 *   +0x0100 -> line 949
 *   +0x0110 -> line 950
 *   +0x0128 -> line 951
 *   +0x0138 -> line 952
 *   +0x0150 -> line 953
 *   +0x0160 -> line 954
 *   +0x0178 -> line 955
 *   +0x0188 -> line 956
 *   +0x01a0 -> line 957
 *   +0x01b0 -> line 958
 *   +0x01c8 -> line 959
 *   +0x01d8 -> line 960
 *   +0x01f0 -> line 961
 *   +0x01f8 -> line 973
 *   +0x0200 -> line 974
 *   +0x0230 -> line 976
 *   +0x0280 -> line 980
 *   +0x02a4 -> line 981
 *   +0x02c0 -> line 983
 *   +0x02c8 -> line 984
 *   +0x02f0 -> line 985
 *   +0x0300 -> line 986
 *   +0x0310 -> line 987
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SVG_fn_szAsciiToSJIS(char* _szOutSJIS, unsigned short _u16MaxNbChars, char* _szInASCII, unsigned short* _p_u16OffsLF)
{
    int iASCII;
    unsigned char stmp2;
    unsigned char stmp;
    unsigned short u16SJIS;
    unsigned char* p_szOutSJIS;
    unsigned short u16Count;
    unsigned short s_a3a2_u16AsciiTable[3][2];
    unsigned short s_a_u16AsciiKTable[33];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 994–1077 */
/* addr: 0x001359f0  size: 960 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 994
 *   +0x0028 -> line 999
 *   +0x0054 -> line 1006
 *   +0x0078 -> line 1012
 *   +0x009c -> line 1018
 *   +0x00b0 -> line 1023
 *   +0x00c4 -> line 1026
 *   +0x00d8 -> line 1030
 *   +0x00f8 -> line 1031
 *   +0x011c -> line 1033
 *   +0x0134 -> line 1036
 *   +0x013c -> line 1038
 *   +0x0150 -> line 1039
 *   +0x0164 -> line 1040
 *   +0x0178 -> line 1041
 *   +0x018c -> line 1046
 *   +0x01a0 -> line 1048
 *   +0x01e0 -> line 1049
 *   +0x0220 -> line 1052
 *   +0x0238 -> line 1053
 *   +0x0260 -> line 1054
 *   +0x026c -> line 1058
 *   +0x0278 -> line 1060
 *   +0x02b0 -> line 1063
 *   +0x02dc -> line 1065
 *   +0x0330 -> line 1071
 *   +0x0378 -> line 1072
 *   +0x0388 -> line 1075
 *   +0x039c -> line 1076
 *   +0x03a0 -> line 1077
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32CreateIconFilesForSave(int _iPort, int _iSlot, char* _szSonyCompliantDirName, char* _szTitleName)
{
    float ambient[4];
    float lightcol[3][4];
    float lightdir[3][4];
    int bgcolor[4][4];
    char Title[66];
    char szFileName[64];
    anon_3 stIcon;
    int s32Count;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1125–1135 */
/* addr: 0x00135db0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1125
 *   +0x0020 -> line 1127
 *   +0x0134 -> line 1130
 *   +0x0148 -> line 1131
 *   +0x0170 -> line 1134
 *   +0x0174 -> line 1135
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32MakeDir(int _iPort, int _iSlot, char* _szSonyCompliantDirName)
{
    int iResult;
    unsigned int u32RetryCount;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1142–1176 */
/* addr: 0x00135f40  size: 1164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1142
 *   +0x0030 -> line 1150
 *   +0x0154 -> line 1151
 *   +0x0170 -> line 1153
 *   +0x017c -> line 1154
 *   +0x0188 -> line 1155
 *   +0x0194 -> line 1157
 *   +0x02bc -> line 1159
 *   +0x02d0 -> line 1160
 *   +0x02dc -> line 1161
 *   +0x02e8 -> line 1164
 *   +0x02f8 -> line 1165
 *   +0x0310 -> line 1167
 *   +0x0424 -> line 1169
 *   +0x0438 -> line 1170
 *   +0x0444 -> line 1171
 *   +0x0450 -> line 1174
 *   +0x045c -> line 1175
 *   +0x0460 -> line 1176
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32DestroySaveGame(int _iPort, int _iSlot, char* _szSonyCompliantDirName)
{
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    anon_0 a18_stGetDirTable[18];
    int s32Count;
    int iResult;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1202–1234 */
/* addr: 0x001363d0  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1202
 *   +0x0028 -> line 1204
 *   +0x002c -> line 1227
 *   +0x0054 -> line 1234
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32SaveGame(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    int bSavingOptions;
    char* Name;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1252–1292 */
/* addr: 0x00136440  size: 664 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1252
 *   +0x0028 -> line 1259
 *   +0x003c -> line 1262
 *   +0x015c -> line 1263
 *   +0x0178 -> line 1265
 *   +0x0184 -> line 1268
 *   +0x0194 -> line 1271
 *   +0x01b4 -> line 1272
 *   +0x01c0 -> line 1276
 *   +0x01e4 -> line 1278
 *   +0x01f8 -> line 1279
 *   +0x0204 -> line 1283
 *   +0x0220 -> line 1284
 *   +0x0248 -> line 1286
 *   +0x025c -> line 1287
 *   +0x0268 -> line 1290
 *   +0x027c -> line 1291
 *   +0x0280 -> line 1292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32SaveGameReal(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    unsigned int u32RetryCount;
    char szFileName[64];
    int iResult;
    anon_0 stGetDirTable[99];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1295–1324 */
/* addr: 0x001366e0  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1295
 *   +0x0020 -> line 1302
 *   +0x0034 -> line 1305
 *   +0x005c -> line 1306
 *   +0x0070 -> line 1307
 *   +0x0078 -> line 1308
 *   +0x0084 -> line 1313
 *   +0x00a0 -> line 1315
 *   +0x00b8 -> line 1317
 *   +0x00e0 -> line 1319
 *   +0x00ec -> line 1322
 *   +0x0100 -> line 1323
 *   +0x0104 -> line 1324
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32LoadGameReal(int _iPort, int _iSlot, char* _szSonyCompliantName, void* _pData, unsigned int _u32DataSize)
{
    char szFileName[64];
    int ret;
    int iResult;
    anon_0 stGetDirTable[99];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1588–1596 */
/* addr: 0x00136800  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1588
 *   +0x0008 -> line 1590
 *   +0x0024 -> line 1591
 *   +0x0030 -> line 1593
 *   +0x005c -> line 1596
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SVG_fn_bIsVmsConnected(int _lVmsNumber)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1604–1613 */
/* addr: 0x00136870  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1604
 *   +0x0008 -> line 1607
 *   +0x0024 -> line 1608
 *   +0x0030 -> line 1611
 *   +0x003c -> line 1613
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SVG_fn_bIsActivVmsConnected(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1668–1669 */
/* addr: 0x001368c0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1668
 *   +0x0004 -> line 1669
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_bGetActiveVms(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1701–1713 */
/* addr: 0x001368d0  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1701
 *   +0x0024 -> line 1702
 *   +0x002c -> line 1706
 *   +0x014c -> line 1708
 *   +0x0160 -> line 1710
 *   +0x016c -> line 1712
 *   +0x0170 -> line 1713
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32ReadNextFileInfo(int _iPort, int _iSlot, char* _szFileName, int _not_first, anon_0* _pTable)
{
    unsigned int u32RetryCount;
    int iFd;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1717–1741 */
/* addr: 0x00136a60  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1717
 *   +0x0020 -> line 1718
 *   +0x0024 -> line 1724
 *   +0x004c -> line 1727
 *   +0x0058 -> line 1729
 *   +0x0060 -> line 1730
 *   +0x0074 -> line 1735
 *   +0x0080 -> line 1740
 *   +0x0084 -> line 1741
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32ReadNextName(int _iPort, int _iSlot, char* _szFileName, int _not_first, char* _pRes)
{
    anon_0 table;
    int iFd;
    /* TODO: decompile from asm/... */
}
