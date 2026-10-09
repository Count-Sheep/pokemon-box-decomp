typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80058E5C(void *);                           /* extern; return value unused */
void fn_80059168(void *, void *);                   /* extern; return value unused */

void fn_8005C228(void *arg0) {
    s32 temp_r0_11;

    fn_80058E5C(*(void **)((char *)(arg0) + (0xC0)));
    temp_r0_11 = *(s32 *)((char *)(arg0) + (0xD4));
    switch (temp_r0_11) {                           /* irregular */
    case 0:
        fn_80059168(*(void **)((char *)(arg0) + (0xC0)), (void *) ((char *) (char *)arg0 + 0xEC));
        break;
    case 1:
        fn_80059168(*(void **)((char *)(arg0) + (0xC0)), (void *) ((char *) (char *)arg0 + 0xFC));
        break;
    }
    if ((s32) (*(s32 *)((char *)(arg0) + (0xD0))) == 0x100) {
        (*(s8 *)((char *)((*(void **)((char *)((*(void **)((char *)(arg0) + (0xC0)))) + (0xC)))) + (0xB0))) = 1;
        return;
    }
    (*(s8 *)((char *)((*(void **)((char *)((*(void **)((char *)(arg0) + (0xC0)))) + (0xC)))) + (0xB0))) = 0;
}
