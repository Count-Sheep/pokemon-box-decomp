typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80048A4C(void *, s32, s32);                 /* extern; return value unused */

void fn_80048D3C(void *arg0, s32 arg1, s32 arg2) {
    switch (arg2) {                                 /* irregular */
    case 1:
        if (!((*(s32 *)((char *)(arg0) + (8))) & 4)) {
            fn_80048A4C(arg0, arg1, 1);
            return;
        }
        (*(s32 *)((char *)(arg0) + (0x78))) = arg1;
        return;
    case 2:
        fn_80048A4C(arg0, arg1, 1);
        return;
    }
}
