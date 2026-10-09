typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8013DC8C(s32);                              /* extern; return value unused */

void fn_80148128(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x5C))) = 3;
    (*(s32 *)((char *)(arg0) + (0x78))) = 3;
    fn_8013DC8C(*(s32 *)((char *)(arg0) + (4)));
}
