/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    int m_p_stState; /* +0x8 */
    int m_p_stLastState; /* +0xc */
    int m_pfnRead; /* +0x10 */
};

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
};

struct IPT_tdstPadReadingOutput_ {
    /* aggregate */ int stGlobalVector; /* +0x0 */
    short wHorizontalAxis; /* +0xc */
    short wVerticalAxis; /* +0xe */
    float xAnalogForce; /* +0x10 */
    float xTrueAnalogForce; /* +0x14 */
    float xRotationAngle; /* +0x18 */
    int lSector; /* +0x1c */
};

struct IPT_tdstInput_ {
    unsigned char ucOnePadActivate; /* +0x0 */
    /* array */ int a_stDevice[18]; /* +0x4 */
    unsigned char p_ucKeyboardCounter[256]; /* +0x124c */
    unsigned char ucKeyboardType; /* +0x134c */
    unsigned char p_ucMouseButtonsCounter[9]; /* +0x134d */
    unsigned int ulNumberOfEntryElement; /* +0x1358 */
    int d_stEntryElementArray; /* +0x135c */
    unsigned int ulNumberOfCommandElement; /* +0x1360 */
    int d_stCommandElementArray; /* +0x1364 */
    short sEventHistoricSize; /* +0x1368 */
    int hEventHistoric; /* +0x136c */
    unsigned char bAtLeastOneActionIsValidated; /* +0x1370 */
    char szLineCommand[78]; /* +0x1371 */
    char szInternLineCommand[78]; /* +0x13bf */
    char szSearchedLineCommand[78]; /* +0x140d */
    char szLastLineCommand[10][78]; /* +0x145b */
    int lIndexInHistoricCommand; /* +0x1768 */
    int hSearchedCommand; /* +0x176c */
    int hSwapCommandMode; /* +0x1770 */
    int hClearCommandMode; /* +0x1774 */
};

ISI_tdstColor_ IPO_g_tdstBlack;
float IPT_g_fNormCorrectionTable[46];
unsigned int IPT_g_ulSequenceAnalyseNumber;
int IPT_g_hNextParameter;
int g_h_ActualEntryInput;
IPT_tdstInput_ IPT_g_hInputStructure;
unsigned char g_ucIPTModuleId;
/* aggregate */ int IPT_p_fn_bIsKeyWordValid;
unsigned int IPT_g_ulPadAndJoyButtonFlag;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 98–101 */
/* addr: 0x002f31d0  size: 156 bytes */
void IPO_fn_vLevelDesinitRLITables(void)
{
    int lI;
    /* line map: */
    /*   line 98 @ +0x000 */
    /*   line 98 @ +0x000 */
    /*   line 98 @ +0x000 */
    /*   line 101 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1144–1154 */
/* addr: 0x002f3270  size: 224 bytes */
unsigned char IPT_fn_bIsKeyWordValid_SequencePadEnd(/* function pointer */ int _hKeyWordElement)
{
    unsigned int ulPadNumber;
    /* line map: */
    /*   line 1147 @ +0x000 */
    /*   line 1144 @ +0x000 */
    /*   line 1144 @ +0x000 */
    /*   line 1147 @ +0x000 */
    /*   line 1147 @ +0x000 */
    /*   line 1147 @ +0x000 */
    /*   line 1154 @ +0x000 */
    /*   line 1154 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1122–1132 */
/* addr: 0x002f3350  size: 232 bytes */
unsigned char IPT_fn_bIsKeyWordValid_SequencePad(/* function pointer */ int _hKeyWordElement)
{
    unsigned int ulPadNumber;
    /* line map: */
    /*   line 1125 @ +0x000 */
    /*   line 1122 @ +0x000 */
    /*   line 1122 @ +0x000 */
    /*   line 1125 @ +0x000 */
    /*   line 1125 @ +0x000 */
    /*   line 1125 @ +0x000 */
    /*   line 1132 @ +0x000 */
    /*   line 1132 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1067–1075 */
/* addr: 0x002f3440  size: 264 bytes */
unsigned char IPT_fn_bIsKeyWordValid_Sequence(/* function pointer */ int _hKeyWordElement)
{
    unsigned int i;
    unsigned char ucReturn;
    /* line map: */
    /*   line 1068 @ +0x000 */
    /*   line 1069 @ +0x000 */
    /*   line 1067 @ +0x000 */
    /*   line 1071 @ +0x000 */
    /*   line 1075 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1052–1054 */
/* addr: 0x002f3550  size: 84 bytes */
unsigned char IPT_fn_bIsKeyWordValid_ActionInvalidated(/* function pointer */ int _hKeyWordElement)
{
    /* line map: */
    /*   line 1052 @ +0x000 */
    /*   line 1052 @ +0x000 */
    /*   line 1054 @ +0x000 */
    /*   line 1054 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1039–1041 */
/* addr: 0x002f35b0  size: 84 bytes */
unsigned char IPT_fn_bIsKeyWordValid_ActionJustInvalidated(/* function pointer */ int _hKeyWordElement)
{
    /* line map: */
    /*   line 1039 @ +0x000 */
    /*   line 1039 @ +0x000 */
    /*   line 1041 @ +0x000 */
    /*   line 1041 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1026–1028 */
/* addr: 0x002f3610  size: 84 bytes */
unsigned char IPT_fn_bIsKeyWordValid_ActionValidated(/* function pointer */ int _hKeyWordElement)
{
    /* line map: */
    /*   line 1026 @ +0x000 */
    /*   line 1026 @ +0x000 */
    /*   line 1028 @ +0x000 */
    /*   line 1028 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1013–1015 */
/* addr: 0x002f3670  size: 84 bytes */
unsigned char IPT_fn_bIsKeyWordValid_ActionJustValidated(/* function pointer */ int _hKeyWordElement)
{
    /* line map: */
    /*   line 1013 @ +0x000 */
    /*   line 1013 @ +0x000 */
    /*   line 1015 @ +0x000 */
    /*   line 1015 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 960–1005 */
/* addr: 0x002f36d0  size: 736 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadReleased(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned char ucReturn;
    /* line map: */
    /*   line 960 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 961 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 961 @ +0x000 */
    /*   line 964 @ +0x000 */
    /*   line 971 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 903–948 */
/* addr: 0x002f39b0  size: 736 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadPressed(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned char ucReturn;
    /* line map: */
    /*   line 903 @ +0x000 */
    /*   line 905 @ +0x000 */
    /*   line 905 @ +0x000 */
    /*   line 904 @ +0x000 */
    /*   line 905 @ +0x000 */
    /*   line 904 @ +0x000 */
    /*   line 907 @ +0x000 */
    /*   line 914 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 861–888 */
/* addr: 0x002f3c90  size: 424 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadJustReleased(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned short uwJustReleasedDirections;
    unsigned char ucReturn;
    /* line map: */
    /*   line 863 @ +0x000 */
    /*   line 865 @ +0x000 */
    /*   line 861 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 865 @ +0x000 */
    /*   line 861 @ +0x000 */
    /*   line 865 @ +0x000 */
    /*   line 864 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 820–847 */
/* addr: 0x002f3e40  size: 444 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadJustPressed(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned short uwNewDirections;
    unsigned char ucReturn;
    /* line map: */
    /*   line 822 @ +0x000 */
    /*   line 824 @ +0x000 */
    /*   line 820 @ +0x000 */
    /*   line 822 @ +0x000 */
    /*   line 824 @ +0x000 */
    /*   line 820 @ +0x000 */
    /*   line 824 @ +0x000 */
    /*   line 823 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 793–806 */
/* addr: 0x002f4000  size: 260 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickReleased(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned char ucReturn;
    /* line map: */
    /*   line 793 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 794 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 794 @ +0x000 */
    /*   line 797 @ +0x000 */
    /*   line 806 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 765–778 */
/* addr: 0x002f4110  size: 260 bytes */
/*type_0x00*/ int IPT_fn_bIsKeyWordValid_JoystickPressed(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned char ucReturn;
    /* line map: */
    /*   line 765 @ +0x000 */
    /*   line 767 @ +0x000 */
    /*   line 767 @ +0x000 */
    /*   line 766 @ +0x000 */
    /*   line 767 @ +0x000 */
    /*   line 766 @ +0x000 */
    /*   line 769 @ +0x000 */
    /*   line 778 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 742–755 */
/* addr: 0x002f4220  size: 248 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickJustReleased(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned char ucReturn;
    /* line map: */
    /*   line 742 @ +0x000 */
    /*   line 744 @ +0x000 */
    /*   line 746 @ +0x000 */
    /*   line 744 @ +0x000 */
    /*   line 744 @ +0x000 */
    /*   line 744 @ +0x000 */
    /*   line 744 @ +0x000 */
    /*   line 746 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 721–734 */
/* addr: 0x002f4320  size: 244 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickJustPressed(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned char ucReturn;
    /* line map: */
    /*   line 721 @ +0x000 */
    /*   line 723 @ +0x000 */
    /*   line 725 @ +0x000 */
    /*   line 723 @ +0x000 */
    /*   line 723 @ +0x000 */
    /*   line 723 @ +0x000 */
    /*   line 723 @ +0x000 */
    /*   line 725 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 627–713 */
/* addr: 0x002f4420  size: 768 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickCorrectedNormValue(/* function pointer */ int _hKeyWordElement, stDevice* param1)
{
    float fAngle;
    float fNorm;
    float fSecondPosition;
    float fFirstPosition;
    int lMaxValue;
    int lMinValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    unsigned char ucReturn;
    /* line map: */
    /*   line 636 @ +0x000 */
    /*   line 638 @ +0x000 */
    /*   line 647 @ +0x000 */
    /*   line 638 @ +0x000 */
    /*   line 647 @ +0x000 */
    /*   line 647 @ +0x000 */
    /*   line 631 @ +0x000 */
    /*   line 627 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 541–618 */
/* addr: 0x002f4720  size: 528 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickTrueNormValue(/* function pointer */ int _hKeyWordElement, stDevice* param1)
{
    float fNorm;
    float fSecondPosition;
    float fFirstPosition;
    int lMaxValue;
    int lMinValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    unsigned char ucReturn;
    /* line map: */
    /*   line 549 @ +0x000 */
    /*   line 551 @ +0x000 */
    /*   line 560 @ +0x000 */
    /*   line 545 @ +0x000 */
    /*   line 551 @ +0x000 */
    /*   line 541 @ +0x000 */
    /*   line 552 @ +0x000 */
    /*   line 560 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 457–534 */
/* addr: 0x002f4930  size: 632 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickAngularValue(/* function pointer */ int _hKeyWordElement, stDevice* param1)
{
    float fAngle;
    float fSecondPosition;
    float fFirstPosition;
    int lMaxValue;
    int lMinValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    unsigned char ucReturn;
    /* line map: */
    /*   line 465 @ +0x000 */
    /*   line 467 @ +0x000 */
    /*   line 476 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 467 @ +0x000 */
    /*   line 457 @ +0x000 */
    /*   line 468 @ +0x000 */
    /*   line 476 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 385–453 */
/* addr: 0x002f4bb0  size: 348 bytes */
unsigned char IPT_fn_bIsKeyWordValid_JoystickAxeValue(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    float fPosition;
    int lMaxValue;
    int lMinValue;
    unsigned int ulActionNumber;
    unsigned char ucReturn;
    /* line map: */
    /*   line 385 @ +0x000 */
    /*   line 392 @ +0x000 */
    /*   line 392 @ +0x000 */
    /*   line 385 @ +0x000 */
    /*   line 385 @ +0x000 */
    /*   line 385 @ +0x000 */
    /*   line 387 @ +0x000 */
    /*   line 389 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 325–368 */
/* addr: 0x002f4d10  size: 728 bytes */
unsigned char IPT_fn_bIsKeyWordValid_PadReleased(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned short uwInvertedDirection;
    unsigned char ucReturn;
    /* line map: */
    /*   line 325 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 326 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 326 @ +0x000 */
    /*   line 329 @ +0x000 */
    /*   line 329 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 266–309 */
/* addr: 0x002f4ff0  size: 720 bytes */
unsigned char IPT_fn_bIsKeyWordValid_PadPressed(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned short uwDirection;
    unsigned char ucReturn;
    /* line map: */
    /*   line 266 @ +0x000 */
    /*   line 268 @ +0x000 */
    /*   line 268 @ +0x000 */
    /*   line 267 @ +0x000 */
    /*   line 268 @ +0x000 */
    /*   line 267 @ +0x000 */
    /*   line 270 @ +0x000 */
    /*   line 274 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 223–250 */
/* addr: 0x002f52c0  size: 424 bytes */
unsigned char IPT_fn_bIsKeyWordValid_PadJustReleased(/* function pointer */ int _hKeyWordElement, stDevice* hPad)
{
    unsigned short uwJustReleasedDirections;
    unsigned char ucReturn;
    /* line map: */
    /*   line 225 @ +0x000 */
    /*   line 227 @ +0x000 */
    /*   line 223 @ +0x000 */
    /*   line 225 @ +0x000 */
    /*   line 227 @ +0x000 */
    /*   line 223 @ +0x000 */
    /*   line 227 @ +0x000 */
    /*   line 226 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 181–209 */
/* addr: 0x002f5470  size: 444 bytes */
unsigned char IPT_fn_bIsKeyWordValid_PadJustPressed(/* function pointer */ int _hKeyWordElement)
{
    unsigned short uwNewDirections;
    unsigned char ucReturn;
    /* line map: */
    /*   line 184 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 181 @ +0x000 */
    /*   line 184 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 181 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 185 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 101–105 */
/* addr: 0x002f5630  size: 148 bytes */
unsigned char IPT_fn_bIsKeyWordValid_Not(/* function pointer */ int _hKeyWordElement)
{
    /* line map: */
    /*   line 101 @ +0x000 */
    /*   line 101 @ +0x000 */
    /*   line 105 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 87–92 */
/* addr: 0x002f56d0  size: 280 bytes */
unsigned char IPT_fn_bIsKeyWordValid_Or(/* function pointer */ int _hKeyWordElement)
{
    /* line map: */
    /*   line 87 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 92 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 73–78 */
/* addr: 0x002f57f0  size: 280 bytes */
unsigned char IPT_fn_bIsKeyWordValid_And(/* function pointer */ int _hKeyWordElement)
{
    /* line map: */
    /*   line 73 @ +0x000 */
    /*   line 73 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 78 @ +0x000 */
    /* TODO: decompile from asm/... */
}
