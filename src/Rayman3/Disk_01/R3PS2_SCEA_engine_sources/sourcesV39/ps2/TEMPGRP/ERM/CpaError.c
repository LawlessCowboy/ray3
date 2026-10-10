/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstLastErrorInfo_ tdstLastErrorInfo_;

struct tdstLastErrorInfo_ {
    unsigned short uwLastErr; /* +0x0 */
    unsigned char ucLastFailedModuleId; /* +0x2 */
    unsigned int ulChannelId; /* +0x4 */
};

unsigned char g_ucErmModuleId;
unsigned char g_ucErmNbOfModule;
int p_fn_ExitAppliCallBack;
tdstLastErrorInfo_ g_stErmTheLastErrorInfo[3];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c lines 373–448 */
/* addr: 0x00258070  size: 492 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 373
 *   +0x0004 -> line 377
 *   +0x0008 -> line 373
 *   +0x000c -> line 377
 *   +0x0010 -> line 373
 *   +0x003c -> line 377
 *   +0x009c -> line 378
 *   +0x00a4 -> line 380
 *   +0x00b4 -> line 383
 *   +0x00e8 -> line 388
 *   +0x00f4 -> line 390
 *   +0x0104 -> line 393
 *   +0x0108 -> line 394
 *   +0x010c -> line 393
 *   +0x0114 -> line 394
 *   +0x0124 -> line 398
 *   +0x012c -> line 401
 *   +0x0140 -> line 403
 *   +0x0148 -> line 406
 *   +0x015c -> line 412
 *   +0x0190 -> line 419
 *   +0x0198 -> line 422
 *   +0x01ac -> line 429
 *   +0x01b4 -> line 432
 *   +0x01c8 -> line 448
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_v_PrintErrMsg(char* szMsg, char* szPersonalMsg);
void Erm_fn_v_PrintErrMsgWithPersonalMsg(char* p_cTxt1, char* p_cTxt2, char* p_cTxt3);

/* Retail callers pass eight arguments and szPersonalMsg is read from t3; the
 * debug definition drops the three unreferenced middle parameters. */
void Erm_fn_v_UpdateLastError(unsigned short uwStartOfWarningsId, unsigned char ucModuleId, unsigned int ulChannelId, unsigned short uwErrNum, int lDebugInfo, unsigned char ucOpenInfoWindow, unsigned char ucStopForDebug, char* szPersonalMsg)
{
    unsigned char ucI;
    tdstLastErrorInfo_* p_stLastErrorInfo;

    for (ucI = 0; ucI < 3 && g_stErmTheLastErrorInfo[ucI].uwLastErr != 0 && g_stErmTheLastErrorInfo[ucI].ulChannelId != ulChannelId; ucI++)
        ;
    p_stLastErrorInfo = (ucI >= 3) ? NULL : &g_stErmTheLastErrorInfo[ucI];

    if (p_stLastErrorInfo == NULL)
    {
        Erm_fn_v_PrintErrMsg("Error in the Erm:", "There is no more Channel error to raise the new error.\nPerhaps the constant C_ucErmNbOfErrorChannel is too low.");
        if (p_fn_ExitAppliCallBack)
            ((void (*)(void))p_fn_ExitAppliCallBack)();
        for (;;)
            ;
    }

    if (p_stLastErrorInfo->uwLastErr != 0)
        Erm_fn_v_PrintErrMsg("Strange!\nThe last error was never treated", "");

    p_stLastErrorInfo->uwLastErr = uwErrNum;
    p_stLastErrorInfo->ucLastFailedModuleId = ucModuleId;
    p_stLastErrorInfo->ulChannelId = ulChannelId;

    if (p_stLastErrorInfo->uwLastErr < uwStartOfWarningsId)
    {
        if (szPersonalMsg == NULL)
            Erm_fn_v_PrintErrMsg("Fatale error: ", "");
        else
            Erm_fn_v_PrintErrMsgWithPersonalMsg("\nFatale error: ", "", szPersonalMsg);
        if (p_fn_ExitAppliCallBack)
            ((void (*)(void))p_fn_ExitAppliCallBack)();
        for (;;)
            ;
    }
    else
    {
        if (szPersonalMsg == NULL)
            Erm_fn_v_PrintErrMsg("Warning error: ", "");
        else
            Erm_fn_v_PrintErrMsgWithPersonalMsg("Warning error: ", "", szPersonalMsg);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c lines 282–319 */
/* addr: 0x00258260  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 282
 *   +0x0004 -> line 286
 *   +0x0008 -> line 282
 *   +0x000c -> line 286
 *   +0x0010 -> line 282
 *   +0x0018 -> line 286
 *   +0x0024 -> line 290
 *   +0x0050 -> line 292
 *   +0x007c -> line 296
 *   +0x0080 -> line 295
 *   +0x0084 -> line 294
 *   +0x0088 -> line 295
 *   +0x008c -> line 296
 *   +0x0094 -> line 295
 *   +0x0098 -> line 296
 *   +0x00a0 -> line 299
 *   +0x00a8 -> line 300
 *   +0x00cc -> line 302
 *   +0x00d4 -> line 307
 *   +0x00e0 -> line 310
 *   +0x00e4 -> line 309
 *   +0x00ec -> line 310
 *   +0x00f0 -> line 307
 *   +0x00f8 -> line 308
 *   +0x00fc -> line 309
 *   +0x0100 -> line 310
 *   +0x011c -> line 312
 *   +0x0124 -> line 316
 *   +0x0138 -> line 319
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_ClearLastError(unsigned int ulChannelId)
{
    unsigned char ucI;
    unsigned char ucJ;

    for (ucI = 0; ucI < 3 && g_stErmTheLastErrorInfo[ucI].uwLastErr != 0 && g_stErmTheLastErrorInfo[ucI].ulChannelId != ulChannelId; ucI++)
        ;

    if (ucI < 3 && g_stErmTheLastErrorInfo[ucI].uwLastErr != 0)
    {
        g_stErmTheLastErrorInfo[ucI].uwLastErr = 0;
        g_stErmTheLastErrorInfo[ucI].ulChannelId = 0;
        Erm_fn_v_PrintErrMsg("Explicit request for clear of the last error", "");
        ucJ = ucI + 1;
        if (ucJ < 3 && g_stErmTheLastErrorInfo[ucJ].uwLastErr != 0)
        {
            for (; ucJ < 3 && g_stErmTheLastErrorInfo[ucJ].uwLastErr != 0; ucJ++)
            {
                g_stErmTheLastErrorInfo[ucJ - 1] = g_stErmTheLastErrorInfo[ucJ];
                g_stErmTheLastErrorInfo[ucJ].uwLastErr = 0;
                g_stErmTheLastErrorInfo[ucJ].ulChannelId = 0;
            }
        }
    }
    else
    {
        Erm_fn_v_PrintErrMsg("Explicit request for clear of the last error.\n But there is no error !", "");
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c lines 78–106 */
/* addr: 0x002583b0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 78
 *   +0x000c -> line 85
 *   +0x0010 -> line 86
 *   +0x0038 -> line 105
 *   +0x0040 -> line 106
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char Erm_fn_ucInitErrMsg(void)
{
    if (g_ucErmNbOfModule == 0)
    {
        g_stErmTheLastErrorInfo[0].uwLastErr = 0;
        g_stErmTheLastErrorInfo[0].ulChannelId = 0;
        g_stErmTheLastErrorInfo[1].uwLastErr = 0;
        g_stErmTheLastErrorInfo[1].ulChannelId = 0;
        g_stErmTheLastErrorInfo[2].uwLastErr = 0;
        g_stErmTheLastErrorInfo[2].ulChannelId = 0;
    }
    return g_ucErmNbOfModule++;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c lines 50–50 */
/* addr: 0x00258400  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 50
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_vSetCallBackForExit(void (*_p_fn_ExitAppliCallBack)(void))
{
    p_fn_ExitAppliCallBack = (int)_p_fn_ExitAppliCallBack;
}
