typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void GXLoadTexMtxImm(void *, s32, u8);              /* extern; return value unused */

void fn_800D8510(u8 *arg0, s32 arg1) {
    GXLoadTexMtxImm((void *) ((char *) arg0 + 0x24), (arg1 * 3) + 0x1E, *arg0);
}
