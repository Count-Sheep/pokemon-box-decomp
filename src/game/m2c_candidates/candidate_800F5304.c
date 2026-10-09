typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800F5304(void *arg0, u8 arg1) {
    s32 temp_r3_16;
    void *temp_r3_4;

    temp_r3_4 = *(void **)((char *)(arg0) + (0x168));
    if (temp_r3_4 == NULL) {
        return 0;
    }
    if ((u32) (*(u32 *)((char *)(temp_r3_4) + (0x70))) == 0U) {
        return 0;
    }
    temp_r3_16 = *(s32 *)((char *)(temp_r3_4) + (0x28));
    if (((u8) temp_r3_16 <= arg1) || ((u8) temp_r3_16 == 1)) {
        return 0;
    }
    return 1;
}
