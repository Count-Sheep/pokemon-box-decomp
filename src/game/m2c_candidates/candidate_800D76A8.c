typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800D76A8(void *arg0, void *arg1) {
    s32 temp_r0_9;
    s32 temp_r5_7;
    s32 temp_r6_5;
    s32 temp_r7_4;

    temp_r7_4 = *(s32 *)(arg1);
    temp_r6_5 = *(s32 *)((char *)(arg1) + (4));
    (*(s32 *)((char *)(arg0) + (4))) = temp_r7_4;
    temp_r5_7 = *(s32 *)((char *)(arg1) + (8));
    (*(s32 *)((char *)(arg0) + (8))) = temp_r6_5;
    temp_r0_9 = *(s32 *)((char *)(arg1) + (0xC));
    (*(s32 *)((char *)(arg0) + (0xC))) = temp_r5_7;
    (*(s32 *)((char *)(arg0) + (0x10))) = temp_r0_9;
    (*(s32 *)((char *)(arg0) + (0x14))) = temp_r7_4;
    (*(s32 *)((char *)(arg0) + (0x18))) = temp_r6_5;
    (*(s32 *)((char *)(arg0) + (0x1C))) = temp_r5_7;
    (*(s32 *)((char *)(arg0) + (0x20))) = temp_r0_9;
}
