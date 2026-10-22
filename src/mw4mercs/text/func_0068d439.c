/*
 * FUN_0068d439 (extent 0x68d439-0x68d523) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;

__declspec(naked) void FUN_0068d439(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        fmul    dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 4]
        cmp    edx, ecx
        push    esi
        fstp    dword ptr [esp + 0xc]
        je    L_d4a5
        mov    esi, dword ptr [esp + 8]
L_d45a:
        fld    dword ptr [edx + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [edx]
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [edx + 8]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [edx + 8]
        fld    dword ptr [esi + 8]
        fsub st(0), st(1)
        fstp    dword ptr [esp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fsubr    dword ptr [esi]
        fld    st(0)
        fmul st(0), st(1)
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 8]
        faddp st(1), st(0)
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        jne    L_d4ab
        add    edx, 0x18
        cmp    edx, ecx
        jne    L_d45a
L_d4a5:
        xor    al, al
        pop    esi
        ret    8
L_d4ab:
        mov    al, 1
        pop    esi
        ret    8
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
        mov    edx, dword ptr [ecx]
        push    esi
        mov    esi, dword ptr [ecx + 4]
        cmp    edx, esi
        je    L_d506
        mov    ecx, dword ptr [esp + 8]
L_d4ce:
        fld    dword ptr [ecx]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 1
        jne    L_d4ff
        fld    dword ptr [ecx]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_d4ff
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_d4ff
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_d50c
L_d4ff:
        add    edx, 0x18
        cmp    edx, esi
        jne    L_d4ce
L_d506:
        xor    eax, eax
        pop    esi
        ret    4
L_d50c:
        mov    eax, edx
        pop    esi
        ret    4
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
        ret    4
    }
}
