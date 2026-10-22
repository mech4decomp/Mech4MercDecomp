/*
 * FUN_005f1706 (extent 0x5f1706-0x5f1d3c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd268;
extern char   g_15e8005f;
extern void __cdecl FUN_005f2780(void);
extern void __cdecl FUN_005f27a0(void);
extern void __cdecl FUN_005f27b0(void);
extern void __cdecl FUN_005f2890(void);
extern void __cdecl FUN_005f28a0(void);
extern void __cdecl FUN_005f2980(void);
extern void __cdecl FUN_005f29a0(void);
extern void __cdecl FUN_005f2ab0(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_0063af40(void);
extern void __cdecl FUN_0063b2e0(void);
extern void __cdecl FUN_0065d1c0(void);

__declspec(naked) void FUN_005f1706(void)
{
    __asm {
        // jump-table tail of FUN_005f1570 @ 0x005F1706 (42 bytes of data,
        // literal patched addresses; one byte per __emit line)
        __emit 0x8B  // jt dword 0x15C0FF8B
        __emit 0xFF
        __emit 0xC0
        __emit 0x15
        __emit 0x5F  // jt dword 0x15E8005F
        __emit 0x00
        __emit 0xE8
        __emit 0x15
        __emit 0x5F  // jt dword 0x15F6005F
        __emit 0x00
        __emit 0xF6
        __emit 0x15
        __emit 0x5F  // jt dword 0x1613005F
        __emit 0x00
        __emit 0x13
        __emit 0x16
        __emit 0x5F  // jt dword 0x162F005F
        __emit 0x00
        __emit 0x2F
        __emit 0x16
        __emit 0x5F  // jt dword 0x1657005F
        __emit 0x00
        __emit 0x57
        __emit 0x16
        __emit 0x5F  // jt dword 0x1674005F
        __emit 0x00
        __emit 0x74
        __emit 0x16
        __emit 0x5F  // jt dword 0x168D005F
        __emit 0x00
        __emit 0x8D
        __emit 0x16
        __emit 0x5F  // jt dword 0x16A6005F
        __emit 0x00
        __emit 0xA6
        __emit 0x16
        __emit 0x5F  // jt dword 0x16C9005F
        __emit 0x00
        __emit 0xC9
        __emit 0x16
        __emit 0x5F  // jt dword 0xEC83005F (last jt byte @ 0x5F172F)
        __emit 0x00
        sub    esp, 0x74
        push   esi
        push   edi
        mov    edi, ecx
        mov    ecx, dword ptr [esp + 0x80]
        test    ecx, ecx
        mov    dword ptr [esp + 0x60], edi
        je    L_1d31
        call    FUN_005faef0
        mov    ecx, dword ptr [eax + 4]
        sub    ecx, dword ptr [eax]
        test    ecx, 0xfffffffc
        je    L_1d31
        mov    eax, dword ptr [g_007dd268]
        test    eax, eax
        mov    esi, 2
        je    L_1796
        cmp    dword ptr [eax + 0x40ee0], esi
        jne    L_1796
        push    0x3b6
        mov    byte ptr [esp + 0xe], 1
        call    FUN_0063af40
        add    esp, 4
        cmp    eax, esi
        jge    L_17bb
        pop    edi
        xor    al, al
        pop    esi
        add    esp, 0x74
        ret    8
L_1796:
        push    1
        mov    byte ptr [esp + 0xe], 0
        call    FUN_0063af40
        add    esp, 4
        cmp    eax, esi
        jge    L_17bb
        push    esi
        call    FUN_0063af40
        add    esp, 4
        cmp    eax, 1
        jl    L_1d31
L_17bb:
        lea    edx, [esp + 0xb]
        push    edx
        lea    ecx, [esp + 0x68]
        call    FUN_005f2980
        mov    eax, dword ptr [edi]
        cmp    eax, 9
        ja    L_1d28
        mov    edi, 4
        jmp    dword ptr [eax*4 + 0x5f1d3c]
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x44], 1
        je    L_180b
        test    eax, eax
        je    L_1800
        mov    dword ptr [eax], 1
        mov    eax, dword ptr [esp + 0x68]
L_1800:
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_180b:
        push    1
        lea    ecx, [esp + 0x48]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x48], esi
        je    L_1844
        test    eax, eax
        je    L_1839
        mov    dword ptr [eax], esi
        mov    eax, dword ptr [esp + 0x68]
L_1839:
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_1844:
        push    1
        lea    edx, [esp + 0x4c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x4c], 3
        je    L_1885
        test    eax, eax
        je    L_187a
        mov    dword ptr [eax], 3
        mov    eax, dword ptr [esp + 0x68]
L_187a:
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_1885:
        push    1
        lea    ecx, [esp + 0x50]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x50], 1
        je    L_18c3
        test    eax, eax
        je    L_18bb
        mov    dword ptr [eax], 1
        mov    eax, dword ptr [esp + 0x68]
L_18bb:
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_18d8
L_18c3:
        push    1
        lea    edx, [esp + 0x54]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov    eax, dword ptr [esp + 0x68]
L_18d8:
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0xc], esi
        je    L_18fc
        lea    ecx, [esp + 0xc]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1911
L_18fc:
        push    1
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov    eax, dword ptr [esp + 0x68]
L_1911:
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x10], 3
        je    L_193c
        lea    ecx, [esp + 0x10]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_193c:
        push    1
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x14], edi
        je    L_197d
        lea    ecx, [esp + 0x14]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_197d:
        push    1
        lea    edx, [esp + 0x18]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x18], 5
        je    L_19c2
        lea    ecx, [esp + 0x18]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_19c2:
        push    1
        lea    edx, [esp + 0x1c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x1c], 6
        je    L_1a07
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_1a07:
        push    1
        lea    edx, [esp + 0x20]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x20], 7
        je    L_1a4c
        lea    ecx, [esp + 0x20]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_1a4c:
        push    1
        lea    edx, [esp + 0x24]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x24], edi
        je    L_1a8a
        lea    ecx, [esp + 0x24]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1a9f
L_1a8a:
        push    1
        lea    edx, [esp + 0x28]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov    eax, dword ptr [esp + 0x68]
L_1a9f:
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x28], 5
        je    L_1ac7
        lea    ecx, [esp + 0x28]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1adc
L_1ac7:
        push    1
        lea    edx, [esp + 0x2c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov    eax, dword ptr [esp + 0x68]
L_1adc:
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x2c], 6
        je    L_1b04
        lea    ecx, [esp + 0x2c]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1b19
L_1b04:
        push    1
        lea    edx, [esp + 0x30]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov    eax, dword ptr [esp + 0x68]
L_1b19:
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x30], 7
        je    L_1b44
        lea    ecx, [esp + 0x30]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c88
L_1b44:
        push    1
        lea    edx, [esp + 0x34]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp    L_1c88
        mov    eax, dword ptr [esp + 0x68]
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x34], 1
        je    L_1b86
        lea    ecx, [esp + 0x34]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1b9b
L_1b86:
        push    1
        lea    edx, [esp + 0x38]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov    eax, dword ptr [esp + 0x68]
L_1b9b:
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x38], esi
        je    L_1bbf
        lea    ecx, [esp + 0x38]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1bd4
L_1bbf:
        push    1
        lea    edx, [esp + 0x3c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov    eax, dword ptr [esp + 0x68]
L_1bd4:
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x3c], 3
        je    L_1bfc
        lea    ecx, [esp + 0x3c]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c11
L_1bfc:
        push    1
        lea    edx, [esp + 0x40]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov    eax, dword ptr [esp + 0x68]
L_1c11:
        cmp    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x40], edi
        je    L_1c35
        lea    ecx, [esp + 0x40]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov    eax, dword ptr [esp + 0x70]
        add    esp, 8
        add    eax, edi
        mov    dword ptr [esp + 0x68], eax
        jmp    L_1c46
L_1c35:
        push    1
        lea    edx, [esp + 0x44]
        push    edx
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_005f29a0
L_1c46:
        lea    eax, [esp + 0x54]
        push    eax
        lea    ecx, [esp + 0x68]
        mov    dword ptr [esp + 0x58], 5
        call    FUN_005f28a0
        lea    ecx, [esp + 0x58]
        push    ecx
        lea    ecx, [esp + 0x68]
        mov    dword ptr [esp + 0x5c], 6
        call    FUN_005f28a0
        lea    edx, [esp + 0x5c]
        push    edx
        lea    ecx, [esp + 0x68]
        mov    dword ptr [esp + 0x60], 7
        call    FUN_005f28a0
L_1c88:
        lea    eax, [esp + 0xb]
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_005f2780
        mov    eax, dword ptr [esp + 0x64]
        cmp    eax, dword ptr [esp + 0x68]
        mov    esi, eax
        je    L_1ced
L_1ca2:
        mov    eax, dword ptr [esi]
        cmp    eax, 3
        ja    L_1cba
        mov    cl, byte ptr [esp + 0xa]
        neg    cl
        sbb    ecx, ecx
        and    ecx, 0x3b5
        inc    ecx
        jmp    L_1cc2
L_1cba:
        mov    ecx, 2
        add    eax, -4
L_1cc2:
        lea    edx, [esp + 0x5c]
        push    edx
        push    eax
        push    ecx
        call    FUN_0063b2e0
        add    esp, 0xc
        cmp    al, 1
        jne    L_1ce3
        lea    eax, [esp + 0x5c]
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_005f27b0
L_1ce3:
        mov    eax, dword ptr [esp + 0x68]
        add    esi, edi
        cmp    esi, eax
        jne    L_1ca2
L_1ced:
        mov    edx, dword ptr [esp + 0x84]
        lea    ecx, [esp + 0x70]
        push    ecx
        push    edx
        call    FUN_0065d1c0
        mov    eax, dword ptr [esp + 0x68]
        add    esp, 8
        lea    ecx, [esp + 0x70]
        mov    dword ptr [eax], 0xa
        call    FUN_005f27a0
        lea    ecx, [esp + 0x64]
        call    FUN_005f2890
        pop    edi
        mov    al, 1
        pop    esi
        add    esp, 0x74
        ret    8
L_1d28:
        lea    ecx, [esp + 0x64]
        call    FUN_005f2890
L_1d31:
        pop    edi
        xor    al, al
        pop    esi
        add    esp, 0x74
        ret    8
        nop    
        // jump-table data @ 0x005F1D3C (0 relocated pointers)
    }
}
