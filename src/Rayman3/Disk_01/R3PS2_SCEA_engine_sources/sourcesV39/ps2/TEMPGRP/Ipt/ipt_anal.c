/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct stDevice stDevice;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;

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

IPT_tdstInput_ IPT_g_hInputStructure;
unsigned int IPT_g_ulPadAndJoyButtonFlag;
int IPT_gd_hKeyAndPadDefine;
/* array */ int IPT_g_hScriptKeyValue;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 40–46 */
/* addr: 0x002f5910  size: 152 bytes */
unsigned char IPT_fn_bIsEntryActionValid(/* function pointer */ int _hEntryElement)
{
    unsigned char ucReturn;
    /* line map: */
    /*   line 40 @ +0x000 */
    /*   line 43 @ +0x000 */
    /*   line 46 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 186–202 */
/* addr: 0x002f59b0  size: 240 bytes */
unsigned char IPT_fn_bAButtonPadJustPressed(stDevice* hPad)
{
    int j;
    int i;
    /* line map: */
    /*   line 186 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 191 @ +0x000 */
    /*   line 194 @ +0x000 */
    /*   line 197 @ +0x000 */
    /*   line 199 @ +0x000 */
    /*   line 202 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 162–178 */
/* addr: 0x002f5aa0  size: 176 bytes */
unsigned char IPT_fn_bAKeyJustPressed(stDevice* hKeyboard, /* function pointer */ int p_stKeyAndPadDefine, /* function pointer */ int p_hScriptKeyValue)
{
    unsigned short uwKeyCode;
    /* line map: */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 174 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 178 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 152–152 */
/* addr: 0x002f5b50  size: 28 bytes */
float IPT_fn_xGetAnalogicValue(/* function pointer */ int _hEntryElement)
{
    /* line map: */
    /*   line 152 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 126–126 */
/* addr: 0x002f5b70  size: 40 bytes */
unsigned char IPT_fn_bIsInvalidated(/* function pointer */ int _hEntryElement)
{
    /* line map: */
    /*   line 126 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 121–121 */
/* addr: 0x002f5ba0  size: 52 bytes */
unsigned char IPT_fn_bIsJustInvalidated(/* function pointer */ int _hEntryElement)
{
    /* line map: */
    /*   line 121 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 116–116 */
/* addr: 0x002f5be0  size: 48 bytes */
unsigned char IPT_fn_bIsValidated(/* function pointer */ int _hEntryElement)
{
    /* line map: */
    /*   line 116 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 111–111 */
/* addr: 0x002f5c10  size: 36 bytes */
unsigned char IPT_fn_bIsJustValidated(/* function pointer */ int _hEntryElement)
{
    /* line map: */
    /*   line 111 @ +0x000 */
    /* TODO: decompile from asm/... */
}
