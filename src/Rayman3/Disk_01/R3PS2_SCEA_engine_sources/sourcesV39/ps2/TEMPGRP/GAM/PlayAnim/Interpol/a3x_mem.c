/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstKeyFrame_ tdstKeyFrame_;
typedef struct tdstOnlyFrame_ tdstOnlyFrame_;
typedef struct tdstA3dGENERAL_ tdstA3dGENERAL_;
typedef struct tdstHierarchy_ tdstHierarchy_;
typedef struct tdstNTTO_ tdstNTTO_;
typedef struct tdstChannel_ tdstChannel_;
typedef struct tdstDeformation_ tdstDeformation_;
typedef struct tdstStackInfos_ tdstStackInfos_;
typedef struct tdstA3dGENERAL_ForTransitions_ tdstA3dGENERAL_ForTransitions_;

struct tdstKeyFrame_ {
    unsigned short uwFrameNumber; /* +0x0 */
    unsigned short uwMask; /* +0x2 */
    unsigned short uwNumOfQuatOri; /* +0x4 */
    unsigned short uwNumOfQuatSca; /* +0x6 */
    unsigned short uwNumOfScaleValues; /* +0x8 */
    unsigned short uwNumOfPosition; /* +0xa */
    short swInterpolationParameter; /* +0xc */
};

struct tdstOnlyFrame_ {
    unsigned short uwNumOfAngularSpeedQuat; /* +0x0 */
    unsigned short uwNumOfSpeedVector; /* +0x2 */
    unsigned short uwHierarchyNbCouples; /* +0x4 */
    unsigned short uwNumOfFirstHierarchyCouple; /* +0x6 */
    unsigned short uwDeformationNb; /* +0x8 */
    unsigned short uwNumOfFirstDeformation; /* +0xa */
    unsigned short uwNumOfSavedFrame; /* +0xc */
};

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

struct tdstHierarchy_ {
    unsigned short uwChild; /* +0x0 */
    unsigned short uwFather; /* +0x2 */
};

struct tdstNTTO_ {
    unsigned short uwTypeOfObject; /* +0x0 */
    unsigned short ucNumberInTable; /* +0x2 */
    unsigned char ucTransparency; /* +0x4 */
};

struct tdstChannel_ {
    unsigned short uwNumberOfKeys; /* +0x0 */
    unsigned short uwChannelNumber; /* +0x2 */
    unsigned short uwNumOfLocalPivotPos; /* +0x4 */
    unsigned short uwNumOfFirstFrame; /* +0x6 */
    unsigned int ulNumOfFirstFrameKF; /* +0x8 */
    unsigned int ulNumOfFirstKeyFrame; /* +0xc */
};

struct tdstDeformation_ {
    unsigned short uwChannel1; /* +0x0 */
    unsigned short uwFrontier1; /* +0x2 */
    unsigned short uwChannel2; /* +0x4 */
    unsigned short uwFrontier2; /* +0x6 */
};

struct tdstStackInfos_ {
    unsigned int ulPosAlloc; /* +0x0 */
    unsigned int ulStackPos; /* +0x4 */
    unsigned int ulMaxPos; /* +0x8 */
    unsigned int ulResetPos; /* +0xc */
    unsigned int ulFamilyPos; /* +0x10 */
};

struct tdstA3dGENERAL_ForTransitions_ {
    unsigned short uwPrevious; /* +0x0 */
    unsigned short uwNext; /* +0x2 */
    unsigned short uwPreviousFrame; /* +0x4 */
    unsigned short uwNextFrame; /* +0x6 */
    unsigned short uwNumberOfMorphData; /* +0x8 */
    unsigned short uwNoSpeed; /* +0xa */
    float xNLParameter; /* +0xc */
};

int g_i_CurrentStorageBank;
unsigned int ulFreePlaceInMergeStack;
tdstA3dGENERAL_ForTransitions_ a32_stA3dGENERALTransitionArray[32];
unsigned int ulFirstTmpA3dGeneral;
int gp_stDeformations;
int gp_stMorphData;
int gp_stEvents;
int gp_stKeyFrames;
int gp_FramesKFIndex;
int gp_FramesNumOfNTTO;
int gp_stChannels;
int gp_stOnlyFrames;
int gp_stNTTO;
int gp_stHierarchies;
short (*gp_a4_xQuaternions)[4];
MTH3D_tdstVector_* gp_a3_xVectors;
int gp_stA3dGENERAL;
int g_ax_pDeformations[100];
int g_ax_pMorphData[100];
int g_ax_pEvents[100];
int g_ax_pKeyFrames[100];
int g_ax_pFramesKFIndex[100];
int g_ax_pFramesNumOfNTTO[100];
int g_ax_pChannels[100];
int g_ax_pOnlyFrames[100];
int g_ax_pNTTO[100];
int g_ax_pHierarchies[100];
int g_ax_pQuaternions[100];
int g_ax_pVectors[100];
int g_ax_pA3dGENERAL[100];
tdstStackInfos_ g_tdstStackInfos[100][13];
unsigned char g_ucGameModuleId;
extern float a4_xQuater1[4];

void fn_v_ExpandQuat(float* _a4_xQuatD, short* _a4_xQuatS);
void fn_v_QuatSlerp(float* _a4_xQuatD, float* _a4_xQuatS1, float* _a4_xQuatS2, float _xT);

/* Copy the three components of a vector through a single source pointer. */
#define A3X_M_CopyVector3(_p_dst, _p_src) \
    { \
        MTH3D_tdstVector_* pSrc = (_p_src); \
        (_p_dst)->xX = pSrc->xX; (_p_dst)->xY = pSrc->xY; (_p_dst)->xZ = pSrc->xZ; \
    }

void fn_v_InterpolBetweenKeys(tdstKeyFrame_* _p_stKey1, tdstKeyFrame_* _p_stKey2, tdstChannel_* _p_stChannel, stInterpolatedPosition* _p_stResult, float _xT)
{
    float a4_xQuatS1[4];
    float a4_xQuatS2[4];

    if ((_xT == 0.0f) || (_p_stKey1->uwNumOfQuatOri == _p_stKey2->uwNumOfQuatOri) || ((_p_stKey1->uwMask & 0x2000) == 0x2000))
    {
        if (!(_p_stKey1->uwMask & 0x10))
        {
            fn_v_ExpandQuat(_p_stResult->stRot, gp_a4_xQuaternions[_p_stKey1->uwNumOfQuatOri]);
        }
        else
        {
            _p_stResult->stRot[0] = a4_xQuater1[0]; _p_stResult->stRot[1] = a4_xQuater1[1]; _p_stResult->stRot[2] = a4_xQuater1[2]; _p_stResult->stRot[3] = a4_xQuater1[3];
        }
    }
    else
    {
        fn_v_ExpandQuat(a4_xQuatS1, gp_a4_xQuaternions[_p_stKey1->uwNumOfQuatOri]);
        fn_v_ExpandQuat(a4_xQuatS2, gp_a4_xQuaternions[_p_stKey2->uwNumOfQuatOri]);
        fn_v_QuatSlerp(_p_stResult->stRot, a4_xQuatS1, a4_xQuatS2, _xT);
    }

    if ((_xT != 0.0f) || !(_p_stKey1->uwMask & 0x40) || !(_p_stKey1->uwMask & 0x2000))
    {
        _p_stResult->stVecSca.xX = ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfScaleValues])[0] + _xT * (((float*)&gp_a3_xVectors[_p_stKey2->uwNumOfScaleValues])[0] - ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfScaleValues])[0]); _p_stResult->stVecSca.xY = ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfScaleValues])[1] + _xT * (((float*)&gp_a3_xVectors[_p_stKey2->uwNumOfScaleValues])[1] - ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfScaleValues])[1]); _p_stResult->stVecSca.xZ = ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfScaleValues])[2] + _xT * (((float*)&gp_a3_xVectors[_p_stKey2->uwNumOfScaleValues])[2] - ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfScaleValues])[2]);
        if ((_xT == 0.0f) || (_p_stKey1->uwMask & 0x2))
        {
            if (_p_stKey1->uwMask & 0x20)
            {
                _p_stResult->stRotSca[0] = a4_xQuater1[0]; _p_stResult->stRotSca[1] = a4_xQuater1[1]; _p_stResult->stRotSca[2] = a4_xQuater1[2]; _p_stResult->stRotSca[3] = a4_xQuater1[3];
            }
            else
            {
                fn_v_ExpandQuat(_p_stResult->stRotSca, gp_a4_xQuaternions[_p_stKey1->uwNumOfQuatSca]);
            }
        }
        else
        {
            fn_v_ExpandQuat(a4_xQuatS1, gp_a4_xQuaternions[_p_stKey1->uwNumOfQuatSca]);
            fn_v_ExpandQuat(a4_xQuatS2, gp_a4_xQuaternions[_p_stKey2->uwNumOfQuatSca]);
            fn_v_QuatSlerp(_p_stResult->stRotSca, a4_xQuatS1, a4_xQuatS2, _xT);
        }
    }
    else
    {
        if (!(_p_stKey1->uwMask & 0x40))
        {
            fn_v_ExpandQuat(_p_stResult->stRotSca, gp_a4_xQuaternions[_p_stKey1->uwNumOfQuatSca]);
            A3X_M_CopyVector3(&_p_stResult->stVecSca, &gp_a3_xVectors[_p_stKey1->uwNumOfScaleValues]);
        }
        else
        {
            _p_stResult->stRotSca[0] = a4_xQuater1[0]; _p_stResult->stRotSca[1] = a4_xQuater1[1]; _p_stResult->stRotSca[2] = a4_xQuater1[2]; _p_stResult->stRotSca[3] = a4_xQuater1[3];
            A3X_M_CopyVector3(&_p_stResult->stVecSca, &gp_a3_xVectors[_p_stKey1->uwNumOfScaleValues]);
        }
    }

    if ((_xT == 0.0f) || (_p_stKey1->uwNumOfPosition == _p_stKey2->uwNumOfPosition) || ((_p_stKey1->uwMask & 0x2000) == 0x2000))
    {
        A3X_M_CopyVector3(&_p_stResult->stPos, &gp_a3_xVectors[_p_stKey1->uwNumOfPosition]);
        _p_stResult->stPos.xX += ((float*)&gp_a3_xVectors[_p_stChannel->uwNumOfLocalPivotPos])[0]; _p_stResult->stPos.xY += ((float*)&gp_a3_xVectors[_p_stChannel->uwNumOfLocalPivotPos])[1]; _p_stResult->stPos.xZ += ((float*)&gp_a3_xVectors[_p_stChannel->uwNumOfLocalPivotPos])[2];
    }
    else
    {
        _p_stResult->stPos.xX = ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfPosition])[0] + _xT * (((float*)&gp_a3_xVectors[_p_stKey2->uwNumOfPosition])[0] - ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfPosition])[0]); _p_stResult->stPos.xY = ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfPosition])[1] + _xT * (((float*)&gp_a3_xVectors[_p_stKey2->uwNumOfPosition])[1] - ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfPosition])[1]); _p_stResult->stPos.xZ = ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfPosition])[2] + _xT * (((float*)&gp_a3_xVectors[_p_stKey2->uwNumOfPosition])[2] - ((float*)&gp_a3_xVectors[_p_stKey1->uwNumOfPosition])[2]);
        _p_stResult->stPos.xX += ((float*)&gp_a3_xVectors[_p_stChannel->uwNumOfLocalPivotPos])[0]; _p_stResult->stPos.xY += ((float*)&gp_a3_xVectors[_p_stChannel->uwNumOfLocalPivotPos])[1]; _p_stResult->stPos.xZ += ((float*)&gp_a3_xVectors[_p_stChannel->uwNumOfLocalPivotPos])[2];
    }
}

tdstA3dGENERAL_ForTransitions_* fn_p_GetA3dGENERALForTransitions(unsigned short uwIndex)
{
    return &a32_stA3dGENERALTransitionArray[uwIndex];
}

void fn_vReleaseMergeA3dGeneral(unsigned short _uwIndex)
{
    unsigned int ubBitToSet;
    ubBitToSet = 1;
    ubBitToSet <<= _uwIndex;
    ulFreePlaceInMergeStack &= ~ubBitToSet;
}

tdstA3dGENERAL_ForTransitions_* fn_p_stFindFreeMergeA3dGeneral(unsigned short* p_uwIndex)
{
    unsigned int ulTest;
    int i;

    ulTest = 1;
    i = 0;
    while ((ulTest & ulFreePlaceInMergeStack) && (i < 32))
    {
        ulTest <<= 1;
        i++;
    }
    if (i < 32)
    {
        ulFreePlaceInMergeStack |= ulTest;
        *p_uwIndex = (unsigned short)i;
        return &a32_stA3dGENERALTransitionArray[i];
    }
    return NULL;
}

void fn_v_InitInterpol(void)
{
    fn_v_InitSinTab();
}
