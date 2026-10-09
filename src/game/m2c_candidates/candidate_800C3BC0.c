typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800C41F8(s32, s32);                          /* extern */

s32 fn_800C3BC0(s32 arg0, s32 *arg1) {
    *arg1 = fn_800C41F8(arg0, *arg1);
    return arg0;
}
