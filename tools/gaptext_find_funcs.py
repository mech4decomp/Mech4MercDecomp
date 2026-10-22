#!/usr/bin/env python3
"""Find real function boundaries in gundll fn-like gaps (branch-aware) with
trailing-NOP-trimmed sizes. Writes build/module_textdata/gundll_gaptext_funcs.csv
(entry_va, size) where size is the clean function body (ret/jmp-tail end minus
entry; trailing 0x90 pads are trimmed and stay uncovered)."""
import csv, struct, sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

def dll_text(dll):
    d = open(dll, "rb").read()
    e = struct.unpack_from("<I", d, 0x3C)[0]
    nsec = struct.unpack_from("<H", d, e + 6)[0]
    osz = struct.unpack_from("<H", d, e + 20)[0]
    magic = struct.unpack_from("<H", d, e + 24)[0]
    ib = struct.unpack_from("<I", d, e + 24 + 28)[0] if magic == 0x10B else struct.unpack_from("<Q", d, e + 24 + 24)[0]
    so = e + 24 + osz
    for i in range(nsec):
        s = d[so + i*40: so + (i+1)*40]
        name = s[:8].rstrip(b"\x00").decode("ascii", "replace")
        vsize, rva, rawsize, rawptr = struct.unpack_from("<IIII", s, 8)
        if name == ".text":
            return d[rawptr:rawptr+rawsize], rva, ib
    sys.exit("no .text")

text, trva, ib = dll_text(r"reference\GunDll.dll")
base = 0x10000000
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.skipdata = True

gaps = [r for r in csv.DictReader(open(r"build/module_textdata/gundll_gaps.csv"))
        if r["kind"] == "fn-like"]
out = []
for g in gaps:
    va = int(g["va"], 16); size = int(g["size"])
    off = va - base - trva
    body = text[off:off+size]
    ins = list(md.disasm(body, va))
    if not ins:
        continue
    targets = set()
    for x in ins:
        if x.mnemonic in ("jmp", "jne", "je", "jz", "jnz", "jg", "jge", "jl", "jle",
                          "ja", "jae", "jb", "jbe", "js", "jns", "jo", "jno", "jp", "jnp",
                          "loop", "loope", "loopne", "call"):
            try: targets.add(int(x.op_str, 16))
            except ValueError: pass
    entries = []
    in_pad = True
    i = 0
    n = len(ins)
    while i < n:
        x = ins[i]
        if x.bytes == b"\x90":
            i += 1; continue
        if in_pad:
            if x.address not in targets:
                entries.append(x.address)
            in_pad = False
        if x.mnemonic in ("ret", "retn") or (x.mnemonic == "jmp" and len(x.bytes) in (2, 5)):
            j = i + 1
            while j < n and ins[j].bytes == b"\x90":
                j += 1
            i = j
            in_pad = True
            continue
        i += 1
    ents = sorted(set(entries))
    for k, en in enumerate(ents):
        end = ents[k+1] if k+1 < len(ents) else va + size
        # trim trailing NOPs (they are pads, not body)
        span = text[(en - base - trva):(end - base - trva)]
        t = len(span)
        while t > 0 and span[t-1] == 0x90:
            t -= 1
        out.append((en, t))

out.sort()
seen = set(); ded = [r for r in out if not (r[0] in seen or seen.add(r[0]))]
ded = [r for r in ded if r[1] > 0]
with open(r"build/module_textdata/gundll_gaptext_funcs.csv", "w", newline="") as f:
    w = csv.writer(f); w.writerow(["entry", "size"]); w.writerows(ded)
print("real function entries:", len(ded), "total bytes:", sum(r[1] for r in ded))
import collections
b=collections.Counter()
for r in ded: b['<128' if r[1]<128 else ('128-2048' if r[1]<2048 else '>=2048')]+=1
print("sizes:", dict(b))
