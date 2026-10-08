struct OSContext;
typedef void (*OSExceptionHandler)(unsigned char, struct OSContext *);

extern OSExceptionHandler *OSExceptionTable_8022B53C;
OSExceptionHandler __OSSetExceptionHandler(unsigned char exception, OSExceptionHandler handler);
OSExceptionHandler __OSGetExceptionHandler(unsigned char exception);

#pragma peephole off
OSExceptionHandler __OSSetExceptionHandler(unsigned char exception, OSExceptionHandler handler) {
    OSExceptionHandler *entry = &OSExceptionTable_8022B53C[exception];
    OSExceptionHandler old = *entry;

    *entry = handler;
    return old;
}

OSExceptionHandler __OSGetExceptionHandler(unsigned char exception) {
    return OSExceptionTable_8022B53C[exception];
}
#pragma peephole reset
