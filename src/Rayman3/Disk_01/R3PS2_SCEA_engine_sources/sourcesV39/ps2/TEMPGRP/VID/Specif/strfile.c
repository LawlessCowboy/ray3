/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\strfile.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_3 anon_3;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;

struct anon_3 {
    unsigned int lsn; /* +0x0 */
    unsigned int size; /* +0x4 */
    char name[16]; /* +0x8 */
    unsigned char date[8]; /* +0x18 */
    unsigned int flag; /* +0x20 */
};

struct anon_0 {
    int isOnCD; /* +0x0 */
    int size; /* +0x4 */
    anon_3 fp; /* +0x8 */
    int iopBuf; /* +0x2c */
    int fd; /* +0x30 */
};

struct anon_1 {
    int pos; /* +0x0 */
    int size; /* +0x4 */
};

struct anon_2 {
    unsigned char trycount; /* +0x0 */
    unsigned char spindlctrl; /* +0x1 */
    unsigned char datapattern; /* +0x2 */
    unsigned char pad; /* +0x3 */
};

int isStrFileInit;
anon_1 last_video_fd;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\strfile.c lines 208–227 */
/* addr: 0x00131470  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 208
 *   +0x0008 -> line 210
 *   +0x0014 -> line 213
 *   +0x0024 -> line 215
 *   +0x0030 -> line 218
 *   +0x0038 -> line 220
 *   +0x0040 -> line 227
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int strFileRead(anon_0* file, void* buff, int size)
{
    unsigned int err;
    int count;
    if (file->isOnCD)
    {
        count = sceCdStRead(size >> 11, buff, 1, &err);
        count <<= 11;
        if (err != 0)
            count = -1;
    }
    else
    {
        count = sceRead(file->fd, buff, size);
    }
    return count;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\strfile.c lines 193–201 */
/* addr: 0x001314c0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 193
 *   +0x000c -> line 194
 *   +0x0018 -> line 195
 *   +0x0020 -> line 196
 *   +0x0028 -> line 197
 *   +0x0030 -> line 198
 *   +0x0038 -> line 201
 *   +0x003c -> line 200
 *   +0x0040 -> line 201
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int strFileClose(anon_0* file)
{
    if (file->isOnCD) {
        sceCdStStop();
        sceSifFreeIopHeap(file->iopBuf);
    } else {
        sceClose(file->fd);
    }
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\strfile.c lines 55–186 */
/* addr: 0x00131510  size: 804 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 55
 *   +0x0020 -> line 62
 *   +0x0034 -> line 64
 *   +0x003c -> line 68
 *   +0x0040 -> line 69
 *   +0x0050 -> line 70
 *   +0x0054 -> line 74
 *   +0x0058 -> line 70
 *   +0x005c -> line 74
 *   +0x0060 -> line 70
 *   +0x0064 -> line 74
 *   +0x0074 -> line 76
 *   +0x0080 -> line 83
 *   +0x0084 -> line 80
 *   +0x0088 -> line 83
 *   +0x0090 -> line 84
 *   +0x00a0 -> line 85
 *   +0x00a4 -> line 86
 *   +0x00a8 -> line 87
 *   +0x00bc -> line 88
 *   +0x00cc -> line 90
 *   +0x00f0 -> line 92
 *   +0x0104 -> line 97
 *   +0x010c -> line 99
 *   +0x0124 -> line 101
 *   +0x012c -> line 103
 *   +0x0138 -> line 105
 *   +0x0154 -> line 108
 *   +0x0164 -> line 110
 *   +0x0170 -> line 113
 *   +0x017c -> line 122
 *   +0x0184 -> line 125
 *   +0x0194 -> line 126
 *   +0x01b0 -> line 129
 *   +0x01c0 -> line 130
 *   +0x01c8 -> line 136
 *   +0x01e8 -> line 138
 *   +0x01f0 -> line 139
 *   +0x01f8 -> line 140
 *   +0x01fc -> line 141
 *   +0x0204 -> line 142
 *   +0x0208 -> line 143
 *   +0x020c -> line 146
 *   +0x0214 -> line 147
 *   +0x0238 -> line 150
 *   +0x0240 -> line 152
 *   +0x0248 -> line 153
 *   +0x0258 -> line 154
 *   +0x0264 -> line 155
 *   +0x0274 -> line 156
 *   +0x027c -> line 158
 *   +0x0284 -> line 159
 *   +0x0298 -> line 160
 *   +0x02a4 -> line 161
 *   +0x02b4 -> line 162
 *   +0x02bc -> line 163
 *   +0x02c4 -> line 166
 *   +0x02cc -> line 167
 *   +0x02dc -> line 168
 *   +0x02e4 -> line 169
 *   +0x02f0 -> line 170
 *   +0x02f8 -> line 171
 *   +0x0300 -> line 185
 *   +0x0304 -> line 186
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char* index(const char* s, int c);
char* strncpy(char* s1, const char* s2, size_t n);
int strcmp(const char* s1, const char* s2);
size_t strlen(const char* s);
char* strcpy(char* s1, const char* s2);
int toupper(int c);
int sprintf(char* s, const char* format, ...);
int printf(const char* format, ...);
void* sceSifAllocIopHeap(unsigned int size);
int sceCdStInit(unsigned int bufmax, unsigned int bankmax, unsigned int iop_bufaddr);
int PS2_fn_iGetCDMediaMode(void);
int sceCdMmode(int media);
int sceCdDiskReady(int mode);
int SCEECdSearchFile(anon_1* fp, const char* name);
int sceCdStStart(unsigned int lbn, anon_2* mode);
int sceOpen(const char* filename, int flag, ...);
int sceLseek(int fd, int offset, int where);
int sceClose(int fd);

int strFileOpen(anon_0* file, char* filename)
{
    int ret;
    char* body = NULL;
    char fn[256];
    char devname[64];

    body = index(filename, ':');
    if (body)
    {
        int dlen;

        dlen = body - filename;
        strncpy(devname, filename, dlen);
        devname[dlen] = 0;
        body += 1;
        if (!strcmp(devname, "cdrom0"))
        {
            int i;
            int len = strlen(body);
            const char* tail;

            file->isOnCD = 1;
            for (i = 0; i < len; i++)
            {
                if (body[i] == '/')
                    body[i] = '\\';
                body[i] = toupper(body[i]);
            }
            tail = (index(filename, ';')) ? "" : ";1";
            sprintf(fn, "%s%s", body, tail);
        }
        else
        {
            file->isOnCD = 0;
            sprintf(fn, "%s:%s", devname, body);
        }
    }
    else
    {
        body = filename;
        strcpy(devname, "host0");
        file->isOnCD = 0;
        sprintf(fn, "%s:%s", devname, body);
    }

    printf("file: %s\n", fn);

    if (file->isOnCD)
    {
        anon_2 mode;

        if (!isStrFileInit)
            isStrFileInit = 1;
        file->iopBuf = (int)sceSifAllocIopHeap(2048 * 80 + 16);
        sceCdStInit(80, 5, (file->iopBuf + 15) & ~15);
        sceCdMmode(PS2_fn_iGetCDMediaMode());
        sceCdDiskReady(0);
        while (!SCEECdSearchFile(&last_video_fd, fn))
            ;
        file->fp.lsn = last_video_fd.pos;
        file->fp.size = last_video_fd.size;
        file->fp.name[0] = 0;
        file->size = file->fp.size;
        mode.trycount = 0;
        mode.spindlctrl = 0;
        mode.datapattern = 0;
        while (!sceCdStStart(file->fp.lsn, &mode))
        {
            asm { mtc0 zero, $24 }
        }
        return 1;
    }
    else
    {
        sceCdDiskReady(0);
        file->fd = sceOpen(fn, 1);
        if (file->fd < 0)
        {
            printf("Cannot open '%s'(sceOpen)\n", fn);
            return 0;
        }
        sceCdDiskReady(0);
        file->size = sceLseek(file->fd, 0, 2);
        if (file->size < 0)
        {
            printf("sceLseek() fails (%s): %d\n", fn, file->size);
            sceClose(file->fd);
            return 0;
        }
        sceCdDiskReady(0);
        ret = sceLseek(file->fd, 0, 0);
        if (ret < 0)
        {
            printf("sceLseek() fails (%s)\n", fn);
            sceClose(file->fd);
            return 0;
        }
    }
    return 1;
}
