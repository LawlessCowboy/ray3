/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* This unit was built without optimization. */
#pragma optimization_level 0
#pragma peephole on

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SVG_stMCStatus_ SVG_stMCStatus_;

typedef enum anon_enum_0003f5a6 {
    MC_SAVE_NOMEMORYCARD = 0,
    MC_SAVE_NOTENOUGHTMEMORY = 1,
    MC_FORMATMEMORYCARD = 2,
    MC_UNFORMATTEDMEMORYCARD = 3,
    MC_FORMATTINGMEMORYCARD = 4,
    MC_FORMATSUCCESFULLY = 5,
    MC_FORMATERROR = 6,
    MC_CANCELFORMAT = 7,
    MC_CHANGEMEMORYCARD = 8,
    MC_SAVING = 9,
    MC_SAVESUCCESFULLY = 10,
    MC_SAVEERROR = 11,
    MC_SAVEOVERWRITE = 12,
    MC_LOAD_NOMEMORYCARD = 13,
    MC_LOADERROR = 14,
    MC_NOSAVEDATAPRESENT = 15,
    MC_LOADSUCCESFULLY = 16,
    MC_LOADING = 17,
    MC_RECONENCTPAD = 18,
    MC_MEMORYCARDCHANGED = 19,
    MC_MEMORYCARDBOOTCHECK = 20,
    MC_SAVE_CANCEL = 21,
    MC_SAVEDATACORRUPTED = 22,
    MC_SETTINGS_OVERWRITE = 23,
    MC_DUMMYSTRING3 = 24,
    MC_DUMMYSTRING4 = 25,
    MC_DUMMYSTRING5 = 26,
    MC_DUMMYSTRING6 = 27,
    MC_DUMMYSTRING7 = 28,
    MC_DUMMYSTRING8 = 29,
    MC_DUMMYSTRING9 = 30,
    MC_DUMMYSTRINGa = 31,
    MC_TOTALNUMBEROFSTRINGS = 32,
} anon_enum_0003f5a6;

struct SVG_stMCStatus_ {
    int iPort; /* +0x0 */
    int iSlot; /* +0x4 */
    int iStatus; /* +0x8 */
};

int MC_OLDBackupStrings[16];
char* MC_BackupStrings[32];
int MC_ManagmentState;
char MC_Strings[32][768];
int MC_g_MemoryCardOperationBackGroundTexture;
int MC_g_GroupSaveGameAndOptions;
volatile unsigned int paddata;
unsigned char rdata[32];
char MC_SavedString[765];
unsigned int TXT_g_ulDefaultColor;
SVG_stMCStatus_ g_axPadMapping[2];
int MC_g_MemoryNeededIs63K;
int MC_g_TotalMemoryNeeded;
int SVG_fn_iGetChangeInMC0AndReset(void);
int g_bSavingGameWithOptionsDontCheckDate;
int bCheckMC;
int bSetMC;
int bOverwriteMC;
anon_enum_0003f5a6 MC_Messages;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 295–304 */
/* addr: 0x001376e0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 295
 *   +0x000c -> line 297
 *   +0x0018 -> line 299
 *   +0x0038 -> line 301
 *   +0x006c -> line 302
 *   +0x0070 -> line 303
 *   +0x0084 -> line 304
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The SVG unit calls the C library through non-prototype declarations, which
 * reproduces the retail argument evaluation order. */
char* strcpy();
int SVG_fn_s32ReadNextName(int _iPort, int _iSlot, char* _szFileName, int _not_first, char* _pRes);

void MC_CheckStrings(void)
{
    int i;

    for (i = 0; i < 32; i++)
    {
        if (!MC_Strings[i])
        {
            strcpy(MC_Strings[i], MC_BackupStrings[i]);
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 309–354 */
/* addr: 0x00137780  size: 420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 309
 *   +0x001c -> line 311
 *   +0x002c -> line 314
 *   +0x0044 -> line 315
 *   +0x004c -> line 317
 *   +0x0074 -> line 318
 *   +0x007c -> line 321
 *   +0x0080 -> line 322
 *   +0x009c -> line 326
 *   +0x00b4 -> line 327
 *   +0x00bc -> line 329
 *   +0x00c0 -> line 331
 *   +0x00c8 -> line 333
 *   +0x00e0 -> line 334
 *   +0x00e8 -> line 336
 *   +0x0128 -> line 337
 *   +0x012c -> line 339
 *   +0x0130 -> line 340
 *   +0x0144 -> line 341
 *   +0x0148 -> line 342
 *   +0x0150 -> line 347
 *   +0x0168 -> line 348
 *   +0x017c -> line 349
 *   +0x0180 -> line 351
 *   +0x0188 -> line 354
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_AddString(int Number, char* String)
{
    char* pDest;
    char* psrc;
    char* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 380–383 */
/* addr: 0x00137930  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 380
 *   +0x0008 -> line 381
 *   +0x0014 -> line 382
 *   +0x001c -> line 383
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_SetBackgroundMaterial(void* pMaterial)
{
    if (MC_g_MemoryCardOperationBackGroundTexture == 0)
        MC_g_MemoryCardOperationBackGroundTexture = (int)pMaterial;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 411–432 */
/* addr: 0x00137960  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 411
 *   +0x0008 -> line 412
 *   +0x0014 -> line 414
 *   +0x0034 -> line 416
 *   +0x005c -> line 417
 *   +0x0064 -> line 420
 *   +0x0068 -> line 425
 *   +0x0078 -> line 428
 *   +0x0084 -> line 431
 *   +0x0088 -> line 432
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int scePadRead(int port, int slot, unsigned char* rdata);

/* Not original source, needs cleaning up: the pad-reading helpers keep the
 * redundant byte masks after each lbu and optimise their argument set-up,
 * which only level 2 without the peephole pass reproduces.  The original
 * probably got this from a build setting rather than a pragma. */
#pragma optimization_level 2
#pragma peephole off

int MC_XButtonPressed(void)
{
    MC_AskToReconnectPad(0);

    if (scePadRead(0, 0, rdata) > 0)
    {
        paddata = 0xffff ^ ((rdata[2] << 8) | rdata[3]);
    }
    else
    {
        paddata = 0;
    }

    if (paddata & 0x40)
    {
        return 1;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 435–452 */
/* addr: 0x00137a00  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 435
 *   +0x0008 -> line 436
 *   +0x0014 -> line 438
 *   +0x0034 -> line 440
 *   +0x005c -> line 441
 *   +0x0064 -> line 444
 *   +0x0068 -> line 446
 *   +0x0078 -> line 448
 *   +0x0084 -> line 451
 *   +0x0088 -> line 452
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_TriangleButtonPressed(void)
{
    MC_AskToReconnectPad(0);

    if (scePadRead(0, 0, rdata) > 0)
    {
        paddata = 0xffff ^ ((rdata[2] << 8) | rdata[3]);
    }
    else
    {
        paddata = 0;
    }

    if (paddata & 0x10)
    {
        return 4;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 455–472 */
/* addr: 0x00137aa0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 455
 *   +0x0008 -> line 456
 *   +0x0014 -> line 458
 *   +0x0034 -> line 460
 *   +0x005c -> line 461
 *   +0x0064 -> line 464
 *   +0x0068 -> line 466
 *   +0x0078 -> line 468
 *   +0x0084 -> line 471
 *   +0x0088 -> line 472
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_SquareButtonPressed(void)
{
    MC_AskToReconnectPad(0);

    if (scePadRead(0, 0, rdata) > 0)
    {
        paddata = 0xffff ^ ((rdata[2] << 8) | rdata[3]);
    }
    else
    {
        paddata = 0;
    }

    if (paddata & 0x80)
    {
        return 5;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 501–532 */
/* addr: 0x00137b40  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 501
 *   +0x0008 -> line 502
 *   +0x0014 -> line 504
 *   +0x0034 -> line 506
 *   +0x005c -> line 507
 *   +0x0064 -> line 510
 *   +0x0068 -> line 522
 *   +0x0078 -> line 524
 *   +0x0084 -> line 526
 *   +0x0094 -> line 528
 *   +0x00a0 -> line 531
 *   +0x00a4 -> line 532
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_XorOButtonsPressed(void)
{
    MC_AskToReconnectPad(0);

    if (scePadRead(0, 0, rdata) > 0)
    {
        paddata = 0xffff ^ ((rdata[2] << 8) | rdata[3]);
    }
    else
    {
        paddata = 0;
    }

    if (paddata & 0x40)
    {
        return 1;
    }
    else if (paddata & 0x20)
    {
        return 2;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 535–566 */
/* addr: 0x00137c00  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 535
 *   +0x0008 -> line 536
 *   +0x0014 -> line 538
 *   +0x0034 -> line 540
 *   +0x005c -> line 541
 *   +0x0064 -> line 544
 *   +0x0068 -> line 556
 *   +0x0078 -> line 558
 *   +0x0084 -> line 560
 *   +0x0094 -> line 562
 *   +0x00a0 -> line 565
 *   +0x00a4 -> line 566
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_XorTriangleButtonsPressed(void)
{
    MC_AskToReconnectPad(0);

    if (scePadRead(0, 0, rdata) > 0)
    {
        paddata = 0xffff ^ ((rdata[2] << 8) | rdata[3]);
    }
    else
    {
        paddata = 0;
    }

    if (paddata & 0x40)
    {
        return 1;
    }
    else if (paddata & 0x10)
    {
        return 4;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 569–590 */
/* addr: 0x00137cc0  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 569
 *   +0x0008 -> line 570
 *   +0x0014 -> line 572
 *   +0x0034 -> line 574
 *   +0x005c -> line 575
 *   +0x0064 -> line 578
 *   +0x0068 -> line 581
 *   +0x0078 -> line 583
 *   +0x0084 -> line 585
 *   +0x0094 -> line 587
 *   +0x00a0 -> line 589
 *   +0x00a4 -> line 590
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_SquareOrTriangleButtonsPressed(void)
{
    MC_AskToReconnectPad(0);

    if (scePadRead(0, 0, rdata) > 0)
    {
        paddata = 0xffff ^ ((rdata[2] << 8) | rdata[3]);
    }
    else
    {
        paddata = 0;
    }

    if (paddata & 0x80)
    {
        return 5;
    }
    else if (paddata & 0x10)
    {
        return 4;
    }
    return 0;
}

#pragma optimization_level 0
#pragma peephole on

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 595–602 */
/* addr: 0x00137d80  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 595
 *   +0x0008 -> line 596
 *   +0x0014 -> line 601
 *   +0x0038 -> line 602
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_WaitForXAndOButtonRelease(void)
{
    MC_AskToReconnectPad(0);
    while (MC_XorOButtonsPressed()) {}
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 605–612 */
/* addr: 0x00137dd0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 605
 *   +0x0008 -> line 606
 *   +0x0014 -> line 611
 *   +0x0038 -> line 612
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_WaitForXAndTriangleButtonRelease(void)
{
    MC_AskToReconnectPad(0);
    while (MC_XorTriangleButtonsPressed()) {}
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 615–622 */
/* addr: 0x00137e20  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 615
 *   +0x0008 -> line 616
 *   +0x0014 -> line 621
 *   +0x0038 -> line 622
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_WaitForSquareAndTriangleButtonRelease(void)
{
    MC_AskToReconnectPad(0);
    while (MC_SquareOrTriangleButtonsPressed()) {}
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 626–635 */
/* addr: 0x00137e70  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 626
 *   +0x0008 -> line 627
 *   +0x0014 -> line 633
 *   +0x0038 -> line 635
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_WaitForXButtonRelease(void)
{
    MC_AskToReconnectPad(0);
    while (MC_XButtonPressed()) {}
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 638–646 */
/* addr: 0x00137ec0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 638
 *   +0x0008 -> line 639
 *   +0x0014 -> line 645
 *   +0x0038 -> line 646
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_WaitForTriangleButtonRelease(void)
{
    MC_AskToReconnectPad(0);
    while (MC_TriangleButtonPressed()) {}
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 649–657 */
/* addr: 0x00137f10  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 649
 *   +0x0008 -> line 650
 *   +0x0014 -> line 656
 *   +0x0038 -> line 657
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_WaitForSquareButtonRelease(void)
{
    MC_AskToReconnectPad(0);
    while (MC_SquareButtonPressed()) {}
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 664–693 */
/* addr: 0x00137f60  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 664
 *   +0x0010 -> line 679
 *   +0x0024 -> line 680
 *   +0x0038 -> line 683
 *   +0x0048 -> line 684
 *   +0x0050 -> line 685
 *   +0x0060 -> line 686
 *   +0x0070 -> line 689
 *   +0x008c -> line 690
 *   +0x00a8 -> line 691
 *   +0x00c0 -> line 693
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int sprintf();
void* memcpy();
void TXT_vAfficheSpecial(char* String, float* a3_Pos);

/* Not original source, needs cleaning up: the retail materialises the float
 * constants in an FPR instead of storing their bit pattern with an integer
 * store.  That needs the peephole pass off from here to MC_AskToReconnectPad
 * (MC_LoadAskForInsertion and MC_Changed depend on it too). */
#pragma peephole off

void MC_DrawString(char* String, float YPos)
{
    char TapStr[4];
    char AppoStr[512];
    float a3_Pos[3];

    strcpy(TapStr, "1");
    sprintf(AppoStr, String, TapStr);
    a3_Pos[0] = 500.0f;
    a3_Pos[1] = YPos;
    a3_Pos[2] = 10.0f;
    TXT_vAfficheSpecial(AppoStr, a3_Pos);
    memcpy(&MC_SavedString[512], &MC_SavedString[256], 255);
    memcpy(&MC_SavedString[256], &MC_SavedString[0], 255);
    memcpy(&MC_SavedString[0], AppoStr, 255);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 696–704 */
/* addr: 0x00138030  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 696
 *   +0x0010 -> line 698
 *   +0x0018 -> line 699
 *   +0x0028 -> line 700
 *   +0x0030 -> line 701
 *   +0x0038 -> line 702
 *   +0x0048 -> line 703
 *   +0x0050 -> line 704
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRestoreSavedFrameBuffer(void);
void MC_SwapBuffers(void);

void MC_PrintMessage(char* String, float Y_Pos)
{
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 768–803 */
/* addr: 0x00138090  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 768
 *   +0x001c -> line 770
 *   +0x0020 -> line 771
 *   +0x0024 -> line 774
 *   +0x002c -> line 775
 *   +0x003c -> line 776
 *   +0x0044 -> line 777
 *   +0x004c -> line 778
 *   +0x005c -> line 779
 *   +0x0064 -> line 781
 *   +0x006c -> line 782
 *   +0x0074 -> line 783
 *   +0x007c -> line 787
 *   +0x0084 -> line 788
 *   +0x0094 -> line 789
 *   +0x009c -> line 793
 *   +0x00b0 -> line 796
 *   +0x00b8 -> line 797
 *   +0x00c0 -> line 798
 *   +0x00c8 -> line 800
 *   +0x00d0 -> line 802
 *   +0x00d4 -> line 803
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_PrintMessageAndWaitForYesNoFormat(char* String, float Y_Pos)
{
    int Step = 0;
    int Blue = 10;
    int Button;
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    MC_WaitForXAndOButtonRelease();
    MC_WaitForTriangleButtonRelease();
    MC_WaitForSquareButtonRelease();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(String, Y_Pos);
        MC_SwapBuffers();
    } while (!(Button = MC_SquareOrTriangleButtonsPressed()));
    MC_WaitForXAndOButtonRelease();
    MC_WaitForTriangleButtonRelease();
    MC_WaitForSquareButtonRelease();
    TXT_g_ulDefaultColor = -1;
    return Button;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 807–830 */
/* addr: 0x00138180  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 807
 *   +0x0014 -> line 810
 *   +0x001c -> line 811
 *   +0x002c -> line 812
 *   +0x0034 -> line 813
 *   +0x0044 -> line 814
 *   +0x004c -> line 815
 *   +0x0054 -> line 819
 *   +0x005c -> line 820
 *   +0x006c -> line 821
 *   +0x0074 -> line 823
 *   +0x0088 -> line 827
 *   +0x0090 -> line 829
 *   +0x0094 -> line 830
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_PrintMessageAndWaitForYesNo(char* String, float Y_Pos)
{
    int Button;
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    MC_WaitForXAndOButtonRelease();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(String, Y_Pos);
        MC_SwapBuffers();
    } while (!(Button = MC_XorTriangleButtonsPressed()));
    MC_WaitForXAndTriangleButtonRelease();
    return Button;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 833–858 */
/* addr: 0x00138230  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 833
 *   +0x0014 -> line 836
 *   +0x001c -> line 837
 *   +0x002c -> line 838
 *   +0x0034 -> line 839
 *   +0x0044 -> line 840
 *   +0x004c -> line 841
 *   +0x0054 -> line 845
 *   +0x005c -> line 846
 *   +0x006c -> line 847
 *   +0x0074 -> line 849
 *   +0x0098 -> line 852
 *   +0x00a8 -> line 853
 *   +0x00ac -> line 855
 *   +0x00b4 -> line 857
 *   +0x00b8 -> line 858
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_PrintMessageAndWaitForYesNoMC(char* String, float Y_Pos)
{
    int Button;
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    MC_WaitForXAndOButtonRelease();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(String, Y_Pos);
        MC_SwapBuffers();
    } while (!(Button = MC_XorTriangleButtonsPressed()) && MC_Present());
    if (!MC_Present())
    {
        Button = -1;
    }
    MC_WaitForXAndTriangleButtonRelease();
    return Button;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 861–886 */
/* addr: 0x00138300  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 861
 *   +0x0014 -> line 864
 *   +0x001c -> line 865
 *   +0x002c -> line 866
 *   +0x0034 -> line 867
 *   +0x0044 -> line 868
 *   +0x004c -> line 869
 *   +0x0054 -> line 873
 *   +0x005c -> line 874
 *   +0x006c -> line 875
 *   +0x0074 -> line 877
 *   +0x0098 -> line 880
 *   +0x00a8 -> line 881
 *   +0x00ac -> line 883
 *   +0x00b4 -> line 885
 *   +0x00b8 -> line 886
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_PrintMessageAndWaitForSquareTriangleMC(char* String, float Y_Pos)
{
    int Button;
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    MC_DrawString(String, Y_Pos);
    MC_SwapBuffers();
    MC_WaitForXAndOButtonRelease();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(String, Y_Pos);
        MC_SwapBuffers();
    } while (!(Button = MC_SquareOrTriangleButtonsPressed()) && MC_Present());
    if (!MC_Present())
    {
        Button = -1;
    }
    MC_WaitForSquareAndTriangleButtonRelease();
    return Button;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 924–966 */
/* addr: 0x001383d0  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 924
 *   +0x0010 -> line 925
 *   +0x0014 -> line 929
 *   +0x0018 -> line 931
 *   +0x0030 -> line 935
 *   +0x0038 -> line 936
 *   +0x0050 -> line 937
 *   +0x0058 -> line 938
 *   +0x0070 -> line 939
 *   +0x0078 -> line 940
 *   +0x0080 -> line 944
 *   +0x0088 -> line 945
 *   +0x00a0 -> line 946
 *   +0x00a8 -> line 948
 *   +0x00d0 -> line 951
 *   +0x00d8 -> line 953
 *   +0x00e0 -> line 955
 *   +0x0100 -> line 956
 *   +0x0104 -> line 965
 *   +0x0108 -> line 966
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The retail keeps the dead 'li s0,-1' store of the -1 initialised local
 * (peephole off) but has only ONE 'move a2,s1' for the sprintf() call, while
 * MWCC's level 0 emits the argument move twice with peephole off and folds
 * the dead store with peephole on.  See the recorded attempt. */

int MC_AskForInsertion(void)
{
    char buffer[2048];
    int Button = -1;
    int Value = 0xDF;
    sprintf(buffer, MC_Strings[0], Value);
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(MC_Strings[0], 450.0f);
    MC_SwapBuffers();
    MC_DrawString(MC_Strings[0], 450.0f);
    MC_SwapBuffers();
    MC_WaitForXButtonRelease();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(MC_Strings[0], 450.0f);
        MC_SwapBuffers();
    } while (!(Button = MC_TriangleButtonPressed()) && !MC_Present());
    MC_WaitForXButtonRelease();
    MC_WaitForTriangleButtonRelease();
    if (MC_Present() && MC_HasEnoughtSpace())
    {
        Button = 1;
    }
    return Button;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 969–1000 */
/* addr: 0x001384f0  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 969
 *   +0x000c -> line 970
 *   +0x0010 -> line 973
 *   +0x0018 -> line 974
 *   +0x0030 -> line 975
 *   +0x0038 -> line 976
 *   +0x0050 -> line 977
 *   +0x0058 -> line 978
 *   +0x0060 -> line 982
 *   +0x0068 -> line 983
 *   +0x0080 -> line 984
 *   +0x0088 -> line 988
 *   +0x00b0 -> line 992
 *   +0x00b8 -> line 993
 *   +0x00c0 -> line 995
 *   +0x00e0 -> line 996
 *   +0x00e4 -> line 999
 *   +0x00e8 -> line 1000
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_LoadAskForInsertion(void)
{
    int Button;
    Button = -1;
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(MC_Strings[13], 450.0f);
    MC_SwapBuffers();
    MC_DrawString(MC_Strings[13], 450.0f);
    MC_SwapBuffers();
    MC_WaitForXButtonRelease();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(MC_Strings[13], 450.0f);
        MC_SwapBuffers();
    } while (!(Button = MC_TriangleButtonPressed()) && !MC_Present());
    MC_WaitForXButtonRelease();
    MC_WaitForTriangleButtonRelease();
    if (MC_Present() && MC_HasEnoughtSpace())
        Button = 1;
    return Button;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1029–1082 */
/* addr: 0x001385f0  size: 440 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1029
 *   +0x0008 -> line 1030
 *   +0x0010 -> line 1032
 *   +0x0034 -> line 1035
 *   +0x0054 -> line 1036
 *   +0x0060 -> line 1037
 *   +0x0084 -> line 1040
 *   +0x00a4 -> line 1041
 *   +0x00b0 -> line 1043
 *   +0x00c8 -> line 1045
 *   +0x00ec -> line 1049
 *   +0x00f8 -> line 1052
 *   +0x0108 -> line 1054
 *   +0x0114 -> line 1059
 *   +0x0138 -> line 1060
 *   +0x0144 -> line 1062
 *   +0x0158 -> line 1063
 *   +0x0164 -> line 1070
 *   +0x0170 -> line 1076
 *   +0x0190 -> line 1077
 *   +0x019c -> line 1079
 *   +0x01a4 -> line 1081
 *   +0x01a8 -> line 1082
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_ManageFormatting(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1108–1145 */
/* addr: 0x001387b0  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1108
 *   +0x000c -> line 1111
 *   +0x0014 -> line 1112
 *   +0x001c -> line 1115
 *   +0x0024 -> line 1117
 *   +0x003c -> line 1118
 *   +0x0044 -> line 1119
 *   +0x004c -> line 1120
 *   +0x0064 -> line 1121
 *   +0x006c -> line 1122
 *   +0x0074 -> line 1124
 *   +0x007c -> line 1126
 *   +0x0084 -> line 1127
 *   +0x009c -> line 1128
 *   +0x00a4 -> line 1133
 *   +0x00bc -> line 1135
 *   +0x00c4 -> line 1136
 *   +0x00cc -> line 1138
 *   +0x00d8 -> line 1139
 *   +0x00e4 -> line 1142
 *   +0x00e8 -> line 1145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_AreYouSure(void)
{
    int Button;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1199–1239 */
/* addr: 0x001388b0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1199
 *   +0x000c -> line 1200
 *   +0x0010 -> line 1202
 *   +0x0018 -> line 1203
 *   +0x0020 -> line 1206
 *   +0x0028 -> line 1208
 *   +0x0040 -> line 1209
 *   +0x0048 -> line 1210
 *   +0x0050 -> line 1217
 *   +0x0058 -> line 1218
 *   +0x0070 -> line 1219
 *   +0x0078 -> line 1224
 *   +0x00a0 -> line 1227
 *   +0x00a8 -> line 1228
 *   +0x00b0 -> line 1233
 *   +0x00bc -> line 1234
 *   +0x00c8 -> line 1237
 *   +0x00cc -> line 1239
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

int MC_Changed(void)
{
    int Button = -1;
    MC_WaitForXButtonRelease();
    MC_WaitForTriangleButtonRelease();
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(MC_Strings[19], 450.0f);
    MC_SwapBuffers();
    GLI_vRestoreSavedFrameBuffer();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(MC_Strings[19], 450.0f);
        MC_SwapBuffers();
    } while (!(Button = MC_TriangleButtonPressed()) && !MC_Present());
    MC_WaitForXButtonRelease();
    MC_WaitForTriangleButtonRelease();
    if (Button == 4)
        return 2;
    return 3;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1242–1274 */
/* addr: 0x00138990  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1242
 *   +0x000c -> line 1247
 *   +0x0014 -> line 1249
 *   +0x002c -> line 1250
 *   +0x0034 -> line 1251
 *   +0x003c -> line 1252
 *   +0x0054 -> line 1253
 *   +0x005c -> line 1254
 *   +0x0064 -> line 1258
 *   +0x006c -> line 1259
 *   +0x0084 -> line 1260
 *   +0x008c -> line 1264
 *   +0x00b0 -> line 1267
 *   +0x00c0 -> line 1268
 *   +0x00c4 -> line 1270
 *   +0x00d0 -> line 1271
 *   +0x00dc -> line 1273
 *   +0x00e0 -> line 1274
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_HasEnoughtSpace(void);

/* Everything but the frame size matches: the retail reserves one extra
 * 16-byte local slot (0x30 instead of 0x20) that its code never addresses.
 * See the recorded attempt. */
#pragma peephole on

/* The debug record lists no parameters, but the retail frame reserves a home
 * for one leading parameter the body never reads (see MC_AskForOverwrite). */
int MC_NotEnoughtSpace(char* p_szUnused)
{
    int Button;
    MC_WaitForXButtonRelease();
    MC_DrawString(MC_Strings[1], 450.0f);
    MC_SwapBuffers();
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(MC_Strings[1], 450.0f);
    MC_SwapBuffers();
    MC_WaitForXButtonRelease();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(MC_Strings[1], 450.0f);
        MC_SwapBuffers();
    } while (!(Button = MC_XorTriangleButtonsPressed()) && !MC_HasEnoughtSpace());
    if (MC_HasEnoughtSpace())
    {
        Button = 1;
    }
    if (Button == 4)
    {
        return 0;
    }
    return 3;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1277–1309 */
/* addr: 0x00138a90  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1277
 *   +0x000c -> line 1282
 *   +0x0014 -> line 1284
 *   +0x002c -> line 1285
 *   +0x0034 -> line 1286
 *   +0x003c -> line 1287
 *   +0x0054 -> line 1288
 *   +0x005c -> line 1289
 *   +0x0064 -> line 1293
 *   +0x006c -> line 1294
 *   +0x0084 -> line 1295
 *   +0x008c -> line 1299
 *   +0x00b0 -> line 1302
 *   +0x00c0 -> line 1303
 *   +0x00c4 -> line 1305
 *   +0x00d0 -> line 1306
 *   +0x00dc -> line 1308
 *   +0x00e0 -> line 1309
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_NotEnoughtSpaceBoot(void)
{
    int Button;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1313–1342 */
/* addr: 0x00138b90  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1313
 *   +0x000c -> line 1333
 *   +0x0028 -> line 1335
 *   +0x0034 -> line 1336
 *   +0x0040 -> line 1338
 *   +0x004c -> line 1339
 *   +0x0058 -> line 1341
 *   +0x005c -> line 1342
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_AskForOverwrite(char* SavingName)
{
    int Button;
    Button = MC_PrintMessageAndWaitForSquareTriangleMC(MC_Strings[12], 450.0f);
    if (Button == -1)
    {
        return 3;
    }
    else if (Button == 4)
    {
        return 2;
    }
    return 4;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1345–1357 */
/* addr: 0x00138c00  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1345
 *   +0x000c -> line 1348
 *   +0x0028 -> line 1350
 *   +0x0034 -> line 1351
 *   +0x0040 -> line 1353
 *   +0x004c -> line 1354
 *   +0x0058 -> line 1356
 *   +0x005c -> line 1357
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_AskForOverwriteSettings(char* SavingName)
{
    int Button;
    Button = MC_PrintMessageAndWaitForSquareTriangleMC(MC_Strings[23], 450.0f);
    if (Button == -1)
    {
        return 3;
    }
    else if (Button == 4)
    {
        return 2;
    }
    return 4;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1361–1403 */
/* addr: 0x00138c70  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1361
 *   +0x000c -> line 1366
 *   +0x0020 -> line 1368
 *   +0x0034 -> line 1370
 *   +0x005c -> line 1380
 *   +0x0078 -> line 1382
 *   +0x0080 -> line 1383
 *   +0x0094 -> line 1384
 *   +0x009c -> line 1385
 *   +0x00a4 -> line 1386
 *   +0x00b8 -> line 1387
 *   +0x00c0 -> line 1392
 *   +0x00c4 -> line 1393
 *   +0x00cc -> line 1394
 *   +0x00e0 -> line 1395
 *   +0x00e8 -> line 1396
 *   +0x00fc -> line 1399
 *   +0x0104 -> line 1403
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int INOPS2_fn_wJoyCheckConnection(int _wJoystickNum);
void* memset();

int MC_AskToReconnectPad(int PadNumber)
{
    char PadStr[4];
    char FinalString[255];
    if (INOPS2_fn_wJoyCheckConnection(PadNumber) == 0)
    {
        memset(PadStr, 0, 4);
        PadStr[0] = '1' + (char)g_axPadMapping[PadNumber].iPort;
        sprintf(FinalString, MC_Strings[18], PadStr, PadStr);
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(FinalString, 450.0f);
        MC_SwapBuffers();
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(FinalString, 450.0f);
        MC_SwapBuffers();
        do
        {
            PadStr[0] = 0;
            GLI_vRestoreSavedFrameBuffer();
            MC_DrawString(FinalString, 450.0f);
            MC_SwapBuffers();
        } while (!INOPS2_fn_wJoyCheckConnection(PadNumber));
        MC_WaitForXButtonRelease();
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1515–1548 */
/* addr: 0x00138d90  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1515
 *   +0x0020 -> line 1518
 *   +0x0038 -> line 1520
 *   +0x0064 -> line 1523
 *   +0x0070 -> line 1527
 *   +0x0080 -> line 1540
 *   +0x00a4 -> line 1542
 *   +0x00b0 -> line 1546
 *   +0x00b4 -> line 1548
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32SaveGameReal(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize);
int MC_Present(void);

int MC_Save(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    MC_PrintMessage(MC_Strings[9], 400.0f);
    if (SVG_fn_s32SaveGameReal(_iPort, _iSlot, _szSonyCompliantName, _szTitle, _pData, _u32DataSize) == 1)
    {
        return 1;
    }
    if (MC_Present() == 0)
    {
        if (MC_PrintMessageAndWaitForYesNo(MC_Strings[11], 400.0f) == 4)
        {
            return 2;
        }
    }
    return 3;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1585–1598 */
/* addr: 0x00138e60  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1585
 *   +0x0020 -> line 1588
 *   +0x0038 -> line 1590
 *   +0x0048 -> line 1592
 *   +0x0074 -> line 1593
 *   +0x0080 -> line 1595
 *   +0x008c -> line 1597
 *   +0x0090 -> line 1598
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32LoadGameReal(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize);
int MC_Present(void);

int MC_Load(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    MC_PrintMessage(MC_Strings[17], 400.0f);
    if (MC_Present())
    {
        if (SVG_fn_s32LoadGameReal(_iPort, _iSlot, _szSonyCompliantName, _szTitle, _pData, _u32DataSize) == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1605–1628 */
/* addr: 0x00138f00  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1605
 *   +0x000c -> line 1606
 *   +0x0010 -> line 1619
 *   +0x0028 -> line 1621
 *   +0x0030 -> line 1624
 *   +0x003c -> line 1627
 *   +0x0040 -> line 1628
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32Query(int _iPort, int _iSlot, int* _pFormatted);
int SVG_fn_s32QueryAndCheckSpace(int _iPort, int _iSlot, int* _pFormatted, int _bCheckSpace, int _iNeeded);


int MC_Present(void)
{
    int Value;
    int Bidon;
    Bidon = 0;
    Value = SVG_fn_s32Query(0, 0, &Bidon);
    if (Value == 0)
    {
        return 0;
    }
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1632–1636 */
/* addr: 0x00138f60  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1632
 *   +0x0008 -> line 1633
 *   +0x000c -> line 1634
 *   +0x0040 -> line 1635
 *   +0x0044 -> line 1636
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_Formatted(void)
{
    int Bidon;
    Bidon = 0;
    if (SVG_fn_s32QueryAndCheckSpace(0, 0, &Bidon, 1, 0) == -11) return 0;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1644–1650 */
/* addr: 0x00138fc0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1644
 *   +0x0008 -> line 1645
 *   +0x0018 -> line 1647
 *   +0x0024 -> line 1649
 *   +0x002c -> line 1650
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_Present(void);
int SVG_fn_iGetChangeInMC0(void);

int MC_MemoryCardChanged(void)
{
    if (MC_Present() == 0)
        return 0;
    else
        return SVG_fn_iGetChangeInMC0();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1654–1657 */
/* addr: 0x00139000  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1654
 *   +0x0008 -> line 1656
 *   +0x0010 -> line 1657
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_AknowledgeMemoryCard(void)
{
    SVG_fn_iGetChangeInMC0AndReset();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1663–1678 */
/* addr: 0x00139020  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1663
 *   +0x0010 -> line 1665
 *   +0x0014 -> line 1668
 *   +0x0024 -> line 1669
 *   +0x0044 -> line 1670
 *   +0x004c -> line 1671
 *   +0x0058 -> line 1672
 *   +0x005c -> line 1678
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* One instruction short: the retail keeps the dead 'daddu s0,zero,zero' that
 * initialises iIsAGamePresent before the call result overwrites it; every
 * available MWCC build folds that store away.  See the recorded attempt. */
int MC_SaveGameAlreadyExist(char* SavingName)
{
    int iIsAGamePresent;
    char name[2048];

    iIsAGamePresent = 0;
    strcpy(name, SavingName);
    iIsAGamePresent = SVG_fn_s32ReadNextName(0, 0, name, 0, 0);
    if (iIsAGamePresent)
    {
        return 1;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1731–1740 */
/* addr: 0x00139090  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1731
 *   +0x0008 -> line 1732
 *   +0x0028 -> line 1734
 *   +0x0034 -> line 1736
 *   +0x0038 -> line 1740
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SVG_fn_s32Format(int _iPort, int _iSlot);

int MC_Format(void)
{
    switch (SVG_fn_s32Format(0, 0)) {
    case 0:
        return 1;
    default:
        return 0;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 1750–1914 */
/* addr: 0x001390e0  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1750
 *   +0x0010 -> line 1751
 *   +0x0014 -> line 1752
 *   +0x0018 -> line 1755
 *   +0x0020 -> line 1756
 *   +0x0028 -> line 1759
 *   +0x0040 -> line 1760
 *   +0x0048 -> line 1761
 *   +0x0050 -> line 1762
 *   +0x0068 -> line 1763
 *   +0x0070 -> line 1764
 *   +0x0078 -> line 1768
 *   +0x0080 -> line 1769
 *   +0x0098 -> line 1770
 *   +0x00a0 -> line 1775
 *   +0x00c8 -> line 1781
 *   +0x00d4 -> line 1782
 *   +0x00e0 -> line 1785
 *   +0x00e4 -> line 1914
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Code, relocations and the retail line map all match; only the frame size
 * differs (the retail reserves two extra 16-byte local slots).
 * See the recorded attempt. */

/* The debug record lists no parameters, but the retail frame reserves two
 * extra 16-byte homes: two leading parameters the body never reads, as with
 * MC_AskForOverwrite and MC_NotEnoughtSpace.
 * Not original source, needs cleaning up: peephole off keeps the dead
 * zero-initialisation stores (see the SVG level-0 dead-store insight). */
#pragma push
#pragma peephole off
int MC_CheckNeededSize(char* p_szUnused, int iUnused)
{
    int Button = 0;
    int iFreeSpace = 0;
    MC_WaitForXButtonRelease();
    MC_WaitForTriangleButtonRelease();
    MC_DrawString(MC_Strings[1], 450.0f);
    MC_SwapBuffers();
    GLI_vRestoreSavedFrameBuffer();
    MC_DrawString(MC_Strings[1], 450.0f);
    MC_SwapBuffers();
    MC_WaitForXButtonRelease();
    do
    {
        GLI_vRestoreSavedFrameBuffer();
        MC_DrawString(MC_Strings[1], 450.0f);
        MC_SwapBuffers();
    } while (!(Button = MC_TriangleButtonPressed()) && MC_Present());
    if (Button == 4)
    {
        return 2;
    }
    return 3;
}
#pragma pop

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2108–2123 */
/* addr: 0x001391e0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2108
 *   +0x000c -> line 2109
 *   +0x0010 -> line 2110
 *   +0x0014 -> line 2114
 *   +0x0018 -> line 2116
 *   +0x0034 -> line 2117
 *   +0x0044 -> line 2119
 *   +0x0050 -> line 2122
 *   +0x0054 -> line 2123
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* One instruction short: the retail keeps the dead 'daddu s0,zero,zero' that
 * initialises ulValue before it is overwritten with 0xdf; every available MWCC
 * build folds that store into the later one.  See the recorded attempt. */
int MC_HasEnoughtSpace(void)
{
    int Bidon;
    unsigned int ulValue;
    ulValue = 0;
    Bidon = 0;



    ulValue = 0xdf;

    SVG_fn_s32QueryAndCheckSpace(0, 0, &Bidon, 1, 0);
    if ((unsigned int)Bidon < ulValue)
    {
        return 0;
    }


    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2126–2218 */
/* addr: 0x00139250  size: 576 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2126
 *   +0x0030 -> line 2129
 *   +0x0034 -> line 2130
 *   +0x003c -> line 2132
 *   +0x0058 -> line 2136
 *   +0x0068 -> line 2138
 *   +0x0070 -> line 2141
 *   +0x0074 -> line 2143
 *   +0x0084 -> line 2144
 *   +0x0098 -> line 2145
 *   +0x00a8 -> line 2147
 *   +0x00b8 -> line 2148
 *   +0x00c8 -> line 2150
 *   +0x00dc -> line 2153
 *   +0x00f8 -> line 2156
 *   +0x0114 -> line 2158
 *   +0x0120 -> line 2161
 *   +0x0144 -> line 2164
 *   +0x014c -> line 2165
 *   +0x0154 -> line 2167
 *   +0x0160 -> line 2169
 *   +0x0170 -> line 2171
 *   +0x0184 -> line 2172
 *   +0x0190 -> line 2175
 *   +0x0198 -> line 2180
 *   +0x01a4 -> line 2182
 *   +0x01a8 -> line 2184
 *   +0x01b4 -> line 2185
 *   +0x01b8 -> line 2196
 *   +0x01bc -> line 2198
 *   +0x01cc -> line 2200
 *   +0x01dc -> line 2201
 *   +0x01e8 -> line 2206
 *   +0x01ec -> line 2207
 *   +0x01f0 -> line 2209
 *   +0x0208 -> line 2213
 *   +0x0214 -> line 2214
 *   +0x0218 -> line 2216
 *   +0x0220 -> line 2218
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_Boot(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    char str[512];
    int Retry;
    int Bidon;
    unsigned int ulValue;
    int ReturnValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2221–2328 */
/* addr: 0x00139490  size: 752 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2221
 *   +0x0034 -> line 2224
 *   +0x0038 -> line 2225
 *   +0x0044 -> line 2227
 *   +0x0060 -> line 2233
 *   +0x0064 -> line 2234
 *   +0x0068 -> line 2236
 *   +0x0078 -> line 2238
 *   +0x0084 -> line 2239
 *   +0x0088 -> line 2242
 *   +0x0098 -> line 2247
 *   +0x00a4 -> line 2251
 *   +0x00a8 -> line 2254
 *   +0x00c8 -> line 2259
 *   +0x00d8 -> line 2261
 *   +0x0104 -> line 2263
 *   +0x0128 -> line 2265
 *   +0x0134 -> line 2266
 *   +0x0138 -> line 2268
 *   +0x013c -> line 2270
 *   +0x015c -> line 2272
 *   +0x0170 -> line 2274
 *   +0x0184 -> line 2275
 *   +0x0190 -> line 2277
 *   +0x0194 -> line 2278
 *   +0x01a0 -> line 2280
 *   +0x01a8 -> line 2285
 *   +0x01b4 -> line 2289
 *   +0x01d0 -> line 2291
 *   +0x01e4 -> line 2295
 *   +0x01f0 -> line 2299
 *   +0x0214 -> line 2301
 *   +0x0220 -> line 2304
 *   +0x0248 -> line 2308
 *   +0x026c -> line 2310
 *   +0x0274 -> line 2311
 *   +0x027c -> line 2313
 *   +0x0288 -> line 2315
 *   +0x029c -> line 2316
 *   +0x02a8 -> line 2321
 *   +0x02b4 -> line 2323
 *   +0x02b8 -> line 2324
 *   +0x02c8 -> line 2327
 *   +0x02cc -> line 2328
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_NewGameLoad(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    int Exit;
    int Retry;
    int Bidon;
    unsigned int ulValue;
    int ReturnValue;
    char str[255];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2331–2435 */
/* addr: 0x00139780  size: 756 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2331
 *   +0x0030 -> line 2333
 *   +0x0034 -> line 2334
 *   +0x003c -> line 2337
 *   +0x0058 -> line 2343
 *   +0x005c -> line 2344
 *   +0x0060 -> line 2345
 *   +0x0064 -> line 2348
 *   +0x0074 -> line 2350
 *   +0x0088 -> line 2352
 *   +0x009c -> line 2353
 *   +0x00a8 -> line 2357
 *   +0x00b0 -> line 2359
 *   +0x00c0 -> line 2361
 *   +0x00d0 -> line 2363
 *   +0x00e4 -> line 2364
 *   +0x00f0 -> line 2376
 *   +0x0120 -> line 2378
 *   +0x013c -> line 2380
 *   +0x0150 -> line 2381
 *   +0x0160 -> line 2385
 *   +0x0190 -> line 2387
 *   +0x01a4 -> line 2390
 *   +0x01c0 -> line 2393
 *   +0x01c4 -> line 2394
 *   +0x01d0 -> line 2397
 *   +0x01ec -> line 2399
 *   +0x0204 -> line 2400
 *   +0x0210 -> line 2404
 *   +0x021c -> line 2405
 *   +0x0220 -> line 2410
 *   +0x022c -> line 2412
 *   +0x0250 -> line 2414
 *   +0x0258 -> line 2415
 *   +0x0260 -> line 2417
 *   +0x026c -> line 2419
 *   +0x0280 -> line 2420
 *   +0x028c -> line 2421
 *   +0x0290 -> line 2423
 *   +0x029c -> line 2426
 *   +0x02b0 -> line 2427
 *   +0x02c0 -> line 2431
 *   +0x02d0 -> line 2434
 *   +0x02d4 -> line 2435
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_NewGameSaveOnLock(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    char str[512];
    int Exit;
    int Retry;
    unsigned int ulValue;
    int ReturnValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2558–2653 */
/* addr: 0x00139a80  size: 716 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2558
 *   +0x0030 -> line 2560
 *   +0x0034 -> line 2561
 *   +0x003c -> line 2564
 *   +0x0058 -> line 2570
 *   +0x005c -> line 2571
 *   +0x0060 -> line 2572
 *   +0x0064 -> line 2575
 *   +0x0074 -> line 2577
 *   +0x0088 -> line 2579
 *   +0x009c -> line 2580
 *   +0x00a8 -> line 2584
 *   +0x00b0 -> line 2586
 *   +0x00c0 -> line 2588
 *   +0x00d0 -> line 2590
 *   +0x00e4 -> line 2591
 *   +0x00f0 -> line 2603
 *   +0x0120 -> line 2605
 *   +0x013c -> line 2607
 *   +0x0150 -> line 2608
 *   +0x0160 -> line 2612
 *   +0x0190 -> line 2614
 *   +0x01a4 -> line 2616
 *   +0x01c0 -> line 2618
 *   +0x01d8 -> line 2619
 *   +0x01e4 -> line 2620
 *   +0x01e8 -> line 2623
 *   +0x01f4 -> line 2624
 *   +0x01f8 -> line 2628
 *   +0x0204 -> line 2630
 *   +0x0228 -> line 2632
 *   +0x0230 -> line 2633
 *   +0x0238 -> line 2635
 *   +0x0244 -> line 2637
 *   +0x0258 -> line 2638
 *   +0x0264 -> line 2639
 *   +0x0268 -> line 2641
 *   +0x0274 -> line 2644
 *   +0x0288 -> line 2645
 *   +0x0298 -> line 2649
 *   +0x02a8 -> line 2652
 *   +0x02ac -> line 2653
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_NewGameSaveOnEmpty(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    char str[512];
    int Exit;
    int Retry;
    unsigned int ulValue;
    int ReturnValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2657–2762 */
/* addr: 0x00139d50  size: 796 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2657
 *   +0x0030 -> line 2659
 *   +0x0034 -> line 2660
 *   +0x003c -> line 2666
 *   +0x0040 -> line 2667
 *   +0x0044 -> line 2668
 *   +0x0048 -> line 2671
 *   +0x0058 -> line 2673
 *   +0x006c -> line 2676
 *   +0x0078 -> line 2680
 *   +0x0080 -> line 2682
 *   +0x0090 -> line 2684
 *   +0x00b4 -> line 2687
 *   +0x00c0 -> line 2692
 *   +0x00e0 -> line 2696
 *   +0x00fc -> line 2698
 *   +0x0130 -> line 2700
 *   +0x014c -> line 2702
 *   +0x0160 -> line 2704
 *   +0x0184 -> line 2707
 *   +0x0190 -> line 2711
 *   +0x01b4 -> line 2714
 *   +0x01c0 -> line 2719
 *   +0x01e4 -> line 2722
 *   +0x01f0 -> line 2726
 *   +0x020c -> line 2728
 *   +0x0230 -> line 2730
 *   +0x0238 -> line 2731
 *   +0x0240 -> line 2733
 *   +0x024c -> line 2735
 *   +0x025c -> line 2737
 *   +0x0270 -> line 2738
 *   +0x027c -> line 2739
 *   +0x0280 -> line 2741
 *   +0x0288 -> line 2743
 *   +0x02ac -> line 2746
 *   +0x02b8 -> line 2750
 *   +0x02c4 -> line 2753
 *   +0x02d8 -> line 2754
 *   +0x02e8 -> line 2758
 *   +0x02f8 -> line 2761
 *   +0x02fc -> line 2762
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_LoadGame(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    char str[512];
    int Exit;
    int Retry;
    unsigned int ulValue;
    int ReturnValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2765–2860 */
/* addr: 0x0013a070  size: 644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2765
 *   +0x0030 -> line 2767
 *   +0x0034 -> line 2768
 *   +0x003c -> line 2774
 *   +0x0040 -> line 2775
 *   +0x0044 -> line 2776
 *   +0x0048 -> line 2779
 *   +0x0058 -> line 2781
 *   +0x006c -> line 2784
 *   +0x0078 -> line 2788
 *   +0x0080 -> line 2790
 *   +0x0090 -> line 2792
 *   +0x00b4 -> line 2795
 *   +0x00c0 -> line 2800
 *   +0x00e0 -> line 2804
 *   +0x00fc -> line 2807
 *   +0x0118 -> line 2810
 *   +0x012c -> line 2812
 *   +0x0150 -> line 2815
 *   +0x015c -> line 2817
 *   +0x0160 -> line 2819
 *   +0x017c -> line 2821
 *   +0x01a0 -> line 2823
 *   +0x01ac -> line 2826
 *   +0x01b0 -> line 2829
 *   +0x01d4 -> line 2831
 *   +0x01dc -> line 2832
 *   +0x01e4 -> line 2834
 *   +0x01f0 -> line 2836
 *   +0x01fc -> line 2837
 *   +0x0200 -> line 2838
 *   +0x0208 -> line 2840
 *   +0x022c -> line 2843
 *   +0x0238 -> line 2847
 *   +0x0244 -> line 2851
 *   +0x0250 -> line 2856
 *   +0x0260 -> line 2859
 *   +0x0264 -> line 2860
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_LoadSettings(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    char str[512];
    int Exit;
    int Retry;
    unsigned int ulValue;
    int ReturnValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2863–2940 */
/* addr: 0x0013a300  size: 548 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2863
 *   +0x0030 -> line 2865
 *   +0x0034 -> line 2866
 *   +0x003c -> line 2872
 *   +0x0040 -> line 2873
 *   +0x0044 -> line 2874
 *   +0x0048 -> line 2877
 *   +0x0058 -> line 2879
 *   +0x006c -> line 2881
 *   +0x0080 -> line 2882
 *   +0x008c -> line 2884
 *   +0x0090 -> line 2886
 *   +0x0098 -> line 2888
 *   +0x00a8 -> line 2890
 *   +0x00b4 -> line 2891
 *   +0x00b8 -> line 2894
 *   +0x00d8 -> line 2897
 *   +0x00f4 -> line 2899
 *   +0x0110 -> line 2902
 *   +0x012c -> line 2904
 *   +0x0138 -> line 2908
 *   +0x015c -> line 2910
 *   +0x0164 -> line 2911
 *   +0x016c -> line 2913
 *   +0x0178 -> line 2915
 *   +0x0188 -> line 2917
 *   +0x019c -> line 2918
 *   +0x01a8 -> line 2921
 *   +0x01b0 -> line 2926
 *   +0x01bc -> line 2928
 *   +0x01c0 -> line 2929
 *   +0x01cc -> line 2931
 *   +0x01e0 -> line 2932
 *   +0x01f0 -> line 2936
 *   +0x0200 -> line 2939
 *   +0x0204 -> line 2940
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_SaveSettingsPart1(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    char str[512];
    int Exit;
    int Retry;
    unsigned int ulValue;
    int ReturnValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 2943–3031 */
/* addr: 0x0013a530  size: 716 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2943
 *   +0x0030 -> line 2945
 *   +0x0034 -> line 2946
 *   +0x003c -> line 2952
 *   +0x0040 -> line 2953
 *   +0x0044 -> line 2954
 *   +0x0048 -> line 2957
 *   +0x0058 -> line 2959
 *   +0x006c -> line 2961
 *   +0x0080 -> line 2962
 *   +0x008c -> line 2964
 *   +0x0090 -> line 2966
 *   +0x0098 -> line 2968
 *   +0x00a8 -> line 2970
 *   +0x00b8 -> line 2972
 *   +0x00cc -> line 2973
 *   +0x00d8 -> line 2977
 *   +0x0108 -> line 2979
 *   +0x0124 -> line 2981
 *   +0x0138 -> line 2982
 *   +0x0148 -> line 2986
 *   +0x0178 -> line 2990
 *   +0x0194 -> line 2991
 *   +0x01a8 -> line 2993
 *   +0x01c0 -> line 2995
 *   +0x01d4 -> line 2996
 *   +0x01e0 -> line 2998
 *   +0x01e4 -> line 2999
 *   +0x01e8 -> line 3006
 *   +0x0204 -> line 3008
 *   +0x0228 -> line 3010
 *   +0x0230 -> line 3011
 *   +0x0238 -> line 3013
 *   +0x0244 -> line 3015
 *   +0x0258 -> line 3016
 *   +0x0264 -> line 3017
 *   +0x0268 -> line 3019
 *   +0x0274 -> line 3022
 *   +0x0288 -> line 3023
 *   +0x0298 -> line 3027
 *   +0x02a8 -> line 3030
 *   +0x02ac -> line 3031
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_SaveSettingsOnEmpty(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    char str[512];
    int Exit;
    int Retry;
    unsigned int ulValue;
    int ReturnValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 3035–3130 */
/* addr: 0x0013a800  size: 696 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3035
 *   +0x0034 -> line 3038
 *   +0x0038 -> line 3039
 *   +0x0044 -> line 3041
 *   +0x0060 -> line 3046
 *   +0x0068 -> line 3049
 *   +0x006c -> line 3050
 *   +0x0070 -> line 3051
 *   +0x0074 -> line 3053
 *   +0x0084 -> line 3055
 *   +0x0098 -> line 3057
 *   +0x00ac -> line 3058
 *   +0x00b8 -> line 3062
 *   +0x00d8 -> line 3066
 *   +0x00f4 -> line 3069
 *   +0x010c -> line 3071
 *   +0x0118 -> line 3074
 *   +0x012c -> line 3075
 *   +0x0138 -> line 3078
 *   +0x014c -> line 3080
 *   +0x0168 -> line 3082
 *   +0x017c -> line 3083
 *   +0x0188 -> line 3085
 *   +0x018c -> line 3086
 *   +0x0190 -> line 3092
 *   +0x01a8 -> line 3095
 *   +0x01cc -> line 3097
 *   +0x01d4 -> line 3098
 *   +0x01dc -> line 3100
 *   +0x01e8 -> line 3102
 *   +0x01fc -> line 3103
 *   +0x0208 -> line 3106
 *   +0x0214 -> line 3109
 *   +0x0228 -> line 3110
 *   +0x0234 -> line 3113
 *   +0x0238 -> line 3117
 *   +0x0250 -> line 3119
 *   +0x025c -> line 3122
 *   +0x0270 -> line 3123
 *   +0x0280 -> line 3126
 *   +0x0290 -> line 3129
 *   +0x0294 -> line 3130
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_SaveSettingsOnLock(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    int Exit;
    int Retry;
    int Bidon;
    unsigned int ulValue;
    int ReturnValue;
    char str[512];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 3133–3174 */
/* addr: 0x0013aac0  size: 364 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3133
 *   +0x0010 -> line 3134
 *   +0x0014 -> line 3136
 *   +0x001c -> line 3138
 *   +0x0024 -> line 3139
 *   +0x002c -> line 3140
 *   +0x0034 -> line 3141
 *   +0x003c -> line 3144
 *   +0x0044 -> line 3145
 *   +0x004c -> line 3147
 *   +0x0050 -> line 3149
 *   +0x0058 -> line 3150
 *   +0x0080 -> line 3151
 *   +0x0088 -> line 3152
 *   +0x0090 -> line 3153
 *   +0x00b8 -> line 3154
 *   +0x00c0 -> line 3155
 *   +0x00e8 -> line 3158
 *   +0x00f4 -> line 3160
 *   +0x00f8 -> line 3161
 *   +0x0100 -> line 3162
 *   +0x0104 -> line 3163
 *   +0x0110 -> line 3164
 *   +0x011c -> line 3166
 *   +0x0120 -> line 3167
 *   +0x012c -> line 3168
 *   +0x0130 -> line 3169
 *   +0x0138 -> line 3171
 *   +0x0148 -> line 3173
 *   +0x0154 -> line 3174
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MC_CheckLanguages(void)
{
    int Button;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 3177–3288 */
/* addr: 0x0013ac30  size: 1076 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3177
 *   +0x002c -> line 3179
 *   +0x0034 -> line 3180
 *   +0x003c -> line 3182
 *   +0x0068 -> line 3185
 *   +0x006c -> line 3186
 *   +0x0098 -> line 3187
 *   +0x00a0 -> line 3188
 *   +0x00a8 -> line 3189
 *   +0x00b0 -> line 3190
 *   +0x00b8 -> line 3191
 *   +0x00c4 -> line 3195
 *   +0x00c8 -> line 3196
 *   +0x00f4 -> line 3197
 *   +0x00fc -> line 3198
 *   +0x0104 -> line 3199
 *   +0x010c -> line 3200
 *   +0x0114 -> line 3201
 *   +0x0120 -> line 3204
 *   +0x0124 -> line 3206
 *   +0x0150 -> line 3210
 *   +0x0158 -> line 3211
 *   +0x0160 -> line 3212
 *   +0x0168 -> line 3213
 *   +0x0170 -> line 3214
 *   +0x017c -> line 3217
 *   +0x0180 -> line 3218
 *   +0x01ac -> line 3219
 *   +0x01b4 -> line 3220
 *   +0x01bc -> line 3221
 *   +0x01c4 -> line 3222
 *   +0x01cc -> line 3223
 *   +0x01d8 -> line 3226
 *   +0x01dc -> line 3227
 *   +0x0208 -> line 3228
 *   +0x0210 -> line 3229
 *   +0x0218 -> line 3230
 *   +0x0220 -> line 3231
 *   +0x0228 -> line 3232
 *   +0x0234 -> line 3235
 *   +0x0238 -> line 3236
 *   +0x0264 -> line 3237
 *   +0x026c -> line 3238
 *   +0x0274 -> line 3239
 *   +0x027c -> line 3240
 *   +0x0284 -> line 3241
 *   +0x0290 -> line 3244
 *   +0x0294 -> line 3245
 *   +0x02c0 -> line 3246
 *   +0x02c8 -> line 3247
 *   +0x02d0 -> line 3248
 *   +0x02d8 -> line 3249
 *   +0x02e0 -> line 3250
 *   +0x02ec -> line 3253
 *   +0x02f0 -> line 3254
 *   +0x031c -> line 3255
 *   +0x0324 -> line 3256
 *   +0x032c -> line 3257
 *   +0x0334 -> line 3258
 *   +0x033c -> line 3259
 *   +0x0348 -> line 3262
 *   +0x034c -> line 3263
 *   +0x0378 -> line 3264
 *   +0x0380 -> line 3265
 *   +0x0388 -> line 3266
 *   +0x0390 -> line 3267
 *   +0x0398 -> line 3268
 *   +0x03a4 -> line 3272
 *   +0x03a8 -> line 3273
 *   +0x03d4 -> line 3274
 *   +0x03dc -> line 3275
 *   +0x03e4 -> line 3276
 *   +0x03ec -> line 3277
 *   +0x03f4 -> line 3278
 *   +0x0400 -> line 3283
 *   +0x0420 -> line 3288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int LoadPartieMenu(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize, char* SavingName, int bSavingOptions)
{
    int RetVal;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mc_menu.c lines 3291–3294 */
/* addr: 0x0013b070  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3291
 *   +0x0028 -> line 3293
 *   +0x0050 -> line 3294
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SauvePartieMenu(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize, char* SavingName, int bSavingOptions)
{
    return LoadPartieMenu(_iPort, _iSlot, _szSonyCompliantName, _szTitle, _pData, _u32DataSize, SavingName, bSavingOptions);
}
