typedef signed char s8;
typedef signed int s32;

s32 OSEnableInterrupts(void);
s32 OSRestoreInterrupts(s32);
s32 fn_80133FC8(s32, s32);

s32 fn_800D61E0(void *arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r31;
    s32 *ptr;
    s8 *ptr2;

    if (arg1 == 0) {
        return 0;
    }
    temp_r30 = OSEnableInterrupts();
    temp_r31 = fn_80133FC8(arg1, (s32)((char *)arg0 + 0x834));
    OSRestoreInterrupts(temp_r30);
    if (temp_r31 == 0) {
        ptr2 = (s8 *)arg0 + 0x830;
        *ptr2 = 0;
        return 0;
    }
    temp_r30 = OSEnableInterrupts();
    ptr = (s32 *)arg0 + 0x20a;
    *ptr = *(s32 *)((char *)arg0 + 0x868);
    OSRestoreInterrupts(temp_r30);
    ptr = (s32 *)arg0 + 0x20b;
    *ptr = 0;
    ptr2 = (s8 *)arg0 + 0x830;
    *ptr2 = 1;
    return 1;
}
