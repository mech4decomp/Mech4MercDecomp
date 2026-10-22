import re
import sys
p = sys.argv[1] if len(sys.argv) > 1 else 'src\mw4mercs\text\func_00436b40.c'
s = open(p).read()
s = re.sub(r'\bint3\b', 'int 3', s)
# 2-operand FPU st(n) -> st(0), st(n) (capstone omits the implicit st(0))
two_op = ['fsub', 'fsubr', 'fdiv', 'fdivr', 'fmul', 'fadd', 'fcomip', 'fucomip', 'fcom', 'fcomp']
for mnem in two_op:
    pat = re.compile(r'\b' + mnem + r'\s+st\((\d)\)\s*$', re.MULTILINE)
    s = pat.sub(lambda m: '%s st(0), st(%s)' % (mnem, m.group(1)), s)
# *p (pop) FPU ops encode with REVERSED operand order in MSVC6: fdivp st(2), st(0)
two_op_pop = ['fsubp', 'fdivp', 'fdivrp', 'fmulp', 'faddp', 'fsubrp']
for mnem in two_op_pop:
    pat = re.compile(r'\b' + mnem + r'\s+st\((\d)\)\s*$', re.MULTILINE)
    s = pat.sub(lambda m: '%s st(%s), st(0)' % (mnem, m.group(1)), s)
# single-operand FPU (fix any we wrongly expanded + strip)
one_op = ['fstp', 'fld', 'fxch', 'fst', 'fldcw']
for mnem in one_op:
    pat = re.compile(r'\b' + mnem + r'\s+st\((\d)\), st\((\d)\)')
    s = pat.sub(lambda m: '%s st(%s)' % (mnem, m.group(2)), s)
# rep/repne/repe string ops: capstone glues a trailing operand onto the bare
# op (register or dword immediate that are actually the NEXT instruction's raw
# bytes). MSVC6 accepts ONLY the bare zero-operand form. Collapse every one to
# the bare op; when the operand is an 8-hex-digit immediate those 4 bytes must
# be re-emitted verbatim to keep the layout exact (they follow the prefix byte).
_rep_ops = ('movsd', 'movsb', 'movsw', 'stosd', 'stosb', 'stosw', 'lodsd', 'lodsb', 'lodsw',
            'scasd', 'scasb', 'scasw')
def _rep_fix(m):
    prefix, op, tail = m.group(1), m.group(2), m.group(3)
    immm = re.fullmatch(r',\s*(0x[0-9a-fA-F]{8})\s*', tail)
    if immm:
        imm = int(immm.group(1), 16)
        return ('%s %s\n        __emit 0x%02X  // trailing bytes of %s operand\n'
                '        __emit 0x%02X\n        __emit 0x%02X\n        __emit 0x%02X'
                % (prefix, op, imm & 0xFF, op, (imm >> 8) & 0xFF, (imm >> 16) & 0xFF, (imm >> 24) & 0xFF))
    return '%s %s' % (prefix, op)
for _op in _rep_ops:
    s = re.sub(r'(rep|repe|repne)\s+(%s)\b(.*)$' % _op, _rep_fix, s, flags=re.MULTILINE)
# string ops with operands -> bare (MSVC6 infers the fixed registers)
s = re.sub(r'\bstos[bwd]\s+byte ptr es:\[edi\],\s+al', 'stosb', s)
s = re.sub(r'\bstos[bwd]\s+dword ptr es:\[edi\](?:,\s*(?:eax?|st\(0\)))?', lambda m: 'stosd' if 'dword' in m.group(0) else ('stosw' if 'word' in m.group(0) else 'stosb'), s)
s = re.sub(r'\bstos[bwd]\s+([^;,]+),\s*([^;]+)', lambda m: 'stosd' if 'dword' in m.group(0) else ('stosw' if 'word' in m.group(0) else 'stosb'), s)
s = re.sub(r'\bstosb\s+([^;,]+)', 'stosb', s)
s = re.sub(r'\bmovsb\s+byte ptr es:\[edi\],\s+byte ptr \[esi\]', 'movsb', s)
s = re.sub(r'\bmovsw\s+word ptr es:\[edi\],\s+word ptr \[esi\]', 'movsw', s)
s = re.sub(r'\bmovsd\s+dword ptr es:\[edi\],\s+dword ptr \[esi\]', 'movsd', s)
s = re.sub(r'\bmovsb\s+([^;,]+)', 'movsb', s)
s = re.sub(r'\bmovsw\s+([^;,]+)', 'movsw', s)
s = re.sub(r'\bmovsd\s+([^;,]+)', 'movsd', s)
s = re.sub(r'\blodsb\s+([^;,]+)', 'lodsb', s)
s = re.sub(r'\blodsd\s+([^;,]+)', 'lodsd', s)
s = re.sub(r'\blodsw\s+([^;,]+)', 'lodsw', s)
# alignment pads: lea reg,[reg] (no index/disp) is an MSVC npad -> emit raw bytes
regidx = {'eax': 0, 'ecx': 1, 'edx': 2, 'ebx': 3, 'esp': 4, 'ebp': 5, 'esi': 6, 'edi': 7}
def pad_repl(m):
    reg = m.group(1)
    modrm = 0x40 + (regidx[reg] << 3) + regidx[reg]
    return '__emit 0x8D  // alignment pad 8D %02X 00' % modrm + '\n__emit 0x%02X' % modrm + '\n__emit 0x00'
s = re.sub(r'lea\s+(e?(?:ax|bx|cx|dx|si|di|sp|bp)),\s*\[\1\]', pad_repl, s)
# fstp st(0) -> MSVC6 rejects the st(0) form; emit DD D8 raw
s = re.sub(r'^\s*fstp\s+st\(0\)\s*$', '__emit 0xDD  // fstp st(0)\\n__emit 0xD8', s, flags=re.MULTILINE)
# pushal/pushad -> MSVC6 uses pushad (60); pusha/pushaw -> pusha
s = re.sub(r'\bpushal\b', 'pushad', s)
s = re.sub(r'\bpushaw\b', 'pusha', s)
s = re.sub(r'\bpopal\b', 'popad', s)
s = re.sub(r'\bpopaw\b', 'popa', s)
# in/out string ops: strip capstone's explicit operand lists (MSVC6 infers)
s = re.sub(r'\boutsb\s+dx,\s+byte ptr \[esi\]', 'outsb', s)
s = re.sub(r'\boutsw\s+dx,\s+word ptr \[esi\]', 'outsw', s)
s = re.sub(r'\boutsd\s+dx,\s+dword ptr \[esi\]', 'outsd', s)
s = re.sub(r'\bouts\s+dx,\s+byte ptr \[esi\]', 'outsb', s)
s = re.sub(r'\binsb\s+byte ptr \[edi\],\s+dx', 'insb', s)
s = re.sub(r'\binsw\s+word ptr \[edi\],\s+dx', 'insw', s)
s = re.sub(r'\binsd\s+dword ptr \[edi\],\s+dx', 'insd', s)
s = re.sub(r'\bins\s+byte ptr \[edi\],\s+dx', 'insb', s)

import struct as _struct
# ---- zero-disp [esp] / [esp+0] mem forms: MSVC6 emits the no-disp8 (SIB)
# 8B 04 24 / 89 04 24 / C7 04 24 form; the reference uses explicit disp8=0
# (8B 44 24 00 / 89 44 24 00 / C7 44 24 00 imm32). Emit the exact modrm/SIB.
def _esp4_lea(m):
    reg = m.group(1)
    return ('__emit 0x8D  // lea %s, [esp+0] (explicit disp8=0)\n'
            '__emit 0x4C\n__emit 0x24\n__emit 0x00' % reg)
s = re.sub(r'\blea\s+(e(?:ax|cx|dx|bx|sp|bp|si|di))\s*,\s*\[esp\s*\]\s*$', _esp4_lea, s, flags=re.MULTILINE)
s = re.sub(r'\blea\s+(e(?:ax|cx|dx|bx|sp|bp|si|di))\s*,\s*\[esp\s*\+\s*0\]\s*$', _esp4_lea, s, flags=re.MULTILINE)

def _esp4_movreg(m):
    # mov reg, dword ptr [esp+0]  -> 8B 44 24 00
    op, reg = m.group(1), m.group(2)
    # 8B /r opcode; reg field in modrm low nibble
    regbits = {'eax': 0, 'ecx': 1, 'edx': 2, 'ebx': 3, 'esp': 4, 'ebp': 5, 'esi': 6, 'edi': 7}[reg]
    return ('__emit 0x8B  // %s %s, dword ptr [esp+0]\n'
            '__emit 0x44\n__emit 0x24\n__emit 0x00' % (op, reg))
s = re.sub(r'^\s*mov\s+(e(?:ax|cx|dx|bx|sp|bp|si|di))\s*,\s*dword ptr \[esp\s*\]\s*$', _esp4_movreg, s, flags=re.MULTILINE)
s = re.sub(r'^\s*mov\s+(e(?:ax|cx|dx|bx|sp|bp|si|di))\s*,\s*dword ptr \[esp\s*\+\s*0\]\s*$', _esp4_movreg, s, flags=re.MULTILINE)

# 16-bit zero-disp [esp] mem forms: MSVC6 emits the no-disp8 SIB (66 8B 14 24)
# but the reference uses explicit disp8=0 (66 8B 54 24 00). 66 prefix + 8B /r
# + modrm 0x44|(regfield<<3) + SIB 0x24 + disp 0x00.
def _esp4_movreg16(m):
    reg = m.group(1)
    regbits = {'ax': 0, 'cx': 1, 'dx': 2, 'bx': 3, 'sp': 4, 'bp': 5, 'si': 6, 'di': 7}[reg]
    return ('__emit 0x66  // mov %s, word ptr [esp+0] (explicit disp8=0)\n'
            '__emit 0x8B\n__emit 0x%02X\n__emit 0x24\n__emit 0x00' % (reg, 0x44 + (regbits << 3)))
s = re.sub(r'^\s*mov\s+((?:ax|cx|dx|bx|sp|bp|si|di))\s*,\s*word ptr \[esp\s*\]\s*$', _esp4_movreg16, s, flags=re.MULTILINE)
s = re.sub(r'^\s*mov\s+((?:ax|cx|dx|bx|sp|bp|si|di))\s*,\s*word ptr \[esp\s*\+\s*0\]\s*$', _esp4_movreg16, s, flags=re.MULTILINE)

def _esp4_mov_store(m):
    reg = m.group(1)
    regbits = {'eax': 0, 'ecx': 1, 'edx': 2, 'ebx': 3, 'esp': 4, 'ebp': 5, 'esi': 6, 'edi': 7}[reg]
    return ('__emit 0x89  // mov dword ptr [esp+0], %s\n'
            '__emit 0x44\n__emit 0x24\n__emit 0x00' % reg)
s = re.sub(r'^\s*mov\s+dword ptr \[esp\s*\]\s*,\s*(e(?:ax|cx|dx|bx|sp|bp|si|di))\s*$', _esp4_mov_store, s, flags=re.MULTILINE)
s = re.sub(r'^\s*mov\s+dword ptr \[esp\s*\+\s*0\]\s*,\s*(e(?:ax|cx|dx|bx|sp|bp|si|di))\s*$', _esp4_mov_store, s, flags=re.MULTILINE)

def _esp4_imm(m):
    raw = m.group(1)
    imm = int(raw, 16) if raw.lower().startswith('0x') else int(raw)
    return ('__emit 0xC7  // mov dword ptr [esp+0], imm32\n'
            '__emit 0x44\n__emit 0x24\n__emit 0x00\n'
            '__emit 0x%02X\n__emit 0x%02X\n__emit 0x%02X\n__emit 0x%02X' % (
                imm & 0xFF, (imm >> 8) & 0xFF, (imm >> 16) & 0xFF, (imm >> 24) & 0xFF))
s = re.sub(r'^\s*mov\s+dword ptr \[esp\s*\]\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*$', _esp4_imm, s, flags=re.MULTILINE)
s = re.sub(r'^\s*mov\s+dword ptr \[esp\s*\+\s*0\]\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*$', _esp4_imm, s, flags=re.MULTILINE)

# cmp dword ptr [esp], imm32 -> MSVC6 emits 81 3C 24 (no disp8); the reference
# uses explicit disp8=0: 81 7C 24 00 <imm32>. modrm 0x7C + SIB 0x24 + disp 0x00.
def _esp4_cmp_imm(m):
    raw = m.group(1)
    imm = int(raw, 16) if raw.lower().startswith('0x') else int(raw)
    return ('__emit 0x81  // cmp dword ptr [esp+0], imm32 (explicit disp8=0)\n'
            '__emit 0x7C\n__emit 0x24\n__emit 0x00\n'
            '__emit 0x%02X\n__emit 0x%02X\n__emit 0x%02X\n__emit 0x%02X' % (
                imm & 0xFF, (imm >> 8) & 0xFF, (imm >> 16) & 0xFF, (imm >> 24) & 0xFF))
s = re.sub(r'\bcmp\s+dword ptr \[esp\s*\]\s*,\s*(0x[0-9a-fA-F]+)\s*$', _esp4_cmp_imm, s, flags=re.MULTILINE)
s = re.sub(r'\bcmp\s+dword ptr \[esp\s*\+\s*0\]\s*,\s*(0x[0-9a-fA-F]+)\s*$', _esp4_cmp_imm, s, flags=re.MULTILINE)

# FPU zero-disp [esp] mem ops -> explicit disp8=0. modrm base 0x40 (mod=01)
# + 0x04 (SIB rm=100) + (regfield<<3); SIB 0x24 + disp 0x00 follow.
def _fpu_esp(op, opc, regfield):
    return ('__emit 0x%02X  // %s dword ptr [esp] (explicit disp8=0)\n'
            '__emit 0x%02X\n__emit 0x24\n__emit 0x00' % (opc, op, 0x44 + (regfield << 3)))
_fpu_mm = {
    'fld': (0xD9, 0), 'fst': (0xD9, 2), 'fstp': (0xD9, 3),
    'fist': (0xDB, 2), 'fistp': (0xDB, 3), 'fild': (0xDB, 0),
    'fadd': (0xD8, 0), 'fmul': (0xD8, 1), 'fcom': (0xD8, 2),
    'fcomp': (0xD8, 3), 'fsub': (0xD8, 4), 'fsubr': (0xD8, 5),
    'fdiv': (0xD8, 6), 'fdivr': (0xD8, 7),
}
for _m, (_oc, _rf) in _fpu_mm.items():
    s = re.sub(r'^\s*' + _m + r'\s+dword ptr \[esp(?:\s*\+\s*0)?\]\s*$',
               lambda m, mn=_m, o=_oc, rf=_rf: _fpu_esp(mn, o, rf), s, flags=re.MULTILINE)

# FPU zero-disp [esp] QWORD mem ops -> explicit disp8=0. Same SIB scheme as the
# dword forms but with the qword opcodes (DF/DD/DC). MSVC6 drops the 00 disp
# byte (e.g. fild qword ptr [esp] -> DF 2C 24 instead of ref DF 6C 24 00).
def _fpu_esp_q(op, opc, regfield):
    return ('__emit 0x%02X  // %s qword ptr [esp] (explicit disp8=0)\n'
            '__emit 0x%02X\n__emit 0x24\n__emit 0x00' % (opc, op, 0x44 + (regfield << 3)))
_fpu_mm_q = {
    'fld': (0xDD, 0), 'fstp': (0xDD, 3),
    'fild': (0xDF, 5), 'fistp': (0xDF, 7),
    'fadd': (0xDC, 0), 'fmul': (0xDC, 1),
    'fsub': (0xDC, 4), 'fdiv': (0xDC, 6),
}
for _m, (_oc, _rf) in _fpu_mm_q.items():
    s = re.sub(r'^\s*' + _m + r'\s+qword ptr \[esp(?:\s*\+\s*0)?\]\s*$',
               lambda m, mn=_m, o=_oc, rf=_rf: _fpu_esp_q(mn, o, rf), s, flags=re.MULTILINE)

open(p, 'w').write(s)
print('fixed common asm quirks in', p)
