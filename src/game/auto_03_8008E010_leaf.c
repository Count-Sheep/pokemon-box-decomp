void fn_8008E010(void *arg0) {
    void *base = *(void **)arg0;
    void *src = *(void **)((char *)arg0 + 4);
    void **table = *(void ***)((char *)src + 0x1C);
    short limit = *(short *)((char *)*table + 0x24);
    unsigned int value = *(unsigned int *)((char *)base + 0x100);
    int remainder = value % limit;
    *(short *)((char *)arg0 + 0x214) = (short)(remainder +
        (((value / (unsigned int)limit) & 1) * (limit - remainder * 2)));
}
