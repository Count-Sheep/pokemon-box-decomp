typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8008E214(void *arg0, void *arg1) {
    void *temp_r3_9;

    temp_r3_9 = (void *) ((*(s32 *)((char *)((*(void **)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1C)))) + (0x10))) + ((*(s16 *)((char *)(arg0) + (0x214))) * 4));
    (*(u8 *)((char *)(arg1) + (0x90))) = (u8) (*(u8 *)(temp_r3_9));
    (*(u8 *)((char *)(arg1) + (0x91))) = (u8) (*(u8 *)((char *)(temp_r3_9) + (1)));
    (*(u8 *)((char *)(arg1) + (0x92))) = (u8) (*(u8 *)((char *)(temp_r3_9) + (2)));
    (*(u8 *)((char *)(arg1) + (0x93))) = (u8) (*(u8 *)((char *)(temp_r3_9) + (3)));
}
