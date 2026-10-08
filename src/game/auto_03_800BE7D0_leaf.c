void fn_800BE7D0(void *arg0, void *arg1) {
    void *next = *(void **)((char *)arg1 + 8);
    void *prev = *(void **)((char *)arg1 + 0xC);
    if (next == 0) {
        *(void **)((char *)arg0 + 0x78) = prev;
    } else {
        *(void **)((char *)next + 0xC) = prev;
    }
    if (prev == 0) {
        *(void **)((char *)arg0 + 0x7C) = next;
    } else {
        *(void **)((char *)prev + 8) = next;
    }
}
