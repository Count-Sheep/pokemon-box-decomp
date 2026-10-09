typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80036EE8();                                 /* extern; return value unused */

void fn_80049E00(void *arg0) {
    fn_80036EE8();
    if ((u8) (*(u8 *)((char *)(arg0) + (0xD))) != 0) {
        (*(s32 *)((char *)(arg0) + (0x14))) = (s32) ((*(s32 *)((char *)(arg0) + (0x14))) | 1);
    }
}
