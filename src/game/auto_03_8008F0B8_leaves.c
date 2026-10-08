void fn_8008F0B8(void *unused, volatile float *src, float *dst) {
    float a, b, c;
    a = src[9];
    b = src[10];
    dst[0] = a;
    c = src[11];
    dst[1] = b;
    dst[2] = c;
}

void fn_8008F0D4(void *unused, volatile float *src, float *dst) {
    float a, b, c;
    a = src[3];
    b = src[4];
    dst[0] = a;
    c = src[5];
    dst[1] = b;
    dst[2] = c;
}

void fn_8008F0F0(void *unused, volatile float *src, float *dst) {
    float a, b, c;
    a = src[3];
    b = src[4];
    dst[0] = a;
    c = src[5];
    dst[1] = b;
    dst[2] = c;
    dst[0] = -dst[0];
    dst[1] = -dst[1];
    dst[2] = -dst[2];
}

void fn_8008F130(volatile float *src, void *unused, float *dst) {
    float a, b, c;
    a = src[0x48];
    b = src[0x49];
    dst[0] = a;
    c = src[0x4A];
    dst[1] = b;
    dst[2] = c;
}
