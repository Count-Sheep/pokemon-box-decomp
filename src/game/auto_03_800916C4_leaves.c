typedef float f32;

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((char *)(expr) + (offset)))

extern f32 lbl_8022C6F0;

void fn_800916C4(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f2;
    f32 product;
    f32 intercept;
    void *temp_r3;
    void *temp_r5;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1FC);
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x20);
    temp_r3 = M2C_FIELD(temp_r5, void **, 0);
    if (temp_f2 < M2C_FIELD(temp_r3, f32 *, 0xC)) {
        product = temp_f2 * M2C_FIELD(temp_r5, f32 *, 0xC);
        intercept = M2C_FIELD(temp_r3, f32 *, 0x14);
        M2C_FIELD(arg1, f32 *, 0x60) =
            (f32)(M2C_FIELD(arg1, f32 *, 0x68) * (product + intercept));
        return;
    }
    temp_f0 = M2C_FIELD(temp_r3, f32 *, 0x10);
    if (temp_f2 > temp_f0) {
        M2C_FIELD(arg1, f32 *, 0x60) = (f32)(M2C_FIELD(arg1, f32 *, 0x68) *
            (lbl_8022C6F0 + (M2C_FIELD(temp_r5, f32 *, 0x14) * (temp_f2 - temp_f0))));
        return;
    }
    M2C_FIELD(arg1, f32 *, 0x60) = (f32)M2C_FIELD(arg1, f32 *, 0x68);
}

void fn_8009173C(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f2;
    f32 product;
    f32 intercept;
    void *temp_r3;
    void *temp_r5;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1FC);
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x20);
    temp_r3 = M2C_FIELD(temp_r5, void **, 0);
    if (temp_f2 < M2C_FIELD(temp_r3, f32 *, 0xC)) {
        product = temp_f2 * M2C_FIELD(temp_r5, f32 *, 0x10);
        intercept = M2C_FIELD(temp_r3, f32 *, 0x1C);
        M2C_FIELD(arg1, f32 *, 0x64) =
            (f32)(M2C_FIELD(arg1, f32 *, 0x68) * (product + intercept));
        return;
    }
    temp_f0 = M2C_FIELD(temp_r3, f32 *, 0x10);
    if (temp_f2 > temp_f0) {
        M2C_FIELD(arg1, f32 *, 0x64) = (f32)(M2C_FIELD(arg1, f32 *, 0x68) *
            (lbl_8022C6F0 + (M2C_FIELD(temp_r5, f32 *, 0x18) * (temp_f2 - temp_f0))));
        return;
    }
    M2C_FIELD(arg1, f32 *, 0x64) = (f32)M2C_FIELD(arg1, f32 *, 0x68);
}
