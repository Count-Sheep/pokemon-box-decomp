typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80124B18(void *arg0, void *arg1) {
    return ((*(u16 *)((char *)(arg1) + (8))) - (*(u16 *)((char *)(arg0) + (0x1A)))) * 2;
}
