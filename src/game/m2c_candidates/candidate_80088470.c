typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80008C3C();                                 /* extern; return value unused */
extern u8 lbl_801E4E48[];

void *fn_80088470(void *arg0) {
    fn_80008C3C();
    (*(u8 **)(arg0)) = lbl_801E4E48;
    (*(s32 *)((char *)(arg0) + (8))) = 0;
    (*(s32 *)((char *)(arg0) + (0xC))) = 0;
    (*(s8 *)((char *)(arg0) + (0x18))) = 0;
    (*(s8 *)((char *)(arg0) + (0x19))) = 0;
    (*(s8 *)((char *)(arg0) + (0x1A))) = 0;
    (*(s8 *)((char *)(arg0) + (0x1B))) = 0;
    (*(s8 *)((char *)(arg0) + (0x1C))) = 0;
    (*(s8 *)((char *)(arg0) + (0x1D))) = 2;
    (*(s8 *)((char *)(arg0) + (0x1E))) = 3;
    (*(s8 *)((char *)(arg0) + (0x1F))) = 0;
    (*(s32 *)((char *)(arg0) + (0x20))) = 0;
    (*(s32 *)((char *)(arg0) + (0x24))) = 0;
    (*(s32 *)((char *)(arg0) + (0x28))) = 0;
    (*(s32 *)((char *)(arg0) + (0x2C))) = 0;
    return arg0;
}
