typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80137D7C();                                 /* extern; return value unused */
void fn_80138244(s32 *);                            /* extern; return value unused */
void fn_80138A6C();                                 /* extern; return value unused */

void fn_800D2680(void *arg0, s32 *arg1) {
    s32 *temp_r5_9;

    temp_r5_9 = *(s32 **)((char *)(arg0) + (4));
    if ((temp_r5_9 != NULL) && ((s32) *arg1 != (s32) *temp_r5_9)) {
        (*(u8 *)((char *)(arg0) + (0x2C))) = 1U;
        (*(s32 *)((char *)(arg0) + (0x30))) = 4;
    }
    (*(s32 **)((char *)(arg0) + (4))) = arg1;
    fn_80138244(*(s32 **)((char *)(arg0) + (4)));
    fn_80138A6C();
    if ((u8) (*(u8 *)((char *)(arg0) + (0x2C))) != 0) {
        fn_80137D7C();
        fn_80137D7C();
    }
}
