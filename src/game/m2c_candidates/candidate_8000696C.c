typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8000696C(void *arg0, s32 arg1) {
    if ((s32) (arg1 >> 0x10) != (s32) (*(u16 *)((char *)(arg0) + (0x1C)))) {
        return 0;
    }
    return (*(s32 *)(arg0)) + ((*(u16 *)((char *)(arg0) + (0x1A))) * (u16) arg1);
}
