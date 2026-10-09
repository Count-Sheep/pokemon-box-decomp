typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BD704(int arg0);                         /* extern */

void fn_800CBD6C(void *arg0) {
    fn_800BD704(*(s32 *)((char *)(arg0) + (0x50)));
}
