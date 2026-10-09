typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800C2590();                                 /* extern; return value unused */
extern u8 lbl_801EB6C0[];

void *fn_800C36FC(void *arg0) {
    fn_800C2590();
    (*(u8 **)(arg0)) = lbl_801EB6C0;
    (*(s8 *)((char *)(arg0) + (0x30))) = 0;
    (*(s32 *)((char *)(arg0) + (0x60))) = 1;
    return arg0;
}
