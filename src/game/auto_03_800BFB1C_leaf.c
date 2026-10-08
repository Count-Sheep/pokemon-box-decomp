extern int fn_800BCE84(void);

void fn_800BFB1C(char *arg0, char *arg1, int arg2) {
    int base;
    *(int *)(arg1 + 0x14) = arg2;
    *(int *)arg1 = *(int *)(arg0 + 0x38) - fn_800BCE84();
    base = *(int *)(arg0 + 0x70);
    base += *(int *)(arg0 + 0x74) * 3;
    *(int *)(arg1 + 4) = base;
}
