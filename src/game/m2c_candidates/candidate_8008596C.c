typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8000B9EC();                                  /* extern */
void fn_800BBE74(s32, s32);                         /* extern; return value unused */

void fn_8008596C(void *arg0) {
    fn_800BBE74(0, fn_8000B9EC());
    (*(s8 *)((char *)(arg0) + (0x1F0))) = 2;
    (*(s8 *)((char *)(arg0) + (0x1EE))) = 1;
}
