typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_80113104(void *arg0, void *arg1) {
    (*(u8 *)((char *)(arg0) + (4))) = (u8) (*(u8 *)(arg1));
    (*(u8 *)((char *)(arg0) + (5))) = (u8) (*(u8 *)((char *)(arg1) + (1)));
    (*(u16 *)((char *)(arg0) + (6))) = (u16) (*(u16 *)((char *)(arg1) + (2)));
    (*(f32 *)((char *)(arg0) + (8))) = (f32) (*(f32 *)((char *)(arg1) + (4)));
    (*(f32 *)((char *)(arg0) + (0xC))) = (f32) (*(f32 *)((char *)(arg1) + (8)));
    (*(f32 *)((char *)(arg0) + (0x10))) = (f32) (*(f32 *)((char *)(arg1) + (0xC)));
    (*(f32 *)((char *)(arg0) + (0x14))) = (f32) (*(f32 *)((char *)(arg1) + (0x10)));
    (*(u8 *)((char *)(arg0) + (0x18))) = (u8) (*(u8 *)((char *)(arg1) + (0x14)));
    (*(u8 *)((char *)(arg0) + (0x19))) = (u8) (*(u8 *)((char *)(arg1) + (0x15)));
    (*(u8 *)((char *)(arg0) + (0x1A))) = (u8) (*(u8 *)((char *)(arg1) + (0x16)));
    (*(u8 *)((char *)(arg0) + (0x1B))) = (u8) (*(u8 *)((char *)(arg1) + (0x17)));
    (*(u16 *)((char *)(arg0) + (0x1C))) = (u16) (*(u16 *)((char *)(arg1) + (0x18)));
    (*(u16 *)((char *)(arg0) + (0x1E))) = (u16) (*(u16 *)((char *)(arg1) + (0x1A)));
    (*(u16 *)((char *)(arg0) + (0x20))) = (u16) (*(u16 *)((char *)(arg1) + (0x1C)));
    (*(u16 *)((char *)(arg0) + (0x22))) = (u16) (*(u16 *)((char *)(arg1) + (0x1E)));
    (*(u16 *)((char *)(arg0) + (0x24))) = (u16) (*(u16 *)((char *)(arg1) + (0x20)));
    (*(u16 *)((char *)(arg0) + (0x26))) = (u16) (*(u16 *)((char *)(arg1) + (0x22)));
    (*(u16 *)((char *)(arg0) + (0x28))) = (u16) (*(u16 *)((char *)(arg1) + (0x24)));
    (*(u16 *)((char *)(arg0) + (0x2A))) = (u16) (*(u16 *)((char *)(arg1) + (0x26)));
    (*(u16 *)((char *)(arg0) + (0x2C))) = (u16) (*(u16 *)((char *)(arg1) + (0x28)));
    (*(u16 *)((char *)(arg0) + (0x2E))) = (u16) (*(u16 *)((char *)(arg1) + (0x2A)));
}
