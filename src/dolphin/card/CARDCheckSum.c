typedef short s16;
typedef unsigned short u16;
typedef int s32;

void __CARDCheckSum(void* ptr, s32 length, u16* checksum, u16* checksumInv)
{
    u16* p;
    s32 i;

    length /= sizeof(u16);
    *checksum = *checksumInv = 0;
    for (i = 0, p = ptr; i < length; i++, p++) {
        *checksum += *p;
        *checksumInv += ~*p;
    }

    if (*checksum == 0xFFFF)
        *checksum = 0;

    if (*checksumInv == 0xFFFF)
        *checksumInv = 0;
}
