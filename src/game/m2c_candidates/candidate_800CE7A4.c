typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_80200A18[];

void fn_800CE7A4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r3_10;
    void *temp_r3_16;

    (*(s32 *)((char *)(arg0) + (0x38))) = 0;
    (*(s32 *)((char *)(arg0) + (0x34))) = 0;
    (*(s32 *)((char *)(arg0) + (0x3C))) = arg1;
    (*(s32 *)((char *)(arg0) + (0x40))) = arg2;
    (*(s32 *)((char *)(arg0) + (0x44))) = arg3;
    temp_r3_10 = *(s16 *)((char *)(arg0) + (0x7C));
    if (temp_r3_10 >= 0) {
        temp_r3_16 = (void *) ((char *) lbl_80200A18 + (temp_r3_10 * 0x30));
        (*(s32 *)((char *)(temp_r3_16) + (0x20))) = 0;
        (*(s32 *)((char *)(temp_r3_16) + (0x1C))) = 0;
        (*(s32 *)((char *)(temp_r3_16) + (0x24))) = arg1;
        (*(s32 *)((char *)(temp_r3_16) + (0x28))) = arg2;
        (*(s32 *)((char *)(temp_r3_16) + (0x2C))) = arg3;
    }
}
