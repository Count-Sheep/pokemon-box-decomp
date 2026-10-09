typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 gDBCommTable[];

s32 fn_80169AD4(s32 arg0, s32 arg1) {
    s32 temp_r3_11;

    temp_r3_11 = (*(s32 (**)(s32, s32, u8 *))((char *)(gDBCommTable) + (0x10)))(arg0, arg1, gDBCommTable);
    return (s32) (-temp_r3_11 | temp_r3_11) >> 0x1F;
}
