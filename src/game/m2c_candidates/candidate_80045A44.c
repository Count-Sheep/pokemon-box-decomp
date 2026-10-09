typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80045A44(void *arg0) {
    s32 var_r6_5;
    void *temp_r4_12;
    void *temp_r5_13;

    var_r6_5 = 0;
    if (((s32) (*(s32 *)((char *)(arg0) + (0xC))) == 0) && ((s32) (*(s32 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0xC))) == 3) && ((temp_r4_12 = *(void **)((char *)(arg0) + (0x2C)), temp_r5_13 = *(void **)((char *)(arg0) + (0x28)), (((s32) (*(s32 *)(temp_r5_13)) == (s32) (*(s32 *)(temp_r4_12))) == 0)) || ((s32) (*(s32 *)((char *)(temp_r5_13) + (4))) != (s32) (*(s32 *)((char *)(temp_r4_12) + (4)))))) {
        var_r6_5 = 1;
    }
    return var_r6_5;
}
