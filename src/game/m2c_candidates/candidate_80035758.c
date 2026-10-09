typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
f32 fn_80035758(f32 farg0, f32 farg1, f32 farg2) {
    if (farg0 > farg2) {
        return farg2;
    }
    if (farg0 < farg1) {
        return farg1;
    }
    return farg0;
}
