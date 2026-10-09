typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void *fn_800C3D10(void *, s32, s32);                /* extern */

s32 fn_800C5388(void *arg0, s32 arg1) {
    void *temp_r3_10;

    temp_r3_10 = fn_800C3D10(arg0, arg1, 0);
    if (temp_r3_10 == NULL) {
        return 0;
    }
    return (*(s32 *)((char *)(temp_r3_10) + (8))) + (*(s32 *)((char *)((*(void **)((char *)(arg0) + (0x64)))) + (0x14)));
}
