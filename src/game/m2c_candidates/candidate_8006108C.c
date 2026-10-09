typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8006108C(void *arg0) {
    if ((u32) (*(u32 *)((char *)(arg0) + (0xE4))) != 0U) {
        return 1;
    }
    if ((u32) (*(u32 *)((char *)(arg0) + (0xF0))) != 0U) {
        return 1;
    }
    return (*(s32 *)((char *)(arg0) + (0xFC))) != 0;
}
