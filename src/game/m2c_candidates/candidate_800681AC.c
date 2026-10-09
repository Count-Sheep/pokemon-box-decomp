typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800184CC(s32);                              /* extern; return value unused */
void fn_80036C48(s32, s32);                         /* extern; return value unused */
extern u8 lbl_801F8E30[];

void fn_800681AC(s32 arg0) {
    if ((*(s32 *)((char *)(lbl_801F8E30) + (0x1C))) & 0x700) {
        fn_80036C48(arg0, 0);
        fn_800184CC(0x80000004);
    }
}
