typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s16 fn_80063A60(s16 arg0, s16 arg1, s16 arg2) {
    if (arg0 > arg2) {
        return arg2;
    }
    if (arg0 < arg1) {
        return arg1;
    }
    return arg0;
}
