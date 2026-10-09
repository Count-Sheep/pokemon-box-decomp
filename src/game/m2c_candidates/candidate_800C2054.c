typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BFCD0(void *, s32, s32, s32);            /* extern; return value unused */
void fn_8012DE54(s32);                              /* extern; return value unused */
extern u8 lbl_801EB5AC[];

void *fn_800C2054(void *arg0, s32 arg1) {
    fn_800BFCD0(arg0, 0x4000, 0x10, arg1);
    (*(u8 **)(arg0)) = lbl_801EB5AC;
    fn_8012DE54(*(s32 *)((char *)(arg0) + (0x2C)));
    return arg0;
}
