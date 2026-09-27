/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\initeng.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct stFile_ stFile_;
typedef struct _SND_tdstInitStruct _SND_tdstInitStruct;
struct _SND_tdstInitStruct {
    int data[16];
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\initeng.cxx lines 1110–1292 */
/* addr: 0x00262f30  size: 1116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1110
 *   +0x0010 -> line 1116
 *   +0x0018 -> line 1118
 *   +0x0020 -> line 1122
 *   +0x0028 -> line 1138
 *   +0x0040 -> line 1140
 *   +0x0048 -> line 1143
 *   +0x0050 -> line 1144
 *   +0x0058 -> line 1147
 *   +0x0060 -> line 1163
 *   +0x0068 -> line 1167
 *   +0x0078 -> line 1176
 *   +0x0088 -> line 1177
 *   +0x0098 -> line 1187
 *   +0x00a0 -> line 1191
 *   +0x00bc -> line 1193
 *   +0x00cc -> line 1195
 *   +0x00e4 -> line 1196
 *   +0x00ec -> line 1197
 *   +0x00f0 -> line 1198
 *   +0x0108 -> line 1201
 *   +0x011c -> line 1204
 *   +0x0124 -> line 1207
 *   +0x0130 -> line 1209
 *   +0x0144 -> line 1210
 *   +0x0158 -> line 1211
 *   +0x016c -> line 1213
 *   +0x023c -> line 1214
 *   +0x0240 -> line 1213
 *   +0x0248 -> line 1214
 *   +0x0258 -> line 1218
 *   +0x0268 -> line 1220
 *   +0x0270 -> line 1221
 *   +0x0274 -> line 1222
 *   +0x0278 -> line 1223
 *   +0x027c -> line 1220
 *   +0x0280 -> line 1221
 *   +0x0284 -> line 1222
 *   +0x028c -> line 1223
 *   +0x0290 -> line 1220
 *   +0x02c0 -> line 1221
 *   +0x02f4 -> line 1222
 *   +0x032c -> line 1223
 *   +0x035c -> line 1224
 *   +0x0364 -> line 1230
 *   +0x036c -> line 1235
 *   +0x0374 -> line 1236
 *   +0x037c -> line 1240
 *   +0x0390 -> line 1247
 *   +0x03a0 -> line 1249
 *   +0x03b8 -> line 1251
 *   +0x03bc -> line 1254
 *   +0x03c0 -> line 1251
 *   +0x03c4 -> line 1254
 *   +0x03c8 -> line 1251
 *   +0x03d4 -> line 1254
 *   +0x03dc -> line 1261
 *   +0x03ec -> line 1264
 *   +0x03f4 -> line 1266
 *   +0x03fc -> line 1267
 *   +0x0404 -> line 1268
 *   +0x040c -> line 1271
 *   +0x0414 -> line 1277
 *   +0x041c -> line 1284
 *   +0x043c -> line 1285
 *   +0x0444 -> line 1292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDesInitLevelLoop(void)
{
    HIE_tdstSuperObject_* hNextCharacter;
    HIE_tdstSuperObject_* hCharacter;
    int i;
    HIE_tdstSuperObject_* hMainChar;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\initeng.cxx lines 671–1070 */
/* addr: 0x00263390  size: 992 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 671
 *   +0x0004 -> line 677
 *   +0x0008 -> line 671
 *   +0x0018 -> line 675
 *   +0x001c -> line 677
 *   +0x0020 -> line 675
 *   +0x0024 -> line 682
 *   +0x002c -> line 692
 *   +0x0034 -> line 693
 *   +0x003c -> line 706
 *   +0x0050 -> line 707
 *   +0x0060 -> line 709
 *   +0x0068 -> line 714
 *   +0x0078 -> line 716
 *   +0x0084 -> line 722
 *   +0x008c -> line 725
 *   +0x0094 -> line 726
 *   +0x009c -> line 729
 *   +0x00a0 -> line 773
 *   +0x00a4 -> line 731
 *   +0x00ac -> line 773
 *   +0x00b4 -> line 775
 *   +0x00d4 -> line 776
 *   +0x00e0 -> line 778
 *   +0x00e8 -> line 779
 *   +0x0100 -> line 780
 *   +0x0114 -> line 783
 *   +0x0118 -> line 784
 *   +0x011c -> line 780
 *   +0x0120 -> line 784
 *   +0x0138 -> line 789
 *   +0x0148 -> line 793
 *   +0x0168 -> line 801
 *   +0x017c -> line 807
 *   +0x0190 -> line 809
 *   +0x01a0 -> line 811
 *   +0x01a8 -> line 813
 *   +0x01bc -> line 814
 *   +0x01d8 -> line 816
 *   +0x01ec -> line 818
 *   +0x01f4 -> line 827
 *   +0x01fc -> line 829
 *   +0x020c -> line 830
 *   +0x0214 -> line 831
 *   +0x021c -> line 832
 *   +0x0224 -> line 838
 *   +0x022c -> line 840
 *   +0x0234 -> line 845
 *   +0x023c -> line 847
 *   +0x0244 -> line 849
 *   +0x024c -> line 851
 *   +0x0250 -> line 898
 *   +0x0258 -> line 903
 *   +0x0260 -> line 905
 *   +0x0274 -> line 908
 *   +0x0284 -> line 910
 *   +0x028c -> line 911
 *   +0x0290 -> line 913
 *   +0x02a0 -> line 915
 *   +0x02a8 -> line 916
 *   +0x02ac -> line 919
 *   +0x02b4 -> line 920
 *   +0x02bc -> line 961
 *   +0x02d8 -> line 967
 *   +0x02e4 -> line 969
 *   +0x02f0 -> line 970
 *   +0x030c -> line 974
 *   +0x0318 -> line 976
 *   +0x0320 -> line 978
 *   +0x0328 -> line 980
 *   +0x032c -> line 998
 *   +0x0334 -> line 1003
 *   +0x033c -> line 1010
 *   +0x0344 -> line 1012
 *   +0x0350 -> line 1013
 *   +0x035c -> line 1019
 *   +0x0378 -> line 1022
 *   +0x0380 -> line 1025
 *   +0x0388 -> line 1055
 *   +0x03a8 -> line 1057
 *   +0x03c0 -> line 1064
 *   +0x03c8 -> line 1070
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitLevelLoop(void)
{
    char cDoInit;
    unsigned char uc_ViewPortIndex;
    GLI_tdstCamera_* p_stCamera;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\initeng.cxx lines 554–628 */
/* addr: 0x00263770  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 554
 *   +0x0008 -> line 556
 *   +0x0010 -> line 561
 *   +0x002c -> line 565
 *   +0x0034 -> line 566
 *   +0x003c -> line 568
 *   +0x0044 -> line 575
 *   +0x004c -> line 576
 *   +0x0054 -> line 577
 *   +0x005c -> line 580
 *   +0x0064 -> line 581
 *   +0x006c -> line 582
 *   +0x0074 -> line 583
 *   +0x007c -> line 586
 *   +0x0084 -> line 602
 *   +0x008c -> line 614
 *   +0x0098 -> line 615
 *   +0x00a4 -> line 617
 *   +0x00b0 -> line 620
 *   +0x00b4 -> line 627
 *   +0x00bc -> line 628
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitEngineWhenInitApplication(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\initeng.cxx lines 171–534 */
/* addr: 0x00263840  size: 1468 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 171
 *   +0x0008 -> line 178
 *   +0x0010 -> line 180
 *   +0x0018 -> line 182
 *   +0x001c -> line 207
 *   +0x0020 -> line 182
 *   +0x0024 -> line 183
 *   +0x002c -> line 207
 *   +0x0030 -> line 183
 *   +0x0034 -> line 207
 *   +0x0038 -> line 185
 *   +0x003c -> line 203
 *   +0x0040 -> line 185
 *   +0x0054 -> line 190
 *   +0x006c -> line 192
 *   +0x0084 -> line 194
 *   +0x008c -> line 195
 *   +0x0094 -> line 196
 *   +0x009c -> line 203
 *   +0x00a4 -> line 204
 *   +0x00ac -> line 205
 *   +0x00b0 -> line 207
 *   +0x00b8 -> line 208
 *   +0x00e0 -> line 223
 *   +0x00e8 -> line 226
 *   +0x0188 -> line 229
 *   +0x038c -> line 244
 *   +0x0394 -> line 251
 *   +0x039c -> line 253
 *   +0x03a4 -> line 260
 *   +0x03ac -> line 263
 *   +0x03b4 -> line 267
 *   +0x03bc -> line 268
 *   +0x03c8 -> line 269
 *   +0x03d0 -> line 278
 *   +0x03d8 -> line 290
 *   +0x03e0 -> line 306
 *   +0x03e8 -> line 307
 *   +0x03f0 -> line 323
 *   +0x03f8 -> line 377
 *   +0x0400 -> line 381
 *   +0x0414 -> line 392
 *   +0x041c -> line 394
 *   +0x0424 -> line 396
 *   +0x042c -> line 399
 *   +0x0438 -> line 400
 *   +0x0444 -> line 405
 *   +0x0448 -> line 410
 *   +0x0450 -> line 413
 *   +0x0460 -> line 415
 *   +0x0468 -> line 421
 *   +0x04a4 -> line 444
 *   +0x04ac -> line 446
 *   +0x04b4 -> line 448
 *   +0x04bc -> line 451
 *   +0x04d8 -> line 455
 *   +0x04e0 -> line 456
 *   +0x04f0 -> line 458
 *   +0x04f8 -> line 466
 *   +0x0504 -> line 469
 *   +0x050c -> line 472
 *   +0x0520 -> line 474
 *   +0x0528 -> line 476
 *   +0x053c -> line 484
 *   +0x0544 -> line 490
 *   +0x054c -> line 525
 *   +0x0598 -> line 527
 *   +0x05a0 -> line 528
 *   +0x05a8 -> line 529
 *   +0x05b0 -> line 534
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vFirstInitEngine(void)
{
    unsigned char i;
    _SND_tdstInitStruct st_SoundInit;
    int FirstCine;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\initeng.cxx lines 148–163 */
/* addr: 0x00263e00  size: 720 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 148
 *   +0x0004 -> line 151
 *   +0x0008 -> line 148
 *   +0x000c -> line 156
 *   +0x0010 -> line 148
 *   +0x0014 -> line 151
 *   +0x0018 -> line 148
 *   +0x001c -> line 151
 *   +0x0020 -> line 148
 *   +0x0024 -> line 153
 *   +0x0028 -> line 148
 *   +0x002c -> line 156
 *   +0x0030 -> line 151
 *   +0x0034 -> line 156
 *   +0x0038 -> line 151
 *   +0x003c -> line 156
 *   +0x0040 -> line 151
 *   +0x0044 -> line 155
 *   +0x0048 -> line 151
 *   +0x004c -> line 153
 *   +0x0050 -> line 156
 *   +0x0058 -> line 157
 *   +0x0290 -> line 158
 *   +0x02b0 -> line 161
 *   +0x02b4 -> line 163
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vTVS(void)
{
    char format[10];
    stFile_* pCache;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\initeng.cxx lines 82–99 */
/* addr: 0x00264780  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 82
 *   +0x0008 -> line 89
 *   +0x0010 -> line 92
 *   +0x0034 -> line 96
 *   +0x0044 -> line 99
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" void GLI_fn_vCloseBigFileTextures(void);
/* Pointer return/argument roles are established by this wrapper's target ABI;
 * the recovered callee scaffolds currently omit them. */
extern "C" char* MNC_fn_pcGetCurrentDirectory(void);
extern "C" char* FMN_SCE_ConvertPath2DVD(char* buffer);
extern "C" void GLI_fn_vOpenBigFileTextures(char* filename);
extern "C" int sprintf(char*, const char*, ...);
void GAM_fn_vLoadTextures(void)
{
    char Texture_BF_Name[255];
    GLI_fn_vCloseBigFileTextures();
    sprintf(Texture_BF_Name, "%s\\%s", MNC_fn_pcGetCurrentDirectory(), "TEXTURES.CNT;1");
    GLI_fn_vOpenBigFileTextures(FMN_SCE_ConvertPath2DVD(Texture_BF_Name));
}
