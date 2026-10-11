/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\readbuf.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;

struct anon_0 {
    unsigned char data[163840]; /* +0x0 */
    int put; /* +0x28000 */
    int count; /* +0x28004 */
    int size; /* +0x28008 */
};

int readBufEndGet(anon_0* b, int size)
{
    size = size < b->count ? size : b->count;
    b->count -= size;
    return size;
}

int readBufBeginGet(anon_0* b, unsigned char** ptr)
{
    int size;

    if (b->count != 0)
    {

        *ptr = b->data + (b->put - b->count + b->size) % b->size;
    }
    return b->count;
}

int readBufEndPut(anon_0* b, int size)
{
    int available;

    available = b->size - b->count;
    size = available > size ? size : available;
    b->put = (b->put + size) % b->size;
    b->count += size;
    return size;
}

int readBufBeginPut(anon_0* b, unsigned char** ptr)
{
    int size;

    size = b->size - b->count;
    if (size != 0)
        *ptr = b->data + b->put;
    return size;
}

void readBufDelete(void)
{
}

int readBufCreate(anon_0* b)
{
    b->count = 0;
    b->put = 0;
    b->size = 0x28000;
}
