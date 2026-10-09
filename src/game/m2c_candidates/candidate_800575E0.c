typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800575E0(void *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4) {
    if ((arg1 == 1) && !((*(u8 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1B))) & 1)) {
        return 0;
    }
    if ((arg2 == 1) && !(((u8) (*(u8 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1B))) >> 1U) & 1)) {
        return 0;
    }
    if ((arg3 == 1) && !(((u8) (*(u8 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1B))) >> 2U) & 1)) {
        return 0;
    }
    if ((arg4 == 1) && !(((u8) (*(u8 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1B))) >> 3U) & 1)) {
        return 0;
    }
    return 1;
}
