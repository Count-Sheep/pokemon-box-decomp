extern int lbl_8022B19C;
extern signed char lbl_8022B1A0;
extern unsigned char lbl_8022B290;

int fn_800BC93C(int arg0) {
    if (lbl_8022B290 == 0) {
        return -2;
    }
    if (arg0 < 0) {
        return -3;
    }
    lbl_8022B19C = arg0;
    lbl_8022B1A0 = 1;
    return 0;
}
