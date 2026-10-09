typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BCD84(s32, s32);                         /* extern; return value unused */
int fn_800BCF40(int arg0);                          /* extern */

void fn_800BCD3C(s32 arg0, u32 arg1) {
    u32 var_r4_0;

    var_r4_0 = arg1;
    if ((var_r4_0 != 0U) || (var_r4_0 = fn_800BCF40(arg0), ((var_r4_0 == 0U) == 0))) {
        fn_800BCD84((s32) var_r4_0, arg0);
    }
}
