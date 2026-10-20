/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieMtStk.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/COL.h"
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/HIE.h"
#include "r3/LST2.h"
#include "r3/MAT.h"
#include "r3/MTH.h"
#include "r3/SECT.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;

int GeoHandle;
float VoidReal;
MAT_tdstTransformation_* g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
int HIE_g_a_hMatrixStack[50];
int HIE_g_lNbMatrixInStack;
MAT_tdstTransformation_ Global_tempCamStackMatrix;
unsigned int HIE_g_lNbMatrixInCameraStack;
MAT_tdstTransformation_ HIE_g_a_stCameraMatrixStack[51];
int g_p_stCurrentInCamCoordsMatrix;

/* Shared with HieSpObj.c (PS2 fast matrix stack). */
extern MAT_tdstTransformation_ PS2_MatStack[51];
extern unsigned int PS2_MatStackIndex;
extern int HIE_gs_lCurrentFrame;

void HIE_fn_vFastPS2PushMatrix(HIE_tdstSuperObject_* _hSprObj)
{
    /* VU0 macro-mode matrix copies and product: these instructions have no C
       form (one line per instruction in the target). The operand pointers are
       locals because MWCC asm rejects a member of a pointed-to struct as a
       base ("illegal addressing mode"). */
    if (PS2_MatStackIndex == 0)
    {
        MAT_tdstTransformation_* p_stMatrix;
        MTH4D_tdstMatrix_* p_stSource;
        MTH4D_tdstMatrix_* p_stDestination;

        p_stMatrix = &PS2_MatStack[PS2_MatStackIndex]; p_stSource = &_hSprObj->hGlobalMatrix->stTransformMatrix; p_stDestination = &PS2_MatStack[PS2_MatStackIndex].stTransformMatrix;
        asm {
            lqc2 vf1, 0x0(p_stSource)
            lqc2 vf2, 0x10(p_stSource)
            lqc2 vf3, 0x20(p_stSource)
            lqc2 vf4, 0x30(p_stSource)
            sqc2 vf1, 0x0(p_stDestination)
            sqc2 vf2, 0x10(p_stDestination)
            sqc2 vf3, 0x20(p_stDestination)
            sqc2 vf4, 0x30(p_stDestination)
        }
        HIE_g_hCurrentMatrix = (int)p_stMatrix; g_p_stCurrentMatrix = p_stMatrix;
        _hSprObj->lLastComputeFrame = HIE_gs_lCurrentFrame;
        PS2_MatStackIndex++;
    }
    else
    {
        unsigned char bCopyMatrix;

        bCopyMatrix = (_hSprObj->lLastComputeFrame == HIE_gs_lCurrentFrame); if (!bCopyMatrix) { bCopyMatrix = (_hSprObj->lLastComputeFrame == -1); } if (bCopyMatrix != 0)
        {
            MAT_tdstTransformation_* p_stMatrix;
            MTH4D_tdstMatrix_* p_stSource;
            MTH4D_tdstMatrix_* p_stDestination;

            p_stMatrix = &PS2_MatStack[PS2_MatStackIndex]; p_stSource = &_hSprObj->hGlobalMatrix->stTransformMatrix; p_stDestination = &PS2_MatStack[PS2_MatStackIndex].stTransformMatrix;
            asm {
                lqc2 vf1, 0x0(p_stSource)
                lqc2 vf2, 0x10(p_stSource)
                lqc2 vf3, 0x20(p_stSource)
                lqc2 vf4, 0x30(p_stSource)
                sqc2 vf1, 0x0(p_stDestination)
                sqc2 vf2, 0x10(p_stDestination)
                sqc2 vf3, 0x20(p_stDestination)
                sqc2 vf4, 0x30(p_stDestination)
            }
            HIE_g_hCurrentMatrix = (int)p_stMatrix; g_p_stCurrentMatrix = p_stMatrix;
            PS2_MatStackIndex++;
        }
        else
        {
            MAT_tdstTransformation_* p_stMatrix;
            MAT_tdstTransformation_* p_stPrevious;
            MTH4D_tdstMatrix_* p_stStackMatrix;
            MTH4D_tdstMatrix_* p_stGlobalMatrix;
            MTH4D_tdstMatrix_* p_stPreviousMatrix;
            MTH4D_tdstMatrix_* p_stLocalMatrix;

            p_stMatrix = &PS2_MatStack[PS2_MatStackIndex]; p_stPrevious = &PS2_MatStack[PS2_MatStackIndex - 1]; p_stGlobalMatrix = &_hSprObj->hGlobalMatrix->stTransformMatrix; p_stPreviousMatrix = &p_stPrevious->stTransformMatrix; p_stStackMatrix = &PS2_MatStack[PS2_MatStackIndex].stTransformMatrix; p_stLocalMatrix = &_hSprObj->hLocalMatrix->stTransformMatrix;
            asm {
                lqc2 vf1, 0x0(p_stPreviousMatrix)
                lqc2 vf2, 0x10(p_stPreviousMatrix)
                lqc2 vf3, 0x20(p_stPreviousMatrix)
                lqc2 vf4, 0x30(p_stPreviousMatrix)
                lqc2 vf5, 0x0(p_stLocalMatrix)
                lqc2 vf6, 0x10(p_stLocalMatrix)
                lqc2 vf7, 0x20(p_stLocalMatrix)
                lqc2 vf8, 0x30(p_stLocalMatrix)

                vmulax.xyzw ACC, vf1, vf5x
                vmadday.xyzw ACC, vf2, vf5y
                vmaddz.xyzw vf9, vf3, vf5z

                vmulax.xyzw ACC, vf1, vf6x
                vmadday.xyzw ACC, vf2, vf6y
                vmaddz.xyzw vf10, vf3, vf6z

                vmulax.xyzw ACC, vf1, vf7x
                vmadday.xyzw ACC, vf2, vf7y
                vmaddz.xyzw vf11, vf3, vf7z

                vmulax.xyzw ACC, vf1, vf8x
                vmadday.xyzw ACC, vf2, vf8y
                vmaddaz.xyzw ACC, vf3, vf8z
                vmaddw.xyzw vf12, vf4, vf0w

                sqc2 vf9, 0x0(p_stGlobalMatrix)
                sqc2 vf10, 0x10(p_stGlobalMatrix)
                sqc2 vf11, 0x20(p_stGlobalMatrix)
                sqc2 vf12, 0x30(p_stGlobalMatrix)
                sqc2 vf9, 0x0(p_stStackMatrix)
                sqc2 vf10, 0x10(p_stStackMatrix)
                sqc2 vf11, 0x20(p_stStackMatrix)
                sqc2 vf12, 0x30(p_stStackMatrix)
            }
            HIE_g_hCurrentMatrix = (int)p_stMatrix; g_p_stCurrentMatrix = p_stMatrix;
            PS2_MatStackIndex++;
            _hSprObj->hGlobalMatrix->eType = MAT_eTransform_Rotation;
            _hSprObj->lLastComputeFrame = HIE_gs_lCurrentFrame;
        }
    }
}

unsigned char HIE_fn_bInitCameraMatrixStack(GLD_tdstViewportAttributes_* _hVpt)
{
    HIE_g_lNbMatrixInCameraStack = 0;
    HIE_g_a_stCameraMatrixStack[0] = *(MAT_tdstTransformation_*)((unsigned char *)(*(int *)(*(int *)((unsigned char *)_hVpt + 0x68))) + 0x10);
    HIE_g_lNbMatrixInCameraStack++;
    g_p_stCurrentInCamCoordsMatrix = (int)((unsigned char *)&HIE_g_a_stCameraMatrixStack[HIE_g_lNbMatrixInCameraStack - 1]);
    return 1;
}

unsigned char HIE_fn_bLoadIdentity(void)
{
    unsigned int uIndex;
    MAT_tdstTransformation_* p_stMatrix;
    if (HIE_g_lNbMatrixInStack == 50) return 0;

    HIE_g_a_hMatrixStack[HIE_g_lNbMatrixInStack] = HIE_g_a_hMatrixStack[0];
    HIE_g_lNbMatrixInStack++;
    g_p_stCurrentMatrix = (MAT_tdstTransformation_*)(HIE_g_hCurrentMatrix = HIE_g_a_hMatrixStack[HIE_g_lNbMatrixInStack - 1]);
    return 1;
}

void HIE_fn_vInitMatrixStack(void)
{
    HIE_g_lNbMatrixInStack = 0;
    MAT_fn_vSetIdentity((MAT_tdstTransformation_*)HIE_g_a_hMatrixStack[0]);
    HIE_g_lNbMatrixInStack++;
    g_p_stCurrentMatrix = (MAT_tdstTransformation_*)(HIE_g_hCurrentMatrix = HIE_g_a_hMatrixStack[HIE_g_lNbMatrixInStack - 1]);
}

void HIE_fn_vCreateMatrixStack(void)
{
    MAT_tdstTransformation_* p_stMatrix;

    p_stMatrix = (MAT_tdstTransformation_ *)HMU_fn_p_vMalloc(0x60, 0);
    MAT_fn_vSetIdentity(p_stMatrix);
    HIE_g_a_hMatrixStack[0] = (int)p_stMatrix;
    HIE_g_lNbMatrixInStack = 1;
}
