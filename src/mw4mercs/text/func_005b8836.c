/*
 * FUN_005b8836 (extent 0x5b8836-0x5b8919) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005b8836(void)
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
        mov    edx, dword ptr [ecx + 0x16c]
        push    ebp
        mov    ebp, dword ptr [ecx + 0x168]
        mov    ecx, dword ptr [ecx + 0x168]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        fld    dword ptr [esi]
        sub    edx, ebp
        fsub    dword ptr [ecx]
        mov    eax, 0x2aaaaaab
        fld    dword ptr [esi + 4]
        imul    edx
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [esi + 8]
        fsub    dword ptr [ecx + 8]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        sar    edx, 1
        fmul st(0), st(3)
        mov    eax, edx
        shr    eax, 0x1f
        push    edi
        faddp st(1), st(0)
        add    edx, eax
        fld    st(3)
        mov    edi, 1
        fmul st(0), st(4)
        xor    ebp, ebp
        cmp    edx, edi
        faddp st(1), st(0)
        fstp    dword ptr [esp + 0x14]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jle    L_88f8
        push    ebx
        lea    ebx, [ecx + 0xc]
L_88b4:
        fld    dword ptr [esi]
        fsub    dword ptr [ebx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [ebx + 4]
        fld    dword ptr [esi + 8]
        fsub    dword ptr [ebx + 8]
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
        fcom    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        je    L_88ed
        fstp    dword ptr [esp + 0x18]
        mov    ebp, edi
        jmp    L_88ef
L_88ed:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_88ef:
        inc    edi
        add    ebx, 0xc
        cmp    edi, edx
        jl    L_88b4
        pop    ebx
L_88f8:
        mov    eax, dword ptr [esp + 0x10]
        lea    edx, [ebp + ebp*2]
        lea    ecx, [ecx + edx*4]
        mov    edx, dword ptr [ecx]
        pop    edi
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        pop    esi
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        pop    ebp
        ret    8
    }
}
