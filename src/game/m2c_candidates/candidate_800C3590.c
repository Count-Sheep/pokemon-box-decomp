typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void *fn_800C412C();                                /* extern */

s32 fn_800C3590(void) {
    void *temp_r3_7;

    temp_r3_7 = fn_800C412C();
    if (temp_r3_7 == NULL) {
        return -1;
    }
    return *(s32 *)((char *)(temp_r3_7) + (0xC));
}
