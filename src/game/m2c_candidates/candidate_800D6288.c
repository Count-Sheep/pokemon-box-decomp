typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void DVDClose(void *);                              /* extern; return value unused */
s32 OSEnableInterrupts();                           /* extern */
void OSRestoreInterrupts(s32);                      /* extern; return value unused */

void fn_800D6288(void *arg0) {
    s32 temp_r31_16;

    if ((u8) (*(u8 *)((char *)(arg0) + (0x830))) != 0) {
        temp_r31_16 = OSEnableInterrupts();
        DVDClose((void *) ((char *) (char *)arg0 + 0x834));
        OSRestoreInterrupts(temp_r31_16);
        (*(u8 *)((char *)(arg0) + (0x830))) = 0U;
    }
}
