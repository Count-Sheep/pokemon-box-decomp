typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8003976C(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 var_r0_7;
    s32 var_r6_6;

    if (arg0 == 0) {
        var_r6_6 = 2;
        var_r0_7 = 2;
    } else {
        var_r6_6 = 3;
        var_r0_7 = arg0 - 1;
    }
    if (arg1 != NULL) {
        *arg1 = var_r6_6;
    }
    if (arg2 != NULL) {
        *arg2 = var_r0_7;
    }
    return var_r6_6 + (var_r0_7 * 6);
}
