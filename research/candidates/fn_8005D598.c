extern void fn_800184CC(int);
extern int fn_80059168(int, int);

void fn_8005D598(void *arg0, int arg1, int arg2) {
    *(int *)((char *)arg0 + 0xC8) = arg1;
    fn_80059168(*(int *)((char *)arg0 + 0xC0), arg2);
    fn_800184CC(0x1BD);
}
