typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8012B0F4(u8 *, s32, s32);                   /* extern; return value unused */
extern u8 lbl_801EBC60[];

void fn_800C9310(s32 arg0) {
    fn_8012B0F4(lbl_801EBC60, arg0, 1);
}
