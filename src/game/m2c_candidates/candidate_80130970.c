typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 Packet_802088D0[];
extern u8 Si_801F10AC[];

s32 fn_80130970(s32 arg0) {
    s32 var_r5_9;

    var_r5_9 = 1;
    if (((s32) *((s32 *) ((char *) Packet_802088D0 + (arg0 << 5))) == -1) && ((s32) *(s32 *) Si_801F10AC != arg0)) {
        var_r5_9 = 0;
    }
    return var_r5_9;
}
