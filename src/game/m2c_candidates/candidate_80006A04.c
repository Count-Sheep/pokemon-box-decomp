typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80006A04(void *arg0, void *arg1) {
    (*(s32 *)((char *)(arg0) + (8))) = (s32) ((s32) ((char *) (char *)arg1 + 8));
    return *(s32 *)((char *)(arg1) + (4));
}
