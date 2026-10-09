typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80084D44();                                 /* extern; return value unused */
void fn_80084E48();                                 /* extern; return value unused */
void fn_8015396C();                                 /* extern; return value unused */
void fn_80154070(s32, s32, s32, s32);               /* extern; return value unused */
void fn_80154120(s32, s32, s32, s32);               /* extern; return value unused */
void fn_801546D8(s32, s32, s32, s32);               /* extern; return value unused */
void fn_80154A5C(s32, s32);                         /* extern; return value unused */
void fn_80084D40(void);                             /* extern */

void fn_80084C94(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        fn_80084D40();
        break;
    case 1:
        fn_80084D44();
        break;
    case 2:
        fn_80084E48();
        break;
    }
    fn_801546D8(0, 0, 0, 0);
    fn_80154070(0, 0, 0xF0, 0xA0);
    fn_80154120(0xF0, 0xA0, 5, 0);
    fn_80154A5C(*(s32 *)((char *)(arg0) + (0x1A4)), 1);
    fn_8015396C();
}
