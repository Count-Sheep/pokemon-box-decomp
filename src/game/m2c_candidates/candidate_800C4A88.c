typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800C36FC();                                 /* extern; return value unused */
extern u8 lbl_801EB8CC[];

u8 **fn_800C4A88(u8 **arg0) {
    fn_800C36FC();
    *arg0 = lbl_801EB8CC;
    return arg0;
}
