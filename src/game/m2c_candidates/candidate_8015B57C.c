typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 fragmentinfo_80226FC0[];

void __unregister_fragment(s32 arg0) {
    void *temp_r3_12;

    if ((arg0 >= 0) && (arg0 < 1)) {
        temp_r3_12 = (void *) ((char *) fragmentinfo_80226FC0 + (arg0 * 0xC));
        (*(s32 *)(temp_r3_12)) = 0;
        (*(s32 *)((char *)(temp_r3_12) + (4))) = 0;
        (*(s32 *)((char *)(temp_r3_12) + (8))) = 0;
    }
}
