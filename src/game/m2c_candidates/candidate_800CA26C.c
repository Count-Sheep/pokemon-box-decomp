typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_801EBD2C[];
extern u8 lbl_801EBD50[];
extern u8 lbl_801EBD5C[];
extern u8 lbl_801EBEAC[];

void fn_800CA26C(void *arg0, s32 arg1) {
    (*(u8 **)(arg0)) = lbl_801EBD50;
    (*(s8 *)((char *)(arg0) + (4))) = 0;
    (*(u8 **)(arg0)) = lbl_801EBD5C;
    (*(u8 **)(arg0)) = lbl_801EBD2C;
    (*(u8 **)(arg0)) = lbl_801EBEAC;
    (*(s32 *)((char *)(arg0) + (8))) = arg1;
    (*(s32 *)((char *)(arg0) + (0xC))) = 0;
}
