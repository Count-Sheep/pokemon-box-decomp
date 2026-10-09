typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8007DCA0(void *);                           /* extern; return value unused */
void fn_8007EE18(void *, s32);                      /* extern; return value unused */

void fn_8007E8E4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0_28;
    s32 temp_r0_55;
    s32 temp_r3_29;
    s32 temp_r3_56;

    fn_8007EE18(arg0, 0);
    fn_8007EE18(arg0, 1);
    (*(s8 *)((char *)(arg0) + (0x4C))) = 0;
    fn_8007DCA0((void *) ((char *) (char *)arg0 + 0x28));
    (*(s32 *)((char *)(arg0) + (8))) = (s32) ((*(s32 *)((char *)(arg0) + (8))) + arg1);
    (*(s32 *)((char *)(arg0) + (0xC))) = (s32) ((*(s32 *)((char *)(arg0) + (0xC))) + arg2);
    temp_r0_28 = *(s32 *)((char *)(arg0) + (8));
    temp_r3_29 = *(s32 *)((char *)(arg0) + (0x10));
    if (temp_r0_28 >= temp_r3_29) {
        if ((u8) (*(u8 *)((char *)(arg0) + (0x18))) != 0) {
            (*(s32 *)((char *)(arg0) + (8))) = 0;
        } else {
            (*(s32 *)((char *)(arg0) + (8))) = (s32) (temp_r3_29 - 1);
        }
    } else if (temp_r0_28 < 0) {
        if ((u8) (*(u8 *)((char *)(arg0) + (0x18))) != 0) {
            (*(s32 *)((char *)(arg0) + (8))) = (s32) (temp_r3_29 - 1);
        } else {
            (*(s32 *)((char *)(arg0) + (8))) = 0;
        }
    }
    temp_r0_55 = *(s32 *)((char *)(arg0) + (0xC));
    temp_r3_56 = *(s32 *)((char *)(arg0) + (0x14));
    if (temp_r0_55 >= temp_r3_56) {
        if ((u8) (*(u8 *)((char *)(arg0) + (0x19))) != 0) {
            (*(s32 *)((char *)(arg0) + (0xC))) = 0;
            return;
        }
        (*(s32 *)((char *)(arg0) + (0xC))) = (s32) (temp_r3_56 - 1);
        return;
    }
    if (temp_r0_55 < 0) {
        if ((u8) (*(u8 *)((char *)(arg0) + (0x19))) != 0) {
            (*(s32 *)((char *)(arg0) + (0xC))) = (s32) (temp_r3_56 - 1);
            return;
        }
        (*(s32 *)((char *)(arg0) + (0xC))) = 0;
    }
}
