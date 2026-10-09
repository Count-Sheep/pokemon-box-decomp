typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8012D92C(s32, u8 *, void *, s32, s32, s32, s32); /* extern; return value unused */
int fn_800BCCB0(int arg0, int arg1, unsigned int arg2); /* extern */
extern u8 fn_800C0008[];

void fn_800BFF78(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r7_27;

    (*(u32 *)((char *)(arg0) + (0x28))) = arg1;
    (*(s32 *)((char *)(arg0) + (0x5C))) = (s32) (arg2 & 0xFFFFFFE0);
    (*(s32 *)((char *)(arg0) + (0x58))) = fn_800BCCB0(*(s32 *)((char *)(arg0) + (0x5C)), 0x20, *(u32 *)((char *)(arg0) + (0x28)));
    (*(s32 *)((char *)(arg0) + (0x2C))) = fn_800BCCB0(0x318, 0x20, *(u32 *)((char *)(arg0) + (0x28)));
    temp_r7_27 = *(s32 *)((char *)(arg0) + (0x5C));
    fn_8012D92C(*(s32 *)((char *)(arg0) + (0x2C)), fn_800C0008, arg0, (*(s32 *)((char *)(arg0) + (0x58))) + temp_r7_27, temp_r7_27, arg3, 1);
}
