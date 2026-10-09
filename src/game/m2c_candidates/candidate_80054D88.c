typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8005532C(void *, s32);                      /* extern; return value unused */

void fn_80054D88(void *arg0, u16 arg1, u16 arg2) {
    u16 temp_r6_8;
    u16 var_r4_0;

    var_r4_0 = arg1;
    temp_r6_8 = *(u16 *)((char *)(arg0) + (4));
    if (var_r4_0 < temp_r6_8) {
        var_r4_0 = temp_r6_8;
    }
    (*(s32 *)((char *)(arg0) + (0x10))) = (s32) arg2;
    (*(u16 *)((char *)(arg0) + (0x14))) = var_r4_0;
    fn_8005532C(arg0, (*(s32 *)((char *)(arg0) + (0x10))) - 1);
}
