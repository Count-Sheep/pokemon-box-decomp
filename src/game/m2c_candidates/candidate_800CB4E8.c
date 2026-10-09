typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_801557D0(void *, s32, u8, u16);             /* extern; return value unused */

void fn_800CB4E8(void *arg0, s8 arg1, u8 arg2, s8 arg3, u16 arg4, s32 arg5) {
    (*(s8 *)((char *)(arg0) + (0xC))) = arg1;
    (*(u8 *)((char *)(arg0) + (0xD))) = arg2;
    (*(s8 *)((char *)(arg0) + (0x16))) = arg3;
    (*(u16 *)((char *)(arg0) + (0x14))) = arg4;
    (*(s32 *)((char *)(arg0) + (0x10))) = arg5;
    fn_801557D0(arg0, *(s32 *)((char *)(arg0) + (0x10)), *(u8 *)((char *)(arg0) + (0xD)), *(u16 *)((char *)(arg0) + (0x14)));
}
