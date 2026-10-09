typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BC974();                                 /* extern; return value unused */
extern u8 lbl_801EB2E8[];

void *fn_800BF430(void *arg0) {
    fn_800BC974();
    (*(u8 **)(arg0)) = lbl_801EB2E8;
    (*(s32 *)((char *)(arg0) + (0x6C))) = (s32) (*(s32 *)((char *)(arg0) + (0x38)));
    (*(s32 *)((char *)(arg0) + (0x70))) = (s32) (*(s32 *)((char *)(arg0) + (0x30)));
    (*(s32 *)((char *)(arg0) + (0x74))) = (s32) (*(s32 *)((char *)(arg0) + (0x34)));
    (*(s32 *)((char *)(arg0) + (0x78))) = 0;
    return arg0;
}
