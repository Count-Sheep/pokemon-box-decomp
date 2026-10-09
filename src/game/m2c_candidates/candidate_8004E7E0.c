typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80036C48(s32, s32);                         /* extern; return value unused */
void fn_80051544();                                 /* extern; return value unused */

void fn_8004E7E0(s32 arg0) {
    fn_80051544();
    fn_80036C48(arg0 + 0xC, 0);
}
