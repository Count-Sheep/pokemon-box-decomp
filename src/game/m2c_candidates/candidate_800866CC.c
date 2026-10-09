typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80086738();                                  /* extern */
extern u8 lbl_801F8E30[];

s32 fn_800866CC(void *arg0, s32 arg1) {
    s32 var_r31_8;

    var_r31_8 = 0;
    if (((s32) (*(u16 *)((char *)(arg0) + (0x2A))) == fn_80086738()) && ((*(s32 *)((char *)(lbl_801F8E30) + (0x1C))) & arg1)) {
        var_r31_8 = 1;
    }
    return var_r31_8;
}
