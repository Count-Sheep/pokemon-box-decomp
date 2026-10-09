typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800184CC(s32);                              /* extern; return value unused */
void fn_80058180();                                 /* extern; return value unused */
void fn_80058284(void *);                           /* extern; return value unused */
void fn_800582D8(void *);                           /* extern; return value unused */

void fn_80057BD8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(s32 *)((char *)(arg0) + (0x84))) = arg1;
    (*(s32 *)((char *)(arg0) + (0x88))) = arg2;
    (*(s32 *)((char *)(arg0) + (0x8C))) = arg3;
    fn_80058180();
    fn_800582D8(arg0);
    fn_80058284(arg0);
    (*(s8 *)((char *)(arg0) + (0x90))) = 0;
    fn_800184CC(0x1C5);
}
