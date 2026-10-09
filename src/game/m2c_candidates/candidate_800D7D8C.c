typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void GXLoadPosMtxImm(s32, s32);                     /* extern; return value unused */
void fn_801323A4(s32);                              /* extern; return value unused */

void fn_800D7D8C(s32 arg0) {
    fn_801323A4(arg0 + 0x80);
    GXLoadPosMtxImm(arg0 + 0x80, 0);
}
