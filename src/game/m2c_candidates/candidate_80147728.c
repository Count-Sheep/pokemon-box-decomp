typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_801F6C10[];

void fn_80147728(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x34))) = (s32) ((*(s32 *)((char *)((*(void **)((char *)(arg0) + (0x14)))) + (4))) + *((s32 *) ((char *) lbl_801F6C10 + ((*(u8 *)((char *)(arg0) + (0xE))) * 4))));
}
