typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
union _m2c_stack_fn_8008DECC_view_C {
    /* 0x0 */ u8 u8[4];                             /* inferred */
    /* 0x0 */ s8 s8[4];                             /* inferred */
    /* 0x0 */ u16 u16[2];                           /* inferred */
    /* 0x0 */ s16 s16[2];                           /* inferred */
    /* 0x0 */ u32 u32[1];                           /* inferred */
    /* 0x0 */ s32 s32[1];                           /* inferred */
    /* 0x0 */ f32 f32[1];                           /* inferred */
};                                                  /* size = 0x4 */

void fn_80156668(s32, s32 *, u8, u32, u8, u32, u8); /* extern; return value unused */

void fn_8008DECC(void **arg0, void *arg1) {
    union _m2c_stack_fn_8008DECC_view_C spC;
    s32 sp8;
    u32 temp_r6_22;
    u32 temp_r8_21;
    u8 temp_r5_20;
    u8 temp_r5_26;
    u8 temp_r7_23;
    u8 temp_r9_17;
    void *temp_r5_7;

    temp_r5_7 = *arg0;
    spC.u32[0] = *(s32 *)((char *)(arg1) + (0x90));
    temp_r9_17 = spC.u8[0];
    temp_r5_20 = spC.u8[2];
    temp_r8_21 = temp_r9_17 * ((*(u8 *)((char *)(temp_r5_7) + (0xBC))) + 1);
    temp_r6_22 = spC.u8[1] * ((*(u8 *)((char *)(temp_r5_7) + (0xBD))) + 1);
    temp_r7_23 = (u8) (temp_r8_21 >> 8U);
    spC.u8[0] = temp_r7_23;
    temp_r5_26 = (u8) (temp_r6_22 >> 8U);
    spC.u8[1] = temp_r5_26;
    spC.u8[2] = (u8) ((u32) (temp_r5_20 * ((*(u8 *)((char *)(temp_r5_7) + (0xBE))) + 1)) >> 8U);
    sp8 = spC.u32[0];
    fn_80156668(2, &sp8, temp_r5_26, temp_r6_22, temp_r7_23, temp_r8_21, temp_r9_17);
}
