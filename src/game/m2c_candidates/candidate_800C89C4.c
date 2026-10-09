typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800C97F0(void *, void *);                   /* extern; return value unused */

void *fn_800C89C4(void *arg0) {
    fn_800C97F0(arg0, arg0);
    (*(s32 *)((char *)(arg0) + (0x48))) = 0;
    (*(s8 *)((char *)(arg0) + (0x4C))) = 0;
    return arg0;
}
