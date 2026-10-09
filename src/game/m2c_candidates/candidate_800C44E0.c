typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800BCD3C(u32, s32);                         /* extern; return value unused */
void fn_800C37F0(void *, s32);                      /* extern; return value unused */
void fn_800C9C5C(u8 *, void *);                     /* extern; return value unused */
void fn_800BD6E0(int arg0);                         /* extern */
extern u8 lbl_801EB7B0[];
extern u8 lbl_8020094C[];

void *fn_800C44E0(void *arg0, s16 arg1) {
    u32 temp_r3_21;

    if (arg0 != NULL) {
        (*(u8 **)(arg0)) = lbl_801EB7B0;
        if ((u8) (*(u8 *)((char *)(arg0) + (0x30))) == 1) {
            if ((u8) (*(u8 *)((char *)(arg0) + (0x6C))) != 0) {
                temp_r3_21 = *(u32 *)((char *)(arg0) + (0x64));
                if (temp_r3_21 != 0U) {
                    fn_800BCD3C(temp_r3_21, *(s32 *)((char *)(arg0) + (0x38)));
                }
            }
            fn_800C9C5C(lbl_8020094C, (void *) ((char *) (char *)arg0 + 0x18));
            (*(u8 *)((char *)(arg0) + (0x30))) = 0U;
        }
        fn_800C37F0(arg0, 0);
        if (arg1 > 0) {
            fn_800BD6E0((s32) arg0);
        }
    }
    return arg0;
}
