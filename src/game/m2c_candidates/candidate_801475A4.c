typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_801475A4(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x40))) = 0;
    (*(s32 *)((char *)(arg0) + (0x3C))) = 0;
    (*(s32 *)((char *)(arg0) + (0x38))) = 0;
    (*(s32 *)((char *)(arg0) + (0x44))) = (s32) (*(s32 *)((*(void **)((char *)(arg0) + (0x18)))));
    (*(s32 *)((char *)(arg0) + (0x48))) = (s32) (*(s32 *)((char *)((*(void **)((char *)(arg0) + (0x18)))) + (4)));
    (*(s32 *)((char *)(arg0) + (0x4C))) = (s32) (*(s32 *)((char *)((*(void **)((char *)(arg0) + (0x18)))) + (8)));
    (*(s32 *)((char *)(arg0) + (0x40))) = (s32) (*(s32 *)((char *)((*(void **)((char *)(arg0) + (0x18)))) + (0xC)));
    (*(s32 *)((char *)(arg0) + (0x54))) = (s32) (*(s32 *)((char *)((*(void **)((char *)(arg0) + (0x18)))) + (0x10)));
    (*(s32 *)((char *)(arg0) + (0x58))) = (s32) (*(s32 *)((char *)((*(void **)((char *)(arg0) + (0x18)))) + (0x14)));
}
