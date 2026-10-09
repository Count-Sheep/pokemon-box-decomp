typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_80226BC0[];

void fn_80158C74(s32 arg0) {
    void *temp_r3_7;

    temp_r3_7 = (void *) ((char *) lbl_80226BC0 + (arg0 << 8));
    if ((s32) (*(s32 *)((char *)(temp_r3_7) + (0x20))) == 0) {
        if (((u8) (*(u8 *)((char *)(temp_r3_7) + (5))) != 0) || ((u8) (*(u8 *)((char *)(temp_r3_7) + (6))) != 4)) {
            (*(s32 *)((char *)(temp_r3_7) + (0x20))) = 1;
            return;
        }
        *(*(s8 **)((char *)(temp_r3_7) + (0x14))) = (*(u8 *)((char *)(temp_r3_7) + (7))) & 0x3A;
    }
}
