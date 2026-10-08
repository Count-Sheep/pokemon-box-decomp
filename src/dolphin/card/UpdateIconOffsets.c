typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef s32 BOOL;

#define FALSE 0
#define TRUE 1

typedef struct CARDDirEntry {
    u8 gameName[4];
    u8 company[2];
    u8 _06;
    u8 bannerFormat;
    char fileName[32];
    u32 time;
    u32 iconAddr;
    u16 iconFormat;
    u16 animationSpeed;
    u8 permission;
    u8 copyTimes;
    u16 startBlock;
    u16 length;
    u8 _3A[2];
    u32 commentAddr;
} CARDDirEntry;

typedef struct CARDStat {
    char fileName[32];
    u32 length;
    u32 time;
    u8 gameName[4];
    u8 company[2];
    u8 bannerFormat;
    u8 _2F;
    u32 iconAddr;
    u16 iconFormat;
    u16 iconSpeed;
    u32 commentAddr;
    u32 offsetBanner;
    u32 offsetBannerTlut;
    u32 offsetIcon[8];
    u32 offsetIconTlut;
    u32 offsetData;
} CARDStat;

void UpdateIconOffsets(CARDDirEntry* entry, CARDStat* stat)
{
    u32 offset;
    BOOL iconTlut;
    s32 i;

    if ((offset = entry->iconAddr) == 0xFFFFFFFF) {
        stat->bannerFormat = 0;
        stat->iconFormat = 0;
        stat->iconSpeed = 0;
        offset = 0;
    }

    iconTlut = FALSE;
    switch (entry->bannerFormat & 3) {
    case 1:
        stat->offsetBanner = offset;
        offset += 96 * 32;
        stat->offsetBannerTlut = offset;
        offset += 2 * 256;
        break;
    case 2:
        stat->offsetBanner = offset;
        offset += 2 * 96 * 32;
        stat->offsetBannerTlut = 0xFFFFFFFF;
        break;
    default:
        stat->offsetBanner = 0xFFFFFFFF;
        stat->offsetBannerTlut = 0xFFFFFFFF;
        break;
    }

    for (i = 0; i < 8; i++) {
        switch ((entry->iconFormat >> (2 * i)) & 3) {
        case 1:
            stat->offsetIcon[i] = offset;
            offset += 32 * 32;
            iconTlut = TRUE;
            break;
        case 2:
            stat->offsetIcon[i] = offset;
            offset += 2 * 32 * 32;
            break;
        default:
            stat->offsetIcon[i] = 0xFFFFFFFF;
            break;
        }
    }

    if (iconTlut) {
        stat->offsetIconTlut = offset;
        offset += 2 * 256;
    } else {
        stat->offsetIconTlut = 0xFFFFFFFF;
    }
    stat->offsetData = offset;
}
