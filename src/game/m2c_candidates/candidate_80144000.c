typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80142F34(void *);                           /* extern; return value unused */
extern u8 lbl_80222540[];

void fn_80144000(void *arg0, s32 arg1) {
    s32 var_r4_0;
    void *temp_r31_13;

    var_r4_0 = arg1;
    temp_r31_13 = (void *) ((char *) lbl_80222540 + ((*(s32 *)((char *)(arg0) + (0x18))) * 0x60));
    if (var_r4_0 < 0) {
        var_r4_0 = 0;
    } else if (var_r4_0 > 0x7F) {
        var_r4_0 = 0x7F;
    }
    (*(s32 *)((char *)(temp_r31_13) + (0x14))) = var_r4_0;
    fn_80142F34(temp_r31_13);
    (*(s32 *)((char *)(temp_r31_13) + (4))) = (s32) ((*(s32 *)((char *)(temp_r31_13) + (4))) | 0x40000000);
}
