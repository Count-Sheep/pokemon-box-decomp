typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8012B094(void *, void *, s32);              /* extern; return value unused */
void fn_8012B708(void *);                           /* extern; return value unused */

void fn_800C7290(void *arg0) {
    (*(void **)((char *)(arg0) + (0x98))) = arg0;
    fn_8012B708((void *) ((char *) (char *)arg0 + 0x1C));
    fn_8012B708((void *) ((char *) (char *)arg0 + 0x34));
    fn_8012B094((void *) ((char *) (char *)arg0 + 0xC0), (void *) ((char *) (char *)arg0 + 0xE0), 1);
    fn_8012B094((void *) ((char *) (char *)arg0 + 0x9C), (void *) ((char *) (char *)arg0 + 0xBC), 1);
    (*(s32 *)((char *)(arg0) + (0xF4))) = 0;
    (*(s32 *)((char *)(arg0) + (0x50))) = 0;
    (*(s32 *)((char *)(arg0) + (0x58))) = 0;
}
