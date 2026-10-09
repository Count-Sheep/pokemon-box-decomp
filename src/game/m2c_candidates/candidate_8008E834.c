typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8008E834(void *arg0) {
    void *temp_r5_6;
    void *temp_r6_5;

    temp_r6_5 = *(void **)(arg0);
    temp_r5_6 = *(void **)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1C));
    (*(u8 *)((char *)(temp_r6_5) + (0x111))) = (u8) *((u8 *) ((*(s32 *)((char *)(temp_r5_6) + (8))) + (u8) ((*(u32 *)((char *)(temp_r6_5) + (0x100))) % (*(u8 *)((char *)((*(void **)(temp_r5_6))) + (0x1F))))));
}
