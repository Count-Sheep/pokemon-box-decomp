typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BD6E0(int arg0);                         /* extern */
void fn_800BD704(int arg0);                         /* extern */
extern u8 lbl_801E23D4[];

void *fn_80051730(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        (*(u8 **)((char *)(arg0) + (8))) = lbl_801E23D4;
        fn_800BD704(*(s32 *)((char *)(arg0) + (4)));
        if (arg1 > 0) {
            fn_800BD6E0((s32) arg0);
        }
    }
    return arg0;
}
