typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BCD3C(s32, s32);                         /* extern; return value unused */
void *fn_800C412C();                                /* extern */

s32 fn_800C6E98(void *arg0, s32 arg1) {
    void *temp_r3_12;

    temp_r3_12 = fn_800C412C();
    if (temp_r3_12 == NULL) {
        return 0;
    }
    if (!(((u32) (*(u32 *)((char *)(temp_r3_12) + (4))) >> 0x18U) & 0x10)) {
        fn_800BCD3C(arg1, *(s32 *)((char *)(arg0) + (0x38)));
    }
    (*(s32 *)((char *)(temp_r3_12) + (0x10))) = 0;
    return 1;
}
