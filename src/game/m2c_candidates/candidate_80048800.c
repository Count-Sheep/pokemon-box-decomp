typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8007CE2C(s32, s32);                         /* extern; return value unused */
void fn_800BD6E0(int arg0);                         /* extern */

void *fn_80048800(void *arg0, s16 arg1) {
    u32 temp_r3_19;
    u32 temp_r3_24;
    u32 temp_r3_35;
    u32 temp_r3_40;
    void *temp_r31_16;
    void *temp_r31_32;

    if (arg0 != NULL) {
        fn_8007CE2C(*(s32 *)((char *)(arg0) + (0x7C)), 1);
        temp_r31_16 = *(void **)((char *)(arg0) + (0x10));
        if (temp_r31_16 != NULL) {
            temp_r3_19 = *(u32 *)((char *)(temp_r31_16) + (0x34));
            if (temp_r3_19 != 0U) {
                fn_800BD6E0((s32) temp_r3_19);
            }
            temp_r3_24 = *(u32 *)((char *)(temp_r31_16) + (0x30));
            if (temp_r3_24 != 0U) {
                fn_800BD6E0((s32) temp_r3_24);
            }
            fn_800BD6E0((s32) temp_r31_16);
        }
        temp_r31_32 = *(void **)((char *)(arg0) + (0xC));
        if (temp_r31_32 != NULL) {
            temp_r3_35 = *(u32 *)((char *)(temp_r31_32) + (0x34));
            if (temp_r3_35 != 0U) {
                fn_800BD6E0((s32) temp_r3_35);
            }
            temp_r3_40 = *(u32 *)((char *)(temp_r31_32) + (0x30));
            if (temp_r3_40 != 0U) {
                fn_800BD6E0((s32) temp_r3_40);
            }
            fn_800BD6E0((s32) temp_r31_32);
        }
        if (arg1 > 0) {
            fn_800BD6E0((s32) arg0);
        }
    }
    return arg0;
}
