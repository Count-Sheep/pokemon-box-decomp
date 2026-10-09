typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8015A588(s32, s32, s32, u8 *);               /* extern */
void memcpy(void *, s32, s32);                      /* extern; return value unused */
extern u8 fn_8015A160[];
extern u8 lbl_80226BC0[];

s32 fn_8015A190(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void *temp_r31_12;

    temp_r31_12 = (void *) ((char *) lbl_80226BC0 + (arg0 << 8));
    if ((u32) (*(u32 *)((char *)(temp_r31_12) + (0x1C))) != 0U) {
        return 2;
    }
    (*(s8 *)(temp_r31_12)) = 0x15;
    memcpy((void *) ((char *) (char *)temp_r31_12 + 1), arg1, 4);
    (*(s32 *)((char *)(temp_r31_12) + (0x18))) = arg1;
    (*(s32 *)((char *)(temp_r31_12) + (0x14))) = arg2;
    (*(u32 *)((char *)(temp_r31_12) + (0x1C))) = arg3;
    return fn_8015A588(arg0, 5, 1, fn_8015A160);
}
