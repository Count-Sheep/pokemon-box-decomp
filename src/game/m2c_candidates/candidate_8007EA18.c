typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8007EA18(void *arg0, u8 arg1) {
    (*(u8 *)((char *)(arg0) + (0x1A))) = arg1;
    if ((u8) (*(u8 *)((char *)(arg0) + (0x1A))) != 0) {
        (*(s8 *)((char *)((*(void **)((char *)(arg0) + (0x20)))) + (0xB0))) = 1;
        return;
    }
    (*(s8 *)((char *)((*(void **)((char *)(arg0) + (0x20)))) + (0xB0))) = 0;
}
