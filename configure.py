#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import json
import shlex
import sys
from pathlib import Path
from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
DEFAULT_VERSION = 0
VERSIONS = [
    "GPXE01",
    "GPXP01",
    "GPXJ01",
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--ninja",
    metavar="BINARY",
    type=Path,
    help="path to ninja binary (optional)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--warn",
    dest="warn",
    type=str,
    choices=["all", "off", "error"],
    help="how to handle warnings",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.ninja_path = args.ninja
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-2"
config.compilers_tag = "20251118"
config.dtk_tag = "v1.8.3"
config.objdiff_tag = "v3.6.1"
config.sjiswrap_tag = "v1.2.2"
config.wibo_tag = "1.0.3"

# Project
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
    "-I include",
    f"-I build/{config.version}/include",
    f"--defsym BUILD_VERSION={version_num}",
]
config.ldflags = [
    "-fp hardware",
    "-nodefaults",
]
if args.debug:
    config.ldflags.append("-g")  # Or -gdwarf-2 for Wii linkers
if args.map:
    config.ldflags.append("-mapunused")
    # config.ldflags.append("-listclosure") # For Wii linkers

# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = []

# Optional numeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = None

# Template defaults for new units. Existing source objects below have passed
# their linked build checks; do not infer these flags for unrelated units.
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hardware",
    "-Cpp_exceptions off",
    "-O4,p",
    "-inline auto",
    '-pragma "cats off"',
    '-pragma "warn_notinlined off"',
    "-maxerrors 1",
    "-nosyspath",
    "-RTTI off",
    "-fp_contract on",
    "-str reuse",
    "-multibyte",  # For Wii compilers, replace with `-enc SJIS`
    "-i include",
    f"-i build/{config.version}/include",
    f"-DBUILD_VERSION={version_num}",
    f"-DVERSION_{config.version}",
]

# Debug flags
if args.debug:
    # Or -sym dwarf-2 for Wii compilers
    cflags_base.extend(["-sym on", "-DDEBUG=1"])
else:
    cflags_base.append("-DNDEBUG=1")

# Warning flags
if args.warn == "all":
    cflags_base.append("-W all")
elif args.warn == "off":
    cflags_base.append("-W off")
elif args.warn == "error":
    cflags_base.append("-W error")

config.linker_version = "GC/1.3.2"

config.warn_missing_config = True
config.warn_missing_source = False
config.libs = []
if config.version == "GPXE01":
    candidate_manifest = Path("config") / config.version / "m2c_candidates.json"
    candidate_rows = (json.loads(candidate_manifest.read_text(encoding="utf-8")).get("candidates", [])
                      if candidate_manifest.is_file() else [])
    generated_candidate_objects = [
        Object(bool(row.get("completed")), row["path"],
               mw_version=f"GC/{row['profile']}",
               cflags=[shlex.join(row["compiler_flags"])])
        for row in candidate_rows
    ]
    config.reconfig_deps.append(candidate_manifest)
    config.libs.append(
        {
            "lib": "m2c-candidates",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base,
            "progress_category": "game",
            "objects": generated_candidate_objects,
        }
    )
    leaf_manifest = Path("config") / config.version / "leaf_promotions.txt"
    generated_leaf_objects = ([Object(True, line) for line in
                               leaf_manifest.read_text(encoding="utf-8").splitlines() if line]
                              if leaf_manifest.is_file() else [])
    config.reconfig_deps.append(leaf_manifest)
    config.libs.append(
        {
            "lib": "game-leaf-pilot",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base,
            "progress_category": "game",
            "objects": [
                Object(True, "game/auto_03_8008AC60_leaves.c"),
                Object(True, "game/auto_03_8000F234_leaf.c"),
                Object(True, "game/auto_03_80048920_leaf.c"),
                Object(True, "game/auto_03_800FB7F8_leaf.c"),
                Object(True, "game/auto_03_8008ACA0_leaf.c"),
                Object(True, "game/auto_03_8008C7BC_leaf.c"),
                Object(True, "game/auto_03_8008DF50_leaf.c"),
                Object(True, "game/auto_03_8008DF7C_leaf.c"),
                Object(True, "game/auto_03_8008E95C_leaf.c"),
                Object(True, "game/auto_03_8008E9F0_leaf.c"),
                Object(True, "game/auto_03_8008F0B8_leaves.c"),
                Object(True, "game/auto_03_8008F328_leaves.c"),
                Object(True, "game/auto_03_8008E09C_leaf.c"),
                Object(True, "game/auto_03_8008E118_leaf.c"),
                Object(True, "game/auto_03_8008E250_leaf.c"),
                Object(True, "game/auto_03_8008EA70_leaf.c"),
                Object(True, "game/auto_03_800901A8_leaves.c"),
                Object(True, "game/auto_03_800917B4_leaf.c"),
                Object(True, "game/auto_03_800917C0_leaf.c"),
                Object(True, "game/auto_03_80091DF4_leaf.c"),
                Object(True, "game/auto_03_80091EF8_leaf.c"),
                Object(True, "game/auto_03_80095FD0_leaf.c"),
                Object(True, "game/auto_03_80095134_leaf.c"),
                Object(True, "game/auto_03_80095914_leaf.c"),
                Object(True, "game/auto_03_80098578_leaves.c"),
                Object(True, "game/auto_03_800985C8_leaves.c"),
                Object(True, "game/auto_03_800987B0_leaf.c"),
                Object(True, "game/auto_03_8009A480_leaf.c"),
                Object(True, "game/auto_03_800BA2D4_leaf.c"),
                Object(True, "game/auto_03_800BBD10_leaf.c"),
                Object(True, "game/auto_03_800BC93C_leaf.c"),
                Object(True, "game/auto_03_800BCC64_leaves.c"),
                Object(True, "game/auto_03_800BD220_leaf.c"),
                Object(True, "game/auto_03_800BCEB0_leaves.c"),
                Object(True, "game/auto_03_800BD244_leaves.c"),
                Object(True, "game/auto_03_800BD728_leaf.c"),
                Object(True, "game/auto_03_800BD72C_leaf.c"),
                Object(True, "game/auto_03_800BD744_leaves.c"),
                Object(True, "game/auto_03_800BE308_leaf.c"),
                Object(True, "game/auto_03_800BE7D0_leaf.c"),
                Object(True, "game/auto_03_800BE784_leaf.c"),
                Object(True, "game/auto_03_800BF0AC_leaf.c"),
                Object(True, "game/auto_03_800BF1C8_leaf.c"),
                Object(True, "game/auto_03_800BF308_leaves.c"),
                Object(True, "game/auto_03_800BF928_leaf.c"),
                Object(True, "game/auto_03_800BFBA8_leaves.c"),
                Object(True, "game/auto_03_800C0034_leaf.c"),
            ],
        }
    )
    config.libs.append(
        {
            "lib": "game-leaf-whole-dol-125n",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base,
            "progress_category": "game",
            "objects": generated_leaf_objects,
        }
    )
    config.libs.append(
        {
            "lib": "game-leaf-132",
            "mw_version": "GC/1.3.2",
            "cflags": cflags_base,
            "progress_category": "game",
            "objects": [Object(True, "game/auto_03_8008DFA4_leaf.c"),
                        Object(True, "game/auto_03_80056564_leaf.c"),
                        Object(True, "game/auto_03_8005D598_leaf.c"),
                        Object(True, "game/auto_03_80085BE8_leaf.c"),
                        Object(True, "game/auto_03_800D61E0_leaf.c"),
                        Object(True, "game/auto_03_800D7200_leaf.c"),
                        Object(True, "game/auto_03_8008AB74_leaves.c"),
                        Object(True, "game/auto_03_8008E010_leaf.c"),
                        Object(True, "game/auto_03_8008EA48_leaf.c"),
                        Object(True, "game/auto_03_8008EA74_leaf.c"),
                        Object(True, "game/auto_03_8008F3C0_leaf.c"),
                        Object(True, "game/auto_03_8008AC20_leaf.c"),
                        Object(True, "game/auto_03_800967C8_leaf.c"),
                        Object(True, "game/auto_03_80096808_leaf.c"),
                        Object(True, "game/auto_03_8009A438_leaf.c"),
                        Object(True, "game/auto_03_800B9A80_leaf.c"),
                        Object(True, "game/auto_03_800B9AB4_leaf.c"),
                        Object(True, "game/auto_03_800BBE30_leaf.c"),
                        Object(True, "game/auto_03_800BCCB0_leaf.c"),
                        Object(True, "game/auto_03_800BCF40_leaf.c"),
                        Object(True, "game/auto_03_800BFB1C_leaf.c"),
                        Object(True, "game/auto_03_800BD1F4_leaves.c"),
                        Object(True, "game/auto_03_800BD228_leaf.c"),
                        Object(True, "game/auto_03_800BD6E0_leaves.c"),
                        Object(True, "game/auto_03_800BD260_leaf.c")],
        }
    )
    config.libs.append(
        {
            "lib": "game-leaf-132-data",
            "mw_version": "GC/1.3.2",
            "cflags": cflags_base + ["-sdata 0"],
            "progress_category": "game",
            "objects": [Object(True, "game/auto_03_800BF92C_leaves.c")],
        }
    )
    config.libs.append(
        {
            "lib": "game-float-132",
            "mw_version": "GC/1.3.2",
            "cflags": cflags_base + ["-fp_contract off", "-char unsigned", "-sym on",
                                     "-requireprotos", "-lang=c"],
            "progress_category": "game",
            "objects": [Object(True, "game/auto_03_800916C4_leaves.c")],
        }
    )
    config.libs.append(
        {
            "lib": "dolphin-sdk-shared",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base,
            "progress_category": "sdk",
            "objects": [Object(True, "dolphin/os/OSInitThreadQueue.c"),
                        Object(True, "dolphin/os/OSContextClear.c"),
                        Object(True, "dolphin/si/SITypeDecode.c"),
                        Object(True, "dolphin/db/DBPrintf.c")],
        }
    )
    config.libs.append(
        {
            "lib": "dolphin-card-shared",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base + ["-fp_contract off", "-char unsigned", "-sym on",
                                     "-requireprotos", "-lang=c"],
            "progress_category": "sdk",
            "objects": [Object(True, "dolphin/card/bitrev.c"),
                        Object(True, "dolphin/card/CARDCheckSum.c"),
                        Object(True, "dolphin/card/CARDVerify.c"),
                        Object(True, "dolphin/card/UpdateIconOffsets.c")],
        }
    )
    config.libs.append(
        {
            "lib": "dolphin-gx-shared",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base + ["-fp_contract off", "-char unsigned", "-sym on",
                                     "-requireprotos", "-lang=c"],
            "progress_category": "sdk",
            "objects": [Object(True, "dolphin/gx/GXSetTmemConfig.c"),
                        Object(True, "dolphin/gx/GXInitTexCacheRegion.c"),
                        Object(True, "dolphin/gx/GXInitFifoBase.c")],
        }
    )
    config.libs.append(
        {
            "lib": "crt-shared-125n",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base + ["-fp_contract off", "-char unsigned", "-sym on",
                                     "-requireprotos", "-lang=c"],
            "progress_category": "sdk",
            "objects": [Object(True, "crt/memchr.c"),
                        Object(True, "crt/string_search.c"),
                        Object(True, "crt/strncpy.c")],
        }
    )
    config.libs.append(
        {
            "lib": "crt-shared-132",
            "mw_version": "GC/1.3.2",
            "cflags": cflags_base + ["-fp_contract off", "-char unsigned", "-sym on",
                                     "-requireprotos", "-lang=c"],
            "progress_category": "sdk",
            "objects": [Object(True, "crt/strcmp.c"),
                        Object(True, "crt/strcpy.c"),
                        Object(True, "crt/copysign.c"),
                        Object(True, "crt/modf.c"),
                        Object(True, "crt/fwrite.c"),
                        Object(True, "crt/fseek.c")],
        }
    )
    config.libs.append(
        {
            "lib": "crt-wide-13",
            "mw_version": "GC/1.3",
            "cflags": cflags_base + ["-fp_contract off", "-char unsigned", "-sym on",
                                     "-requireprotos", "-lang=c"],
            "progress_category": "sdk",
            "objects": [Object(True, "crt/fwide.c")],
        }
    )
    config.libs.append(
        {
            "lib": "crt-printf-25",
            "mw_version": "GC/2.5",
            "cflags": cflags_base + ["-fp_contract off", "-char signed", "-sym on",
                                     "-requireprotos", "-lang=c", "-use_lmw_stmw on"],
            "progress_category": "sdk",
            "objects": [Object(True, "crt/round_decimal.c")],
        }
    )
    config.libs.append(
        {
            "lib": "crt-mem-20",
            "mw_version": "GC/2.0",
            "cflags": cflags_base + ["-fp_contract off", "-char unsigned", "-sym on",
                                     "-requireprotos", "-lang=c"],
            "progress_category": "sdk",
            "objects": [Object(True, "crt/mem.c")],
        }
    )
    config.libs.append(
        {
            "lib": "MetroTRK",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base
            + ["-use_lmw_stmw on", "-pool off", "-sdata 0", "-sdata2 0", "-rostr"],
            "progress_category": "debugger",
            "objects": [
                Object(True, "MetroTRK/usr_put.c"),
                Object(True, "MetroTRK/TRKDispatchInit.c"),
                Object(True, "MetroTRK/ddh_cc_close.c"),
                Object(True, "MetroTRK/ddh_cc_shutdown.c"),
                Object(True, "MetroTRK/gdev_cc_close.c"),
                Object(True, "MetroTRK/gdev_cc_shutdown.c"),
            ],
        }
    )
    config.libs.append(
        {
            "lib": "odenotstub",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_base,
            "progress_category": "sdk",
            "objects": [Object(True, "dolphin/odenotstub/odenotstub.c")],
        }
    )


# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Game Code"),
    ProgressCategory("sdk", "SDK Code"),
    ProgressCategory("debugger", "MetroTRK / debug I/O"),
]
config.progress_each_module = args.verbose
# Optional extra arguments to `objdiff-cli report generate`
config.progress_report_args = [
    # Marks relocations as mismatching if the target value is different
    # Default is "functionRelocDiffs=none", which is most lenient
    # "--config functionRelocDiffs=data_value",
]

if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress information
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
