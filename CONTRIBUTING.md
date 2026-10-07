# Contributing

This project follows an evidence-first matching workflow.

## General rules

- Keep changes small and focused.
- Use a pull request for each purpose.
- Use names from confirmed symbol maps; otherwise use descriptive technical
  names and record the evidence.
- Ask before changing the project structure or adding new source areas.

## Matching work

- Add source only through confirmed configure/object declarations and split
  ownership.
- Keep nonmatching source as a candidate until the generated report proves the
  object belongs in the linked build.
- Compare generated objects with objdiff before claiming a match.
- Preserve the complete measurement context: game ID, revision, compiler,
  flags, source owner, target object, and report version.

## Binary and configuration work

- Keep placeholder splits until confirmed by binary and build evidence.
- Verify every symbols, splits, linker, or object-map change with a successful
  build before counting it as progress.
- Never change configuration solely to raise a progress percentage.

## Repository cleanliness

- Do not commit ROMs, ISOs, extracted game assets, target objects, compiler
  binaries, generated `.inc` files, ROM-derived snippets, asm wrappers, inline
  assembly, or included assembly as decompilation progress.
- Keep harness experiments and research outside the active source tree.
- Do not treat a fuzzy score as proof of a byte-exact or link-verified match.
