typedef unsigned short u16;

typedef struct OSContext {
    char padding[0x1A0];
    u16 mode;
    u16 state;
} OSContext;

#define NULL ((void *)0)
#define OS_FPUCONTEXT (*(OSContext * volatile *)0x800000D8)

#pragma peephole off
void OSClearContext(OSContext *context) {
    context->mode = 0;
    context->state = 0;

    if (context == OS_FPUCONTEXT) {
        OS_FPUCONTEXT = NULL;
    }
}
#pragma peephole reset
