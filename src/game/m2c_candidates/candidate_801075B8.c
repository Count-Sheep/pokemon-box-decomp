typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_801075B8(s32 arg0) {
    s32 var_r0_5;

    var_r0_5 = 0;
    if (arg0 <= 1) {
        var_r0_5 = 0x1C;
    } else if (arg0 == 2) {
        var_r0_5 = 0x6C;
    } else if (arg0 <= 4) {
        var_r0_5 = 0x94;
    } else if (arg0 <= 0x10) {
        var_r0_5 = 0x174;
    }
    return var_r0_5;
}
