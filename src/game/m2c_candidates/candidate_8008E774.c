typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CB400(s32, s32, s32);                    /* extern; return value unused */

void fn_8008E774(void *arg0, void *arg1) {
    s32 temp_r5_10;

    temp_r5_10 = *(s32 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x38));
    fn_800CB400(*((s32 *) ((*(s32 *)((char *)((*(void **)((char *)(arg0) + (8)))) + (8))) + (*((u16 *) (temp_r5_10 + ((*(u8 *)((char *)(arg1) + (0x94))) * 2))) * 4))) + 4, 0, temp_r5_10);
}
