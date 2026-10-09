typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
u32 fn_800C479C(void *arg0, void *arg1, s32 *arg2) {
    if ((u32) (*(u32 *)((char *)(arg1) + (0x10))) == 0U) {
        (*(u32 *)((char *)(arg1) + (0x10))) = (u32) ((*(s32 *)((char *)(arg0) + (0x68))) + (*(s32 *)((char *)(arg1) + (8))));
    }
    if (arg2 != NULL) {
        *arg2 = *(s32 *)((char *)(arg1) + (0xC));
    }
    return *(u32 *)((char *)(arg1) + (0x10));
}
