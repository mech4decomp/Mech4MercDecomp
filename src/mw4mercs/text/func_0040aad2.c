/*
 * FUN_0040aad2 (extent 0x40aad2-0x40ad5c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040aa10(void);
extern void __cdecl FUN_0040aa50(void);
extern void __cdecl FUN_0040aab0(void);
extern void __cdecl FUN_0040ab40(void);
extern void __cdecl FUN_0040ad60(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416d50(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_0040aad2(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x38
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040aa50
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040ab40
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040aab0
        mov    al, 1
        add    esp, 0x38
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x38
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040aa50
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040ad60
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040aab0
        mov    al, 1
        add    esp, 0x38
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xf4
        push    ebp
        push    esi
        mov    esi, ecx
        xor    ebp, ebp
        xor    eax, eax
        lea    ecx, [esp + 0x34]
L_ab52:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x32
        jl    L_ab52
        push    ebx
        xor    ecx, ecx
        push    edi
        mov    dword ptr [esp + 0x10], ecx
L_ab65:
        mov    eax, 0x32
        sub    eax, ecx
        push    eax
        call    FUN_00415040
        mov    ecx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + ecx*4 + 0x40]
        add    eax, ecx
        mov    edx, dword ptr [esp + eax*4 + 0x40]
        lea    eax, [esp + eax*4 + 0x40]
        add    esp, 4
        mov    dword ptr [eax], edi
        mov    dword ptr [esp + ecx*4 + 0x3c], edx
        inc    ecx
        cmp    ecx, 0x32
        mov    dword ptr [esp + 0x10], ecx
        jl    L_ab65
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esp + 0x10], ebp
        lea    edi, [esi + 0x10]
        lea    ebx, [esi + 0x24]
L_aba8:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_abca
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x3c]
        push    edx
        mov    ecx, eax
        call    FUN_0040aa10
        mov    esi, eax
        jmp    L_abcc
L_abca:
        xor    esi, esi
L_abcc:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x3c]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_00416a90
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x3c]
        push    eax
        push    esi
        mov    ecx, ebx
        call    FUN_00416a90
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_aba8
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        mov    esi, 0x76cf98
        push    ebx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00416cc0
        test    eax, eax
        je    L_ac4b
L_ac35:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416cc0
        test    eax, eax
        jne    L_ac35
L_ac4b:
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00416cc0
        test    eax, eax
        je    L_ac72
L_ac5c:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416cc0
        test    eax, eax
        jne    L_ac5c
L_ac72:
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x2c]
        call    FUN_00416bc0
        push    ebx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], esi
        call    FUN_00416bc0
        mov    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x10], ebp
L_acab:
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x2c]
        call    FUN_00416d50
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_00416d50
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_acab
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        push    ebx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00416cc0
        cmp    eax, ebp
        pop    edi
        pop    ebx
        je    L_ad3f
L_ad1d:
        mov    edx, dword ptr [esp + 8]
        inc    edx
        cmp    eax, ebp
        mov    dword ptr [esp + 8], edx
        je    L_ad32
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_ad32:
        lea    ecx, [esp + 0xc]
        call    FUN_00416cc0
        cmp    eax, ebp
        jne    L_ad1d
L_ad3f:
        lea    ecx, [esp + 0x20]
        call    FUN_00416c60
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        pop    esi
        mov    al, 1
        pop    ebp
        add    esp, 0xf4
        ret    
    }
}
