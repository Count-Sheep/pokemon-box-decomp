typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CAE54(void *, s32, s32, u8);             /* extern; return value unused */
extern u8 lbl_801E55EC[];

void *fn_800951D8(void *arg0, s32 arg1) {
    u8 temp_r6_16;

    (*(u8 **)(arg0)) = lbl_801E55EC;
    temp_r6_16 = (*(u8 *)((char *)(arg0) + (0x3F))) & 2;
    (*(u8 *)((char *)(arg0) + (0x3F))) = temp_r6_16;
    (*(s32 *)((char *)(arg0) + (0x2C))) = 0;
    (*(s32 *)((char *)(arg0) + (0x24))) = 0;
    (*(s32 *)((char *)(arg0) + (0x44))) = arg1;
    fn_800CAE54((void *) ((char *) (char *)arg0 + 4), (*(s32 *)((char *)(arg0) + (0x44))) + 0x20, 0, temp_r6_16);
    return arg0;
}
