typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8007DCAC(void *arg0, u8 arg1) {
    (*(u8 *)((char *)(arg0) + (0x18))) = arg1;
    if ((s32) (*(u8 *)((char *)(arg0) + (0x18))) == 3) {
        (*(s8 *)((char *)(arg0) + (0x19))) = 0;
        (*(f32 *)((char *)(arg0) + (8))) = (f32) (*(f32 *)((char *)(arg0) + (0xC)));
    }
}
