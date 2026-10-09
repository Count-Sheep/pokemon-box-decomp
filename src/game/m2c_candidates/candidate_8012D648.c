typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void *fn_8012D488(void *, s32);                     /* extern */

void fn_8012D648(void *arg0, s32 arg1) {
    void *var_r3_0;

    var_r3_0 = arg0;
loop_1:
    if (((s32) (*(s32 *)((char *)(var_r3_0) + (0x2CC))) <= 0) && ((s32) (*(s32 *)((char *)(var_r3_0) + (0x2D0))) > arg1)) {
        var_r3_0 = fn_8012D488(var_r3_0, arg1);
        if (var_r3_0 != NULL) {
            goto loop_1;
        }
    }
}
