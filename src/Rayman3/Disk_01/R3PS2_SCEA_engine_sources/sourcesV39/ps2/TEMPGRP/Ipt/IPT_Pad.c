/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;
typedef struct IPT_tdstDevice_ IPT_tdstDevice_;
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef union tdu_KeyWordElementUnion_ tdu_KeyWordElementUnion_;
typedef struct IPT_tdstCommandElement_ IPT_tdstCommandElement_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;
typedef struct IPT_tdstHistoricElement_ IPT_tdstHistoricElement_;
typedef struct IPT_tdstKeyWordElement_ IPT_tdstKeyWordElement_;

struct IPT_tdstEntryElement_ {
    unsigned int ulNumberOfKeyWordElement; /* +0x0 */
    IPT_tdstKeyWordElement_* d_stKeyWordElementArray; /* +0x4 */
    int p_szActionName; /* +0x8 */
    int p_szEntryName; /* +0xc */
    int lState; /* +0x10 */
    float xAnalogicValue; /* +0x14 */
    unsigned char bIsActivate; /* +0x18 */
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

struct IPT_tdstCommandElement_ {
    int p_szCommandName; /* +0x0 */
    int p_szCommand; /* +0x4 */
    int p_szHelpLine; /* +0x8 */
    unsigned char ucNumberOfParamMin; /* +0xc */
    unsigned char ucNumberOfParamMax; /* +0xd */
    unsigned char ucState; /* +0xe */
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

struct IPT_tdstHistoricElement_ {
    unsigned char bf2State; /* +0x0 */
    unsigned char bf6DeviceType; /* +0x1 */
    unsigned char ucCounter; /* +0x2 */
    short swDeviceValue; /* +0x4 */
};

struct IPT_tdstKeyWordElement_ {
    tdu_KeyWordElementUnion_ u_ElementUnion; /* +0x0 */
    tdu_KeyWordElementUnion_ u_ElementUnionDefault; /* +0x4 */
    unsigned char ucResult; /* +0x8 */
    unsigned char ucMinCounterInput; /* +0x9 */
    unsigned char ucMaxCounterInput; /* +0xa */
};

IPT_tdstInput_ IPT_g_hInputStructure;


/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 44–44 */
/* addr: 0x002f7480  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 44
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vInitCommandLines(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 312–314 */
/* addr: 0x002f7490  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 312
 *   +0x0018 -> line 313
 *   +0x001c -> line 312
 *   +0x0020 -> line 313
 *   +0x0024 -> line 312
 *   +0x0028 -> line 313
 *   +0x002c -> line 312
 *   +0x0030 -> line 313
 *   +0x0034 -> line 314
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vGetJoystickAxesForPadNumber2(unsigned char ucPadNumber, IPT_tdstEntryElement_** p_hJoyAxeX, IPT_tdstEntryElement_** p_hJoyAxeY)
{
    *p_hJoyAxeX = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeZ;
    *p_hJoyAxeY = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeR;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 300–306 */
/* addr: 0x002f74d0  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 300
 *   +0x0018 -> line 301
 *   +0x001c -> line 304
 *   +0x0020 -> line 300
 *   +0x0024 -> line 301
 *   +0x0028 -> line 304
 *   +0x002c -> line 301
 *   +0x0030 -> line 300
 *   +0x0034 -> line 304
 *   +0x0038 -> line 301
 *   +0x003c -> line 305
 *   +0x0040 -> line 304
 *   +0x0044 -> line 305
 *   +0x004c -> line 306
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetJoystickAxesForPadNumber2(unsigned char ucPadNumber, IPT_tdstEntryElement_* hJoyAxeX, IPT_tdstEntryElement_* hJoyAxeY, IPT_tdstEntryElement_* hJoyAxeX1, IPT_tdstEntryElement_* hJoyAxeY1)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeX = hJoyAxeX;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeY = hJoyAxeY;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeZ = hJoyAxeX1;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeR = hJoyAxeY1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 283–287 */
/* addr: 0x002f7530  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 283
 *   +0x0024 -> line 284
 *   +0x0028 -> line 283
 *   +0x002c -> line 284
 *   +0x0030 -> line 283
 *   +0x0034 -> line 284
 *   +0x0038 -> line 283
 *   +0x003c -> line 284
 *   +0x0044 -> line 286
 *   +0x0088 -> line 287
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsInvalidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber)
{
    IPT_tdstEntryElement_* hPadButton;
    IPT_tdstEntryElement_* param0;

    hPadButton = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber];
    param0 = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber];

    return (((hPadButton != NULL) && (hPadButton->lState < 0)) && ((param0 != NULL) && (param0->lState < 0))) ? (unsigned char)1 : (unsigned char)0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 263–276 */
/* addr: 0x002f75c0  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 263
 *   +0x0024 -> line 264
 *   +0x0028 -> line 263
 *   +0x002c -> line 264
 *   +0x0030 -> line 263
 *   +0x0034 -> line 264
 *   +0x0038 -> line 263
 *   +0x003c -> line 264
 *   +0x0044 -> line 266
 *   +0x0054 -> line 267
 *   +0x00ac -> line 268
 *   +0x00b4 -> line 269
 *   +0x00d8 -> line 270
 *   +0x00e0 -> line 271
 *   +0x0104 -> line 273
 *   +0x0108 -> line 276
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsJustInvalidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber)
{
    IPT_tdstEntryElement_* hPadButton;
    IPT_tdstEntryElement_* param0;

    hPadButton = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber];
    param0 = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber];

    if (hPadButton && param0)
    {
        if (hPadButton->lState == -1)
        {
            if (param0->lState < 0)
            {
                return 1;
            }
        }
        return (hPadButton->lState < 0) ? ((param0->lState == -1) ? 1 : 0) : 0;
    }
    else if (hPadButton != NULL)
    {
        return (hPadButton->lState == -1) ? (unsigned char)1 : (unsigned char)0;
    }
    else if (param0 != NULL)
    {
        return (param0->lState == -1) ? (unsigned char)1 : (unsigned char)0;
    }
    return (unsigned char)0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 252–256 */
/* addr: 0x002f76d0  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 252
 *   +0x0024 -> line 253
 *   +0x0028 -> line 252
 *   +0x002c -> line 253
 *   +0x0030 -> line 252
 *   +0x0034 -> line 253
 *   +0x0038 -> line 252
 *   +0x003c -> line 253
 *   +0x0044 -> line 255
 *   +0x0084 -> line 256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsValidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber)
{
    IPT_tdstEntryElement_* hPadButton;
    IPT_tdstEntryElement_* param0;

    hPadButton = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber];
    param0 = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber];

    return (((hPadButton != NULL) && (hPadButton->lState > 0)) || ((param0 != NULL) && (param0->lState > 0))) ? (unsigned char)1 : (unsigned char)0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 234–245 */
/* addr: 0x002f7760  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 234
 *   +0x0024 -> line 235
 *   +0x0028 -> line 234
 *   +0x002c -> line 235
 *   +0x0030 -> line 234
 *   +0x0034 -> line 235
 *   +0x0038 -> line 234
 *   +0x003c -> line 235
 *   +0x0044 -> line 237
 *   +0x0054 -> line 238
 *   +0x00ac -> line 239
 *   +0x00b4 -> line 240
 *   +0x00d8 -> line 241
 *   +0x00e0 -> line 242
 *   +0x0104 -> line 244
 *   +0x0108 -> line 245
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsJustValidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber)
{
    IPT_tdstEntryElement_* hPadButton;
    IPT_tdstEntryElement_* param0;

    hPadButton = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber];
    param0 = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber];

    if (hPadButton && param0)
    {
        if (hPadButton->lState == 1)
        {
            if (param0->lState <= 0)
            {
                return 1;
            }
        }
        return (hPadButton->lState > 0) ? 0 : ((param0->lState == 1) ? 1 : 0);
    }
    else if (hPadButton != NULL)
    {
        return (hPadButton->lState == 1) ? (unsigned char)1 : (unsigned char)0;
    }
    else if (param0 != NULL)
    {
        return (param0->lState == 1) ? (unsigned char)1 : (unsigned char)0;
    }
    return (unsigned char)0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 225–227 */
/* addr: 0x002f7870  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 225
 *   +0x0024 -> line 226
 *   +0x0028 -> line 225
 *   +0x002c -> line 226
 *   +0x0030 -> line 225
 *   +0x0034 -> line 226
 *   +0x0038 -> line 225
 *   +0x003c -> line 226
 *   +0x0044 -> line 227
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetKeyAndPadButtonForPadNumber(unsigned char ucPadNumber, unsigned char ucButtonNumber, IPT_tdstEntryElement_* hPadButton, IPT_tdstEntryElement_* hKeyButton)
{
    char* pcJoy;
    char* pcKey;

    pcJoy = (char*)&IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons;
    pcKey = (char*)&IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons;
    pcJoy = pcJoy + 0;
    pcKey = pcKey + 0;
    *(int*)(pcJoy + ucButtonNumber * 4) = (int)hPadButton;
    *(int*)(pcKey + ucButtonNumber * 4) = (int)hKeyButton;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 220–221 */
/* addr: 0x002f78c0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 220
 *   +0x001c -> line 221
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int IPT_fn_xGetSectorForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.lSector;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 215–216 */
/* addr: 0x002f78f0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 215
 *   +0x001c -> line 216
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetSectorForPadNumber(unsigned char ucPadNumber, int lSector)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.lSector = lSector;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 210–211 */
/* addr: 0x002f7920  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 210
 *   +0x001c -> line 211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float IPT_fn_xGetRotationAngleForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xRotationAngle;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 205–206 */
/* addr: 0x002f7950  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 205
 *   +0x001c -> line 206
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetRotationAngleForPadNumber(unsigned char ucPadNumber, float xRotationAngle)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xRotationAngle = xRotationAngle;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 200–201 */
/* addr: 0x002f7980  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 200
 *   +0x001c -> line 201
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float IPT_fn_xGetTrueAnalogForceForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xTrueAnalogForce;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 195–196 */
/* addr: 0x002f79b0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 195
 *   +0x001c -> line 196
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetTrueAnalogForceForPadNumber(unsigned char ucPadNumber, float xTrueAnalogForce)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xTrueAnalogForce = xTrueAnalogForce;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 190–191 */
/* addr: 0x002f79e0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 190
 *   +0x001c -> line 191
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float IPT_fn_xGetAnalogForceForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xAnalogForce;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 185–186 */
/* addr: 0x002f7a10  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 185
 *   +0x001c -> line 186
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetAnalogForceForPadNumber(unsigned char ucPadNumber, float xAnalogForce)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xAnalogForce = xAnalogForce;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 180–181 */
/* addr: 0x002f7a40  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 180
 *   +0x001c -> line 181
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short IPT_fn_wGetVAxisForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wVerticalAxis;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 175–176 */
/* addr: 0x002f7a70  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 175
 *   +0x001c -> line 176
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetVAxisForPadNumber(unsigned char ucPadNumber, short wVerticalAxis)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wVerticalAxis = wVerticalAxis;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 170–171 */
/* addr: 0x002f7aa0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 170
 *   +0x001c -> line 171
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short IPT_fn_vGetHAxisForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wHorizontalAxis;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 165–166 */
/* addr: 0x002f7ad0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 165
 *   +0x001c -> line 166
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetHAxisForPadNumber(unsigned char ucPadNumber, short wHorizontalAxis)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wHorizontalAxis = wHorizontalAxis;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 160–161 */
/* addr: 0x002f7b00  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 160
 *   +0x0030 -> line 161
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vGetGlobalVectorForPadNumber(unsigned char ucPadNumber, MTH3D_tdstVector_* p_stGlobalVector)
{
    *p_stGlobalVector = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.stGlobalVector;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 155–156 */
/* addr: 0x002f7b40  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 155
 *   +0x0030 -> line 156
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetGlobalVectorForPadNumber(unsigned char ucPadNumber, MTH3D_tdstVector_* p_stGlobalVector)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.stGlobalVector = *p_stGlobalVector;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 133–140 */
/* addr: 0x002f7b80  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 133
 *   +0x001c -> line 134
 *   +0x0024 -> line 135
 *   +0x002c -> line 134
 *   +0x0030 -> line 135
 *   +0x0034 -> line 136
 *   +0x003c -> line 137
 *   +0x0040 -> line 136
 *   +0x0044 -> line 137
 *   +0x0048 -> line 138
 *   +0x0050 -> line 133
 *   +0x0054 -> line 138
 *   +0x0058 -> line 133
 *   +0x0064 -> line 137
 *   +0x0068 -> line 133
 *   +0x006c -> line 139
 *   +0x0070 -> line 133
 *   +0x0074 -> line 139
 *   +0x0078 -> line 134
 *   +0x007c -> line 139
 *   +0x0080 -> line 135
 *   +0x0084 -> line 136
 *   +0x0088 -> line 137
 *   +0x008c -> line 138
 *   +0x0090 -> line 140
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetAllOutputValueForPadNumber(unsigned char ucPadNumber, MTH3D_tdstVector_* p_stGlobalVector, short wHorizontalAxis, short wVerticalAxis, float xAnalogForce, float xTrueAnalogForce, float xRotationAngle, int lSector)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.stGlobalVector = *p_stGlobalVector;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wHorizontalAxis = wHorizontalAxis;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wVerticalAxis = wVerticalAxis;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xAnalogForce = xAnalogForce;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xTrueAnalogForce = xTrueAnalogForce;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xRotationAngle = xRotationAngle;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.lSector = lSector;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 127–129 */
/* addr: 0x002f7c20  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 127
 *   +0x0014 -> line 128
 *   +0x0018 -> line 127
 *   +0x001c -> line 128
 *   +0x0020 -> line 127
 *   +0x0024 -> line 128
 *   +0x0028 -> line 127
 *   +0x002c -> line 129
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetCenterForPadNumber(unsigned char ucPadNumber, signed char cJoystickXCenter, signed char cJoystickYCenter)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXcenter = cJoystickXCenter;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYcenter = cJoystickYCenter;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 121–123 */
/* addr: 0x002f7c60  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 121
 *   +0x0014 -> line 122
 *   +0x0018 -> line 121
 *   +0x001c -> line 122
 *   +0x0020 -> line 121
 *   +0x0024 -> line 122
 *   +0x0028 -> line 121
 *   +0x002c -> line 123
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetMinMaxAxeYForPadNumber(unsigned char ucPadNumber, signed char cJoystickYmin, signed char cJoystickYmax)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYmin = cJoystickYmin;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYmax = cJoystickYmax;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 115–117 */
/* addr: 0x002f7ca0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 115
 *   +0x0014 -> line 116
 *   +0x0018 -> line 115
 *   +0x001c -> line 116
 *   +0x0020 -> line 115
 *   +0x0024 -> line 116
 *   +0x0028 -> line 115
 *   +0x002c -> line 117
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetMinMaxAxeXForPadNumber(unsigned char ucPadNumber, signed char cJoystickXmin, signed char cJoystickXmax)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXmin = cJoystickXmin;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXmax = cJoystickXmax;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 109–111 */
/* addr: 0x002f7ce0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 109
 *   +0x0018 -> line 110
 *   +0x001c -> line 109
 *   +0x0020 -> line 110
 *   +0x0024 -> line 109
 *   +0x0028 -> line 110
 *   +0x002c -> line 109
 *   +0x0030 -> line 110
 *   +0x0034 -> line 111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vGetCenterForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickXCenter, signed char* p_cJoystickYCenter)
{
    *p_cJoystickXCenter = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXcenter;
    *p_cJoystickYCenter = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYcenter;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 103–105 */
/* addr: 0x002f7d20  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 103
 *   +0x0018 -> line 104
 *   +0x001c -> line 103
 *   +0x0020 -> line 104
 *   +0x0024 -> line 103
 *   +0x0028 -> line 104
 *   +0x002c -> line 103
 *   +0x0030 -> line 104
 *   +0x0034 -> line 105
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vGetMinMaxAxeYForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickYmin, signed char* p_cJoystickYmax)
{
    *p_cJoystickYmin = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYmin;
    *p_cJoystickYmax = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYmax;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 97–99 */
/* addr: 0x002f7d60  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 97
 *   +0x0018 -> line 98
 *   +0x001c -> line 97
 *   +0x0020 -> line 98
 *   +0x0024 -> line 97
 *   +0x0028 -> line 98
 *   +0x002c -> line 97
 *   +0x0030 -> line 98
 *   +0x0034 -> line 99
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vGetMinMaxAxeXForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickXmin, signed char* p_cJoystickXmax)
{
    *p_cJoystickXmin = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXmin;
    *p_cJoystickXmax = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXmax;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 87–88 */
/* addr: 0x002f7da0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 87
 *   +0x001c -> line 88
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bGetKeyboardCancelInertiaForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].bCancelKeyboardInertia;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 78–83 */
/* addr: 0x002f7dd0  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 78
 *   +0x0018 -> line 79
 *   +0x001c -> line 78
 *   +0x0020 -> line 79
 *   +0x0024 -> line 78
 *   +0x0028 -> line 79
 *   +0x002c -> line 80
 *   +0x0030 -> line 81
 *   +0x0034 -> line 80
 *   +0x0038 -> line 81
 *   +0x0040 -> line 78
 *   +0x0044 -> line 80
 *   +0x0048 -> line 79
 *   +0x004c -> line 82
 *   +0x0058 -> line 79
 *   +0x005c -> line 80
 *   +0x0064 -> line 81
 *   +0x006c -> line 82
 *   +0x0070 -> line 83
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vGetKeyboardAxesForPadNumber(unsigned char ucPadNumber, IPT_tdstEntryElement_** p_hLeft, IPT_tdstEntryElement_** p_hRight, IPT_tdstEntryElement_** p_hUp, IPT_tdstEntryElement_** p_hDown, IPT_tdstEntryElement_** p_hSpeedUp)
{
    *p_hUp = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyUp;
    *p_hDown = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyDown;
    *p_hLeft = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyLeft;
    *p_hRight = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyRight;
    *p_hSpeedUp = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeySpeedUp;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 72–74 */
/* addr: 0x002f7e50  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 72
 *   +0x0018 -> line 73
 *   +0x001c -> line 72
 *   +0x0020 -> line 73
 *   +0x0024 -> line 72
 *   +0x0028 -> line 73
 *   +0x002c -> line 72
 *   +0x0030 -> line 73
 *   +0x0034 -> line 74
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vGetJoystickAxesForPadNumber(unsigned char ucPadNumber, IPT_tdstEntryElement_** p_hJoyAxeX, IPT_tdstEntryElement_** p_hJoyAxeY)
{
    *p_hJoyAxeX = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeX;
    *p_hJoyAxeY = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeY;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 67–68 */
/* addr: 0x002f7e90  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 67
 *   +0x001c -> line 68
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetKeyboardCancelInertiaForPadNumber(unsigned char ucPadNumber, unsigned char bCancelInertia)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].bCancelKeyboardInertia = bCancelInertia;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 58–63 */
/* addr: 0x002f7ec0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 58
 *   +0x0018 -> line 59
 *   +0x001c -> line 60
 *   +0x0020 -> line 58
 *   +0x0024 -> line 59
 *   +0x0028 -> line 60
 *   +0x002c -> line 59
 *   +0x0030 -> line 58
 *   +0x0034 -> line 60
 *   +0x0038 -> line 59
 *   +0x003c -> line 61
 *   +0x0040 -> line 60
 *   +0x0044 -> line 61
 *   +0x0050 -> line 62
 *   +0x005c -> line 63
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetKeyboardAxesForPadNumber(unsigned char ucPadNumber, IPT_tdstEntryElement_* hLeft, IPT_tdstEntryElement_* hRight, IPT_tdstEntryElement_* hUp, IPT_tdstEntryElement_* hDown, IPT_tdstEntryElement_* hSpeedUp)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyUp = hUp;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyDown = hDown;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyLeft = hLeft;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyRight = hRight;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeySpeedUp = hSpeedUp;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 52–54 */
/* addr: 0x002f7f30  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 52
 *   +0x0014 -> line 53
 *   +0x0018 -> line 52
 *   +0x001c -> line 53
 *   +0x0020 -> line 52
 *   +0x0024 -> line 53
 *   +0x0028 -> line 52
 *   +0x002c -> line 54
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetJoystickAxesForPadNumber(unsigned char ucPadNumber, IPT_tdstEntryElement_* hJoyAxeX, IPT_tdstEntryElement_* hJoyAxeY)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeX = hJoyAxeX;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeY = hJoyAxeY;
}
