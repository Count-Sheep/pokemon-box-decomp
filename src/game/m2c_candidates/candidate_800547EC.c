typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80054818(s32, s32 *);                       /* extern; return value unused */

void fn_800547EC(s32 arg0, s32 arg1) {
    s32 sp8;

    sp8 = arg1;
    fn_80054818(arg0 + 0x2C, &sp8);
}
