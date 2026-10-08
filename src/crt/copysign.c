typedef unsigned int u32;
typedef double f64;

typedef union DoubleShape {
    f64 value;
    struct {
        u32 hi;
        u32 lo;
    } parts;
} DoubleShape;

f64 copysign(f64 x, f64 y) {
    DoubleShape uy;
    DoubleShape ux;

    ux.value = x;
    uy.value = y;
    ux.parts.hi = (ux.parts.hi & 0x7FFFFFFF) | (uy.parts.hi & 0x80000000);
    return ux.value;
}
