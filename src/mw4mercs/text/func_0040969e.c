/*
 * FUN_0040969e (extent 0x40969e-0x4098ea) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004095d0(void);
extern void __cdecl FUN_00409610(void);
extern void __cdecl FUN_00409670(void);
extern void __cdecl FUN_00409700(void);
extern void __cdecl FUN_004098f0(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00416470(void);
extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_00416530(void);
extern void __cdecl FUN_004165b0(void);
extern void __cdecl FUN_00416670(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_0040969e(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 0x38
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00409610
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00409700
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00409670
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
        call    FUN_00409610
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_004098f0
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00409670
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
    }
}
