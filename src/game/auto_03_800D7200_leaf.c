typedef unsigned char u8;
typedef int s32;
typedef float f32;

typedef f32 Mtx[3][4];

void GXLoadPosMtxImm(char *, s32);
void GXLoadTexMtxImm(void *, s32, s32);
void fn_801323A4(void *);
void fn_80152734(s32, s32);
void fn_80152B80(void);
void fn_80152BB8(s32, s32, s32, s32, s32);
void fn_801531CC(s32, s32, s32, s32, s32, s32);
void fn_8015344C(s32);
void fn_80153E90(s32, s32);
void fn_80153F58(s32);
void fn_80154ED0(s32);
void fn_80154F0C(s32, s32, s32, s32, s32, s32, s32);
void fn_801563C0(s32);
void fn_801563E4(s32);
void fn_80156484(s32, s32);
void fn_80156954(s32, s32, s32, s32, s32);
void fn_80156A24(s32, s32, s32, s32);
void fn_80156BC0(s32);
void fn_80156FDC(s32, s32, s32);
void fn_80157010(s32);
void fn_80157470(s32);

void fn_800D7200(void *arg0) {
    Mtx matrix;
    s32 i;

    fn_801563C0(0);
    i = 0;
    do {
        fn_801563E4(i);
        i += 1;
    } while (i < 0x10);
    fn_80157010(0);
    fn_80156954(4, 0, 1, 4, 0);
    fn_80156FDC(0, 3, 0);
    fn_80156484(0, 4);
    fn_80154ED0(1);
    fn_80156BC0(1);
    fn_8015344C(0);
    fn_80156A24(0, 0xFF, 0xFF, 4);
    fn_80153F58(0);
    GXLoadPosMtxImm((char *)arg0 + 0x80, 0);
    fn_801323A4(&matrix);
    GXLoadTexMtxImm(&matrix, 0x3C, 0);
    fn_80154F0C(4, 0, 0, 1, 0, 0, 2);
    fn_80154F0C(5, 0, 0, 0, 0, 0, 2);
    fn_80157470(0);
    fn_801531CC(0, 1, 4, 0x3C, 0, 0x7D);
    fn_80152BB8(0, 9, 1, 3, 0);
    fn_80152BB8(0, 0xB, 1, 5, 0);
    fn_80152BB8(0, 0xD, 1, 2, 0xF);
    fn_80152BB8(0, 0xE, 1, 2, 0xF);
    fn_80153E90(*(u8 *)((char *)arg0 + 0x34), 0);
    fn_80152B80();
    fn_80152734(9, 1);
    fn_80152734(0xB, 1);
    fn_80152734(0xD, 0);
}
