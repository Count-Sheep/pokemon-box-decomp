void fn_80095FD0(char *arg0, int arg1, int arg2) {
    int *table = *(int **)(arg0 + 0x1C);
    table[(unsigned char)arg2] = arg1;
}
