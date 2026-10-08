void fn_800BF0AC(void *arg0, int arg1, int arg2, int arg3,
                 signed char arg4, signed char arg5) {
    *(short *)arg0 = 0x484D;
    *(signed char *)((char *)arg0 + 2) = arg5;
    *(signed char *)((char *)arg0 + 3) = arg4;
    *(int *)((char *)arg0 + 4) = arg3;
    *(int *)((char *)arg0 + 8) = arg1;
    *(int *)((char *)arg0 + 0xC) = arg2;
}
