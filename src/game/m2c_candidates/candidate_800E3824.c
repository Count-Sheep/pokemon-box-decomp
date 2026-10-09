typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800E3824(s32 arg0, u32 arg1) {
    if (arg1 == 0U) {
        return 0;
    }
    return arg0 + arg1;
}
