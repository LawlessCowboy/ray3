/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/IPT.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct IPT_tdstDevice_ IPT_tdstDevice_;
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct IPT_tdstInput_ IPT_tdstInput_;

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


void IPT_fn_vInitCommandLines(void)
{
    /* TODO: decompile from asm/... */
}

void IPT_fn_vGetJoystickAxesForPadNumber2(unsigned char ucPadNumber, IPT_tdstEntryElement_** p_hJoyAxeX, IPT_tdstEntryElement_** p_hJoyAxeY)
{
    *p_hJoyAxeX = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeZ;
    *p_hJoyAxeY = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeR;
}

void IPT_fn_vSetJoystickAxesForPadNumber2(unsigned char ucPadNumber, IPT_tdstEntryElement_* hJoyAxeX, IPT_tdstEntryElement_* hJoyAxeY, IPT_tdstEntryElement_* hJoyAxeX1, IPT_tdstEntryElement_* hJoyAxeY1)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeX = hJoyAxeX;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeY = hJoyAxeY;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeZ = hJoyAxeX1;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeR = hJoyAxeY1;
}

unsigned char IPT_fn_bIsInvalidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber)
{
    IPT_tdstEntryElement_* hPadButton;
    IPT_tdstEntryElement_* param0;

    hPadButton = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber];
    param0 = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber];

    return (((hPadButton != NULL) && (hPadButton->lState < 0)) && ((param0 != NULL) && (param0->lState < 0))) ? (unsigned char)1 : (unsigned char)0;
}

unsigned char IPT_fn_bIsJustInvalidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber)
{
    IPT_tdstEntryElement_* hPadButton;
    IPT_tdstEntryElement_* param0;

    hPadButton = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber];
    param0 = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber];

    if (hPadButton && param0)
    {
        return (((hPadButton->lState == -1) && (param0->lState < 0)) || ((hPadButton->lState < 0) && (param0->lState == -1))) ? (unsigned char)1 : (unsigned char)0;
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

unsigned char IPT_fn_bIsValidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber)
{
    IPT_tdstEntryElement_* hPadButton;
    IPT_tdstEntryElement_* param0;

    hPadButton = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber];
    param0 = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber];

    return (((hPadButton != NULL) && (hPadButton->lState > 0)) || ((param0 != NULL) && (param0->lState > 0))) ? (unsigned char)1 : (unsigned char)0;
}

unsigned char IPT_fn_bIsJustValidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber)
{
    IPT_tdstEntryElement_* hPadButton;
    IPT_tdstEntryElement_* param0;

    hPadButton = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber];
    param0 = (IPT_tdstEntryElement_*)IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber];

    if (hPadButton && param0)
    {
        return (((hPadButton->lState == 1) && (param0->lState <= 0)) || ((hPadButton->lState <= 0) && (param0->lState == 1))) ? (unsigned char)1 : (unsigned char)0;
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

void IPT_fn_vSetKeyAndPadButtonForPadNumber(unsigned char ucPadNumber, unsigned char ucButtonNumber, IPT_tdstEntryElement_* hPadButton, IPT_tdstEntryElement_* hKeyButton)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickButtons[ucButtonNumber] = (int)hPadButton;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyButtons[ucButtonNumber] = (int)hKeyButton;
}

int IPT_fn_xGetSectorForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.lSector;
}

void IPT_fn_vSetSectorForPadNumber(unsigned char ucPadNumber, int lSector)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.lSector = lSector;
}

float IPT_fn_xGetRotationAngleForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xRotationAngle;
}

void IPT_fn_vSetRotationAngleForPadNumber(unsigned char ucPadNumber, float xRotationAngle)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xRotationAngle = xRotationAngle;
}

float IPT_fn_xGetTrueAnalogForceForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xTrueAnalogForce;
}

void IPT_fn_vSetTrueAnalogForceForPadNumber(unsigned char ucPadNumber, float xTrueAnalogForce)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xTrueAnalogForce = xTrueAnalogForce;
}

float IPT_fn_xGetAnalogForceForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xAnalogForce;
}

void IPT_fn_vSetAnalogForceForPadNumber(unsigned char ucPadNumber, float xAnalogForce)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.xAnalogForce = xAnalogForce;
}

short IPT_fn_wGetVAxisForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wVerticalAxis;
}

void IPT_fn_vSetVAxisForPadNumber(unsigned char ucPadNumber, short wVerticalAxis)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wVerticalAxis = wVerticalAxis;
}

short IPT_fn_vGetHAxisForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wHorizontalAxis;
}

void IPT_fn_vSetHAxisForPadNumber(unsigned char ucPadNumber, short wHorizontalAxis)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.wHorizontalAxis = wHorizontalAxis;
}

void IPT_fn_vGetGlobalVectorForPadNumber(unsigned char ucPadNumber, MTH3D_tdstVector_* p_stGlobalVector)
{
    *p_stGlobalVector = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.stGlobalVector;
}

void IPT_fn_vSetGlobalVectorForPadNumber(unsigned char ucPadNumber, MTH3D_tdstVector_* p_stGlobalVector)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].stPadReadingOutput.stGlobalVector = *p_stGlobalVector;
}

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

void IPT_fn_vSetCenterForPadNumber(unsigned char ucPadNumber, signed char cJoystickXCenter, signed char cJoystickYCenter)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXcenter = cJoystickXCenter;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYcenter = cJoystickYCenter;
}

void IPT_fn_vSetMinMaxAxeYForPadNumber(unsigned char ucPadNumber, signed char cJoystickYmin, signed char cJoystickYmax)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYmin = cJoystickYmin;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYmax = cJoystickYmax;
}

void IPT_fn_vSetMinMaxAxeXForPadNumber(unsigned char ucPadNumber, signed char cJoystickXmin, signed char cJoystickXmax)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXmin = cJoystickXmin;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXmax = cJoystickXmax;
}

void IPT_fn_vGetCenterForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickXCenter, signed char* p_cJoystickYCenter)
{
    *p_cJoystickXCenter = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXcenter;
    *p_cJoystickYCenter = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYcenter;
}

void IPT_fn_vGetMinMaxAxeYForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickYmin, signed char* p_cJoystickYmax)
{
    *p_cJoystickYmin = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYmin;
    *p_cJoystickYmax = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickYmax;
}

void IPT_fn_vGetMinMaxAxeXForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickXmin, signed char* p_cJoystickXmax)
{
    *p_cJoystickXmin = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXmin;
    *p_cJoystickXmax = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].cJoystickXmax;
}

unsigned char IPT_fn_bGetKeyboardCancelInertiaForPadNumber(unsigned char ucPadNumber)
{
    return IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].bCancelKeyboardInertia;
}

void IPT_fn_vGetKeyboardAxesForPadNumber(unsigned char ucPadNumber, IPT_tdstEntryElement_** p_hLeft, IPT_tdstEntryElement_** p_hRight, IPT_tdstEntryElement_** p_hUp, IPT_tdstEntryElement_** p_hDown, IPT_tdstEntryElement_** p_hSpeedUp)
{
    *p_hUp = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyUp;
    *p_hDown = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyDown;
    *p_hLeft = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyLeft;
    *p_hRight = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyRight;
    *p_hSpeedUp = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeySpeedUp;
}

void IPT_fn_vGetJoystickAxesForPadNumber(unsigned char ucPadNumber, IPT_tdstEntryElement_** p_hJoyAxeX, IPT_tdstEntryElement_** p_hJoyAxeY)
{
    *p_hJoyAxeX = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeX;
    *p_hJoyAxeY = IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeY;
}

void IPT_fn_vSetKeyboardCancelInertiaForPadNumber(unsigned char ucPadNumber, unsigned char bCancelInertia)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].bCancelKeyboardInertia = bCancelInertia;
}

void IPT_fn_vSetKeyboardAxesForPadNumber(unsigned char ucPadNumber, IPT_tdstEntryElement_* hLeft, IPT_tdstEntryElement_* hRight, IPT_tdstEntryElement_* hUp, IPT_tdstEntryElement_* hDown, IPT_tdstEntryElement_* hSpeedUp)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyUp = hUp;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyDown = hDown;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyLeft = hLeft;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeyRight = hRight;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hKeySpeedUp = hSpeedUp;
}

void IPT_fn_vSetJoystickAxesForPadNumber(unsigned char ucPadNumber, IPT_tdstEntryElement_* hJoyAxeX, IPT_tdstEntryElement_* hJoyAxeY)
{
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeX = hJoyAxeX;
    IPT_g_hInputStructure.a_stDevice[ucPadNumber + 2].hJoystickAxeY = hJoyAxeY;
}
