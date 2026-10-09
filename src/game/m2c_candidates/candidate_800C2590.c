typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BFBE4();                                 /* extern; return value unused */
void fn_800C97F0(s32, void *);                      /* extern; return value unused */
extern u8 lbl_801EB5E8[];

void *fn_800C2590(void *arg0) {
    fn_800BFBE4();
    (*(u8 **)(arg0)) = lbl_801EB5E8;
    fn_800C97F0((s32) ((char *) (char *)arg0 + 0x18), arg0);
    (*(s32 *)((char *)(arg0) + (0x28))) = 0;
    (*(s32 *)((char *)(arg0) + (0x2C))) = 0;
    (*(s32 *)((char *)(arg0) + (0x34))) = 0;
    return arg0;
}
