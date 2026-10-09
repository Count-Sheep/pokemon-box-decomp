typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80152BB8(s32, s32, s32, s32, s32);          /* extern; return value unused */
void fn_801563C0(s32);                              /* extern; return value unused */
void fn_801563E4(s32);                              /* extern; return value unused */

void fn_8007D574(void) {
    fn_80152BB8(0, 9, 1, 3, 0);
    fn_80152BB8(0, 0xB, 1, 5, 0);
    fn_80152BB8(0, 0xD, 1, 2, 0xF);
    fn_80152BB8(0, 0xE, 1, 2, 0xF);
    fn_801563C0(0);
    fn_801563E4(0);
}
