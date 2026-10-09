typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800E759C(void *arg0) {
    void *temp_r3_4;

    temp_r3_4 = *(void **)((char *)(arg0) + (0xEC));
    if (temp_r3_4 == NULL) {
        return 0;
    }
    return *(s32 *)((char *)(temp_r3_4) + (0xC));
}
