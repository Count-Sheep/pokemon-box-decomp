typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CBD90(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x48))) = 0;
    (*(s32 *)((char *)(arg0) + (0x50))) = 0;
    (*(s32 *)((char *)(arg0) + (0x54))) = 0;
    (*(s32 *)((char *)(arg0) + (0x58))) = 0;
    (*(s32 *)((char *)(arg0) + (0x5C))) = 0;
    (*(s32 *)((char *)(arg0) + (0x1C))) = 0;
    (*(s32 *)((char *)(arg0) + (0x20))) = 0;
    (*(s32 *)((char *)(arg0) + (0x44))) = -1;
}
