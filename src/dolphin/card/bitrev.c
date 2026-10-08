typedef unsigned int u32;

u32 bitrev(u32 data)
{
    u32 work;
    u32 i;
    u32 k = 0;
    u32 j = 1;

    work = 0;
    for (i = 0; i < 32; i++) {
        if (i > 15) {
            if (i == 31) {
                work |= (((data & (1u << 31)) >> 31) & 1);
            } else {
                work |= ((data & (1u << i)) >> j);
                j += 2;
            }
        } else {
            work |= ((data & (1u << i)) << (31 - i - k));
            k++;
        }
    }

    return work;
}
