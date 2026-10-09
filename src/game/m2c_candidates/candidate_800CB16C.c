typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CB304(void *, u8);                       /* extern; return value unused */

void fn_800CB16C(void *arg0, void *arg1) {
    void *temp_r0_13;

    if ((u8) (*(u8 *)((char *)((*(void **)((char *)(arg0) + (0x20)))) + (8))) != 0) {
        if ((arg1 == NULL) && (temp_r0_13 = *(void **)((char *)(arg0) + (0x28)), ((temp_r0_13 == NULL) == 0))) {
            (*(void **)((char *)(arg0) + (0x2C))) = temp_r0_13;
        } else {
            (*(void **)((char *)(arg0) + (0x2C))) = arg1;
        }
        fn_800CB304(arg0, *(u8 *)((char *)((*(void **)((char *)(arg0) + (0x2C)))) + (0xC)));
    }
}
