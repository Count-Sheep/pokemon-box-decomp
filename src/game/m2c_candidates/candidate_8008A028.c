typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800C9C5C(u8 *, s32);                        /* extern; return value unused */
void fn_8012DE54(s32);                              /* extern; return value unused */
extern u8 lbl_801F9A1C[];

void fn_8008A028(void *arg0) {
    fn_800C9C5C(lbl_801F9A1C, (s32) ((char *) (char *)arg0 + 0x2C));
    fn_8012DE54(*(s32 *)((char *)(arg0) + (0x28)));
}
