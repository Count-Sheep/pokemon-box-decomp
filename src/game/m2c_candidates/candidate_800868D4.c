typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void memset(s32, s32, s32);                         /* extern; return value unused */
int fn_800BCCB0(int arg0, int arg1, unsigned int arg2); /* extern */

void fn_800868D4(void *arg0) {
    (*(s32 *)((char *)(arg0) + (4))) = fn_800BCCB0(0x20000, 0x20, 0U);
    (*(s32 *)((char *)(arg0) + (0x1C))) = fn_800BCCB0(0x1000, 0x20, 0U);
    (*(s32 *)((char *)(arg0) + (8))) = fn_800BCCB0(0xE620, 0x20, 0U);
    memset(*(s32 *)((char *)(arg0) + (4)), 0, 0x20000);
    memset(*(s32 *)((char *)(arg0) + (0x1C)), 0, 0x1000);
    memset(*(s32 *)((char *)(arg0) + (8)), 0, 0xE620);
    (*(s32 *)((char *)(arg0) + (0xC))) = (s32) (*(s32 *)((char *)(arg0) + (8)));
    (*(s32 *)((char *)(arg0) + (0x10))) = (s32) ((*(s32 *)((char *)(arg0) + (0xC))) + 0x890);
    (*(s32 *)((char *)(arg0) + (0x14))) = (s32) ((*(s32 *)((char *)(arg0) + (0x10))) + 0x3AC0);
    (*(s32 *)((char *)(arg0) + (0x18))) = (s32) ((*(s32 *)((char *)(arg0) + (0x14))) + 0x83D0);
}
