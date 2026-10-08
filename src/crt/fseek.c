typedef int s32;

typedef struct MSL_FILE MSL_FILE;

void __begin_critical_region(s32 region);
void __end_critical_region(s32 region);
s32 fn_8015E4CC(MSL_FILE* stream, s32 offset, s32 origin);

s32 fseek(MSL_FILE* stream, s32 offset, s32 origin)
{
    s32 result;

    __begin_critical_region(2);
    result = fn_8015E4CC(stream, offset, origin);
    __end_critical_region(2);
    return result;
}
