typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800394F0(s32 *arg0, s32 arg1, s32 arg2, u8 arg3) {
    if (arg3 != 0) {
        *arg0 += 1;
        if ((s32) *arg0 > arg2) {
            *arg0 = arg1;
        }
    } else {
        *arg0 -= 1;
        if ((s32) *arg0 < arg1) {
            *arg0 = arg2;
        }
    }
}
