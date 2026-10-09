typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8010247C(void *arg0, void *arg1) {
    (*(void **)(arg0)) = arg1;
    (*(s32 *)((char *)(arg0) + (4))) = (s32) (*(s32 *)((char *)(arg1) + (0x18)));
    (*(s32 *)((char *)(arg0) + (0xC))) = (s32) (*(s32 *)((char *)(arg1) + (0x1C)));
    (*(s32 *)((char *)(arg0) + (0x14))) = (s32) (*(s32 *)((char *)(arg1) + (0x24)));
    (*(s32 *)((char *)(arg0) + (8))) = 0;
    (*(s32 *)((char *)(arg0) + (0x10))) = 0;
    (*(s32 *)((char *)(arg0) + (0x18))) = 0;
    (*(s32 *)((char *)(arg0) + (0x1C))) = (s32) (*(s32 *)((char *)(arg1) + (0x18)));
    (*(s32 *)((char *)(arg0) + (0x24))) = (s32) (*(s32 *)((char *)(arg1) + (0x1C)));
    (*(s32 *)((char *)(arg0) + (0x20))) = 0;
    (*(s32 *)((char *)(arg0) + (0x28))) = 0;
    (*(s32 *)((char *)(arg0) + (0x2C))) = (s32) (*(s32 *)((char *)(arg0) + (4)));
    (*(s32 *)((char *)(arg0) + (0x30))) = (s32) (*(s32 *)((char *)(arg0) + (0xC)));
    (*(s32 *)((char *)(arg0) + (0x34))) = (s32) (*(s32 *)((char *)(arg0) + (0x14)));
}
