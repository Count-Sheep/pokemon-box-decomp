typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800C4058(void *arg0, u32 arg1) {
    if (arg1 < (u32) (*(u32 *)((char *)((*(void **)((char *)(arg0) + (0x44)))) + (8)))) {
        return (*(s32 *)((char *)(arg0) + (0x4C))) + (arg1 * 0x14);
    }
    return 0;
}
