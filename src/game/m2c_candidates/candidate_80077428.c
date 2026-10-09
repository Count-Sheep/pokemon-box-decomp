typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80074BB0();                                 /* extern; return value unused */
extern u8 lbl_801E4838[];

void *fn_80077428(void *arg0) {
    fn_80074BB0();
    (*(u8 **)((char *)(arg0) + (0xC))) = lbl_801E4838;
    return arg0;
}
