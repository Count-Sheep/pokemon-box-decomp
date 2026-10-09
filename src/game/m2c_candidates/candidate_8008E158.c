typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8008E158(void *arg0) {
    void *temp_r3_10;
    void *temp_r5_8;

    temp_r5_8 = *(void **)(arg0);
    temp_r3_10 = (void *) ((*(s32 *)((char *)((*(void **)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1C)))) + (0xC))) + ((*(s16 *)((char *)(arg0) + (0x214))) * 4));
    (*(u8 *)((char *)(temp_r5_8) + (0x108))) = (u8) (*(u8 *)(temp_r3_10));
    (*(u8 *)((char *)(temp_r5_8) + (0x109))) = (u8) (*(u8 *)((char *)(temp_r3_10) + (1)));
    (*(u8 *)((char *)(temp_r5_8) + (0x10A))) = (u8) (*(u8 *)((char *)(temp_r3_10) + (2)));
    (*(u8 *)((char *)(temp_r5_8) + (0x10B))) = (u8) (*(u8 *)((char *)(temp_r3_10) + (3)));
}
