typedef unsigned char u8;
typedef unsigned int u32;

char *strcpy(char *dst, const char *src) {
    char *ret = dst;
    u8 *d = (u8 *)dst;
    const u8 *s = (const u8 *)src;
    u32 align;
    u32 dstAlign;
    u32 c;
    u32 word;
    u32 mask;

    dstAlign = (u32)d & 3;
    if (dstAlign != (align = (u32)s & 3)) {
        goto adjust;
    }
    if (align != 0) {
        c = *s;
        *d = c;
        if (c == 0) {
            return ret;
        }
        for (align = 3 - align; align != 0; align--) {
            c = *++s;
            *++d = c;
            if (c == 0) {
                return ret;
            }
        }
        d++;
        s++;
    }
    word = *(const u32 *)s;
    mask = 0x80808080;
    if (((word - 0x01010101) & mask) != 0) {
        goto adjust;
    }
    d -= 4;
    do {
        *(u32 *)(d += 4) = word;
        word = *(const u32 *)(s += 4);
    } while (((word - 0x01010101) & mask) == 0);
    d += 4;
adjust:
    c = *s;
    *d = c;
    if (c == 0) {
        return ret;
    }
    do {
        c = *++s;
        *++d = c;
    } while (c != 0);
    return ret;
}
