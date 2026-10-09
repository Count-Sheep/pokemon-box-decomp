typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_80222540[];

s32 fn_80143F88(void *arg0) {
    return *(s32 *)((char *)(((void *) ((char *) lbl_80222540 + ((*(s32 *)((char *)(arg0) + (0x18))) * 0x60)))) + (8));
}
