extern unsigned int lbl_8022B29C;
extern int fn_800BCD10(unsigned int, int, int);

int fn_800BCCB0(int arg0, int arg1, unsigned int arg2) {
    if (arg2 != 0) {
        return fn_800BCD10(arg2, arg0, arg1);
    }
    if (lbl_8022B29C != 0) {
        return fn_800BCD10(lbl_8022B29C, arg0, arg1);
    }
    return 0;
}
