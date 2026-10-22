/*
 * FUN_0040a0a2 (extent 0x40a0a2-0x40a32c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00409fe0(void);
extern void __cdecl FUN_0040a020(void);
extern void __cdecl FUN_0040a080(void);
extern void __cdecl FUN_0040a110(void);
extern void __cdecl FUN_0040a330(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00416f20(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_004172e0(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_0040a0a2(void)
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
        sub    esp, 0x40
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040a020
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040a110
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040a080
        mov    al, 1
        add    esp, 0x40
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
        sub    esp, 0x40
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040a020
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040a330
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040a080
        mov    al, 1
        add    esp, 0x40
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
L_a122:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x32
        jl    L_a122
        push    ebx
        xor    ecx, ecx
        push    edi
        mov    dword ptr [esp + 0x10], ecx
L_a135:
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
        jl    L_a135
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esp + 0x10], ebp
        lea    edi, [esi + 0x10]
        lea    ebx, [esi + 0x28]
L_a178:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_a19a
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x3c]
        push    edx
        mov    ecx, eax
        call    FUN_00409fe0
        mov    esi, eax
        jmp    L_a19c
L_a19a:
        xor    esi, esi
L_a19c:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x3c]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_00416f20
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x3c]
        push    eax
        push    esi
        mov    ecx, ebx
        call    FUN_00416f20
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_a178
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00417170
        mov    esi, 0x76cf08
        push    ebx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00417170
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00417230
        test    eax, eax
        je    L_a21b
L_a205:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00417230
        test    eax, eax
        jne    L_a205
L_a21b:
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00417230
        test    eax, eax
        je    L_a242
L_a22c:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00417230
        test    eax, eax
        jne    L_a22c
L_a242:
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417170
        push    ebx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], esi
        call    FUN_00417170
        mov    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x10], ebp
L_a27b:
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x2c]
        call    FUN_004172e0
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_004172e0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_a27b
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00417170
        push    ebx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00417170
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00417230
        cmp    eax, ebp
        pop    edi
        pop    ebx
        je    L_a30f
L_a2ed:
        mov    edx, dword ptr [esp + 8]
        inc    edx
        cmp    eax, ebp
        mov    dword ptr [esp + 8], edx
        je    L_a302
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_a302:
        lea    ecx, [esp + 0xc]
        call    FUN_00417230
        cmp    eax, ebp
        jne    L_a2ed
L_a30f:
        lea    ecx, [esp + 0x20]
        call    FUN_004171b0
        lea    ecx, [esp + 0xc]
        call    FUN_004171b0
        pop    esi
        mov    al, 1
        pop    ebp
        add    esp, 0xf4
        ret    
    }
}
