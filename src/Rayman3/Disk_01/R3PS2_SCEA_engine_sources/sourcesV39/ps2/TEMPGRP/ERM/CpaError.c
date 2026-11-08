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

void Erm_fn_vSetCallBackForExit(void (*_p_fn_ExitAppliCallBack)(void))
{
    p_fn_ExitAppliCallBack = (int)_p_fn_ExitAppliCallBack;
}
