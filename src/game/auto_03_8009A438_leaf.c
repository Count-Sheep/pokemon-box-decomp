int fn_8009A438(int arg0) {
    if (arg0 < 0x40) {
        return ((int)(arg0 * 0x34C) / 64) - 0x388;
    }
    return (((arg0 - 0x40) * 0x3C) / 63) - 0x3C;
}
