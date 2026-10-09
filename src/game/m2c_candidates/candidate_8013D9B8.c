typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_80208E60[];

void fn_8013D9B8(void *arg0) {
    (*(void **)(arg0)) = (void *) *(void **) lbl_80208E60;
    *(void **) lbl_80208E60 = arg0;
    (*(s32 *)((char *)(arg0) + (0xC))) = 0;
}
