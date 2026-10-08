void fn_8008DFA4(void *arg0) {
    void *base = *(void **)arg0;
    void *src = *(void **)((char *)arg0 + 4);
    void **table = *(void ***)((char *)src + 0x1C);
    short value = *(short *)((char *)*table + 0x24);
    *(short *)((char *)arg0 + 0x214) =
        *(unsigned int *)((char *)base + 0x100) % (value + 1);
}
