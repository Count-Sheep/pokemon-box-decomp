typedef signed char s8;
typedef int s32;

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((char *)(expr) + (offset)))

void fn_80048920(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) & 1) {
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 8), s8 *, 0xB0) = 1;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 8), s8 *, 0xB0) = 0;
        return;
    }
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 8), s8 *, 0xB0) = 0;
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 8), s8 *, 0xB0) = 1;
}
