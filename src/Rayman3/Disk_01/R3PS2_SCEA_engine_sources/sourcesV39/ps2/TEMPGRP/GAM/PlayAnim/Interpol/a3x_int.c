/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_int.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

float xEps;
float ax_AcosTab[8192];
short ax_SinTab[8192];
typedef struct tdstA3dGENERAL_ tdstA3dGENERAL_;
extern tdstA3dGENERAL_ *g_ax_pA3dGENERAL;

struct tdstA3dGENERAL_ {
    unsigned short uwAnimationSpeed;
    unsigned short uwNumberOfVectors;
    unsigned short uwNumberOfQuaternions;
    unsigned short uwNumberOfHierarchies;
    unsigned short uwNumberOfNTTO;
    unsigned short uwNumberOfSavedFrames;
    unsigned short uwNumberOfDeformations;
    unsigned short uwNumberOfChannels;
    unsigned short uwNumberOfFrames;
    unsigned int ulNumberOfKeyFrames;
    unsigned short uwNumberOfEvents;
    unsigned short uwNumOfFirstPosition;
    unsigned short uwStartFrame;
    unsigned short uwEndFrame;
    unsigned short uwFakeAnimSpeed;
    unsigned short uwFlags;
    unsigned short uwNumOfAnimationTranslationOffset;
    unsigned short uwNumOfAnimationRotationOffset;
    unsigned short uwNumberOfMorphData;
    unsigned short uwNumOfFirstVector;
    unsigned short uwNumOfFirstQuaternion;
    unsigned short uwNumOfFirstHierarchy;
    unsigned short uwNumOfFirstNTTO;
    unsigned short uwNumOfFirstDeformation;
    unsigned short uwNumOfFirstOnlyFrame;
    unsigned short uwNumOfFirstChannel;
    unsigned short uwNumOfFirstEvent;
    unsigned short uwNumOfFirstMorphData;
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_int.c lines 39–40 */
/* addr: 0x0027be80  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 39
 *   +0x0014 -> line 40
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstA3dGENERAL_ *fn_p_GetA3dGENERAL(unsigned short _uwNumOfA3dGENERAL)
{
    return &g_ax_pA3dGENERAL[_uwNumOfA3dGENERAL];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_int.c lines 534–591 */
/* addr: 0x0027bea0  size: 476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 534
 *   +0x0008 -> line 547
 *   +0x000c -> line 534
 *   +0x0034 -> line 542
 *   +0x0068 -> line 547
 *   +0x0078 -> line 550
 *   +0x0080 -> line 555
 *   +0x0088 -> line 558
 *   +0x0090 -> line 561
 *   +0x00b0 -> line 564
 *   +0x00f0 -> line 565
 *   +0x00f8 -> line 566
 *   +0x0110 -> line 569
 *   +0x0114 -> line 568
 *   +0x011c -> line 570
 *   +0x0120 -> line 568
 *   +0x012c -> line 570
 *   +0x0134 -> line 571
 *   +0x0140 -> line 572
 *   +0x0148 -> line 574
 *   +0x014c -> line 577
 *   +0x0154 -> line 581
 *   +0x0160 -> line 587
 *   +0x0168 -> line 585
 *   +0x016c -> line 587
 *   +0x0178 -> line 588
 *   +0x018c -> line 589
 *   +0x01a0 -> line 590
 *   +0x01b4 -> line 591
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_QuatSlerp(float* _a4_xQuatD, float* _a4_xQuatS1, float* _a4_xQuatS2, float _xT)
{
    float xCoef3;
    float xCoef2;
    float xCoef1;
    float xTbyOmega;
    float xSinOmega;
    float xCosOmega;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_int.c lines 519–525 */
/* addr: 0x0027c080  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 519
 *   +0x0010 -> line 521
 *   +0x0014 -> line 522
 *   +0x0030 -> line 524
 *   +0x0034 -> line 525
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float fn_xRModulus(float xValue, float xModulus)
{
    register float xTempo;

    xTempo = xModulus;
    if (xModulus <= xValue)
    {
        do
        {
            xTempo = xTempo + xModulus;
        } while (xTempo <= xValue);
    }
    return xValue - (xTempo - xModulus);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_int.c lines 398–418 */
/* addr: 0x0027c0c0  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 398
 *   +0x0004 -> line 407
 *   +0x0008 -> line 399
 *   +0x000c -> line 400
 *   +0x0010 -> line 402
 *   +0x0014 -> line 407
 *   +0x0018 -> line 398
 *   +0x001c -> line 402
 *   +0x0028 -> line 399
 *   +0x002c -> line 400
 *   +0x0030 -> line 402
 *   +0x0044 -> line 403
 *   +0x0068 -> line 404
 *   +0x0078 -> line 407
 *   +0x007c -> line 404
 *   +0x0090 -> line 407
 *   +0x00a0 -> line 408
 *   +0x00b0 -> line 409
 *   +0x00c0 -> line 411
 *   +0x00d0 -> line 412
 *   +0x00e4 -> line 413
 *   +0x00f4 -> line 415
 *   +0x0104 -> line 416
 *   +0x0114 -> line 417
 *   +0x0124 -> line 418
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_QuatToMatrix(float (*_a3a3_xMtx)[3], float* _a4_xQuat)
{
    float xZS;
    float xYS;
    float xXS;
    float xYY;
    float xXX;
    float xWX;
    float xYZ;
    float xWY;
    float xXZ;
    float xZZ;
    float xWZ;
    float xXY;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_int.c lines 86–90 */
/* addr: 0x0027c1f0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 86
 *   +0x0024 -> line 87
 *   +0x003c -> line 88
 *   +0x0054 -> line 89
 *   +0x0068 -> line 90
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_ExpandQuat(float* _a4_xQuatD, short* _a4_xQuatS)
{
    /* TODO: decompile from asm/... */
}
