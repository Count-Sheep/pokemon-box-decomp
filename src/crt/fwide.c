typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

#define NULL ((void*)0)

typedef struct MSL_FILE {
    u8 pad0[4];
    union {
        u16 all;
        struct {
            u8 high;
            union {
                u8 raw;
                struct {
                    u8 top : 2;
                    u8 orient : 2;
                    u8 bottom : 4;
                } bits;
            } low;
        } byte;
    } flags;
} MSL_FILE;

s32 fwide(MSL_FILE* file, s32 mode)
{
    u8 orient;

    if (file == NULL || (((u32)file->flags.all >> 6) & 7) == 0) {
        return 0;
    }

    orient = file->flags.byte.low.bits.orient;
    switch (orient) {
    case 0:
        if (mode > 0) {
            file->flags.byte.low.bits.orient = 2;
        } else if (mode < 0) {
            file->flags.byte.low.bits.orient = 1;
        }
        return mode;
    case 2:
        return 1;
    case 1:
        return -1;
    default:
        return (s32)file;
    }
}
