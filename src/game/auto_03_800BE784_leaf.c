void fn_800BE784(char *arg0, char *arg1, char *arg2, char *arg3) {
    if (arg2 == 0) {
        *(void **)(arg0 + 0x78) = arg1;
        *(void **)(arg1 + 8) = 0;
    } else {
        *(void **)(arg2 + 0xC) = arg1;
        *(void **)(arg1 + 8) = arg2;
    }
    if (arg3 == 0) {
        *(void **)(arg0 + 0x7C) = arg1;
        *(void **)(arg1 + 0xC) = 0;
    } else {
        *(void **)(arg3 + 8) = arg1;
        *(void **)(arg1 + 0xC) = arg3;
    }
    *(short *)arg1 = 0;
}
