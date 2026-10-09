typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
u32 fn_80148DB8();                                  /* extern */
void fn_80148DF0(s32);                              /* extern; return value unused */

void fn_801494BC(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        fn_80148DF0(*(s32 *)((char *)(arg0) + (0x18)));
        do {

        } while (fn_80148DB8() != 0U);
        fn_80148DF0(*(s32 *)((char *)(arg0) + (0x1C)));
        do {

        } while (fn_80148DB8() != 0U);
        fn_80148DF0(*(s32 *)((char *)(arg0) + (0x20)));
        do {

        } while (fn_80148DB8() != 0U);
    } else {
        fn_80148DF0(0);
        do {

        } while (fn_80148DB8() != 0U);
        fn_80148DF0(0);
        do {

        } while (fn_80148DB8() != 0U);
        fn_80148DF0(0);
        do {

        } while (fn_80148DB8() != 0U);
    }
    fn_80148DF0(*(s32 *)((char *)(arg1) + (0xC)));
    do {

    } while (fn_80148DB8() != 0U);
    fn_80148DF0(*(s32 *)((char *)(arg1) + (0x10)));
    do {

    } while (fn_80148DB8() != 0U);
    fn_80148DF0(*(s32 *)((char *)(arg1) + (0x14)));
    do {

    } while (fn_80148DB8() != 0U);
    if ((u32) (*(u32 *)(arg1)) == 0U) {
        fn_80148DF0((s32) (*(u16 *)((char *)(arg1) + (0x24))));
        do {

        } while (fn_80148DB8() != 0U);
        fn_80148DF0(0);
        do {

        } while (fn_80148DB8() != 0U);
        fn_80148DF0(0);
        do {

        } while (fn_80148DB8() != 0U);
        fn_80148DF0(0);
        do {

        } while (fn_80148DB8() != 0U);
        return;
    }
    fn_80148DF0((s32) (*(u16 *)((char *)(arg1) + (0x26))));
    do {

    } while (fn_80148DB8() != 0U);
    fn_80148DF0(*(s32 *)((char *)(arg1) + (0x18)));
    do {

    } while (fn_80148DB8() != 0U);
    fn_80148DF0(*(s32 *)((char *)(arg1) + (0x1C)));
    do {

    } while (fn_80148DB8() != 0U);
    fn_80148DF0(*(s32 *)((char *)(arg1) + (0x20)));
    do {

    } while (fn_80148DB8() != 0U);
}
