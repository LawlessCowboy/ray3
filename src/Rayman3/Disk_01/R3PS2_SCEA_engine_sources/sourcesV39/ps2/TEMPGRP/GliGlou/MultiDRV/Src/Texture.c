/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Texture.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/GLI.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct TEX_tdstPalette_ TEX_tdstPalette_;

struct TEX_tdstPalette_ {
    unsigned char a1024_uccolors[1024]; /* +0x0 */
};

/* These debug symbols are 32-bit pointers to the channel tables, not the
 * table storage itself.  The original TU received their declarations from
 * its platform headers; retain the ELF symbol size (4 bytes) here. */
extern int *gs_aDEFTableOfTextureMemoryChannels;
extern int *gs_aDEFTableOfTextureAlreadyRead;

void GLI_fn_vUnallocTextureInChannel(unsigned char _ucChannel)
{
    int lTextureCounter;
    int lTextureOffset;

    lTextureCounter = 0;
    lTextureOffset = 0;
    do {
        if (*(int*)((char*)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset) == _ucChannel) {
            *(int*)((char*)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset) = 0xC0DE0005;
            *(int*)((char*)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset) = 0;
        }
        lTextureCounter++;
        lTextureOffset += 4;
    } while (lTextureCounter < 0x190);
}

void TEX_fn_vSetTextureCaps(GLI_tdstTexture_* p_stTexture, int _lTextureCaps)
{
    p_stTexture->lTextureCaps = _lTextureCaps;
}

int TEX_fn_lGetTextureCaps(GLI_tdstTexture_* p_stTexture)
{
    return p_stTexture->lTextureCaps;
}

int TEX_fn_lGetTextureRealWidth(GLI_tdstTexture_* p_stTexture)
{
    return p_stTexture->lRealWidth;
}

int TEX_fn_lGetTextureRealHeight(GLI_tdstTexture_* p_stTexture)
{
    return p_stTexture->lRealHeight;
}
