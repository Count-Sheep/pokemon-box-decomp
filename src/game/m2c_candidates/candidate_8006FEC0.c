typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80095BE4(s32);                              /* extern; return value unused */

void fn_8006FEC0(void *arg0) {
    fn_80095BE4(*(s32 *)((char *)(arg0) + (4)));
}
