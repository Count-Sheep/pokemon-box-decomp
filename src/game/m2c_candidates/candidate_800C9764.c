typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8012B094(s32, s32, s32);                    /* extern; return value unused */

void *fn_800C9764(void *arg0) {
    fn_8012B094((s32) ((char *) (char *)arg0 + 0x28), (s32) ((char *) (char *)arg0 + 0x48), 1);
    (*(s32 *)((char *)(arg0) + (0x14))) = 0;
    (*(s32 *)((char *)(arg0) + (0x1C))) = 0;
    (*(void **)((char *)(arg0) + (0x18))) = arg0;
    (*(s32 *)((char *)(arg0) + (0x20))) = 0;
    return arg0;
}
