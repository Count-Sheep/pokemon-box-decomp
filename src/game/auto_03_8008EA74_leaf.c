extern void fn_80132404(int, int, void *);
extern void GXLoadTexMtxImm(void *, int, int);

void fn_8008EA74(int arg0, int arg1) {
    float sp8[12];
    fn_80132404(arg0 + 0x1B4, arg1, sp8);
    GXLoadTexMtxImm(sp8, 0x1E, 0);
}
