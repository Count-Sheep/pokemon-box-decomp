extern void *lbl_8022B1D4;
extern unsigned char lbl_8022B290;

int fn_800BBD10(void) {
    unsigned char active = 0;
    if (lbl_8022B290 != 0 && *(int *)((char *)lbl_8022B1D4 + 0x4001C) != 0) {
        active = 1;
    }
    if (active != 0) {
        return *(int *)((char *)lbl_8022B1D4 + 0x40000);
    }
    return 0;
}
