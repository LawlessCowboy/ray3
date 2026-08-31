/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct stDevice stDevice;
typedef struct IPT_tdstInput_ IPT_tdstInput_;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
};

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    int m_p_stState; /* +0x8 */
    int m_p_stLastState; /* +0xc */
    int m_pfnRead; /* +0x10 */
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

struct IPT_tdstPadReadingOutput_ {
    /* aggregate */ int stGlobalVector; /* +0x0 */
    short wHorizontalAxis; /* +0xc */
    short wVerticalAxis; /* +0xe */
    float xAnalogForce; /* +0x10 */
    float xTrueAnalogForce; /* +0x14 */
    float xRotationAngle; /* +0x18 */
    int lSector; /* +0x1c */
};

unsigned char g_ucIPTModuleId;
/* array */ int IPT_g_ConvertAZERTYtoQWERTY[1];
/* array */ int IPT_g_hScriptKeyValue[1];
/* array */ int IPT_g_hScriptPadValue[61];
unsigned int IPT_g_ulPadAndJoyButtonFlag[16];
/* array */ int IPT_g_hScriptKeyWordValue[27];
/* aggregate */ int IPT_p_fn_bIsKeyWordValid;
unsigned char IPT_g_bInputEnabled;
int IPT_g_p_szValidKey;
int IPT_g_c_szValidExtraKeyForChat;
/* aggregate */ int IPT_g_hLineCommand;
IPT_tdstInput_ IPT_g_hInputStructure;
int IPT_gd_hKeyAndPadDefine;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 63–242 */
/* addr: 0x002f5ee0  size: 1988 bytes */
void IPT_fn_vActualizeHistoric(stDevice* hPad, stDevice* hKeyboard)
{
    /* aggregate */ int hHistoricElement;
    unsigned short uwNewDirections;
    unsigned short uwJustReleasedDirections;
    int lFound;
    int lPadNumber;
    int j;
    int i;
    /* line map: */
    /*   line 72 @ +0x000 */
    /*   line 69 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 72 @ +0x000 */
    /*   line 69 @ +0x000 */
    /*   line 75 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 79 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1189–1207 */
/* addr: 0x002f66b0  size: 104 bytes */
void IPT_fn_vForceFeedBackRunTime(unsigned int ulCurrentTime)
{
    unsigned int i;
    /* line map: */
    /*   line 1189 @ +0x000 */
    /*   line 1204 @ +0x000 */
    /*   line 1207 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6720  size: 8 bytes */
void IPT_fn_vResumeAllConstantFFBEffectForAllDevices(unsigned int ulCurrentTime)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6730  size: 8 bytes */
void IPT_fn_vPauseAllConstantFFBEffectForAllDevices(unsigned int ulCurrentTime)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6740  size: 36 bytes */
signed char IPT_fn_cStopFFBEffectWithFade(unsigned int ulCurrentTime, unsigned char ucPadNumber, signed char cEffectNumber, float xFadeOutStopValue, float xFadeOutTime)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6770  size: 8 bytes */
void IPT_fn_vStopAllConstantFFBEffectForAllDevices(unsigned int ulCurrentTime)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6780  size: 36 bytes */
void IPT_fn_vStopAllConstantFFBEffectForDevice(unsigned int ulCurrentTime, unsigned char ucPadNumber)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f67b0  size: 36 bytes */
void IPT_fn_vStopFFBEffect(unsigned int ulCurrentTime, unsigned char ucPadNumber, signed char cEffectNumber)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f67e0  size: 36 bytes */
signed char IPT_fn_cCreateAndLaunchConstantFFBEffect(unsigned int ulCurrentTime, unsigned char ucPadNumber, float xFadeInStartValue, float xFadeInTime, float xConstantValue, float xConstantTime, float xFadeOutStopValue, float xFadeOutTime)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6810  size: 36 bytes */
void IPT_fn_vStopPreCreatedFFBEffect(unsigned int ulCurrentTime, unsigned char ucPadNumber, signed char cEffectNumber)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6840  size: 36 bytes */
void IPT_fn_vStartPreCreatedFFBEffect(unsigned int ulCurrentTime, unsigned char ucPadNumber, signed char cEffectNumber)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6870  size: 8 bytes */
void IPT_fn_vDeleteAllPreCreatedConstantFFBEffectForAllDevices(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f6880  size: 36 bytes */
void IPT_fn_vDeleteAllPreCreatedConstantFFBEffectForDevice(unsigned char ucPadNumber)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f68b0  size: 36 bytes */
void IPT_fn_vDeletePreCreatedConstantFFBEffect(unsigned char ucPadNumber, signed char cEffectNumber)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f68e0  size: 36 bytes */
signed char IPT_fn_cPreCreateConstantFFBEffect(unsigned char ucPadNumber, float xFadeInStartValue, float xFadeInTime, float xConstantValue, float xConstantTime, float xFadeOutStopValue, float xFadeOutTime)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1047–1060 */
/* addr: 0x002f6910  size: 116 bytes */
unsigned char IPT_fn_ucScanForAnASCIIKey(void)
{
    char cKey;
    /* line map: */
    /*   line 1047 @ +0x000 */
    /*   line 1050 @ +0x000 */
    /*   line 1047 @ +0x000 */
    /*   line 1054 @ +0x000 */
    /*   line 1057 @ +0x000 */
    /*   line 1060 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 961–998 */
/* addr: 0x002f6990  size: 256 bytes */
void IPT_fn_vSetUniqueValueForHandle(/* function pointer */ int _hElement, unsigned int _ulValue, /* function pointer */ int hNextElement)
{
    /* line map: */
    /*   line 961 @ +0x000 */
    /*   line 966 @ +0x000 */
    /*   line 992 @ +0x000 */
    /*   line 992 @ +0x000 */
    /*   line 995 @ +0x000 */
    /*   line 998 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 915–951 */
/* addr: 0x002f6a90  size: 208 bytes */
unsigned int IPT_fn_ulGetUniqueValueForHandle(/* function pointer */ int _hElement, /* function pointer */ int hNextElement)
{
    unsigned int ulReturn;
    /* line map: */
    /*   line 915 @ +0x000 */
    /*   line 920 @ +0x000 */
    /*   line 946 @ +0x000 */
    /*   line 946 @ +0x000 */
    /*   line 946 @ +0x000 */
    /*   line 949 @ +0x000 */
    /*   line 951 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 900–906 */
/* addr: 0x002f6b60  size: 164 bytes */
void IPT_fn_szGetStringOf(/* function pointer */ int _hElement, /* function pointer */ int param1)
{
    /* line map: */
    /*   line 900 @ +0x000 */
    /*   line 906 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 880–882 */
/* addr: 0x002f6c10  size: 72 bytes */
void IPT_fn_vResetIPTValueToDefault(/* function pointer */ int _hElement)
{
    unsigned long i;
    /* line map: */
    /*   line 880 @ +0x000 */
    /*   line 880 @ +0x000 */
    /*   line 882 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 780–872 */
/* addr: 0x002f6c60  size: 444 bytes */
unsigned char IPT_fn_bChangeIPTValue(/* function pointer */ int _hElement, unsigned char ucWhichTest, /* function pointer */ int hNextElement, /* function pointer */ int hExchangeEntry, stDevice* hPad)
{
    unsigned char bFlag;
    unsigned int i;
    unsigned char ucReturn;
    short swPadNumber;
    /* line map: */
    /*   line 832 @ +0x000 */
    /*   line 780 @ +0x000 */
    /*   line 792 @ +0x000 */
    /*   line 835 @ +0x000 */
    /*   line 837 @ +0x000 */
    /*   line 841 @ +0x000 */
    /*   line 844 @ +0x000 */
    /*   line 846 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 769–775 */
/* addr: 0x002f6e20  size: 100 bytes */
unsigned char IPT_fn_bModifyIPTAction(/* function pointer */ int _hElementToChange, /* function pointer */ int _hReplacingElement)
{
    int lI;
    /* line map: */
    /*   line 769 @ +0x000 */
    /*   line 772 @ +0x000 */
    /*   line 772 @ +0x000 */
    /*   line 775 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 724–762 */
/* addr: 0x002f6e90  size: 156 bytes */
void IPT_fn_hSearchElementInOptionWithKeyWord(short _swEntryType, short swPadNumber, short _swKeyValue, /* function pointer */ int hNextElement, /* function pointer */ int hAction, /* function pointer */ int hEntryElement)
{
    unsigned int i;
    /* line map: */
    /*   line 724 @ +0x000 */
    /*   line 730 @ +0x000 */
    /*   line 747 @ +0x000 */
    /*   line 751 @ +0x000 */
    /*   line 755 @ +0x000 */
    /*   line 755 @ +0x000 */
    /*   line 762 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 689–704 */
/* addr: 0x002f6f30  size: 124 bytes */
void IPT_fn_vActiveJoystickControl(void)
{
    unsigned int i;
    /* line map: */
    /*   line 689 @ +0x000 */
    /*   line 693 @ +0x000 */
    /*   line 700 @ +0x000 */
    /*   line 704 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 676–684 */
/* addr: 0x002f6fb0  size: 108 bytes */
void IPT_fn_vDesactiveJoystickAndPadControl(void)
{
    unsigned int i;
    /* line map: */
    /*   line 676 @ +0x000 */
    /*   line 680 @ +0x000 */
    /*   line 682 @ +0x000 */
    /*   line 684 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 564–567 */
/* addr: 0x002f7020  size: 28 bytes */
void IPT_fn_vDesactivateEntryElement(/* function pointer */ int _hEntryElement)
{
    /* line map: */
    /*   line 564 @ +0x000 */
    /*   line 567 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 556–556 */
/* addr: 0x002f7040  size: 28 bytes */
void IPT_fn_vActivateEntryElement(/* function pointer */ int _hEntryElement)
{
    /* line map: */
    /*   line 556 @ +0x000 */
    /*   line 556 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 536–538 */
/* addr: 0x002f7060  size: 76 bytes */
void IPT_fn_vActivateAllEntryElements(/* function pointer */ int hEntryElement)
{
    unsigned int ulI;
    /* line map: */
    /*   line 536 @ +0x000 */
    /*   line 538 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f70b0  size: 8 bytes */
unsigned char IPT_fn_bIsEnabled(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 436–441 */
/* addr: 0x002f70c0  size: 384 bytes */
void IPT_fn_vResetInputEntry(void)
{
    unsigned int i;
    /* line map: */
    /*   line 437 @ +0x000 */
    /*   line 436 @ +0x000 */
    /*   line 436 @ +0x000 */
    /*   line 438 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 441 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 385–405 */
/* addr: 0x002f7240  size: 92 bytes */
void IPT_fn_vDesinitInput(void)
{
    int i;
    /* line map: */
    /*   line 385 @ +0x000 */
    /*   line 388 @ +0x000 */
    /*   line 405 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 65–178 */
/* addr: 0x002f72a0  size: 304 bytes */
void IPT_fn_vInitInput(short _sHistoricSize, void* hInstance, int* hWindow, stDevice* hDev)
{
    int i;
    /* line map: */
    /*   line 65 @ +0x000 */
    /*   line 68 @ +0x000 */
    /*   line 68 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 110 @ +0x000 */
    /*   line 166 @ +0x000 */
    /* TODO: decompile from asm/... */
}
