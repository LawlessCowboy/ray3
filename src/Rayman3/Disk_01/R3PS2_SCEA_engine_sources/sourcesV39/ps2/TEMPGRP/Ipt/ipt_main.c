/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef union tdu_KeyWordElementUnion_ tdu_KeyWordElementUnion_;
typedef struct IPT_tdstKeyWordElement_ IPT_tdstKeyWordElement_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct IPT_tdstCommandElement_ IPT_tdstCommandElement_;
typedef struct anon_0 anon_0;
typedef struct IPT_tdstHistoricElement_ IPT_tdstHistoricElement_;
typedef struct stDevice stDevice;
typedef struct IPT_tdstKeyAndPadDefine_ IPT_tdstKeyAndPadDefine_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;
typedef struct IPT_tdstDevice_ IPT_tdstDevice_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;
typedef struct IPT_tdstLineCommand_ IPT_tdstLineCommand_;
typedef struct IPT_tdstScriptValue_ IPT_tdstScriptValue_;
typedef struct IPT_tdstConvertValue_ IPT_tdstConvertValue_;

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

struct IPT_tdstEntryElement_ {
    unsigned int ulNumberOfKeyWordElement; /* +0x0 */
    IPT_tdstKeyWordElement_* d_stKeyWordElementArray; /* +0x4 */
    int p_szActionName; /* +0x8 */
    int p_szEntryName; /* +0xc */
    int lState; /* +0x10 */
    float xAnalogicValue; /* +0x14 */
    unsigned char bIsActivate; /* +0x18 */
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

struct IPT_tdstHistoricElement_ {
    unsigned char bf2State; /* +0x0 */
    unsigned char bf6DeviceType; /* +0x1 */
    unsigned char ucCounter; /* +0x2 */
    short swDeviceValue; /* +0x4 */
};

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    anon_0* m_p_stState; /* +0x8 */
    anon_0* m_p_stLastState; /* +0xc */
    short (*m_pfnRead)(stDevice*); /* +0x10 */
};

struct IPT_tdstKeyAndPadDefine_ {
    unsigned short uwBasedKey; /* +0x0 */
    int p_szFrenchKey; /* +0x4 */
    int p_szAmericanKey; /* +0x8 */
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

struct IPT_tdstLineCommand_ {
    char szAction[78]; /* +0x0 */
    char szAllParameters[78]; /* +0x4e */
    char szParameters[10][78]; /* +0x9c */
    unsigned char ucNumberOfParameters; /* +0x3a8 */
};

struct IPT_tdstScriptValue_ {
    int zsKeyName; /* +0x0 */
    short swKeyValue; /* +0x4 */
};

struct IPT_tdstConvertValue_ {
    short swAZERTYKeyValue; /* +0x0 */
    short swQWERTYKeyValue; /* +0x2 */
};

unsigned char g_ucIPTModuleId;
IPT_tdstConvertValue_ IPT_g_ConvertAZERTYtoQWERTY[1];
IPT_tdstScriptValue_ IPT_g_hScriptKeyValue[1];
IPT_tdstScriptValue_ IPT_g_hScriptPadValue[61];
unsigned int IPT_g_ulPadAndJoyButtonFlag[16];
IPT_tdstScriptValue_ IPT_g_hScriptKeyWordValue[27];
int IPT_p_fn_bIsKeyWordValid[28];
unsigned char IPT_g_bInputEnabled;
int IPT_g_p_szValidKey;
int IPT_g_c_szValidExtraKeyForChat;
IPT_tdstLineCommand_ IPT_g_hLineCommand;
IPT_tdstInput_ IPT_g_hInputStructure;
int IPT_gd_hKeyAndPadDefine;

extern stDevice INO_g_a_stDIDevice[];
extern void INO_fn_vForceFeedBackRunTime(unsigned int, stDevice*);
extern short INO_fn_wDeactivateDevice(stDevice*);
extern short INO_fn_wActivateDevice(stDevice*);
extern short INO_fn_wInvalidateHandle(stDevice**);
extern void INO_fn_vRelease(void);
extern void INO_fn_vDeleteAllPreCreatedConstantFFBEffectForAllDevices(void);
extern signed char INO_fn_cStopFFBEffectWithFade(unsigned int ulCurrentTime, stDevice* pDevice, float xFadeOutStopValue, float xFadeOutTime);
extern void INO_fn_vStopAllFFBEffectForAllDevice(void);
extern void INO_fn_vStopAllFFBEffectForDevice(unsigned int ulCurrentTime, stDevice* pDevice);
extern void INO_fn_vStopFFBEffect(unsigned int ulCurrentTime, stDevice* pDevice, signed char cEffectNumber);
extern signed char INO_fn_cCreateAndLaunchConstantFFBEffect(unsigned int, stDevice*, float, float, float, float, float, float);
extern void INO_fn_vStopPreCreatedFFBEffect(unsigned int, stDevice*, signed char);
extern void INO_fn_vStartPreCreatedFFBEffect(unsigned int, stDevice*, signed char);
extern void INO_fn_vDeleteAllPreCreatedConstantFFBEffectForDevice(stDevice*);
extern void INO_fn_vDeletePreCreatedConstantFFBEffect(stDevice*, signed char);
extern signed char INO_fn_cPreCreateConstantFFBEffect(stDevice*, float, float, float, float, float, float);
extern int D_7D35C0;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 60–243 */
/* addr: 0x002f5ee0  size: 1988 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 60
 *   +0x0004 -> line 72
 *   +0x0008 -> line 60
 *   +0x000c -> line 69
 *   +0x0010 -> line 60
 *   +0x0020 -> line 63
 *   +0x0024 -> line 60
 *   +0x003c -> line 72
 *   +0x0040 -> line 73
 *   +0x0044 -> line 69
 *   +0x0048 -> line 73
 *   +0x0050 -> line 75
 *   +0x0090 -> line 78
 *   +0x0094 -> line 80
 *   +0x0098 -> line 77
 *   +0x009c -> line 79
 *   +0x00a0 -> line 80
 *   +0x00a8 -> line 81
 *   +0x00b0 -> line 83
 *   +0x00c0 -> line 84
 *   +0x00c4 -> line 85
 *   +0x00d4 -> line 86
 *   +0x00e0 -> line 87
 *   +0x0104 -> line 88
 *   +0x0118 -> line 89
 *   +0x014c -> line 91
 *   +0x0170 -> line 94
 *   +0x0188 -> line 96
 *   +0x0190 -> line 99
 *   +0x01ac -> line 101
 *   +0x01b0 -> line 103
 *   +0x01c0 -> line 105
 *   +0x01d8 -> line 106
 *   +0x01dc -> line 105
 *   +0x01e4 -> line 106
 *   +0x0208 -> line 108
 *   +0x0214 -> line 112
 *   +0x0218 -> line 111
 *   +0x021c -> line 110
 *   +0x0220 -> line 115
 *   +0x0224 -> line 113
 *   +0x0228 -> line 115
 *   +0x022c -> line 114
 *   +0x0230 -> line 115
 *   +0x0240 -> line 116
 *   +0x0248 -> line 117
 *   +0x0258 -> line 118
 *   +0x0270 -> line 119
 *   +0x02a4 -> line 122
 *   +0x02b0 -> line 124
 *   +0x02b4 -> line 125
 *   +0x02b8 -> line 126
 *   +0x02bc -> line 127
 *   +0x02c0 -> line 125
 *   +0x02c4 -> line 128
 *   +0x02c8 -> line 130
 *   +0x02d0 -> line 131
 *   +0x02e0 -> line 132
 *   +0x02e8 -> line 133
 *   +0x0304 -> line 136
 *   +0x0310 -> line 139
 *   +0x0314 -> line 140
 *   +0x0318 -> line 142
 *   +0x031c -> line 138
 *   +0x0320 -> line 139
 *   +0x0324 -> line 141
 *   +0x0328 -> line 144
 *   +0x0330 -> line 145
 *   +0x0340 -> line 146
 *   +0x0348 -> line 147
 *   +0x0360 -> line 150
 *   +0x036c -> line 153
 *   +0x0370 -> line 154
 *   +0x0374 -> line 153
 *   +0x0378 -> line 152
 *   +0x037c -> line 155
 *   +0x0380 -> line 156
 *   +0x0384 -> line 155
 *   +0x0388 -> line 158
 *   +0x0390 -> line 159
 *   +0x03a0 -> line 160
 *   +0x03a8 -> line 161
 *   +0x03c4 -> line 165
 *   +0x03d8 -> line 167
 *   +0x0428 -> line 170
 *   +0x042c -> line 172
 *   +0x0430 -> line 171
 *   +0x0434 -> line 170
 *   +0x0438 -> line 172
 *   +0x0440 -> line 169
 *   +0x0444 -> line 172
 *   +0x0448 -> line 174
 *   +0x044c -> line 173
 *   +0x0450 -> line 175
 *   +0x0458 -> line 176
 *   +0x0498 -> line 177
 *   +0x04b0 -> line 178
 *   +0x04ec -> line 180
 *   +0x0504 -> line 184
 *   +0x0518 -> line 188
 *   +0x0520 -> line 190
 *   +0x053c -> line 192
 *   +0x0564 -> line 193
 *   +0x0570 -> line 194
 *   +0x0584 -> line 198
 *   +0x05ac -> line 201
 *   +0x05f4 -> line 205
 *   +0x060c -> line 206
 *   +0x0618 -> line 207
 *   +0x0638 -> line 211
 *   +0x063c -> line 212
 *   +0x0640 -> line 211
 *   +0x0650 -> line 212
 *   +0x0708 -> line 225
 *   +0x0724 -> line 226
 *   +0x0730 -> line 229
 *   +0x0738 -> line 230
 *   +0x0740 -> line 231
 *   +0x0748 -> line 234
 *   +0x0750 -> line 237
 *   +0x075c -> line 238
 *   +0x0768 -> line 239
 *   +0x0770 -> line 240
 *   +0x0774 -> line 241
 *   +0x0778 -> line 240
 *   +0x077c -> line 242
 *   +0x0794 -> line 243
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vActualizeHistoric(void)
{
    IPT_tdstHistoricElement_ hHistoricElement;
    unsigned short uwNewDirections;
    unsigned short uwJustReleasedDirections;
    stDevice* hPad;
    stDevice* hKeyboard;
    int lFound;
    int lPadNumber;
    int j;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1186–1207 */
/* addr: 0x002f66b0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1186
 *   +0x0014 -> line 1189
 *   +0x001c -> line 1203
 *   +0x0024 -> line 1204
 *   +0x004c -> line 1206
 *   +0x0050 -> line 1207
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vForceFeedBackRunTime(unsigned int ulCurrentTime)
{
    unsigned int i;
    if (ulCurrentTime != 0) {
        for (i = 1; i < 18; i++)
            INO_fn_vForceFeedBackRunTime(ulCurrentTime, IPT_g_hInputStructure.a_stDevice[i].hDeviceHandle);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1182–1182 */
/* addr: 0x002f6720  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1182
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vResumeAllConstantFFBEffectForAllDevices(unsigned int ulCurrentTime)
{
    INO_fn_vResumeAllFFBEffectForAllDevice();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1177–1177 */
/* addr: 0x002f6730  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1177
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vPauseAllConstantFFBEffectForAllDevices(unsigned int ulCurrentTime)
{
    INO_fn_vPauseAllFFBEffectForAllDevice();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1168–1168 */
/* addr: 0x002f6740  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
signed char IPT_fn_cStopFFBEffectWithFade(unsigned int ulCurrentTime, unsigned char ucPadNumber, signed char cEffectNumber, float xFadeOutStopValue, float xFadeOutTime)
{
    return INO_fn_cStopFFBEffectWithFade(ulCurrentTime, IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle, xFadeOutStopValue, xFadeOutTime);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1163–1163 */
/* addr: 0x002f6770  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1163
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vStopAllConstantFFBEffectForAllDevices(unsigned int ulCurrentTime)
{
    INO_fn_vStopAllFFBEffectForAllDevice();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1157–1157 */
/* addr: 0x002f6780  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1157
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vStopAllConstantFFBEffectForDevice(unsigned int ulCurrentTime, unsigned char ucPadNumber)
{
    INO_fn_vStopAllFFBEffectForDevice(ulCurrentTime, IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1150–1150 */
/* addr: 0x002f67b0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1150
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vStopFFBEffect(unsigned int ulCurrentTime, unsigned char ucPadNumber, signed char cEffectNumber)
{
    INO_fn_vStopFFBEffect(ulCurrentTime, IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle, cEffectNumber);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1138–1138 */
/* addr: 0x002f67e0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1138
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
signed char IPT_fn_cCreateAndLaunchConstantFFBEffect(unsigned int ulCurrentTime, unsigned char ucPadNumber, float xFadeInStartValue, float xFadeInTime, float xConstantValue, float xConstantTime, float xFadeOutStopValue, float xFadeOutTime)
{
    return INO_fn_cCreateAndLaunchConstantFFBEffect(ulCurrentTime, IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle, xFadeInStartValue, xFadeInTime, xConstantValue, xConstantTime, xFadeOutStopValue, xFadeOutTime);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1131–1131 */
/* addr: 0x002f6810  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vStopPreCreatedFFBEffect(unsigned int ulCurrentTime, unsigned char ucPadNumber, signed char cEffectNumber)
{
    INO_fn_vStopPreCreatedFFBEffect(ulCurrentTime, IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle, cEffectNumber);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1124–1124 */
/* addr: 0x002f6840  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1124
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vStartPreCreatedFFBEffect(unsigned int ulCurrentTime, unsigned char ucPadNumber, signed char cEffectNumber)
{
    INO_fn_vStartPreCreatedFFBEffect(ulCurrentTime, IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle, cEffectNumber);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1119–1119 */
/* addr: 0x002f6870  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1119
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vDeleteAllPreCreatedConstantFFBEffectForAllDevices(void)
{
    INO_fn_vDeleteAllPreCreatedConstantFFBEffectForAllDevices();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1114–1114 */
/* addr: 0x002f6880  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1114
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vDeleteAllPreCreatedConstantFFBEffectForDevice(unsigned char ucPadNumber)
{
    INO_fn_vDeleteAllPreCreatedConstantFFBEffectForDevice(IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1108–1108 */
/* addr: 0x002f68b0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1108
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vDeletePreCreatedConstantFFBEffect(unsigned char ucPadNumber, signed char cEffectNumber)
{
    INO_fn_vDeletePreCreatedConstantFFBEffect(IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle, cEffectNumber);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1097–1097 */
/* addr: 0x002f68e0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1097
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
signed char IPT_fn_cPreCreateConstantFFBEffect(unsigned char ucPadNumber, float xFadeInStartValue, float xFadeInTime, float xConstantValue, float xConstantTime, float xFadeOutStopValue, float xFadeOutTime)
{
    return INO_fn_cPreCreateConstantFFBEffect(IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hDeviceHandle, xFadeInStartValue, xFadeInTime, xConstantValue, xConstantTime, xFadeOutStopValue, xFadeOutTime);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 1042–1060 */
/* addr: 0x002f6910  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1042
 *   +0x0004 -> line 1047
 *   +0x0008 -> line 1042
 *   +0x000c -> line 1050
 *   +0x0010 -> line 1042
 *   +0x0014 -> line 1047
 *   +0x0020 -> line 1050
 *   +0x0040 -> line 1054
 *   +0x004c -> line 1056
 *   +0x005c -> line 1057
 *   +0x0060 -> line 1059
 *   +0x0064 -> line 1060
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_ucScanForAnASCIIKey(void)
{
    char cKey;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 960–998 */
/* addr: 0x002f6990  size: 256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 960
 *   +0x001c -> line 961
 *   +0x0024 -> line 963
 *   +0x0028 -> line 966
 *   +0x00bc -> line 990
 *   +0x00c0 -> line 992
 *   +0x00c4 -> line 990
 *   +0x00d4 -> line 992
 *   +0x00e0 -> line 994
 *   +0x00f0 -> line 995
 *   +0x00f4 -> line 997
 *   +0x00f8 -> line 998
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vSetUniqueValueForHandle(IPT_tdstEntryElement_* _hElement, unsigned int _ulValue)
{
    IPT_tdstKeyWordElement_* hNextElement;
    if (_hElement == NULL || _ulValue == 0 || _ulValue == -1)
        return;
    hNextElement = _hElement->d_stKeyWordElementArray;
    if (hNextElement->u_ElementUnion.swKeyWord == -4088 ||
        hNextElement->u_ElementUnion.swKeyWord == -4087 ||
        hNextElement->u_ElementUnion.swKeyWord == -4086 ||
        hNextElement->u_ElementUnion.swKeyWord == -4080 ||
        hNextElement->u_ElementUnion.swKeyWord == -4079 ||
        hNextElement->u_ElementUnion.swKeyWord == -4078 ||
        hNextElement->u_ElementUnion.swKeyWord == -4077 ||
        hNextElement->u_ElementUnion.swKeyWord == -4076 ||
        hNextElement->u_ElementUnion.swKeyWord == -4075 ||
        hNextElement->u_ElementUnion.swKeyWord == -4074 ||
        hNextElement->u_ElementUnion.swKeyWord == -4073 ||
        hNextElement->u_ElementUnion.swKeyWord == -4085) {
        hNextElement->u_ElementUnion.swKeyWord = ((_ulValue & 0xff000000) >> 24) - 4095;
        hNextElement++;
        if (_hElement->ulNumberOfKeyWordElement == 3) {
            hNextElement->u_ElementUnion.swPadNumber = (_ulValue & 0x00ff0000) >> 16;
            hNextElement++;
        }
        hNextElement->u_ElementUnion.swKey = _ulValue;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 914–954 */
/* addr: 0x002f6a90  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 914
 *   +0x0008 -> line 915
 *   +0x0010 -> line 917
 *   +0x0014 -> line 920
 *   +0x0090 -> line 942
 *   +0x0098 -> line 946
 *   +0x009c -> line 944
 *   +0x00a0 -> line 946
 *   +0x00a4 -> line 944
 *   +0x00a8 -> line 946
 *   +0x00b0 -> line 948
 *   +0x00b8 -> line 949
 *   +0x00bc -> line 948
 *   +0x00c0 -> line 951
 *   +0x00c8 -> line 954
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int IPT_fn_ulGetUniqueValueForHandle(IPT_tdstEntryElement_* _hElement)
{
    unsigned int ulReturn;
    IPT_tdstKeyWordElement_* hNextElement;
    if (_hElement == NULL)
        return -1;
    hNextElement = _hElement->d_stKeyWordElementArray;
    if (hNextElement->u_ElementUnion.swKeyWord != -4088 &&
        hNextElement->u_ElementUnion.swKeyWord != -4087 &&
        hNextElement->u_ElementUnion.swKeyWord != -4086 &&
        hNextElement->u_ElementUnion.swKeyWord != -4080 &&
        hNextElement->u_ElementUnion.swKeyWord != -4079 &&
        hNextElement->u_ElementUnion.swKeyWord != -4078 &&
        hNextElement->u_ElementUnion.swKeyWord != -4077 &&
        hNextElement->u_ElementUnion.swKeyWord != -4076 &&
        hNextElement->u_ElementUnion.swKeyWord != -4075 &&
        hNextElement->u_ElementUnion.swKeyWord != -4074 &&
        hNextElement->u_ElementUnion.swKeyWord != -4073 &&
        hNextElement->u_ElementUnion.swKeyWord != -4085)
        return -1;
    ulReturn = (hNextElement->u_ElementUnion.swKeyWord + 4095) << 24;
    hNextElement++;
    if (_hElement->ulNumberOfKeyWordElement == 3) {
        ulReturn |= hNextElement->u_ElementUnion.swPadNumber << 16;
        hNextElement++;
    }
    ulReturn |= hNextElement->u_ElementUnion.swKey;
    return ulReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 888–907 */
/* addr: 0x002f6b60  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 888
 *   +0x0004 -> line 900
 *   +0x0014 -> line 903
 *   +0x0098 -> line 906
 *   +0x009c -> line 907
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_szGetStringOf(IPT_tdstEntryElement_* _hElement)
{
    IPT_tdstKeyWordElement_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 878–882 */
/* addr: 0x002f6c10  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 878
 *   +0x0008 -> line 880
 *   +0x0014 -> line 881
 *   +0x0018 -> line 880
 *   +0x0030 -> line 881
 *   +0x0040 -> line 882
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vResetIPTValueToDefault(IPT_tdstEntryElement_* _hElement)
{
    unsigned long i;

    for (i = 0; i < _hElement->ulNumberOfKeyWordElement; i++)
    {
        *(float *)&_hElement->d_stKeyWordElementArray[i].u_ElementUnion =
            *(float *)&_hElement->d_stKeyWordElementArray[i].u_ElementUnionDefault;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 778–872 */
/* addr: 0x002f6c60  size: 444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 778
 *   +0x0004 -> line 832
 *   +0x0008 -> line 778
 *   +0x001c -> line 780
 *   +0x0020 -> line 778
 *   +0x003c -> line 792
 *   +0x0040 -> line 832
 *   +0x004c -> line 835
 *   +0x0050 -> line 836
 *   +0x006c -> line 837
 *   +0x0074 -> line 840
 *   +0x00e0 -> line 841
 *   +0x00ec -> line 843
 *   +0x010c -> line 844
 *   +0x011c -> line 845
 *   +0x0124 -> line 846
 *   +0x012c -> line 848
 *   +0x013c -> line 850
 *   +0x0144 -> line 851
 *   +0x0150 -> line 854
 *   +0x0160 -> line 857
 *   +0x016c -> line 860
 *   +0x0174 -> line 862
 *   +0x0178 -> line 863
 *   +0x017c -> line 866
 *   +0x0184 -> line 868
 *   +0x0188 -> line 871
 *   +0x018c -> line 872
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bChangeIPTValue(IPT_tdstEntryElement_* _hElement, unsigned char ucWhichTest)
{
    IPT_tdstKeyWordElement_* hNextElement;
    IPT_tdstEntryElement_* hExchangeEntry;
    stDevice* hPad;
    unsigned char bFlag;
    unsigned int i;
    unsigned char ucReturn;
    short swPadNumber;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 768–775 */
/* addr: 0x002f6e20  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 768
 *   +0x0014 -> line 769
 *   +0x0028 -> line 771
 *   +0x0034 -> line 772
 *   +0x0038 -> line 771
 *   +0x003c -> line 772
 *   +0x0048 -> line 773
 *   +0x005c -> line 775
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bModifyIPTAction(IPT_tdstEntryElement_* _hElementToChange, IPT_tdstEntryElement_* _hReplacingElement)
{
    int lI;
    for (lI = 0; lI < (int)_hElementToChange->ulNumberOfKeyWordElement; lI++) {
        if (_hElementToChange->d_stKeyWordElementArray[lI].u_ElementUnion.swKeyWord == -4090) {
            _hElementToChange->d_stKeyWordElementArray[lI + 1].u_ElementUnion.hEntryElement = _hReplacingElement;
            return 1;
        }
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 724–762 */
/* addr: 0x002f6e90  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 727
 *   +0x0020 -> line 724
 *   +0x0024 -> line 727
 *   +0x003c -> line 730
 *   +0x0048 -> line 745
 *   +0x0050 -> line 747
 *   +0x0054 -> line 748
 *   +0x0060 -> line 751
 *   +0x006c -> line 754
 *   +0x0078 -> line 755
 *   +0x007c -> line 759
 *   +0x0080 -> line 755
 *   +0x0084 -> line 760
 *   +0x0094 -> line 762
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
IPT_tdstEntryElement_* IPT_fn_hSearchElementInOptionWithKeyWord(short _swEntryType, short swPadNumber, short _swKeyValue)
{
    IPT_tdstKeyWordElement_* hNextElement;
    IPT_tdstEntryElement_* hAction;
    IPT_tdstEntryElement_* hEntryElement;
    unsigned int i;
    hAction = NULL;
    for (i = 0; i < IPT_g_hInputStructure.ulNumberOfEntryElement; i++) {
        hEntryElement = &IPT_g_hInputStructure.d_stEntryElementArray[i];
        if (hEntryElement->p_szEntryName) {
            if (_swEntryType == -4074) {
                hNextElement = hEntryElement->d_stKeyWordElementArray;
                if (hNextElement->u_ElementUnion.swKeyWord == -4074) {
                    hNextElement++;
                    if (hNextElement->u_ElementUnion.swPadNumber == swPadNumber) {
                        hNextElement++;
                        if (hNextElement->u_ElementUnion.swKey == _swKeyValue)
                            hAction = hEntryElement;
                    }
                }
            }
        }
    }
    return hAction;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 687–705 */
/* addr: 0x002f6f30  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 687
 *   +0x0014 -> line 689
 *   +0x0018 -> line 691
 *   +0x0034 -> line 693
 *   +0x003c -> line 695
 *   +0x004c -> line 700
 *   +0x0054 -> line 703
 *   +0x0058 -> line 704
 *   +0x0068 -> line 705
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vActiveJoystickControl(void)
{
    unsigned int i;
    for (i = 2; i < 18; i++) {
        if (IPT_g_hInputStructure.a_stDevice[i].ucValideAndActiveDevice == 1) {
            IPT_g_hInputStructure.a_stDevice[i].ucValideAndActiveDevice = 2;
            if (INO_fn_wActivateDevice(IPT_g_hInputStructure.a_stDevice[i].hDeviceHandle))
                IPT_g_hInputStructure.ucOnePadActivate = 2;
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 673–684 */
/* addr: 0x002f6fb0  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 673
 *   +0x0014 -> line 676
 *   +0x0018 -> line 678
 *   +0x0034 -> line 680
 *   +0x003c -> line 681
 *   +0x0044 -> line 682
 *   +0x0048 -> line 683
 *   +0x0058 -> line 684
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vDesactiveJoystickAndPadControl(void)
{
    unsigned int i;
    for (i = 2; i < 18; i++) {
        if (IPT_g_hInputStructure.a_stDevice[i].ucValideAndActiveDevice == 2) {
            IPT_g_hInputStructure.a_stDevice[i].ucValideAndActiveDevice = 1;
            INO_fn_wDeactivateDevice(IPT_g_hInputStructure.a_stDevice[i].hDeviceHandle);
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 562–567 */
/* addr: 0x002f7020  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 562
 *   +0x0008 -> line 564
 *   +0x000c -> line 565
 *   +0x0014 -> line 567
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vDesactivateEntryElement(IPT_tdstEntryElement_* _hEntryElement)
{
    if (_hEntryElement != NULL)
    {
        _hEntryElement->bIsActivate = 0;
        _hEntryElement->lState = -2;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 553–558 */
/* addr: 0x002f7040  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 553
 *   +0x0008 -> line 556
 *   +0x000c -> line 555
 *   +0x0010 -> line 556
 *   +0x0014 -> line 558
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vActivateEntryElement(IPT_tdstEntryElement_* _hEntryElement)
{
    if (_hEntryElement != NULL)
    {
        _hEntryElement->bIsActivate = 1;
        _hEntryElement->lState = -2;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 534–538 */
/* addr: 0x002f7060  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 534
 *   +0x0018 -> line 536
 *   +0x0028 -> line 537
 *   +0x0044 -> line 538
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vActivateAllEntryElements(void)
{
    IPT_tdstEntryElement_* hEntryElement;
    unsigned int ulI;
    for (ulI = 0, hEntryElement = IPT_g_hInputStructure.d_stEntryElementArray;
         ulI < IPT_g_hInputStructure.ulNumberOfEntryElement;
         ulI++, hEntryElement++) {
        if (hEntryElement != NULL) { hEntryElement->bIsActivate = 1; hEntryElement->lState = -2; }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 467–467 */
/* addr: 0x002f70b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 467
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsEnabled(void)
{
    return IPT_g_bInputEnabled;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 433–448 */
/* addr: 0x002f70c0  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 433
 *   +0x0010 -> line 437
 *   +0x0014 -> line 435
 *   +0x001c -> line 436
 *   +0x0020 -> line 435
 *   +0x0024 -> line 436
 *   +0x0034 -> line 437
 *   +0x004c -> line 438
 *   +0x0054 -> line 440
 *   +0x0150 -> line 441
 *   +0x0154 -> line 440
 *   +0x0158 -> line 441
 *   +0x015c -> line 440
 *   +0x0170 -> line 441
 *   +0x0178 -> line 448
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vResetInputEntry(void)
{
    unsigned int i;
    for (i = 0; i < IPT_g_hInputStructure.ulNumberOfEntryElement; i++) {
        IPT_g_hInputStructure.d_stEntryElementArray[i].lState = -2;
        IPT_g_hInputStructure.d_stEntryElementArray[i].xAnalogicValue = 0.0f;
    }
    for (i = 0; i < 18; i++) {
        IPT_g_hInputStructure.a_stDevice[i].stPadReadingOutput.wHorizontalAxis = 0; IPT_g_hInputStructure.a_stDevice[i].stPadReadingOutput.wVerticalAxis = 0; IPT_g_hInputStructure.a_stDevice[i].stPadReadingOutput.xAnalogForce = 0.0f; IPT_g_hInputStructure.a_stDevice[i].stPadReadingOutput.xRotationAngle = 0.0f; IPT_g_hInputStructure.a_stDevice[i].stPadReadingOutput.xTrueAnalogForce = 0.0f; IPT_g_hInputStructure.a_stDevice[i].stPadReadingOutput.lSector = 0;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 382–405 */
/* addr: 0x002f7240  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 382
 *   +0x000c -> line 385
 *   +0x0014 -> line 387
 *   +0x001c -> line 388
 *   +0x0040 -> line 390
 *   +0x0048 -> line 405
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma optimize_for_size off
void IPT_fn_vDesinitInput(void)
{
    int i;
    INO_fn_vDeleteAllPreCreatedConstantFFBEffectForAllDevices();
    for (i = 0; i < 18; i++)
        INO_fn_wInvalidateHandle(&IPT_g_hInputStructure.a_stDevice[i].hDeviceHandle);
    INO_fn_vRelease();
}
#pragma optimize_for_size reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_main.c lines 60–178 */
/* addr: 0x002f72a0  size: 304 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 60
 *   +0x001c -> line 65
 *   +0x0024 -> line 70
 *   +0x0028 -> line 68
 *   +0x002c -> line 70
 *   +0x0030 -> line 68
 *   +0x0034 -> line 70
 *   +0x0050 -> line 81
 *   +0x0054 -> line 70
 *   +0x0058 -> line 81
 *   +0x0068 -> line 84
 *   +0x007c -> line 87
 *   +0x0090 -> line 91
 *   +0x00a4 -> line 110
 *   +0x00a8 -> line 113
 *   +0x00c0 -> line 166
 *   +0x00c8 -> line 167
 *   +0x00cc -> line 166
 *   +0x00d4 -> line 169
 *   +0x00e8 -> line 170
 *   +0x00f0 -> line 173
 *   +0x00f4 -> line 172
 *   +0x0100 -> line 173
 *   +0x0104 -> line 174
 *   +0x0108 -> line 175
 *   +0x0118 -> line 178
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPT_fn_vInitInput(short _sHistoricSize, void* hInstance, int* hWindow)
{
    stDevice* hDev;
    int i;
    /* TODO: decompile from asm/... */
}
