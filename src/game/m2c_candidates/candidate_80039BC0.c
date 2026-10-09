typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80039BC0(void *arg0) {
    s32 var_r5_5;
    u8 temp_r4_6;

    var_r5_5 = 1;
    temp_r4_6 = *(u8 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x13));
    if (!((temp_r4_6 >> 1U) & 1) || ((temp_r4_6 >> 2U) & 1) || (temp_r4_6 & 1) || ((u16) (*(u16 *)((char *)(arg0) + (0x46))) == 0)) {
        var_r5_5 = 0;
    }
    return var_r5_5;
}
