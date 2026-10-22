/*
 * FUN_004c7c58 (extent 0x4c7c58-0x4c7d0e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004c7c58(void)
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
        or    eax, 0xffffffff
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
        sub    esp, 0xc
        mov    eax, dword ptr [ecx + 0xfc]
        mov    edx, dword ptr [ecx + 0x10c]
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    esi
        mov    dword ptr [esp + 8], eax
        mov    eax, dword ptr [ecx + 0x11c]
        push    edi
        xor    edi, edi
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], eax
        lea    edx, [ebx + 0x1ac]
        xor    esi, esi
L_7ca2:
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [edx + 4]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fsub    dword ptr [edx + 0xc]
        fcom    dword ptr [ecx + 0x12c]
        fnstsw  ax
        test    ah, 1
        je    L_7d00
        fld    dword ptr [ecx + 0x12c]
        shl    edi, 1
        fchs    
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_7ce2
        or    edi, 1
L_7ce2:
        inc    esi
        add    edx, 0x10
        cmp    esi, 6
        jl    L_7ca2
        test    edi, edi
        jne    L_7cf5
        mov    dword ptr [ebx + 0x264], ecx
L_7cf5:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    4
L_7d00:
        pop    edi
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    esi
        or    eax, 0xffffffff
        pop    ebx
        add    esp, 0xc
        ret    4
    }
}
