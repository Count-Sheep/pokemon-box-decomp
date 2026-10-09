typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BD6E0(int arg0);                         /* extern */
extern u8 lbl_801EBF20[];

u8 **fn_800CBB14(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = lbl_801EBF20;
        if (arg1 > 0) {
            fn_800BD6E0((s32) arg0);
        }
    }
    return arg0;
}
