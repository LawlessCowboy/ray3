/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_hist.c */
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
/* array */ int IPT_g_hScriptPadValue;
/* array */ int IPT_g_hScriptKeyValue;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_hist.c lines 48–106 */
/* addr: 0x002f5c40  size: 668 bytes */
void IPT_fn_vReadInput(unsigned int ulCurrentTime, /* function pointer */ int hEntryElement)
{
    unsigned char ucValid;
    unsigned char ucIsActionValid;
    unsigned int i;
    /* line map: */
    /*   line 48 @ +0x000 */
    /*   line 48 @ +0x000 */
    /*   line 48 @ +0x000 */
    /*   line 50 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 72 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 83 @ +0x000 */
    /* TODO: decompile from asm/... */
}
