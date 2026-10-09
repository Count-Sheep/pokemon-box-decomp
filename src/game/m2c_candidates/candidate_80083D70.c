typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void *fn_80018F5C();                                /* extern */
void fn_800BBE74(u8, s32);                          /* extern; return value unused */

void fn_80083D70(void *arg0) {
    fn_800BBE74(*(u8 *)((char *)(fn_80018F5C()) + (0x48)), 0xF);
    (*(s8 *)((char *)(arg0) + (0x1F0))) = 1;
}
