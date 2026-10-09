typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
union _m2c_stack_fn_800DA480_view_10 {
    /* 0x0 */ u8 u8[4];                             /* inferred */
    /* 0x0 */ s8 s8[4];                             /* inferred */
    /* 0x0 */ u16 u16[2];                           /* inferred */
    /* 0x0 */ s16 s16[2];                           /* inferred */
    /* 0x0 */ u32 u32[1];                           /* inferred */
    /* 0x0 */ s32 s32[1];                           /* inferred */
    /* 0x0 */ f32 f32[1];                           /* inferred */
};                                                  /* size = 0x4 */

union _m2c_stack_fn_800DA480_view_8 {
    /* 0x0 */ u8 u8[4];                             /* inferred */
    /* 0x0 */ s8 s8[4];                             /* inferred */
    /* 0x0 */ u16 u16[2];                           /* inferred */
    /* 0x0 */ s16 s16[2];                           /* inferred */
    /* 0x0 */ u32 u32[1];                           /* inferred */
    /* 0x0 */ s32 s32[1];                           /* inferred */
    /* 0x0 */ f32 f32[1];                           /* inferred */
};                                                  /* size = 0x4 */

union _m2c_stack_fn_800DA480_view_C {
    /* 0x0 */ u8 u8[4];                             /* inferred */
    /* 0x0 */ s8 s8[4];                             /* inferred */
    /* 0x0 */ u16 u16[2];                           /* inferred */
    /* 0x0 */ s16 s16[2];                           /* inferred */
    /* 0x0 */ u32 u32[1];                           /* inferred */
    /* 0x0 */ s32 s32[1];                           /* inferred */
    /* 0x0 */ f32 f32[1];                           /* inferred */
};                                                  /* size = 0x4 */

extern u8 lbl_80185334[];

void fn_800DA480(s32 *arg0) {
    union _m2c_stack_fn_800DA480_view_10 sp10;
    union _m2c_stack_fn_800DA480_view_C spC;
    union _m2c_stack_fn_800DA480_view_8 sp8;

    spC.u32[0] = *(s32 *)((char *)(lbl_80185334) + (4));
    sp10.u32[0] = *(s32 *)((char *)(lbl_80185334) + (8));
    sp8.u32[0] = *(s32 *) lbl_80185334;
    *arg0 = sp8.u8[0] | ((sp8.u8[1] * 4) | ((sp8.u8[2] * 0x10) | ((spC.u8[0] << 8) | ((spC.u8[1] << 0xB) | ((sp8.u8[3] << 0x10) | ((spC.u8[2] << 0x14) | ((sp10.u8[0] << 0x16) | (spC.u8[3] << 0x15))))))));
}
