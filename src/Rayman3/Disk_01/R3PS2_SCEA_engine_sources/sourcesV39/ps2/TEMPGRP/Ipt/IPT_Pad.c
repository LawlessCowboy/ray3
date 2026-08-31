/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    int m_p_stState; /* +0x8 */
    int m_p_stLastState; /* +0xc */
    int m_pfnRead; /* +0x10 */
};

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
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

/* addr: 0x002f7480  size: 8 bytes */
void IPT_fn_vInitCommandLines(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 313–313 */
/* addr: 0x002f7490  size: 60 bytes */
void IPT_fn_vGetJoystickAxesForPadNumber2(unsigned char ucPadNumber, /* function pointer */ int p_hJoyAxeX, /* function pointer */ int p_hJoyAxeY)
{
    /* line map: */
    /*   line 313 @ +0x000 */
    /*   line 313 @ +0x000 */
    /*   line 313 @ +0x000 */
    /*   line 313 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 300–306 */
/* addr: 0x002f74d0  size: 84 bytes */
void IPT_fn_vSetJoystickAxesForPadNumber2(unsigned char ucPadNumber, /* function pointer */ int hJoyAxeX, /* function pointer */ int hJoyAxeY, /* function pointer */ int hJoyAxeX1, /* function pointer */ int hJoyAxeY1)
{
    /* line map: */
    /*   line 301 @ +0x000 */
    /*   line 300 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 300 @ +0x000 */
    /*   line 301 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 306 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 284–287 */
/* addr: 0x002f7530  size: 144 bytes */
unsigned char IPT_fn_bIsInvalidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber, /* function pointer */ int param2, /* function pointer */ int hPadButton)
{
    /* line map: */
    /*   line 284 @ +0x000 */
    /*   line 284 @ +0x000 */
    /*   line 284 @ +0x000 */
    /*   line 284 @ +0x000 */
    /*   line 287 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 264–276 */
/* addr: 0x002f75c0  size: 272 bytes */
unsigned char IPT_fn_bIsJustInvalidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber, /* function pointer */ int param2, /* function pointer */ int hPadButton)
{
    /* line map: */
    /*   line 264 @ +0x000 */
    /*   line 264 @ +0x000 */
    /*   line 264 @ +0x000 */
    /*   line 264 @ +0x000 */
    /*   line 267 @ +0x000 */
    /*   line 269 @ +0x000 */
    /*   line 271 @ +0x000 */
    /*   line 276 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 253–256 */
/* addr: 0x002f76d0  size: 140 bytes */
unsigned char IPT_fn_bIsValidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber, /* function pointer */ int param2, /* function pointer */ int hPadButton)
{
    /* line map: */
    /*   line 253 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 256 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 235–245 */
/* addr: 0x002f7760  size: 272 bytes */
unsigned char IPT_fn_bIsJustValidatedPadButton(unsigned char ucPadNumber, unsigned char ucButtonNumber, /* function pointer */ int param2, /* function pointer */ int hPadButton)
{
    /* line map: */
    /*   line 235 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 238 @ +0x000 */
    /*   line 240 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 245 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 226–226 */
/* addr: 0x002f7870  size: 76 bytes */
void IPT_fn_vSetKeyAndPadButtonForPadNumber(unsigned char ucPadNumber, unsigned char ucButtonNumber, /* function pointer */ int hPadButton, /* function pointer */ int hKeyButton)
{
    /* line map: */
    /*   line 226 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 226 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 221–221 */
/* addr: 0x002f78c0  size: 36 bytes */
int IPT_fn_xGetSectorForPadNumber(unsigned char ucPadNumber)
{
    /* line map: */
    /*   line 221 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 216–216 */
/* addr: 0x002f78f0  size: 36 bytes */
void IPT_fn_vSetSectorForPadNumber(unsigned char ucPadNumber, int lSector)
{
    /* line map: */
    /*   line 216 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 211–211 */
/* addr: 0x002f7920  size: 36 bytes */
float IPT_fn_xGetRotationAngleForPadNumber(unsigned char ucPadNumber)
{
    /* line map: */
    /*   line 211 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 206–206 */
/* addr: 0x002f7950  size: 36 bytes */
void IPT_fn_vSetRotationAngleForPadNumber(unsigned char ucPadNumber, float xRotationAngle)
{
    /* line map: */
    /*   line 206 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 201–201 */
/* addr: 0x002f7980  size: 36 bytes */
float IPT_fn_xGetTrueAnalogForceForPadNumber(unsigned char ucPadNumber)
{
    /* line map: */
    /*   line 201 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 196–196 */
/* addr: 0x002f79b0  size: 36 bytes */
void IPT_fn_vSetTrueAnalogForceForPadNumber(unsigned char ucPadNumber, float xTrueAnalogForce)
{
    /* line map: */
    /*   line 196 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 191–191 */
/* addr: 0x002f79e0  size: 36 bytes */
float IPT_fn_xGetAnalogForceForPadNumber(unsigned char ucPadNumber)
{
    /* line map: */
    /*   line 191 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 186–186 */
/* addr: 0x002f7a10  size: 36 bytes */
void IPT_fn_vSetAnalogForceForPadNumber(unsigned char ucPadNumber, float xAnalogForce)
{
    /* line map: */
    /*   line 186 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 181–181 */
/* addr: 0x002f7a40  size: 36 bytes */
short IPT_fn_wGetVAxisForPadNumber(unsigned char ucPadNumber)
{
    /* line map: */
    /*   line 181 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 176–176 */
/* addr: 0x002f7a70  size: 36 bytes */
void IPT_fn_vSetVAxisForPadNumber(unsigned char ucPadNumber, short wVerticalAxis)
{
    /* line map: */
    /*   line 176 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 171–171 */
/* addr: 0x002f7aa0  size: 36 bytes */
short IPT_fn_vGetHAxisForPadNumber(unsigned char ucPadNumber)
{
    /* line map: */
    /*   line 171 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 166–166 */
/* addr: 0x002f7ad0  size: 36 bytes */
void IPT_fn_vSetHAxisForPadNumber(unsigned char ucPadNumber, short wHorizontalAxis)
{
    /* line map: */
    /*   line 166 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 161–161 */
/* addr: 0x002f7b00  size: 56 bytes */
void IPT_fn_vGetGlobalVectorForPadNumber(unsigned char ucPadNumber, /* function pointer */ int p_stGlobalVector)
{
    /* line map: */
    /*   line 161 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 156–156 */
/* addr: 0x002f7b40  size: 56 bytes */
void IPT_fn_vSetGlobalVectorForPadNumber(unsigned char ucPadNumber, /* function pointer */ int p_stGlobalVector)
{
    /* line map: */
    /*   line 156 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 134–139 */
/* addr: 0x002f7b80  size: 152 bytes */
void IPT_fn_vSetAllOutputValueForPadNumber(unsigned char ucPadNumber, /* function pointer */ int p_stGlobalVector, short wHorizontalAxis, short wVerticalAxis, float xAnalogForce, float xTrueAnalogForce, float xRotationAngle, int lSector)
{
    /* line map: */
    /*   line 134 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 136 @ +0x000 */
    /*   line 136 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 139 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 128–129 */
/* addr: 0x002f7c20  size: 52 bytes */
void IPT_fn_vSetCenterForPadNumber(unsigned char ucPadNumber, signed char cJoystickXCenter, signed char cJoystickYCenter)
{
    /* line map: */
    /*   line 128 @ +0x000 */
    /*   line 128 @ +0x000 */
    /*   line 128 @ +0x000 */
    /*   line 129 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 122–123 */
/* addr: 0x002f7c60  size: 52 bytes */
void IPT_fn_vSetMinMaxAxeYForPadNumber(unsigned char ucPadNumber, signed char cJoystickYmin, signed char cJoystickYmax)
{
    /* line map: */
    /*   line 122 @ +0x000 */
    /*   line 122 @ +0x000 */
    /*   line 122 @ +0x000 */
    /*   line 123 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 116–117 */
/* addr: 0x002f7ca0  size: 52 bytes */
void IPT_fn_vSetMinMaxAxeXForPadNumber(unsigned char ucPadNumber, signed char cJoystickXmin, signed char cJoystickXmax)
{
    /* line map: */
    /*   line 116 @ +0x000 */
    /*   line 116 @ +0x000 */
    /*   line 116 @ +0x000 */
    /*   line 117 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 110–110 */
/* addr: 0x002f7ce0  size: 60 bytes */
void IPT_fn_vGetCenterForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickXCenter, signed char* p_cJoystickYCenter)
{
    /* line map: */
    /*   line 110 @ +0x000 */
    /*   line 110 @ +0x000 */
    /*   line 110 @ +0x000 */
    /*   line 110 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 104–104 */
/* addr: 0x002f7d20  size: 60 bytes */
void IPT_fn_vGetMinMaxAxeYForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickYmin, signed char* p_cJoystickYmax)
{
    /* line map: */
    /*   line 104 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 104 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 98–98 */
/* addr: 0x002f7d60  size: 60 bytes */
void IPT_fn_vGetMinMaxAxeXForPadNumber(unsigned char ucPadNumber, signed char* p_cJoystickXmin, signed char* p_cJoystickXmax)
{
    /* line map: */
    /*   line 98 @ +0x000 */
    /*   line 98 @ +0x000 */
    /*   line 98 @ +0x000 */
    /*   line 98 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 88–88 */
/* addr: 0x002f7da0  size: 36 bytes */
unsigned char IPT_fn_bGetKeyboardCancelInertiaForPadNumber(unsigned char ucPadNumber)
{
    /* line map: */
    /*   line 88 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 79–82 */
/* addr: 0x002f7dd0  size: 120 bytes */
void IPT_fn_vGetKeyboardAxesForPadNumber(unsigned char ucPadNumber, /* function pointer */ int p_hLeft, /* function pointer */ int p_hRight, /* function pointer */ int p_hUp, /* function pointer */ int p_hDown, /* function pointer */ int p_hSpeedUp)
{
    /* line map: */
    /*   line 79 @ +0x000 */
    /*   line 79 @ +0x000 */
    /*   line 79 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 80 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 73–73 */
/* addr: 0x002f7e50  size: 60 bytes */
void IPT_fn_vGetJoystickAxesForPadNumber(unsigned char ucPadNumber, /* function pointer */ int p_hJoyAxeX, /* function pointer */ int p_hJoyAxeY)
{
    /* line map: */
    /*   line 73 @ +0x000 */
    /*   line 73 @ +0x000 */
    /*   line 73 @ +0x000 */
    /*   line 73 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 68–68 */
/* addr: 0x002f7e90  size: 36 bytes */
void IPT_fn_vSetKeyboardCancelInertiaForPadNumber(unsigned char ucPadNumber, unsigned char bCancelInertia)
{
    /* line map: */
    /*   line 68 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 58–62 */
/* addr: 0x002f7ec0  size: 100 bytes */
void IPT_fn_vSetKeyboardAxesForPadNumber(unsigned char ucPadNumber, /* function pointer */ int hLeft, /* function pointer */ int hRight, /* function pointer */ int hUp, /* function pointer */ int hDown, /* function pointer */ int hSpeedUp)
{
    /* line map: */
    /*   line 59 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 59 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 62 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\IPT_Pad.c lines 53–54 */
/* addr: 0x002f7f30  size: 52 bytes */
void IPT_fn_vSetJoystickAxesForPadNumber(unsigned char ucPadNumber, /* function pointer */ int hJoyAxeX, /* function pointer */ int hJoyAxeY)
{
    /* line map: */
    /*   line 53 @ +0x000 */
    /*   line 53 @ +0x000 */
    /*   line 53 @ +0x000 */
    /*   line 54 @ +0x000 */
    /* TODO: decompile from asm/... */
}
