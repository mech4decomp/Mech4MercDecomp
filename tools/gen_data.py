import sys, os, re
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
from diff import read_pe_text_section

# gen_data.py <va> <size> <outpath>
va = int(sys.argv[1], 16)
size = int(sys.argv[2], 0)
outpath = sys.argv[3]

exe_text, text_rva, image_base = read_pe_text_section(os.path.join(ROOT, 'reference', 'MW4Mercs.exe'))
off = va - 0x400000 - text_rva
seg = exe_text[off:off + size]

rows = ['__emit 0x%02X' % b for b in seg]

lines = ['/*', ' * %s' % outpath, ' *',
         ' * DATA_%08x (0x%x bytes @ 0x%x-0x%x) - verbatim .text data'
         ' (jump-table / pointer table; relocated entries reproduced).'
         ' gen via tools/gen_data.py.' % (va, size, va, va + size), ' */',
         '#pragma warning(disable : 4035 4793)', '',
         '__declspec(naked) void DATA_%08x(void)' % va, '{', '    __asm {']
lines += ['        ' + r for r in rows]
lines += ['    }', '}']

open(outpath, 'w').write('\n'.join(lines) + '\n')
print('DATA %08x %d bytes -> %s' % (va, size, outpath))
