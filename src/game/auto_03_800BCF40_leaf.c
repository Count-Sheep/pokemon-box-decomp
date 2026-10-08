extern unsigned int lbl_8022B2A0;
extern int fn_800BCF7C(unsigned int, int);

int fn_800BCF40(int arg0) {
    unsigned int value = lbl_8022B2A0;
    if (value != 0) {
        return fn_800BCF7C(value, arg0);
    }
    return 0;
}
