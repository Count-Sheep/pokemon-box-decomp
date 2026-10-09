typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8002242C(void *arg0) {
    if ((u8) (*(u8 *)((char *)(arg0) + (0x10))) != 0) {
        if ((s32) (*(s32 *)(arg0)) == 1) {
            (*(s32 *)(arg0)) = 5;
            return;
        }
        (*(s8 *)((char *)(arg0) + (0x11))) = 1;
    }
}
