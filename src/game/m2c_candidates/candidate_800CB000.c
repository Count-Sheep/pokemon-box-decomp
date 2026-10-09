typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CB034(s32, s32, void *, u8);             /* extern; return value unused */

void fn_800CB000(s32 arg0, s32 arg1, void *arg2) {
    u8 var_r6_9;

    if (arg2 != NULL) {
        var_r6_9 = *(u8 *)((char *)(arg2) + (0xC));
    } else {
        var_r6_9 = 0;
    }
    fn_800CB034(arg0, arg1, arg2, var_r6_9);
}
