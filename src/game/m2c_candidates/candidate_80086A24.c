typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
u8 fn_800870B8(void *);                             /* extern */
u8 fn_8008719C(void *);                             /* extern */
void fn_80087364(void *);                           /* extern; return value unused */
void fn_800873E4(void *);                           /* extern; return value unused */
void fn_800874A8(void *);                           /* extern; return value unused */
void fn_8008756C(void *);                           /* extern; return value unused */
u8 fn_800875E8();                                   /* extern */

s32 fn_80086A24(void *arg0) {
    if (fn_800875E8() != 0) {
        return 0;
    }
    if (fn_8008719C(arg0) == 0) {
        return 1;
    }
    fn_80087364(arg0);
    fn_800873E4(arg0);
    fn_800874A8(arg0);
    if (fn_800870B8(arg0) != 0) {
        (*(s8 *)((char *)(arg0) + (0x20))) = 1;
        fn_8008756C(arg0);
    } else {
        (*(s8 *)((char *)(arg0) + (0x20))) = 0;
    }
    return 0;
}
