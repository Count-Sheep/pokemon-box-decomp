unsigned int fn_800BD1F4(void *arg0) {
    unsigned int value = *(unsigned int *)((char *)arg0 + 0x18);
    return value ? value - 0xC : value;
}

int fn_800BD208(int *arg0, int arg1) {
    return *arg0 != arg1;
}
