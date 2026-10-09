typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800F37B0(void *arg0) {
    void *temp_r4_4;

    temp_r4_4 = *(void **)((char *)(arg0) + (0x160));
    if (temp_r4_4 != NULL) {
        (*(u8 *)((char *)(arg0) + (0xB2))) = (u8) (*(u8 *)((char *)(temp_r4_4) + (0x13)));
    }
}
