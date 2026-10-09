typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80107614(u32 arg0, s32 arg1) {
    s32 var_r5_5;

    var_r5_5 = 0;
    if (arg0 == 0U) {
        if (arg1 & 1) {
            var_r5_5 = 4;
        } else if (arg1 & 2) {
            var_r5_5 = 4;
        } else if (arg1 & 4) {
            var_r5_5 = 4;
        }
    } else if ((u32) (arg0 + 0xF0000000) == 0U) {
        var_r5_5 = 0x40;
    } else if ((u32) (arg0 + 0xE0000000) == 0U) {
        var_r5_5 = 0x10;
    }
    return var_r5_5;
}
