typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8015DCAC(s32 arg0) {
    s32 temp_r4_4;

    temp_r4_4 = arg0 >> 0x1F;
    return (temp_r4_4 ^ arg0) - temp_r4_4;
}
