typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_801336A8(u8 *, u8 *);                       /* extern; return value unused */
extern u8 fn_801353EC[];
extern u8 lbl_80208BC0[];

void fn_801353BC(void) {
    fn_801336A8(lbl_80208BC0, fn_801353EC);
}
