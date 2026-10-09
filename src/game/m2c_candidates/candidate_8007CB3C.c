typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8007CB74(s32, u8, s32, void *);             /* extern; return value unused */

void fn_8007CB3C(void *arg0, u8 arg1, s32 arg2) {
    (*(u8 *)((char *)(arg0) + (4))) = arg1;
    (*(s32 *)((char *)(arg0) + (8))) = arg2;
    fn_8007CB74(*(s32 *)(arg0), *(u8 *)((char *)(arg0) + (4)), *(s32 *)((char *)(arg0) + (8)), arg0);
}
