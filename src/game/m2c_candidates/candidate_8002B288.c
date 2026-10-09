typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8002B288(void *arg0) {
    void *temp_r4_7;

    if ((*(s32 *)((char *)(arg0) + (0x5C))) & 2) {
        temp_r4_7 = *(void **)((char *)(arg0) + (0x54));
        (*(s16 *)(temp_r4_7)) = (s16) (*(s16 *)((char *)(arg0) + (0x60)));
        (*(u16 *)((char *)(temp_r4_7) + (2))) = (u16) (*(u16 *)((char *)(arg0) + (0x62)));
    }
}
