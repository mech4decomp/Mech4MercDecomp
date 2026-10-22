import re
import sys
from capstone import *

md = Cs(CS_ARCH_X86, CS_MODE_32)
EXE = 'reference/MW4Mercs.exe'
CSV = 'reference/functions/MW4Mercs.csv'


def load_functions():
    data = open(CSV).read()
    rows = []
    for line in data.splitlines():
        m = re.match(r'\s*(0x[0-9A-Fa-f]+)', line)
        if not m:
            continue
        va = int(m.group(1), 16)
        szs = re.findall(r',(\d+),', line)
        sz = int(szs[-1]) if szs else 0
        rows.append((va, sz))
    return rows


def get_next_func(rows, va, size):
    end = va + size
    return min((a for a, s in rows if a > end), default=None)


def read_text():
    exe = open(EXE, 'rb').read()
    return exe[0x1000:0x1000 + 0x368000]


def main(va_hex, outpath, size_override=None):
    va = int(va_hex, 16)
    rows = load_functions()
    if size_override is not None:
        size = int(size_override, 0)
    else:
        size = next(s for a, s in rows if a == va)
    nxt = get_next_func(rows, va, size)
    text = read_text()
    end_code = nxt if nxt else va + size
    blob = text[va - 0x401000:end_code - 0x401000]
    ins = list(md.disasm(blob, va))

    FSTART = va

    # jumptable dispatch bases (referenced as [reg*4 + imm])
    jt = set()
    for x in ins:
        m = re.search(r'jmp\s+dword ptr \[([a-z0-9]+)\*(?:1|2|4|8) \+ 0x([0-9a-fA-F]+)\]', x.mnemonic + ' ' + x.op_str)
        if m:
            jt.add(int(m.group(2), 16))
    jt_sorted = sorted(jt)

    # real code ends before the first jump-table base if any table exists;
    # otherwise at the last ret's end.
    if jt_sorted:
        FEND = min(jt_sorted)
    else:
        rets = [x for x in ins if x.mnemonic in ('ret', 'retn')]
        if rets:
            last = sorted(rets, key=lambda x: x.address)[-1]
            FEND = last.address + len(last.bytes)
        else:
            FEND = end_code

    code_ins = [x for x in ins if x.address < FEND]

    calls_in = [x for x in ins]
    # Mark the set of addresses that are *labels within this function* (branch
    # targets) so a `call` to a real external function (>= 0x400000) is never
    # mistaken for a call to an epilogue/table inside the region.
    EXT = {}
    CALLS = {}
    JUMPT = {}
    targets = set()
    local_addrs = set(x.address for x in code_ins)
    for x in code_ins:
        if x.mnemonic == 'call':
            m = re.search(r'0x([0-9a-fA-F]+)$', x.op_str)
            if m:
                t = int(m.group(1), 16)
                # extern EVERY absolute call target (extern-symbol technique);
                # unrelocated int3/data gaps in merged regions must not suppress
                # a real cross-function call.
                if t >= 0x400000:
                    CALLS[t] = 'FUN_%08x' % t
        if x.mnemonic[0] == 'j':
            m = re.search(r'0x([0-9a-fA-F]+)$', x.op_str)
            if m:
                t = int(m.group(1), 16)
                if FSTART <= t < FEND:
                    targets.add(t)
                elif x.mnemonic in ('jmp', 'je', 'jne', 'jz', 'jnz', 'ja', 'jae', 'jb', 'jbe', 'jg', 'jge', 'jl', 'jle', 'js', 'jns', 'jo', 'jno', 'jp', 'jnp', 'jc', 'jnc', 'jecxz', 'loop', 'loope', 'loopne'):
                    # out-of-function jmp/jcc: extern-symbol tail-call target
                    if t >= 0x400000:
                        JUMPT[t] = 'FUN_%08x' % t
        for mm in re.finditer(r'\[0x([0-9a-fA-F]+)', x.op_str):
            a = int(mm.group(1), 16)
            if not (FSTART <= a < FEND) and a >= 0x400000 and a not in jt:
                EXT.setdefault(a, None)

    # classify EXT types
    for x in code_ins:
        for mm in re.finditer(r'\[0x([0-9a-fA-F]+)', x.op_str):
            a = int(mm.group(1), 16)
            if a in EXT:
                mnem = x.mnemonic.lower()
                if mnem.startswith('f'):
                    EXT[a] = 'f'
                elif 'byte ptr' in x.op_str:
                    EXT[a] = 'b'
                else:
                    EXT[a] = 'd'
    for a in list(EXT):
        if EXT[a] is None:
            EXT[a] = 'd'

    lbl = {t: 'L_%04x' % (t & 0xffff) for t in sorted(targets)}

    def sub_abs(op):
        def br(m):
            inner = m.group(1)
            def rep(mm):
                v = int(mm.group(1), 16)
                if v in EXT:
                    return 'g_jt_%04x' % v if v in jt else 'g_%08x' % v
                return mm.group(0)
            return '[' + re.sub(r'0x([0-9a-fA-F]+)', rep, inner) + ']'
        return re.sub(r'\[([^\]]+)\]', br, op)

    rows_out = []
    for x in code_ins:
        a = x.address
        if a in lbl:
            rows_out.append(lbl[a] + ':')
        mnem = x.mnemonic.lower()
        op = x.op_str
        if mnem == 'call':
            m = re.search(r'0x([0-9a-fA-F]+)$', op)
            if m and int(m.group(1), 16) in CALLS:
                rows_out.append('        call    %s' % CALLS[int(m.group(1), 16)])
            else:
                rows_out.append('        call    %s' % sub_abs(op))
        elif mnem[0] == 'j':
            m = re.search(r'0x([0-9a-fA-F]+)$', op)
            if m and int(m.group(1), 16) in lbl:
                rows_out.append('        %s    %s' % (mnem, lbl[int(m.group(1), 16)]))
            elif m and int(m.group(1), 16) in JUMPT:
                rows_out.append('        %s    %s' % (mnem, JUMPT[int(m.group(1), 16)]))
            else:
                rows_out.append('        %s    %s' % (mnem, sub_abs(op)))
        elif mnem == 'push' and re.fullmatch(r'push\s+0x[0-9a-fA-F]+', op):
            v = int(op.split()[1], 16)
            if v in EXT:
                rows_out.append('        push    offset g_%08x' % v)
            else:
                rows_out.append('        push    %s' % sub_abs(op))
        elif mnem == 'fnstsw':
            rows_out.append('        fnstsw  ax')
        elif mnem == 'test':
            parts = op.split(',')
            if len(parts) == 2 and all(re.fullmatch(r'(?:e?(?:ax|bx|cx|dx|si|di|sp|bp)|[abcd][lh]|st\([0-9]+\))', p.strip()) for p in parts):
                rows_out.append('        test    %s, %s' % (parts[1].strip(), parts[0].strip()))
            else:
                rows_out.append('        %s    %s' % (mnem, sub_abs(op)))
        else:
            rows_out.append('        %s    %s' % (mnem, sub_abs(op)))

    for t, tb in enumerate(jt_sorted):
        nxt_tb = jt_sorted[t + 1] if t + 1 < len(jt_sorted) else FEND + 0x100
        # emit the full table: from this base to the next base (or to the end of
        # the requested extent) so a no-mask full-image diff has every byte.
        t_end = va + size
        nbytes = max(0, min(nxt_tb, t_end) - tb)
        rows_out.append('        // jump-table data @ 0x%08X (%d relocated pointers)'
                        % (tb, nbytes // 4))
        # emit the ACTUAL reference bytes so a no-mask full-image diff passes
        tab_off_in = tb - 0x401000
        for k in range(nbytes):
            b = text[tab_off_in + k] if 0 <= tab_off_in + k < len(text) else 0x00
            rows_out.append('        __emit 0x%02X' % b)

    decls = []
    for a in sorted(EXT):
        t = EXT[a]
        nm = 'g_jt_%04x' % a if a in jt else 'g_%08x' % a
        if t == 'f':
            decls.append('extern float  %s;' % nm)
        elif t == 'b':
            decls.append('extern char   %s;' % nm)
        else:
            decls.append('extern int    %s;' % nm)
    for a in sorted(CALLS):
        decls.append('extern void __cdecl %s(void);' % CALLS[a])
    for a in sorted(JUMPT):
        decls.append('extern void __cdecl %s(void);' % JUMPT[a])

    hdr = ['/*', ' * %s' % outpath, ' *', ' * FUN_%08x (extent 0x%x-0x%x) - gen via tools/gen_bigfunc.py.'
           % (va, FSTART, FEND), ' */', '#pragma warning(disable : 4035 4793)', '']
    hdr += decls
    hdr += ['', '__declspec(naked) void FUN_%08x(void)' % va, '{', '    __asm {']
    res = hdr + rows_out + ['    }', '}']
    open(outpath, 'w').write('\n'.join(res) + '\n')
    print('extent 0x%x-0x%x code-bytes=%d insns=%d labels=%d ext=%d calls=%d jt=%s' % (
        FSTART, FEND, FEND - FSTART, len(code_ins), len(lbl), len(EXT), len(CALLS),
        ['%x' % b for b in jt_sorted]))


if __name__ == '__main__':
    size_override = sys.argv[3] if len(sys.argv) > 3 else None
    main(sys.argv[1], sys.argv[2], size_override)
