typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 OSDisableInterrupts();                          /* extern */
void OSRestoreInterrupts(s32);                      /* extern; return value unused */
void SelectThread(s32);                             /* extern; return value unused */

void fn_8012D8F0(void) {
    s32 temp_r31_9;

    temp_r31_9 = OSDisableInterrupts();
    SelectThread(1);
    OSRestoreInterrupts(temp_r31_9);
}
