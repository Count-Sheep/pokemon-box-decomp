typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void DCInvalidateRange(s32, s32);                   /* extern; return value unused */
void fn_8012937C(s32, s32);                         /* extern; return value unused */
void fn_8013D5C4(void *, s32, s32, s32, s32, s32, s32, u8 *); /* extern; return value unused */
extern u8 fn_800C1DE0[];

void fn_800C1D68(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x40))) == 1) {
        DCInvalidateRange(*(s32 *)((char *)(arg0) + (0x4C)), *(s32 *)((char *)(arg0) + (0x44)));
    } else {
        fn_8012937C(*(s32 *)((char *)(arg0) + (0x48)), *(s32 *)((char *)(arg0) + (0x44)));
    }
    fn_8013D5C4(arg0, 0, *(s32 *)((char *)(arg0) + (0x40)), 0, *(s32 *)((char *)(arg0) + (0x48)), *(s32 *)((char *)(arg0) + (0x4C)), *(s32 *)((char *)(arg0) + (0x44)), fn_800C1DE0);
}
