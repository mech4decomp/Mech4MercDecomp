/*
 * FUN_0064cffe (extent 0x64cffe-0x64d16a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008058ac;
extern int    g_0080d9b0;
extern int    g_0080d9b4;
extern int    g_0080d9bc;
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_006498f0(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064ced0(void);

__declspec(naked) void FUN_0064cffe(void)
{
    __asm {
        /* 0x64CFFE-0x64D04F: in-function jump-table DATA (82 bytes).
           gen_bigfunc mis-disassembled these as garbage mnemonics that don't
           reproduce the bytes; emit the literal reference bytes instead. */
        __emit 0x8B
        __emit 0xFF
        __emit 0x2A
        __emit 0xCF
        __emit 0x64
        __emit 0x00
        __emit 0x5A
        __emit 0xCF
        __emit 0x64
        __emit 0x00
        __emit 0xC0
        __emit 0xCF
        __emit 0x64
        __emit 0x00
        __emit 0xA0
        __emit 0xCF
        __emit 0x64
        __emit 0x00
        __emit 0xE0
        __emit 0xCF
        __emit 0x64
        __emit 0x00
        __emit 0x00
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x02
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x03
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x03
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
        __emit 0x90
        mov    eax, dword ptr [g_008058ac]
        push    ebx
        xor    bl, bl
        cmp    eax, 9
        push    esi
        je    L_d063
        cmp    eax, 8
        jne    L_d06a
L_d063:
        mov    bl, 1
        call    FUN_00649150
L_d06a:
        call    FUN_0064ced0
        test    bl, bl
        mov    esi, eax
        je    L_d09a
        push    esi
        call    FUN_0064c950
        mov    ecx, dword ptr [g_0080d9bc]
        add    esp, 4
        cmp    eax, ecx
        je    L_d09a
        cmp    esi, dword ptr [g_0080d9b4]
        je    L_d09a
        push    0x10
        call    FUN_00562f40
        add    esp, 4
L_d09a:
        push    0x7b5a64
        call    FUN_006498f0
        add    esp, 4
        test    al, al
        je    L_d165
        push    edi
L_d0b0:
        mov    edi, dword ptr [g_008058ac]
        push    esi
        call    FUN_0064c950
        mov    esi, eax
        call    FUN_00649150
        call    FUN_0064ced0
        push    eax
        call    FUN_0064c950
        add    esp, 8
        cmp    edi, 8
        jl    L_d14a
        cmp    edi, 9
        jle    L_d102
        cmp    edi, 0x33
        jne    L_d14a
        mov    ecx, dword ptr [g_0080d9b0]
        cmp    esi, ecx
        jne    L_d0ee
        cmp    eax, ecx
        je    L_d0fe
L_d0ee:
        push    0x10
        call    FUN_00562f40
        mov    ecx, dword ptr [g_0080d9b0]
        add    esp, 4
L_d0fe:
        mov    esi, ecx
        jmp    L_d14a
L_d102:
        mov    ecx, dword ptr [g_0080d9bc]
        cmp    esi, ecx
        jne    L_d114
        cmp    eax, ecx
        jne    L_d114
        mov    esi, ecx
        jmp    L_d14a
L_d114:
        mov    edx, dword ptr [g_0080d9b4]
        cmp    esi, edx
        jne    L_d12a
        cmp    eax, edx
        je    L_d137
        cmp    eax, ecx
        jne    L_d13b
        mov    esi, edx
        jmp    L_d14a
L_d12a:
        cmp    eax, edx
        jne    L_d13b
        cmp    esi, ecx
        sete    al
        test    al, al
        je    L_d13b
L_d137:
        mov    esi, edx
        jmp    L_d14a
L_d13b:
        push    0x10
        call    FUN_00562f40
        add    esp, 4
        mov    esi, 0x80da38
L_d14a:
        push    0x7b5a64
        call    FUN_006498f0
        add    esp, 4
        test    al, al
        jne    L_d0b0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    
L_d165:
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    
    }
}
