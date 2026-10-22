"""
Fix MSVC inline asm files to use _emit for absolute memory accesses.
MSVC6 inline asm does not support mov reg, [imm32] or mov [imm32], reg.
"""
import re
import sys

def fix_file(filepath):
    with open(filepath, 'r') as f:
        content = f.read()
    
    # Patterns for absolute memory accesses in __asm blocks
    # mov reg, [0x...] -> _emit bytes
    # mov [0x...], reg -> _emit bytes
    
    lines = content.split('\n')
    in_asm = False
    fixed_lines = []
    
    for line in lines:
        stripped = line.strip()
        
        if stripped == '__asm {':
            in_asm = True
            fixed_lines.append(line)
            continue
        
        if in_asm and stripped == '}':
            in_asm = False
            fixed_lines.append(line)
            continue
        
        if in_asm:
            # Check for absolute memory accesses
            # mov eax, dword ptr [0x...]
            m = re.match(r'(\s*)mov\s+(eax|ecx|edx|ebx|esi|edi|al|ax),\s*dword\s+ptr\s+\[(0x[0-9a-fA-F]+)\]', stripped)
            if m:
                indent = m.group(1)
                reg = m.group(2)
                addr = int(m.group(3), 16)
                addr_bytes = addr.to_bytes(4, 'little')
                
                if reg == 'eax':
                    opcode = [0xA1]
                elif reg == 'ecx':
                    opcode = [0x8B, 0x0D]
                elif reg == 'edx':
                    opcode = [0x8B, 0x15]
                elif reg == 'ebx':
                    opcode = [0x8B, 0x1D]
                elif reg == 'esi':
                    opcode = [0x8B, 0x35]
                elif reg == 'edi':
                    opcode = [0x8B, 0x3D]
                elif reg == 'al':
                    opcode = [0xA0]
                elif reg == 'ax':
                    opcode = [0x66, 0xA1]
                else:
                    fixed_lines.append(line)
                    continue
                
                bytes_list = opcode + list(addr_bytes)
                fixed_lines.append(f'{indent}; mov {reg}, [{m.group(3)}]')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov dword ptr [0x...], reg
            m = re.match(r'(\s*)mov\s+dword\s+ptr\s+\[(0x[0-9a-fA-F]+)\],\s*(eax|ecx|edx|ebx|esi|edi|al)', stripped)
            if m:
                indent = m.group(1)
                addr = int(m.group(2), 16)
                reg = m.group(3)
                addr_bytes = addr.to_bytes(4, 'little')
                
                if reg == 'eax':
                    opcode = [0xA3]
                elif reg == 'ecx':
                    opcode = [0x89, 0x0D]
                elif reg == 'edx':
                    opcode = [0x89, 0x15]
                elif reg == 'ebx':
                    opcode = [0x89, 0x1D]
                elif reg == 'esi':
                    opcode = [0x89, 0x35]
                elif reg == 'edi':
                    opcode = [0x89, 0x3D]
                elif reg == 'al':
                    opcode = [0xA2]
                else:
                    fixed_lines.append(line)
                    continue
                
                bytes_list = opcode + list(addr_bytes)
                fixed_lines.append(f'{indent}; mov [{m.group(2)}], {reg}')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov byte ptr [0x...], reg
            m = re.match(r'(\s*)mov\s+byte\s+ptr\s+\[(0x[0-9a-fA-F]+)\],\s*(bl|al|dl|cl)', stripped)
            if m:
                indent = m.group(1)
                addr = int(m.group(2), 16)
                reg = m.group(3)
                addr_bytes = addr.to_bytes(4, 'little')
                
                if reg == 'al':
                    opcode = [0xA2]
                elif reg == 'bl':
                    opcode = [0x88, 0x1D]
                elif reg == 'cl':
                    opcode = [0x88, 0x0D]
                elif reg == 'dl':
                    opcode = [0x88, 0x15]
                else:
                    fixed_lines.append(line)
                    continue
                
                bytes_list = opcode + list(addr_bytes)
                fixed_lines.append(f'{indent}; mov byte ptr [{m.group(2)}], {reg}')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov [0x...], imm32 (C7 05 pattern) - value can be 0 or 0x...
            m = re.match(r'(\s*)mov\s+\[(0x[0-9a-fA-F]+)\],\s*(0x[0-9a-fA-F]+|\d+)', stripped)
            if m:
                indent = m.group(1)
                addr = int(m.group(2), 16)
                val_str = m.group(3)
                if val_str.startswith('0x') or val_str.startswith('0X'):
                    val = int(val_str, 16)
                else:
                    val = int(val_str)
                addr_bytes = addr.to_bytes(4, 'little')
                val_bytes = val.to_bytes(4, 'little')
                
                bytes_list = [0xC7, 0x05] + list(addr_bytes) + list(val_bytes)
                fixed_lines.append(f'{indent}; mov [{m.group(2)}], {val_str}')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov dword ptr [0x...], imm32 (C7 05 pattern)
            m = re.match(r'(\s*)mov\s+dword\s+ptr\s+\[(0x[0-9a-fA-F]+)\],\s*(0x[0-9a-fA-F]+|\d+)', stripped)
            if m:
                indent = m.group(1)
                addr = int(m.group(2), 16)
                val_str = m.group(3)
                if val_str.startswith('0x') or val_str.startswith('0X'):
                    val = int(val_str, 16)
                else:
                    val = int(val_str)
                addr_bytes = addr.to_bytes(4, 'little')
                val_bytes = val.to_bytes(4, 'little')
                
                bytes_list = [0xC7, 0x05] + list(addr_bytes) + list(val_bytes)
                fixed_lines.append(f'{indent}; mov dword ptr [{m.group(2)}], {val_str}')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov word ptr [0x...], ax (66 89 05 pattern)
            m = re.match(r'(\s*)mov\s+word\s+ptr\s+\[(0x[0-9a-fA-F]+)\],\s*ax', stripped)
            if m:
                indent = m.group(1)
                addr = int(m.group(2), 16)
                addr_bytes = addr.to_bytes(4, 'little')
                
                bytes_list = [0x66, 0xA3] + list(addr_bytes)
                fixed_lines.append(f'{indent}; mov word ptr [{m.group(2)}], ax')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov [0x...], reg (without dword ptr)
            m = re.match(r'(\s*)mov\s+\[(0x[0-9a-fA-F]+)\],\s*(eax|ecx|edx|ebx|esi|edi)', stripped)
            if m:
                indent = m.group(1)
                addr = int(m.group(2), 16)
                reg = m.group(3)
                addr_bytes = addr.to_bytes(4, 'little')
                
                if reg == 'eax':
                    opcode = [0xA3]
                elif reg == 'ecx':
                    opcode = [0x89, 0x0D]
                elif reg == 'edx':
                    opcode = [0x89, 0x15]
                elif reg == 'ebx':
                    opcode = [0x89, 0x1D]
                elif reg == 'esi':
                    opcode = [0x89, 0x35]
                elif reg == 'edi':
                    opcode = [0x89, 0x3D]
                elif reg == 'ebp':
                    opcode = [0x89, 0x2D]
                else:
                    fixed_lines.append(line)
                    continue
                
                bytes_list = opcode + list(addr_bytes)
                fixed_lines.append(f'{indent}; mov [{m.group(2)}], {reg}')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov al, byte ptr [0x...]
            m = re.match(r'(\s*)mov\s+al,\s*byte\s+ptr\s+\[(0x[0-9a-fA-F]+)\]', stripped)
            if m:
                indent = m.group(1)
                addr = int(m.group(2), 16)
                addr_bytes = addr.to_bytes(4, 'little')
                bytes_list = [0xA0] + list(addr_bytes)
                fixed_lines.append(f'{indent}; mov al, byte ptr [{m.group(2)}]')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov ax, word ptr [0x...]
            m = re.match(r'(\s*)mov\s+ax,\s*word\s+ptr\s+\[(0x[0-9a-fA-F]+)\]', stripped)
            if m:
                indent = m.group(1)
                addr = int(m.group(2), 16)
                addr_bytes = addr.to_bytes(4, 'little')
                bytes_list = [0x66, 0xA1] + list(addr_bytes)
                fixed_lines.append(f'{indent}; mov ax, word ptr [{m.group(2)}]')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            # mov reg, [0x...] (without dword ptr)
            m = re.match(r'(\s*)mov\s+(eax|ecx|edx|ebx|esi|edi|al|ax),\s*\[(0x[0-9a-fA-F]+)\]', stripped)
            if m:
                indent = m.group(1)
                reg = m.group(2)
                addr = int(m.group(3), 16)
                addr_bytes = addr.to_bytes(4, 'little')
                
                if reg == 'eax':
                    opcode = [0xA1]
                elif reg == 'ecx':
                    opcode = [0x8B, 0x0D]
                elif reg == 'edx':
                    opcode = [0x8B, 0x15]
                elif reg == 'ebx':
                    opcode = [0x8B, 0x1D]
                elif reg == 'esi':
                    opcode = [0x8B, 0x35]
                elif reg == 'edi':
                    opcode = [0x8B, 0x3D]
                elif reg == 'al':
                    opcode = [0xA0]
                elif reg == 'ax':
                    opcode = [0x66, 0xA1]
                else:
                    fixed_lines.append(line)
                    continue
                
                bytes_list = opcode + list(addr_bytes)
                fixed_lines.append(f'{indent}; mov {reg}, [{m.group(3)}]')
                for b in bytes_list:
                    fixed_lines.append(f'{indent}_emit 0x{b:02X}')
                continue
            
            fixed_lines.append(line)
        else:
            fixed_lines.append(line)
    
    result = '\n'.join(fixed_lines)
    with open(filepath, 'w') as f:
        f.write(result)
    
    print(f"Fixed: {filepath}")

if __name__ == '__main__':
    import glob, os, sys
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    pattern = (sys.argv[1] if len(sys.argv) > 1
               else os.path.join(root, 'src', 'mw4mercs', 'text', 'func_*.c'))
    for f in sorted(glob.glob(pattern)):
        fix_file(f)
