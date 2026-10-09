typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800184CC(s32, u16);                         /* extern; return value unused */

void fn_80057F8C(void *arg0) {
    u16 temp_r4_10;

    temp_r4_10 = (*(u16 *)((char *)(arg0) + (8))) == 0;
    (*(u16 *)((char *)(arg0) + (8))) = temp_r4_10;
    (*(s8 *)((char *)(arg0) + (0x90))) = 0;
    fn_800184CC(0x1C6, temp_r4_10);
}
