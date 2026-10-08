typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

typedef struct GXFifoObj {
    u8 data[32];
} GXFifoObj;

typedef struct GXFifoData {
    u8* base;
    u8* top;
    u32 size;
    u32 hiWatermark;
    u32 loWatermark;
    void* readPtr;
    void* writePtr;
    s32 count;
    u8 bindCpu;
    u8 bindGp;
} GXFifoData;

void fn_801520C0(GXFifoObj* fifo, u32 hi, u32 lo);
void GXInitFifoPtrs(GXFifoObj* fifo, void* readPtr, void* writePtr);

void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size)
{
    GXFifoData* data = (GXFifoData*)fifo;

    data->base = base;
    data->top = (u8*)base + size - 4;
    data->size = size;
    data->count = 0;
    fn_801520C0(fifo, size - 0x4000, (size >> 1) & ~0x1F);
    GXInitFifoPtrs(fifo, base, base);
}
