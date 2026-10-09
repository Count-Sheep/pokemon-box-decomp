typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800742B8(void *arg0) {
    (*(u32 *)((char *)(arg0) + (8))) = (u32) (*(u32 *)((char *)(arg0) + (4)));
    if ((u8) (*(u8 *)(arg0)) != 0) {
        (*(u32 *)((char *)(arg0) + (4))) = (u32) ((*(u32 *)((char *)(arg0) + (4))) + 1);
        if ((u32) (*(u32 *)((char *)(arg0) + (4))) == (u32) (*(u32 *)((char *)(arg0) + (0xC)))) {
            (*(u8 *)(arg0)) = 0U;
        }
    }
}
