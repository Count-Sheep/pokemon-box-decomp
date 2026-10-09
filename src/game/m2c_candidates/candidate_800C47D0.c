typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
u32 fn_800C4924(s32, u32, s32, u32, s32);           /* extern */
void memcpy(s32, u32, u32);                         /* extern; return value unused */

s32 fn_800C47D0(void *arg0, s32 arg1, u32 arg2, void *arg3, u32 *arg4) {
    s32 var_r7_30;
    u32 temp_r4_18;
    u32 temp_r4_26;
    u32 var_r31_13;

    var_r31_13 = *(u32 *)((char *)(arg3) + (0xC));
    if (var_r31_13 > arg2) {
        var_r31_13 = arg2;
    }
    temp_r4_18 = *(u32 *)((char *)(arg3) + (0x10));
    if (temp_r4_18 != 0U) {
        memcpy(arg1, temp_r4_18, var_r31_13);
    } else {
        temp_r4_26 = *(u32 *)((char *)(arg3) + (4));
        if (!((temp_r4_26 >> 0x18U) & 4)) {
            var_r7_30 = 0;
        } else if ((temp_r4_26 >> 0x18U) & 0x80) {
            var_r7_30 = 2;
        } else {
            var_r7_30 = 1;
        }
        var_r31_13 = fn_800C4924((*(s32 *)((char *)(arg0) + (0x68))) + (*(s32 *)((char *)(arg3) + (8))), var_r31_13, arg1, arg2, var_r7_30);
    }
    if (arg4 != NULL) {
        *arg4 = var_r31_13;
    }
    return arg1;
}
