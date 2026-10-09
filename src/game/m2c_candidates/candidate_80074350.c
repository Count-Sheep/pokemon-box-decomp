typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80074350(void *arg0, u32 arg1) {
    s32 var_r5_5;

    var_r5_5 = 0;
    if (((u32) (*(u32 *)((char *)(arg0) + (8))) == arg1) && ((u32) (*(u32 *)((char *)(arg0) + (4))) == (u32) (arg1 + 1))) {
        var_r5_5 = 1;
    }
    return var_r5_5;
}
