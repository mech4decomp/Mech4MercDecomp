#!/usr/bin/env python3
"""
tools/text_assemble.py -- place transcribed obj bytes at reference .text RVAs and
measure byte fidelity. Relocation-bearing bytes (each obj's own reloc records,
type 0x14 REL32 / 0x06 DIR32NB etc.) are masked by default: those become exact
once reference data placement is reproduced.

--nomasks : resolve every reloc site instead of masking. Each obj's COFF reloc
  names a target symbol; we decode the intended reference VA from the name
  (FUN_<hex> / g_<hex> / g_str_<hex> / g_vtable_<hex> / g_jump_<hex> /
  short-rva forms / semantic import names -> .idata IAT slot) and compare the
  resolved imm32/rel32 against the reference bytes. Verdicts:
      resolved-match    the symbol's intended VA equals the reference value
      resolved-mismatch REAL discrepancy (wrong extern / missing data layout)
      unresolved        name has no known mapping (feed into layout work)
  Also writes build/modules/<key>/resolve.csv -- the per-module layout map
  (every extern symbol the .text references -> its reference VA), which is the
  P0 deliverable for the data/RE job.

Usage: python tools/text_assemble.py [key] [--nomasks] [--quiet]
"""
import glob, os, re, struct, sys, csv

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

BASER = {
    "mw4stats": ("MW4Stats.dll", 0x10000000),
    "blade": ("blade.dll", 0x5E000000),
    "zloglib": ("ZlogLib.dll", 0x10000000),
    "language": ("Language.dll", 0x10000000),
    "missionlang": ("MissionLang_MERCS.dll", 0x10000000),
    "gundll": ("GunDll.dll", 0x10000000),
}

CSVROOT = os.path.join(ROOT, "build", "ghidra", "modules")


def csv_name_map(key):
    """functions.csv name -> entry VA, for semantic-named (non-func_) objs."""
    m = {}
    candidates = [
        os.path.join(ROOT, "reference", "functions", "%s.csv" % key),
        os.path.join(CSVROOT, key, "dumps", "functions.csv"),
    ]
    p = next((q for q in candidates if os.path.isfile(q)), None)
    if p is None:
        return m
    with open(p, newline="") as f:
        for r in csv.DictReader(f):
            nm = r.get("name", "")
            if not nm or nm in m:
                continue
            try:
                m[nm] = int(r["entry"], 16)
            except (KeyError, ValueError):
                pass
    return m


def iter_text_objs(key):
    """Yield (va, objpath) for every .text obj: func_<hex>.obj plus any
    semantic-named objs (Dll*.obj, CRect.obj ...) whose basename maps to a
    functions.csv entry VA."""
    objdir = os.path.join(ROOT, "build", "modules", key, "obj")
    for p in sorted(glob.glob(os.path.join(objdir, "func_*.obj"))):
        yield int(os.path.basename(p)[5:-4], 16), p
    name2va = csv_name_map(key)
    for p in sorted(glob.glob(os.path.join(objdir, "*.obj"))):
        b = os.path.basename(p)
        if b.startswith(("func_", "data_")):
            continue
        nm = b[:-4]
        if nm in name2va:
            yield name2va[nm], p

DIR32 = 0x14
MASK_TYPES = (6, 7, 10, 11, 0x14)
ABS_TYPES = (6, 7, 10, 11)          # value = target VA (raw)
REL32_TYPES = (0x14,)               # value = target VA - siteVA - 4


def obj_text_and_relocs(obj):
    """Return (body, relocs) where relocs is a list of (rva_in_obj, sym_name, type)."""
    d = open(obj, "rb").read()
    mach, ns, _, pst, nsym, osize, _ = struct.unpack_from("<HHIIIHH", d, 0)
    sh = 20 + osize
    symtab = pst
    strtab = symtab + nsym * 18
    body = b""
    relocs = []
    for i in range(ns):
        o = sh + i * 40
        name = d[o:o + 8]
        if not name.startswith(b".text"):
            continue
        rsize = struct.unpack_from("<I", d, o + 16)[0]
        rp = struct.unpack_from("<I", d, o + 20)[0]
        reloc_p = struct.unpack_from("<I", d, o + 24)[0]
        reloc_n = struct.unpack_from("<H", d, o + 32)[0]
        body += d[rp:rp + rsize]
        for k in range(reloc_n):
            ro = reloc_p + k * 10
            rva, symi, typ = struct.unpack_from("<IIH", d, ro)
            relocs.append((rva, coff_symbol_name(d, symtab, strtab, symi), typ))
    return body, relocs


def coff_symbol_name(d, symtab, strtab, symi):
    try:
        s = symtab + symi * 18
        nm = d[s:s + 4]
        if nm == b"\x00\x00\x00\x00":
            off = struct.unpack_from("<I", d, s + 4)[0]
            e = d.index(b"\x00", strtab + off)
            return d[strtab + off:e].decode("latin1", "replace")
        e = d.find(b"\x00", s, s + 8)
        if e < 0:
            e = s + 8
        return d[s:e].decode("latin1", "replace")
    except Exception:
        return "?"


HEX_RE = re.compile(r"^(?:FUN_|@FUN_|g_|g_str_|g_jump_|g_vtable_)([0-9a-fA-F]+)(?:p|fn|_global|_fn|_self)?$")
HEXF_RE = re.compile(r"^(?:FUN_|@FUN_|g_|g_str_|g_jump_|g_vtable_)([0-9a-fA-F]+)p$")
BARE_RE = re.compile(r"^([0-9a-fA-F]{4,})(?:p|fn|_global|_fn)?$")
SEMHEX_RE = re.compile(r"^g_(.*)_([0-9a-fA-F]{8})$")
SEM_RE = re.compile(r"^g_(.+)$")


def decode_export_va(name, base):
    """Return (va, kind, norm) for a reloc target symbol name, or None."""
    if not name:
        return None
    n = name
    if n.startswith("__imp_"):
        n = n[6:]
    elif n.startswith("_"):
        n = n[1:]
    # strip stdcall @N
    n = re.sub(r"@\d+$", "", n)
    if n == "operator_delete":
        return None, "import", "??3@YAXPAX@Z"
    m = HEX_RE.match(n)
    if m:
        v = int(m.group(1), 16)
        if v < base:
            v += base
        kind = "func" if n.startswith("FUN_") else "data"
        return v, kind, n
    m = HEXF_RE.match(n)
    if m:
        # pointer-array member externs (write_data_runs "p" suffix)
        v = int(m.group(1), 16)
        if v < base:
            v += base
        return v, "data", n
    m = BARE_RE.match(n)
    if m:
        v = int(m.group(1), 16)
        if v < base:
            v += base
        return v, "data", n
    m = SEMHEX_RE.match(n)
    if m:
        v = int(m.group(2), 16)
        if v < base:
            v += base
        return v, "data", n
    m = SEM_RE.match(n)
    if m:
        return None, "import", m.group(1).replace("g_", "")
    return None, "other", n


def build_import_map(pe, base):
    """name -> IAT VA, from the reference import directory (FirstThunk arrays)."""
    imp_rva = struct.unpack_from("<I", pe.data, pe.data_dir_off + 1 * 8)[0]
    out = {}
    if not imp_rva:
        return out
    o0 = pe.r2o(imp_rva)
    i = 0
    while True:
        o = o0 + i * 20
        trailer = struct.unpack_from("<I", pe.data, o)[0]
        if trailer == 0:
            break
        ft = struct.unpack_from("<I", pe.data, o + 16)[0]
        iat = base + ft
        fo = pe.r2o(ft)
        j = 0
        while fo is not None:
            v = struct.unpack_from("<I", pe.data, fo + j * 4)[0]
            if v == 0:
                break
            if v & 0x80000000:
                nm = "#%d" % (v & 0xffff)
            else:
                no = pe.r2o(v)
                e2 = pe.data.index(b"\x00", no + 2)
                nm = pe.data[no + 2:e2].decode("latin1")
            out.setdefault(nm, iat + j * 4)
            j += 1
        i += 1
    return out


def main():
    argv = [a for a in sys.argv[1:] if not a.startswith("--")]
    nomasks = "--nomasks" in sys.argv
    quiet = "--quiet" in sys.argv
    key = argv[0] if argv else "mw4stats"
    dll, base = BASER[key]
    from pe_dump import PE
    pe = PE(os.path.join(ROOT, "reference", dll))
    text = next(s for s in pe.secs if s["name"] == ".text")
    TR, TW, TS = text["rva"], text["rp"], text["vs"]
    ref = pe.data[TW:TW + TS]

    ours = [None] * TS
    mask = [False] * TS
    funcs = 0
    # for --nomasks: site->(intended_va, kind, name)
    sites = {}
    impmap = build_import_map(pe, base)
    for va, p in iter_text_objs(key):
        try:
            body, relocs = obj_text_and_relocs(p)
        except Exception:
            continue
        if not body:
            continue
        off = va - base - TR
        funcs += 1
        for k in range(len(body)):
            if off + k >= TS:
                break
            ours[off + k] = body[k]
        for rva, name, typ in relocs:
            so = off + rva
            if so < 0 or so + 4 > TS:
                continue
            mask[so] = mask[so + 1] = mask[so + 2] = mask[so + 3] = True
            dec = decode_export_va(name, base)
            if dec is None:
                sites.setdefault(so, []).append((None, typ, name))
                continue
            va_t, kind, norm = dec
            if va_t is None and kind == "import":
                # bare CRT names often map to MSVCRT's underscore-decorated export
                if norm in impmap:
                    va_t = impmap[norm]
                elif "_" + norm in impmap:
                    va_t = impmap["_" + norm]
            lst = sites.setdefault(so, [])
            # dedupe identical (name,type) reloc records some objs emit twice
            if not any(True for a in lst if a[1] == typ and a[2] == name):
                lst.append((va_t, typ, name))

    tot = TS
    matched = masked = mismatch = pending = 0
    for k in range(tot):
        if ours[k] is None:
            pending += 1
        elif mask[k]:
            masked += 1
        elif ours[k] == ref[k]:
            matched += 1
        else:
            mismatch += 1

    resolved, unres, mism = _resolve_all(sites, ours, ref, base, TR)

    print("== %s .text fidelity (%d bytes, %d transcribed funcs placed) ==" % (key, tot, funcs))
    for nm, v in (("matched", matched), ("masked", masked), ("mismatch", mismatch), ("pending", pending)):
        print("  %-8s %7d bytes (%6.2f%%)" % (nm, v, 100.0 * v / tot))
    if nomasks:
        print("== %s reloc resolution over the %d masked bytes ==" % (key, masked))
        print("  %-22s %7d bytes" % ("resolved-match", resolved))
        print("  %-22s %7d bytes" % ("resolved-mismatch", mism))
        print("  %-22s %7d bytes" % ("unresolved", unres))
        _write_resolve_csv(key, sites, ours, ref, base, TR, impmap)
    if not quiet:
        shown = 0
        for k in range(tot):
            if ours[k] is not None and not mask[k] and ours[k] != ref[k]:
                print("    first code mismatch at offset 0x%x (va 0x%x): ours=%02x ref=%02x"
                      % (k, base + TR + k, ours[k], ref[k]))
                shown += 1
                if shown >= 8:
                    break
    return 0 if (nomasks and mism == 0 and unres == 0) or not nomasks else 1


def _resolve_all(sites, ours, ref, base, TR):
    """Resolve every 4-byte reloc field once; return (resolved, unresolved, mismatched) byte totals.

    The reference value at a reloc site is the linked result of
    (symbol VA + obj-stored displacement). MSVC6 records `[sym+disp]` memory
    operands with the displacement stored at the site and a relocation naming
    the base symbol -- so we must add the obj's own 4 bytes (disp) back in:
        ABS   : v = target_VA + disp
        REL32 : v = target_VA + disp - (site_VA + 4)
    """
    resolved = unres = mism = 0
    for k, lst in sites.items():
        disp = ((ours[k] if ours[k] is not None else 0)
                | (ours[k + 1] if ours[k + 1] is not None else 0) << 8
                | (ours[k + 2] if ours[k + 2] is not None else 0) << 16
                | (ours[k + 3] if ours[k + 3] is not None else 0) << 24)
        for va_t, typ, name in lst:
            if va_t is None:
                unres += 4
                continue
            target = va_t
            if typ in REL32_TYPES:
                v = (target + disp - (base + TR + k) - 4) & 0xFFFFFFFF
            else:
                v = (target + disp) & 0xFFFFFFFF
            raw = ref[k] | (ref[k + 1] << 8) | (ref[k + 2] << 16) | (ref[k + 3] << 24)
            if v == raw:
                resolved += 4
            else:
                mism += 4
    return resolved, unres, mism


def _write_resolve_csv(key, sites, ours, ref, base, TR, impmap):
    import csv
    outd = os.path.join(ROOT, "build", "modules", key, "obj")
    if not os.path.isdir(outd):
        return
    seen = {}
    for k in sorted(sites):
        disp = ((ours[k] if ours[k] is not None else 0)
                | (ours[k + 1] if ours[k + 1] is not None else 0) << 8
                | (ours[k + 2] if ours[k + 2] is not None else 0) << 16
                | (ours[k + 3] if ours[k + 3] is not None else 0) << 24)
        for va_t, typ, name in sites[k]:
            if va_t is None:
                dec = decode_export_va(name, base)
                norm = dec[2] if dec else name
                if norm in impmap or "_" + norm in impmap:
                    verdict = "import-iat"
                else:
                    verdict = "unresolved"
            else:
                norm = name
                raw = ref[k] | (ref[k + 1] << 8) | (ref[k + 2] << 16) | (ref[k + 3] << 24)
                if typ in REL32_TYPES:
                    v = (va_t + disp - (base + TR + k) - 4) & 0xFFFFFFFF
                else:
                    v = (va_t + disp) & 0xFFFFFFFF
                verdict = "match" if v == raw else "MISMATCH"
            seen.setdefault(norm, [va_t, verdict, 0])
            seen[norm][2] += 1
    with open(os.path.join(outd, "resolve.csv"), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["symbol", "expected_va", "verdict", "sites"])
        for nm in sorted(seen):
            w.writerow([nm, ("0x%08x" % seen[nm][0]) if seen[nm][0] else "", seen[nm][1], seen[nm][2]])
    print("  wrote %s/resolve.csv (%d symbols)" % (outd, len(seen)))


if __name__ == "__main__":
    raise SystemExit(main())

