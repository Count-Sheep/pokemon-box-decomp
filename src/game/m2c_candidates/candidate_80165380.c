typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80003590(void *, s32, s32);                 /* extern; return value unused */

void TRKResetBuffer(void *arg0, s32 arg1) {
    (*(s32 *)((char *)(arg0) + (8))) = 0;
    (*(s32 *)((char *)(arg0) + (0xC))) = 0;
    if (arg1 == 0) {
        fn_80003590((void *) ((char *) (char *)arg0 + 0x10), 0, 0x880);
    }
}
