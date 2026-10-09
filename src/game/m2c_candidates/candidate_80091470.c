typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800911EC(void *, void *, u8, s16, s32);     /* extern; return value unused */

void *fn_80091470(void *arg0, void *arg1, s32 arg2) {
    s32 var_r3_30;
    void *temp_r3_25;
    void *temp_r4_42;
    void *temp_r4_58;

    (*(void **)(arg0)) = arg1;
    if ((*(s32 *)((char *)((*(void **)(arg0))) + (8))) & 0x01000000) {
        (*(void **)((char *)(arg0) + (4))) = (void *) ((void *) ((char *) (char *)arg1 + 0x34));
    } else {
        (*(void **)((char *)(arg0) + (4))) = NULL;
    }
    temp_r3_25 = *(void **)(arg0);
    if ((*(u8 *)((char *)(temp_r3_25) + (0x1E))) & 1) {
        var_r3_30 = 0x34;
        if ((*(s32 *)((char *)(temp_r3_25) + (8))) & 0x01000000) {
            var_r3_30 = 0x5C;
        }
        (*(void **)((char *)(arg0) + (8))) = (void *) ((void *) ((char *) (char *)arg1 + var_r3_30));
    } else {
        (*(void **)((char *)(arg0) + (8))) = NULL;
    }
    temp_r4_42 = *(void **)(arg0);
    if ((*(u8 *)((char *)(temp_r4_42) + (0x21))) & 2) {
        fn_800911EC((void *) ((char *) (char *)arg0 + 0xC), (void *) ((char *) (char *)arg1 + (*(s16 *)((char *)(temp_r4_42) + (0xC)))), *(u8 *)((char *)(temp_r4_42) + (0x22)), *(s16 *)((char *)(temp_r4_42) + (0x24)), arg2);
    } else {
        (*(s32 *)((char *)(arg0) + (0xC))) = 0;
    }
    temp_r4_58 = *(void **)(arg0);
    if ((*(u8 *)((char *)(temp_r4_58) + (0x21))) & 8) {
        fn_800911EC((void *) ((char *) (char *)arg0 + 0x10), (void *) ((char *) (char *)arg1 + (*(s16 *)((char *)(temp_r4_58) + (0xE)))), *(u8 *)((char *)(temp_r4_58) + (0x23)), *(s16 *)((char *)(temp_r4_58) + (0x24)), arg2);
    } else {
        (*(s32 *)((char *)(arg0) + (0x10))) = 0;
    }
    return arg0;
}
