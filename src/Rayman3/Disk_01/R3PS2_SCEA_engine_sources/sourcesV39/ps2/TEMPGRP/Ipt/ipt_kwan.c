/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\ipt_kwan.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/IPT.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct IPT_tdstDevice_ IPT_tdstDevice_;
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
    anon_0* m_p_stState; /* +0x8 */
    anon_0* m_p_stLastState; /* +0xc */
    short (*m_pfnRead)(stDevice*); /* +0x10 */
};

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
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

typedef struct IPT_tdstJoystickState_ IPT_tdstJoystickState_;
struct IPT_tdstJoystickState_ {
    short sStatus;
    short sDirections;
    unsigned int ulButtons;
    float xAxe[6];
};

unsigned short INO_fn_uwJoyPreviousDirections(stDevice* _hDev);

static inline unsigned char IPT_fn_bIsNextKeyWordValid(IPT_tdstKeyWordElement_* hKeyWordElement)
{
    unsigned char ucReturn = 0;
    short swKeyWord = hKeyWordElement->u_ElementUnion.swKeyWord;
    /* The two index spellings differ on purpose: identical ones let MWCC narrow lh+andi to lbu. */
    if (((unsigned char (**)(IPT_tdstKeyWordElement_*))IPT_p_fn_bIsKeyWordValid)[swKeyWord & 0xFF])
    {
        ucReturn = ((unsigned char (**)(IPT_tdstKeyWordElement_*))IPT_p_fn_bIsKeyWordValid)[(unsigned char)swKeyWord](hKeyWordElement);
    }
    else
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(14, g_ucIPTModuleId, 0, 12, -1, 255, 255, NULL);
    }
    return ucReturn;
}

float PS2SQRTF(float x);
float atan2f(float y, float x);
float fabsf(float x);

/* R5900 accumulator form (no C form under the baseline). */
inline float IPT_xSumOfSquares(float _xA, float _xB)
{
    float _xResult;
    asm { mula.s _xA, _xA }
    asm { madd.s _xResult, _xB, _xB }
    return _xResult;
}

unsigned char IPT_fn_bIsKeyWordValid_SequencePadEnd(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn;
    short swPadNumber;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swPadNumber;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    ucReturn = (IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].bf6DeviceType == swPadNumber + 2 &&
                IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].bf2State == 1 &&
                IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].swDeviceValue == ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord &&
                IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].ucCounter >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput &&
                IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].ucCounter <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput) ? (unsigned char)1 : (unsigned char)0;
    IPT_g_hNextParameter += 12;
    IPT_g_ulSequenceAnalyseNumber++;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_SequencePad(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucReturn;
    short swPadNumber;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swPadNumber;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    ucReturn = (IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].bf6DeviceType == swPadNumber + 2 &&
                IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].bf2State == 0 &&
                IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].swDeviceValue == ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord &&
                IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].ucCounter >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput &&
                IPT_g_hInputStructure.hEventHistoric[IPT_g_ulSequenceAnalyseNumber].ucCounter <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput) ? (unsigned char)1 : (unsigned char)0;
    IPT_g_hNextParameter += 12;
    IPT_g_ulSequenceAnalyseNumber++;
    return ucReturn;
}

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
        ucReturn &= (IPT_fn_bIsNextKeyWordValid((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) == 1 ? (unsigned char)1 : (unsigned char)0);
        i++;
    }
    return ucReturn;
}

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

unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn = 0;
    short swPadNumber;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        switch (swKeyWord)
        {
        case 0:
            ucReturn = (!((unsigned short)((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & 4) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 1:
            ucReturn = (!((unsigned short)((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & 8) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 2:
            ucReturn = (!((unsigned short)((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & 1) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 3:
            ucReturn = (!((unsigned short)((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & 2) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        default:
            if (swKeyWord >= 12 && swKeyWord < 28)
            {
                ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 12];
                ucReturn = (!(unsigned char)((ulMask & ((IPT_tdstJoystickState_*)hPad->m_p_stState)->ulButtons) == ulMask) &&
                            (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn = 0;
    short swPadNumber;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        switch (swKeyWord)
        {
        case 0:
            ucReturn = (((unsigned short)((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & 4) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 1:
            ucReturn = (((unsigned short)((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & 8) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 2:
            ucReturn = (((unsigned short)((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & 1) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 3:
            ucReturn = (((unsigned short)((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & 2) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        default:
            if (swKeyWord >= 12 && swKeyWord < 28)
            {
                ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 12];
                ucReturn = ((unsigned char)((ulMask & ((IPT_tdstJoystickState_*)hPad->m_p_stState)->ulButtons) == ulMask) &&
                            (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadJustReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwJustReleasedDirections;
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
        uwJustReleasedDirections = ~((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & (short)INO_fn_uwJoyPreviousDirections(hPad);
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        switch (swKeyWord)
        {
        case 0:
            ucReturn = (uwJustReleasedDirections & 4) ? 1 : 0;
            break;
        case 1:
            ucReturn = (uwJustReleasedDirections & 8) ? 1 : 0;
            break;
        case 2:
            ucReturn = (uwJustReleasedDirections & 1) ? 1 : 0;
            break;
        case 3:
            ucReturn = (uwJustReleasedDirections & 2) ? 1 : 0;
            break;
        default:
            if (swKeyWord >= 12 && swKeyWord < 28)
            {
                ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 12];
                /* The (unsigned char) casts materialise each mask test before the
                   && branches, as retail does. Not original source, needs cleaning up. */
                ucReturn = (!((unsigned char)((ulMask & ((IPT_tdstJoystickState_*)hPad->m_p_stState)->ulButtons) == ulMask)) &&
                            (unsigned char)((ulMask & INO_fn_ulJoyPreviousButtons(hPad)) == ulMask)) ? 1 : 0;
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickOrPadJustPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwNewDirections;
    short swKeyWord;
    short sDirections;
    stDevice* hPad;
    unsigned char ucReturn = 0;
    unsigned int ulMask;
    IPT_tdstJoystickState_* pState;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter + 1);
    if (IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].ucValideAndActiveDevice == 2)
    {
        pState = (IPT_tdstJoystickState_*)hPad->m_p_stState;
        sDirections = pState->sDirections;
        uwNewDirections = sDirections & ~(short)INO_fn_uwJoyPreviousDirections(hPad);
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        switch (swKeyWord)
        {
        case 0:
            ucReturn = (uwNewDirections & 4) ? 1 : 0;
            break;
        case 1:
            ucReturn = (uwNewDirections & 8) ? 1 : 0;
            break;
        case 2:
            ucReturn = (uwNewDirections & 1) ? 1 : 0;
            break;
        case 3:
            ucReturn = (uwNewDirections & 2) ? 1 : 0;
            break;
        default:
            if (swKeyWord >= 12 && swKeyWord < 28)
            {
                ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 12];
                /* See IPT_fn_bIsKeyWordValid_PadJustReleased. Not original source, needs cleaning up. */
                ucReturn = ((unsigned char)((ulMask & pState->ulButtons) == ulMask) &&
                            !((unsigned char)((ulMask & INO_fn_ulJoyPreviousButtons(hPad)) == ulMask))) ? 1 : 0;
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn = 0;
    short swPadNumber;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        if (swKeyWord >= 0x1C && swKeyWord <= 0x2B)
        {
            ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 28];
            ucReturn = (!(unsigned char)((ulMask & ((IPT_tdstJoystickState_*)hPad->m_p_stState)->ulButtons) == ulMask) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    stDevice* hPad;
    unsigned char ucReturn = 0;
    short swPadNumber;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        if (swKeyWord >= 0x1C && swKeyWord <= 0x2B)
        {
            ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 28];
            ucReturn = ((unsigned char)((ulMask & ((IPT_tdstJoystickState_*)hPad->m_p_stState)->ulButtons) == ulMask) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

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
            /* See IPT_fn_bIsKeyWordValid_PadJustReleased. Not original source, needs cleaning up. */
            ucReturn = (!((unsigned char)((ulMask & *(unsigned int*)((char*)hPad->m_p_stState + 4)) == ulMask)) &&
                        (unsigned char)((ulMask & INO_fn_ulJoyPreviousButtons(hPad)) == ulMask)) ? 1 : 0;
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

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
            /* See IPT_fn_bIsKeyWordValid_PadJustReleased. Not original source, needs cleaning up. */
            ucReturn = ((unsigned char)((ulMask & *(unsigned int*)((char*)hPad->m_p_stState + 4)) == ulMask) &&
                        !((unsigned char)((ulMask & INO_fn_ulJoyPreviousButtons(hPad)) == ulMask))) ? 1 : 0;
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickCorrectedNormValue(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    float fAngle;
    float fNorm;
    int lMinValue;
    int lMaxValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    stDevice* param0;
    short swPadNumber;
    int lValue;
    float fFirstPosition = 0.0f;
    float fSecondPosition = 0.0f;
    unsigned char ucReturn = 0;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    param0 = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter += 12;
    ulFirstAxes = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyAction;
    IPT_g_hNextParameter += 12;
    ulSecondAxes = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyAction;
    IPT_g_hNextParameter += 12;
    lMinValue = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyValueMin;
    IPT_g_hNextParameter += 12;
    lMaxValue = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyValueMax;
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        switch (ulFirstAxes)
        {
        case 4:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[0];
            break;
        case 5:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[1];
            break;
        case 6:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[2];
            break;
        case 7:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[3];
            break;
        case 8:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[4];
            break;
        case 9:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[5];
            break;
        }
        switch (ulSecondAxes)
        {
        case 4:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[0];
            break;
        case 5:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[1];
            break;
        case 6:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[2];
            break;
        case 7:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[3];
            break;
        case 8:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[4];
            break;
        case 9:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[5];
            break;
        }
        fNorm = PS2SQRTF(IPT_xSumOfSquares(fFirstPosition, fSecondPosition));
        fNorm = 100.0f * fNorm;
        fAngle = atan2f(fabsf(fSecondPosition), fabsf(fFirstPosition));
        fAngle = 0.7853982f - fabsf(fAngle - 0.7853982f);
        fNorm = fNorm / IPT_g_fNormCorrectionTable[(int)(57.29578f * fAngle)];
        fNorm = (100.0f < (0.0f > fNorm ? 0.0f : fNorm)) ? 100.0f : (0.0f > fNorm ? 0.0f : fNorm);
        lValue = (int)fNorm;
        ucReturn = (lValue >= lMinValue && lValue <= lMaxValue) ? (unsigned char)1 : (unsigned char)0;
        if (ucReturn == 1)
        {
            ((IPT_tdstEntryElement_*)g_h_ActualEntryInput)->xAnalogicValue = fNorm;
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickTrueNormValue(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    float fNorm;
    int lMinValue;
    int lMaxValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    stDevice* param0;
    short swPadNumber;
    int lValue;
    float fFirstPosition = 0.0f;
    float fSecondPosition = 0.0f;
    unsigned char ucReturn = 0;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    param0 = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter += 12;
    ulFirstAxes = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyAction;
    IPT_g_hNextParameter += 12;
    ulSecondAxes = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyAction;
    IPT_g_hNextParameter += 12;
    lMinValue = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyValueMin;
    IPT_g_hNextParameter += 12;
    lMaxValue = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyValueMax;
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        switch (ulFirstAxes)
        {
        case 4:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[0];
            break;
        case 5:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[1];
            break;
        case 6:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[2];
            break;
        case 7:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[3];
            break;
        case 8:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[4];
            break;
        case 9:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[5];
            break;
        }
        switch (ulSecondAxes)
        {
        case 4:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[0];
            break;
        case 5:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[1];
            break;
        case 6:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[2];
            break;
        case 7:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[3];
            break;
        case 8:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[4];
            break;
        case 9:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[5];
            break;
        }
        fNorm = 100.0f * PS2SQRTF(IPT_xSumOfSquares(fFirstPosition, fSecondPosition));
        lValue = (int)fNorm;
        ucReturn = (lValue >= lMinValue && lValue <= lMaxValue) ? (unsigned char)1 : (unsigned char)0;
        if (ucReturn == 1)
        {
            ((IPT_tdstEntryElement_*)g_h_ActualEntryInput)->xAnalogicValue = fNorm;
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickAngularValue(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    float fAngle;
    int lMinValue;
    int lMaxValue;
    unsigned int ulSecondAxes;
    unsigned int ulFirstAxes;
    stDevice* param0;
    short swPadNumber;
    int lValue;
    float fFirstPosition = 0.0f;
    float fSecondPosition = 0.0f;
    unsigned char ucReturn = 0;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    param0 = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter += 12;
    ulFirstAxes = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyAction;
    IPT_g_hNextParameter += 12;
    ulSecondAxes = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyAction;
    IPT_g_hNextParameter += 12;
    lMinValue = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyValueMin;
    IPT_g_hNextParameter += 12;
    lMaxValue = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyValueMax;
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        switch (ulFirstAxes)
        {
        case 4:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[0];
            break;
        case 5:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[1];
            break;
        case 6:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[2];
            break;
        case 7:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[3];
            break;
        case 8:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[4];
            break;
        case 9:
            fFirstPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[5];
            break;
        }
        switch (ulSecondAxes)
        {
        case 4:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[0];
            break;
        case 5:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[1];
            break;
        case 6:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[2];
            break;
        case 7:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[3];
            break;
        case 8:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[4];
            break;
        case 9:
            fSecondPosition = ((IPT_tdstJoystickState_*)param0->m_p_stState)->xAxe[5];
            break;
        }
        if (fSecondPosition > -0.001f && fSecondPosition < 0.001f &&
            fFirstPosition > -0.001f && fFirstPosition < 0.001f)
        {
            fAngle = 0.0f;
        }
        else
        {
            fAngle = 57.29578f * atan2f(fSecondPosition, fFirstPosition);
        }
        lValue = (int)fAngle;
        ucReturn = (lValue >= lMinValue && lValue <= lMaxValue) ? (unsigned char)1 : (unsigned char)0;
        if (ucReturn == 1)
        {
            ((IPT_tdstEntryElement_*)g_h_ActualEntryInput)->xAnalogicValue = fAngle;
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_JoystickAxeValue(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    int lMaxValue;
    int lMinValue;
    stDevice* hPad;
    unsigned int ulActionNumber;
    short swPadNumber;
    int lValue;
    float fPosition = 0.0f;
    unsigned char ucReturn = 0;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    ulActionNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyAction;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    lMinValue = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyValueMin;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    lMaxValue = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swJoyValueMax;
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        switch (ulActionNumber)
        {
    case 4:
            fPosition = ((IPT_tdstJoystickState_*)hPad->m_p_stState)->xAxe[0];
            break;
    case 5:
            fPosition = ((IPT_tdstJoystickState_*)hPad->m_p_stState)->xAxe[1];
            break;
    case 6:
            fPosition = ((IPT_tdstJoystickState_*)hPad->m_p_stState)->xAxe[2];
            break;
    case 7:
            fPosition = ((IPT_tdstJoystickState_*)hPad->m_p_stState)->xAxe[3];
            break;
    case 8:
            fPosition = ((IPT_tdstJoystickState_*)hPad->m_p_stState)->xAxe[4];
            break;
    case 9:
            fPosition = ((IPT_tdstJoystickState_*)hPad->m_p_stState)->xAxe[5];
            break;
        }
        fPosition = 100.0f * fPosition;
        lValue = (int)fPosition;
        ucReturn = (lValue >= lMinValue && lValue <= lMaxValue) ? (unsigned char)1 : (unsigned char)0;
        if (ucReturn == 1)
        {
            ((IPT_tdstEntryElement_*)g_h_ActualEntryInput)->xAnalogicValue = fPosition;
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_PadReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwInvertedDirection;
    stDevice* hPad;
    unsigned char ucReturn = 0;
    short swPadNumber;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        uwInvertedDirection = ~((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections;
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        switch (swKeyWord)
        {
        case 0:
            ucReturn = ((uwInvertedDirection & 4) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 1:
            ucReturn = ((uwInvertedDirection & 8) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 2:
            ucReturn = ((uwInvertedDirection & 1) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 3:
            ucReturn = ((uwInvertedDirection & 2) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        default:
            if (swKeyWord >= 12 && swKeyWord < 28)
            {
                ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 12];
                ucReturn = (!(unsigned char)((ulMask & ((IPT_tdstJoystickState_*)hPad->m_p_stState)->ulButtons) == ulMask) &&
                            (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_PadPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwDirection;
    stDevice* hPad;
    unsigned char ucReturn = 0;
    short swPadNumber;
    short swKeyWord;
    unsigned int ulMask;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swPadNumber = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)(((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) + 1);
    if (IPT_g_hInputStructure.a_stDevice[swPadNumber + 2].ucValideAndActiveDevice == 2)
    {
        uwDirection = ((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections;
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        switch (swKeyWord)
        {
        case 0:
            ucReturn = ((uwDirection & 4) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 1:
            ucReturn = ((uwDirection & 8) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 2:
            ucReturn = ((uwDirection & 1) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        case 3:
            ucReturn = ((uwDirection & 2) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            break;
        default:
            if (swKeyWord >= 12 && swKeyWord < 28)
            {
                ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 12];
                ucReturn = ((unsigned char)((ulMask & ((IPT_tdstJoystickState_*)hPad->m_p_stState)->ulButtons) == ulMask) &&
                            (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] >= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMinCounterInput) &&
                        (IPT_g_hInputStructure.a_stDevice[swPadNumber].ucPadAndJoyCounter[swKeyWord] <= ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->ucMaxCounterInput)) ? 1 : 0;
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_PadJustReleased(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwJustReleasedDirections;
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
        uwJustReleasedDirections = ~((IPT_tdstJoystickState_*)hPad->m_p_stState)->sDirections & (short)INO_fn_uwJoyPreviousDirections(hPad);
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        switch (swKeyWord)
        {
        case 0:
            ucReturn = (uwJustReleasedDirections & 4) ? 1 : 0;
            break;
        case 1:
            ucReturn = (uwJustReleasedDirections & 8) ? 1 : 0;
            break;
        case 2:
            ucReturn = (uwJustReleasedDirections & 1) ? 1 : 0;
            break;
        case 3:
            ucReturn = (uwJustReleasedDirections & 2) ? 1 : 0;
            break;
        default:
            if (swKeyWord >= 12 && swKeyWord < 28)
            {
                ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 12];
                /* The (unsigned char) casts materialise each mask test before the
                   && branches, as retail does. Not original source, needs cleaning up. */
                ucReturn = (!((unsigned char)((ulMask & ((IPT_tdstJoystickState_*)hPad->m_p_stState)->ulButtons) == ulMask)) &&
                            (unsigned char)((ulMask & INO_fn_ulJoyPreviousButtons(hPad)) == ulMask)) ? 1 : 0;
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_PadJustPressed(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned short uwNewDirections;
    short swKeyWord;
    short sDirections;
    stDevice* hPad;
    unsigned char ucReturn = 0;
    unsigned int ulMask;
    IPT_tdstJoystickState_* pState;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
    hPad = IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].hDeviceHandle;
    IPT_g_hNextParameter = (int)((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter + 1);
    if (IPT_g_hInputStructure.a_stDevice[swKeyWord + 2].ucValideAndActiveDevice == 2)
    {
        pState = (IPT_tdstJoystickState_*)hPad->m_p_stState;
        sDirections = pState->sDirections;
        uwNewDirections = sDirections & ~(short)INO_fn_uwJoyPreviousDirections(hPad);
        swKeyWord = ((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter)->u_ElementUnion.swKeyWord;
        switch (swKeyWord)
        {
        case 0:
            ucReturn = (uwNewDirections & 4) ? 1 : 0;
            break;
        case 1:
            ucReturn = (uwNewDirections & 8) ? 1 : 0;
            break;
        case 2:
            ucReturn = (uwNewDirections & 1) ? 1 : 0;
            break;
        case 3:
            ucReturn = (uwNewDirections & 2) ? 1 : 0;
            break;
        default:
            if (swKeyWord >= 12 && swKeyWord < 28)
            {
                ulMask = IPT_g_ulPadAndJoyButtonFlag[swKeyWord - 12];
                /* See IPT_fn_bIsKeyWordValid_PadJustReleased. Not original source, needs cleaning up. */
                ucReturn = ((unsigned char)((ulMask & pState->ulButtons) == ulMask) &&
                            !((unsigned char)((ulMask & INO_fn_ulJoyPreviousButtons(hPad)) == ulMask))) ? 1 : 0;
            }
        }
    }
    IPT_g_hNextParameter += 12;
    return ucReturn;
}

unsigned char IPT_fn_bIsKeyWordValid_Not(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    return IPT_fn_bIsNextKeyWordValid((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter) ? (unsigned char)0 : (unsigned char)1;
}

unsigned char IPT_fn_bIsKeyWordValid_Or(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucFirst;
    unsigned char ucSecond;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    ucFirst = IPT_fn_bIsNextKeyWordValid((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter);
    ucSecond = IPT_fn_bIsNextKeyWordValid((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter);
    return ((ucFirst == 1) | (ucSecond == 1)) ? (unsigned char)1 : (unsigned char)0;
}

unsigned char IPT_fn_bIsKeyWordValid_And(IPT_tdstKeyWordElement_* _hKeyWordElement)
{
    unsigned char ucFirst;
    unsigned char ucSecond;

    IPT_g_hNextParameter = (int)(_hKeyWordElement + 1);
    ucFirst = IPT_fn_bIsNextKeyWordValid((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter);
    ucSecond = IPT_fn_bIsNextKeyWordValid((IPT_tdstKeyWordElement_*)IPT_g_hNextParameter);
    return ((ucFirst == 1) & (ucSecond == 1)) ? (unsigned char)1 : (unsigned char)0;
}
