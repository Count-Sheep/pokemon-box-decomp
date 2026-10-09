typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_8018566C[];

void fn_801071D8(void *arg0) {
    (*(f32 *)(arg0)) = (f32) *(f32 *) lbl_8018566C;
    (*(f32 *)((char *)(arg0) + (4))) = (f32) (*(f32 *)((char *)(lbl_8018566C) + (4)));
    (*(f32 *)((char *)(arg0) + (8))) = (f32) (*(f32 *)((char *)(lbl_8018566C) + (8)));
    (*(f32 *)((char *)(arg0) + (0xC))) = (f32) (*(f32 *)((char *)(lbl_8018566C) + (0xC)));
    (*(f32 *)((char *)(arg0) + (0x10))) = (f32) (*(f32 *)((char *)(lbl_8018566C) + (0x10)));
    (*(f32 *)((char *)(arg0) + (0x14))) = (f32) (*(f32 *)((char *)(lbl_8018566C) + (0x14)));
    (*(u8 *)((char *)(arg0) + (0x18))) = (u8) (*(u8 *)((char *)(lbl_8018566C) + (0x18)));
}
