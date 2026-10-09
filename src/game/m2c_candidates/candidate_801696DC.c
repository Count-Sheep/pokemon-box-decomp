typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8016736C(u8 *);                              /* extern */
extern u8 gTRKState[];
extern u8 lbl_80229388[];

s32 TRKInitializeTarget(void) {
    (*(s32 *)((char *)(gTRKState) + (0x98))) = 1;
    (*(s32 *)((char *)(gTRKState) + (0x8C))) = fn_8016736C(gTRKState);
    *(s32 *) lbl_80229388 = 0xE0000000;
    return 0;
}
