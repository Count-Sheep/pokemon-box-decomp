typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800184CC(s32);                              /* extern; return value unused */
void fn_8005D628(s32, u16);                         /* extern; return value unused */

void fn_8005D5CC(s32 arg0, u16 *arg1) {
    *arg1 ^= 1;
    fn_8005D628(arg0, *arg1);
    if ((u16) *arg1 == 1) {
        fn_800184CC(0x1AD);
        return;
    }
    fn_800184CC(0x1AC);
}
