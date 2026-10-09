typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8014E2C0(s32);                               /* extern */

s32 fn_8014ADA4(s32 arg0) {
    if ((arg0 == 0) && ((fn_8014E2C0(0) == -1) || (fn_8014E2C0(1) == -1))) {
        return 0;
    }
    return 1;
}
