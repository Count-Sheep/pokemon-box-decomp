typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80155808(void *, u8);                       /* extern; return value unused */

u32 fn_800CB528(void *arg0) {
    u16 temp_r4_8;
    u32 temp_r31_11;

    temp_r4_8 = *(u16 *)((char *)(arg0) + (0x14));
    temp_r31_11 = (u32) (-(s32) temp_r4_8 | temp_r4_8) >> 0x1FU;
    if (temp_r31_11 != 0) {
        fn_80155808(arg0, *(u8 *)((char *)(arg0) + (0xC)));
    }
    return temp_r31_11;
}
