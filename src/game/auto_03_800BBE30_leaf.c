extern void *lbl_8022B1D4;
extern unsigned char lbl_8022B290;

int fn_800BBE30(void) {
    int value;
    if (lbl_8022B290 == 0) {
        return -2;
    }
    value = *(int *)((char *)lbl_8022B1D4 + 0x40020);
    if (value == 0) {
        return -3;
    }
    if (value != 0) {
        *(int *)((char *)lbl_8022B1D4 + 0x40020) = 0;
    }
    return 0;
}
