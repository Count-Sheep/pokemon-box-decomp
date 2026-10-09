typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8006F6AC(void *arg0) {
    (*(u8 *)((char *)(arg0) + (0x57))) = (u8) ((*(u8 *)((char *)(arg0) + (0x57))) & 2);
    (*(s32 *)((char *)(arg0) + (0x44))) = 0;
    (*(s32 *)((char *)(arg0) + (0x3C))) = 0;
    (*(s16 *)((char *)(arg0) + (4))) = -1;
    (*(s16 *)((char *)(arg0) + (6))) = 0;
    (*(s16 *)((char *)(arg0) + (8))) = 0;
    (*(s8 *)((char *)(arg0) + (0xA))) = 0;
}
