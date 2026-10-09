typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80054DD0(s32);                              /* extern; return value unused */
void fn_80058E5C(s32);                              /* extern; return value unused */
void fn_800602C0(void *);                           /* extern; return value unused */
void fn_80060AC8(void *);                           /* extern; return value unused */
void fn_80060B7C(void *);                           /* extern; return value unused */
void fn_80060CB8(void *);                           /* extern; return value unused */
void fn_800614D0(void *);                           /* extern; return value unused */

void fn_80060074(void *arg0) {
    fn_80054DD0(*(s32 *)((char *)(arg0) + (0xD0)));
    fn_80058E5C(*(s32 *)((char *)(arg0) + (0xC0)));
    fn_80058E5C(*(s32 *)((char *)(arg0) + (0xD4)));
    fn_800614D0((void *) ((char *) (char *)arg0 + 0x150));
    fn_800602C0(arg0);
    fn_80060AC8(arg0);
    fn_80060B7C(arg0);
    fn_80060CB8(arg0);
}
