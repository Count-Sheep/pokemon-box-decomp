typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8007CB74(s32, u8, s32);                     /* extern; return value unused */
int fn_800BCCB0(int arg0, int arg1, unsigned int arg2); /* extern */

void *fn_8007CA7C(void *arg0) {
    (*(s32 *)(arg0)) = 0;
    (*(u8 *)((char *)(arg0) + (4))) = 0U;
    (*(s32 *)((char *)(arg0) + (8))) = 0x88888888;
    (*(s32 *)(arg0)) = fn_800BCCB0(0x840, 0x20, 0U);
    fn_8007CB74(*(s32 *)(arg0), *(u8 *)((char *)(arg0) + (4)), *(s32 *)((char *)(arg0) + (8)));
    return arg0;
}
