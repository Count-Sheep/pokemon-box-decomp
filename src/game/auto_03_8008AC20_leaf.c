void *fn_8008AC20(char *arg0, unsigned short arg1) {
    void **table;
    unsigned short count, i;
    void *entry;

    count = *(unsigned short *)(arg0 + 0xE);
    table = *(void ***)(arg0 + 4);
    i = 0;
    goto check;
loop:
    entry = *(void **)((char *)table + ((i * 4) & 0x3FFFC));
    if (arg1 == *(unsigned short *)((char *)entry + 0x3C)) {
        return entry;
    }
    i++;
check:
    if (i < count) {
        goto loop;
    }
    return 0;
}
