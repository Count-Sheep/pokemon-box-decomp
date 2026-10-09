typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800CBBF0(s32 arg0) {
    s32 var_r0_5;

    var_r0_5 = 0;
    if (((arg0 >= 0x81) && (arg0 <= 0x9F)) || ((arg0 >= 0xE0) && (arg0 <= 0xFC))) {
        var_r0_5 = 1;
    }
    return var_r0_5;
}
