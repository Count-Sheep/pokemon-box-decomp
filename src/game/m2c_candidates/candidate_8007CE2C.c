typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8007D95C(s32, s32);                         /* extern; return value unused */
void fn_800BCD3C(s32, s32);                         /* extern; return value unused */
void fn_800BD6E0(int arg0);                         /* extern */

void *fn_8007CE2C(void *arg0, s16 arg1) {
    s32 *temp_r31_16;

    if (arg0 != NULL) {
        fn_8007D95C(*(s32 *)((char *)(arg0) + (4)), 1);
        temp_r31_16 = *(s32 **)((char *)(arg0) + (8));
        if (temp_r31_16 != NULL) {
            fn_800BCD3C(*temp_r31_16, 0);
            fn_800BD6E0((s32) temp_r31_16);
        }
        if (arg1 > 0) {
            fn_800BD6E0((s32) arg0);
        }
    }
    return arg0;
}
