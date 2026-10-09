typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800C97F0(s32, void *);                      /* extern; return value unused */

void *fn_80095984(void *arg0) {
    fn_800C97F0((s32) ((char *) (char *)arg0 + 0x58), arg0);
    (*(s32 *)((char *)(arg0) + (0xC4))) = 0;
    (*(s32 *)((char *)(arg0) + (0xC8))) = 0;
    (*(s32 *)((char *)(arg0) + (0xCC))) = 0;
    (*(s32 *)((char *)(arg0) + (0xD0))) = 0;
    (*(s32 *)((char *)(arg0) + (0xD4))) = 0;
    (*(s32 *)((char *)(arg0) + (0xD8))) = 0;
    (*(s32 *)((char *)(arg0) + (0xDC))) = 0;
    return arg0;
}
