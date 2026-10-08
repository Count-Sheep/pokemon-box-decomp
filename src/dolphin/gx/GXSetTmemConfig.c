typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;

typedef union PPCWGPipe {
    u8 u8;
    u16 u16;
    u32 u32;
    u64 u64;
    s8 s8;
    s16 s16;
    s32 s32;
    s64 s64;
    f32 f32;
    f64 f64;
} PPCWGPipe;

#define GXWGFifo (*(volatile PPCWGPipe*)0xCC008000)
#define GX_WRITE_U8(value) GXWGFifo.u8 = (u8)(value)
#define GX_WRITE_U32(value) GXWGFifo.u32 = (u32)(value)
#define GX_WRITE_RAS_REG(value) do { GX_WRITE_U8(0x61); GX_WRITE_U32(value); } while (0)

void __GXSetTmemConfig(u32 config)
{
    switch (config) {
    case 2:
        GX_WRITE_RAS_REG(0x8c0d8000);
        GX_WRITE_RAS_REG(0x900dc000);
        GX_WRITE_RAS_REG(0x8d0d8800);
        GX_WRITE_RAS_REG(0x910dc800);
        GX_WRITE_RAS_REG(0x8e0d9000);
        GX_WRITE_RAS_REG(0x920dd000);
        GX_WRITE_RAS_REG(0x8f0d9800);
        GX_WRITE_RAS_REG(0x930dd800);
        GX_WRITE_RAS_REG(0xac0da000);
        GX_WRITE_RAS_REG(0xb00dc400);
        GX_WRITE_RAS_REG(0xad0da800);
        GX_WRITE_RAS_REG(0xb10dcc00);
        GX_WRITE_RAS_REG(0xae0db000);
        GX_WRITE_RAS_REG(0xb20dd400);
        GX_WRITE_RAS_REG(0xaf0db800);
        GX_WRITE_RAS_REG(0xb30ddc00);
        break;
    case 1:
        GX_WRITE_RAS_REG(0x8c0d8000);
        GX_WRITE_RAS_REG(0x900dc000);
        GX_WRITE_RAS_REG(0x8d0d8800);
        GX_WRITE_RAS_REG(0x910dc800);
        GX_WRITE_RAS_REG(0x8e0d9000);
        GX_WRITE_RAS_REG(0x920dd000);
        GX_WRITE_RAS_REG(0x8f0d9800);
        GX_WRITE_RAS_REG(0x930dd800);
        GX_WRITE_RAS_REG(0xac0da000);
        GX_WRITE_RAS_REG(0xb00de000);
        GX_WRITE_RAS_REG(0xad0da800);
        GX_WRITE_RAS_REG(0xb10de800);
        GX_WRITE_RAS_REG(0xae0db000);
        GX_WRITE_RAS_REG(0xb20df000);
        GX_WRITE_RAS_REG(0xaf0db800);
        GX_WRITE_RAS_REG(0xb30df800);
        break;
    case 0:
    default:
        GX_WRITE_RAS_REG(0x8c0d8000);
        GX_WRITE_RAS_REG(0x900dc000);
        GX_WRITE_RAS_REG(0x8d0d8400);
        GX_WRITE_RAS_REG(0x910dc400);
        GX_WRITE_RAS_REG(0x8e0d8800);
        GX_WRITE_RAS_REG(0x920dc800);
        GX_WRITE_RAS_REG(0x8f0d8c00);
        GX_WRITE_RAS_REG(0x930dcc00);
        GX_WRITE_RAS_REG(0xac0d9000);
        GX_WRITE_RAS_REG(0xb00dd000);
        GX_WRITE_RAS_REG(0xad0d9400);
        GX_WRITE_RAS_REG(0xb10dd400);
        GX_WRITE_RAS_REG(0xae0d9800);
        GX_WRITE_RAS_REG(0xb20dd800);
        GX_WRITE_RAS_REG(0xaf0d9c00);
        GX_WRITE_RAS_REG(0xb30ddc00);
        break;
    }
}
