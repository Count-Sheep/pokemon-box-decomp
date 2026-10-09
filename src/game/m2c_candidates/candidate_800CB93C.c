typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CB93C(void *arg0, void *arg1) {
    u8 temp_r0_9;
    u8 temp_r5_7;
    u8 temp_r6_5;
    u8 temp_r7_4;

    temp_r7_4 = *(u8 *)(arg1);
    temp_r6_5 = *(u8 *)((char *)(arg1) + (1));
    (*(u8 *)((char *)(arg0) + (0xC))) = temp_r7_4;
    temp_r5_7 = *(u8 *)((char *)(arg1) + (2));
    (*(u8 *)((char *)(arg0) + (0xD))) = temp_r6_5;
    temp_r0_9 = *(u8 *)((char *)(arg1) + (3));
    (*(u8 *)((char *)(arg0) + (0xE))) = temp_r5_7;
    (*(u8 *)((char *)(arg0) + (0xF))) = temp_r0_9;
    (*(u8 *)((char *)(arg0) + (0x10))) = temp_r7_4;
    (*(u8 *)((char *)(arg0) + (0x11))) = temp_r6_5;
    (*(u8 *)((char *)(arg0) + (0x12))) = temp_r5_7;
    (*(u8 *)((char *)(arg0) + (0x13))) = temp_r0_9;
    (*(u8 *)((char *)(arg0) + (0x14))) = temp_r7_4;
    (*(u8 *)((char *)(arg0) + (0x15))) = temp_r6_5;
    (*(u8 *)((char *)(arg0) + (0x16))) = temp_r5_7;
    (*(u8 *)((char *)(arg0) + (0x17))) = temp_r0_9;
    (*(u8 *)((char *)(arg0) + (0x18))) = temp_r7_4;
    (*(u8 *)((char *)(arg0) + (0x19))) = temp_r6_5;
    (*(u8 *)((char *)(arg0) + (0x1A))) = temp_r5_7;
    (*(u8 *)((char *)(arg0) + (0x1B))) = temp_r0_9;
}
