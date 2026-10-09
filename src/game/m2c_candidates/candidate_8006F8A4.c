typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8006F8A4(void *arg0, s32 arg1) {
    (*(u8 *)((char *)(arg0) + (0xA))) = (u8) ((*(u8 *)((char *)(arg0) + (0xA))) + arg1);
    if ((s8) (*(u8 *)((char *)(arg0) + (0xA))) > 3) {
        (*(u8 *)((char *)(arg0) + (0xA))) = 0U;
    }
    if ((s8) (*(u8 *)((char *)(arg0) + (0xA))) < 0) {
        (*(u8 *)((char *)(arg0) + (0xA))) = 3U;
    }
}
