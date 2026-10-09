typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_801852C0[];

void fn_800D8B2C(void *arg0) {
    (*(u8 *)(arg0)) = (u8) (*(u8 *)((char *)(lbl_801852C0) + (0)));
    (*(u8 *)((char *)(arg0) + (1))) = (u8) (*(u8 *)((char *)(lbl_801852C0) + (1)));
    (*(u8 *)((char *)(arg0) + (2))) = (u8) (*(u8 *)((char *)(lbl_801852C0) + (2)));
}
