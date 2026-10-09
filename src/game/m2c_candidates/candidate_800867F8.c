typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void memcpy(s32, u32, s32);                         /* extern; return value unused */
void memset(s32, s32, s32);                         /* extern; return value unused */

void fn_800867F8(void *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u8 arg5) {
    u8 temp_r0_16;

    (*(u8 *)((char *)(arg0) + (0x21))) = arg5;
    temp_r0_16 = *(u8 *)((char *)(arg0) + (0x21));
    if ((temp_r0_16 == 1) || (temp_r0_16 == 2)) {
        (*(s8 *)((char *)(arg0) + (0x20))) = 0;
        return;
    }
    memcpy(*(s32 *)((char *)(arg0) + (0xC)), arg1, 0x890);
    memcpy(*(s32 *)((char *)(arg0) + (0x10)), arg2, 0x3AC0);
    memcpy(*(s32 *)((char *)(arg0) + (0x14)), arg3, 0x83D0);
    if (arg4 != 0U) {
        memcpy(*(s32 *)((char *)(arg0) + (0x18)), arg4, 0x1F00);
        (*(s8 *)((char *)(arg0) + (0x20))) = 1;
        return;
    }
    memset(*(s32 *)((char *)(arg0) + (0x18)), 0, 0x1F00);
    (*(s8 *)((char *)(arg0) + (0x20))) = 0;
}
