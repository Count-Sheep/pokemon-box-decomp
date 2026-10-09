typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800184CC(s32);                              /* extern; return value unused */
s32 fn_80034018(s32);                               /* extern */
void fn_8005520C(s32, s32, s32, s32);               /* extern; return value unused */
void *fn_80059384();                                /* extern */

void fn_80054FD4(s32 arg0) {
    fn_8005520C(arg0, 1, 1, fn_80034018(*(s32 *)((char *)(fn_80059384()) + (8))));
    fn_800184CC(0x1BD);
}
