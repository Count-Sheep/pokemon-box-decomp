typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CB5E8(u8 **, s32);                       /* extern; return value unused */
extern u8 lbl_801E2030[];

u8 **fn_800CB56C(u8 **arg0) {
    *arg0 = lbl_801E2030;
    fn_800CB5E8(arg0, 0);
    return arg0;
}
