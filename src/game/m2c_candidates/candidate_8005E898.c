typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8005532C(void *, s32);                      /* extern; return value unused */
void fn_8005922C(void *, s32);                      /* extern; return value unused */

void fn_8005E898(void *arg0) {
    void *temp_r3_21;

    (*(s32 *)((char *)(arg0) + (0xF0))) = 1;
    fn_8005922C(*(void **)((char *)(arg0) + (0xC0)), 0);
    fn_8005922C(*(void **)((char *)(arg0) + (0xD4)), 1);
    (*(s8 *)((char *)((*(void **)((char *)((*(void **)((char *)(arg0) + (0xD4)))) + (0xC)))) + (0xB0))) = 1;
    temp_r3_21 = *(void **)((char *)(arg0) + (0xD0));
    fn_8005532C(temp_r3_21, (*(s32 *)((char *)(temp_r3_21) + (0x10))) - 1);
}
