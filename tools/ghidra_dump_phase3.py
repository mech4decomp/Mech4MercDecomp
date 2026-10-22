# Dump Phase 3 essentials from a Ghidra project.
# @category MW4 Decomp
# @runtime Jython

import re
from ghidra.program.model.symbol import SymbolType

prog = currentProgram
listing = prog.getListing()
mem = prog.getMemory()
symtbl = prog.getSymbolTable()
fm = prog.getFunctionManager()

# Optional first script arg: output dir. Default preserves the MW4Mercs EXE
# dump path. Module DLLs: -postScript ghidra_dump_phase3.py <out_dir>
script_args = getScriptArgs()
out_dir = script_args[0] if script_args else "build/ghidra/MW4_project/dumps"
import os
if not os.path.exists(out_dir):
    os.makedirs(out_dir)

def addr(off):
    from ghidra.program.model.address import AddressFactory
    return prog.getAddressFactory().getDefaultAddressSpace().getAddress(off)

# 1. Function inventory
fn_path = out_dir + "/functions.csv"
with open(fn_path, "w") as f:
    f.write("entry,name,size,calling_conv\n")
    for fn in fm.getFunctions(True):
        body = fn.getBody()
        size = body.getNumAddresses()
        cc = fn.getCallingConventionName() or ""
        f.write("0x{:08X},{},{},{}\n".format(fn.getEntryPoint().getOffset(),
                                              fn.getName(), size, cc))

# 2. Symbols (especially demangled class names + class structure symbols)
sym_path = out_dir + "/symbols.txt"
with open(sym_path, "w") as f:
    for sym in symtbl.getAllSymbols(True):
        if sym.getSymbolType() in (SymbolType.FUNCTION,
                                   SymbolType.NAMESPACE,
                                   SymbolType.CLASS):
            continue
        f.write("0x{:08X}\t{}\t{}\n".format(sym.getAddress().getOffset(),
                                             sym.getSymbolType(),
                                             sym.getName()))

# 3. .txt2 section bytes (raw dump for inspection of the code_seg pragma region)
txt2 = mem.getBlock(".txt2")
if txt2 is not None:
    start = txt2.getStart()
    size = txt2.getSize()
    ba = bytearray(size)
    try:
        mem.getBytes(start, ba)
    except Exception as e:
        ba = ("ERROR reading .txt2: {}".format(e)).encode('ascii')
    with open(out_dir + "/txt2.bin", "wb") as f:
        f.write(bytes(ba))
    with open(out_dir + "/txt2_info.txt", "w") as f:
        f.write(".txt2 start=0x{:08X} size=0x{:X} bytes\n".format(
            start.getOffset(), size))

# 4. RTTI TypeDescriptor scan.
# MSVC RTTI TypeDescriptor:
#   struct TypeDescriptor {
#     DWORD pVFTable;       // -> type_info::vtable (always __imp_?_7type_info@@6B@ in MSVCRT)
#     DWORD spare;
#     char  name[];         // ".?AVClassName@@"
#   };
# Find them by scanning .rdata for the pattern: <ptr_to_type_info_vtable> 00 00 00 00 ".?A"
rdata = mem.getBlock(".rdata")
td_hits = []
if rdata is not None:
    rdata_bytes = bytearray(rdata.getSize())
    try:
        mem.getBytes(rdata.getStart(), rdata_bytes)
    except Exception as e:
        print("ERROR .rdata: {}".format(e))
        rdata_bytes = bytearray(0)
    rdata_start = rdata.getStart().getOffset()
    rdata_size = len(rdata_bytes)

    pattern = ".?A"
    pat = pattern.encode('ascii')
    i = 0
    while i < rdata_size:
        j = rdata_bytes.find(pat, i)
        if j < 0:
            break
        if j >= 8:
            pVF = (
                rdata_bytes[j - 8] | (rdata_bytes[j - 7] << 8) |
                (rdata_bytes[j - 6] << 16) | (rdata_bytes[j - 5] << 24)
            )
            spare = (rdata_bytes[j - 4] | (rdata_bytes[j - 3] << 8) |
                     (rdata_bytes[j - 2] << 16) | (rdata_bytes[j - 1] << 24))
            # Extract NUL-terminated name
            end = rdata_bytes.find(b"\x00", j)
            if end < 0:
                end = j + 1
            name = bytes(rdata_bytes[j:end]).decode('ascii', 'replace')
            rva = rdata_start + j - 8
            td_hits.append((rva, pVF, spare, name))
        i = j + 1

with open(out_dir + "/rtti_type_descriptors.csv", "w") as f:
    f.write("rva,pVFTable,spare,name\n")
    for rva, pVF, spare, name in td_hits:
        f.write("0x{:08X},0x{:08X},0x{:08X},{}\n".format(rva, pVF, spare, name))

print("Dump complete. Wrote:")
print("  {}".format(fn_path))
print("  {}".format(sym_path))
print("  {}/txt2.bin (+ txt2_info.txt)".format(out_dir))
print("  {} ({} TypeDescriptors)".format(
    out_dir + "/rtti_type_descriptors.csv", len(td_hits)))

# 5. Export table (named entry points - feeds DLL->EXE semantic mapping).
exp_path = out_dir + "/exports.csv"
cnt = 0
with open(exp_path, "w") as f:
    f.write("rva,name\n")
    for sym in symtbl.getAllSymbols(True):
        try:
            if sym.isExternalEntryPoint():
                f.write("0x{:08X},{}\n".format(
                    sym.getAddress().getOffset(), sym.getName()))
                cnt += 1
        except Exception:
            pass
    print("  {} ({} exports)".format(exp_path, cnt))