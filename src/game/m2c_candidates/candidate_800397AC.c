typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800397AC(s32 arg0, s32 arg1) {
    s32 var_r0_5;

    var_r0_5 = -1;
    if ((arg0 == 2) && (arg1 == 2)) {
        var_r0_5 = 0;
    } else if ((arg0 == 3) && (arg1 >= 0) && (arg1 <= 4)) {
        var_r0_5 = arg1 + 1;
    }
    return var_r0_5;
}
