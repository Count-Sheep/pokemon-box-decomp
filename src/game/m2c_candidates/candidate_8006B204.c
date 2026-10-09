typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80063384(s32, s32, s32 *);                  /* extern; return value unused */

void fn_8006B204(void *arg0) {
    s32 *temp_r5_11;
    s32 temp_r4_12;

    temp_r5_11 = *(s32 **)((char *)(arg0) + (0x2C));
    temp_r4_12 = *temp_r5_11;
    *temp_r5_11 = temp_r4_12 & ~5;
    (*(s32 *)((char *)(arg0) + (0x34))) = 6;
    fn_80063384(*(s32 *)((char *)(arg0) + (0x18)), temp_r4_12, temp_r5_11);
    (*(s16 *)((char *)(arg0) + (0x2E80))) = 0;
}
