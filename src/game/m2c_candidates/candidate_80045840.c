typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80045840(void *arg0) {
    s32 var_r4_5;

    var_r4_5 = 0;
    if (((s32) (*(s32 *)((char *)(arg0) + (0xC))) > 0) && ((s32) (*(s32 *)((char *)(arg0) + (0x20))) == 2) && ((u8) (*(u8 *)((char *)(arg0) + (0x24))) != 0)) {
        var_r4_5 = 1;
    }
    return var_r4_5;
}
