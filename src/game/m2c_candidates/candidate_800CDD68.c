typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CE65C(s32);                              /* extern; return value unused */
void fn_800CE894(s32);                              /* extern; return value unused */

void fn_800CDD68(void) {
    fn_800CE65C(0);
    fn_800CE894(0xF0000000);
}
