typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 gDBCommTable[];

void fn_80169B10(void) {
    (*(s32 (**)(u8 *))((char *)(gDBCommTable) + (0xC)))(gDBCommTable);
}
