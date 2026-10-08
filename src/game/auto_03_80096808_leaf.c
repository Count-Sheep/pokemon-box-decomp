int fn_80096808(char *arg0) {
    int value;
    volatile int *flags = (volatile int *)(arg0 + 0xF4);

    if (*flags & 0x100) {
        return 1;
    }
    value = *(int *)(arg0 + 0x24);
    if (value == 0) {
        return 0;
    }
    if (value < 0) {
        *flags = *flags | 8;
        return (*(int *)(arg0 + 0xD0) + *(int *)(arg0 + 0xDC)) == 0;
    }
    if (*(unsigned int *)(arg0 + 0x100) >= (unsigned int)value) {
        *flags = *flags | 8;
        if (*flags & 0x40) {
            return 0;
        }
        return (*(int *)(arg0 + 0xD0) + *(int *)(arg0 + 0xDC)) == 0;
    }
    return 0;
}
