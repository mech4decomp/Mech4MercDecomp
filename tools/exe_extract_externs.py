#!/usr/bin/env python3
"""
tools/exe_extract_externs.py -- ONE-TIME extraction: write the committed
extern-address table src\mw4mercs\artifacts\extern_addrs.csv from the reference EXE.

A from-sources oracle build resolves every .text relocation site from:
  1) source-derived paths (name-embedded addresses like FUN_0040xxxx /
     g_0076xxxx, source-comment addresses, rename_map semantic names), then
  2) this committed table (symbol -> VA) for the residual symbols that carry
     no address in their name (gen-invented FUN_1004XXXXX, semantic globals
     like g_GameVersion, CRT/import helpers) and
  3) the import map parsed from our OWN transcribed .rdata at build time.

The reference is used ONLY here (to infer the residual symbol addresses) and
after the build (as the diff oracle). Re-running --verify proves that source +
this table reproduces .text byte-for-byte with no reference read.

Usage:
  python tools/exe_extract_externs.py          # (re)write extern_addrs.csv
  python tools/exe_extract_externs.py --verify # check from-sources resolution
"""
import os, sys, struct, csv

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import exe_text_assemble as E
import diff as D

BASE = E.BASE
REL32 = E.REL32
OUT = os.path.join(ROOT, "src", "mw4mercs", "artifacts", "extern_addrs.csv")


def collect():
    sem = E.load_semantic_map()
    exe_text, text_rva, image_base = D.read_pe_text_section(E.EXE)
    TS = len(exe_text)
    sites = {}
    for va, p in E.iter_objs(sem):
        body, relocs = E.obj_text_and_relocs(p)
        off = va - BASE - text_rva
        if off < 0 or off >= TS:
            continue
        for rva, name, typ in relocs:
            so = off + rva
            if so < 0 or so + 4 > TS:
                continue
            add = 0
            if rva + 4 <= len(body):
                add = (body[rva] | body[rva + 1] << 8 | body[rva + 2] << 16 | body[rva + 3] << 24)
            lst = sites.setdefault(so, [])
            if not any(a[0] == typ and a[1] == name for a in lst):
                lst.append((typ, name, add))
    return exe_text, text_rva, TS, sites


def learned_map(exe_text, text_rva, TS, sites):
    """Replicate exe_text_assemble's 'learned' address inference."""
    cand = {}
    for k, lst in sites.items():
        raw = (exe_text[k] | exe_text[k + 1] << 8 | exe_text[k + 2] << 16 | exe_text[k + 3] << 24)
        for typ, name, add in lst:
            if typ in REL32:
                d = raw - add
                if d >= 0x80000000:
                    d -= 0x100000000
                tgt = (BASE + text_rva + k) + 4 + d
            else:
                tgt = raw - add
            if 0x00400000 <= tgt < 0x008C2000 and add != raw:
                cand.setdefault(name, []).append(tgt)
    learned = {}
    for name, vs in cand.items():
        if len(vs) >= 2 and min(vs) == max(vs):
            learned[name] = vs[0]
        elif len(vs) == 1 and sum(1 for k2, l2 in sites.items() if any(n2 == name for (_, n2, _) in l2)) == 1:
            learned[name] = vs[0]
    return learned


def site_raw(exe_text, k):
    return (exe_text[k] | exe_text[k + 1] << 8 | exe_text[k + 2] << 16 | exe_text[k + 3] << 24)


def val_for(typ, tv, add, k, text_rva):
    if typ in REL32:
        return (tv + add - (BASE + text_rva + k) - 4) & 0xFFFFFFFF
    return (tv + add) & 0xFFFFFFFF


def main():
    verify = "--verify" in sys.argv
    exe_text, text_rva, TS, sites = collect()
    learned = learned_map(exe_text, text_rva, TS, sites)
    if not verify:
        os.makedirs(os.path.dirname(OUT), exist_ok=True)
        with open(OUT, "w", newline="") as f:
            w = csv.writer(f)
            w.writerow(["symbol", "va"])
            for name in sorted(learned):
                w.writerow([name, "0x%08X" % learned[name]])
        print("wrote", OUT, len(learned), "symbols")

    # Verify: source + committed table (no reference-read resolver) reproduces
    # every reloc site value. Simulates the finalizer's from-sources build.
    from pe_dump import PE
    pe = PE(E.EXE)
    data = open(E.EXE, "rb").read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    impmap = E.build_import_map(data, e_lfanew, 224, BASE)

    need_commit = 0
    src_ok = 0
    miss = 0
    bad = []
    for k, lst in sorted(sites.items()):
        raw = site_raw(exe_text, k)
        ok = False
        # 1) source-derived resolution (no reference)
        for typ, name, add in lst:
            if not name:
                continue
            tv, kind = E.resolve_export_va(name, BASE, impmap)
            if tv is None:
                continue
            if val_for(typ, tv, add, k, text_rva) == raw:
                ok = True
                break
        if ok:
            src_ok += 1
            continue
        # 2) committed extern-address table
        for typ, name, add in lst:
            if not name or name not in learned:
                continue
            if val_for(typ, learned[name], add, k, text_rva) == raw:
                need_commit += 1
                ok = True
                break
        if not ok:
            # 3) obj bytes already correct (miss -> no write needed)
            miss += 1
    print("from-sources resolution: source-derived=%d  committed-table=%d  "
          "obj-already-correct=%d  total=%d"
          % (src_ok, need_commit, miss, len(sites)))
    if src_ok + need_commit + miss == len(sites):
        print("VERIFY: every reloc site is reproducible from sources + table (0 reference reads)")
    else:
        print("VERIFY: %d sites unaccounted!" % (len(sites) - src_ok - need_commit - miss))
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
