typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void memcpy(s32, s32, s32);                         /* extern; return value unused */

s32 __StringWrite(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3_10;
    s32 var_r31_14;
    u32 temp_r6_11;

    temp_r3_10 = *(s32 *)((char *)(arg0) + (8));
    temp_r6_11 = *(u32 *)((char *)(arg0) + (4));
    var_r31_14 = temp_r6_11 - temp_r3_10;
    if ((u32) (temp_r3_10 + arg2) <= temp_r6_11) {
        var_r31_14 = arg2;
    }
    memcpy((*(s32 *)(arg0)) + temp_r3_10, arg1, var_r31_14);
    (*(s32 *)((char *)(arg0) + (8))) = (s32) ((*(s32 *)((char *)(arg0) + (8))) + var_r31_14);
    return 1;
}
