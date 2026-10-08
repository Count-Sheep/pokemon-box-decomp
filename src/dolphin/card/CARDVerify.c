typedef int s32;

#define NULL ((void*)0)

typedef struct CARDControl CARDControl;

s32 fn_8014CAB0(CARDControl* card);
s32 VerifyDir(CARDControl* card, s32* checkCode);
s32 VerifyFAT(CARDControl* card, s32* checkCode);

s32 __CARDVerify(CARDControl* card)
{
    s32 result;
    s32 dirResult;

    result = fn_8014CAB0(card);
    if (result < 0) {
        return result;
    }
    dirResult = VerifyDir(card, NULL);
    switch (dirResult + VerifyFAT(card, NULL)) {
    case 0:
        return 0;
    case 1:
        return -6;
    default:
        return -6;
    }
}
