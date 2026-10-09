typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_801030C0(void *arg0, s32 arg1, s32 arg2) {
    (*(s32 *)((char *)(arg0) + (0xC))) = (s32) ((arg2 + 0x1F) & 0xFFFFFFE0);
    (*(s32 *)(arg0)) = arg1;
    (*(s32 *)((char *)(arg0) + (4))) = (s32) (*(s32 *)(arg0));
    (*(s32 *)((char *)(arg0) + (8))) = arg2;
}
