typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80034820(void *arg0, void *arg1) {
    s32 temp_r4_6;
    s32 temp_r6_5;
    u8 temp_r5_4;

    temp_r5_4 = *(u8 *)((char *)(arg1) + (0xC));
    temp_r6_5 = *(s32 *)((char *)(arg0) + (8));
    temp_r4_6 = temp_r5_4 * 4;
    if ((u32) *((u32 *) (temp_r6_5 + temp_r4_6)) != 0U) {
        *((s32 *) (temp_r6_5 + temp_r4_6)) = 0;
        *((s8 *) ((*(s32 *)((char *)(arg0) + (0xC))) + temp_r5_4)) = 0;
        (*(u8 *)(arg0)) = (u8) ((*(u8 *)(arg0)) - 1);
    }
}
