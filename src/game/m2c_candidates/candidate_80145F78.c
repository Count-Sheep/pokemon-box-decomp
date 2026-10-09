typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80145F78(void *arg0, void *arg1) {
    *(*(u8 **)((char *)(arg0) + (0xD34))) = *(u8 *)(arg1);
    (*(u8 **)((char *)(arg0) + (0xD34))) = (u8 *) ((*(u8 **)((char *)(arg0) + (0xD34))) + 1);
    *(*(u8 **)((char *)(arg0) + (0xD34))) = *(u8 *)((char *)(arg1) + (1));
    (*(u8 **)((char *)(arg0) + (0xD34))) = (u8 *) ((*(u8 **)((char *)(arg0) + (0xD34))) + 1);
    *(*(u8 **)((char *)(arg0) + (0xD34))) = *(u8 *)((char *)(arg1) + (2));
    (*(u8 **)((char *)(arg0) + (0xD34))) = (u8 *) ((*(u8 **)((char *)(arg0) + (0xD34))) + 1);
    (*(s32 *)((char *)(arg0) + (0xD38))) = (s32) ((*(s32 *)((char *)(arg0) + (0xD38))) + 1);
}
