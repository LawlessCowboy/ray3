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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndslider.cpp lines 30–32 */
/* addr: 0x001866d0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 30
 *   +0x0008 -> line 31
 *   +0x0018 -> line 32
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
struct Jingle {
    static int fs_uGetOldVolume(int, int);
    static int fs_uGetVolume(int, int);
};

unsigned char fn_bGetVolumeLineModifierString(int s32_LineId, char* sz_Buffer, int s32_Size);
unsigned char fn_bSetVolumeModifier(const char* sz_Name, int s32_Value);
int fn_s32GetVolumeModifier(const char* sz_Name);

int SND_fn_lCreateMicroSound(void)
{
    return CLinkMicroCont::mfn_roGetInstance().mfn_s32AddMicroInstance();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndslider.cpp lines 124–132 */
/* addr: 0x00186700  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 124
 *   +0x0004 -> line 129
 *   +0x0008 -> line 124
 *   +0x000c -> line 129
 *   +0x0010 -> line 124
 *   +0x001c -> line 129
 *   +0x002c -> line 130
 *   +0x0044 -> line 131
 *   +0x0048 -> line 132
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32GetVolumeLineSound(int s32_LineId)
{
    int s32_Answer = -1;
    char ch_Buffer[256];

    if (fn_bGetVolumeLineModifierString(s32_LineId, ch_Buffer, 256))
    {
        s32_Answer = Jingle::fs_uGetOldVolume(fn_s32GetVolumeModifier(ch_Buffer), s32_LineId);
    }
    return s32_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndslider.cpp lines 91–122 */
/* addr: 0x00186760  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 91
 *   +0x0004 -> line 94
 *   +0x0008 -> line 91
 *   +0x001c -> line 94
 *   +0x002c -> line 95
 *   +0x0040 -> line 122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetVolumeLineSound(int s32_LineId, int s32_VolValue)
{
    char ch_Buffer[256];

    if (fn_bGetVolumeLineModifierString(s32_LineId, ch_Buffer, 256))
    {
        fn_bSetVolumeModifier(ch_Buffer, Jingle::fs_uGetVolume(s32_VolValue, s32_LineId));
    }
}
