# Initial discovery

This record describes the first local inspection of the supplied GPXE01 image.
It is evidence for future configuration, not a build configuration or a claim
that the project is matchable yet.

## GPXE01

The disc image was identified with `dtk disc info`:

- Format: CISO
- Title: `POKeMON BOX RUBY&SAPPHIRE`
- Game ID: `GPXE01`
- Disc: 1
- Revision: 1
- Lossless CISO verification data: present

The image's `sys/main.dol` was copied to ignored local build storage for
inspection only. `dtk dol info` reported:

- Entry point: `0x80003154`
- `.init`: `0x80003100`, size `0x24E8`, file offset `0x100`
- `.text`: `0x800056C0`, size `0x165E24`, file offset `0x2600`
- `.rodata`: `0x8016B5A0`, size `0x1AE90`, file offset `0x1685A0`
- `.data`: `0x80186440`, size `0x729D8`, file offset `0x183440`
- `.bss`: `0x801F8E20`, size `0x312C4`
- `.sdata`: `0x8022A100`, size `0xD59`, file offset `0x1F5E20`
- `.sbss`: `0x8022AE60`, size `0xB8D`
- `.sdata2`: `0x8022BA00`, size `0x19A8`, file offset `0x1F6B80`
- `.bss2`: `0x8022D3C0`, size `0x10`
- Extracted DOL size: `2065728` bytes
- Extracted DOL SHA-256: `c53adf57d946c3fcf3973cfd7197e946b00bdb206f06d47acd3f5bcd91e68850`

The remaining work before the first Box build is to derive the DOL split,
symbol, compiler, and linker configuration from this image and the dtk-template
workflow. No guessed source ownership or compiler settings have been added.
