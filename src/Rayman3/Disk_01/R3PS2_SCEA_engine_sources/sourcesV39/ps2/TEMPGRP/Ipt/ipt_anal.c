/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_anal.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/IPT.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct stDevice stDevice;
typedef struct IPT_tdstKeyAndPadDefine_ IPT_tdstKeyAndPadDefine_;
typedef struct IPT_tdstDevice_ IPT_tdstDevice_;
typedef struct IPT_tdstScriptValue_ IPT_tdstScriptValue_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;

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

extern IPT_tdstKeyWordElement_* IPT_g_hNextParameter;
extern IPT_tdstEntryElement_* g_h_ActualEntryInput;
extern unsigned char (*IPT_p_fn_bIsKeyWordValid[28])(void);
extern unsigned char g_ucIPTModuleId;
unsigned int INO_fn_ulJoyPreviousButtons(stDevice* _hDev);
void Erm_fn_ClearLastError(unsigned int ulChannelId);
void Erm_fn_v_UpdateLastError();

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
unsigned char IPT_fn_bIsEntryActionValid(IPT_tdstEntryElement_* _hEntryElement);
unsigned char IPT_fn_bAButtonPadJustPressed(void);
unsigned char IPT_fn_bAKeyJustPressed(void);
float IPT_fn_xGetAnalogicValue(IPT_tdstEntryElement_* _hEntryElement);
unsigned char IPT_fn_bIsInvalidated(IPT_tdstEntryElement_* _hEntryElement);
unsigned char IPT_fn_bIsJustInvalidated(IPT_tdstEntryElement_* _hEntryElement);
unsigned char IPT_fn_bIsValidated(IPT_tdstEntryElement_* _hEntryElement);
unsigned char IPT_fn_bIsJustValidated(IPT_tdstEntryElement_* _hEntryElement);

unsigned char IPT_fn_bIsJustValidated(IPT_tdstEntryElement_* _hEntryElement)
{
    return (_hEntryElement && (_hEntryElement->lState == 1)) ? (unsigned char)1 : (unsigned char)0;

}

unsigned char IPT_fn_bIsValidated(IPT_tdstEntryElement_* _hEntryElement)
{
    return ((_hEntryElement != NULL) && (_hEntryElement->lState > 0)) ?
        (unsigned char)1 : (unsigned char)0;
}

unsigned char IPT_fn_bIsJustInvalidated(IPT_tdstEntryElement_* _hEntryElement)
{
    return ((_hEntryElement != NULL) && (_hEntryElement->lState == -1)) ?
        (unsigned char)1 : (unsigned char)0;
}

unsigned char IPT_fn_bIsInvalidated(IPT_tdstEntryElement_* _hEntryElement)
{
    return ((_hEntryElement == NULL) || (_hEntryElement->lState < 0)) ?
        (unsigned char)1 : (unsigned char)0;
}

float IPT_fn_xGetAnalogicValue(IPT_tdstEntryElement_* _hEntryElement)
{
    if (_hEntryElement != NULL)
        return _hEntryElement->xAnalogicValue;
    return 0.0f;
}

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

/* Inline keyword dispatch (the whole call is one line in the retail line map). */
inline unsigned char IPT_fn_bIsKeyWordValid(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn = 0;
    unsigned char (*p_fn_bFunction)(IPT_tdstKeyWordElement_*);

    if ((p_fn_bFunction = (unsigned char (*)(IPT_tdstKeyWordElement_*))IPT_p_fn_bIsKeyWordValid[(_hKeyWordElement->u_ElementUnion.swKeyWord) & 0x00ff]) != NULL)
        ucReturn = p_fn_bFunction(_hKeyWordElement);
    else
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(14, g_ucIPTModuleId, 0, 12, -1, 255, 255, NULL);
    }

    return ucReturn;
}

unsigned char IPT_fn_bIsEntryActionValid(IPT_tdstEntryElement_* _hEntryElement)
{
    unsigned char ucReturn;

    ucReturn = 0;
    g_h_ActualEntryInput = _hEntryElement;
    g_h_ActualEntryInput->xAnalogicValue = 0.0f;

    IPT_g_hNextParameter = &_hEntryElement->d_stKeyWordElementArray[0];

    if (IPT_g_hNextParameter != NULL)
        ucReturn = IPT_fn_bIsKeyWordValid(IPT_g_hNextParameter);
    return ucReturn;
}
