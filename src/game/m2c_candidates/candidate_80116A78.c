typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80116A78(void *arg0) {
    u8 temp_r0_4;

    temp_r0_4 = *(u8 *)((char *)(arg0) + (1));
    if ((temp_r0_4 >= 0x80U) && (temp_r0_4 <= 0xBBU)) {
        return 1;
    }
    return 0;
}
