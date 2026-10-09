typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8008832C(void *arg0) {
    s32 temp_r4_4;

    temp_r4_4 = *(s32 *)((char *)(arg0) + (0x14));
    if (temp_r4_4 & 0x8000) {
        return temp_r4_4 & 0xFFFF7FFF;
    }
    return 0xFFFF;
}
