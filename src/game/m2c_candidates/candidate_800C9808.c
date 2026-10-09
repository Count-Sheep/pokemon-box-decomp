typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800C9C5C(u32, void *);                      /* extern; return value unused */
void fn_800BD6E0(int arg0);                         /* extern */

void *fn_800C9808(void *arg0, s16 arg1) {
    u32 temp_r3_12;

    if (arg0 != NULL) {
        temp_r3_12 = *(u32 *)((char *)(arg0) + (4));
        if (temp_r3_12 != 0U) {
            fn_800C9C5C(temp_r3_12, arg0);
        }
        if (arg1 > 0) {
            fn_800BD6E0((s32) arg0);
        }
    }
    return arg0;
}
