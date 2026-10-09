typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800472CC(s32, u8 *, s32, s32);               /* extern */
s32 fn_80047468(s32, u8 *, s32, s32);               /* extern */
s32 fn_800BD4D0(s32);                               /* extern */
extern u8 lbl_801E2010[];
extern u8 lbl_801E2020[];

void *fn_8004717C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3_18;
    s32 temp_r3_30;
    s32 var_r0_19;
    s32 var_r0_31;

    (*(s32 *)(arg0)) = arg1;
    (*(s32 *)((char *)(arg0) + (4))) = 0;
    (*(s32 *)((char *)(arg0) + (8))) = 0;
    temp_r3_18 = fn_800BD4D0(0xC);
    var_r0_19 = temp_r3_18;
    if (var_r0_19 != 0) {
        var_r0_19 = fn_80047468(temp_r3_18, lbl_801E2010, arg1, arg2);
    }
    (*(s32 *)((char *)(arg0) + (4))) = var_r0_19;
    temp_r3_30 = fn_800BD4D0(0xC);
    var_r0_31 = temp_r3_30;
    if (var_r0_31 != 0) {
        var_r0_31 = fn_800472CC(temp_r3_30, lbl_801E2020, arg1, arg2);
    }
    (*(s32 *)((char *)(arg0) + (8))) = var_r0_31;
    return arg0;
}
