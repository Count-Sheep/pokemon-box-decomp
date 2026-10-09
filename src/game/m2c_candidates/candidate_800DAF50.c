typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
u32 fn_800BD4D0(s32);                               /* extern */
void fn_800CB16C(u32, u32);                         /* extern; return value unused */
void fn_800CB450(u32, s32, u32);                    /* extern; return value unused */
void fn_800BD6E0(int arg0);                         /* extern */

s32 fn_800DAF50(void *arg0, u32 arg1, u32 arg2) {
    u32 temp_r3_19;
    u32 temp_r3_23;
    u32 temp_r3_40;

    if (arg1 != 0U) {
        return 0;
    }
    if (arg2 != 0U) {
        temp_r3_19 = *(u32 *)((char *)(arg0) + (0x54));
        if (temp_r3_19 == 0U) {
            temp_r3_23 = fn_800BD4D0(0x18);
            if (temp_r3_23 != 0U) {
                fn_800CB450(temp_r3_23, 0, arg2);
            }
            (*(u32 *)((char *)(arg0) + (0x54))) = temp_r3_23;
            if ((u32) (*(u32 *)((char *)(arg0) + (0x54))) == 0U) {
                return 0;
            }
            goto block_9;
        }
        fn_800CB450(temp_r3_19, 0, arg2);
block_9:
        temp_r3_40 = *(u32 *)((char *)(arg0) + (0x50));
        if (temp_r3_40 != 0U) {
            fn_800CB16C(temp_r3_40, *(u32 *)((char *)(arg0) + (0x54)));
        }
        goto block_12;
    }
    fn_800BD6E0((s32) (*(u32 *)((char *)(arg0) + (0x54))));
    (*(u32 *)((char *)(arg0) + (0x54))) = 0U;
block_12:
    return 1;
}
