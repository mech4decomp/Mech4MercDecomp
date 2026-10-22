/*
 * FUN_0047af19 (extent 0x47af19-0x47b15c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b94a0;
extern int    g_007da5e8;
extern int    g_007da600;
extern int    g_007da688;
extern int    g_007da68c;

__declspec(naked) void FUN_0047af19(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [ecx + 0x64]
        push    ebp
        push    edi
        xor    edi, edi
        xor    edx, edx
        xor    ebp, ebp
        test    eax, eax
        mov    dword ptr [esp + 8], eax
        jle    L_af8f
        push    ebx
        push    esi
L_af36:
        mov    esi, dword ptr [ecx + 0x60]
        xor    ebx, ebx
        mov    bl, byte ptr [edi + esi]
        mov    esi, ebx
        mov    ebx, dword ptr [g_007da5e8]
        mov    ebx, dword ptr [ebx]
        cmp    byte ptr [edi + ebx], 0
        jne    L_af52
        add    edx, esi
        jmp    L_af7c
L_af52:
        add    esi, edx
        cmp    edx, esi
        jge    L_af7a
        mov    eax, esi
        sub    eax, edx
        add    ebp, eax
L_af5e:
        mov    eax, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + edx]
        mov    eax, dword ptr [g_007da600]
        mov    eax, dword ptr [eax]
        inc    edx
        cmp    edx, esi
        mov    byte ptr [ebx + eax], 1
        jl    L_af5e
        mov    eax, dword ptr [esp + 0x10]
L_af7a:
        mov    edx, esi
L_af7c:
        inc    edi
        cmp    edi, eax
        jl    L_af36
        pop    esi
        pop    ebx
        pop    edi
        mov    eax, ebp
        mov    word ptr [ecx + 0x56], 1
        pop    ebp
        pop    ecx
        ret    
L_af8f:
        pop    edi
        mov    eax, ebp
        mov    word ptr [ecx + 0x56], 1
        pop    ebp
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [g_007b94a0], ecx
        ret    4
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        cmp    word ptr [edi + 0x56], 0
        mov    ebx, dword ptr [edi + 0x18]
        jne    L_afcd
        mov    eax, dword ptr [edi]
        call    dword ptr [eax + 0x98]
L_afcd:
        test    ebx, ebx
        mov    edx, dword ptr [edi + 0x14]
        mov    ecx, dword ptr [g_007da68c]
        mov    eax, dword ptr [g_007da688]
        mov    esi, dword ptr [ecx]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 4], edx
        mov    edx, dword ptr [g_007da600]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 0xc], eax
        jle    L_b153
        mov    dword ptr [ebp - 0x18], ebx
L_affe:
        mov    ecx, dword ptr [ebp - 0xc]
        cmp    byte ptr [ecx], 0
        je    L_b127
        mov    dword ptr [ebp - 0x10], esi
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 4]
        fld    dword ptr [eax]
        fld    dword ptr [eax + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x10]
        fld    dword ptr [edx + 0x34]
        fmul st(0), st(2)
        fld    dword ptr [edx + 0x38]
        fmul st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx + 0x3c]
        fld    dword ptr [edx + 0x30]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld    dword ptr [edx + 0x10]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fadd    dword ptr [edx + 0x2c]
        fld    dword ptr [edx + 0x20]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fadd    dword ptr [edx + 0xc]
        fld    dword ptr [edx]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        mov    dword ptr [ebp - 0x10], 0
        mov    edi, dword ptr [ebp - 0x14]
        xor    ecx, ecx
        xor    edx, edx
        test    dword ptr [edi], 0x80000000
        setne    cl
        sub    edx, ecx
        and    edx, 8
        xor    ebx, ebx
        test    dword ptr [edi + 4], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 2
        or    edx, ebx
        xor    ebx, ebx
        test    dword ptr [edi + 8], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x10
        or    edx, ebx
        fld    dword ptr [edi + 0xc]
        xor    ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 4
        or    edx, ebx
        xor    ebx, ebx
        fcom    dword ptr [edi + 4]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 1
        or    edx, ebx
        xor    ebx, ebx
        fcomp    dword ptr [edi + 8]
        fnstsw  ax
        test    ah, 0x41
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x20
        or    edx, ebx
        mov    dword ptr [ebp - 0x10], edx
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [eax], edx
L_b127:
        mov    ebx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x18]
        add    ebx, 0xc
        add    esi, 0x10
        add    edx, 4
        inc    ecx
        dec    eax
        mov    dword ptr [ebp - 4], ebx
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [ebp - 8], edx
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 0x18], eax
        jne    L_affe
L_b153:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
