typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80154C20(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    (*(f32 *)((char *)(arg0) + (0x10))) = farg0;
    (*(f32 *)((char *)(arg0) + (0x14))) = farg1;
    (*(f32 *)((char *)(arg0) + (0x18))) = farg2;
    (*(f32 *)((char *)(arg0) + (0x1C))) = farg3;
    (*(f32 *)((char *)(arg0) + (0x20))) = farg4;
    (*(f32 *)((char *)(arg0) + (0x24))) = farg5;
}
