typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80133350(u8 *, s32, s32, u8 *);             /* extern; return value unused */
extern u8 BB2_80208BA0[];
extern u8 fn_801350CC[];

void fn_80134F80(void) {
    fn_80133350(BB2_80208BA0, 0x20, 0x420, fn_801350CC);
}
