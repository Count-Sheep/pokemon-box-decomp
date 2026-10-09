typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80054DD0(s32);                              /* extern; return value unused */
void fn_80058E5C(s32);                              /* extern; return value unused */
void fn_8005DE8C(void *);                           /* extern; return value unused */
void fn_8005E3C8(void *);                           /* extern; return value unused */
void fn_8005E4D4(void *);                           /* extern; return value unused */

void fn_8005DE34(void *arg0) {
    fn_80054DD0(*(s32 *)((char *)(arg0) + (0xD0)));
    fn_80058E5C(*(s32 *)((char *)(arg0) + (0xC0)));
    fn_80058E5C(*(s32 *)((char *)(arg0) + (0xD4)));
    fn_8005DE8C(arg0);
    fn_8005E3C8(arg0);
    fn_8005E4D4(arg0);
}
