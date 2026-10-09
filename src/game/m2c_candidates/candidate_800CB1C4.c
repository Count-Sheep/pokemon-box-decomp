typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CB214();                                 /* extern; return value unused */
void fn_800CB304(void *, u8);                       /* extern; return value unused */

void fn_800CB1C4(void *arg0) {
    void *temp_r0_14;

    if ((u16) (*(u16 *)((char *)((*(void **)((char *)(arg0) + (0x20)))) + (0xA))) == 0) {
        fn_800CB214();
        return;
    }
    temp_r0_14 = *(void **)((char *)(arg0) + (0x28));
    if (temp_r0_14 != NULL) {
        (*(void **)((char *)(arg0) + (0x2C))) = temp_r0_14;
        fn_800CB304(arg0, *(u8 *)((char *)((*(void **)((char *)(arg0) + (0x2C)))) + (0xC)));
    }
}
