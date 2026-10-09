typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void fn_8008E7C0(void *arg0) {
    u32 temp_r0_10;
    u32 var_r4_7;
    void *temp_r5_5;
    void *temp_r6_6;

    temp_r5_5 = *(void **)(arg0);
    temp_r6_6 = *(void **)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x1C));
    var_r4_7 = *(u32 *)((char *)(temp_r5_5) + (0x100));
    temp_r0_10 = (*(u8 *)((char *)((*(void **)(temp_r6_6))) + (0x1F))) - 1;
    if (temp_r0_10 < var_r4_7) {
        var_r4_7 = temp_r0_10;
    }
    (*(u8 *)((char *)(temp_r5_5) + (0x111))) = (u8) *((u8 *) ((*(s32 *)((char *)(temp_r6_6) + (8))) + (u8) var_r4_7));
}
