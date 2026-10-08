int fn_800967C8(void *arg0) {
    short index = *(short *)((char *)arg0 + 0x104);
    void *first = *(void **)((char *)arg0 + 0xE8);
    void **table = *(void ***)((char *)first + 0x2C);
    short limit = *(short *)((char *)*table + 0x70);
    if (index >= limit) {
        return 1;
    }
    if (!(*(int *)((char *)arg0 + 0xF4) & 2)) {
        *(short *)((char *)arg0 + 0x104) = index + 1;
    }
    return 0;
}
