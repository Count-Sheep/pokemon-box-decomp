void fn_8008AC60(char *arg0, int arg1) {
    int *table = *(int **)(arg0 + 4);
    table[*(unsigned short *)(arg0 + 0xE)] = arg1;
    *(unsigned short *)(arg0 + 0xE) = *(unsigned short *)(arg0 + 0xE) + 1;
}

void fn_8008AC80(char *arg0, int arg1) {
    int *table = *(int **)(arg0 + 8);
    table[*(unsigned short *)(arg0 + 0x12)] = arg1;
    *(unsigned short *)(arg0 + 0x12) = *(unsigned short *)(arg0 + 0x12) + 1;
}
