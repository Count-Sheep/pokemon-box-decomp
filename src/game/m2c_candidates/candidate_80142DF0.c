typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void OSDisableInterrupts();                         /* extern; return value unused */
void OSRestoreInterrupts();                         /* extern; return value unused */
void fn_80142B28(void *);                           /* extern; return value unused */

void fn_80142DF0(void *arg0) {
    OSDisableInterrupts();
    (*(s32 *)((char *)(arg0) + (0x30))) = 0;
    (*(s32 *)((char *)(arg0) + (0x34))) = 0;
    (*(s32 *)((char *)(arg0) + (0x38))) = 0;
    OSRestoreInterrupts();
    fn_80142B28(arg0);
}
