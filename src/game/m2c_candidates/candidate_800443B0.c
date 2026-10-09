typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800443B0(void *arg0) {
    s32 var_r5_5;

    var_r5_5 = 0;
    if ((s32) *(*(s32 **)((char *)(arg0) + (0x28))) < (s32) *(*(s32 **)((char *)(arg0) + (0x2C)))) {
        var_r5_5 = 1;
    }
    return var_r5_5;
}
