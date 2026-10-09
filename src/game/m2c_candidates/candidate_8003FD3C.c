typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8003FD3C(void *arg0) {
    void *temp_r3_17;
    void *temp_r4_18;
    void *temp_r4_24;
    void *temp_r4_4;
    void *temp_r5_11;
    void *temp_r5_5;

    temp_r4_4 = *(void **)((char *)(arg0) + (8));
    temp_r5_5 = *(void **)(temp_r4_4);
    if (temp_r5_5 != NULL) {
        (*(u16 *)((char *)(temp_r5_5) + (0x34))) = (u16) (*(u16 *)((char *)(temp_r4_4) + (0xC)));
    }
    temp_r5_11 = *(void **)((char *)(temp_r4_4) + (4));
    if (temp_r5_11 != NULL) {
        (*(u16 *)((char *)(temp_r5_11) + (0x34))) = (u16) (*(u16 *)((char *)(temp_r4_4) + (0xC)));
    }
    temp_r3_17 = *(void **)((char *)(arg0) + (0xC));
    temp_r4_18 = *(void **)(temp_r3_17);
    if (temp_r4_18 != NULL) {
        (*(u16 *)((char *)(temp_r4_18) + (0x34))) = (u16) (*(u16 *)((char *)(temp_r3_17) + (0xC)));
    }
    temp_r4_24 = *(void **)((char *)(temp_r3_17) + (4));
    if (temp_r4_24 != NULL) {
        (*(u16 *)((char *)(temp_r4_24) + (0x34))) = (u16) (*(u16 *)((char *)(temp_r3_17) + (0xC)));
    }
}
