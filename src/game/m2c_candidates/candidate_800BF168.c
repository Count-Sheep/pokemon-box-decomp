typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BE804(void *, void *);                   /* extern; return value unused */

s32 fn_800BF168(void *arg0, void *arg1) {
    void *temp_r3_9;
    void *temp_r5_8;

    temp_r5_8 = *(void **)((char *)(arg0) + (8));
    temp_r3_9 = *(void **)((char *)(arg0) + (0xC));
    if (temp_r5_8 == NULL) {
        (*(void **)((char *)(arg1) + (0x80))) = temp_r3_9;
    } else {
        (*(void **)((char *)(temp_r5_8) + (0xC))) = temp_r3_9;
    }
    if (temp_r3_9 == NULL) {
        (*(void **)((char *)(arg1) + (0x84))) = temp_r5_8;
    } else {
        (*(void **)((char *)(temp_r3_9) + (8))) = temp_r5_8;
    }
    fn_800BE804(arg1, arg0);
    return 0;
}
