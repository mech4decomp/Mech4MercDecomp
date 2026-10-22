/*
 * FUN_0066b34e (extent 0x66b34e-0x66b3ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_007f27b0;
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00606c00(void);

__declspec(naked) void FUN_0066b34e(void)
{
    __asm {
        /* 0x66B34E-0x66B36D: in-function jump-table DATA (32 bytes).
           gen_bigfunc mis-disassembled these as garbage mnemonics that don't
           reproduce the bytes; emit the literal reference bytes instead. */
        __emit 0x8B
        __emit 0xFF
        __emit 0x47
        __emit 0xB1
        __emit 0x66
        __emit 0x00
        __emit 0x1B
        __emit 0xB3
        __emit 0x66
        __emit 0x00
        __emit 0x7B
        __emit 0xB1
        __emit 0x66
        __emit 0x00
        __emit 0xAF
        __emit 0xB1
        __emit 0x66
        __emit 0x00
        __emit 0xE3
        __emit 0xB1
        __emit 0x66
        __emit 0x00
        __emit 0x17
        __emit 0xB2
        __emit 0x66
        __emit 0x00
        __emit 0x99
        __emit 0xB2
        __emit 0x66
        __emit 0x00
        __emit 0xE5
        __emit 0xB2
        __emit 0x66
        __emit 0x00
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov    ebp, dword ptr [g_0076b2ac]
        mov    eax, ecx
        push    esi
        mov    dword ptr [esp + 0xc], eax
        add    eax, 0x60
        push    edi
        mov    edi, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_b390:
        test    edi, edi
        je    L_b3bd
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_b3bd
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax + 4]
        add    ecx, 0x2c
        push    ebx
        push    ecx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_b390
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    4
L_b3bd:
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx + 0x18]
        mov    ecx, dword ptr [g_007f27b0]
        push    eax
        push    0x5f8ec0
        push    ebx
        call    FUN_00606c00
        mov    ecx, dword ptr [esp + 0x14]
        mov    esi, eax
        push    esi
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    4
    }
}
