typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_800554D4(void *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < (s32) (*(u16 *)(arg0)))) {
        return *((s32 *) ((*(s32 *)((char *)(arg0) + (4))) + (arg1 * 4)));
    }
    return 0;
}
