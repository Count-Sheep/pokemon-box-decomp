typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 Si_801F10AC[];

s32 fn_80130950(void) {
    if ((s32) *(s32 *) Si_801F10AC != -1) {
        return 1;
    }
    return 0;
}
