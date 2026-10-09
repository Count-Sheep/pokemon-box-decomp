typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80075C18(void *arg0, f32 farg0, f32 farg1) {
    (*(f32 *)((char *)(arg0) + (0x28))) = (f32) ((*(f32 *)((char *)(arg0) + (0x20))) + farg0);
    (*(f32 *)((char *)(arg0) + (0x2C))) = (f32) ((*(f32 *)((char *)(arg0) + (0x24))) + farg1);
}
