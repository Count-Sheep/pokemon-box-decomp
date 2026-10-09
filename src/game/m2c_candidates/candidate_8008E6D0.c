typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CB400(s32, s32, s32, s32);               /* extern; return value unused */

void fn_8008E6D0(void *arg0) {
    s32 temp_r5_11;
    s32 temp_r6_13;
    void *temp_r5_8;

    temp_r5_8 = *(void **)((char *)(arg0) + (4));
    temp_r5_11 = *(s32 *)((char *)(temp_r5_8) + (0x38));
    temp_r6_13 = *(s32 *)((char *)((*(void **)((char *)(arg0) + (8)))) + (8));
    fn_800CB400(*((s32 *) (temp_r6_13 + (*((u16 *) (temp_r5_11 + (((*(u8 *)((char *)(*(*(void ***)((char *)(temp_r5_8) + (0x1C)))) + (0x20))) * 2) & 0x1FE))) * 4))) + 4, 0, temp_r5_11, temp_r6_13);
}
