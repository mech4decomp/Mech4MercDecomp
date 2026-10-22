/*
 * FUN_004096f4 (extent 0x4096f4-0x409c95) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004095d0(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416470(void);
extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_00416530(void);
extern void __cdecl FUN_004165b0(void);
extern void __cdecl FUN_004165e0(void);
extern void __cdecl FUN_00416610(void);
extern void __cdecl FUN_00416670(void);
extern void __cdecl FUN_004166f0(void);
extern void __cdecl FUN_00416730(void);
extern void __cdecl FUN_004167a0(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_004096f4(void)
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
        sub    esp, 0xfc
        push    ebp
        push    esi
        mov    esi, ecx
        xor    ebp, ebp
        xor    eax, eax
        lea    ecx, [esp + 0x3c]
L_9712:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x32
        jl    L_9712
        push    ebx
        xor    ecx, ecx
        push    edi
        mov    dword ptr [esp + 0x10], ecx
L_9725:
        mov    eax, 0x32
        sub    eax, ecx
        push    eax
        call    FUN_00415040
        mov    ecx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + ecx*4 + 0x48]
        add    eax, ecx
        mov    edx, dword ptr [esp + eax*4 + 0x48]
        lea    eax, [esp + eax*4 + 0x48]
        add    esp, 4
        mov    dword ptr [eax], edi
        mov    dword ptr [esp + ecx*4 + 0x44], edx
        inc    ecx
        cmp    ecx, 0x32
        mov    dword ptr [esp + 0x10], ecx
        jl    L_9725
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esp + 0x10], ebp
        lea    edi, [esi + 0x10]
        lea    ebx, [esi + 0x24]
L_9768:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_978a
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x44]
        push    edx
        mov    ecx, eax
        call    FUN_004095d0
        mov    esi, eax
        jmp    L_978c
L_978a:
        xor    esi, esi
L_978c:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x44]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_00416470
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x44]
        push    eax
        push    esi
        mov    ecx, ebx
        call    FUN_00416470
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_9768
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00416530
        mov    esi, 0x76ce2c
        push    ebx
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00416530
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x2c], esi
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00416670
        test    eax, eax
        je    L_980b
L_97f5:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416670
        test    eax, eax
        jne    L_97f5
L_980b:
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00416670
        test    eax, eax
        je    L_9832
L_981c:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416670
        test    eax, eax
        jne    L_981c
L_9832:
        lea    ecx, [esp + 0x2c]
        call    FUN_004165b0
        lea    ecx, [esp + 0x14]
        call    FUN_004165b0
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esp + 0x10], ebp
L_984f:
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, edi
        call    FUN_004164b0
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, ebx
        call    FUN_004164b0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_984f
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00416530
        push    ebx
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00416530
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x2c], esi
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00416670
        cmp    eax, ebp
        pop    edi
        pop    ebx
        je    L_98cd
L_98ab:
        mov    edx, dword ptr [esp + 8]
        inc    edx
        cmp    eax, ebp
        mov    dword ptr [esp + 8], edx
        je    L_98c0
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_98c0:
        lea    ecx, [esp + 0xc]
        call    FUN_00416670
        cmp    eax, ebp
        jne    L_98ab
L_98cd:
        lea    ecx, [esp + 0x24]
        call    FUN_004165b0
        lea    ecx, [esp + 0xc]
        call    FUN_004165b0
        pop    esi
        mov    al, 1
        pop    ebp
        add    esp, 0xfc
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xfc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        xor    ebp, ebp
        xor    eax, eax
        lea    ecx, [esp + 0x44]
L_9904:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x32
        jl    L_9904
        xor    ecx, ecx
        mov    dword ptr [esp + 0x10], ecx
L_9915:
        mov    eax, 0x32
        sub    eax, ecx
        push    eax
        call    FUN_00415040
        mov    ecx, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + ecx*4 + 0x48]
        add    eax, ecx
        mov    edx, dword ptr [esp + eax*4 + 0x48]
        lea    eax, [esp + eax*4 + 0x48]
        add    esp, 4
        mov    dword ptr [eax], esi
        mov    dword ptr [esp + ecx*4 + 0x44], edx
        inc    ecx
        cmp    ecx, 0x32
        mov    dword ptr [esp + 0x10], ecx
        jl    L_9915
        lea    esi, [edi + 0x10]
        mov    dword ptr [esp + 0x10], ebp
        add    edi, 0x24
L_9951:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_9973
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x44]
        push    edx
        mov    ecx, eax
        call    FUN_004095d0
        mov    ebx, eax
        jmp    L_9975
L_9973:
        xor    ebx, ebx
L_9975:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x44]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_00416470
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x44]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_00416470
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_9951
        mov    dword ptr [esp + 0x10], ebp
L_99a9:
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        call    FUN_004164b0
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, edi
        call    FUN_004164b0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_99a9
        push    esi
        lea    ecx, [esp + 0x30]
        call    FUN_00416530
        mov    ebp, 0x76ce2c
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x30], ebp
        call    FUN_00416530
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x14], ebp
        call    FUN_004165e0
        lea    ecx, [esp + 0x14]
        call    FUN_004165e0
        lea    ecx, [esp + 0x2c]
        call    FUN_004166f0
        lea    ecx, [esp + 0x14]
        call    FUN_004166f0
        lea    ecx, [esp + 0x14]
        call    FUN_004165b0
        lea    ecx, [esp + 0x2c]
        call    FUN_004165b0
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416530
        push    edi
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00416530
        xor    ebx, ebx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x2c], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_004166f0
        test    eax, eax
        je    L_9a86
L_9a55:
        lea    ecx, [esp + 0x2c]
        call    FUN_004166f0
        lea    ecx, [esp + 0x14]
        call    FUN_00416610
        lea    ecx, [esp + 0x2c]
        call    FUN_00416610
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_004166f0
        test    eax, eax
        jne    L_9a55
L_9a86:
        lea    ecx, [esp + 0x2c]
        call    FUN_004165b0
        lea    ecx, [esp + 0x14]
        call    FUN_004165b0
        push    esi
        lea    ecx, [esp + 0x30]
        call    FUN_00416530
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x30], ebp
        call    FUN_00416530
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00416670
        test    eax, eax
        je    L_9ae4
L_9ac5:
        lea    ecx, [esp + 0x14]
        call    FUN_00416670
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416670
        test    eax, eax
        jne    L_9ac5
L_9ae4:
        lea    ecx, [esp + 0x14]
        call    FUN_004165b0
        lea    ecx, [esp + 0x2c]
        call    FUN_004165b0
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416530
        push    edi
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00416530
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x2c], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_004166f0
        mov    ebx, eax
        test    ebx, ebx
        je    L_9b56
L_9b25:
        lea    ecx, [esp + 0x2c]
        call    FUN_004166f0
        lea    ecx, [esp + 0x14]
        call    FUN_004167a0
        test    ebx, ebx
        je    L_9b43
        mov    eax, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        call    dword ptr [eax]
L_9b43:
        inc    dword ptr [esp + 0x10]
        lea    ecx, [esp + 0x14]
        call    FUN_004166f0
        mov    ebx, eax
        test    ebx, ebx
        jne    L_9b25
L_9b56:
        lea    ecx, [esp + 0x2c]
        call    FUN_004165b0
        lea    ecx, [esp + 0x14]
        call    FUN_004165b0
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416530
        push    edi
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00416530
        mov    dword ptr [esp + 0x2c], ebp
        mov    dword ptr [esp + 0x10], 0
L_9b8c:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9bae
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x44]
        push    edx
        mov    ecx, eax
        call    FUN_004095d0
        mov    ebx, eax
        jmp    L_9bb0
L_9bae:
        xor    ebx, ebx
L_9bb0:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x44]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_00416470
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x44]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_00416470
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_9b8c
        lea    ecx, [esp + 0x2c]
        call    FUN_004165b0
        lea    ecx, [esp + 0x14]
        call    FUN_004165b0
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416530
        push    edi
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00416530
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x2c], ebp
        mov    dword ptr [esp + 0x10], 0
        call    FUN_004165e0
        lea    ecx, [esp + 0x14]
        call    FUN_00415cc0
        test    eax, eax
        je    L_9c76
L_9c2c:
        push    eax
        call    FUN_00415040
        add    esp, 4
        mov    esi, eax
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416730
        lea    ecx, [esp + 0x14]
        call    FUN_004167a0
        push    esi
        lea    ecx, [esp + 0x30]
        call    FUN_00416730
        test    eax, eax
        je    L_9c60
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_9c60:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00415cc0
        test    eax, eax
        jne    L_9c2c
L_9c76:
        lea    ecx, [esp + 0x2c]
        call    FUN_004165b0
        lea    ecx, [esp + 0x14]
        call    FUN_004165b0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0xfc
        ret    
    }
}
