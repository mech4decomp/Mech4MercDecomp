#!/usr/bin/env python3
"""
tools/module_classify_subsystem.py -- classify a module's func_*.c sources into
a subsystem taxonomy (mapping only). Module-track analog of
tools/classify_subsystem.py (EXE).

Read-only (never moves files). For each module key it resolves every func source
under src/<target>/ to a subsystem using the module's CONFIG rule table
(the taxonomy comes from the per-module "Systems" sections of the module notes)
and writes build/module_subsystem_map/<key>.csv (va,file,subsystem,reason) for
review. Funcs live flat in text/ (binary-structure reorg 2026-08); this is a
mapping only, not a folder structure.

Rule kinds (evaluated in order per file):
  ("exact",    va,               sub)   VA == value
  ("va_range", (lo, hi),         sub)   lo <= VA < hi
  ("name",     regex,            sub)   file basename matches regex
  ("keyword",  substring,        sub)   semantic one-line (file header) contains it
  default = CONFIG[key]["default"]

Usage:
  python tools/module_classify_subsystem.py [key]   # default zloglib
"""
import csv
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_ROOT = os.path.join(ROOT, "src")
OUT_DIR = os.path.join(ROOT, "build", "module_subsystem_map")

# module key -> src target folder (missionlang folder is missionlang_mercs)
TARGET = {"missionlang": "missionlang_mercs"}

# Per-module taxonomy. Rules are tried in order; the first match wins.
CONFIG = {
    "zloglib": {
        "dll": "ZlogLib.dll",
        "base": 0x10000000,
        "default": "core",
        "rules": [
            # Z-log lifecycle / init-emit core
            ("exact", 0x10001000, "lifecycle"),   # log_init_core
            ("exact", 0x10001357, "lifecycle"),   # log_close (fflush/fclose/rename/spawn)
            ("exact", 0x100015fb, "lifecycle"),   # log_unique_filename
            ("exact", 0x100016a6, "lifecycle"),   # log_file_exists
            ("exact", 0x100018a6, "lifecycle"),   # log_init (slot +0x08)
            ("exact", 0x10001a1d, "lifecycle"),   # log_config_apply
            ("exact", 0x10001be9, "lifecycle"),   # log_dispatch
            ("exact", 0x10001c28, "lifecycle"),   # child-exit-code wrapper
            # Z-emit / format
            ("exact", 0x10001201, "emit"),        # log_emit
            ("exact", 0x1000134b, "emit"),        # fflush wrapper
            ("exact", 0x10001561, "emit"),        # timestamp formatter
            ("exact", 0x10002931, "emit"),        # ring vsprintf
            # Z-slots / API surface
            ("exact", 0x10001c6e, "api"),         # GetngLogAPI (export Ordinal_1)
            ("exact", 0x100016d9, "api"),         # slot +0x14
            ("exact", 0x10001707, "api"),         # game-end slot +0x10
            ("exact", 0x10001796, "api"),         # slot +0x18
            ("exact", 0x100017c8, "api"),         # player-connect slot +0x20
            # Z-MD5 (custom) + hex codec
            ("va_range", (0x10001cf5, 0x10001fb0), "md5"),
            # Z-endian / mem helpers
            ("va_range", (0x10002859, 0x10002904), "mem"),
            # Z-CRT / entry glue
            ("exact", 0x10001ce9, "crt"),
            ("va_range", (0x10002904, 0x10002c00), "crt"),
        ],
    },
    "language": {
        "dll": "Language.dll",
        "base": 0x10000000,
        "default": "crt",
        "rules": [
            # L-string-table arena allocator (contiguous block, _strstor-style)
            ("va_range", (0x10002f9f, 0x10003d10), "arena"),
            # L-runtime error / message emitter (message table @0x10006060)
            ("exact", 0x10001d25, "error"),   # 0xfc/0xff load/finalize dispatch
            ("exact", 0x10001d5e, "error"),   # message-table lookup + stderr/box
            ("exact", 0x10003e14, "error"),   # lazy MessageBox wrapper
            ("exact", 0x10003f9e, "error"),   # error-handler callback wrapper
            # L-locks (_lock/_unlock family + nine 9-B leave wrappers)
            ("exact", 0x10001eb1, "locks"),
            ("exact", 0x10001eda, "locks"),
            ("exact", 0x10001f46, "locks"),
            ("exact", 0x10001fa7, "locks"),
            ("exact", 0x10002055, "locks"),
            ("exact", 0x100020de, "locks"),
            ("exact", 0x10002163, "locks"),
            ("exact", 0x100021bb, "locks"),
            ("exact", 0x10002287, "locks"),
            ("exact", 0x100022e6, "locks"),
            # L-codepage / case machinery (the i18n contract)
            ("exact", 0x1000248b, "codepage"), # setup + lead-byte bitmap
            ("exact", 0x10002638, "codepage"), # codepage resolver (-2/-3/-4)
            ("exact", 0x10002682, "codepage"), # display-codepage map
            ("exact", 0x100026b5, "codepage"), # reset
            ("exact", 0x100026de, "codepage"), # case-table build
            ("exact", 0x10002863, "codepage"), # one-time ACP init
            ("exact", 0x10002bb5, "codepage"), # strtol thunk
            ("exact", 0x10002bcc, "codepage"), # strtol
            ("exact", 0x100041e8, "codepage"), # LCMapStringW/A wrapper
            ("exact", 0x10004437, "codepage"), # GetStringTypeW/A wrapper
            ("exact", 0x10004589, "codepage"), # toupper
            ("exact", 0x100045f8, "codepage"), # single-char upper
            ("exact", 0x100046c4, "codepage"), # char-type lookup
            ("exact", 0x10004b90, "codepage"), # stricmp
            ("exact", 0x10004c60, "codepage"), # strnicmp
            ("exact", 0x10004d61, "codepage"), # case-mapping gap bundle
            ("exact", 0x10004e55, "codepage"), # single-char lower
            # L-CRT string/int (incl. stepping-stone bundles)
            ("exact", 0x1000231c, "string"),
            ("exact", 0x10002320, "string"),  # strcpy tail-jump
            ("exact", 0x10002327, "string"),
            ("exact", 0x10002330, "string"),  # strcpy
            ("exact", 0x10002410, "string"),  # _strlen
            ("exact", 0x1000287f, "string"),
            ("exact", 0x10002880, "string"),  # memmove
            ("exact", 0x10002dd1, "string"),  # strchr/strstr/strncmp bundle
            ("exact", 0x10002f70, "string"),  # _alloca_probe
            ("exact", 0x10003e9d, "string"),  # _strncpy bundle
            ("exact", 0x10003fb9, "string"),  # _memset bundle
            ("exact", 0x1000440c, "string"),  # bounded strlen
            ("exact", 0x10004739, "string"),
            ("exact", 0x10004740, "string"),  # memmove
            ("exact", 0x10004a75, "string"),  # strspn bundle
            ("exact", 0x10004b10, "string"),  # strspn-style
            ("exact", 0x10004b4e, "string"),
            ("exact", 0x10004b50, "string"),  # strspn-style
            ("exact", 0x10004b8a, "string"),
            ("exact", 0x10004f20, "string"),  # 64-bit mul helper bundle
            # everything else falls to "crt" (startup/TLS/heap/stdio/env/SEH)
        ],
    },
    "missionlang": {
        "dll": "MissionLang_MERCS.dll",
        "base": 0x10000000,
        "default": "crt",
        "rules": [
            # M-buddy-allocator arena
            ("exact", 0x10002785, "arena"),  # init
            ("exact", 0x100027c3, "arena"),  # scan (0x14-B stride)
            ("exact", 0x100027ee, "arena"),  # free
            ("exact", 0x10002b19, "arena"),  # alloc
            ("exact", 0x10002e22, "arena"),  # grow (HeapReAlloc)
            ("exact", 0x10002ed3, "arena"),  # arena init
            # M-codepage / string-table loader (the i18n contract)
            ("exact", 0x1000205b, "codepage"), # lookup + bitmap build
            ("exact", 0x10002208, "codepage"), # sentinel dispatch (-2/-3/-4)
            ("exact", 0x10002252, "codepage"), # codepage map
            ("exact", 0x10002285, "codepage"), # reset
            ("exact", 0x100022ae, "codepage"), # case-table build
            ("exact", 0x10002433, "codepage"), # one-time init
            ("exact", 0x100031d3, "codepage"), # LCMapString wrapper
            ("exact", 0x100033f7, "codepage"), # bounded strlen
            ("exact", 0x10003422, "codepage"), # GetStringType wrapper
            # M-runtime error / message emitter (message table @0x10005060)
            ("exact", 0x10001aeb, "error"),  # 0xfc/0xff dispatch
            ("exact", 0x10001b24, "error"),  # message-table lookup + stderr/box
            ("exact", 0x10002fce, "error"),  # lazy MessageBox wrapper
            ("exact", 0x100031b8, "error"),  # callback (fn ptr 0x10005538)
            # M-locks (critical sections)
            ("exact", 0x10001c77, "locks"),
            ("exact", 0x10001ca0, "locks"),
            ("exact", 0x10001d0c, "locks"),
            ("exact", 0x10001d6d, "locks"),
            # M-CRT string/mem (incl. stepping-stone bundles)
            ("exact", 0x10001ee3, "string"),
            ("exact", 0x10001ef0, "string"),  # strcpy thunk
            ("exact", 0x10001ef7, "string"),
            ("exact", 0x10001f00, "string"),  # strcpy
            ("exact", 0x10001fe0, "string"),  # _strlen
            ("exact", 0x1000244f, "string"),
            ("exact", 0x10002450, "string"),  # memmove
            ("exact", 0x10003057, "string"),  # _strncpy/_memset bundle
            ("exact", 0x10003570, "string"),  # memmove
            # everything else falls to "crt" (startup/TLS/stdio/env/SEH)
        ],
    },
    "mw4stats": {
        "dll": "MW4Stats.dll",
        "base": 0x10000000,
        "default": "support",
        "rules": [
            # --- M-recording (01_stats_recording.md: StatsRec + serializer +
            #     field-writer chains + manager commit/finalize) ---
            # record exports
            ("exact", 0x10001790, "recording"),  # MW4StatsDll_writeTeamStats (O8)
            ("exact", 0x10001AA0, "recording"),  # MW4StatsDll_writePlayerStats (O7)
            ("exact", 0x10002040, "recording"),  # MW4StatsDll_writeBotStats (O6)
            ("exact", 0x10002430, "recording"),  # MW4StatsDll_RecordGameSummary (O3)
            # StatsRec ctor/dtor + record-object ctors
            ("exact", 0x100058c0, "recording"),  # StatsRec ctor (vtables 0x1002126C/60)
            ("exact", 0x10001370, "recording"),  # StatsRec dtor
            ("exact", 0x10005ae0, "recording"),  # big-record ctor (default strings)
            ("exact", 0x10005ab0, "recording"),
            ("exact", 0x10005e20, "recording"),  # type-cell target bind
            ("exact", 0x10005ea0, "recording"),  # ZS_Affiliation elem
            ("exact", 0x100059d0, "recording"),  # point-list ctor (vtable 0x10021270)
            ("exact", 0x10004e50, "recording"),  # fresh stack-record ctor (vtable 0x10021254)
            ("exact", 0x100027f0, "recording"),  # stack-record dtor
            ("exact", 0x10003d20, "recording"),  # record-B ctor (vtable 0x10021244)
            # XML serializer (vtable slot0) + vtable-slot methods
            ("exact", 0x10005100, "recording"),  # master serializer (720 B)
            ("exact", 0x10005528, "recording"),
            ("exact", 0x10005530, "recording"),  # field-key writer (0x10024EDC/EF0/F10)
            ("exact", 0x10005a40, "recording"),  # child-list emitter (slot1)
            ("exact", 0x10005a38, "recording"),
            ("exact", 0x10005f50, "recording"),  # nested-element emitter (slot3)
            ("exact", 0x10005f48, "recording"),
            ("exact", 0x100060a0, "recording"),  # slot4 (real entry +0xC)
            ("exact", 0x10006094, "recording"),
            ("exact", 0x10004c40, "recording"),  # slot2
            ("exact", 0x100066e0, "recording"),  # slot7
            ("exact", 0x100031b0, "recording"),  # 0x10021260 slot2
            ("exact", 0x10005880, "recording"),  # 0x10021260 slot1
            ("exact", 0x1001ee1c, "recording"),  # 0x1002126C slot5/6
            ("exact", 0x1001ee16, "recording"),  # operator-new (0x1C-B node) for map insert
            # field-writer chain (XML element serializer)
            ("exact", 0x10003d60, "recording"),
            ("exact", 0x10006070, "recording"),
            ("exact", 0x10003b10, "recording"),
            ("exact", 0x10001680, "recording"),  # wcslen+copy assign
            ("exact", 0x10001660, "recording"),  # clear-then-assign
            ("exact", 0x100062b0, "recording"),
            ("exact", 0x10006330, "recording"),
            ("exact", 0x10006430, "recording"),
            ("exact", 0x100064b0, "recording"),
            ("exact", 0x10006370, "recording"),  # double field (wcstod)
            ("exact", 0x10006470, "recording"),  # string field (default L"904b0")
            ("exact", 0x100064f0, "recording"),  # points-list field
            ("exact", 0x100062f0, "recording"),  # int field (_wtoi)
            ("exact", 0x10006210, "recording"),  # <key v="value"/>
            ("exact", 0x10006260, "recording"),
            ("exact", 0x100061a0, "recording"),
            ("exact", 0x100061f0, "recording"),  # int-format
            ("exact", 0x100047f0, "recording"),
            ("exact", 0x10004860, "recording"),
            ("exact", 0x10004840, "recording"),
            ("exact", 0x100053d0, "recording"),  # double element
            ("exact", 0x10005430, "recording"),
            ("exact", 0x10005490, "recording"),  # nested <key>..</key>
            ("exact", 0x100047d0, "recording"),  # int element
            ("exact", 0x10004aa0, "recording"),  # XML-escaped string element
            ("exact", 0x100054f0, "recording"),  # points-list element
            ("exact", 0x10005520, "recording"),  # empty-list gate
            ("exact", 0x10001fe0, "recording"),  # float fmt L"%.*g"
            ("exact", 0x10001a10, "recording"),  # int -> +0x33C
            ("exact", 0x10001a60, "recording"),  # point-list append
            ("exact", 0x10001a30, "recording"),  # WideStringBuffer F1a30
            ("exact", 0x10005450, "recording"),  # WideStringBuffer F5450
            # manager commit/finalize + record dispatch
            ("exact", 0x10005d50, "recording"),  # commit(rec)
            ("exact", 0x10005d20, "recording"),  # finalize(rec)
            ("exact", 0x10003d90, "recording"),  # commit body (validate + dispatch)
            ("exact", 0x10003c00, "recording"),  # finalize body
            ("exact", 0x10006190, "recording"),  # this[0]=*p1 copy
            ("exact", 0x10003d40, "recording"),  # record-B serializer entry
            ("exact", 0x10003e80, "recording"),  # queue-message build
            ("exact", 0x10002fa0, "recording"),  # serialized string + dispatch
            ("exact", 0x10003fb0, "recording"),
            ("exact", 0x10003790, "recording"),  # append via F_03790
            ("exact", 0x10003250, "recording"),  # record type-cell ctor
            ("exact", 0x10003290, "recording"),  # string-keyed map lookup-or-create
            ("exact", 0x10004150, "recording"),  # map find
            ("exact", 0x10003860, "recording"),  # map node ctor
            ("exact", 0x100041d0, "recording"),  # map insert (guarded)
            # --- M-upload (02_log_upload_auth.md 2.x: CreateLog/UploadLog/
            #     LogObject/SessionConfig/WinInet HTTP client) ---
            ("exact", 0x100014b0, "upload"),  # MW4StatsDll_CreateLog (O1)
            ("exact", 0x10002930, "upload"),  # MW4StatsDll_UploadLog (O4)
            ("exact", 0x10003980, "upload"),  # LogObject init (g_10027058)
            ("exact", 0x100039e0, "upload"),  # stats-record build + dispatch
            ("exact", 0x100012e0, "upload"),  # LogObject global ctor thunk
            ("exact", 0x100012fc, "upload"),  # g_10027058 dispatch table
            ("exact", 0x10001310, "upload"),
            ("exact", 0x10001320, "upload"),
            ("exact", 0x10001250, "upload"),  # RAII reset/dtor tail
            ("exact", 0x10004610, "upload"),  # RAII guard ctor (+0x1D0 sub)
            ("exact", 0x10005bf0, "upload"),  # SessionConfig ctor (g_10027080)
            ("exact", 0x10005c20, "upload"),  # +0x1D0 sub ctor
            ("exact", 0x10003b90, "upload"),  # SessionConfig bind
            ("exact", 0x100032a0, "upload"),  # ObjA ctor
            ("exact", 0x100032b0, "upload"),  # ObjB ctor
            ("exact", 0x100032e0, "upload"),  # ObjB dtor
            ("exact", 0x10002ae0, "upload"),  # ObjB dtor tail
            ("exact", 0x10003820, "upload"),  # zero 4-dword body
            ("exact", 0x10003840, "upload"),  # base ctor (vtable 0x10021204)
            ("exact", 0x100032d0, "upload"),  # getter this->f[1]
            ("exact", 0x100043a0, "upload"),  # busy/idle test
            ("exact", 0x10004360, "upload"),  # release member
            ("exact", 0x10003b20, "upload"),  # async kick-off (WinInet POST)
            ("exact", 0x10003b60, "upload"),  # finalize
            ("exact", 0x10003130, "upload"),  # run-switch (Arr 0x10027530)
            ("exact", 0x100096f0, "upload"),  # uploader COM QI
            ("exact", 0x10009750, "upload"),  # uploader COM Release
            ("exact", 0x10009620, "upload"),  # uploader COM dtor
            ("exact", 0x10009f50, "upload"),  # COM finalize (slot6)
            ("exact", 0x10009e40, "upload"),  # COM async kickoff (slot7)
            ("exact", 0x10009ff0, "upload"),  # COM peer factory
            ("exact", 0x10009cc0, "upload"),  # COM send-record (slot4)
            ("exact", 0x1000c1c0, "upload"),  # COM AddRef (vtbl[1])
            ("exact", 0x10009790, "upload"),  # COM Init (vtbl[3])
            ("exact", 0x10009520, "upload"),  # uploader factory
            ("exact", 0x100038f0, "upload"),  # factory driver
            ("exact", 0x100095b0, "upload"),  # 0x1f0 work-obj ctor
            ("exact", 0x1000dce0, "upload"),  # 0x58-B work obj ctor (vtable 0x100214E4)
            ("exact", 0x1000ddd0, "upload"),  # work-obj init
            ("exact", 0x1000e030, "upload"),  # peer factory work ctor (vtable 0x100214F8)
            ("exact", 0x10012470, "upload"),  # InternetCloseHandle teardown
            ("exact", 0x1000ff30, "upload"),  # InternetCloseHandle teardown
            ("exact", 0x1000b210, "upload"),  # status-string pull
            # --- M-gunauth (02_log_upload_auth.md 3.x: gun-auth ticket + step
            #     state machines + auth-request block) ---
            ("exact", 0x10002af0, "gunauth"),  # MW4StatsDll_UserGunAuth (O5)
            ("exact", 0x100030b0, "gunauth"),  # MW4StatsDll_FreeTicket (O2)
            ("exact", 0x10002fd0, "gunauth"),  # auth-request block ctor
            ("exact", 0x10003000, "gunauth"),  # auth-request block dtor
            ("exact", 0x10003070, "gunauth"),  # BSTR free
            ("exact", 0x10003340, "gunauth"),  # step1 ctor (vtable 0x10021208)
            ("exact", 0x10003300, "gunauth"),  # step1 dtor
            ("exact", 0x10003470, "gunauth"),  # step2 ctor (vtable 0x10021218)
            ("exact", 0x10003420, "gunauth"),  # step2 dtor
            ("exact", 0x100035a0, "gunauth"),  # step3 ctor (vtable 0x10021228)
            ("exact", 0x10003560, "gunauth"),  # step3 dtor
            ("exact", 0x100035f0, "gunauth"),  # step3 start
            ("exact", 0x10003410, "gunauth"),  # step1 done-getter
            ("exact", 0x10003550, "gunauth"),  # step2 done-getter
            ("exact", 0x10003670, "gunauth"),  # step3 done-getter
            ("exact", 0x10003390, "gunauth"),  # step1 start-thread
            ("exact", 0x100033e0, "gunauth"),  # step1 run+mark
            ("exact", 0x100034d0, "gunauth"),  # step2 start
            ("exact", 0x10003440, "gunauth"),  # step2 finalize
            ("exact", 0x10003320, "gunauth"),  # release/delete
            ("exact", 0x10003520, "gunauth"),  # step2 run+mark
            ("exact", 0x10003640, "gunauth"),  # step3 run+mark
            ("exact", 0x10003680, "gunauth"),
            # --- M-crt (statically-linked MSVCRT + entry + EH/Unwind + IAT
            #     thunks: the 0x1001EED3-0x10020240 tail) ---
            ("va_range", (0x1001eed3, 0x10020240), "crt"),
            # --- M-support XML-parse layer B (03_support_layer.md): the
            #     prolog/attribute/text state machines 0x06D00-0x08E10 ---
            ("va_range", (0x10006d00, 0x10008e10), "support"),
            # --- M-support: remaining doc-anchored support funcs (allocator/
            #     buffers/CS containers/registry/Arr primitives) ---
            ("exact", 0x10006f20, "support"),  # AllocObj-backed grow
            ("exact", 0x10006f70, "support"),  # word-buffer copy
            ("exact", 0x10006e80, "support"),  # n-word scan
            ("exact", 0x10006ec0, "support"),  # tokenizer advance
            ("exact", 0x10006ef0, "support"),  # tokenizer advance (ret orig)
            ("exact", 0x10001170, "support"),  # StrBuffer ctor(gran)
            ("exact", 0x10001190, "support"),  # StrBuffer cleanup
            ("exact", 0x100011a0, "support"),  # StrBuffer free
            ("exact", 0x100016b0, "support"),  # StrBuffer append
            ("exact", 0x10012000, "support"),  # node-shape cleanup
            ("exact", 0x10006c00, "support"),  # linked-list free
            ("exact", 0x10006c80, "support"),  # (n+1)-slot realloc
            ("exact", 0x1000a0f0, "support"),  # __stdcall malloc alias
            ("exact", 0x1000a110, "support"),  # free alias
            ("exact", 0x1000a120, "support"),  # __cdecl malloc alias
            ("exact", 0x10007980, "support"),  # XML header state machine
            ("exact", 0x10007d10, "support"),  # prolog tokenizer
            ("exact", 0x10007dc0, "support"),  # prolog validator
            ("exact", 0x100075e0, "support"),  # version check
            ("exact", 0x100076e0, "support"),  # encoding check
            ("exact", 0x100077e0, "support"),  # standalone check
            ("exact", 0x10007ed0, "support"),  # span validator + copy
            ("exact", 0x10008be0, "support"),  # 3-chain gate
            ("exact", 0x10007f40, "support"),  # equals gate
            ("exact", 0x10008b90, "support"),  # value copy
            ("exact", 0x10008aa0, "support"),  # value scan
            ("exact", 0x10008320, "support"),  # attribute parser machine
            ("exact", 0x100082f0, "support"),  # entity dispatch
            ("exact", 0x10007f80, "support"),  # entity reference
            ("exact", 0x10008000, "support"),  # char reference
            ("exact", 0x10007e00, "support"),  # name-char validator
            ("exact", 0x10006fb0, "support"),  # entity-decoding wide copy
            ("exact", 0x10006d80, "support"),  # entity table lookup
            ("exact", 0x10006cc0, "support"),  # identifier validator 1
            ("exact", 0x10006d20, "support"),  # identifier validator 2
            ("exact", 0x10008d30, "support"),  # report sink wrapper
            ("exact", 0x10008d60, "support"),  # alt report forward
            ("exact", 0x1000cd70, "support"),  # string setter
            ("exact", 0x1000cd30, "support"),  # default wide-string path
            ("exact", 0x10009460, "support"),  # ushort binary search
            ("exact", 0x100094a0, "support"),  # char-class predicates
            ("exact", 0x10009500, "support"),  # char-class predicates
            ("exact", 0x10004070, "support"),  # guarded accessor
            ("exact", 0x100040b0, "support"),  # guarded accessor +side
            ("exact", 0x10004210, "support"),  # guarded advance
            ("exact", 0x10003640, "support"),  # dtor (CS +0x24)
            ("exact", 0x10003520, "support"),  # dtor (CS +0x28)
            ("exact", 0x10003f50, "support"),  # CS-init (ListC)
            ("exact", 0x10003fa0, "support"),  # ListC finalize
            ("exact", 0x10003170, "support"),  # Arr::get (bounds-checked)
            ("exact", 0x10006180, "support"),  # Arr tmp set
            ("exact", 0x100044d0, "support"),  # Arr::set
            ("exact", 0x10004493, "support"),  # Arr init thunk
            ("exact", 0x100044e2, "support"),  # Arr init thunk family
            ("exact", 0x10004500, "support"),  # Arr init thunk family
            # global-object registry ctors/onexit (03 C)
            ("exact", 0x10001020, "support"),  # g_10027080 ctor
            ("exact", 0x100010a0, "support"),  # g_10027080 ctor body
            ("exact", 0x100010f0, "support"),  # string bufs @+0x00/+0x98/+0x130
            ("exact", 0x10001030, "support"),  # onexit teardown
            ("exact", 0x100012f0, "support"),  # onexit teardown
            ("exact", 0x10001350, "support"),  # onexit teardown
            # everything else falls to "support" (base layer: undocumented
            # accessors/thunks + gap stepping-stones; approximate by design)
        ],
    },
    "blade": {
        "dll": "blade.dll",
        "base": 0x5E000000,
        "default": "facade",
        "rules": [
            # --- B-exports (section 1): entry + 8 DirectDraw/GetDXVB exports ---
            ("exact", 0x5E001000, "exports"),  # entry (DllMain-style dispatcher)
            ("exact", 0x5E001040, "exports"),  # DirectDrawCreate (O2)
            ("exact", 0x5E0011c0, "exports"),  # DirectDrawCreateEx (O4)
            ("exact", 0x5E0013c0, "exports"),  # DirectDrawCreateClipper (O3)
            ("exact", 0x5E0013f0, "exports"),  # DirectDrawEnumerateW (O8)
            ("exact", 0x5E001420, "exports"),  # DirectDrawEnumerateA (O5)
            ("exact", 0x5E001450, "exports"),  # DirectDrawEnumerateExW (O7)
            ("exact", 0x5E001480, "exports"),  # DirectDrawEnumerateExA (O6)
            ("exact", 0x5E0014f0, "exports"),  # EnumerateExA local callback
            ("exact", 0x5E010480, "exports"),  # GetDXVB (O1)
            # --- B-stubs (section 5): E_NOTIMPL pool ---
            ("exact", 0x5E00dfd0, "stubs"),
            ("exact", 0x5E00dfe0, "stubs"),
            ("exact", 0x5E00e010, "stubs"),
            ("exact", 0x5E00e110, "stubs"),  # 1-B empty RET
            ("exact", 0x5E00fb60, "stubs"),
            ("exact", 0x5E011080, "stubs"),
            ("exact", 0x5E0112d0, "stubs"),
            ("exact", 0x5E011860, "stubs"),  # zero global byte + E_NOTIMPL
            ("exact", 0x5E011a90, "stubs"),
            ("exact", 0x5E011aa0, "stubs"),
            ("exact", 0x5E011ab0, "stubs"),
            ("exact", 0x5E011ac0, "stubs"),
            ("exact", 0x5E011ad0, "stubs"),
            ("exact", 0x5E011ae0, "stubs"),
            ("exact", 0x5E011af0, "stubs"),
            ("exact", 0x5E011b00, "stubs"),
            ("exact", 0x5E01e720, "stubs"),  # 1-B empty RET
            # --- B-render core (sections 4.6/4.7): matrix/transform/interp
            #     math + the two BIG draw dispatchers + raster primitives ---
            ("exact", 0x5E002340, "render"),  # fast-path line
            ("exact", 0x5E0023e0, "render"),  # fast-path point
            ("exact", 0x5E003cc0, "render"),  # UV/vector transform (998 B)
            ("exact", 0x5E0040b0, "render"),  # 3x3+4x4 matrix multiply
            ("exact", 0x5E0042c0, "render"),  # color/vertex lerp primitive
            ("exact", 0x5E004490, "render"),  # vertex-split interp loops
            ("exact", 0x5E0045b0, "render"),
            ("exact", 0x5E004680, "render"),
            ("exact", 0x5E0047a0, "render"),
            ("exact", 0x5E004870, "render"),
            ("exact", 0x5E004990, "render"),
            ("exact", 0x5E004a60, "render"),  # array-loop variant
            ("exact", 0x5E004b90, "render"),
            ("exact", 0x5E004c60, "render"),
            ("exact", 0x5E004d80, "render"),
            ("exact", 0x5E004e50, "render"),
            ("exact", 0x5E004f80, "render"),
            ("exact", 0x5E005050, "render"),  # per-element transform loop
            ("exact", 0x5E005220, "render"),  # dispatcher 1
            ("exact", 0x5E005420, "render"),  # dispatcher 2
            ("exact", 0x5E0057c0, "render"),  # DrawPrimitive (15,122 B)
            ("exact", 0x5E0093a0, "render"),  # DrawIndexedPrimitive (19,306 B)
            ("exact", 0x5E00e220, "render"),  # 8->13 float record transform
            ("exact", 0x5E0121d0, "render"),  # 4x4 identity
            ("exact", 0x5E012210, "render"),  # 4x4 multiply (software rasterizer)
            ("exact", 0x5E012eb0, "render"),  # fast-path triangle raster
            # --- B-facade region (sections 2/3/4): lazy loader + pre-facade
            #     helpers + the main facade object + its methods ---
            ("va_range", (0x5E001510, 0x5E00e350), "facade"),
            # --- B-accessors (section 8): FASTCALL getter/setter family ---
            ("va_range", (0x5E00e350, 0x5E00eb00), "accessors"),
            # --- B-wrapper (sections 6/7/9): eyeliner COM wrapper + inner
            #     passthrough family + 0x2c/0x58 surface wrappers ---
            ("va_range", (0x5E00eb00, 0x5E0121d0), "wrapper"),
            # --- B-caps (section 11): caps/format machinery + render
            #     setup/accumulator cluster (incl. the FF00 block) ---
            ("va_range", (0x5E0121d0, 0x5E01e6e0), "caps"),
            # --- B-render (section 10): render-state record + 2-D line/table
            #     draw (Bresenham) + perspective transform loops ---
            ("va_range", (0x5E01e6e0, 0x5E02852d), "render"),
            # --- B-crt (section 12): statically-linked CRT + startup +
            #     locale + EH/entry (0x2B453-0x35000, ~153 files) ---
            ("va_range", (0x5E02b453, 0x5E035000), "crt"),
            # everything else falls to "facade" (undocumented glue + gap
            # stepping-stones; approximate by design)
        ],
    },
    "gundll": {
        "dll": "GunDll.dll",
        "base": 0x10000000,
        "default": "objects",
        "rules": [
            # Priority-ordered because the documented system ranges overlap.
            # --- G-crt (S14 CRT-internal bucket + S15 SEH funclets): the tail
            #     0x37000-0x49000 is CRT/startup/locale + $unwind$ funclets ---
            ("va_range", (0x10037000, 0x10049000), "crt"),
            # --- G-sockets (S7): sockets + COM-device P2P lobby layer ---
            ("va_range", (0x100303e0, 0x10037000), "sockets"),
            # --- G-locks (S13): locks / queue / Interlocked primitives ---
            ("va_range", (0x1002f210, 0x1002fc00), "locks"),
            # --- G-parser (S11): tokenizer/parser family (exact 0x2d0b0 sits
            #     inside the codec range; region 0x2e2a0-0x2eee0) ---
            ("exact", 0x1002d0b0, "parser"),
            ("va_range", (0x1002e2a0, 0x1002eee0), "parser"),
            # --- G-codec (S12): codec / HTML-escape / string-table serial ---
            ("va_range", (0x1002af80, 0x1002e2a0), "codec"),
            # --- G-config (S10): config-query singletons + init guards ---
            ("exact", 0x10008dc0, "config"),
            ("exact", 0x1001c490, "config"),
            ("va_range", (0x1001a550, 0x1001ad90), "config"),
            # --- G-hashlist (S4b): hash-list/string-table family tail ---
            ("va_range", (0x1001b000, 0x1001c2d0), "hashlist"),
            # --- G-objects (S9): command/event object hierarchy (the big one) ---
            ("va_range", (0x1000cba0, 0x1002af80), "objects"),
            # --- G-pool (S5): node pool + byte blob / "ZmMe" heap ---
            ("va_range", (0x1000c000, 0x1000c730), "pool"),
            # --- G-crypto (S3): CryptoAPI layer ---
            ("va_range", (0x10007470, 0x10007fb0), "crypto"),
            # --- G-http (S6): WinINet HTTP client ---
            ("exact", 0x10002d80, "http"),
            ("va_range", (0x100080d0, 0x100089c0), "http"),
            # --- G-registry (S8): object-registration / SEH-guarded handlers
            #     (inside the hashlist range -> must precede it) ---
            ("va_range", (0x100030f0, 0x100046f0), "registry"),
            # --- G-hashlist (S4a): hash-list/string-table family head ---
            ("va_range", (0x10002a00, 0x10007470), "hashlist"),
            # --- G-string (S2): Wide/MultiByte + registry/GUID string helpers ---
            ("va_range", (0x10001450, 0x10002790), "string"),
            # --- G-exports (S1): COM exports / class-factory / registration ---
            ("exact", 0x10002360, "exports"),  # S1 extra (inside string range)
            ("va_range", (0x10001000, 0x10001450), "exports"),
            # everything else falls to "objects" (undocumented glue + gap
            # stepping-stones; approximate by design). The 5 named root sources
            # (CRect.c, DllCanUnloadNow.c, DllGetClassObject.c,
            # DllRegisterServer.c, DllUnregisterServer.c) stay at module root.
        ],
    },
}


def va_of_file(fn, exports):
    m = re.fullmatch(r"func_([0-9a-fA-F]{8})\.c", fn)
    if m:
        return int(m.group(1), 16)
    # named export source (e.g. GetngLogAPI.c) -> VA from exports.csv
    for va, (nm, ord_) in exports.items():
        if fn[:-2] == nm or fn[:-2].lower() == nm.lower():
            return va
    return None


def load_exports(key):
    out = {}
    p = os.path.join(ROOT, "build", "ghidra", "modules", key, "dumps", "exports.csv")
    if not os.path.isfile(p):
        return out
    with open(p, newline="") as f:
        for r in csv.DictReader(f):
            try:
                out[int(r["rva"], 16)] = (r["name"], r.get("ordinal", "?"))
            except (KeyError, ValueError):
                pass
    return out


def classify(cfg, va, fn, head):
    for rule in cfg["rules"]:
        kind = rule[0]
        if kind == "exact":
            if va == rule[1]:
                return rule[2], "exact"
        elif kind == "va_range":
            lo, hi = rule[1]
            if va is not None and lo <= va < hi:
                return rule[2], "va_range"
        elif kind == "name":
            if re.search(rule[1], fn):
                return rule[2], "name"
        elif kind == "keyword":
            if rule[1] in head:
                return rule[2], "keyword"
    return cfg["default"], "default"


def main():
    key = sys.argv[1] if len(sys.argv) > 1 else "zloglib"
    if key not in CONFIG:
        print("no config for %r; add a CONFIG entry (keys: %s)"
              % (key, sorted(CONFIG)))
        return 2
    cfg = CONFIG[key]
    exports = load_exports(key)
    src_dir = os.path.join(SRC_ROOT, TARGET.get(key, key))
    rows = []
    for root, dirs, files in os.walk(src_dir):
        for fn in sorted(files):
            if not (fn.startswith("func_") or fn == "GetngLogAPI.c"):
                continue
            if not fn.endswith(".c"):
                continue
            path = os.path.join(root, fn)
            va = va_of_file(fn, exports)
            head = ""
            try:
                with open(path, "r", encoding="utf-8", errors="replace") as f:
                    head = "".join(f.readlines()[:8])
            except Exception:
                pass
            sub, reason = classify(cfg, va, fn, head)
            rel = os.path.relpath(path, src_dir)
            rows.append([hex(va) if va is not None else "", rel, sub, reason])

    os.makedirs(OUT_DIR, exist_ok=True)
    out = os.path.join(OUT_DIR, "%s.csv" % key)
    with open(out, "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["va", "file", "subsystem", "reason"])
        w.writerows(sorted(rows, key=lambda r: (r[2], r[1])))
    from collections import Counter
    per = Counter(r[2] for r in rows)
    print("== %s subsystem distribution (%d files) ==" % (key, len(rows)))
    for k, v in per.most_common():
        print("  %-10s %6d" % (k, v))
    print("wrote %s" % out)


if __name__ == "__main__":
    raise SystemExit(main())
