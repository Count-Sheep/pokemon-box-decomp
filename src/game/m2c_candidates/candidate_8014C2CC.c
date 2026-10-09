typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8014A768(s32, u8 *, s32, s32, u16);          /* extern */
extern u8 fn_8014C1E4[];
extern u8 lbl_80226240[];

s32 fn_8014C2CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r5_21;
    u16 temp_r7_20;
    void *temp_r8_10;

    temp_r8_10 = (void *) ((char *) lbl_80226240 + (arg0 * 0x110));
    if ((s32) (*(s32 *)(temp_r8_10)) == 0) {
        return -3;
    }
    (*(s32 *)((char *)(temp_r8_10) + (0xD4))) = arg4;
    temp_r7_20 = *(u16 *)((char *)(temp_r8_10) + (0xA));
    temp_r5_21 = arg2 / (s32) temp_r7_20;
    (*(s32 *)((char *)(temp_r8_10) + (0xAC))) = temp_r5_21;
    (*(s32 *)((char *)(temp_r8_10) + (0xB0))) = arg1;
    (*(s32 *)((char *)(temp_r8_10) + (0xB4))) = arg3;
    return fn_8014A768(arg0, fn_8014C1E4, temp_r5_21, arg3, temp_r7_20);
}
