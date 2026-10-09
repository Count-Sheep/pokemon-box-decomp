typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_801E31D4[];

void fn_80067B98(void *arg0, s32 arg1) {
    s32 temp_r6_5;
    void *temp_r4_8;

    temp_r6_5 = arg1 * 4;
    temp_r4_8 = (void *) ((char *) lbl_801E31D4 + temp_r6_5);
    (*(u8 *)((char *)(arg0) + (0x46FC))) = (u8) *(lbl_801E31D4 + temp_r6_5);
    (*(u8 *)((char *)(arg0) + (0x46FD))) = (u8) (*(u8 *)((char *)(temp_r4_8) + (1)));
    (*(u8 *)((char *)(arg0) + (0x46FE))) = (u8) (*(u8 *)((char *)(temp_r4_8) + (2)));
}
