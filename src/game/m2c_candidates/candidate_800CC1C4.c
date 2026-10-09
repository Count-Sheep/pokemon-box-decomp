typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80152734(s32, s32);                         /* extern; return value unused */
void fn_80152B80();                                 /* extern; return value unused */
void fn_80152BB8(s32, s32, s32, s32, s32);          /* extern; return value unused */
void fn_8015344C(s32);                              /* extern; return value unused */
void fn_80154ED0(s32);                              /* extern; return value unused */
void fn_80154F0C(s32, s32, s32, s32, s32, s32, s32); /* extern; return value unused */
void fn_80156484(s32, s32);                         /* extern; return value unused */
void fn_80156A24(s32, s32, s32, s32);               /* extern; return value unused */
void fn_80156BC0(s32);                              /* extern; return value unused */
void fn_80156F30(s32, s32, s32, s32);               /* extern; return value unused */

void fn_800CC1C4(void) {
    fn_80154ED0(1);
    fn_80156BC0(1);
    fn_8015344C(1);
    fn_80156A24(0, 0, 0, 4);
    fn_80154F0C(4, 0, 0, 1, 0, 0, 2);
    fn_80156484(0, 0);
    fn_80156F30(1, 4, 5, 0xF);
    fn_80152BB8(0, 9, 1, 3, 0);
    fn_80152BB8(0, 0xB, 1, 5, 0);
    fn_80152BB8(0, 0xD, 1, 2, 0xF);
    fn_80152B80();
    fn_80152734(9, 1);
    fn_80152734(0xB, 1);
    fn_80152734(0xD, 1);
}
