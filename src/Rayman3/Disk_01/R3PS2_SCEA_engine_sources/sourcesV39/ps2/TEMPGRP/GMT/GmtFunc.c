/* GMT (game material) module.
 *
 * The retail ELF carries no .debug or .line records for this module, so the
 * original file name and line numbers are unrecovered.  Function names come
 * from .symtab, aggregate layouts from the GMT_tdstGameMaterial_ and
 * GMT_tdstCollideMaterial_ records emitted by other translation units, and
 * globals from their GP-relative .symtab entries.
 */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

#define GMT_C_InvalidCollideMaterial ((GMT_tdstCollideMaterial_*)-1)

extern unsigned char Erm_fn_ucInitErrMsg(unsigned char);
extern void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
extern void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc);

unsigned char g_ucGmtModuleId = 255;
GMT_tdstGameMaterial_* (*GMT_p_fn_hVirtualCreate)(void);
void (*GMT_p_fn_vVirtualDestroy)(GMT_tdstGameMaterial_*);
void (*GMT_p_fn_vVirtualCopy)(GMT_tdstGameMaterial_*, GMT_tdstGameMaterial_*);

int GMT_fn_xMultipleTestCollideIdentifier(GMT_tdstCollideMaterial_* hCollideMaterial, unsigned short xMask);
int GMT_fn_xTestCollideMaterialTypeOfIdentifier(GMT_tdstCollideMaterial_* hCollideMaterial, short wType);

/* addr: 0x002a4df0  size: 80 bytes */
int GMT_fn_xMultipleTestCollideIdentifierFromGameMaterial(GMT_tdstGameMaterial_* hGameMat, unsigned short xMask)
{
    GMT_tdstCollideMaterial_* hCollideMaterial;

    if (xMask == 0)
        return 1;
    hCollideMaterial = hGameMat->hCollideMaterial;
    if (hCollideMaterial == NULL || hCollideMaterial == GMT_C_InvalidCollideMaterial)
        return 0;
    return GMT_fn_xMultipleTestCollideIdentifier(hCollideMaterial, xMask);
}

/* addr: 0x002a4e40  size: 52 bytes */
int GMT_fn_xTestCollideIdentifierTypeOfGameMaterial(GMT_tdstGameMaterial_* hGameMat, short wType)
{
    GMT_tdstCollideMaterial_* hCollideMaterial;

    hCollideMaterial = hGameMat->hCollideMaterial;
    if (hCollideMaterial == GMT_C_InvalidCollideMaterial)
        return 0;
    return GMT_fn_xTestCollideMaterialTypeOfIdentifier(hCollideMaterial, wType);
}

/* addr: 0x002a4e80  size: 8 bytes */
GMT_tdstCollideMaterial_* GMT_fn_hGetCollideMaterial(GMT_tdstGameMaterial_* hGameMat)
{
    return hGameMat->hCollideMaterial;
}

/* addr: 0x002a4e90  size: 8 bytes */
int GMT_fn_hGetSoundMaterial(GMT_tdstGameMaterial_* hGameMat)
{
    return hGameMat->hSoundMaterial;
}

/* addr: 0x002a4ea0  size: 36 bytes */
int GMT_fn_b_ulIsValid(GMT_tdstGameMaterial_* hGameMat)
{
    return hGameMat != (GMT_tdstGameMaterial_*)0xCDCDCDCD && hGameMat != NULL;
}

/* addr: 0x002a4ed0  size: 48 bytes */
void GMT_fn_vInitGameMaterialErrorAndMemory(void)
{
    if (g_ucGmtModuleId == 255)
        g_ucGmtModuleId = Erm_fn_ucInitErrMsg(g_ucGmtModuleId);
}

/* addr: 0x002a4f00  size: 36 bytes */
void GMT_fn_vDestroyFor3DOS(GMT_tdstGameMaterial_* hGameMat)
{
    HMU_fn_vFree((void**)&hGameMat, 0);
}

/* addr: 0x002a4f30  size: 20 bytes */
void GMT_fn_vCopyFor3DOS(GMT_tdstGameMaterial_* hDst, GMT_tdstGameMaterial_* hSrc)
{
    hDst->hSoundMaterial = hSrc->hSoundMaterial;
    hDst->hCollideMaterial = hSrc->hCollideMaterial;
}

/* addr: 0x002a4f50  size: 56 bytes */
GMT_tdstGameMaterial_* GMT_fn_hCreateFor3DOS(void)
{
    GMT_tdstGameMaterial_* hGameMat;

    hGameMat = (GMT_tdstGameMaterial_*)HMU_fn_p_vMalloc(sizeof(GMT_tdstGameMaterial_), 0);
    if (hGameMat != NULL) {
        hGameMat->hSoundMaterial = -1;
        hGameMat->hCollideMaterial = GMT_C_InvalidCollideMaterial;
        return hGameMat;
    }
    return NULL;
}

/* addr: 0x002a4f90  size: 40 bytes */
void GMT_fn_vInitFor3DOS(void)
{
    GMT_p_fn_hVirtualCreate = GMT_fn_hCreateFor3DOS;
    GMT_p_fn_vVirtualCopy = GMT_fn_vCopyFor3DOS;
    GMT_p_fn_vVirtualDestroy = GMT_fn_vDestroyFor3DOS;
    GMT_fn_vInitGameMaterialErrorAndMemory();
}

/* addr: 0x002a4fc0  size: 8 bytes */
void GMT_fn_vResetEntireMask(unsigned short* p_xMask)
{
    *p_xMask = 0;
}

/* addr: 0x002a4fd0  size: 32 bytes */
int GMT_fn_xMultipleTestCollideIdentifier(GMT_tdstCollideMaterial_* hCollideMaterial, unsigned short xMask)
{
    unsigned short xIdentifier = hCollideMaterial->xIdentifier;
    unsigned short xTmp = xIdentifier & xMask;
    int bResult = (xTmp == xMask);
    return bResult != 0;
}

/* addr: 0x002a4ff0  size: 56 bytes */
int GMT_fn_xTestCollideMaterialTypeOfIdentifier(GMT_tdstCollideMaterial_* hCollideMaterial, short wType)
{
    unsigned short xMask = 1 << wType;
    unsigned short xTmp = (short)xMask & (short)hCollideMaterial->xIdentifier;
    int bResult = (xTmp == 0);
    return bResult ^ 1;
}

/* addr: 0x002a5030  size: 8 bytes */
unsigned short GMT_fn_wGetCollideMaterialTypeForAi(GMT_tdstCollideMaterial_* hCollideMaterial)
{
    return hCollideMaterial->wTypeForAi;
}

/* addr: 0x002a5040  size: 8 bytes */
float GMT_fn_xGetCollideMaterialCoeff(GMT_tdstCollideMaterial_* hCollideMaterial)
{
    return hCollideMaterial->xCoeff;
}

/* addr: 0x002a5050  size: 8 bytes */
MTH3D_tdstVector_* GMT_fn_p_stGetCollideMaterialDirectionHandle(GMT_tdstCollideMaterial_* hCollideMaterial)
{
    return &hCollideMaterial->stDirection;
}

/* addr: 0x002a5060  size: 8 bytes */
unsigned short GMT_fn_hGetCollideMaterialIdentifier(GMT_tdstCollideMaterial_* hCollideMaterial)
{
    return hCollideMaterial->xIdentifier;
}
