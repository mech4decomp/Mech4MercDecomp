/*
 * FUN_0040ab34 (extent 0x40ab34-0x40b216) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040aa10(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416c80(void);
extern void __cdecl FUN_00416c90(void);
extern void __cdecl FUN_00416ca0(void);
extern void __cdecl FUN_00416cb0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416ce0(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416d10(void);
extern void __cdecl FUN_00416d40(void);
extern void __cdecl FUN_00416d50(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_0040ab34(void)
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
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xf4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        xor    ebp, ebp
        xor    eax, eax
        lea    ecx, [esp + 0x3c]
L_ad74:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x32
        jl    L_ad74
        xor    ecx, ecx
        mov    dword ptr [esp + 0x10], ecx
L_ad85:
        mov    eax, 0x32
        sub    eax, ecx
        push    eax
        call    FUN_00415040
        mov    ecx, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + ecx*4 + 0x40]
        add    eax, ecx
        mov    edx, dword ptr [esp + eax*4 + 0x40]
        lea    eax, [esp + eax*4 + 0x40]
        add    esp, 4
        mov    dword ptr [eax], esi
        mov    dword ptr [esp + ecx*4 + 0x3c], edx
        inc    ecx
        cmp    ecx, 0x32
        mov    dword ptr [esp + 0x10], ecx
        jl    L_ad85
        lea    esi, [edi + 0x10]
        mov    dword ptr [esp + 0x10], ebp
        add    edi, 0x24
L_adc1:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_ade3
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x3c]
        push    edx
        mov    ecx, eax
        call    FUN_0040aa10
        mov    ebx, eax
        jmp    L_ade5
L_ade3:
        xor    ebx, ebx
L_ade5:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x3c]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_00416a90
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x3c]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_00416a90
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_adc1
        mov    dword ptr [esp + 0x10], ebp
L_ae19:
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        call    FUN_00416b60
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, edi
        call    FUN_00416b60
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_ae19
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00416bc0
        mov    ebp, 0x76cf98
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00416bc0
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x14], ebp
        call    FUN_00416c80
        lea    ecx, [esp + 0x14]
        call    FUN_00416c80
        lea    ecx, [esp + 0x28]
        call    FUN_00416d00
        lea    ecx, [esp + 0x14]
        call    FUN_00416d00
        lea    ecx, [esp + 0x28]
        call    FUN_00416c90
        lea    ecx, [esp + 0x14]
        call    FUN_00416c90
        lea    ecx, [esp + 0x28]
        call    FUN_00416d00
        lea    ecx, [esp + 0x14]
        call    FUN_00416d00
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00416bc0
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00416bc0
        xor    ebx, ebx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00416d00
        test    eax, eax
        je    L_af1a
L_aee9:
        lea    ecx, [esp + 0x14]
        call    FUN_00416d00
        lea    ecx, [esp + 0x28]
        call    FUN_00416ca0
        lea    ecx, [esp + 0x14]
        call    FUN_00416ca0
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416d00
        test    eax, eax
        jne    L_aee9
L_af1a:
        lea    ecx, [esp + 0x28]
        call    FUN_00416c90
        lea    ecx, [esp + 0x14]
        call    FUN_00416c90
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], 0x31
        call    FUN_00416d00
        test    eax, eax
        je    L_af72
L_af41:
        lea    ecx, [esp + 0x14]
        call    FUN_00416d00
        lea    ecx, [esp + 0x28]
        call    FUN_00416cb0
        lea    ecx, [esp + 0x14]
        call    FUN_00416cb0
        mov    edx, dword ptr [esp + 0x10]
        dec    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416d00
        test    eax, eax
        jne    L_af41
L_af72:
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00416cc0
        test    eax, eax
        je    L_afd0
L_afb1:
        lea    ecx, [esp + 0x28]
        call    FUN_00416cc0
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416cc0
        test    eax, eax
        jne    L_afb1
L_afd0:
        lea    ecx, [esp + 0x14]
        call    FUN_00416c90
        lea    ecx, [esp + 0x28]
        call    FUN_00416c90
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], 0x31
        call    FUN_00416ce0
        test    eax, eax
        je    L_b016
L_aff7:
        lea    ecx, [esp + 0x28]
        call    FUN_00416ce0
        mov    edx, dword ptr [esp + 0x10]
        dec    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416ce0
        test    eax, eax
        jne    L_aff7
L_b016:
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00416bc0
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00416bc0
        xor    eax, eax
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x10], eax
L_b04a:
        push    eax
        lea    ecx, [esp + 0x2c]
        call    FUN_00416d10
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00416d10
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_b04a
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00416d00
        test    eax, eax
        je    L_b0e4
L_b0af:
        lea    ecx, [esp + 0x14]
        call    FUN_00416d40
        push    ebx
        lea    ecx, [esp + 0x2c]
        call    FUN_00416d10
        cmp    eax, ebx
        je    L_b0ce
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_b0ce:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416d00
        test    eax, eax
        jne    L_b0af
L_b0e4:
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00416bc0
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00416bc0
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x10], ebx
        jmp    L_b11a
L_b118:
        xor    ebx, ebx
L_b11a:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_b13a
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x3c]
        push    edx
        mov    ecx, eax
        call    FUN_0040aa10
        mov    ebx, eax
L_b13a:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x3c]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_00416a90
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x3c]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_00416a90
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_b118
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], 0
        call    FUN_00415cc0
        test    eax, eax
        je    L_b1f7
L_b1ad:
        push    eax
        call    FUN_00415040
        add    esp, 4
        mov    esi, eax
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416d10
        lea    ecx, [esp + 0x14]
        call    FUN_00416d40
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00416d10
        test    eax, eax
        je    L_b1e1
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_b1e1:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00415cc0
        test    eax, eax
        jne    L_b1ad
L_b1f7:
        lea    ecx, [esp + 0x28]
        call    FUN_00416c60
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0xf4
        ret    
    }
}
