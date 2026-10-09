typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_80034018(s32);                               /* extern */
void fn_8007429C(void *, s32);                      /* extern; return value unused */
void *fn_8007A080();                                /* extern */

void fn_80078C40(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x74))) = 3;
    fn_8007429C((void *) ((char *) (char *)arg0 + 0x78), fn_80034018(*(s32 *)((char *)(fn_8007A080()) + (8))));
}
