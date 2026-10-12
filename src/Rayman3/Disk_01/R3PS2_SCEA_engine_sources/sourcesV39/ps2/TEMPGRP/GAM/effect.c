/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\effect.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/MAT.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstFootPath_ tdstFootPath_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct tdstWaterStreakEffect_ tdstWaterStreakEffect_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct tdstWaterFoam_ tdstWaterFoam_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstFootPath_ {
    short xNumberOfAlphaLevels; /* +0x0 */
    float a8_xAlphaColor[8]; /* +0x4 */
    short a8_xNumberOfPoints[8]; /* +0x24 */
    short a8_xMaxNumberOfFaces[8]; /* +0x34 */
    short a8_xNumberOfFaces[8]; /* +0x44 */
    short a8_xNextFaces[8]; /* +0x54 */
    MTH3D_tdstVector_ a2_stOffset[2]; /* +0x64 */
    float a2_xScale[2]; /* +0x7c */
    int a8_hGeomObj[8]; /* +0x84 */
    GLI_tdstMaterial_* hFootPrintVisualMaterial; /* +0xa4 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct tdstWaterStreakEffect_ {
    int lNbFoams; /* +0x0 */
    int lNbGraphicFoams; /* +0x4 */
    tdstWaterFoam_* a_stFoams; /* +0x8 */
    unsigned int ulLastTimeOfShift; /* +0xc */
    float xFoamXZoom; /* +0x10 */
    float xFoamYZoom; /* +0x14 */
    int lFoamFrameCounter; /* +0x18 */
    GEO_tdstGeometricObject_** a_hFoamObjectTable; /* +0x1c */
    float xAttenuationCoeff; /* +0x20 */
    float xLifeTimeFrequency; /* +0x24 */
    int lLifeTime; /* +0x28 */
    int lTimeBetweenTwoShifts; /* +0x2c */
    float xTimeWindow; /* +0x30 */
    float xGap; /* +0x34 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct tdstWaterFoam_ {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    unsigned char bFoamIsActive; /* +0xc */
    int lLifeTime; /* +0x10 */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x30 */
    GEO_tdstDoubledIndex_* d_stListOfEdgesDI; /* +0x40 */
    short xNbEdgesDI; /* +0x44 */
    short xNbOctreeEdges; /* +0x46 */
    int bUsedForShadowDrawing; /* +0x48 */
    int bUsedForShadowCreating; /* +0x4c */
    int pSDC_Data; /* +0x50 */
    unsigned int bIsStatic; /* +0x54 */
    unsigned int glDisplayList; /* +0x58 */
    unsigned char bVTForSinus; /* +0x5c */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
int HIE_g_a_hMatrixStack[50];
int HIE_g_lNbMatrixInStack;
int gp_stLight;

typedef struct tdstEngineObject_ tdstEngineObject_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct DNM_stMecMatCharacteristics DNM_stMecMatCharacteristics;

union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject; /* +0x0 */
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    struct PO_tdstPhysicalObject_* p_stPhysicalObject; /* +0x0 */
    struct IPO_tdstInstanciatedPhysicalObject_* p_stInstanciatedPhysicalObject; /* +0x0 */
    struct SECT_tdstSector_* p_stSector; /* +0x0 */
    tdstEngineObject_* p_stCharacter; /* +0x0 */
    struct GLI_tdstLight_* p_stLight; /* +0x0 */
    struct HIE_tdstModifierObject_* p_stModifierObject; /* +0x0 */
    int p_Void; /* +0x0 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    HIE_tduLinkedObject_ hLinkedObject; /* +0x4 */
    HIE_tdstSuperObject_* hFirstElementDyn; /* +0x8 */
    HIE_tdstSuperObject_* hLastElementDyn; /* +0xc */
    int lNumberOfElementsDyn; /* +0x10 */
    HIE_tdstSuperObject_* hNextBrotherDyn; /* +0x14 */
    HIE_tdstSuperObject_* hPrevBrotherDyn; /* +0x18 */
    HIE_tdstSuperObject_* hFatherDyn; /* +0x1c */
    MAT_tdstTransformation_* hLocalMatrix; /* +0x20 */
    MAT_tdstTransformation_* hGlobalMatrix; /* +0x24 */
};

struct tdstEngineObject_ {
    struct tdst3dData_* h_3dData; /* +0x0 */
    struct tdstStandardGame_* h_StandardGame; /* +0x4 */
    struct tdstDynam_* h_Dynam; /* +0x8 */
    struct tdstBrain_* h_Brain; /* +0xc */
    struct tdstCineinfo_* h_Cineinfo; /* +0x10 */
    struct tdstCollSet_* h_CollSet; /* +0x14 */
    struct tdstMSWay_* h_MSWay; /* +0x18 */
    struct tdstMSLight_* h_MSLight; /* +0x1c */
    struct tdstSectInfo_* h_SectInfo; /* +0x20 */
    struct tdstMicro_* h_Micro; /* +0x24 */
    struct tdstMSSound_* h_MSSound; /* +0x28 */
};

struct DNM_stMecMatCharacteristics {
    float m_xSlide; /* +0x0 */
    float m_xRebound; /* +0x4 */
};

struct DNM_stMecObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    struct GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    struct GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
    int m_eType; /* +0x28 */
    short m_xMyEntity; /* +0x2c */
    short m_xCollidedEntity; /* +0x2e */
    MTH3D_tdstVector_ m_stTranslation; /* +0x30 */
    MTH3D_tdstVector_ m_stZoneMove; /* +0x3c */
    MTH3D_tdstVector_ m_stZonePosition; /* +0x48 */
    float m_xZoneRadius; /* +0x54 */
    DNM_stMecMatCharacteristics m_stProperties; /* +0x58 */
    DNM_stMecMatCharacteristics m_stMyProperties; /* +0x60 */
};

extern unsigned char g_ucIsEdInGhostMode;
extern DNM_stMecObstacle* COL_g_stCollisionCaseReal;
extern int COL_g_lNbElementsInTable;
void VU0_fn_vLoadPrgCollision(void);
int CAM_fn_bSuperObjectIsACamera(HIE_tdstSuperObject_* _h_SprObj);
struct tdstZdxList_* CS_fn_hGetZdxList(unsigned char ucZoneType, HIE_tdstSuperObject_* hSuperObj);
void COL_fn_vResetNbCollidedEdges(void);
HIE_tdstSuperObject_* fn_h_SectInfoGetCurrentSector(struct tdstSectInfo_* h_SectInfo);
void COL_fn_vNewStaticCollisionForCharacter(HIE_tdstSuperObject_* _hCharacter, HIE_tdstSuperObject_* _hSector, MAT_tdstTransformation_* _p_stStartMatrix, MAT_tdstTransformation_* _p_stEndMatrix);

int COL_lHaveITakeSThgIntoTheMug(DNM_stMecObstacle* _a_stResultObstacle, HIE_tdstSuperObject_* _p_stSupObj, MAT_tdstTransformation_* _p_stStartPosition, MAT_tdstTransformation_* _p_stEndPosition)
{
    static float xSlideCoef;
    static float xReboundCoef;
    short i;
    int lResult;
    int lParameter2;
    DNM_stMecObstacle* p_stCurrentResultObstacle;

    lResult = 0;
    VU0_fn_vLoadPrgCollision();
    if (g_ucIsEdInGhostMode && CAM_fn_bSuperObjectIsACamera(_p_stSupObj))
    {
        _a_stResultObstacle->m_eType = 0;
        return 0;
    }
    if (_p_stSupObj->hLinkedObject.p_stCharacter->h_CollSet && CS_fn_hGetZdxList(1, _p_stSupObj))
    {
        COL_g_stCollisionCaseReal = _a_stResultObstacle;
        COL_g_lNbElementsInTable = 0;
        COL_fn_vResetNbCollidedEdges();
        COL_fn_vNewStaticCollisionForCharacter(_p_stSupObj, fn_h_SectInfoGetCurrentSector(_p_stSupObj->hLinkedObject.p_stCharacter->h_SectInfo), _p_stStartPosition, _p_stEndPosition);
        p_stCurrentResultObstacle = _a_stResultObstacle;
        for (i = 0; i < COL_g_lNbElementsInTable; i++)
        {
            lParameter2 = p_stCurrentResultObstacle->m_eType;
            if ((lParameter2 & 1) == 1)
                p_stCurrentResultObstacle->m_eType = 2;
            else
                p_stCurrentResultObstacle->m_eType = 1;
            if (lParameter2 & 2)
                p_stCurrentResultObstacle->m_eType |= 4;
            p_stCurrentResultObstacle->m_stProperties.m_xSlide = xSlideCoef;
            p_stCurrentResultObstacle->m_stProperties.m_xRebound = xReboundCoef;
            p_stCurrentResultObstacle++;
            lResult = i + 1;
        }
    }
    return lResult;
}
