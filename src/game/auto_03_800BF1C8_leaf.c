typedef struct {
    char data[16];
} Block;

void *fn_800BF1C8(Block *p) {
    if (p != 0 && *(unsigned short *)--p == 0x484D) {
        return p;
    }
    return 0;
}
