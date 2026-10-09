typedef signed char s8; typedef unsigned char u8;
typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
#define NULL ((void *)0)
s32 OSDisableInterrupts();                          /* extern */
void OSRestoreInterrupts(s32, void *, void *);      /* extern; return value unused */
extern u8 WaitingQueue_80208C38[];

s32 __DVDPushWaitingQueue(s32 arg0, void *arg1) {
    s32 temp_r3_11;
    void *temp_r4_16;
    void *temp_r5_15;

    temp_r3_11 = OSDisableInterrupts();
    temp_r5_15 = (void *) ((char *) WaitingQueue_80208C38 + (arg0 * 8));
    temp_r4_16 = *(void **)((char *)(temp_r5_15) + (4));
    (*(void **)(temp_r4_16)) = arg1;
    (*(void **)((char *)(arg1) + (4))) = (void *) (*(void **)((char *)(temp_r5_15) + (4)));
    (*(void **)(arg1)) = temp_r5_15;
    (*(void **)((char *)(temp_r5_15) + (4))) = arg1;
    OSRestoreInterrupts(temp_r3_11, temp_r4_16, temp_r5_15);
    return 1;
}
