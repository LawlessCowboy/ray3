/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stButtonCaps stButtonCaps;
typedef struct SVG_stMCStatus_ SVG_stMCStatus_;
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct stAxisCaps stAxisCaps;
typedef struct stJoystickState stJoystickState;
typedef struct stJoystickCaps stJoystickCaps;
typedef struct PS2_tdstControllerData_ PS2_tdstControllerData_;

struct stButtonCaps {
    int m_lRange; /* +0x0 */
};

struct SVG_stMCStatus_ {
    int iPort; /* +0x0 */
    int iSlot; /* +0x4 */
    int iStatus; /* +0x8 */
};

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

struct stAxisCaps {
    int m_lRange; /* +0x0 */
};

struct stJoystickState {
    unsigned char m_ucStatus; /* +0x0 */
    unsigned short m_uwDirections; /* +0x2 */
    unsigned int m_ulButtons; /* +0x4 */
    float m_a_fAxisValue[6]; /* +0x8 */
    float m_a_fButtonValue[16]; /* +0x20 */
};

struct stJoystickCaps {
    stAxisCaps m_a_stAxisCaps[6]; /* +0x0 */
    stButtonCaps m_a_stButtonCaps[16]; /* +0x18 */
};

struct PS2_tdstControllerData_ {
    unsigned char ucStatus; /* +0x0 */
    unsigned char ucControllerIDExt; /* +0x1 */
    unsigned short uwDigitalButtons; /* +0x2 */
    signed char a2_cAnalogStickRight[2]; /* +0x4 */
    signed char a2_cAnalogStickLeft[2]; /* +0x6 */
    signed char a12_cAnalogButtons[12]; /* +0x8 */
    unsigned char a12_ucReserved[12]; /* +0x14 */
};

SVG_stMCStatus_ g_axPadMapping[2];
static int gs_iScePadInit;
signed char INO_aJoyUsedByAI[16];
static int gs_a_DeconnectedJoy[2];
static int gs_a_InitializedJoy[2];
long double a_u128PadDmaBuf[2][16];
unsigned int GLI_g_bInExpertRasters;
unsigned int GLI_g_bInMenu;
int g_EngineHasBeenPausedBecauseOfMC;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 27–28 */
/* addr: 0x002eef80  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 27
 *   +0x0004 -> line 28
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned short INO_fn_uwJoyPreviousDirections(stDevice* _hDev)
{
    return ((stJoystickState*)_hDev->m_p_stLastState)->m_uwDirections;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 791–802 */
/* addr: 0x002eef90  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 791
 *   +0x0004 -> line 797
 *   +0x0008 -> line 791
 *   +0x0018 -> line 792
 *   +0x001c -> line 794
 *   +0x0020 -> line 795
 *   +0x0024 -> line 797
 *   +0x0030 -> line 798
 *   +0x0040 -> line 799
 *   +0x0054 -> line 798
 *   +0x0058 -> line 799
 *   +0x0100 -> line 802
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INOPS2_fn_wReadJoystick(stDevice* _p_stDev)
{
    short wPort;
    short wReturn;
    stJoystickCaps* p_stCaps;
    stJoystickState* p_stState;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 772–773 */
/* addr: 0x002ef0b0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 772
 *   +0x0024 -> line 773
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INOPS2_fn_wJoyCheckConnectionFast(short _wJoystickNum)
{
    return !gs_a_DeconnectedJoy[(int)_wJoystickNum];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 737–765 */
/* addr: 0x002ef0e0  size: 656 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 737
 *   +0x0004 -> line 741
 *   +0x0008 -> line 737
 *   +0x000c -> line 741
 *   +0x0010 -> line 737
 *   +0x0020 -> line 741
 *   +0x0024 -> line 737
 *   +0x0028 -> line 741
 *   +0x002c -> line 737
 *   +0x0030 -> line 741
 *   +0x0034 -> line 737
 *   +0x0038 -> line 741
 *   +0x003c -> line 737
 *   +0x0040 -> line 742
 *   +0x0044 -> line 741
 *   +0x0048 -> line 742
 *   +0x004c -> line 741
 *   +0x0050 -> line 742
 *   +0x0054 -> line 741
 *   +0x0058 -> line 742
 *   +0x005c -> line 744
 *   +0x0068 -> line 745
 *   +0x0080 -> line 747
 *   +0x008c -> line 748
 *   +0x0094 -> line 749
 *   +0x00ac -> line 751
 *   +0x0128 -> line 752
 *   +0x01e8 -> line 755
 *   +0x0248 -> line 757
 *   +0x024c -> line 761
 *   +0x0258 -> line 765
 *   +0x025c -> line 761
 *   +0x0260 -> line 765
 *   +0x0274 -> line 761
 *   +0x0278 -> line 765
 *   +0x0280 -> line 761
 *   +0x0284 -> line 765
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INOPS2_fn_wJoyCheckConnection(short _wJoystickNum)
{
    int iSlot;
    int iPort;
    unsigned char act_align[6];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 723–729 */
/* addr: 0x002ef370  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 723
 *   +0x0004 -> line 728
 *   +0x0008 -> line 723
 *   +0x000c -> line 724
 *   +0x0010 -> line 725
 *   +0x0014 -> line 729
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INOPS2_fn_wJoyGetJoystickCaps(int _unused, stJoystickCaps* _p_stJoyCaps)
{
    _p_stJoyCaps->m_a_stAxisCaps[0].m_lRange = 128;
    _p_stJoyCaps->m_a_stAxisCaps[1].m_lRange = 128;
    _p_stJoyCaps->m_a_stAxisCaps[3].m_lRange = 128;
    _p_stJoyCaps->m_a_stAxisCaps[4].m_lRange = 128;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 623–684 */
/* addr: 0x002ef390  size: 876 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 623
 *   +0x0004 -> line 626
 *   +0x0008 -> line 623
 *   +0x0020 -> line 626
 *   +0x0024 -> line 623
 *   +0x0028 -> line 626
 *   +0x002c -> line 623
 *   +0x0030 -> line 626
 *   +0x0034 -> line 623
 *   +0x0038 -> line 626
 *   +0x0048 -> line 628
 *   +0x0058 -> line 629
 *   +0x005c -> line 628
 *   +0x0060 -> line 629
 *   +0x0064 -> line 628
 *   +0x0068 -> line 629
 *   +0x006c -> line 628
 *   +0x0070 -> line 629
 *   +0x0074 -> line 630
 *   +0x00a8 -> line 631
 *   +0x00bc -> line 635
 *   +0x0180 -> line 636
 *   +0x0190 -> line 638
 *   +0x01ec -> line 639
 *   +0x02b0 -> line 642
 *   +0x0310 -> line 645
 *   +0x0318 -> line 659
 *   +0x032c -> line 663
 *   +0x0330 -> line 673
 *   +0x033c -> line 684
 *   +0x0340 -> line 683
 *   +0x0344 -> line 684
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INOPS2_fn_wRegisterJoystick(short _wJoystickNum)
{
    int iSlot;
    int iPort;
    int s_bBlackBoxPadDeclared;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 598–605 */
/* addr: 0x002ef700  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 598
 *   +0x0008 -> line 599
 *   +0x0014 -> line 600
 *   +0x001c -> line 602
 *   +0x0028 -> line 604
 *   +0x004c -> line 605
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INOPS2_fn_wInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\ino\ps2\joyps2.c lines 325–587 */
/* addr: 0x002ef760  size: 2324 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 325
 *   +0x001c -> line 329
 *   +0x0050 -> line 331
 *   +0x005c -> line 356
 *   +0x00a4 -> line 358
 *   +0x00a8 -> line 359
 *   +0x00ac -> line 358
 *   +0x00b4 -> line 359
 *   +0x00bc -> line 421
 *   +0x00f0 -> line 423
 *   +0x0100 -> line 436
 *   +0x0108 -> line 437
 *   +0x0258 -> line 439
 *   +0x025c -> line 440
 *   +0x03b0 -> line 443
 *   +0x03b8 -> line 444
 *   +0x0508 -> line 446
 *   +0x050c -> line 447
 *   +0x0660 -> line 469
 *   +0x066c -> line 471
 *   +0x0670 -> line 472
 *   +0x0674 -> line 471
 *   +0x067c -> line 472
 *   +0x0684 -> line 477
 *   +0x0688 -> line 485
 *   +0x068c -> line 477
 *   +0x0694 -> line 485
 *   +0x06a8 -> line 489
 *   +0x06ac -> line 490
 *   +0x06b0 -> line 489
 *   +0x06bc -> line 492
 *   +0x06c8 -> line 494
 *   +0x06cc -> line 495
 *   +0x06d0 -> line 496
 *   +0x06d8 -> line 497
 *   +0x06e4 -> line 499
 *   +0x06e8 -> line 500
 *   +0x06ec -> line 501
 *   +0x06f4 -> line 504
 *   +0x0710 -> line 507
 *   +0x0714 -> line 508
 *   +0x0718 -> line 507
 *   +0x0724 -> line 510
 *   +0x0730 -> line 512
 *   +0x0734 -> line 513
 *   +0x0738 -> line 514
 *   +0x0740 -> line 515
 *   +0x074c -> line 517
 *   +0x0750 -> line 518
 *   +0x0754 -> line 519
 *   +0x075c -> line 522
 *   +0x0778 -> line 525
 *   +0x077c -> line 526
 *   +0x0780 -> line 525
 *   +0x078c -> line 528
 *   +0x0798 -> line 530
 *   +0x079c -> line 531
 *   +0x07a0 -> line 532
 *   +0x07a8 -> line 533
 *   +0x07b4 -> line 535
 *   +0x07b8 -> line 536
 *   +0x07bc -> line 537
 *   +0x07c4 -> line 540
 *   +0x07e0 -> line 543
 *   +0x07e4 -> line 544
 *   +0x07e8 -> line 543
 *   +0x07f4 -> line 546
 *   +0x0800 -> line 548
 *   +0x0804 -> line 549
 *   +0x0808 -> line 550
 *   +0x0810 -> line 551
 *   +0x081c -> line 553
 *   +0x0820 -> line 554
 *   +0x0824 -> line 555
 *   +0x082c -> line 558
 *   +0x0848 -> line 564
 *   +0x0858 -> line 568
 *   +0x085c -> line 566
 *   +0x0860 -> line 571
 *   +0x086c -> line 574
 *   +0x0880 -> line 576
 *   +0x0884 -> line 578
 *   +0x0890 -> line 581
 *   +0x08d0 -> line 583
 *   +0x08f8 -> line 586
 *   +0x08fc -> line 587
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short fn_wJoyGetJoystickState(short _wJoystickNum, stJoystickState* _p_stJoyState, stJoystickCaps* _p_stJoyCaps)
{
    short xButton;
    float* p_fButtonValue;
    stButtonCaps* p_stButtonCaps;
    unsigned char* p_ucButtonValue;
    int lAxisCaps;
    signed char cAxisValue;
    int v2;
    int v1;
    PS2_tdstControllerData_ stContData;
    /* TODO: decompile from asm/... */
}
