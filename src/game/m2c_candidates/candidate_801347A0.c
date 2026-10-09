typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
void DVDReset();                                    /* extern; return value unused */
void __DVDStoreErrorCode(s32);                      /* extern; return value unused */
void cbForStateError(s32);                          /* extern; return value unused */

void stateTimeout(void) {
    __DVDStoreErrorCode(0x01234568);
    DVDReset();
    cbForStateError(0);
}
