typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

typedef struct GXTexRegion {
    u32 data[4];
} GXTexRegion;

typedef s32 GXTexCacheSize;

typedef struct GXTexRegionData {
    u32 image1;
    u32 image2;
    u16 sizeEven;
    u16 sizeOdd;
    u8 is32bMipmap;
    u8 isCached;
} GXTexRegionData;

#define GX_TEXCACHE_32K 0
#define GX_TEXCACHE_128K 1
#define GX_TEXCACHE_512K 2
#define GX_TEXCACHE_NONE 3

#define SET_REG_FIELD(reg, size, shift, value) \
    ((reg) = (u32)__rlwimi((u32)(reg), (value), (shift), \
                           32 - (shift) - (size), 31 - (shift)))

void GXInitTexCacheRegion(GXTexRegion* region, u8 is32bMipmap, u32 tmemEven,
                          GXTexCacheSize sizeEven, u32 tmemOdd,
                          GXTexCacheSize sizeOdd)
{
    u32 widthExp2;
    GXTexRegionData* data = (GXTexRegionData*)region;

    switch (sizeEven) {
    case GX_TEXCACHE_32K:
        widthExp2 = 3;
        break;
    case GX_TEXCACHE_128K:
        widthExp2 = 4;
        break;
    case GX_TEXCACHE_512K:
        widthExp2 = 5;
        break;
    }

    data->image1 = 0;
    SET_REG_FIELD(data->image1, 15, 0, tmemEven >> 5);
    SET_REG_FIELD(data->image1, 3, 15, widthExp2);
    SET_REG_FIELD(data->image1, 3, 18, widthExp2);
    SET_REG_FIELD(data->image1, 1, 21, 0);

    switch (sizeOdd) {
    case GX_TEXCACHE_32K:
        widthExp2 = 3;
        break;
    case GX_TEXCACHE_128K:
        widthExp2 = 4;
        break;
    case GX_TEXCACHE_512K:
        widthExp2 = 5;
        break;
    case GX_TEXCACHE_NONE:
        widthExp2 = 0;
        break;
    }

    data->image2 = 0;
    SET_REG_FIELD(data->image2, 15, 0, tmemOdd >> 5);
    SET_REG_FIELD(data->image2, 3, 15, widthExp2);
    SET_REG_FIELD(data->image2, 3, 18, widthExp2);
    data->is32bMipmap = is32bMipmap;
    data->isCached = 1;
}
