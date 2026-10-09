typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800CB400(s32, s32, void *);                 /* extern; return value unused */
void fn_801531CC(s32, s32, s32, s32, s32, s32);     /* extern; return value unused */

void fn_80091DFC(void *arg0) {
    s32 var_r3_10;
    void **temp_r31_12;
    void *temp_r5_30;
    void *temp_r5_55;

    var_r3_10 = 1;
    temp_r31_12 = *(void ***)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x28));
    if ((*(s32 *)((char *)(*temp_r31_12) + (8))) & 1) {
        fn_801531CC(1, 1, 4, 0x3C, 0, 0x7D);
        temp_r5_30 = *(void **)((char *)(arg0) + (8));
        fn_800CB400(*((s32 *) ((*(s32 *)((char *)(temp_r5_30) + (8))) + (*((u16 *) ((*(s32 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x38))) + (((*(u8 *)((char *)(*temp_r31_12) + (0x25))) * 2) & 0x1FE))) * 4))) + 4, 2, temp_r5_30);
        var_r3_10 = 2;
    }
    if ((*(s32 *)((char *)(*temp_r31_12) + (8))) & 0x100) {
        fn_801531CC(var_r3_10, 1, 4, 0x3C, 0, 0x7D);
        temp_r5_55 = *(void **)((char *)(arg0) + (8));
        fn_800CB400(*((s32 *) ((*(s32 *)((char *)(temp_r5_55) + (8))) + (*((u16 *) ((*(s32 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x38))) + (((*(u8 *)((char *)(*temp_r31_12) + (0x26))) * 2) & 0x1FE))) * 4))) + 4, 3, temp_r5_55);
    }
}
