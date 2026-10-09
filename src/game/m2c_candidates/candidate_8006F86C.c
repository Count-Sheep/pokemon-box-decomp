typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_8017BDA0[];

f32 fn_8006F86C(void *arg0) {
    return *((f32 *) ((char *) lbl_8017BDA0 + ((*(u8 *)((char *)(arg0) + (0xA))) * 4)));
}
