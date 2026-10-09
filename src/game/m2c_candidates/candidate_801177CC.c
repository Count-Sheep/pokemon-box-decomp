typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_801177CC(void ***arg0, void *arg1) {
    void *temp_r5_7;

    (*(void **)((char *)(arg1) + (4))) = NULL;
    (*(s32 *)((char *)(arg1) + (8))) = 0;
    temp_r5_7 = *(void **)((char *)(arg1) + (0x2C));
    (*(s32 *)((char *)(temp_r5_7) + (4))) = 0;
    (*(s32 *)((char *)(temp_r5_7) + (8))) = 0;
    (*(void **)((char *)(arg1) + (4))) = (void *) **arg0;
    **arg0 = arg1;
    return 1;
}
