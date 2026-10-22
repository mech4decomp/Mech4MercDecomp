/*
 * FUN_0068bbbd (extent 0x68bbbd-0x68bda4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00686790(void);
extern void __cdecl FUN_0068c190(void);
extern void __cdecl FUN_006b07a0(void);

__declspec(naked) void FUN_0068bbbd(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 0x24
        push    ebx
        mov    ebx, dword ptr [esp + 0x38]
        push    ebp
        mov    ebp, dword ptr [esp + 0x30]
        push    esi
        push    edi
        push    ebx
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x40]
        push    eax
        push    ecx
        push    ebp
        mov    ecx, esi
        call    FUN_006b07a0
        test    bl, bl
        jne    L_bd9a
        mov    edi, dword ptr [ebp + 0x35c]
        xor    ebx, ebx
        test    edi, edi
        je    L_bc2a
        mov    edx, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [edx + 4]
        test    edi, edi
        mov    ebx, eax
        je    L_bc2a
        mov    eax, dword ptr [edi + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00419480
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c410
L_bc2a:
        mov    edx, dword ptr [esi + 0x4c]
        mov    ecx, dword ptr [esi + 0x40]
        inc    edx
        mov    eax, edx
        mov    dword ptr [esi + 0x4c], edx
        mov    edx, dword ptr [esi + 0x44]
        sub    edx, ecx
        sar    edx, 2
        cmp    eax, edx
        jge    L_bc94
        cmp    eax, -1
        jne    L_bc4c
        mov    edi, dword ptr [esi + 0x14]
        jmp    L_bc52
L_bc4c:
        mov    ecx, dword ptr [esi + 0x40]
        mov    edi, dword ptr [ecx + eax*4]
L_bc52:
        mov    al, byte ptr [edi + 0xc]
        test    al, al
        jne    L_bc67
        pop    edi
        mov    byte ptr [esi + 0x30], 1
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    0x10
L_bc67:
        mov    edx, dword ptr [edi + 0x18]
        mov    esi, dword ptr [edi + 0x10]
        push    edx
        mov    ecx, esi
        call    FUN_00686790
        mov    eax, dword ptr [ebp]
        push    0
        push    esi
        mov    ecx, ebp
        mov    dword ptr [edi + 0x10], 0
        call    dword ptr [eax + 0x1c8]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    0x10
L_bc94:
        mov    eax, dword ptr [esi + 0x20]
        dec    eax
        je    L_bd48
        dec    eax
        je    L_bd30
        dec    eax
        jne    L_bd9a
        mov    ecx, esi
        mov    byte ptr [esi + 0x19], 0
        mov    dword ptr [esi + 0x2c], 0
        call    FUN_0068c190
        mov    ebx, dword ptr [ebx + 0x50]
        cmp    ebx, 9
        ja    L_bd05
        jmp    dword ptr [ebx*4 + 0x68bda4]
        mov    eax, 0x10
        jmp    L_bd07
        mov    eax, 0x11
        jmp    L_bd07
        mov    eax, 2
        jmp    L_bd07
        mov    eax, 8
        jmp    L_bd07
        mov    eax, 4
        jmp    L_bd07
        mov    eax, 0x20
        jmp    L_bd07
        mov    eax, 0x40
        jmp    L_bd07
        mov    eax, 0x100
        jmp    L_bd07
L_bd05:
        xor    eax, eax
L_bd07:
        mov    edx, dword ptr [esi]
        push    eax
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 0x40]
        mov    ecx, dword ptr [esp + 0x3c]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    0x10
L_bd30:
        mov    ebx, dword ptr [ebx + 0x50]
        xor    eax, eax
        cmp    ebx, 9
        mov    byte ptr [esi + 0x19], 0
        mov    dword ptr [esi + 0x2c], eax
        ja    L_bd07
        jmp    dword ptr [ebx*4 + 0x68bdcc]
L_bd48:
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x38]
        mov    eax, dword ptr [ebp]
        push    0
        lea    ecx, [esp + 0x14]
        push    ecx
        push    0
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x20], 0xbf800000
        mov    dword ptr [esp + 0x24], 0xbf800000
        mov    dword ptr [esp + 0x28], 0xbf800000
        mov    dword ptr [esp + 0x2c], 0xbf800000
        mov    dword ptr [esp + 0x30], 0xbf800000
        mov    dword ptr [esp + 0x34], 0xbf800000
        call    dword ptr [eax + 0x1d0]
L_bd9a:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    0x10
        // jump-table data @ 0x0068BDA4 (10 relocated pointers)
        __emit 0xCD
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xD4
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xDB
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xE2
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xE9
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xF0
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xF7
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0x05
        __emit 0xBD
        __emit 0x68
        __emit 0x00
        __emit 0x05
        __emit 0xBD
        __emit 0x68
        __emit 0x00
        __emit 0xFE
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        // jump-table data @ 0x0068BDCC (54 relocated pointers)
        __emit 0xCD
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xD4
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xDB
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xE2
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xE9
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xF0
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0xF7
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0x07
        __emit 0xBD
        __emit 0x68
        __emit 0x00
        __emit 0x07
        __emit 0xBD
        __emit 0x68
        __emit 0x00
        __emit 0xFE
        __emit 0xBC
        __emit 0x68
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x41
        __emit 0x44
        __emit 0x8B
        __emit 0xD0
        __emit 0x2B
        __emit 0xD0
        __emit 0xC1
        __emit 0xFA
        __emit 0x02
        __emit 0x85
        __emit 0xD2
        __emit 0x56
        __emit 0x8B
        __emit 0x71
        __emit 0x40
        __emit 0x7E
        __emit 0x0F
        __emit 0x57
        __emit 0x8B
        __emit 0x38
        __emit 0x89
        __emit 0x3E
        __emit 0x83
        __emit 0xC0
        __emit 0x04
        __emit 0x83
        __emit 0xC6
        __emit 0x04
        __emit 0x4A
        __emit 0x75
        __emit 0xF3
        __emit 0x5F
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x08
        __emit 0x50
        __emit 0x89
        __emit 0x71
        __emit 0x44
        __emit 0xE8
        __emit 0x42
        __emit 0x48
        __emit 0x02
        __emit 0x00
        __emit 0x5E
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xA1
        __emit 0x4C
        __emit 0x24
        __emit 0x7F
        __emit 0x00
        __emit 0x83
        __emit 0xEC
        __emit 0x14
        __emit 0x53
        __emit 0x55
        __emit 0x56
        __emit 0x57
        __emit 0x50
        __emit 0x8B
        __emit 0xF1
        __emit 0xE8
        __emit 0xFC
        __emit 0x8A
        __emit 0x06
        __emit 0x00
        __emit 0x8B
        __emit 0x5C
        __emit 0x24
        __emit 0x2C
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x28
        __emit 0x53
        __emit 0x51
        __emit 0x8B
        __emit 0xCE
        __emit 0xE8
        __emit 0x1B
        __emit 0x48
        __emit 0x02
        __emit 0x00
        __emit 0x8B
        __emit 0x46
        __emit 0x44
        __emit 0x8B
        __emit 0x7E
        __emit 0x40
        __emit 0x2B
        __emit 0xC7
        __emit 0xC1
        __emit 0xF8
        __emit 0x02
        __emit 0x85
        __emit 0xC0
        __emit 0x7E
        __emit 0x42
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x10
        __emit 0x8B
        __emit 0x07
        __emit 0x85
        __emit 0xC0
        __emit 0x74
        __emit 0x2A
        __emit 0x8B
        __emit 0x0D
        __emit 0x38
        __emit 0x24
        __emit 0x7F
        __emit 0x00
        __emit 0x8B
        __emit 0xD0
        __emit 0x52
        __emit 0xE8
        __emit 0xE4
        __emit 0xDD
        __emit 0xF4
        __emit 0xFF
        __emit 0x8B
        __emit 0x2F
        __emit 0x85
        __emit 0xED
        __emit 0x74
        __emit 0x10
        __emit 0x8B
        __emit 0xCD
        __emit 0xE8
        __emit 0x67
        __emit 0xD6
        __emit 0xF4
        __emit 0xFF
        __emit 0x55
        __emit 0xE8
        __emit 0x41
        __emit 0xC6
        __emit 0xD7
        __emit 0xFF
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0xC7
        __emit 0x07
    }
}
