typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
u8 fn_8013B364(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}
