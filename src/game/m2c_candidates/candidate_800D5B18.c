typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800D5B18(void *arg0) {
    s32 temp_r4_6;

    temp_r4_6 = (*(s32 *)((char *)(arg0) + (0x30))) - (*(s32 *)((char *)(arg0) + (0x34)));
    if (temp_r4_6 >= 0) {
        return temp_r4_6;
    }
    return temp_r4_6 + (*(s32 *)((char *)(arg0) + (0x24)));
}
