typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800395EC(void *arg0, unsigned int arg1);    /* extern */

void fn_8004BB84(void *arg0) {
    void *temp_r3_8;

    temp_r3_8 = *(void **)((char *)(arg0) + (0x54));
    if (temp_r3_8 != NULL) {
        (*(s32 *)((char *)(temp_r3_8) + (0xC))) = (s32) ((*(s32 *)((char *)(temp_r3_8) + (0xC))) | 2);
        fn_800395EC(temp_r3_8, *(u32 *)((char *)(arg0) + (0x5C)));
    }
}
