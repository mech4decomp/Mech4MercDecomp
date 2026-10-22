/*
 * FUN_0065c09f (extent 0x65c09f-0x65c180) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007f2024;
extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_0065c09f(void)
{
    __asm {
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
        sub    esp, 0xc
        mov    eax, dword ptr [esp + 0x14]
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [eax]
        mov    dword ptr [esp + 0x24], 0
        xor    ebp, ebp
        jmp    L_c0cf
L_c0cd:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_c0cf:
        test    edi, edi
        je    L_c16c
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_c16c
        mov    eax, dword ptr [g_007f2024]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_c0cf
        mov    eax, dword ptr [esi + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    ecx, dword ptr [eax + 0x9c]
        fsubr    dword ptr [ebx]
        mov    edx, dword ptr [eax + 0xac]
        fld    dword ptr [ebx + 4]
        add    eax, 0x80
        mov    dword ptr [esp + 0x14], ecx
        fsub    dword ptr [esp + 0x14]
        fld    dword ptr [ebx + 8]
        mov    dword ptr [esp + 0x18], edx
        fsub    dword ptr [esp + 0x18]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_c161
        fcom    dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 1
        je    L_c0cd
L_c161:
        fstp    dword ptr [esp + 0x24]
        mov    ebp, esi
        jmp    L_c0cf
L_c16c:
        test    ebp, ebp
        mov    eax, 0xfffffffe
        je    L_c178
        mov    eax, dword ptr [ebp + 0x30]
L_c178:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    
    }
}
