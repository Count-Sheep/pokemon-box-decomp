typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void memcpy(s32, void *, s32);                      /* extern; return value unused */
extern u8 lbl_80226BC0[];

void fn_8015A000(s32 arg0) {
    void *temp_r31_11;

    temp_r31_11 = (void *) ((char *) lbl_80226BC0 + (arg0 << 8));
    if ((s32) (*(s32 *)((char *)(temp_r31_11) + (0x20))) == 0) {
        memcpy(*(s32 *)((char *)(temp_r31_11) + (0x18)), (void *) ((char *) (char *)temp_r31_11 + 5), 4);
        *(*(s8 **)((char *)(temp_r31_11) + (0x14))) = (*(u8 *)((char *)(temp_r31_11) + (9))) & 0x3A;
    }
}
