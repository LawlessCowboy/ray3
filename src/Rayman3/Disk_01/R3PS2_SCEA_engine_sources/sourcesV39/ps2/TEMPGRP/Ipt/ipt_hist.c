/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_hist.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef union tdu_KeyWordElementUnion_ tdu_KeyWordElementUnion_;
typedef struct IPT_tdstKeyWordElement_ IPT_tdstKeyWordElement_;
typedef struct IPT_tdstHistoricElement_ IPT_tdstHistoricElement_;
typedef struct IPT_tdstCommandElement_ IPT_tdstCommandElement_;
typedef struct anon_0 anon_0;
typedef struct stDevice stDevice;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;
typedef struct IPT_tdstDevice_ IPT_tdstDevice_;
typedef struct IPT_tdstScriptValue_ IPT_tdstScriptValue_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;

struct IPT_tdstEntryElement_ {
    unsigned int ulNumberOfKeyWordElement; /* +0x0 */
    IPT_tdstKeyWordElement_* d_stKeyWordElementArray; /* +0x4 */
    int p_szActionName; /* +0x8 */
    int p_szEntryName; /* +0xc */
    int lState; /* +0x10 */
    float xAnalogicValue; /* +0x14 */
    unsigned char bIsActivate; /* +0x18 */
};

union tdu_KeyWordElementUnion_ {
    short swJoyNumber; /* +0x0 */
    short swJoyAction; /* +0x0 */
    short swJoyValueMin; /* +0x0 */
    short swJoyValueMax; /* +0x0 */
    short swPadNumber; /* +0x0 */
    short swPadAction; /* +0x0 */
    short swKey; /* +0x0 */
    short swKeyWord; /* +0x0 */
    short swMouseAction; /* +0x0 */
    short swMouseValueMin; /* +0x0 */
    short swMouseValueMax; /* +0x0 */
    IPT_tdstEntryElement_* hEntryElement; /* +0x0 */
    unsigned int ulNumberOfSequence; /* +0x0 */
};

struct IPT_tdstKeyWordElement_ {
    tdu_KeyWordElementUnion_ u_ElementUnion; /* +0x0 */
    tdu_KeyWordElementUnion_ u_ElementUnionDefault; /* +0x4 */
    unsigned char ucResult; /* +0x8 */
    unsigned char ucMinCounterInput; /* +0x9 */
    unsigned char ucMaxCounterInput; /* +0xa */
};

struct IPT_tdstHistoricElement_ {
    unsigned char bf2State; /* +0x0 */
    unsigned char bf6DeviceType; /* +0x1 */
    unsigned char ucCounter; /* +0x2 */
    short swDeviceValue; /* +0x4 */
};

struct IPT_tdstCommandElement_ {
    int p_szCommandName; /* +0x0 */
    int p_szCommand; /* +0x4 */
    int p_szHelpLine; /* +0x8 */
    unsigned char ucNumberOfParamMin; /* +0xc */
    unsigned char ucNumberOfParamMax; /* +0xd */
    unsigned char ucState; /* +0xe */
};

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
};

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    anon_0* m_p_stState; /* +0x8 */
    anon_0* m_p_stLastState; /* +0xc */
    short (*m_pfnRead)(stDevice*); /* +0x10 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct IPT_tdstPadReadingOutput_ {
    MTH3D_tdstVector_ stGlobalVector; /* +0x0 */
    short wHorizontalAxis; /* +0xc */
    short wVerticalAxis; /* +0xe */
    float xAnalogForce; /* +0x10 */
    float xTrueAnalogForce; /* +0x14 */
    float xRotationAngle; /* +0x18 */
    int lSector; /* +0x1c */
};

struct IPT_tdstDevice_ {
    unsigned char ucValideAndActiveDevice; /* +0x0 */
    stDevice* hDeviceHandle; /* +0x4 */
    unsigned char ucPadAndJoyCounter[44]; /* +0x8 */
    signed char cJoystickXmin; /* +0x34 */
    signed char cJoystickXmax; /* +0x35 */
    signed char cJoystickYmin; /* +0x36 */
    signed char cJoystickYmax; /* +0x37 */
    signed char cJoystickXcenter; /* +0x38 */
    signed char cJoystickYcenter; /* +0x39 */
    IPT_tdstEntryElement_* hJoystickAxeX; /* +0x3c */
    IPT_tdstEntryElement_* hJoystickAxeY; /* +0x40 */
    IPT_tdstEntryElement_* hJoystickAxeZ; /* +0x44 */
    IPT_tdstEntryElement_* hJoystickAxeR; /* +0x48 */
    IPT_tdstEntryElement_* hKeyUp; /* +0x4c */
    IPT_tdstEntryElement_* hKeyDown; /* +0x50 */
    IPT_tdstEntryElement_* hKeyLeft; /* +0x54 */
    IPT_tdstEntryElement_* hKeyRight; /* +0x58 */
    IPT_tdstEntryElement_* hKeySpeedUp; /* +0x5c */
    unsigned char bCancelKeyboardInertia; /* +0x60 */
    int hJoystickButtons[16]; /* +0x64 */
    int hKeyButtons[16]; /* +0xa4 */
    IPT_tdstPadReadingOutput_ stPadReadingOutput; /* +0xe4 */
};

struct IPT_tdstScriptValue_ {
    int zsKeyName; /* +0x0 */
    short swKeyValue; /* +0x4 */
};

struct IPT_tdstInput_ {
    unsigned char ucOnePadActivate; /* +0x0 */
    IPT_tdstDevice_ a_stDevice[18]; /* +0x4 */
    unsigned char p_ucKeyboardCounter[256]; /* +0x124c */
    unsigned char ucKeyboardType; /* +0x134c */
    unsigned char p_ucMouseButtonsCounter[9]; /* +0x134d */
    unsigned int ulNumberOfEntryElement; /* +0x1358 */
    IPT_tdstEntryElement_* d_stEntryElementArray; /* +0x135c */
    unsigned int ulNumberOfCommandElement; /* +0x1360 */
    IPT_tdstCommandElement_* d_stCommandElementArray; /* +0x1364 */
    short sEventHistoricSize; /* +0x1368 */
    IPT_tdstHistoricElement_* hEventHistoric; /* +0x136c */
    unsigned char bAtLeastOneActionIsValidated; /* +0x1370 */
    char szLineCommand[78]; /* +0x1371 */
    char szInternLineCommand[78]; /* +0x13bf */
    char szSearchedLineCommand[78]; /* +0x140d */
    char szLastLineCommand[10][78]; /* +0x145b */
    int lIndexInHistoricCommand; /* +0x1768 */
    IPT_tdstCommandElement_* hSearchedCommand; /* +0x176c */
    IPT_tdstEntryElement_* hSwapCommandMode; /* +0x1770 */
    IPT_tdstEntryElement_* hClearCommandMode; /* +0x1774 */
};

IPT_tdstInput_ IPT_g_hInputStructure;
unsigned int IPT_g_ulPadAndJoyButtonFlag;
IPT_tdstScriptValue_ IPT_g_hScriptPadValue;
IPT_tdstScriptValue_ IPT_g_hScriptKeyValue;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_hist.c lines 36–106 */
/* addr: 0x002f5c40  size: 668 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 36
 *   +0x0004 -> line 48
 *   +0x0008 -> line 36
 *   +0x000c -> line 48
 *   +0x0010 -> line 36
 *   +0x0024 -> line 48
 *   +0x0030 -> line 49
 *   +0x0040 -> line 50
 *   +0x0044 -> line 54
 *   +0x0058 -> line 55
 *   +0x008c -> line 56
 *   +0x0090 -> line 72
 *   +0x00a0 -> line 75
 *   +0x00b0 -> line 78
 *   +0x00b8 -> line 80
 *   +0x00bc -> line 83
 *   +0x00c0 -> line 80
 *   +0x00c4 -> line 83
 *   +0x00cc -> line 85
 *   +0x00d0 -> line 86
 *   +0x00d4 -> line 85
 *   +0x00dc -> line 86
 *   +0x00e8 -> line 88
 *   +0x00f4 -> line 90
 *   +0x00fc -> line 92
 *   +0x0100 -> line 90
 *   +0x0108 -> line 92
 *   +0x0130 -> line 93
 *   +0x0160 -> line 94
 *   +0x019c -> line 95
 *   +0x01c8 -> line 96
 *   +0x0204 -> line 97
 *   +0x0210 -> line 98
 *   +0x0250 -> line 99
 *   +0x025c -> line 101
 *   +0x0274 -> line 102
 *   +0x0278 -> line 104
 *   +0x0280 -> line 106
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vReadInput(unsigned int ulCurrentTime)
{
    unsigned char ucValid;
    unsigned char ucIsActionValid;
    IPT_tdstEntryElement_* hEntryElement;
    unsigned int i;
    /* TODO: decompile from asm/... */
}
