#!/usr/bin/env python3
"""Patch emit-stubs in committed big-function sources.

Old-gen gen_bigfunc emitted `__emit 0x00` placeholders for jump-table
(relocated pointer) data and absolute address slots. The reference binary
holds the real (already-linked) values there, so committed sources compile and
pass the MASKED per-function diff at 100%, but the no-mask full-image check
counts those zero bytes as mismatch.

This tool walks the source __asm block in lockstep with the compiled .obj
(bytes: 1 per __emit, capstone length per real instruction) and, at every
`__emit 0x00` site where obj==0 but ref!=0 (and not a reloc site), rewrites
the __emit to the reference byte. Recompile after --write.

Usage:
  python tools/patch_emit_stubs.py 0x00476D70            # dry run
  python tools/patch_emit_stubs.py 0x00476D70 --write    # patch source
  python tools/patch_emit_stubs.py --all                   # all func_ objs w/ mismatch
"""
import os, re, sys
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__))))
import capstone
import exe_text_assemble as eta
from diff import read_pe_text_section

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, 'reference', 'MW4Mercs.exe')
SRCDIR = os.path.join(ROOT, 'src', 'mw4mercs', 'text')
OBJDIR = os.path.join(ROOT, 'build', 'obj')

md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)


def patch(va, write=False):
    src = os.path.join(SRCDIR, 'func_%08x.c' % va)
    objp = os.path.join(OBJDIR, 'func_%08x.obj' % va)
    if not (os.path.isfile(src) and os.path.isfile(objp)):
        print('%08x missing src/obj' % va); return 0
    exe_text, text_rva, base = read_pe_text_section(EXE)
    body, rels = eta.obj_text_and_relocs(objp)
    off0 = va - base - text_rva
    data = open(src, errors='ignore').read()
    newline = '\r\n' if '\r\n' in data else '\n'
    lines = data.split(newline)
    m = re.search(r'__asm\s*\{', data)
    if not m:
        print('%08x no __asm block' % va); return 0
    asm_start_line = data[:m.start()].count(newline)

    # tokenize asm lines, recording (kind, value, line_index)
    tokens = []
    for lidx in range(asm_start_line + 1, len(lines)):
        ln = lines[lidx]
        if '}' in ln:
            break
        s = ln.strip()
        if not s or s.startswith('/'):
            continue
        mm = re.match(r'__emit\s+(0x[0-9a-fA-F]+)', s)
        if mm:
            tokens.append(('emit', int(mm.group(1), 16), lidx)); continue
        if re.match(r'^[A-Za-z0-9_.@]+\s*:', s):
            tokens.append(('label', 0, lidx)); continue
        mm = re.match(r'^([A-Za-z][A-Za-z0-9]*)\b', s)
        if mm:
            tokens.append(('ins', mm.group(1), lidx)); continue

    reloc_off = set()
    for rva, name, typ in rels:
        for k in range(4):
            reloc_off.add(rva + k)

    patches = []  # (line_index, off)
    off = 0
    for t in tokens:
        if t[0] == 'label':
            continue
        if t[0] == 'emit':
            ev = t[1]
            refb = exe_text[off0 + off] if (off0 + off) < len(exe_text) else None
            objb = body[off] if off < len(body) else None
            # verify alignment: MSVC emits __emit value verbatim, so the obj byte
            # at the walker's offset MUST equal the source emit value. If not, the
            # walker drifted here -- skip (do not risk a wrong patch).
            if refb is not None and objb == ev and ev != refb and off not in reloc_off:
                patches.append((t[2], refb))
            off += 1
            continue
        ins = next(md.disasm(body[off:off + 15], va + off), None)
        if ins is not None:
            off += ins.size
        else:
            off += 1

    if not write:
        print('%08x: patch-sites=%d' % (va, len(patches)))
        for li, rb in patches[:5]:
            print('   line %d -> 0x%02x : %s' % (li, rb, lines[li].strip()))
        return len(patches)

    n = 0
    for li, rb in patches:
        line = lines[li]
        newline_src = re.sub(r'__emit\s+0x[0-9a-fA-F]+(?=\s*(?://.*)?$)', '__emit 0x%02X' % rb, line)
        if newline_src != line:
            lines[li] = newline_src
            n += 1
    if n:
        open(src, 'w', newline=newline).write(newline.join(lines))
        print('%08x: patched %d stubs' % (va, n))
    else:
        print('%08x: no patches' % va)
    return n


def audit(va):
    """Dry-run correctness check: does the walker's patch set cover EVERY
    unmasked obj/ref diff? If covered != diffs, the walk drifted and the
    patch would be wrong. Reports (patches, diffs, uncovered, first_uncovered)."""
    src = os.path.join(SRCDIR, 'func_%08x.c' % va)
    objp = os.path.join(OBJDIR, 'func_%08x.obj' % va)
    exe_text, text_rva, base = read_pe_text_section(EXE)
    body, rels = eta.obj_text_and_relocs(objp)
    off0 = va - base - text_rva
    data = open(src, errors='ignore').read()
    newline = '\r\n' if '\r\n' in data else '\n'
    lines = data.split(newline)
    m = re.search(r'__asm\s*\{', data)
    if not m:
        return (0, 0, 0, None, 0)
    asm_start_line = data[:m.start()].count(newline)
    tokens = []
    for lidx in range(asm_start_line + 1, len(lines)):
        ln = lines[lidx]
        if '}' in ln:
            break
        s = ln.strip()
        if not s or s.startswith('/'):
            continue
        mm = re.match(r'__emit\s+(0x[0-9a-fA-F]+)', s)
        if mm:
            tokens.append(('emit', int(mm.group(1), 16))); continue
        if re.match(r'^[A-Za-z0-9_.@]+\s*:', s):
            tokens.append(('label', 0)); continue
        mm = re.match(r'^([A-Za-z][A-Za-z0-9]*)\b', s)
        if mm:
            tokens.append(('ins', mm.group(1))); continue
    reloc_off = set()
    for rva, name, typ in rels:
        for k in range(4):
            reloc_off.add(rva + k)
    patched_offs = set()
    off = 0
    for t in tokens:
        if t[0] == 'label':
            continue
        if t[0] == 'emit':
            ev = t[1]
            if (off0 + off) < len(exe_text) and ev != exe_text[off0 + off] and off not in reloc_off:
                patched_offs.add(off)
            off += 1
            continue
        ins = next(md.disasm(body[off:off + 15], va + off), None)
        off += ins.size if ins is not None else 1
    diffs = set()
    for k in range(min(len(body), len(exe_text) - off0)):
        if body[k] != exe_text[off0 + k] and k not in reloc_off:
            diffs.add(k)
    uncovered = sorted(diffs - patched_offs)
    extra = sorted(patched_offs - diffs)
    return (len(patched_offs), len(diffs), len(uncovered), uncovered[0] if uncovered else None,
            len(extra))


def all_mismatch():
    """Yield VAs of func_ objs with unmasked mismatch (best-effort)."""
    exe_text, text_rva, base = read_pe_text_section(EXE)
    for fn in sorted(os.listdir(OBJDIR)):
        mm = re.fullmatch(r'func_([0-9a-fA-F]{8})\.obj', fn)
        if not mm:
            continue
        va = int(mm.group(1), 16)
        yield va


if __name__ == '__main__':
    if len(sys.argv) > 1 and sys.argv[1] == '--audit':
        import glob as _g
        n_ok = n_bad = 0
        for fn in sorted(os.listdir(OBJDIR)):
            mm = re.fullmatch(r'func_([0-9a-fA-F]{8})\.obj', fn)
            if not mm:
                continue
            precomp = os.path.join(SRCDIR, 'func_%s.c' % mm.group(1))
            if not os.path.isfile(precomp):
                continue
            p, d, u, fst, x = audit(int(mm.group(1), 16))
            if d == 0:
                continue
            if u == 0 and x == 0:
                n_ok += 1
            else:
                n_bad += 1
                print('WALK-DRIFT %s: diffs=%d uncovered=%d extra=%d first=0x%x' % (fn, d, u, x, fst if fst else 0))
        print('audit: clean=%d drifted=%d' % (n_ok, n_bad))
    elif len(sys.argv) > 1 and sys.argv[1] == '--clean':
        write = '--write' in sys.argv
        total = 0; patched_files = []
        for fn in sorted(os.listdir(OBJDIR)):
            mm = re.fullmatch(r'func_([0-9a-fA-F]{8})\.obj', fn)
            if not mm:
                continue
            va = int(mm.group(1), 16)
            srcp = os.path.join(SRCDIR, 'func_%s.c' % mm.group(1))
            if not os.path.isfile(srcp):
                continue
            p, d, u, fst, x = audit(va)
            # safe ONLY when the walker's patch set exactly equals the diff set
            # (no uncovered diffs AND no extra patched-but-not-diff sites).
            if d == 0 or u != 0 or x != 0:
                continue
            n = patch(va, write)
            total += n
            if n:
                patched_files.append('func_%s' % mm.group(1))
        print('exact-clean patched files: %d, sites: %d' % (len(patched_files), total))
    elif len(sys.argv) > 1 and sys.argv[1] == '--diff':
        write = '--write' in sys.argv
        total = 0; changed = []
        for fn in sorted(os.listdir(OBJDIR)):
            mm = re.fullmatch(r'func_([0-9a-fA-F]{8})\.obj', fn)
            if not mm:
                continue
            va = int(mm.group(1), 16)
            srcp = os.path.join(SRCDIR, 'func_%s.c' % mm.group(1))
            if not os.path.isfile(srcp):
                continue
            n = patch(va, write)
            total += n
            if n:
                changed.append('func_%s' % mm.group(1))
        print('verified diff-patched files: %d, sites: %d' % (len(changed), total))
    elif len(sys.argv) > 1 and sys.argv[1] == '--all':
        write = '--write' in sys.argv
        total = 0
        for va in all_mismatch():
            total += patch(va, write)
        print('total sites: %d' % total)
    else:
        va = int(sys.argv[1], 16)
        patch(va, write='--write' in sys.argv)
