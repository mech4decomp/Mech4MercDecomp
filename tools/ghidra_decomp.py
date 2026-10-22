# Ghidra headless post-script: decompile one or more functions by entry VA
# and print their C-like pseudocode + the set of functions each one calls.
# @runtime jython
# Usage: analyzeHeadless ... -postScript ghidra_decomp.py 0x004145E0 0x00414820
# Args are hex VAs (0x-prefixed) or decimal; one or more.

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor


def decompile_one(iface, mon, fm, aspace, va):
    addr = aspace.getAddress(va)
    fn = fm.getFunctionAt(addr)
    if fn is None:
        print("==== 0x%X : no function at this entry ====" % va)
        return
    print("==== 0x%X  name=%s  size=%d ====" % (va, fn.getName(), fn.getBody().getNumAddresses()))
    res = iface.decompileFunction(fn, 60, mon)
    if res and res.getDecompiledFunction():
        print(res.getDecompiledFunction().getC())
    else:
        print("  (decompile failed)")
    callees = set()
    for ref in fn.getCalledFunctions(mon):
        callees.add(ref.getEntryPoint().getOffset())
    print("--- callees (%d) ---" % len(callees))
    for c in sorted(callees):
        cf = fm.getFunctionAt(aspace.getAddress(c))
        sz = cf.getBody().getNumAddresses() if cf else 0
        print("  0x%08X  size=%d  name=%s" % (c, sz, cf.getName() if cf else "?"))


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
    for va in entries:
        decompile_one(iface, mon, fm, aspace, va)
    iface.dispose()

main()