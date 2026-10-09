typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8003D0F8(void *arg0) {
    return (*(s32 *)((char *)((*(void **)((char *)((*(void **)((char *)(arg0) + (0x3C)))) + (0x10)))) + (0xC))) == 2;
}
