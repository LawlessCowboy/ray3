/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Layouts from DefineMenu2D.c; only the fields this unit uses are named. */
typedef struct tdstFileEntry_ {
    unsigned int Reserved_Key; /* +0x0 */
    unsigned int Reserved_Key2; /* +0x4 */
    char Name[8]; /* +0x8 */
    char DateTime[26]; /* +0x10 */
    unsigned int ulScore; /* +0x2c */
    unsigned int ulNbCage; /* +0x30 */
} tdstFileEntry_;

typedef struct tdstMenu2DPages_ {
    unsigned char a_ucPageData[0x248]; /* +0x0 */
    unsigned int NbEntry; /* +0x248 */
    unsigned int CurrentFirstEntry; /* +0x24c */
} tdstMenu2DPages_;

extern tdstFileEntry_ g_aFileEntryArray[100];
extern tdstMenu2DPages_ aMenu2DPages[35];
extern int g_AlbumPage;
extern "C" char* strcpy(char* dst, const char* src);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 922–930 */
/* addr: 0x0029d990  size: 608 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 922
 *   +0x000c -> line 923
 *   +0x0018 -> line 925
 *   +0x0020 -> line 926
 *   +0x024c -> line 929
 *   +0x0250 -> line 930
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GAM_fn_vSaveGameAfterVideoIfNeeded(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 867–914 */
/* addr: 0x0029dbf0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 867
 *   +0x0008 -> line 871
 *   +0x0018 -> line 874
 *   +0x001c -> line 875
 *   +0x0020 -> line 877
 *   +0x0024 -> line 875
 *   +0x0028 -> line 877
 *   +0x0048 -> line 880
 *   +0x0050 -> line 881
 *   +0x0058 -> line 884
 *   +0x0060 -> line 888
 *   +0x0068 -> line 891
 *   +0x0078 -> line 895
 *   +0x007c -> line 896
 *   +0x0080 -> line 898
 *   +0x0084 -> line 896
 *   +0x0088 -> line 898
 *   +0x00a8 -> line 901
 *   +0x00b0 -> line 902
 *   +0x00b8 -> line 904
 *   +0x00c0 -> line 908
 *   +0x00c8 -> line 914
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInterruptPalAndProgressiveVideoPages(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 819–863 */
/* addr: 0x0029dcd0  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 819
 *   +0x0008 -> line 823
 *   +0x0018 -> line 826
 *   +0x0030 -> line 828
 *   +0x0034 -> line 829
 *   +0x0038 -> line 831
 *   +0x003c -> line 829
 *   +0x0040 -> line 831
 *   +0x0060 -> line 834
 *   +0x0068 -> line 835
 *   +0x0070 -> line 838
 *   +0x0078 -> line 844
 *   +0x0088 -> line 847
 *   +0x00a0 -> line 849
 *   +0x00a4 -> line 850
 *   +0x00a8 -> line 852
 *   +0x00ac -> line 850
 *   +0x00b0 -> line 852
 *   +0x00d0 -> line 855
 *   +0x00d8 -> line 856
 *   +0x00e0 -> line 858
 *   +0x00e8 -> line 863
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vManagePalAndProgressiveVideoPage(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 676–816 */
/* addr: 0x0029ddd0  size: 440 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 676
 *   +0x0004 -> line 754
 *   +0x0008 -> line 676
 *   +0x000c -> line 754
 *   +0x0060 -> line 760
 *   +0x0068 -> line 761
 *   +0x0070 -> line 762
 *   +0x0074 -> line 763
 *   +0x0078 -> line 762
 *   +0x007c -> line 763
 *   +0x0080 -> line 765
 *   +0x0088 -> line 768
 *   +0x0098 -> line 771
 *   +0x00a0 -> line 773
 *   +0x00dc -> line 774
 *   +0x0118 -> line 781
 *   +0x0120 -> line 783
 *   +0x0128 -> line 787
 *   +0x0130 -> line 789
 *   +0x0138 -> line 790
 *   +0x013c -> line 791
 *   +0x0140 -> line 790
 *   +0x0144 -> line 791
 *   +0x0148 -> line 793
 *   +0x0150 -> line 796
 *   +0x0160 -> line 799
 *   +0x0168 -> line 802
 *   +0x01a4 -> line 812
 *   +0x01ac -> line 816
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vManageValidatePalAndProgressiveVideoPage(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 636–673 */
/* addr: 0x0029df90  size: 620 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 636
 *   +0x0004 -> line 641
 *   +0x0008 -> line 636
 *   +0x000c -> line 641
 *   +0x0010 -> line 636
 *   +0x0014 -> line 641
 *   +0x0020 -> line 642
 *   +0x0024 -> line 641
 *   +0x0030 -> line 642
 *   +0x0038 -> line 640
 *   +0x003c -> line 641
 *   +0x0044 -> line 642
 *   +0x004c -> line 641
 *   +0x0050 -> line 642
 *   +0x0058 -> line 643
 *   +0x006c -> line 645
 *   +0x0070 -> line 643
 *   +0x0094 -> line 645
 *   +0x00cc -> line 650
 *   +0x00d0 -> line 651
 *   +0x00d4 -> line 650
 *   +0x00d8 -> line 652
 *   +0x00dc -> line 651
 *   +0x00e0 -> line 652
 *   +0x00e4 -> line 651
 *   +0x00e8 -> line 652
 *   +0x00ec -> line 651
 *   +0x00f0 -> line 652
 *   +0x00f4 -> line 651
 *   +0x010c -> line 652
 *   +0x0110 -> line 651
 *   +0x0114 -> line 652
 *   +0x011c -> line 653
 *   +0x0130 -> line 655
 *   +0x0134 -> line 653
 *   +0x0158 -> line 655
 *   +0x0190 -> line 660
 *   +0x0194 -> line 661
 *   +0x0198 -> line 660
 *   +0x019c -> line 662
 *   +0x01a0 -> line 661
 *   +0x01a4 -> line 662
 *   +0x01a8 -> line 661
 *   +0x01ac -> line 662
 *   +0x01b0 -> line 661
 *   +0x01b4 -> line 662
 *   +0x01b8 -> line 661
 *   +0x01d0 -> line 662
 *   +0x01d4 -> line 661
 *   +0x01d8 -> line 662
 *   +0x01e0 -> line 663
 *   +0x01f8 -> line 665
 *   +0x01fc -> line 663
 *   +0x0220 -> line 665
 *   +0x0258 -> line 672
 *   +0x025c -> line 673
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_vDefineProgressiveScanPages(int IndSubMenuPage)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 597–633 */
/* addr: 0x0029e200  size: 620 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 597
 *   +0x0004 -> line 602
 *   +0x0008 -> line 597
 *   +0x000c -> line 602
 *   +0x0010 -> line 597
 *   +0x0014 -> line 602
 *   +0x0020 -> line 603
 *   +0x0024 -> line 602
 *   +0x0030 -> line 603
 *   +0x0038 -> line 601
 *   +0x003c -> line 602
 *   +0x0044 -> line 603
 *   +0x004c -> line 602
 *   +0x0050 -> line 603
 *   +0x0058 -> line 604
 *   +0x006c -> line 606
 *   +0x0070 -> line 604
 *   +0x0094 -> line 606
 *   +0x00cc -> line 611
 *   +0x00d0 -> line 612
 *   +0x00d4 -> line 611
 *   +0x00d8 -> line 613
 *   +0x00dc -> line 612
 *   +0x00e0 -> line 613
 *   +0x00e4 -> line 612
 *   +0x00e8 -> line 613
 *   +0x00ec -> line 612
 *   +0x00f0 -> line 613
 *   +0x00f4 -> line 612
 *   +0x010c -> line 613
 *   +0x0110 -> line 612
 *   +0x0114 -> line 613
 *   +0x011c -> line 614
 *   +0x0130 -> line 616
 *   +0x0134 -> line 614
 *   +0x0158 -> line 616
 *   +0x0190 -> line 621
 *   +0x0194 -> line 622
 *   +0x0198 -> line 621
 *   +0x019c -> line 623
 *   +0x01a0 -> line 622
 *   +0x01a4 -> line 623
 *   +0x01a8 -> line 622
 *   +0x01ac -> line 623
 *   +0x01b0 -> line 622
 *   +0x01b4 -> line 623
 *   +0x01b8 -> line 622
 *   +0x01d0 -> line 623
 *   +0x01d4 -> line 622
 *   +0x01d8 -> line 623
 *   +0x01e0 -> line 624
 *   +0x01f8 -> line 626
 *   +0x01fc -> line 624
 *   +0x0220 -> line 626
 *   +0x0258 -> line 632
 *   +0x025c -> line 633
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_vDefinePalVideoPages(int IndSubMenuPage)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 545–565 */
/* addr: 0x0029e470  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 545
 *   +0x0004 -> line 546
 *   +0x0008 -> line 545
 *   +0x000c -> line 546
 *   +0x0010 -> line 545
 *   +0x0018 -> line 546
 *   +0x0048 -> line 548
 *   +0x004c -> line 549
 *   +0x0078 -> line 550
 *   +0x0080 -> line 553
 *   +0x0088 -> line 555
 *   +0x008c -> line 556
 *   +0x0098 -> line 557
 *   +0x00a0 -> line 560
 *   +0x00a4 -> line 564
 *   +0x00a8 -> line 565
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_dwFindNextSnappedPicture(int lSnapID, char* _szFileName)
{
    if (aMenu2DPages[g_AlbumPage].NbEntry && ((unsigned int)lSnapID < aMenu2DPages[g_AlbumPage].NbEntry))
    {
        lSnapID++;
        strcpy(_szFileName, g_aFileEntryArray[lSnapID].Name);
    }
    else if (lSnapID == aMenu2DPages[g_AlbumPage].NbEntry)
    {
        lSnapID = 0;
        strcpy(_szFileName, g_aFileEntryArray[0].Name);
    }
    else
    {
        lSnapID = aMenu2DPages[g_AlbumPage].NbEntry;
    }
    return lSnapID;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 531–542 */
/* addr: 0x0029e530  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 531
 *   +0x0010 -> line 532
 *   +0x0018 -> line 534
 *   +0x001c -> line 535
 *   +0x0048 -> line 536
 *   +0x0050 -> line 539
 *   +0x007c -> line 541
 *   +0x0080 -> line 542
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_dwFindPreviousSnappedPicture(int lSnapID, char* _szFileName)
{
    if (lSnapID > 0)
    {
        lSnapID--;
        strcpy(_szFileName, g_aFileEntryArray[lSnapID].Name);
    }
    else
    {
        lSnapID = aMenu2DPages[g_AlbumPage].NbEntry;
    }
    return lSnapID;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx lines 142–521 */
/* addr: 0x0029e5c0  size: 3656 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 142
 *   +0x0008 -> line 146
 *   +0x0018 -> line 148
 *   +0x0020 -> line 151
 *   +0x0030 -> line 153
 *   +0x0040 -> line 155
 *   +0x0050 -> line 157
 *   +0x0058 -> line 158
 *   +0x0060 -> line 163
 *   +0x006c -> line 165
 *   +0x0074 -> line 166
 *   +0x007c -> line 171
 *   +0x008c -> line 173
 *   +0x0090 -> line 174
 *   +0x0098 -> line 177
 *   +0x00a8 -> line 179
 *   +0x00b0 -> line 182
 *   +0x00d4 -> line 185
 *   +0x00dc -> line 186
 *   +0x00e4 -> line 187
 *   +0x00ec -> line 190
 *   +0x00fc -> line 192
 *   +0x0108 -> line 199
 *   +0x0118 -> line 201
 *   +0x0148 -> line 203
 *   +0x0150 -> line 204
 *   +0x0158 -> line 206
 *   +0x0164 -> line 210
 *   +0x0188 -> line 214
 *   +0x0190 -> line 217
 *   +0x0198 -> line 218
 *   +0x0288 -> line 221
 *   +0x04b0 -> line 223
 *   +0x04c8 -> line 224
 *   +0x04d0 -> line 230
 *   +0x04d8 -> line 231
 *   +0x04e4 -> line 233
 *   +0x04f4 -> line 235
 *   +0x0504 -> line 237
 *   +0x050c -> line 238
 *   +0x0514 -> line 241
 *   +0x0534 -> line 246
 *   +0x0538 -> line 244
 *   +0x053c -> line 245
 *   +0x0540 -> line 250
 *   +0x0544 -> line 245
 *   +0x0548 -> line 246
 *   +0x0550 -> line 247
 *   +0x0558 -> line 248
 *   +0x0560 -> line 250
 *   +0x0584 -> line 252
 *   +0x058c -> line 250
 *   +0x0594 -> line 251
 *   +0x0598 -> line 252
 *   +0x05a0 -> line 250
 *   +0x05c4 -> line 252
 *   +0x05cc -> line 254
 *   +0x05d0 -> line 252
 *   +0x05d4 -> line 254
 *   +0x05d8 -> line 252
 *   +0x05dc -> line 254
 *   +0x060c -> line 258
 *   +0x0614 -> line 256
 *   +0x0618 -> line 258
 *   +0x0624 -> line 260
 *   +0x062c -> line 261
 *   +0x063c -> line 263
 *   +0x0660 -> line 266
 *   +0x0668 -> line 269
 *   +0x066c -> line 267
 *   +0x0670 -> line 269
 *   +0x0674 -> line 270
 *   +0x067c -> line 272
 *   +0x068c -> line 279
 *   +0x0694 -> line 283
 *   +0x069c -> line 285
 *   +0x06a0 -> line 292
 *   +0x06a8 -> line 293
 *   +0x06b4 -> line 295
 *   +0x06c4 -> line 297
 *   +0x0704 -> line 299
 *   +0x070c -> line 302
 *   +0x071c -> line 306
 *   +0x072c -> line 308
 *   +0x0768 -> line 309
 *   +0x07cc -> line 310
 *   +0x07d0 -> line 313
 *   +0x07f8 -> line 316
 *   +0x0814 -> line 317
 *   +0x0818 -> line 316
 *   +0x081c -> line 317
 *   +0x0820 -> line 316
 *   +0x0838 -> line 317
 *   +0x083c -> line 316
 *   +0x0840 -> line 317
 *   +0x0844 -> line 319
 *   +0x0850 -> line 321
 *   +0x0890 -> line 322
 *   +0x0898 -> line 326
 *   +0x08bc -> line 328
 *   +0x08c4 -> line 330
 *   +0x0904 -> line 335
 *   +0x090c -> line 336
 *   +0x0918 -> line 338
 *   +0x0928 -> line 340
 *   +0x0968 -> line 342
 *   +0x0970 -> line 345
 *   +0x0980 -> line 349
 *   +0x0990 -> line 351
 *   +0x09cc -> line 352
 *   +0x0a30 -> line 353
 *   +0x0a34 -> line 356
 *   +0x0a5c -> line 359
 *   +0x0a78 -> line 360
 *   +0x0a7c -> line 359
 *   +0x0a80 -> line 360
 *   +0x0a84 -> line 359
 *   +0x0a9c -> line 360
 *   +0x0aa0 -> line 359
 *   +0x0aa4 -> line 360
 *   +0x0aa8 -> line 362
 *   +0x0ab4 -> line 364
 *   +0x0af4 -> line 365
 *   +0x0afc -> line 369
 *   +0x0b20 -> line 371
 *   +0x0b28 -> line 373
 *   +0x0b68 -> line 427
 *   +0x0b84 -> line 429
 *   +0x0ba8 -> line 432
 *   +0x0bb0 -> line 434
 *   +0x0bbc -> line 435
 *   +0x0bc4 -> line 438
 *   +0x0bcc -> line 440
 *   +0x0bd8 -> line 446
 *   +0x0be8 -> line 448
 *   +0x0bf8 -> line 450
 *   +0x0c08 -> line 452
 *   +0x0c30 -> line 455
 *   +0x0c38 -> line 456
 *   +0x0c40 -> line 457
 *   +0x0c48 -> line 458
 *   +0x0c50 -> line 462
 *   +0x0c58 -> line 463
 *   +0x0c60 -> line 466
 *   +0x0c68 -> line 469
 *   +0x0c90 -> line 472
 *   +0x0c98 -> line 473
 *   +0x0ca0 -> line 474
 *   +0x0ca8 -> line 475
 *   +0x0cb0 -> line 479
 *   +0x0cb8 -> line 480
 *   +0x0cc0 -> line 484
 *   +0x0cc8 -> line 485
 *   +0x0cd4 -> line 487
 *   +0x0cf8 -> line 490
 *   +0x0d14 -> line 491
 *   +0x0d18 -> line 490
 *   +0x0d1c -> line 491
 *   +0x0d20 -> line 492
 *   +0x0d24 -> line 490
 *   +0x0d3c -> line 491
 *   +0x0d40 -> line 490
 *   +0x0d44 -> line 491
 *   +0x0d48 -> line 493
 *   +0x0d50 -> line 495
 *   +0x0d58 -> line 496
 *   +0x0d5c -> line 499
 *   +0x0d64 -> line 500
 *   +0x0d70 -> line 502
 *   +0x0d94 -> line 505
 *   +0x0db0 -> line 506
 *   +0x0db4 -> line 505
 *   +0x0db8 -> line 506
 *   +0x0dbc -> line 507
 *   +0x0dc0 -> line 505
 *   +0x0dd8 -> line 506
 *   +0x0ddc -> line 505
 *   +0x0de0 -> line 506
 *   +0x0de4 -> line 508
 *   +0x0dec -> line 511
 *   +0x0df4 -> line 512
 *   +0x0df8 -> line 511
 *   +0x0dfc -> line 512
 *   +0x0e00 -> line 514
 *   +0x0e04 -> line 513
 *   +0x0e08 -> line 511
 *   +0x0e20 -> line 512
 *   +0x0e24 -> line 511
 *   +0x0e28 -> line 512
 *   +0x0e2c -> line 514
 *   +0x0e30 -> line 513
 *   +0x0e34 -> line 520
 *   +0x0e38 -> line 521
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_vSpecificManageMenu2D(void)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}
