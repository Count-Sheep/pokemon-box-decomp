typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80058504(void *);                           /* extern; return value unused */
s32 fn_800BD5D8(s32);                               /* extern */

void fn_800584C4(void *arg0, s16 arg1) {
    (*(s16 *)(arg0)) = arg1;
    (*(s32 *)((char *)(arg0) + (4))) = fn_800BD5D8((arg1 * 4) & 0x3FFFC);
    fn_80058504(arg0);
}
