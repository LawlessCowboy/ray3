/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c */
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
typedef struct IPT_tdstKeyAndPadDefine_ IPT_tdstKeyAndPadDefine_;
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
    unsigned char a_ucKeys[2][256]; /* +0x1 (debug record truncated; layout from IPT_fn_bAKeyJustPressed) */
    short m_wCurrent; /* +0x202 */
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
unsigned int IPT_g_ulPadAndJoyButtonFlag[16];
IPT_tdstKeyAndPadDefine_* IPT_gd_hKeyAndPadDefine;
extern IPT_tdstScriptValue_ IPT_g_hScriptKeyValue[];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 37–49 */
/* addr: 0x002f5910  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 *   +0x000c -> line 40
 *   +0x0010 -> line 41
 *   +0x0014 -> line 43
 *   +0x001c -> line 45
 *   +0x0028 -> line 46
 *   +0x0088 -> line 49
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern IPT_tdstKeyWordElement_* IPT_g_hNextParameter;
extern IPT_tdstEntryElement_* g_h_ActualEntryInput;
extern unsigned char (*IPT_p_fn_bIsKeyWordValid[28])(void);
extern unsigned char g_ucIPTModuleId;
unsigned int INO_fn_ulJoyPreviousButtons(stDevice* _hDev);
void Erm_fn_ClearLastError(unsigned int ulChannelId);
void Erm_fn_v_UpdateLastError();

unsigned char IPT_fn_bIsEntryActionValid(IPT_tdstEntryElement_* _hEntryElement)
{
    /* The retail body keeps the keyword result in a saved register and masks
     * it once on return (andi v0,s0,0xff), so the local is int-sized even
     * though the debug record types it as unsigned char. */
    int ucReturn;

    g_h_ActualEntryInput = _hEntryElement;
    _hEntryElement->xAnalogicValue = 0.0f;
    IPT_g_hNextParameter = _hEntryElement->d_stKeyWordElementArray;
    if (IPT_g_hNextParameter)
    {
        ucReturn = 0;
        if (IPT_p_fn_bIsKeyWordValid[(unsigned char)IPT_g_hNextParameter->u_ElementUnion.swKeyWord])
        {
            ucReturn = IPT_p_fn_bIsKeyWordValid[(unsigned char)IPT_g_hNextParameter->u_ElementUnion.swKeyWord]();
        }
        else
        {
            Erm_fn_ClearLastError(0);
            Erm_fn_v_UpdateLastError(14, g_ucIPTModuleId, 0, 12, -1, 255, 255, NULL);
        }
        return ucReturn;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 182–203 */
/* addr: 0x002f59b0  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 182
 *   +0x0004 -> line 186
 *   +0x0008 -> line 182
 *   +0x0024 -> line 186
 *   +0x0038 -> line 192
 *   +0x003c -> line 191
 *   +0x0040 -> line 192
 *   +0x0054 -> line 194
 *   +0x0058 -> line 196
 *   +0x00a0 -> line 197
 *   +0x00a8 -> line 198
 *   +0x00ac -> line 199
 *   +0x00b8 -> line 200
 *   +0x00c8 -> line 202
 *   +0x00cc -> line 203
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bAButtonPadJustPressed(void)
{
    int j;
    int i;
    stDevice* hPad;

    if (IPT_g_hInputStructure.ucOnePadActivate == 2)
    {
        for (i = 2; i < 18; i++)
        {
            j = 12;
            hPad = IPT_g_hInputStructure.a_stDevice[i].hDeviceHandle;
            do
            {
                if (((IPT_g_ulPadAndJoyButtonFlag[j - 12] & *(unsigned int*)((char*)hPad->m_p_stState + 4)) == IPT_g_ulPadAndJoyButtonFlag[j - 12]) &&
                    !((IPT_g_ulPadAndJoyButtonFlag[j - 12] & INO_fn_ulJoyPreviousButtons(hPad)) == IPT_g_ulPadAndJoyButtonFlag[j - 12]))
                {
                    return 1;
                }
                j++;
            } while (j <= 27);
        }
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 161–179 */
/* addr: 0x002f5aa0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 161
 *   +0x0004 -> line 162
 *   +0x0008 -> line 161
 *   +0x000c -> line 162
 *   +0x0010 -> line 163
 *   +0x0020 -> line 166
 *   +0x005c -> line 168
 *   +0x0060 -> line 169
 *   +0x0068 -> line 171
 *   +0x0070 -> line 172
 *   +0x0078 -> line 173
 *   +0x007c -> line 174
 *   +0x008c -> line 175
 *   +0x0090 -> line 176
 *   +0x0094 -> line 177
 *   +0x00a4 -> line 178
 *   +0x00a8 -> line 179
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bAKeyJustPressed(void)
{
    unsigned short uwKeyCode;
    IPT_tdstScriptValue_* p_hScriptKeyValue;
    IPT_tdstKeyAndPadDefine_* p_stKeyAndPadDefine;
    stDevice* hKeyboard;

    hKeyboard = IPT_g_hInputStructure.a_stDevice[1].hDeviceHandle;
    p_hScriptKeyValue = IPT_g_hScriptKeyValue;
    while (p_hScriptKeyValue->swKeyValue != -1)
    {
        uwKeyCode = p_hScriptKeyValue->swKeyValue;
        if (hKeyboard->m_p_stState->a_ucKeys[hKeyboard->m_p_stState->m_wCurrent][p_hScriptKeyValue->swKeyValue] && !hKeyboard->m_p_stState->a_ucKeys[1 - hKeyboard->m_p_stState->m_wCurrent][p_hScriptKeyValue->swKeyValue])
        {
            p_stKeyAndPadDefine = IPT_gd_hKeyAndPadDefine;
            while (p_stKeyAndPadDefine->uwBasedKey != 0xFFFF)
            {
                if (uwKeyCode == p_stKeyAndPadDefine->uwBasedKey)
                    return 1;
                p_stKeyAndPadDefine++;
            }
        }
        p_hScriptKeyValue++;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 149–152 */
/* addr: 0x002f5b50  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 149
 *   +0x0014 -> line 152
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float IPT_fn_xGetAnalogicValue(IPT_tdstEntryElement_* _hEntryElement)
{
    if (_hEntryElement != NULL)
        return _hEntryElement->xAnalogicValue;
    return 0.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 125–126 */
/* addr: 0x002f5b70  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 125
 *   +0x0020 -> line 126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsInvalidated(IPT_tdstEntryElement_* _hEntryElement)
{
    return ((_hEntryElement == NULL) || (_hEntryElement->lState < 0)) ?
        (unsigned char)1 : (unsigned char)0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 120–121 */
/* addr: 0x002f5ba0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 120
 *   +0x002c -> line 121
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsJustInvalidated(IPT_tdstEntryElement_* _hEntryElement)
{
    return ((_hEntryElement != NULL) && (_hEntryElement->lState == -1)) ?
        (unsigned char)1 : (unsigned char)0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 115–116 */
/* addr: 0x002f5be0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 115
 *   +0x0028 -> line 116
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsValidated(IPT_tdstEntryElement_* _hEntryElement)
{
    return ((_hEntryElement != NULL) && (_hEntryElement->lState > 0)) ?
        (unsigned char)1 : (unsigned char)0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c lines 110–111 */
/* addr: 0x002f5c10  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 *   +0x001c -> line 111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_bIsJustValidated(IPT_tdstEntryElement_* _hEntryElement)
{
    return (_hEntryElement && (_hEntryElement->lState == 1)) ? (unsigned char)1 : (unsigned char)0;


}
