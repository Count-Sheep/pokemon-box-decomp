typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_801E4E00[];
extern u8 lbl_801E4E34[];

void fn_80087DAC(void *arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    (*(u8 **)(arg0)) = lbl_801E4E34;
    (*(u8 **)(arg0)) = lbl_801E4E00;
    (*(s32 *)((char *)(arg0) + (0x10))) = 0;
    (*(s32 *)((char *)(arg0) + (0x14))) = 0x10000;
    (*(s32 *)((char *)(arg0) + (0x18))) = (s32) (arg1 | 0x20000);
    (*(s32 *)((char *)(arg0) + (0x28))) = arg6;
    (*(s32 *)((char *)(arg0) + (0x2C))) = arg2;
    (*(s32 *)((char *)(arg0) + (0x30))) = arg3;
    (*(s32 *)((char *)(arg0) + (0x34))) = arg4;
    (*(s32 *)((char *)(arg0) + (0x38))) = arg5;
    (*(s32 *)((char *)(arg0) + (0x3C))) = 0;
    (*(s8 *)((char *)(arg0) + (0x40))) = 0;
    (*(s8 *)((char *)(arg0) + (0x41))) = 0;
}
