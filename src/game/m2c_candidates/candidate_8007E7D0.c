typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8007E7D0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(s32 *)((char *)(arg0) + (0xC00))) = arg2;
    (*(s32 *)((char *)(arg0) + (0xC04))) = arg3;
    (*(s32 *)((char *)(arg0) + (0xC08))) = arg1;
}
