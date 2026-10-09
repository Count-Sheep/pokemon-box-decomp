typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_801E21F4[];
extern u8 lbl_801F8E30[];

void fn_8004BE9C(void *arg0, s32 arg1) {
    (*(u8 **)((char *)(arg0) + (8))) = lbl_801E21F4;
    (*(s32 *)(arg0)) = arg1;
    (*(u8 **)((char *)(arg0) + (4))) = lbl_801F8E30;
}
