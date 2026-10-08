typedef int s32;
typedef unsigned int u32;

typedef struct MSL_FILE MSL_FILE;

void __begin_critical_region(s32 region);
void __end_critical_region(s32 region);
u32 __fwrite(const void* ptr, u32 size, u32 count, MSL_FILE* stream);

u32 fwrite(const void* ptr, u32 size, u32 count, MSL_FILE* stream)
{
    u32 result;

    __begin_critical_region(2);
    result = __fwrite(ptr, size, count, stream);
    __end_critical_region(2);
    return result;
}
