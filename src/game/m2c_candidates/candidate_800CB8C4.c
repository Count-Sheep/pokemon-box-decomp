typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_801EBF20[];

void fn_800CB8C4(void *arg0) {
    (*(u8 **)(arg0)) = lbl_801EBF20;
    (*(s32 *)((char *)(arg0) + (0xC))) = -1;
    (*(s32 *)((char *)(arg0) + (0x10))) = -1;
    (*(s32 *)((char *)(arg0) + (0x14))) = -1;
    (*(s32 *)((char *)(arg0) + (0x18))) = -1;
    (*(s8 *)((char *)(arg0) + (4))) = 0;
}
