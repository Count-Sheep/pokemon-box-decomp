typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void OSDisableInterrupts();                         /* extern; return value unused */
void OSRestoreInterrupts();                         /* extern; return value unused */

s32 DVDGetCommandBlockStatus(void *arg0) {
    s32 temp_r0_10;
    s32 var_r31_13;

    OSDisableInterrupts();
    temp_r0_10 = *(s32 *)((char *)(arg0) + (0xC));
    if (temp_r0_10 == 3) {
        var_r31_13 = 1;
    } else {
        var_r31_13 = temp_r0_10;
    }
    OSRestoreInterrupts();
    return var_r31_13;
}
