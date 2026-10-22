# Ghidra headless post-script: disassemble one or more functions by entry VA.
# Prints raw bytes + disassembly for each instruction in the function body,
# then decompiles each and prints the C-like pseudocode.
# @runtime jython
# Usage: analyzeHeadless ... -postScript ghidra_disasm.py 0x00413EE0 0x004145E0
# Args are hex VAs (0x-prefixed) or decimal; one or more.

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
import jarray


def disassemble_one(iface, mon, fm, aspace, listing, va):
    addr = aspace.getAddress(va)
    fn = fm.getFunctionAt(addr)
    if fn is None:
        print("==== 0x%X : no function at this entry ====" % va)
        return
    print("==== 0x%X  name=%s  size=%d ====" % (va, fn.getName(), fn.getBody().getNumAddresses()))
    codeUnitIter = listing.getCodeUnits(fn.getBody(), True)
    while codeUnitIter.hasNext():
        cu = codeUnitIter.next()
        cu_addr = cu.getAddress()
        length = cu.getLength()
        buf = jarray.zeros(length, "b")
        currentProgram.getMemory().getBytes(cu_addr, buf)
        hexbytes = " ".join("%02X" % (b & 0xFF) for b in buf)
        print("  0x%08X: %-20s %s" % (cu_addr.getOffset(), hexbytes, cu.toString()))
    res = iface.decompileFunction(fn, 60, mon)
    if res and res.getDecompiledFunction():
        print("\n--- Decompiled C ---")
        print(res.getDecompiledFunction().getC())
    else:
        print("  (decompile failed)")


def main():
    args = getScriptArgs()
    if not args:
        print("==== no entry VAs supplied (pass hex VAs as script args) ====")
        return
    entries = [int(a, 16) if a.lower().startswith("0x") else int(a) for a in args]

    iface = DecompInterface()
    iface.openProgram(currentProgram)
    mon = ConsoleTaskMonitor()
    fm = currentProgram.getFunctionManager()
    aspace = currentProgram.getAddressFactory().getDefaultAddressSpace()
    listing = currentProgram.getListing()
    for va in entries:
        disassemble_one(iface, mon, fm, aspace, listing, va)
    iface.dispose()

main()