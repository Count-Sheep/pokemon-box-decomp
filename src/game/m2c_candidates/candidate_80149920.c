typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8012E338(void *, s32);                      /* extern; return value unused */
extern u8 lbl_80226240[];

void fn_80149920(s32 arg0) {
    s32 temp_r4_5;

    temp_r4_5 = arg0 * 0x110;
    fn_8012E338((void *) ((char *) ((void *) ((char *) lbl_80226240 + temp_r4_5)) + 0x8C), temp_r4_5);
}
