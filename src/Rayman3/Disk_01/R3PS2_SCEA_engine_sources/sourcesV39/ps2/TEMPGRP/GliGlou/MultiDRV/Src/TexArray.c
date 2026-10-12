/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/GLI.h"

/* Recovered aggregate layouts from MWCC debug type records. */

int gs_lNumberOfTextureToCreate;
unsigned int GLI_g_ulNumberOfLoadedTexture;
int *gs_aDEFTableOfTextureMemoryChannels;
GLI_tdstTexture_ **gs_aDEFTableOfTextureAlreadyRead;
unsigned int GLI_gsCurrentMemoryChannel;

void GLI_TEX_vSignalCurrentMemoryChannel(unsigned char ucCurrentChannel)
{
    GLI_gsCurrentMemoryChannel = ucCurrentChannel;
}

void GLI_vUnCompressExistantTexture(void)
{
    int lTextureCounter;
    int lTextureOffset;

    lTextureCounter = 0;
    lTextureOffset = 0;
    do {
        if (*((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset)) != 0xC0DE0005) {
            if (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)) != NULL) {
                (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lHeight = (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lRealHeight;
                (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lWidth = (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lRealWidth;
                (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lCompressionCounter = 0;
            }
        }
        lTextureCounter++;
        lTextureOffset += 4;
    } while (lTextureCounter < 0x190);
}

int GLI_lGetBigestSizeOfTexture(void)
{
    return 0x40400;
}

void GLI_fn_vUnallocAllTextures(void)
{
    int lTextureCounter;
    int lTextureOffset;

    lTextureCounter = 0;
    lTextureOffset = 0;
    do {
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 0)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 0)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 4)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 4)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 8)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 8)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 12)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 12)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 16)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 16)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 20)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 20)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 24)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 24)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 28)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 28)) = NULL;
        lTextureCounter += 8;
        lTextureOffset += 32;
    } while (lTextureCounter < 0x190);
}
