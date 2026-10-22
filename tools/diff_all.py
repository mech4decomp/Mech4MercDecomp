"""
Diff all 23 compiled functions against the reference binary.
"""
import subprocess
import sys

funcs = [
    (0x006D3B60, 'func_006d3b60', 160),
    (0x006D2A80, 'func_006d2a80', 151),
    (0x006D3000, 'func_006d3000', 154),
    (0x006D3010, 'func_006d3010', 162),
    (0x006D3200, 'func_006d3200', 148),
    (0x006D43C0, 'func_006d43c0', 176),
    (0x006E0F80, 'func_006e0f80', 149),
    (0x006E2A30, 'func_006e2a30', 154),
    (0x006E2C30, 'func_006e2c30', 165),
    (0x006E2C60, 'func_006e2c60', 175),
    (0x006E2C80, 'func_006e2c80', 168),
    (0x006E2D40, 'func_006e2d40', 146),
    (0x006E2DD0, 'func_006e2dd0', 155),
    (0x006E2F00, 'func_006e2f00', 170),
    (0x006E32D0, 'func_006e32d0', 164),
    (0x006E3750, 'func_006e3750', 172),
    (0x006E7020, 'func_006e7020', 161),
    (0x006E7680, 'func_006e7680', 157),
    (0x006EE070, 'func_006ee070', 158),
    (0x006EE340, 'func_006ee340', 158),
    (0x006F3F80, 'func_006f3f80', 166),
    (0x006FBA70, 'func_006fba70', 151),
    (0x006FC970, 'func_006fc970', 171),
]

for va, name, size in funcs:
    cmd = [
        'python', 'tools\\diff.py',
        '--func', f'0x{va:08X}',
        '--obj', f'build\\obj\\{name}.obj',
        '--exe', 'reference\\MW4Mercs.exe',
        '--csv', 'build\\ghidra\\MW4_project\\dumps\\functions.csv',
        '--size', str(size)
    ]
    result = subprocess.run(cmd, capture_output=True, text=True)
    output = result.stdout.strip()
    if result.returncode == 0:
        print(f'{name}: {output.split(chr(10))[-1]}')
    else:
        print(f'{name}: ERROR - {output}')
