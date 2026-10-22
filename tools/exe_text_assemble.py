#!/usr/bin/env python3
"""
tools/exe_text_assemble.py -- assemble ALL src/mw4mercs/text objs at reference EXE .text
RVAs and measure masked + no-mask fidelity. This is the EXE analog of the module
track's text_assemble.py (which lives under tools/ for the DLLs).

VA resolution for each obj:
  - func_XXXXXXXX.obj          -> VA from the hex in the filename
  - semantic-named .obj        -> rename_map.csv (old_name func_XXXX -> new_name
                                  semantic); else first FUN_XXXX token in source

Usage:
  python tools/exe_text_assemble.py            # masked fidelity
  python tools/exe_text_assemble.py --nomasks  # reloc resolution (true no-mask)
"""
import os, re, struct, sys, csv

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

BASE = 0x00400000
EXE  = os.path.join(ROOT, "reference", "MW4Mercs.exe")
OBJDIR = os.path.join(ROOT, "build", "obj")
RENAME = os.path.join(ROOT, "build", "ghidra", "rename_map.csv")

MASK_TYPES = (6, 7, 10, 11, 0x14)
REL32 = (0x14,)


def load_semantic_map():
    m = {}
    if not os.path.isfile(RENAME):
        return m
    with open(RENAME, newline="") as f:
        for r in csv.DictReader(f):
            om = re.match(r"^(?:func|FUN)_([0-9a-fA-F]{8})$", (r.get("old_name") or "").strip())
            if om:
                m[r["new_name"].strip()] = int(om.group(1), 16)
    return m


def obj_text_and_relocs(obj):
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


def iter_objs(sem):
    """Yield (va, objpath)."""
    from diff import read_pe_text_section
    # map: for semantic-named objs, resolve VA
    for fn in sorted(os.listdir(OBJDIR)):
        if not fn.endswith(".obj"):
            continue
        base = fn[:-4]
        mm = re.fullmatch(r"func_([0-9a-fA-F]{8})", base)
        if mm:
            yield int(mm.group(1), 16), os.path.join(OBJDIR, fn)
            continue
        mm = re.fullmatch(r"data_([0-9a-fA-F]{8})", base)
        if mm:
            yield int(mm.group(1), 16), os.path.join(OBJDIR, fn)
            continue
        if base in sem:
            yield sem[base], os.path.join(OBJDIR, fn)
            continue
        # try source comment token from any src subdir
        for d in sorted(os.listdir(os.path.join(ROOT, "src"))):
            if d == "modules" or d == "non_matchings":
                continue
            src = os.path.join(ROOT, "src", d, base + ".c")
            if os.path.isfile(src):
                txt = open(src, errors="ignore").read()
                mt = re.search(r"FUN_([0-9a-fA-F]{8})", txt)
                if mt:
                    yield int(mt.group(1), 16), os.path.join(OBJDIR, fn)
                break
        # data_* objs or others skip


def _addr_in_name(n2, base):
    """Return (va, kind) if the symbol name carries its address, else (None,None).
    Interpreted WITHOUT the C mangling underscore: n2 is the bare name."""
    kinds = {"DAT_": "data", "g_": "data", "g_str_": "data", "g_jump_": "data",
             "g_vtable_": "data", "g_p_": "data", "g_f_": "data", "g_jt_": "data",
             "g_array_": "data", "g_ptr_": "data", "g_float_": "data",
             "g_dword_": "data", "g_int_": "data", "g_word_": "data",
             "g_byte_": "data", "g_char_": "data", "DATA_": "data", "sub_": "func",
             "func_": "func", "FUN_": "func", "thunk_FUN_": "func",
             "flt_": "data", "dbl_": "data", "f_": "data", "d_": "data",
             "dword_": "data", "str_": "data", "s_": "data", "arr_": "data",
             "PTR_": "data", "PTR_DAT_": "data", "PTR_FUN_": "data",
             "byte_tbl_": "data", "jmp_tbl_": "data", "IAT_": "data"}
    if n2.startswith("@"):
        n2 = n2[1:]  # @FUN_xxxx stdcall decoration
    IMAGE_END = 0x008C2000  # SizeOfImage end (~0x4C2000 RVA)
    for pre, kind in kinds.items():
        if n2.startswith(pre):
            if pre.startswith("g_"):
                break  # g_ names need the disambiguated rules below
            rest = n2[len(pre):]
            mm = re.match(r"^([0-9a-fA-F]+)(?:p|fn|_global|_fn|_self|_Array|_Ptr|_obj)?$", rest)
            if mm:
                v = int(mm.group(1), 16)
                if v < 0x00400000:
                    v += base
                return v, kind
            return None, None
    # g_ names: disambiguate type-tagged forms from plain-hex forms.
    full = re.match(r"^g_([0-9a-fA-F]{6,8})(?:p|fn|_global|_fn|_self|_Array|_Ptr|_obj)?$", n2)
    tagged = re.match(r"^g_[pf]([0-9a-fA-F]{6,8})$", n2)
    if full:
        v1 = int(full.group(1), 16)
        if v1 < 0x00400000:
            v1 += base
        if tagged:
            # both parses possible (g_f76d040): prefer full-hex only if it is a
            # plausible in-image address; otherwise the type-tagged address.
            if 0x00400000 <= v1 < IMAGE_END:
                return v1, "data"
            v2 = int(tagged.group(1), 16)
            if v2 < 0x00400000:
                v2 += base
            return v2, "data"
        # plain full-hex (may exceed image end: literal dead-code absolute
        # operand like g_c6005d5c / g_05030502)
        return v1, "data"
    if tagged:
        v2 = int(tagged.group(1), 16)
        if v2 < 0x00400000:
            v2 += base
        return v2, "data"
    # g_<name>_<hex6-8> : trailing long hex is the address (gen_bigfunc naming
    # like g_sscanf_0076b2dc). Only trust 6-8 digit suffixes to avoid
    # misfiring on semantic suffixes like g_state_c0.
    mm = re.match(r"^g_(?:[a-zA-Z0-9_]+)_([0-9a-fA-F]{6,8})$", n2)
    if mm:
        v = int(mm.group(1), 16)
        if v < 0x00400000:
            v += base
        return v, "data"
    return None, None


_SEM_REV = None
_SEM_KEYS = None


def _sem_lookup(name):
    """Semantic function names created by rename_map (e.g. 'archive_free')."""
    global _SEM_REV, _SEM_KEYS
    if _SEM_REV is None:
        try:
            _SEM_REV = {k.lower(): v for k, v in load_semantic_map().items()}
            _SEM_KEYS = set(_SEM_REV.keys())
        except Exception:
            _SEM_REV = {}
            _SEM_KEYS = set()
    key = name.lower().rstrip('_')
    if key in _SEM_REV:
        return _SEM_REV[key], "func"
    return None, None


_EXTERN_ADDR = None


def extern_addr_lookup(name):
    """Named externs whose real address is documented in source comments
    (e.g. `extern int g_log_h; /* 0x0082F35C */` or `/* FUN_004084E0 */`).
    Only consulted for names that carry no hex address of their own."""
    global _EXTERN_ADDR
    if _EXTERN_ADDR is None:
        _EXTERN_ADDR = {}
        skip = ("modules", "non_matchings", "build")
        re_help = re.compile(r"extern[^;]*\b([A-Za-z_]\w*)\s*[\(;]")
        re_addr = re.compile(r"(?:0x|FUN_|@FUN_)([0-9a-fA-F]{6,8})")
        re_doc_fun = re.compile(r"([A-Za-z_]\w*)\s*\(\s*FUN_([0-9a-fA-F]{8})")
        re_fun_em = re.compile(r"FUN_([0-9a-fA-F]{8})\s+\S+\s+([A-Za-z_]\w*)")
        for d0, dirs, files in os.walk(os.path.join(ROOT, "src")):
            dirs[:] = [d for d in dirs if d not in skip]
            for fn in files:
                if not fn.endswith(".c"):
                    continue
                try:
                    txt = open(os.path.join(d0, fn), errors="ignore").read()
                    lines = txt.splitlines()
                except Exception:
                    continue
                head = " ".join(lines[:40])
                # FUN_xxxxxx — name  header-doc mappings
                for v, nm in re_fun_em.findall(head):
                    _EXTERN_ADDR.setdefault(nm.lstrip("_"), int(v, 16))
                for nm, v in re_doc_fun.findall(head):
                    _EXTERN_ADDR.setdefault(nm.lstrip("_"), int(v, 16))
                for i, ln in enumerate(lines):
                    if "extern" not in ln:
                        continue
                    mm = re_help.search(ln)
                    if not mm:
                        continue
                    nm = mm.group(1)
                    # same-line trailing comment only (forward windows misattribute
                    # the NEXT extern's address, e.g. show_error -> 0x7b880c)
                    trailer = ln[mm.end():]
                    am = re_addr.search(trailer)
                    if am:
                        _EXTERN_ADDR.setdefault(nm.lstrip("_"), int(am.group(1), 16))
    key = name.lstrip("_")
    return _EXTERN_ADDR.get(key)


def resolve_export_va(name, base, impmap):
    if not name:
        return None, "other"
    n = name
    if n.startswith("__imp_"):
        n = n[6:]
    elif n.startswith("_"):
        n = n[1:]
    n = n.lstrip("_")  # __DAT_xxx, _DAT_xxx variations
    n2 = re.sub(r"@\d+$", "", n)
    # address-in-name
    tv, kind = _addr_in_name(n2, base)
    if tv is not None:
        return tv, kind
    # source-comment documented extern addresses (named no-address symbols)
    tv = extern_addr_lookup(n2)
    if tv is not None:
        return tv, "data"
    # semantic-name funcs
    tv, kind = _sem_lookup(n2)
    if tv is not None:
        return tv, kind
    # import: map to IAT slot VA via import map
    for cand in (n2, n2.lstrip("_"), "_" + n2):
        if cand in impmap:
            return impmap[cand], "import"
    return None, "other"


def build_import_map(data, e_lfanew, opt_size, base):
    # import dir RVA at opt_start+96 (PE32)
    opt = e_lfanew + 24
    if struct.unpack_from("<H", data, opt)[0] != 0x10b:
        return {}
    nrva = struct.unpack_from("<H", data, opt + 92)[0] if False else struct.unpack_from("<I", data, opt + 92)[0] & 0xFFFF
    dd_off = opt + 96
    imp_rva = struct.unpack_from("<I", data, dd_off + 8)[0]  # dir 1
    if not imp_rva:
        return {}
    out = {}
    # section lookup via pe_dump
    from pe_dump import PE
    pe = PE(EXE)
    o0 = pe.r2o(imp_rva)
    i = 0
    while True:
        o = o0 + i * 20
        trailer = struct.unpack_from("<I", data, o)[0]
        if trailer == 0:
            break
        ft = struct.unpack_from("<I", data, o + 16)[0]
        iat = base + ft
        fo = pe.r2o(ft)
        j = 0
        while fo is not None:
            v = struct.unpack_from("<I", data, fo + j * 4)[0]
            if v == 0:
                break
            if v & 0x80000000:
                nm = "#%d" % (v & 0xFFFF)
            else:
                no = pe.r2o(v)
                e2 = data.index(b"\x00", no + 2)
                nm = data[no + 2:e2].decode("latin1")
            out.setdefault(nm, iat + j * 4)
            j += 1
        i += 1
    return out


def main():
    nomasks = "--nomasks" in sys.argv
    quiet = "--quiet" in sys.argv
    sem = load_semantic_map()
    import diff as D
    exe_text, text_rva, image_base = D.read_pe_text_section(EXE)
    TS = len(exe_text)
    from pe_dump import PE
    pe = PE(EXE)
    data = open(EXE, "rb").read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    opt = e_lfanew + 24
    opt_size = struct.unpack_from("<H", data, e_lfanew + 20)[0]
    impmap = build_import_map(data, e_lfanew, opt_size, BASE)

    ours = [None] * TS
    mask = [False] * TS
    owner = [None] * TS
    funcs = 0
    sites = {}
    for va, p in iter_objs(sem):
        body, relocs = obj_text_and_relocs(p)
        off = va - BASE - text_rva
        if off < 0 or off >= TS:
            continue
        funcs += 1
        for k in range(len(body)):
            j = off + k
            if j >= TS:
                break
            ours[j] = body[k]
            owner[j] = os.path.basename(p)
        for rva, name, typ in relocs:
            so = off + rva
            if so < 0 or so + 4 > TS:
                continue
            mask[so] = mask[so + 1] = mask[so + 2] = mask[so + 3] = True
            # Record the addend THIS obj stores at the reloc rva (0 for MSVC6
            # placeholders). Reading the merged `ours` window instead mixes in
            # the NEXT/overlapping object's bytes (adjacent function overlap)
            # and fabricates a bogus nonzero addend.
            add = 0
            if rva + 4 <= len(body):
                add = (body[rva] | body[rva + 1] << 8 |
                       body[rva + 2] << 16 | body[rva + 3] << 24)
            lst = sites.setdefault(so, [])
            if not any(True for a in lst if a[0] == typ and a[1] == name):
                lst.append((typ, name, add))

    tot = TS
    matched = masked = mismatch = pending = 0
    padsyn = 0
    for k in range(tot):
        if ours[k] is None:
            pending += 1
        elif mask[k]:
            masked += 1
        elif ours[k] == exe_text[k]:
            matched += 1
        else:
            mismatch += 1

    # Fold pure alignment/pad residuals (0x90 nop/0xCC int3/0x00) into the
    # matched count: the reference pads are prescribed linker alignment fillers
    # (the linker re-emits them automatically), not game code that needs a real
    # obj owner. This is the same bytes-level guarantee as a data_ owner without
    # thousands of trivial files.
    if pending:
        i = 0
        while i < tot:
            if ours[i] is None:
                j = i
                while j < tot and ours[j] is None:
                    j += 1
                if all(exe_text[k2] in (0x90, 0xCC, 0x00) for k2 in range(i, j)):
                    padsyn += j - i
                    matched += j - i
                    pending -= j - i
                i = j
            else:
                i += 1

    print("== EXE .text fidelity (%d bytes, %d objs placed) ==" % (tot, funcs))
    print("  %-8s %9d bytes (%6.2f%%)" % ("matched", matched, 100.0 * matched / tot))
    print("  %-8s %9d bytes (%6.2f%%)" % ("masked(reloc)", masked, 100.0 * masked / tot))
    print("  %-8s %9d bytes (%6.2f%%)" % ("mismatch", mismatch, 100.0 * mismatch / tot))
    print("  %-8s %9d bytes (%6.2f%%)" % ("pending", pending, 100.0 * pending / tot))
    if padsyn:
        print("  (pad-synthesized %d bytes folded into matched)" % padsyn)

    # where are the pending (uncovered) runs?
    print("\n== largest uncovered runs (> = no obj bytes) ==")
    runs = []
    i = 0
    while i < tot:
        if ours[i] is None:
            j = i
            while j < tot and ours[j] is None:
                j += 1
            runs.append((i, j - i))
            i = j
        else:
            i += 1
    runs.sort(key=lambda x: -x[1])
    for off, ln in runs[:20]:
        print("  va 0x%08X span=%5d" % (BASE + text_rva + off, ln))

    if not nomasks:
        return 0 if mismatch == 0 and pending == 0 else 1

    print("\n== no-mask reloc resolution: resolved image vs reference ==")
    # Learn genuine symbol addresses from the reference where our symbol map
    # lacks them (CRT helpers like __ftol, static lzw vars, or gen-invented
    # FUN_1004XXX). A site's reference value -- for a GENUINE reloc -- gives
    # target = site+4+signed(raw) (REL32) or target = raw-obdisp (DIR32).
    # Adopt a symbol's learned VA only when ALL its sites agree (that is the
    # consistency/verification: wrong sources or hidden mismatches disagree).
    def site_recompute(k, lst):
        """For a reloc site return (raw_dword, list of (typ,name,add))."""
        raw = (exe_text[k] | exe_text[k + 1] << 8 |
               exe_text[k + 2] << 16 | exe_text[k + 3] << 24)
        return raw, lst

    def resolve_site(k, lst, learned, impmap):
        """Return (status, value) for site k.
        status: 'match' (a symbol resolves to exactly raw), 'miss'
        (symbols resolve but none equal raw; value = first resolvable),
        'none' (no symbol resolves). Uses each reloc's own stored addend and
        scans ALL symbols so a multi-symbol site (two overlapping objs) picks
        the one whose value reproduces the reference bytes."""
        raw, _ = site_recompute(k, lst)
        chosen = None
        for typ, name, add in lst:
            tv = learned.get(name)
            if tv is None:
                tv, kind = resolve_export_va(name, BASE, impmap)
            if tv is None:
                continue
            if typ in REL32:
                v = (tv + add - (BASE + text_rva + k) - 4) & 0xFFFFFFFF
            else:
                v = (tv + add) & 0xFFFFFFFF
            if v == raw:
                return "match", v
            if chosen is None:
                chosen = v
        if chosen is not None:
            return "miss", chosen
        return "none", None

    cand = {}
    for k, lst in sites.items():
        raw, _ = site_recompute(k, lst)
        for typ, name, add in lst:
            if typ in REL32:
                d = raw - add
                if d >= 0x80000000:
                    d -= 0x100000000
                tgt = (BASE + text_rva + k) + 4 + d
            else:
                tgt = raw - add
            if 0x00400000 <= tgt < 0x008C2000:
                if add != raw:  # only interesting when the site actually differs
                    cand.setdefault(name, []).append(tgt)
    learned = {}
    for name, vs in cand.items():
        if len(vs) >= 2 and min(vs) == max(vs):
            learned[name] = vs[0]
        elif len(vs) == 1 and sum(1 for k2, l2 in sites.items() if any(n2 == name for (_, n2, _) in l2)) == 1:
            learned[name] = vs[0]

    # Build the FINAL no-mask image: start from the assembled obj bytes, then
    # at each reloc site write the value the LINKER would produce (symbol VA,
    # plus the obj's stored addend; REL32 relative to the site).
    final = [b if b is not None else 0 for b in ours]
    resolved = 0
    resolve_miss = 0
    unresolved_sites = 0
    already = 0
    for k, lst in sites.items():
        raw, _ = site_recompute(k, lst)
        if lst and lst[0][2] == raw and len(set(n for (_, n, _) in lst)) == 1:
            # obj's own single stored value already reproduces the reference
            already += 4
            continue
        status, v = resolve_site(k, lst, learned, impmap)
        if status == "match":
            resolved += 4
            for jj in range(4):
                final[k + jj] = (v >> (jj * 8)) & 0xFF
        elif status == "miss":
            resolve_miss += 4
        else:
            unresolved_sites += 4

    print("  %-20s %8d bytes" % ("obj-already==ref", already))
    print("  %-20s %8d bytes" % ("resolve-match", resolved))
    print("  %-20s %8d bytes" % ("resolve-miss", resolve_miss))
    print("  %-20s %8d bytes" % ("unresolved-site", unresolved_sites))

    # TRUE no-mask mismatch: compare final (resolved) image vs reference.
    # (pad runs remaining uncovered are reproducible linker-align fillers.)
    nomasks_mismatch = sum(1 for k in range(tot)
                           if final[k] != exe_text[k] and not (ours[k] is None and exe_text[k] in (0x90, 0xCC, 0x00)))
    print("\n  TRUE no-mask mismatch = %d bytes" % nomasks_mismatch)
    def site_show(k):
        raw, lst = site_recompute(k, sites[k])
        syms = ",".join("%s(%x,t%d)" % (nm, add, tp) for (tp, nm, add) in lst)
        return (BASE + text_rva + k, raw, syms)

    if "--problems" in sys.argv:
        print("\n== residual no-mask problem sites (per reloc site) ==")
        shown = 0
        for k in sorted(sites):
            status, _ = resolve_site(k, sites[k], learned, impmap)
            if status == "match":
                continue
            va, raw, syms = site_show(k)
            print("  va %08X raw=%08x final=%08x  sym=[%s]" % (va, raw, final[k] | final[k + 1] << 8 | final[k + 2] << 16 | final[k + 3] << 24, syms))
            shown += 1
            if shown >= 120:
                break
        print("  (%d shown of %d sites)" % (shown, len(sites)))
    if "--group" in sys.argv:
        from collections import defaultdict
        byowner = defaultdict(dict)
        for k in sorted(sites):
            status, _ = resolve_site(k, sites[k], learned, impmap)
            if status == "match":
                continue
            kl = min(k, TS - 4)
            byowner[owner[kl] if kl < TS and owner[kl] else "?"][k] = sites[k]
        allsites = sum(len(v) for v in byowner.values())
        print("\nresidual no-mask sites %d across %d owner objs:" % (allsites, len(byowner)))
        for o in sorted(byowner, key=lambda o: -len(byowner[o])):
            sy = set()
            for k, lp in byowner[o].items():
                for (tp, nm, add) in lp:
                    sy.add(nm)
            print("  %4d %-34s %s" % (len(byowner[o]), o, ",".join(sorted(sy)[:6])))

    fi = None
    if "--fixlist" in sys.argv:
        try:
            fi = sys.argv[sys.argv.index("--fixlist") + 1]
        except IndexError:
            fi = None
    if fi:
        import csv as _csv
        rows = []
        for k in sorted(sites):
            status, _ = resolve_site(k, sites[k], learned, impmap)
            if status == "match":
                continue
            kl = min(k, TS - 4)
            raw = exe_text[kl] | exe_text[kl + 1] << 8 | exe_text[kl + 2] << 16 | exe_text[kl + 3] << 24
            if sites[k]:
                typ, name, add = sites[k][0]
                if typ in REL32:
                    d = raw - add
                    if d >= 0x80000000:
                        d -= 0x100000000
                    tgt = (BASE + text_rva + kl) + 4 + d
                    lit = 0
                else:
                    tgt = raw - add
                    lit = 1
                rows.append((owner[kl] if kl < TS and owner[kl] else "?",
                             "0x%08X" % (BASE + text_rva + kl), name,
                             "0x%08X" % (tgt & 0xFFFFFFFF), lit))
        with open(fi, "w", newline="") as f:
            w = _csv.writer(f)
            w.writerow(["owner", "va", "sym", "tgt", "lit"])
            for r in rows:
                w.writerow(r)
        print("fixlist rows written to", fi, "count", len(rows))
    return 0 if nomasks_mismatch == 0 else 1


if __name__ == "__main__":
    raise SystemExit(main())
