/*
 * FUN_0040a104 (extent 0x40a104-0x40a7e6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00409fe0(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416f20(void);
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_004171c0(void);
extern void __cdecl FUN_004171e0(void);
extern void __cdecl FUN_00417200(void);
extern void __cdecl FUN_00417220(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_00417260(void);
extern void __cdecl FUN_00417280(void);
extern void __cdecl FUN_004172a0(void);
extern void __cdecl FUN_004172c0(void);
extern void __cdecl FUN_004172e0(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_0040a104(void)
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
L_a344:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x32
        jl    L_a344
        xor    ecx, ecx
        mov    dword ptr [esp + 0x10], ecx
L_a355:
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
        jl    L_a355
        lea    esi, [edi + 0x10]
        mov    dword ptr [esp + 0x10], ebp
        add    edi, 0x28
L_a391:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_a3b3
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x3c]
        push    edx
        mov    ecx, eax
        call    FUN_00409fe0
        mov    ebx, eax
        jmp    L_a3b5
L_a3b3:
        xor    ebx, ebx
L_a3b5:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x3c]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_00416f20
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x3c]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_00416f20
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_a391
        mov    dword ptr [esp + 0x10], ebp
L_a3e9:
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        call    FUN_00416f60
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, edi
        call    FUN_00416f60
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_a3e9
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417170
        mov    ebp, 0x76cf08
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00417170
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x14], ebp
        call    FUN_004171c0
        lea    ecx, [esp + 0x14]
        call    FUN_004171c0
        lea    ecx, [esp + 0x28]
        call    FUN_00417280
        lea    ecx, [esp + 0x14]
        call    FUN_00417280
        lea    ecx, [esp + 0x28]
        call    FUN_004171e0
        lea    ecx, [esp + 0x14]
        call    FUN_004171e0
        lea    ecx, [esp + 0x28]
        call    FUN_00417280
        lea    ecx, [esp + 0x14]
        call    FUN_00417280
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417170
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00417170
        xor    ebx, ebx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00417280
        test    eax, eax
        je    L_a4ea
L_a4b9:
        lea    ecx, [esp + 0x14]
        call    FUN_00417280
        lea    ecx, [esp + 0x28]
        call    FUN_00417200
        lea    ecx, [esp + 0x14]
        call    FUN_00417200
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00417280
        test    eax, eax
        jne    L_a4b9
L_a4ea:
        lea    ecx, [esp + 0x28]
        call    FUN_004171e0
        lea    ecx, [esp + 0x14]
        call    FUN_004171e0
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], 0x31
        call    FUN_00417280
        test    eax, eax
        je    L_a542
L_a511:
        lea    ecx, [esp + 0x14]
        call    FUN_00417280
        lea    ecx, [esp + 0x28]
        call    FUN_00417220
        lea    ecx, [esp + 0x14]
        call    FUN_00417220
        mov    edx, dword ptr [esp + 0x10]
        dec    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00417280
        test    eax, eax
        jne    L_a511
L_a542:
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00417170
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00417170
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00417230
        test    eax, eax
        je    L_a5a0
L_a581:
        lea    ecx, [esp + 0x28]
        call    FUN_00417230
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00417230
        test    eax, eax
        jne    L_a581
L_a5a0:
        lea    ecx, [esp + 0x14]
        call    FUN_004171e0
        lea    ecx, [esp + 0x28]
        call    FUN_004171e0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], 0x31
        call    FUN_00417260
        test    eax, eax
        je    L_a5e6
L_a5c7:
        lea    ecx, [esp + 0x28]
        call    FUN_00417260
        mov    edx, dword ptr [esp + 0x10]
        dec    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00417260
        test    eax, eax
        jne    L_a5c7
L_a5e6:
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417170
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00417170
        xor    eax, eax
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x10], eax
L_a61a:
        push    eax
        lea    ecx, [esp + 0x2c]
        call    FUN_004172a0
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004172a0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_a61a
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00417170
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00417170
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00417280
        test    eax, eax
        je    L_a6b4
L_a67f:
        lea    ecx, [esp + 0x14]
        call    FUN_004172c0
        push    ebx
        lea    ecx, [esp + 0x2c]
        call    FUN_004172a0
        cmp    eax, ebx
        je    L_a69e
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_a69e:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00417280
        test    eax, eax
        jne    L_a67f
L_a6b4:
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417170
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00417170
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x10], ebx
        jmp    L_a6ea
L_a6e8:
        xor    ebx, ebx
L_a6ea:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_a70a
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x3c]
        push    edx
        mov    ecx, eax
        call    FUN_00409fe0
        mov    ebx, eax
L_a70a:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x3c]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_00416f20
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x3c]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_00416f20
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_a6e8
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00417170
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00417170
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], 0
        call    FUN_00415cc0
        test    eax, eax
        je    L_a7c7
L_a77d:
        push    eax
        call    FUN_00415040
        add    esp, 4
        mov    esi, eax
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_004172a0
        lea    ecx, [esp + 0x14]
        call    FUN_004172c0
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_004172a0
        test    eax, eax
        je    L_a7b1
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_a7b1:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00415cc0
        test    eax, eax
        jne    L_a77d
L_a7c7:
        lea    ecx, [esp + 0x28]
        call    FUN_004171b0
        lea    ecx, [esp + 0x14]
        call    FUN_004171b0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0xf4
        ret    
    }
}
