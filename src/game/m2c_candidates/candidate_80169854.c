typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 gTRKCPUState[];
extern u8 lbl_80229388[];

u32 fn_80169854(u32 arg0) {
    u32 temp_r4_6;

    temp_r4_6 = *(u32 *) lbl_80229388;
    if (((arg0 < temp_r4_6) || (arg0 >= (u32) (temp_r4_6 + 0x4000)) || !((*(s32 *)((char *)(gTRKCPUState) + (0x238))) & 3)) && ((arg0 < 0x7E000000U) || (arg0 > 0x80000000U))) {
        return (arg0 & 0x3FFFFFFF) | 0x80000000;
    }
    return arg0;
}
