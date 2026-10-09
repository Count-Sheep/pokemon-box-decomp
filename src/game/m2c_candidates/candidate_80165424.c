typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_80227438[];

void *TRKGetBuffer(s32 arg0) {
    void *var_r0_5;

    var_r0_5 = NULL;
    if ((arg0 >= 0) && (arg0 < 3)) {
        var_r0_5 = (void *) ((char *) lbl_80227438 + (arg0 * 0x890));
    }
    return var_r0_5;
}
