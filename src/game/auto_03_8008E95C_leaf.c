void fn_8008E95C(void *arg0) {
    void *dst = *(void **)arg0;
    void *src = *(void **)((char *)arg0 + 4);
    void **table = *(void ***)((char *)src + 0x1C);
    *(unsigned char *)((char *)dst + 0x111) =
        *(unsigned char *)((char *)*table + 0x20);
}
