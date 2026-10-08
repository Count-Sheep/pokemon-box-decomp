void fn_8008DF7C(void *arg0, void *arg1) {
    int input = *(short *)((char *)arg1 + 0x80);
    short value = *(short *)((char *)**(void ***)((char *)*(void **)((char *)arg0 + 4) + 0x1C) + 0x24);
    if (input < value) {
        value = input;
    }
    *(short *)((char *)arg0 + 0x214) = value;
}
