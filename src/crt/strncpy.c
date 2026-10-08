typedef unsigned char u8;
typedef unsigned int u32;

char *strncpy(char *dst, const char *src, u32 n) {
    const u8 *s = (const u8 *)src - 1;
    u8 *d = (u8 *)dst - 1;
    u32 c;

    n++;
    while (--n != 0) {
        c = *++s;
        *++d = c;
        if (c == 0) {
            while (--n != 0) {
                *++d = 0;
            }
            return dst;
        }
    }
    return dst;
}
