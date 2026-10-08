typedef int s32;
typedef unsigned int u32;
typedef double f64;

typedef union DoubleShape {
    f64 value;
    struct {
        u32 hi;
        u32 lo;
    } parts;
} DoubleShape;

f64 modf(f64 x, f64* integral)
{
    DoubleShape shape;
    DoubleShape* intpart;
    s32 hi;
    u32 lo;
    s32 j0;
    s32 i;
    u32 ui;

    shape.value = x;
    intpart = (DoubleShape*)integral;
    hi = shape.parts.hi;
    lo = shape.parts.lo;
    j0 = ((hi >> 20) & 0x7ff) - 0x3ff;

    if (j0 < 20) {
        if (j0 < 0) {
            intpart->parts.hi = hi & 0x80000000;
            intpart->parts.lo = 0;
            return x;
        }
        i = 0x000fffff >> j0;
        if (((hi & i) | lo) == 0) {
            shape.parts.hi = hi & 0x80000000;
            shape.parts.lo = 0;
            *integral = x;
            return shape.value;
        }
        intpart->parts.hi = hi & ~i;
        intpart->parts.lo = 0;
        return x - *integral;
    }

    if (j0 > 51) {
        shape.parts.hi = hi & 0x80000000;
        shape.parts.lo = 0;
        *integral = x;
        return shape.value;
    }

    ui = 0xffffffffU >> (j0 - 20);
    if ((lo & ui) == 0) {
        shape.parts.hi = hi & 0x80000000;
        shape.parts.lo = 0;
        *integral = x;
        return shape.value;
    }

    intpart->parts.hi = hi;
    intpart->parts.lo = lo & ~ui;
    return x - *integral;
}
