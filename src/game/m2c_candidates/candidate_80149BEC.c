typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern void temp_r0_14(s32 , s32 );

s32 fn_8012F300(s32);                               /* extern */
extern u8 lbl_80226240[];

void fn_80149BEC(s32 arg0) {
    s32 (*temp_r0_14)(s32, s32);
    s32 var_r4_24;
    void *temp_r3_13;

    temp_r3_13 = (void *) ((char *) lbl_80226240 + (arg0 * 0x110));
    temp_r0_14 = *(s32 (**)(s32, s32))((char *)(temp_r3_13) + (0xDC));
    if (temp_r0_14 != NULL) {
        (*(s32 (**)(s32, s32))((char *)(temp_r3_13) + (0xDC))) = NULL;
        if (fn_8012F300(arg0) != 0) {
            var_r4_24 = 1;
        } else {
            var_r4_24 = -3;
        }
        temp_r0_14(arg0, var_r4_24);
    }
}
