typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_800184CC(s32);                              /* extern; return value unused */
void fn_80036C48(void *, s32);                      /* extern; return value unused */
void fn_80036DD8(void *);                           /* extern; return value unused */
void fn_8004E748(void *);                           /* extern; return value unused */
void fn_80057C9C(void *, s32, s32, s32, s32, s32);  /* extern; return value unused */
void fn_80057D84(void *, s32);                      /* extern; return value unused */

void fn_8005AC14(void *arg0) {
    s32 temp_r0_16;
    s32 temp_r3_10;
    s32 temp_r4_20;
    void *temp_r3_15;

    temp_r3_10 = *(s32 *)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1C));
    if (temp_r3_10 & 0x100) {
        temp_r3_15 = *(void **)((char *)((*(void **)((char *)(arg0) + (0x68)))) + (0x16C));
        temp_r0_16 = *(s32 *)((char *)((*(void **)((char *)(arg0) + (0x50)))) + (0xC));
        temp_r4_20 = ((*(u16 *)((char *)(temp_r3_15) + (8))) * 0x28) + 0x34;
        switch (temp_r0_16) {                       /* irregular */
        case 0:
            if (*((s32 *) ((char *) (char *)temp_r3_15 + temp_r4_20)) & 0x800) {
                fn_80057D84(temp_r3_15, 0x800);
            } else {
                fn_80057C9C(temp_r3_15, 0x800, 0, 0, 0, 0);
            }
            break;
        case 1:
            if (*((s32 *) ((char *) (char *)temp_r3_15 + temp_r4_20)) & 0x1000) {
                fn_80057D84(temp_r3_15, 0x1000);
            } else {
                fn_80057C9C(temp_r3_15, 0x1000, 0, 0, 0, 0);
            }
            break;
        case 2:
            if (*((s32 *) ((char *) (char *)temp_r3_15 + temp_r4_20)) & 0x2000) {
                fn_80057D84(temp_r3_15, 0x2000);
            } else {
                fn_80057C9C(temp_r3_15, 0x2000, 0, 0, 0, 0);
            }
            break;
        }
        fn_8004E748(*(void **)((char *)(arg0) + (0x68)));
        fn_80036C48((void *) ((char *) (char *)arg0 + 0xC), 0);
        return;
    }
    if (temp_r3_10 & 0x200) {
        fn_800184CC(0x1BB);
        fn_80036C48((void *) ((char *) (char *)arg0 + 0xC), 0);
        return;
    }
    fn_80036DD8((void *) ((char *) (char *)arg0 + 0xC));
}
