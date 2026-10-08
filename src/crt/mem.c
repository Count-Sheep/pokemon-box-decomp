typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

#define cps ((u8*)src)
#define cpd ((u8*)dst)
#define lps ((u32*)src)
#define lpd ((u32*)dst)
#define deref_auto_inc(p) *++(p)

void __copy_longs_rev_unaligned(void* dst, const void* src, u32 n);
void __copy_longs_unaligned(void* dst, const void* src, u32 n);
void __copy_longs_rev_aligned(void* dst, const void* src, u32 n);
void __copy_longs_aligned(void* dst, const void* src, u32 n);

void* memmove(void* dst, const void* src, u32 n)
{
    u8* csrc;
    u8* cdst;
    s32 reverse = (u32)src < (u32)dst;

    if (n >= 32) {
        if (((u32)dst ^ (u32)src) & 3) {
            if (!reverse) {
                __copy_longs_unaligned(dst, src, n);
            } else {
                __copy_longs_rev_unaligned(dst, src, n);
            }
        } else {
            if (!reverse) {
                __copy_longs_aligned(dst, src, n);
            } else {
                __copy_longs_rev_aligned(dst, src, n);
            }
        }

        return dst;
    } else {
        if (!reverse) {
            csrc = ((u8*)src) - 1;
            cdst = ((u8*)dst) - 1;
            n++;

            while (--n > 0) {
                *++cdst = *++csrc;
            }
        } else {
            csrc = (u8*)src + n;
            cdst = (u8*)dst + n;
            n++;

            while (--n > 0) {
                *--cdst = *--csrc;
            }
        }
    }

    return dst;
}

void __copy_longs_rev_unaligned(void* dst, const void* src, u32 n)
{
    u32 i, v1, v2;
    u32 src_offset, left_shift, right_shift;

    cps = ((u8*)src) + n;
    cpd = ((u8*)dst) + n;

    i = ((u32)cpd) & 3;

    if (i) {
        n -= i;

        do
            *--cpd = *--cps;
        while (--i);
    }

    src_offset = ((u32)cps) & 3;

    left_shift = src_offset << 3;
    right_shift = 32 - left_shift;

    cps += 4 - src_offset;

    i = n >> 3;

    v1 = *--lps;

    do {
        v2 = *--lps;
        *--lpd = (v2 << left_shift) | (v1 >> right_shift);
        v1 = *--lps;
        *--lpd = (v1 << left_shift) | (v2 >> right_shift);
    } while (--i);

    if (n & 4) {
        v2 = *--lps;
        *--lpd = (v2 << left_shift) | (v1 >> right_shift);
    }

    n &= 3;

    if (n) {
        cps += src_offset;
        do
            *--cpd = *--cps;
        while (--n);
    }
}

void __copy_longs_unaligned(void* dst, const void* src, u32 n)
{
    u32 i, v1, v2;
    u32 src_offset, left_shift, right_shift;

    i = (-(u32)dst) & 3;

    cps = ((u8*)src) - 1;
    cpd = ((u8*)dst) - 1;

    if (i) {
        n -= i;

        do
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        while (--i);
    }

    src_offset = ((u32)(cps + 1)) & 3;

    left_shift = src_offset << 3;
    right_shift = 32 - left_shift;

    cps -= src_offset;

    lps = ((u32*)(cps + 1)) - 1;
    lpd = ((u32*)(cpd + 1)) - 1;

    i = n >> 3;

    v1 = deref_auto_inc(lps);

    do {
        v2 = deref_auto_inc(lps);
        deref_auto_inc(lpd) = (v1 << left_shift) | (v2 >> right_shift);
        v1 = deref_auto_inc(lps);
        deref_auto_inc(lpd) = (v2 << left_shift) | (v1 >> right_shift);
    } while (--i);

    if (n & 4) {
        v2 = deref_auto_inc(lps);
        deref_auto_inc(lpd) = (v1 << left_shift) | (v2 >> right_shift);
    }

    cps = ((u8*)(lps + 1)) - 1;
    cpd = ((u8*)(lpd + 1)) - 1;

    n &= 3;

    if (n) {
        cps -= 4 - src_offset;
        do
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        while (--n);
    }
}

void __copy_longs_rev_aligned(void* dst, const void* src, u32 n)
{
    u32 i;

    cpd = ((u8*)dst) + n;
    cps = ((u8*)src) + n;

    i = ((u32)cpd) & 3;

    if (i) {
        n -= i;

        do
            *--cpd = *--cps;
        while (--i);
    }

    i = n >> 5;

    if (i)
        do {
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
        } while (--i);

    i = (n & 31) >> 2;

    if (i)
        do
            *--lpd = *--lps;
        while (--i);

    n &= 3;

    if (n)
        do
            *--cpd = *--cps;
        while (--n);
}

void __copy_longs_aligned(void* dst, const void* src, u32 n)
{
    u32 i;

    i = (-(u32)dst) & 3;

    cps = ((u8*)src) - 1;
    cpd = ((u8*)dst) - 1;

    if (i) {
        n -= i;

        do
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        while (--i);
    }

    lps = ((u32*)(cps + 1)) - 1;
    lpd = ((u32*)(cpd + 1)) - 1;

    i = n >> 5;

    if (i)
        do {
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
        } while (--i);

    i = (n & 31) >> 2;

    if (i)
        do
            deref_auto_inc(lpd) = deref_auto_inc(lps);
        while (--i);

    cps = ((u8*)(lps + 1)) - 1;
    cpd = ((u8*)(lpd + 1)) - 1;

    n &= 3;

    if (n)
        do
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        while (--n);
}
