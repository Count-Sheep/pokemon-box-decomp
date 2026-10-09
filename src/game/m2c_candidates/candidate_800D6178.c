typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800D6178(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x828))) = 0;
    (*(s32 *)((char *)(arg0) + (0x82C))) = 0;
    (*(s32 *)((char *)(arg0) + (0x824))) = 0;
    (*(s32 *)((char *)(arg0) + (0x820))) = (s32) (((s32) ((char *) (char *)arg0 + 0x1F)) & 0xFFFFFFE0);
    (*(s8 *)((char *)(arg0) + (0x830))) = 0;
}
