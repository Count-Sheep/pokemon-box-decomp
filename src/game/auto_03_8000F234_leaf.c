typedef unsigned int u32;
typedef unsigned char u8;

void fn_8000F234(void *arg0) {
    *(u32 *)((char *)arg0 + 0xC0) = 0;
    *(u8 *)((char *)arg0 + 0xC4) = 0;
    *(u8 *)((char *)arg0 + 0xC5) = 0;
    *(u8 *)((char *)arg0 + 0xC6) = 0;
    *(u8 *)((char *)arg0 + 0xC7) = 0;
    *(u8 *)((char *)arg0 + 0xC8) = 0;
    *(u8 *)((char *)arg0 + 0xC9) = 0;
    *(u8 *)((char *)arg0 + 0xCA) = 0;
    *(u8 *)((char *)arg0 + 0xCB) = 0;
    *(u8 *)((char *)arg0 + 0xCC) = 0;
    *(u8 *)((char *)arg0 + 0xCD) = 0;
    *(u8 *)((char *)arg0 + 0xCE) = 0;
    *(u8 *)((char *)arg0 + 0xCF) = 0;
}
