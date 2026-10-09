typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800566F4(void *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    if (arg1 & 0x1C) {
        (*(s32 *)(arg0)) = (s32) ((*(s32 *)(arg0)) & 0xFFFFFFE3);
    } else if (arg1 & 0x3000) {
        (*(s32 *)(arg0)) = (s32) ((*(s32 *)(arg0)) & 0xFFFFCFFF);
    }
    (*(s32 *)(arg0)) = (s32) ((*(s32 *)(arg0)) | arg1);
    switch (arg1) {                                 /* irregular */
    case 0x1:
        (*(s16 *)((char *)(arg0) + (4))) = arg2;
        return;
    case 0x2:
        (*(s16 *)((char *)(arg0) + (6))) = arg2;
        (*(s16 *)((char *)(arg0) + (8))) = arg3;
        return;
    case 0x20:
        (*(s16 *)((char *)(arg0) + (0xA))) = arg2;
        (*(s16 *)((char *)(arg0) + (0xC))) = arg3;
        return;
    case 0x40:
        (*(s16 *)((char *)(arg0) + (0xE))) = arg2;
        (*(s16 *)((char *)(arg0) + (0x10))) = arg3;
        return;
    case 0x80:
        (*(s16 *)((char *)(arg0) + (0x12))) = arg2;
        (*(s16 *)((char *)(arg0) + (0x14))) = arg3;
        (*(s16 *)((char *)(arg0) + (0x16))) = arg4;
        (*(s16 *)((char *)(arg0) + (0x18))) = arg5;
        return;
    case 0x100:
        (*(s16 *)((char *)(arg0) + (0x1A))) = arg2;
        return;
    case 0x200:
        (*(s16 *)((char *)(arg0) + (0x1C))) = arg2;
        return;
    case 0x400:
        (*(s16 *)((char *)(arg0) + (0x1E))) = arg2;
        (*(s16 *)((char *)(arg0) + (0x20))) = arg3;
        (*(s16 *)((char *)(arg0) + (0x22))) = arg4;
        (*(s16 *)((char *)(arg0) + (0x24))) = arg5;
        return;
    }
}
