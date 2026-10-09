typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800C991C(u8 *, void *);                     /* extern; return value unused */
void fn_8012B094(void *, s32, s32);                 /* extern; return value unused */
int fn_800BCCB0(int arg0, int arg1, unsigned int arg2); /* extern */
extern u8 lbl_80200884[];

void fn_800BFF08(void *arg0, u32 arg1, s32 arg2) {
    (*(s32 *)((char *)(arg0) + (0x54))) = arg2;
    (*(s32 *)((char *)(arg0) + (0x50))) = fn_800BCCB0((*(s32 *)((char *)(arg0) + (0x54))) * 4, 0, arg1);
    fn_8012B094((void *) ((char *) (char *)arg0 + 0x30), *(s32 *)((char *)(arg0) + (0x50)), *(s32 *)((char *)(arg0) + (0x54)));
    fn_800C991C(lbl_80200884, (void *) ((char *) (char *)arg0 + 0x18));
    (*(s32 *)((char *)(arg0) + (0x74))) = 0;
    (*(s32 *)((char *)(arg0) + (0x78))) = 0;
}
