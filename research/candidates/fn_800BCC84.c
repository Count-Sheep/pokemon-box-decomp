typedef void (*Callback)(void *);

void fn_800BCC84(void *arg0) {
    Callback *table = *(Callback **)arg0;
    table[8](arg0);
}
