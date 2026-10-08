# Ghidra analysis

The US `GPXE01` retail `sys/main.dol` was imported and auto-analyzed with
Ghidra 12.1.4 and the GameCube Loader 1.3.1 extension. The input SHA-256 is
`c53adf57d946c3fcf3973cfd7197e946b00bdb206f06d47acd3f5bcd91e68850`.
Ghidra selected `PowerPC:BE:32:Gekko_Broadway:default` and completed analysis.

The ignored local project is
`build/decomp-support/GPXE01/ghidra/BoxGPXE01.gpr`. The ignored
`build/decomp-support/GPXE01/ghidra-inventory.json` exports 5,211 inferred
functions, 12,982 direct function-call edges, and the memory-block map.
The import used `-loader-autoloadMaps false` because this loader opens an
interactive symbol-map prompt otherwise, which cannot run headlessly.

The existing decomp-toolkit symbol map has 6,346 function entries, including
395 evidence-backed names. Ghidra inferred fewer function starts and assigned
default names throughout this first pass. Its function boundaries and call
graph are leads for review, not authoritative split, symbol, type, compiler,
or byte-match evidence. No Ghidra result was promoted into `src/` or the
linked build.

The dashboard Call graph derives a stable graph from this inventory after
verifying the analyzed DOL hash. It contains 5,211 nodes and 12,964 unique
internal direct-call edges; repeated calls between the same function pair are
collapsed. Names and broad code regions come from the reviewed Box symbol map,
and every unresolved node keeps its address name. Graph clusters are research
navigation aids, not source-file ownership claims.

To inspect the project locally, open `BoxGPXE01.gpr` in Ghidra. To refresh the
inventory from the saved project, run from the harness root:

```sh
/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless \
  build/decomp-support/test-projects/pokemon-box/build/decomp-support/GPXE01/ghidra \
  BoxGPXE01 -process main.dol -noanalysis -readOnly \
  -scriptPath harness -postScript GhidraExportInventory.java \
  "$PWD/build/decomp-support/test-projects/pokemon-box/build/decomp-support/GPXE01/ghidra-inventory.json"
```
