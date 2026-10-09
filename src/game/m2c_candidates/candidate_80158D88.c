typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 fn_8015A588(s32, s32, s32, u8 *);               /* extern */
extern u8 fn_80158C74[];
extern u8 lbl_80226BC0[];

s32 fn_80158D88(s32 arg0, s32 arg1, u32 arg2) {
    void *temp_r7_10;

    temp_r7_10 = (void *) ((char *) lbl_80226BC0 + (arg0 << 8));
    if ((u32) (*(u32 *)((char *)(temp_r7_10) + (0x1C))) != 0U) {
        return 2;
    }
    (*(s8 *)(temp_r7_10)) = 0;
    (*(s32 *)((char *)(temp_r7_10) + (0x14))) = arg1;
    (*(u32 *)((char *)(temp_r7_10) + (0x1C))) = arg2;
    return fn_8015A588(arg0, 1, 3, fn_80158C74);
}
