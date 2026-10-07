# Pokémon Box: Ruby & Sapphire decompilation project

This is a new local project scaffold for a future matching decompilation of
Pokémon Box: Ruby & Sapphire on Nintendo GameCube. It intentionally contains no
ROM-derived data, reconstructed source, compiler configuration, symbols, or
splits yet.

## Supported image identities

The following GameCube IDs are recorded from public release databases and are
staging identities only. The first ISO inspection must confirm the exact disc
header, revision, and hashes before any build rule is written:

- `GPXE01` — NTSC-U
- `GPXP01` — PAL
- `GPXJ01` — NTSC-J

Place a legally obtained image in the matching directory under `orig/`:

```text
orig/GPXE01/
orig/GPXP01/
orig/GPXJ01/
```

Supported file formats and the final configure command will be recorded only
after the image and project tooling identify them. The image itself is ignored
by git and must never be committed.

## Project rules

These rules mirror the current local Colosseum workflow and the current TeamOrre
XD contribution guidance, adapted for a new project:

- Keep changes small and focused; use a pull request for every contribution.
- Use evidence-backed names from symbol maps when available.
- Do not invent symbols, types, splits, ownership, or compiler settings.
- Keep placeholder splits until the binary and build evidence confirm them.
- Verify split or symbol changes with a successful build before treating them as
  project progress.
- Add source through the project's configure/object declarations and confirmed
  split ownership.
- Keep nonmatching source as a candidate until the generated report proves it
  belongs in the linked build.
- Use objdiff against generated target/source objects before claiming a match.
- Do not commit `.inc` files, extracted game assets, target objects, compiler
  binaries, ROM-derived snippets, asm wrappers, inline assembly, or included
  assembly as decompilation progress.
- Do not edit symbols, splits, linker configuration, or object declarations only
  to improve a metric; every such change needs a build reason.
- Keep local harness experiments and research notes separate from the active
  source tree.

## Setup status

No configure script or build files are present yet. After the first ISO is
placed, inspect its identity, choose the matching dtk-template configuration,
and derive the actual build rules from the image and tool output. Do not run a
build against a guessed game ID or guessed compiler version.
