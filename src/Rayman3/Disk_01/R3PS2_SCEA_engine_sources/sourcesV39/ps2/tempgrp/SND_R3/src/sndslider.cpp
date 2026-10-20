/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndslider.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* The original header is not present in the recovered source set.  These
 * declarations are the interface consumed by this translation unit; the
 * complete recovered class is defined in sndclinkmicrocont.cpp. */
class CLinkMicroCont {
public:
    static CLinkMicroCont& mfn_roGetInstance(void);
    int mfn_s32AddMicroInstance(void);
};

struct Jingle {
    static int fs_uGetOldVolume(int, int);
    static int fs_uGetVolume(int, int);
};

unsigned char fn_bGetVolumeLineModifierString(int s32_LineId, char* sz_Buffer, int s32_Size);
unsigned char fn_bSetVolumeModifier(const char* sz_Name, int s32_Value);
int fn_s32GetVolumeModifier(const char* sz_Name);

extern "C" int SND_fn_lCreateMicroSound(void)
{
    return CLinkMicroCont::mfn_roGetInstance().mfn_s32AddMicroInstance();
}

extern "C" int SND_fn_s32GetVolumeLineSound(int s32_LineId)
{
    int s32_Answer = -1;
    char ch_Buffer[256];

    if (fn_bGetVolumeLineModifierString(s32_LineId, ch_Buffer, 256))
    {
        s32_Answer = Jingle::fs_uGetOldVolume(fn_s32GetVolumeModifier(ch_Buffer), s32_LineId);
    }
    return s32_Answer;
}

extern "C" void SND_fn_vSetVolumeLineSound(int s32_LineId, int s32_VolValue)
{
    char ch_Buffer[256];

    if (fn_bGetVolumeLineModifierString(s32_LineId, ch_Buffer, 256))
    {
        fn_bSetVolumeModifier(ch_Buffer, Jingle::fs_uGetVolume(s32_VolValue, s32_LineId));
    }
}
