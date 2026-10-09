typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800C430C(void *arg0, s32 arg1) {
    u32 temp_r4_13;
    u32 temp_r6_6;

    temp_r6_6 = *(u32 *)((char *)(arg0) + (0x50));
    temp_r4_13 = (arg1 - (*(s32 *)((char *)(arg0) + (0x4C)))) / 20;
    if ((temp_r6_6 == 0U) || (temp_r4_13 >= (u32) (*(u32 *)((char *)((*(void **)((char *)(arg0) + (0x44)))) + (8))))) {
        return 0;
    }
    return *((s32 *) (temp_r6_6 + (temp_r4_13 * 4)));
}
