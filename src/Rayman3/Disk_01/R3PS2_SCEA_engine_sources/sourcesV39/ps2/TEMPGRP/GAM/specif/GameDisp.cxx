/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\GameDisp.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct tdstEngineStructure_ tdstEngineStructure_;

struct MTH3D_tdstVector_ {
    float xX;
    float xY;
    float xZ;
};

typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GEO_tdstColor_ { float xR; float xG; float xB; float xA; } GEO_tdstColor_;
typedef struct GLD_tdstViewportAttributes_ { unsigned char _pad[0x70]; } GLD_tdstViewportAttributes_;
typedef struct MAT_tdstTransformation_ { int eType; unsigned char _pad0[12]; struct { float a[12]; MTH3D_tdstVector_ stPos; float w; } stTransformMatrix; unsigned char _pad1[0x20]; } MAT_tdstTransformation_;
typedef struct SECT_tdstSector_ {
    unsigned char _pad0[0xc];
    struct { GLI_tdstLight_** hFirstElementOpt; int lNumberOfElementsOpt; } stListOfStaticLights; /* +0xc */
} SECT_tdstSector_;
typedef struct tdstEngineObject_ {
    int h_3dData; /* +0x0 */
    int h_StandardGame; /* +0x4 */
    int h_Dynam; /* +0x8 */
    int h_Brain; /* +0xc */
    int h_Cineinfo; /* +0x10 */
    unsigned char _pad[0xc]; /* +0x14 */
    int h_MSLight; /* +0x1c */
    int h_SectInfo; /* +0x20 */
} tdstEngineObject_;
struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    union {
        SECT_tdstSector_* p_stSector;
        tdstEngineObject_* p_stCharacter;
    } hLinkedObject; /* +0x4 */
    unsigned char _pad[0x18]; /* +0x8 */
    MAT_tdstTransformation_* hLocalMatrix; /* +0x20 */
    MAT_tdstTransformation_* hGlobalMatrix; /* +0x24 */
};
struct tdstEngineStructure_ {
    unsigned char _pad0[0x60];
    unsigned int ulDisplayMode; /* +0x60 */
    unsigned char _pad1[0x104 - 0x64];
    short hGLDDevice; /* +0x104 */
    short a_hGLDViewport[5]; /* +0x106 */
    GLD_tdstViewportAttributes_ a_stViewportAttr[5]; /* +0x110 */
};

extern "C" {
extern struct tdstEngineStructure_ g_stEngineStructure;
extern unsigned char g_ucGameModuleId;
int GLD_bBeginWriteToDevice(short hDevice);
int GLD_bRequestWriteToViewport(short hDevice, short hViewport, GLD_tdstViewportAttributes_* p_stAttr, int* p_bWriteEnabled);
int GLD_bEndWriteToDevice(short hDevice, GLD_tdstViewportAttributes_* p_stAttr);
int GLD_bSetBackgroundColorForDevice(short hDevice, unsigned int crRGB);
void GLI_xClearViewingList(void);
void GLI_vClearViewportRegion(GLD_tdstViewportAttributes_* p_stAttr);
unsigned short GLI_lGetLightType(GLI_tdstLight_* p_stLight);
void GLI_xGetLightBackgroundColor(GLI_tdstLight_* p_stLight, GEO_tdstColor_* p_stColor);
short fn_hGetGLDDevice(int param0);
void Erm_fn_ClearLastError(int);
void Erm_fn_v_UpdateLastError(int, unsigned char, int, int, int, int, int, void*);
void GEO_fn_vMorphAddInMainLoop(void);
HIE_tdstSuperObject_* CAM_fn_hGetActiveCamera(int _lViewportNumber);
HIE_tdstSuperObject_* fn_h_SectInfoGetCurrentSector(int h_SectInfo);
void CAM_fn_vApplyTransparencyOnSuperObject(int h_Cineinfo);
void CAM_fn_vRestoreTransparencyOnSuperObject(int h_Cineinfo);
void IPO_fn_vFrameInitForRLITables(void);
void IPO_fn_vFrameEndForRLITables(void);
void SHW_fn_vInitShadowCounter(void);
void SCT_fn_vSendSectorWhereIAmToViewportWithMirror(MTH3D_tdstVector_* p_stPos, short hDevice, short hViewport, GLD_tdstViewportAttributes_* p_stAttr, HIE_tdstSuperObject_* hSector, unsigned int ulDisplayMode);
}
inline GLD_tdstViewportAttributes_* GAM_p_stGetViewportAttr(unsigned char ucIndex)
{
    return &g_stEngineStructure.a_stViewportAttr[ucIndex];
}
inline short GAM_hGetViewport(unsigned char ucIndex)
{
    return g_stEngineStructure.a_hGLDViewport[ucIndex];
}
/* The target writes COP0 register 24 (mtc0 zero, $24); C cannot express it.
 * Spelled with the R5900 alias mtbpc, MWCC schedules it like an ordinary
 * instruction, as in retail. */
inline void GAM_vClearCop0Register24(void)
{
    asm volatile { mtbpc zero }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\GameDisp.cxx lines 33–320 */
/* addr: 0x0025f940  size: 804 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 33
 *   +0x0004 -> line 62
 *   +0x0008 -> line 33
 *   +0x002c -> line 62
 *   +0x0038 -> line 77
 *   +0x0040 -> line 79
 *   +0x008c -> line 84
 *   +0x00b8 -> line 85
 *   +0x00bc -> line 88
 *   +0x00dc -> line 130
 *   +0x00e4 -> line 131
 *   +0x00e8 -> line 168
 *   +0x00f0 -> line 173
 *   +0x00f4 -> line 168
 *   +0x00f8 -> line 173
 *   +0x0110 -> line 175
 *   +0x0120 -> line 178
 *   +0x012c -> line 181
 *   +0x0210 -> line 184
 *   +0x0234 -> line 201
 *   +0x023c -> line 203
 *   +0x0244 -> line 226
 *   +0x0294 -> line 237
 *   +0x029c -> line 239
 *   +0x02a0 -> line 242
 *   +0x02ac -> line 313
 *   +0x02d8 -> line 315
 *   +0x02e0 -> line 316
 *   +0x02f4 -> line 317
 *   +0x02f8 -> line 319
 *   +0x02fc -> line 320
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" char GAM_MultiVP_fn_bWriteFrameToViewPort(unsigned char _ucIndex)
{
    HIE_tdstSuperObject_* hCamCurrentSector;
    MTH3D_tdstVector_ stAbsolutePositionOfCamera;
    HIE_tdstSuperObject_* hSprObjCamera;
    char cReturn;
    int bWriteEnabled;
    GLI_tdstLight_** p_hLight;
    SECT_tdstSector_* p_stSector;
    short i;
    GEO_tdstColor_ stColor;

    cReturn = 1;
    GLD_bBeginWriteToDevice(g_stEngineStructure.hGLDDevice);
    GLI_xClearViewingList();
    if (!GLD_bRequestWriteToViewport(g_stEngineStructure.hGLDDevice, GAM_hGetViewport(_ucIndex), GAM_p_stGetViewportAttr(_ucIndex), &bWriteEnabled))
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 42, -1, 255, 255, NULL);
        cReturn = 0;
    }
    if (bWriteEnabled)
    {
        if (cReturn == 1)
        {
            GAM_vClearCop0Register24();
            GEO_fn_vMorphAddInMainLoop();
            GAM_vClearCop0Register24();
            hSprObjCamera = CAM_fn_hGetActiveCamera(_ucIndex);
            ((int*)&stAbsolutePositionOfCamera)[0] = ((int*)&hSprObjCamera->hGlobalMatrix->stTransformMatrix.stPos)[0];
            ((int*)&stAbsolutePositionOfCamera)[1] = ((int*)&hSprObjCamera->hGlobalMatrix->stTransformMatrix.stPos)[1];
            ((int*)&stAbsolutePositionOfCamera)[2] = ((int*)&hSprObjCamera->hGlobalMatrix->stTransformMatrix.stPos)[2];
            hCamCurrentSector = fn_h_SectInfoGetCurrentSector(hSprObjCamera->hLinkedObject.p_stCharacter->h_SectInfo);
            CAM_fn_vApplyTransparencyOnSuperObject(hSprObjCamera->hLinkedObject.p_stCharacter->h_Cineinfo);
            p_stSector = hCamCurrentSector->hLinkedObject.p_stSector;
            p_hLight = p_stSector->stListOfStaticLights.hFirstElementOpt;
            for (i = 0; i < p_stSector->stListOfStaticLights.lNumberOfElementsOpt; i++, p_hLight++)
            {
                if (GLI_lGetLightType(*p_hLight) == 6)
                {
                    GLI_xGetLightBackgroundColor(*p_hLight, &stColor);
                    GLD_bSetBackgroundColorForDevice(fn_hGetGLDDevice(0), ((int)(stColor.xR * 255.0f) & 0xff) | ((int)(stColor.xG * 255.0f) & 0xff) << 8 | ((int)(stColor.xB * 255.0f) & 0xff) << 16);
                    break;
                }
            }
            GLI_vClearViewportRegion(GAM_p_stGetViewportAttr(_ucIndex));
            GAM_vClearCop0Register24();
            IPO_fn_vFrameInitForRLITables();
            SHW_fn_vInitShadowCounter();
            SCT_fn_vSendSectorWhereIAmToViewportWithMirror(&stAbsolutePositionOfCamera, g_stEngineStructure.hGLDDevice, GAM_hGetViewport(_ucIndex), GAM_p_stGetViewportAttr(_ucIndex), hCamCurrentSector, g_stEngineStructure.ulDisplayMode);
            IPO_fn_vFrameEndForRLITables();
            GAM_vClearCop0Register24();
            CAM_fn_vRestoreTransparencyOnSuperObject(hSprObjCamera->hLinkedObject.p_stCharacter->h_Cineinfo);
            GLD_bEndWriteToDevice(g_stEngineStructure.hGLDDevice, GAM_p_stGetViewportAttr(_ucIndex));
            return cReturn;
        }
    }
    if (cReturn == 1)
        cReturn = -1;
    return cReturn;
}
