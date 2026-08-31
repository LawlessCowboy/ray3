/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_cach.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstA3dGENERAL_ tdstA3dGENERAL_;

struct tdstA3dGENERAL_ {
    unsigned short uwAnimationSpeed; /* +0x0 */
    unsigned short uwNumberOfVectors; /* +0x2 */
    unsigned short uwNumberOfQuaternions; /* +0x4 */
    unsigned short uwNumberOfHierarchies; /* +0x6 */
    unsigned short uwNumberOfNTTO; /* +0x8 */
    unsigned short uwNumberOfSavedFrames; /* +0xa */
    unsigned short uwNumberOfDeformations; /* +0xc */
    unsigned short uwNumberOfChannels; /* +0xe */
    unsigned short uwNumberOfFrames; /* +0x10 */
    unsigned int ulNumberOfKeyFrames; /* +0x14 */
    unsigned short uwNumberOfEvents; /* +0x18 */
    unsigned short uwNumOfFirstPosition; /* +0x1a */
    unsigned short uwStartFrame; /* +0x1c */
    unsigned short uwEndFrame; /* +0x1e */
    unsigned short uwFakeAnimSpeed; /* +0x20 */
    unsigned short uwFlags; /* +0x22 */
    unsigned short uwNumOfAnimationTranslationOffset; /* +0x24 */
    unsigned short uwNumOfAnimationRotationOffset; /* +0x26 */
    unsigned short uwNumberOfMorphData; /* +0x28 */
    unsigned short uwNumOfFirstVector; /* +0x2a */
    unsigned short uwNumOfFirstQuaternion; /* +0x2c */
    unsigned short uwNumOfFirstHierarchy; /* +0x2e */
    unsigned short uwNumOfFirstNTTO; /* +0x30 */
    unsigned short uwNumOfFirstDeformation; /* +0x32 */
    unsigned short uwNumOfFirstOnlyFrame; /* +0x34 */
    unsigned short uwNumOfFirstChannel; /* +0x36 */
    unsigned short uwNumOfFirstEvent; /* +0x38 */
    unsigned short uwNumOfFirstMorphData; /* +0x3a */
};

int p_uwLastA3dGENERAL;
int gp_stA3dGENERAL;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_cach.c lines 76–145 */
/* addr: 0x0027bc70  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 76
 *   +0x0004 -> line 91
 *   +0x0008 -> line 76
 *   +0x0020 -> line 86
 *   +0x0024 -> line 76
 *   +0x0028 -> line 85
 *   +0x002c -> line 76
 *   +0x0034 -> line 91
 *   +0x0070 -> line 93
 *   +0x0078 -> line 94
 *   +0x0080 -> line 95
 *   +0x0084 -> line 101
 *   +0x008c -> line 102
 *   +0x0090 -> line 103
 *   +0x0098 -> line 104
 *   +0x00a0 -> line 106
 *   +0x00a4 -> line 104
 *   +0x00a8 -> line 106
 *   +0x00b8 -> line 109
 *   +0x00c0 -> line 111
 *   +0x00cc -> line 114
 *   +0x00d4 -> line 116
 *   +0x0118 -> line 119
 *   +0x0120 -> line 122
 *   +0x0138 -> line 123
 *   +0x0140 -> line 125
 *   +0x014c -> line 129
 *   +0x0154 -> line 130
 *   +0x018c -> line 131
 *   +0x0190 -> line 133
 *   +0x0198 -> line 135
 *   +0x01ac -> line 136
 *   +0x01bc -> line 138
 *   +0x01d0 -> line 139
 *   +0x01e0 -> line 141
 *   +0x01e8 -> line 145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitAllEvents(HIE_tdstSuperObject_* p_stSuperObject, unsigned short uwFirstFrame)
{
    unsigned char ucMemoryType;
    unsigned char bBTLevel;
    unsigned char i;
    tdstEvent_* p_stEvent;
    tdstAnim3d_* p_stAnim;
    tdst3dData_* h_3dData;
    /* TODO: decompile from asm/... */
}
