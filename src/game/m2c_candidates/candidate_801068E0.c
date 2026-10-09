typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
extern u8 lbl_801855E8[];

void fn_801068E0(void *arg0) {
    (*(u8 *)(arg0)) = (u8) (*(u8 *)((char *)(lbl_801855E8) + (0)));
    (*(u8 *)((char *)(arg0) + (1))) = (u8) (*(u8 *)((char *)(lbl_801855E8) + (1)));
    (*(u8 *)((char *)(arg0) + (2))) = (u8) (*(u8 *)((char *)(lbl_801855E8) + (2)));
    (*(s16 *)((char *)(arg0) + (4))) = (s16) (*(u8 *)((char *)(arg0) + (2)));
}
