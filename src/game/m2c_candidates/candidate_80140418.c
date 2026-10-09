typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void OSDisableInterrupts();                         /* extern; return value unused */
void OSRestoreInterrupts();                         /* extern; return value unused */

void fn_80140418(void *arg0, void *arg1) {
    void *temp_r31_12;

    temp_r31_12 = (void *) ((char *) (char *)arg0 + 0x1DE);
    OSDisableInterrupts();
    (*(u16 *)((char *)(arg0) + (0x1DE))) = (u16) (*(u16 *)(arg1));
    (*(u16 *)((char *)(temp_r31_12) + (2))) = (u16) (*(u16 *)((char *)(arg1) + (2)));
    (*(u16 *)((char *)(temp_r31_12) + (4))) = (u16) (*(u16 *)((char *)(arg1) + (4)));
    (*(u16 *)((char *)(temp_r31_12) + (6))) = (u16) (*(u16 *)((char *)(arg1) + (6)));
    (*(u16 *)((char *)(temp_r31_12) + (8))) = (u16) (*(u16 *)((char *)(arg1) + (8)));
    (*(u16 *)((char *)(temp_r31_12) + (0xA))) = (u16) (*(u16 *)((char *)(arg1) + (0xA)));
    (*(u16 *)((char *)(temp_r31_12) + (0xC))) = (u16) (*(u16 *)((char *)(arg1) + (0xC)));
    (*(s32 *)((char *)(arg0) + (0x1C))) = (s32) ((*(s32 *)((char *)(arg0) + (0x1C))) & 0xFFF7FFFF);
    (*(s32 *)((char *)(arg0) + (0x1C))) = (s32) ((*(s32 *)((char *)(arg0) + (0x1C))) | 0x40000);
    OSRestoreInterrupts();
}
