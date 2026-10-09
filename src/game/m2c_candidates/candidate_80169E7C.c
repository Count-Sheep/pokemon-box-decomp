typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void ReserveEXI2Port();                             /* extern; return value unused */
void TRKSwapAndGo();                                /* extern; return value unused */
void TRKTargetSetStopped(s32);                      /* extern; return value unused */
void UnreserveEXI2Port();                           /* extern; return value unused */

s32 TRKTargetContinue(void) {
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}
