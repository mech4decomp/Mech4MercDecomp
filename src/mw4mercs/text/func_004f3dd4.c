/*
 * FUN_004f3dd4 (extent 0x4f3dd4-0x4f3f34) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004db020(void);

__declspec(naked) void FUN_004f3dd4(void)
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x24
        push    ebx
        mov    ebx, dword ptr [esp + 0x34]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x34]
        push    ebx
        push    eax
        mov    esi, ecx
        push    edi
        call    FUN_004db020
        cmp    al, 1
        jne    L_3e19
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_3e19:
        mov    eax, dword ptr [edi + 0xd8]
        fld    dword ptr [esp + 0x38]
        mov    ecx, dword ptr [eax + 0x8c]
        fmul    dword ptr [esp + 0x38]
        mov    edx, dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x38]
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [esi + 0x170]
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], eax
L_3e51:
        test    ecx, ecx
        je    L_3ec7
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        je    L_3ec7
        add    eax, 0x10
        test    eax, eax
        je    L_3e51
        cmp    bl, 1
        fld    dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x20], eax
        jne    L_3e81
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x10]
L_3e81:
        fld    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x14]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x24]
        faddp st(1), st(0)
        fcomp    dword ptr [esp + 0x38]
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_3e51
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_3ec7:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x24
        ret    0xc
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_3f0b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x7751d0
        pop    esi
        ret    
L_3f0b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x77512c
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_3f2e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3f2e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
