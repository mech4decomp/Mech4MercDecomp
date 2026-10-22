import os, glob

MNEMONICS = set([
    'mov','push','pop','add','sub','mul','div','imul','idiv','and','or','xor',
    'not','neg','inc','dec','cmp','test','jmp','jz','jnz','je','jne','jl','jle',
    'jg','jge','jb','jbe','ja','jae','js','jns','jo','jno','jp','jnp','jecxz',
    'call','ret','retn','lea','nop','shl','shr','sar','sal','shrd','shld','ror',
    'rol','rcr','rcl','setb','setae','setbe','seta','sete','setne','setl','setg',
    'setle','setge','sets','setns','seto','setno','setp','setnp','movzx','movsx',
    'cdq','cwd','cwde','cbw','bswap','bsf','bsr','bt','bts','btr','btc','lock',
    'rep','repe','repne','repz','repnz','stos','lods','movs','cmps','scas','ins',
    'outs','fld','fst','fstp','fadd','fsub','fmul','fdiv','fcomp','fcompp','fcom',
    'fxch','fild','fistp','fist','fldz','fld1','fldpi','fldl2e','fldl2t','fldlg2',
    'fldln2','fchs','fabs','frndint','fsqrt','fsin','fcos','fsincos','fpatan',
    'fprem','fprem1','f2xm1','fyl2x','fyl2xp1','fptan','fxam','ftst','fucom',
    'fucomp','fucompp','fdecstp','fincstp','ffree','finit','fninit','fclex',
    'fnclex','fstcw','fnstcw','fldcw','fstenv','fnstenv','fldenv','fsave',
    'fnsave','frstor','fxsave','fxrstor','emms','fwait','wait','int','into',
    'iret','iretd','hlt','in','out','cli','sti','cld','std','clc','stc','cmc',
    'lar','lsl','verr','verw','sgdt','sidt','lgdt','lidt','str','ltr','sldt',
    'lldt','arpl','bound','cmpxchg','xadd','pushad','popad','pushfd','popfd',
    'pushf','popf','sahf','lahf','ud2','faddp','fsubp','fmulp','fdivp',
    'fsubrp','fdivrp','prefetch','prefetchw','fnstsw','fstsw','ficom','ficomp',
    'fidiv','fidivr','fimul','fisub','fisubr','fiadd','fcompp','fcomp','fcom',
    'fbld','fbstp','fbstp','fsetpm','frstor',
])


def func_sources():
    """All func_*.c across the src tree (EXE track), excluding module/stub dirs."""
    out = []
    skip = ("modules", "non_matchings", "build")
    for d0, dirs, files in os.walk("src"):
        dirs[:] = [d for d in dirs if d not in skip]
        for fn in files:
            if fn.endswith(".c") and fn.startswith("func_"):
                out.append(os.path.join(d0, fn))
    return sorted(out)


sizes = {}
with open('build/ghidra/MW4_project/dumps/functions.csv') as f:
    next(f)
    for line in f:
        line = line.rstrip('\n')
        parts = line.rsplit(',', 2)
        if len(parts) < 3:
            continue
        try:
            va = int(parts[0].split(',', 1)[0], 16)
            size_i = int(parts[1])
            sizes[format(va, '08x')] = size_i
        except Exception:
            pass

pure_dump = []   # no real mnemonics at all
heavy_emit = []  # has real mnemonics but >15% __emit lines
for p in func_sources():
    basename = os.path.basename(p)
    va_hex = basename[5:13].lower()
    with open(p) as f:
        content = f.read()
    if '__emit' not in content:
        continue
    lines = [l.strip() for l in content.split('\n')
             if l.strip() and not l.strip().startswith(('//', '/*', '*', '{', '}', '#'))]
    emit_lines = 0
    has_real = False
    for l in lines:
        if l.startswith('__emit'):
            emit_lines += 1
            continue
        first_word = l.split()[0].lower() if l.split() else ''
        if first_word in MNEMONICS:
            has_real = True
    if emit_lines == 0:
        continue
    size = sizes.get(va_hex, 0)
    if not has_real:
        pure_dump.append((va_hex, size, p, emit_lines))
    elif emit_lines / len(lines) > 0.15:
        ratio = emit_lines / len(lines)
        heavy_emit.append((va_hex, size, p, emit_lines, len(lines), ratio))

total_util = len(func_sources())
clean = total_util - len(pure_dump) - len(heavy_emit)

# ---- File-level audit: which __emit is now eliminable via extern-symbol technique
# (MSVC6 inline asm encodes extern data/function symbols with correct memory-deref
#  and rel32 forms; only genuine register-op/encoding limits still need __emit).
G_KEYWORDS = [
    'fnstsw','no-wait','df e0','wait','test ah','f6 c4',
    'drops displacement','large disp','different sib','sib encoding',
    'optimizes sub','optimizes add','optimize','wrong branch offset','branch offset',
    'force exact','force short','force near','force short-enc','force near jump',
    'repne scasb','rep movsd','rep movsb','rep stosd','scasb','lods',
    'fucompp',
    'zero disp','zero-disp','[esp]','esp+0',
    'jump table','jump-table','table data','relocated','no `dd`','no dd',
    'no-base sib','swaps','swap','reverses','operand order','operand-order',
    'reg-reloc','backward jmp','off by',
    'cannot encode',"can't encode",'cannot emit','unencodable','not supported',
    'unsupported','quirk','genuine','collapses','collapse','dropping the','drops the',
    'fstp','need dd','must keep','retained as __emit','branch width','width quirk',
    'jmp offset','force the','cannot be expressed','cannot be produced','indirect jump',
    'reference uses','opcode','d8 /','dc /','data directive',
]
E_KEYWORDS = [
    'immediate load','as immediate','mis-encod','imm32','[0x','absolute',
    'memory-deref','mem-deref','reject','external functions by name',
    "can't call",'cannot call',"can't",'rel32','through iat','iat','segment',
    'ds:','sprintf','crt','by name','call 0x','jmp 0x',
]
def _class_group(comment):
    c = (comment or '').lower()
    if any(k in c for k in G_KEYWORDS):
        return 'G'
    if any(k in c for k in E_KEYWORDS):
        return 'E'
    if c.startswith('call 0x') or c.startswith('jmp 0x'):
        return 'E'
    return 'U'

emit_files = 0
eliminable_files = []
required_files = []
undecided_files = []
cmt_pat = None
re_ = __import__('re')

def _extract_comment(line):
    t = line.strip()
    if not t:
        return ''
    is_comment = t.startswith((';', '//', '/*'))
    if '*/' in t:
        t = t[:t.index('*/')]
    t = t.lstrip().lstrip('/*').lstrip().lstrip('//').lstrip().lstrip(';').lstrip()
    if re_.match(r'__emit\s+0x', t):
        for sep in ('//', '/*', ';'):
            if sep in t:
                tail = t[t.index(sep) + len(sep):]
                if '*/' in tail:
                    tail = tail[:tail.index('*/')]
                return tail.strip()
        return ''
    m = re_.match(r'__emit\s*[:\-]?\s*(.+)', t)
    if m:
        return m.group(1).strip()
    return t.strip() if is_comment else ''

for p in func_sources():
    try:
        with open(p, encoding='utf-8', errors='replace') as fh:
            content = fh.read()
    except Exception:
        continue
    lines = content.split('\n')
    has_instr = any(l.lstrip().startswith('__emit') for l in lines)
    if not has_instr:
        continue
    emit_files += 1
    groups = []
    i = 0
    n = len(lines)
    while i < n:
        if not lines[i].lstrip().startswith('__emit'):
            i += 1
            continue
        comment = _extract_comment(lines[i])
        j = i
        guard = 0
        while j < n and guard < 8:
            if not comment and ('//' in lines[j] or '/*' in lines[j] or ';' in lines[j]):
                comment = _extract_comment(lines[j])
            if '__emit' in lines[j]:
                j += 1
                guard += 1
                continue
            break
        if not comment:
            k = i - 1
            while k >= 0 and k >= i - 4:
                if not lines[k].strip().startswith('__emit'):
                    comment = _extract_comment(lines[k])
                    if comment:
                        break
                k -= 1
        groups.append(comment)
        i = j
    cats = [_class_group(c) for c in groups]
    if all(c == 'E' for c in cats) and cats:
        eliminable_files.append((p, sum(1 for c in cats if c == 'E')))
    elif any(c == 'G' for c in cats):
        required_files.append((p, sum(1 for c in cats if c == 'G')))
    else:
        undecided_files.append((p, len(groups)))

out = []
out.append('# `__emit` Tech Debt Tracker')
out.append('')
out.append('Files that use `__emit` byte sequences instead of real MSVC6 inline asm')
out.append('mnemonics. They may compile and match 100% against the reference binary,')
out.append('but violate the transcription quality standard.')
out.append('')
out.append('See `.opencode/agent/decomp.md` section "Real mnemonics for every')
out.append('encodable instruction" for the rules.')
out.append('')
out.append('## Summary')
out.append('')
out.append('| Category | Count | Definition |')
out.append('|----------|-------|------------|')
out.append('| Pure `__emit` dumps | %d | No real mnemonics at all — byte-for-byte copy |' % len(pure_dump))
out.append('| Heavy `__emit` | %d | Has real mnemonics but >15%% `__emit` lines |' % len(heavy_emit))
out.append('| Clean (real mnemonics) | %d | <15%% `__emit` or no `__emit` |' % clean)
out.append('| **Total func files** | **%d** | |' % total_util)
out.append('')
out.append('## Extern-symbol elimination audit (all files using `__emit`)')
out.append('')
out.append('Since the extern-symbol technique was established (MSVC6 encodes extern')
out.append('data/function symbol references with the *correct* memory-deref/rel32')
out.append('forms, with relocations the diff harness masks), most absolute-address')
out.append('`__emit` is now eliminable. This audit buckets every file that still has')
out.append('`__emit` by whether its usage is eliminable or genuinely required.')
out.append('')
out.append('| Category | Count | Definition |')
out.append('|----------|-------|------------|')
out.append('| Files using `__emit` at all | %d | any `__emit` bytes present |' % emit_files)
out.append('| Fully eliminable | %d | every `__emit` usage is an extern-symbol case |' % len(eliminable_files))
out.append('| Genuinely required | %d | has at least one `__emit` that cannot be a symbol ref |' % len(required_files))
out.append('| Undecided (review) | %d | un-commented/ambiguous `__emit` groups |' % len(undecided_files))
out.append('')
out.append('### Genuinely required (still need `__emit`)')
out.append('')
out.append('These contain register-op / encoding limits that mnemonic forms cannot')
out.append('reproduce (`fnstsw ax` no-WAIT DF E0, MSVC6 WAIT-before-FPU-reg, `test ah,imm8`,')
out.append('SIB/displacement or branch-offset forcing, rep-string prefixes, `fucompp`).')
out.append('')
out.append('| Source File | required `__emit` groups |')
out.append('|-------------|--------------------------|')
for p, g in sorted(required_files):
    out.append('| %s | %d |' % (p.replace('\\', '/'), g))
out.append('')
out.append('## How to re-decompile these')
out.append('')
out.append('1. Disassemble with Ghidra: `tools/ghidra_disasm.py <VA>`')
out.append('2. Transcribe each instruction into real MSVC6 inline asm mnemonics')
out.append('3. Only use `__emit` for instructions MSVC6 cannot encode correctly')
out.append('   (see decomp.md "Known MSVC6 inline asm limitations")')
out.append('4. Compile + diff to verify 100%% match')
out.append('')
if pure_dump:
    out.append('## Pure `__emit` dumps (no real mnemonics)')
    out.append('')
    out.append('These are byte-for-byte copies of the binary with no semantic value.')
    out.append('Highest priority for re-decompilation.')
    out.append('')
    out.append('| VA | Size (B) | Source File | `__emit` lines |')
    out.append('|----|----------|-------------|-----------------|')
    for va, size, p, el in pure_dump:
        out.append('| 0x%s | %d | %s | %d |' % (va.upper(), size, p.replace('\\', '/'), el))
    out.append('')
else:
    out.append('## Pure `__emit` dumps (no real mnemonics)')
    out.append('')
    out.append('**None remaining.** All files now contain real MSVC6 inline asm mnemonics.')
    out.append('')
out.append('## Heavy `__emit` (>15%% `__emit` lines, but has real mnemonics)')
out.append('')
out.append('These use real mnemonics for most instructions but have significant')
out.append('`__emit` sections. Review whether the `__emit` usage is justified (per the')
out.append('known MSVC6 limitations) or could be converted to real mnemonics.')
out.append('')
out.append('| VA | Size (B) | Source File | `__emit`/Total | % |')
out.append('|----|----------|-------------|-----------------|---|')
for va, size, p, e, t, r in heavy_emit:
    out.append('| 0x%s | %d | %s | %d/%d | %.0f%% |' % (va.upper(), size, p.replace('\\', '/'), e, t, r * 100))
out.append('')

with open('docs/EMIT_TECH_DEBT.md', 'w') as f:
    f.write('\n'.join(out))
print('Written: %d pure, %d heavy, %d clean, %d total' % (len(pure_dump), len(heavy_emit), clean, total_util))
