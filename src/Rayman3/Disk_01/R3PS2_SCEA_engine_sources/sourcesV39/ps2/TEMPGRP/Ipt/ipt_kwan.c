/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct stDevice stDevice;
typedef union tdu_KeyWordElementUnion_ tdu_KeyWordElementUnion_;
typedef struct IPT_tdstKeyWordElement_ IPT_tdstKeyWordElement_;
typedef struct anon_0 anon_0;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;
typedef struct IPT_tdstDevice_ IPT_tdstDevice_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;
typedef struct IPT_tdstHistoricElement_ IPT_tdstHistoricElement_;
typedef struct IPT_tdstCommandElement_ IPT_tdstCommandElement_;

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
    anon_0* m_p_stState; /* +0x8 */
    anon_0* m_p_stLastState; /* +0xc */
    short (*m_pfnRead)(stDevice*); /* +0x10 */
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

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
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

struct IPT_tdstEntryElement_ {
    unsigned int ulNumberOfKeyWordElement; /* +0x0 */
    IPT_tdstKeyWordElement_* d_stKeyWordElementArray; /* +0x4 */
    int p_szActionName; /* +0x8 */
    int p_szEntryName; /* +0xc */
    int lState; /* +0x10 */
    float xAnalogicValue; /* +0x14 */
    unsigned char bIsActivate; /* +0x18 */
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

struct IPT_tdstCommandElement_ {
    int p_szCommandName; /* +0x0 */
    int p_szCommand; /* +0x4 */
    int p_szHelpLine; /* +0x8 */
    unsigned char ucNumberOfParamMin; /* +0xc */
    unsigned char ucNumberOfParamMax; /* +0xd */
    unsigned char ucState; /* +0xe */
};

ISI_tdstColor_ IPO_g_tdstBlack;
float IPT_g_fNormCorrectionTable[46];
unsigned int IPT_g_ulSequenceAnalyseNumber;
int IPT_g_hNextParameter;
int g_h_ActualEntryInput;
IPT_tdstInput_ IPT_g_hInputStructure;
unsigned char g_ucIPTModuleId;
int IPT_p_fn_bIsKeyWordValid[28];
unsigned int IPT_g_ulPadAndJoyButtonFlag[16];

unsigned int INO_fn_ulJoyPreviousButtons(stDevice* _hDev);
void Erm_fn_ClearLastError(unsigned int ulChannelId);
void Erm_fn_v_UpdateLastError(unsigned short uwStartOfWarningsId, unsigned char ucModuleId, unsigned int ulChannelId, unsigned short uwErrNum, int lDebugInfo, unsigned char ucOpenInfoWindow, unsigned char ucStopForDebug, char* szPersonalMsg);

static inline unsigned char IPT_fn_bIsNextKeyWordValid(IPT_tdstKeyWordElement_* hKeyWordElement)
{
    unsigned char ucReturn = 0;
    if (((unsigned char (**)(void))IPT_p_fn_bIsKeyWordValid)[hKeyWordElement->u_ElementUnion.swKeyWord & 0xFF])
    {
        ucReturn = ((unsigned char (**)(void))IPT_p_fn_bIsKeyWordValid)[hKeyWordElement->u_ElementUnion.swKeyWord & 0xFF]();
    }
    else
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(14, g_ucIPTModuleId, 0, 12, -1, 255, 255, NULL);
    }
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 92–103 */
/* addr: 0x002f31d0  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 92
 *   +0x0020 -> line 98
 *   +0x0060 -> line 93
 *   +0x0070 -> line 98
 *   +0x0074 -> line 99
 *   +0x0078 -> line 98
 *   +0x0080 -> line 99
 *   +0x0090 -> line 101
 *   +0x0094 -> line 103
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void IPO_fn_vLevelDesinitRLITables(void)
{
    int lI;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1143–1158 */
/* addr: 0x002f3270  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1143
 *   +0x0004 -> line 1147
 *   +0x0008 -> line 1143
 *   +0x000c -> line 1144
 *   +0x0010 -> line 1147
 *   +0x0018 -> line 1144
 *   +0x001c -> line 1145
 *   +0x0020 -> line 1147
 *   +0x0030 -> line 1145
 *   +0x0034 -> line 1147
 *   +0x00c0 -> line 1154
 *   +0x00c4 -> line 1147
 *   +0x00c8 -> line 1155
 *   +0x00cc -> line 1154
 *   +0x00d0 -> line 1155
 *   +0x00d4 -> line 1154
 *   +0x00d8 -> line 1158
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_SequencePadEnd(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn = 0;
    unsigned int ulPadNumber;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    ulPadNumber = (unsigned int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    IPT_g_hNextParameter = (int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter + 1);
    if (IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].bf6DeviceType == ulPadNumber + 2)
    {
        if (IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].bf2State == 1)
        {
            if (IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].swDeviceValue ==
                (short)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord)
            {
                if (((unsigned char *)&IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber])[2 + ulPadNumber] >=
                    ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput &&
                    ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput >=
                    ((unsigned char *)&IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber])[2 + ulPadNumber])
                {
                    ucReturn = 1;
                }
            }
        }
    }
    IPT_g_hNextParameter += 12;
    IPT_g_ulSequenceAnalyseNumber++;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1121–1136 */
/* addr: 0x002f3350  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1121
 *   +0x0004 -> line 1125
 *   +0x0008 -> line 1121
 *   +0x000c -> line 1122
 *   +0x0010 -> line 1125
 *   +0x0018 -> line 1122
 *   +0x001c -> line 1123
 *   +0x0020 -> line 1125
 *   +0x0030 -> line 1123
 *   +0x0034 -> line 1125
 *   +0x00c8 -> line 1132
 *   +0x00cc -> line 1125
 *   +0x00d0 -> line 1133
 *   +0x00d4 -> line 1132
 *   +0x00d8 -> line 1133
 *   +0x00dc -> line 1132
 *   +0x00e0 -> line 1136
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_SequencePad(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn = 0;
    unsigned int ulPadNumber;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    ulPadNumber = (unsigned int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    IPT_g_hNextParameter = (int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter + 1);
    if (IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].bf6DeviceType == ulPadNumber + 2)
    {
        if (IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].bf2State == 0)
        {
            if (IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].swDeviceValue ==
                (short)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord)
            {
                if (((unsigned char *)&IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber])[2 + ulPadNumber] >=
                    ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput &&
                    ((unsigned char *)&IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber])[2 + ulPadNumber] >
                    ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)
                {
                    ucReturn = 1;
                }
            }
        }
    }
    IPT_g_hNextParameter += 12;
    IPT_g_ulSequenceAnalyseNumber++;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1062–1076 */
/* addr: 0x002f3440  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1062
 *   +0x0018 -> line 1068
 *   +0x001c -> line 1062
 *   +0x0020 -> line 1069
 *   +0x0024 -> line 1066
 *   +0x0028 -> line 1067
 *   +0x002c -> line 1069
 *   +0x0034 -> line 1071
 *   +0x00c8 -> line 1073
 *   +0x00e8 -> line 1075
 *   +0x00ec -> line 1076
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_Sequence(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn;
    unsigned int i;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 2);
    IPT_g_ulSequenceAnalyseNumber = 0;
    ucReturn = 1;
    i = 0;
    while (ucReturn && i < ((IPT_tdstKeyWordElement_*)_hKeyWordElement + 1)->u_ElementUnion.ulNumberOfSequence)
    {
        ucReturn = ucReturn & (IPT_fn_bIsNextKeyWordValid((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) == 1 ? 1 : 0);
        i++;
    }
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1049–1057 */
/* addr: 0x002f3550  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1049
 *   +0x0004 -> line 1052
 *   +0x0008 -> line 1049
 *   +0x000c -> line 1052
 *   +0x0010 -> line 1053
 *   +0x0038 -> line 1054
 *   +0x003c -> line 1053
 *   +0x0040 -> line 1054
 *   +0x0048 -> line 1057
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_ActionInvalidated(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn;
    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    if ((unsigned char)IPT_fn_bIsInvalidated(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.hEntryElement) == 1)
        ucReturn = 1;
    else
        ucReturn = 0;
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1036–1044 */
/* addr: 0x002f35b0  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1036
 *   +0x0004 -> line 1039
 *   +0x0008 -> line 1036
 *   +0x000c -> line 1039
 *   +0x0010 -> line 1040
 *   +0x0038 -> line 1041
 *   +0x003c -> line 1040
 *   +0x0040 -> line 1041
 *   +0x0048 -> line 1044
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_ActionJustInvalidated(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn;
    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    if ((unsigned char)IPT_fn_bIsJustInvalidated(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.hEntryElement) == 1)
        ucReturn = 1;
    else
        ucReturn = 0;
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1023–1031 */
/* addr: 0x002f3610  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1023
 *   +0x0004 -> line 1026
 *   +0x0008 -> line 1023
 *   +0x000c -> line 1026
 *   +0x0010 -> line 1027
 *   +0x0038 -> line 1028
 *   +0x003c -> line 1027
 *   +0x0040 -> line 1028
 *   +0x0048 -> line 1031
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_ActionValidated(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn;
    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    if ((unsigned char)IPT_fn_bIsValidated(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.hEntryElement) == 1)
        ucReturn = 1;
    else
        ucReturn = 0;
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 1010–1018 */
/* addr: 0x002f3670  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1010
 *   +0x0004 -> line 1013
 *   +0x0008 -> line 1010
 *   +0x000c -> line 1013
 *   +0x0010 -> line 1014
 *   +0x0038 -> line 1015
 *   +0x003c -> line 1014
 *   +0x0040 -> line 1015
 *   +0x0048 -> line 1018
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_ActionJustValidated(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn;
    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    if ((unsigned char)IPT_fn_bIsJustValidated(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.hEntryElement) == 1)
        ucReturn = 1;
    else
        ucReturn = 0;
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 958–1005 */
/* addr: 0x002f36d0  size: 736 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 958
 *   +0x0004 -> line 960
 *   +0x0008 -> line 958
 *   +0x000c -> line 962
 *   +0x0010 -> line 960
 *   +0x0018 -> line 962
 *   +0x0020 -> line 960
 *   +0x0028 -> line 961
 *   +0x002c -> line 960
 *   +0x0038 -> line 962
 *   +0x003c -> line 960
 *   +0x0040 -> line 961
 *   +0x0044 -> line 962
 *   +0x0050 -> line 964
 *   +0x0088 -> line 967
 *   +0x00e4 -> line 971
 *   +0x00ec -> line 973
 *   +0x0148 -> line 977
 *   +0x0150 -> line 979
 *   +0x01c0 -> line 983
 *   +0x01c8 -> line 985
 *   +0x0238 -> line 989
 *   +0x0240 -> line 991
 *   +0x0258 -> line 993
 *   +0x02d0 -> line 1002
 *   +0x02d8 -> line 1005
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 901–948 */
/* addr: 0x002f39b0  size: 736 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 901
 *   +0x0004 -> line 903
 *   +0x0008 -> line 901
 *   +0x000c -> line 905
 *   +0x0010 -> line 903
 *   +0x0018 -> line 905
 *   +0x0020 -> line 903
 *   +0x0028 -> line 904
 *   +0x002c -> line 903
 *   +0x0038 -> line 905
 *   +0x003c -> line 903
 *   +0x0040 -> line 904
 *   +0x0044 -> line 905
 *   +0x0050 -> line 907
 *   +0x0088 -> line 910
 *   +0x00e4 -> line 914
 *   +0x00ec -> line 916
 *   +0x0148 -> line 920
 *   +0x0150 -> line 922
 *   +0x01c0 -> line 926
 *   +0x01c8 -> line 928
 *   +0x0238 -> line 932
 *   +0x0240 -> line 934
 *   +0x0258 -> line 936
 *   +0x02d0 -> line 945
 *   +0x02d8 -> line 948
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 855–891 */
/* addr: 0x002f3c90  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 855
 *   +0x0004 -> line 863
 *   +0x0008 -> line 855
 *   +0x000c -> line 865
 *   +0x0010 -> line 855
 *   +0x0014 -> line 861
 *   +0x0018 -> line 855
 *   +0x001c -> line 863
 *   +0x0020 -> line 855
 *   +0x0024 -> line 865
 *   +0x0028 -> line 855
 *   +0x002c -> line 861
 *   +0x0030 -> line 863
 *   +0x0034 -> line 865
 *   +0x0038 -> line 863
 *   +0x0040 -> line 864
 *   +0x0044 -> line 863
 *   +0x0050 -> line 865
 *   +0x0054 -> line 863
 *   +0x0058 -> line 864
 *   +0x005c -> line 865
 *   +0x0068 -> line 867
 *   +0x007c -> line 868
 *   +0x0080 -> line 867
 *   +0x0090 -> line 868
 *   +0x00c8 -> line 871
 *   +0x00d0 -> line 872
 *   +0x00d8 -> line 874
 *   +0x00e0 -> line 875
 *   +0x00e8 -> line 877
 *   +0x00f4 -> line 878
 *   +0x00fc -> line 880
 *   +0x0108 -> line 881
 *   +0x0110 -> line 883
 *   +0x0120 -> line 884
 *   +0x017c -> line 888
 *   +0x0180 -> line 890
 *   +0x0184 -> line 888
 *   +0x018c -> line 891
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadJustReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwJustReleasedDirections;
    stDevice* hPad;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 814–850 */
/* addr: 0x002f3e40  size: 444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 814
 *   +0x0004 -> line 822
 *   +0x0008 -> line 814
 *   +0x000c -> line 824
 *   +0x0010 -> line 814
 *   +0x0014 -> line 820
 *   +0x0018 -> line 814
 *   +0x001c -> line 822
 *   +0x0020 -> line 814
 *   +0x0024 -> line 824
 *   +0x0028 -> line 814
 *   +0x002c -> line 820
 *   +0x0030 -> line 822
 *   +0x0034 -> line 824
 *   +0x0038 -> line 822
 *   +0x0040 -> line 823
 *   +0x0044 -> line 822
 *   +0x0050 -> line 824
 *   +0x0054 -> line 822
 *   +0x0058 -> line 823
 *   +0x005c -> line 824
 *   +0x0068 -> line 826
 *   +0x0078 -> line 827
 *   +0x007c -> line 826
 *   +0x008c -> line 827
 *   +0x0090 -> line 826
 *   +0x0094 -> line 827
 *   +0x00c8 -> line 830
 *   +0x00d4 -> line 831
 *   +0x00dc -> line 833
 *   +0x00e8 -> line 834
 *   +0x00f0 -> line 836
 *   +0x0100 -> line 837
 *   +0x0108 -> line 839
 *   +0x0118 -> line 840
 *   +0x0120 -> line 842
 *   +0x0138 -> line 843
 *   +0x0190 -> line 847
 *   +0x0194 -> line 849
 *   +0x0198 -> line 847
 *   +0x01a0 -> line 850
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadJustPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwNewDirections;
    stDevice* hPad;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 791–809 */
/* addr: 0x002f4000  size: 260 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 791
 *   +0x0004 -> line 793
 *   +0x0008 -> line 791
 *   +0x000c -> line 795
 *   +0x0010 -> line 793
 *   +0x0018 -> line 795
 *   +0x0020 -> line 793
 *   +0x0028 -> line 794
 *   +0x002c -> line 793
 *   +0x0038 -> line 795
 *   +0x003c -> line 793
 *   +0x0040 -> line 794
 *   +0x0044 -> line 795
 *   +0x0050 -> line 797
 *   +0x006c -> line 799
 *   +0x00f4 -> line 806
 *   +0x00fc -> line 809
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn = 0;
    unsigned char ucValue;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter + 1);
    if (IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].ucValideAndActiveDevice == 2)
    {
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        if (swKeyWord >= 0x1C && swKeyWord <= 0x2B)
        {
            ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 28];
            ucReturn = ((ulMask & *(unsigned int*)((char*)hPad->m_p_stState + 4)) == ulMask);
            if (!ucReturn)
            {
                ucValue = IPT_g_hInputStructure.a_stDevice[swKeyWord].ucPadAndJoyCounter[swKeyWord];
                if (ucValue >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput &&
                    ucValue > ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)
                {
                    ucReturn = 0;
                }
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 763–781 */
/* addr: 0x002f4110  size: 260 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 763
 *   +0x0004 -> line 765
 *   +0x0008 -> line 763
 *   +0x000c -> line 767
 *   +0x0010 -> line 765
 *   +0x0018 -> line 767
 *   +0x0020 -> line 765
 *   +0x0028 -> line 766
 *   +0x002c -> line 765
 *   +0x0038 -> line 767
 *   +0x003c -> line 765
 *   +0x0040 -> line 766
 *   +0x0044 -> line 767
 *   +0x0050 -> line 769
 *   +0x006c -> line 771
 *   +0x00f4 -> line 778
 *   +0x00fc -> line 781
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn = 0;
    unsigned char ucValue;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter + 1);
    if (IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].ucValideAndActiveDevice == 2)
    {
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        if (swKeyWord >= 0x1C && swKeyWord <= 0x2B)
        {
            ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 28];
            ucValue = IPT_g_hInputStructure.a_stDevice[swKeyWord].ucPadAndJoyCounter[swKeyWord];
            ucReturn = ((ulMask & *(unsigned int*)((char*)hPad->m_p_stState + 4)) == ulMask) &&
                       (ucValue >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput &&
                        ucValue <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput);
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 737–755 */
/* addr: 0x002f4220  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 737
 *   +0x0004 -> line 742
 *   +0x0008 -> line 737
 *   +0x000c -> line 744
 *   +0x0010 -> line 737
 *   +0x0014 -> line 746
 *   +0x0018 -> line 742
 *   +0x001c -> line 744
 *   +0x0024 -> line 746
 *   +0x002c -> line 744
 *   +0x0034 -> line 745
 *   +0x0038 -> line 744
 *   +0x0044 -> line 746
 *   +0x0048 -> line 744
 *   +0x004c -> line 745
 *   +0x0050 -> line 746
 *   +0x005c -> line 748
 *   +0x0078 -> line 749
 *   +0x00dc -> line 752
 *   +0x00e8 -> line 755
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickJustReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn = 0;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter + 1);
    if (IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].ucValideAndActiveDevice == 2)
    {
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        if (swKeyWord >= 0x1C && swKeyWord <= 0x2B)
        {
            ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 28];
            if (!((ulMask & *(unsigned int*)((char*)hPad->m_p_stState + 4)) == ulMask))
            {
                if ((ulMask & INO_fn_ulJoyPreviousButtons(hPad)) == ulMask)
                {
                    ucReturn = 1;
                }
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 716–734 */
/* addr: 0x002f4320  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 716
 *   +0x0004 -> line 721
 *   +0x0008 -> line 716
 *   +0x000c -> line 723
 *   +0x0010 -> line 716
 *   +0x0014 -> line 725
 *   +0x0018 -> line 721
 *   +0x001c -> line 723
 *   +0x0024 -> line 725
 *   +0x002c -> line 723
 *   +0x0034 -> line 724
 *   +0x0038 -> line 723
 *   +0x0044 -> line 725
 *   +0x0048 -> line 723
 *   +0x004c -> line 724
 *   +0x0050 -> line 725
 *   +0x005c -> line 727
 *   +0x007c -> line 728
 *   +0x00d8 -> line 731
 *   +0x00e4 -> line 734
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickJustPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn = 0;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter + 1);
    if (IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].ucValideAndActiveDevice == 2)
    {
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        if (swKeyWord >= 0x1C && swKeyWord <= 0x2B)
        {
            ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 28];
            ucReturn = ((ulMask & *(unsigned int*)((char*)hPad->m_p_stState + 4)) == ulMask) &&
                       ((ulMask & INO_fn_ulJoyPreviousButtons(hPad)) != ulMask);
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 626–713 */
/* addr: 0x002f4420  size: 768 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 626
 *   +0x0004 -> line 636
 *   +0x0008 -> line 626
 *   +0x000c -> line 638
 *   +0x0010 -> line 626
 *   +0x0014 -> line 647
 *   +0x0018 -> line 626
 *   +0x001c -> line 638
 *   +0x0020 -> line 626
 *   +0x0024 -> line 647
 *   +0x0028 -> line 626
 *   +0x002c -> line 647
 *   +0x0030 -> line 636
 *   +0x0034 -> line 631
 *   +0x0038 -> line 638
 *   +0x003c -> line 627
 *   +0x0040 -> line 638
 *   +0x0044 -> line 639
 *   +0x0048 -> line 638
 *   +0x005c -> line 647
 *   +0x0060 -> line 639
 *   +0x0064 -> line 640
 *   +0x006c -> line 641
 *   +0x0074 -> line 642
 *   +0x007c -> line 643
 *   +0x0084 -> line 644
 *   +0x008c -> line 645
 *   +0x0094 -> line 646
 *   +0x0098 -> line 647
 *   +0x009c -> line 646
 *   +0x00a0 -> line 647
 *   +0x00a8 -> line 649
 *   +0x00d0 -> line 652
 *   +0x00dc -> line 654
 *   +0x00e8 -> line 656
 *   +0x00f4 -> line 658
 *   +0x0100 -> line 660
 *   +0x010c -> line 662
 *   +0x0118 -> line 673
 *   +0x0144 -> line 676
 *   +0x0150 -> line 678
 *   +0x015c -> line 680
 *   +0x0168 -> line 682
 *   +0x0174 -> line 684
 *   +0x0180 -> line 686
 *   +0x018c -> line 697
 *   +0x01a0 -> line 698
 *   +0x01dc -> line 702
 *   +0x01e0 -> line 698
 *   +0x01e8 -> line 702
 *   +0x01f0 -> line 698
 *   +0x01f4 -> line 702
 *   +0x020c -> line 703
 *   +0x0210 -> line 702
 *   +0x0228 -> line 703
 *   +0x0288 -> line 705
 *   +0x02c4 -> line 706
 *   +0x02d0 -> line 707
 *   +0x02d8 -> line 710
 *   +0x02e4 -> line 713
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickCorrectedNormValue(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* param0;
    float fAngle;
    float fNorm;
    float fSecondPosition;
    float fFirstPosition;
    int lMaxValue;
    int lMinValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 540–621 */
/* addr: 0x002f4720  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 540
 *   +0x0004 -> line 549
 *   +0x0008 -> line 540
 *   +0x000c -> line 551
 *   +0x0010 -> line 540
 *   +0x0014 -> line 560
 *   +0x0018 -> line 540
 *   +0x001c -> line 545
 *   +0x0020 -> line 549
 *   +0x0024 -> line 551
 *   +0x002c -> line 560
 *   +0x0034 -> line 541
 *   +0x0038 -> line 551
 *   +0x003c -> line 552
 *   +0x0040 -> line 551
 *   +0x0054 -> line 560
 *   +0x0058 -> line 552
 *   +0x005c -> line 553
 *   +0x0064 -> line 554
 *   +0x006c -> line 555
 *   +0x0074 -> line 556
 *   +0x007c -> line 557
 *   +0x0084 -> line 558
 *   +0x008c -> line 559
 *   +0x0090 -> line 560
 *   +0x0094 -> line 559
 *   +0x0098 -> line 560
 *   +0x00a0 -> line 562
 *   +0x00c8 -> line 565
 *   +0x00d4 -> line 567
 *   +0x00e0 -> line 569
 *   +0x00ec -> line 571
 *   +0x00f8 -> line 573
 *   +0x0104 -> line 575
 *   +0x0110 -> line 587
 *   +0x013c -> line 590
 *   +0x0148 -> line 592
 *   +0x0154 -> line 594
 *   +0x0160 -> line 596
 *   +0x016c -> line 598
 *   +0x0178 -> line 600
 *   +0x0184 -> line 612
 *   +0x01a0 -> line 613
 *   +0x01dc -> line 614
 *   +0x01e8 -> line 615
 *   +0x01f0 -> line 618
 *   +0x01fc -> line 621
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickTrueNormValue(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* param0;
    float fNorm;
    float fSecondPosition;
    float fFirstPosition;
    int lMaxValue;
    int lMinValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 456–537 */
/* addr: 0x002f4930  size: 632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 456
 *   +0x0004 -> line 465
 *   +0x0008 -> line 456
 *   +0x000c -> line 467
 *   +0x0010 -> line 456
 *   +0x0014 -> line 476
 *   +0x0018 -> line 456
 *   +0x001c -> line 461
 *   +0x0020 -> line 465
 *   +0x0024 -> line 467
 *   +0x002c -> line 476
 *   +0x0034 -> line 457
 *   +0x0038 -> line 467
 *   +0x003c -> line 468
 *   +0x0040 -> line 467
 *   +0x0054 -> line 476
 *   +0x0058 -> line 468
 *   +0x005c -> line 469
 *   +0x0064 -> line 470
 *   +0x006c -> line 471
 *   +0x0074 -> line 472
 *   +0x007c -> line 473
 *   +0x0084 -> line 474
 *   +0x008c -> line 475
 *   +0x0090 -> line 476
 *   +0x0094 -> line 475
 *   +0x0098 -> line 476
 *   +0x00a0 -> line 478
 *   +0x00c8 -> line 481
 *   +0x00d4 -> line 483
 *   +0x00e0 -> line 485
 *   +0x00ec -> line 487
 *   +0x00f8 -> line 489
 *   +0x0104 -> line 491
 *   +0x0110 -> line 501
 *   +0x013c -> line 504
 *   +0x0148 -> line 506
 *   +0x0154 -> line 508
 *   +0x0160 -> line 510
 *   +0x016c -> line 512
 *   +0x0178 -> line 514
 *   +0x0184 -> line 525
 *   +0x01e0 -> line 526
 *   +0x01ec -> line 528
 *   +0x0208 -> line 529
 *   +0x0244 -> line 530
 *   +0x0250 -> line 531
 *   +0x0258 -> line 534
 *   +0x0264 -> line 537
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickAngularValue(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* param0;
    float fAngle;
    float fSecondPosition;
    float fFirstPosition;
    int lMaxValue;
    int lMinValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 380–453 */
/* addr: 0x002f4bb0  size: 348 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 383
 *   +0x0004 -> line 385
 *   +0x0008 -> line 383
 *   +0x000c -> line 392
 *   +0x0010 -> line 385
 *   +0x0018 -> line 392
 *   +0x0020 -> line 380
 *   +0x0024 -> line 385
 *   +0x002c -> line 386
 *   +0x0030 -> line 385
 *   +0x003c -> line 392
 *   +0x0040 -> line 385
 *   +0x0044 -> line 386
 *   +0x0048 -> line 387
 *   +0x0050 -> line 388
 *   +0x0058 -> line 389
 *   +0x0060 -> line 390
 *   +0x0068 -> line 391
 *   +0x006c -> line 392
 *   +0x0070 -> line 391
 *   +0x0074 -> line 392
 *   +0x007c -> line 394
 *   +0x00a4 -> line 397
 *   +0x00a8 -> line 398
 *   +0x00b0 -> line 400
 *   +0x00b4 -> line 401
 *   +0x00bc -> line 403
 *   +0x00c0 -> line 404
 *   +0x00c8 -> line 406
 *   +0x00cc -> line 407
 *   +0x00d4 -> line 409
 *   +0x00d8 -> line 410
 *   +0x00e0 -> line 412
 *   +0x00ec -> line 427
 *   +0x0138 -> line 428
 *   +0x0144 -> line 430
 *   +0x014c -> line 450
 *   +0x0154 -> line 453
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_JoystickAxeValue(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    float fPosition;
    int lMaxValue;
    int lMinValue;
    unsigned int ulActionNumber;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 323–371 */
/* addr: 0x002f4d10  size: 728 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 323
 *   +0x0004 -> line 325
 *   +0x0008 -> line 323
 *   +0x000c -> line 327
 *   +0x0010 -> line 325
 *   +0x0018 -> line 327
 *   +0x0020 -> line 325
 *   +0x0028 -> line 326
 *   +0x002c -> line 325
 *   +0x0038 -> line 327
 *   +0x003c -> line 325
 *   +0x0040 -> line 326
 *   +0x0044 -> line 327
 *   +0x0050 -> line 329
 *   +0x0054 -> line 330
 *   +0x005c -> line 329
 *   +0x0060 -> line 330
 *   +0x0064 -> line 329
 *   +0x0068 -> line 330
 *   +0x0094 -> line 333
 *   +0x00ec -> line 337
 *   +0x00f4 -> line 339
 *   +0x014c -> line 343
 *   +0x0154 -> line 345
 *   +0x01c0 -> line 349
 *   +0x01c8 -> line 351
 *   +0x0234 -> line 355
 *   +0x023c -> line 357
 *   +0x0254 -> line 359
 *   +0x02c8 -> line 368
 *   +0x02d0 -> line 371
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_PadReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwInvertedDirection;
    stDevice* hPad;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 264–312 */
/* addr: 0x002f4ff0  size: 720 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 264
 *   +0x0004 -> line 266
 *   +0x0008 -> line 264
 *   +0x000c -> line 268
 *   +0x0010 -> line 266
 *   +0x0018 -> line 268
 *   +0x0020 -> line 266
 *   +0x0028 -> line 267
 *   +0x002c -> line 266
 *   +0x0038 -> line 268
 *   +0x003c -> line 266
 *   +0x0040 -> line 267
 *   +0x0044 -> line 268
 *   +0x0050 -> line 270
 *   +0x0054 -> line 271
 *   +0x008c -> line 274
 *   +0x00e4 -> line 278
 *   +0x00ec -> line 280
 *   +0x0144 -> line 284
 *   +0x014c -> line 286
 *   +0x01b8 -> line 290
 *   +0x01c0 -> line 292
 *   +0x022c -> line 296
 *   +0x0234 -> line 298
 *   +0x024c -> line 300
 *   +0x02c0 -> line 309
 *   +0x02c8 -> line 312
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_PadPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwDirection;
    stDevice* hPad;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 217–253 */
/* addr: 0x002f52c0  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 217
 *   +0x0004 -> line 225
 *   +0x0008 -> line 217
 *   +0x000c -> line 227
 *   +0x0010 -> line 217
 *   +0x0014 -> line 223
 *   +0x0018 -> line 217
 *   +0x001c -> line 225
 *   +0x0020 -> line 217
 *   +0x0024 -> line 227
 *   +0x0028 -> line 217
 *   +0x002c -> line 223
 *   +0x0030 -> line 225
 *   +0x0034 -> line 227
 *   +0x0038 -> line 225
 *   +0x0040 -> line 226
 *   +0x0044 -> line 225
 *   +0x0050 -> line 227
 *   +0x0054 -> line 225
 *   +0x0058 -> line 226
 *   +0x005c -> line 227
 *   +0x0068 -> line 229
 *   +0x007c -> line 230
 *   +0x0080 -> line 229
 *   +0x0090 -> line 230
 *   +0x00c8 -> line 233
 *   +0x00d0 -> line 234
 *   +0x00d8 -> line 236
 *   +0x00e0 -> line 237
 *   +0x00e8 -> line 239
 *   +0x00f4 -> line 240
 *   +0x00fc -> line 242
 *   +0x0108 -> line 243
 *   +0x0110 -> line 245
 *   +0x0120 -> line 246
 *   +0x017c -> line 250
 *   +0x0180 -> line 252
 *   +0x0184 -> line 250
 *   +0x018c -> line 253
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_PadJustReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwJustReleasedDirections;
    stDevice* hPad;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 175–212 */
/* addr: 0x002f5470  size: 444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 175
 *   +0x0004 -> line 184
 *   +0x0008 -> line 175
 *   +0x000c -> line 186
 *   +0x0010 -> line 175
 *   +0x0014 -> line 181
 *   +0x0018 -> line 175
 *   +0x001c -> line 184
 *   +0x0020 -> line 175
 *   +0x0024 -> line 186
 *   +0x0028 -> line 175
 *   +0x002c -> line 181
 *   +0x0030 -> line 184
 *   +0x0034 -> line 186
 *   +0x0038 -> line 184
 *   +0x0040 -> line 185
 *   +0x0044 -> line 184
 *   +0x0050 -> line 186
 *   +0x0054 -> line 184
 *   +0x0058 -> line 185
 *   +0x005c -> line 186
 *   +0x0068 -> line 188
 *   +0x0078 -> line 189
 *   +0x007c -> line 188
 *   +0x008c -> line 189
 *   +0x0090 -> line 188
 *   +0x0094 -> line 189
 *   +0x00c8 -> line 192
 *   +0x00d4 -> line 193
 *   +0x00dc -> line 195
 *   +0x00e8 -> line 196
 *   +0x00f0 -> line 198
 *   +0x0100 -> line 199
 *   +0x0108 -> line 201
 *   +0x0118 -> line 202
 *   +0x0120 -> line 204
 *   +0x0138 -> line 205
 *   +0x0190 -> line 209
 *   +0x0194 -> line 211
 *   +0x0198 -> line 209
 *   +0x01a0 -> line 212
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_PadJustPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwNewDirections;
    stDevice* hPad;
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 98–106 */
/* addr: 0x002f5630  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 98
 *   +0x0004 -> line 101
 *   +0x0008 -> line 98
 *   +0x0010 -> line 101
 *   +0x0014 -> line 103
 *   +0x0078 -> line 105
 *   +0x0084 -> line 106
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_ClearLastError(unsigned int ulChannelId);
void Erm_fn_v_UpdateLastError(unsigned short uwStartOfWarningsId, unsigned char ucModuleId, unsigned int ulChannelId, unsigned short uwErrNum, int lDebugInfo, unsigned char ucOpenInfoWindow, unsigned char ucStopForDebug, char* szPersonalMsg);

unsigned char IPT_fn_bIsKeyWordValid_Not(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    return IPT_fn_bIsNextKeyWordValid((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) ? (unsigned char)0 : (unsigned char)1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 84–93 */
/* addr: 0x002f56d0  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 84
 *   +0x0004 -> line 87
 *   +0x0008 -> line 84
 *   +0x0014 -> line 87
 *   +0x0018 -> line 88
 *   +0x00e0 -> line 92
 *   +0x00e8 -> line 93
 *   +0x00ec -> line 92
 *   +0x00f0 -> line 93
 *   +0x00f4 -> line 92
 *   +0x00f8 -> line 93
 *   +0x00fc -> line 92
 *   +0x0110 -> line 93
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_Or(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c lines 70–79 */
/* addr: 0x002f57f0  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 70
 *   +0x0004 -> line 73
 *   +0x0008 -> line 70
 *   +0x0014 -> line 73
 *   +0x0018 -> line 74
 *   +0x00e0 -> line 78
 *   +0x00e8 -> line 79
 *   +0x00ec -> line 78
 *   +0x00f0 -> line 79
 *   +0x00f4 -> line 78
 *   +0x00f8 -> line 79
 *   +0x00fc -> line 78
 *   +0x0110 -> line 79
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsKeyWordValid_And(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    /* TODO: decompile from asm/... */
}
