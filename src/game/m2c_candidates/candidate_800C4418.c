typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800C3748(void *, s32, s32);                 /* extern; return value unused */
u8 fn_800C46F0(void *, s32, s32, s32);              /* extern */
void fn_800C99D4(u8 *, void *, void *, s32);        /* extern; return value unused */
extern u8 lbl_801EB7B0[];
extern u8 lbl_8020094C[];

void *fn_800C4418(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r6_39;
    void *temp_r5_38;

    fn_800C3748(arg0, arg1, 1);
    (*(u8 **)(arg0)) = lbl_801EB7B0;
    (*(s8 *)((char *)(arg0) + (0x30))) = 0;
    if (fn_800C46F0(arg0, arg1, arg2, arg3) == 0) {
        return arg0;
    }
    (*(s32 *)((char *)(arg0) + (0x2C))) = 0x52415243;
    temp_r5_38 = *(void **)((char *)(arg0) + (0x48));
    temp_r6_39 = *(s32 *)((char *)(arg0) + (0x54));
    (*(s32 *)((char *)(arg0) + (0x28))) = (s32) (temp_r6_39 + (*(s32 *)((char *)(temp_r5_38) + (4))));
    fn_800C99D4(lbl_8020094C, (void *) ((char *) (char *)arg0 + 0x18), temp_r5_38, temp_r6_39);
    (*(s8 *)((char *)(arg0) + (0x30))) = 1;
    return arg0;
}
