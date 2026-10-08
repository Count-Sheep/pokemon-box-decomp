extern void fn_800BD6E0(int);
extern void fn_800C98A0(int, int);
extern void fn_800952A4(int *, int, void *);

int fn_8008AB74(int arg0, short arg1) {
    if (arg0 != 0) {
        fn_800C98A0(arg0, 0);
        if (arg1 > 0) {
            fn_800BD6E0(arg0);
        }
    }
    return arg0;
}

void *fn_8008ABC8(char *arg0, int arg1, int arg2) {
    int sp8;
    *(int *)(arg0 + 4) = 0;
    *(int *)(arg0 + 8) = 0;
    *(short *)(arg0 + 0xC) = 0;
    *(short *)(arg0 + 0xE) = 0;
    *(short *)(arg0 + 0x10) = 0;
    *(short *)(arg0 + 0x12) = 0;
    *(int *)arg0 = arg2;
    fn_800952A4(&sp8, arg1, arg0);
    return arg0;
}
