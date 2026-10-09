typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80153E90(u8, s32);                          /* extern; return value unused */

void fn_800D77F8(void *arg0, u8 arg1) {
    (*(u8 *)((char *)(arg0) + (0x34))) = arg1;
    fn_80153E90(*(u8 *)((char *)(arg0) + (0x34)), 0);
}
