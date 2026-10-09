typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80136914(void *);                           /* extern; return value unused */

void fn_80087D34(void *arg0) {
    if ((u8) (*(u8 *)((char *)(arg0) + (0x18))) != 0) {
        fn_80136914((void *) ((char *) (char *)arg0 + 0x5C));
    }
}
