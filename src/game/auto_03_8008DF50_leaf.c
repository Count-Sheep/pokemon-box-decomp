void fn_8008DF50(void *arg0) {
    void *base = *(void **)arg0;
    unsigned int value = *(unsigned int *)((char *)base + 0x100);
    void *src = *(void **)((char *)arg0 + 4);
    void **table = *(void ***)((char *)src + 0x1C);
    short limit = *(short *)((char *)*table + 0x24);
    if (value < (unsigned int)limit) {
        limit = (short)value;
    }
    *(short *)((char *)arg0 + 0x214) = limit;
}
