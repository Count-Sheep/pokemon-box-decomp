typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800C1760(s32, s32);                          /* extern */
s32 fn_800C17E8(s32, s32);                          /* extern */
void fn_8012B740(s32);                              /* extern; return value unused */
void fn_8012B81C(s32);                              /* extern; return value unused */

s32 fn_800C16E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r31_20;

    fn_8012B740(arg0 + 0x18);
    if (arg2 == 0) {
        var_r31_20 = fn_800C1760(arg0, arg1);
    } else {
        var_r31_20 = fn_800C17E8(arg0, arg1);
    }
    fn_8012B81C(arg0 + 0x18);
    return var_r31_20;
}
