typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80087964(void *);                           /* extern; return value unused */
void fn_800879FC(void *);                           /* extern; return value unused */
void fn_800C70D0();                                 /* extern; return value unused */
void memset(s32, s32, s32);                         /* extern; return value unused */
int fn_800BCCB0(int arg0, int arg1, unsigned int arg2); /* extern */

void *fn_800876CC(void *arg0) {
    fn_800C70D0();
    (*(s32 *)((char *)(arg0) + (0xF8))) = 0;
    (*(s32 *)((char *)(arg0) + (0xFC))) = 0;
    (*(s32 *)((char *)(arg0) + (0x100))) = 0;
    (*(s32 *)((char *)(arg0) + (0x104))) = 0;
    fn_80087964(arg0);
    (*(s32 *)((char *)(arg0) + (0xFC))) = fn_800BCCB0(0xA01000, 0x1000, 0U);
    (*(s32 *)((char *)(arg0) + (0x100))) = (s32) ((*(s32 *)((char *)(arg0) + (0xFC))) + 0x800000);
    (*(s32 *)((char *)(arg0) + (0x104))) = (s32) ((*(s32 *)((char *)(arg0) + (0x100))) + 0x200000);
    memset(*(s32 *)((char *)(arg0) + (0x104)), 0xFF, 0x1000);
    fn_800879FC(arg0);
    return arg0;
}
