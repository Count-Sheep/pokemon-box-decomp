void fn_800BD228(void **arg0) {
    char *value = *(void **)((char *)*arg0 + 0x18);
    if (value != 0) {
        value -= 0xC;
    }
    *arg0 = value;
}
