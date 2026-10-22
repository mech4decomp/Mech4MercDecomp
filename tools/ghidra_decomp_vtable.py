# Ghidra headless post-script: decompile the functions pointed to by a vtable.
# Disassembles at each vtable entry VA first (to seed instructions), creates the
# function if missing, then decompiles. Prints C-like pseudocode + callees.
# @runtime jython
# Usage: analyzeHeadless ... -postScript ghidra_decomp_vtable.py 0x0076D7B0 12
# Args: <vtable_VA> <entry_count>  (hex VA 0x-prefixed; count decimal)

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.symbol import SourceType
from ghidra.app.cmd.disassemble import DisassembleCommand
from ghidra.program.model.address import AddressSet


def decompile_one(iface, mon, fm, aspace, v):
    fa = aspace.getAddress(v)
    fn = fm.getFunctionAt(fa)
    if fn is None:
        try:
            cmd = DisassembleCommand(fa, AddressSet(fa, fa.add(0x400)), False)
            cmd.applyTo(currentProgram, mon)
        except Exception as e:
            print("==== 0x%X : disassemble failed: %s ====" % (v, str(e)))
            return
        try:
            fn = fm.createFunction(None, fa, AddressSet(fa, fa.add(0x400)), SourceType.DEFAULT)
        except Exception as e:
            print("==== 0x%X : createFunction failed: %s ====" % (v, str(e)))
            return
    print("==== 0x%X  name=%s  size=%d ====" % (v, fn.getName(), fn.getBody().getNumAddresses()))
    res = iface.decompileFunction(fn, 90, mon)
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
    if len(args) < 2:
        print("==== usage: ghidra_decomp_vtable.py <vtable_VA> <entry_count> ====")
        return
    vt_va = int(args[0], 16) if args[0].lower().startswith("0x") else int(args[0])
    n = int(args[1], 16) if args[1].lower().startswith("0x") else int(args[1])

    iface = DecompInterface()
    iface.openProgram(currentProgram)
    mon = ConsoleTaskMonitor()
    fm = currentProgram.getFunctionManager()
    aspace = currentProgram.getAddressFactory().getDefaultAddressSpace()
    mem = currentProgram.getMemory()

    vt_addr = aspace.getAddress(vt_va)
    entries = []
    for i in range(n):
        a = vt_addr.add(i * 4)
        v = mem.getInt(a) & 0xFFFFFFFF
        entries.append(v)
    for v in entries:
        decompile_one(iface, mon, fm, aspace, v)
    iface.dispose()

main()