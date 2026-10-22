/*
 * FUN_0047ff56 (extent 0x47ff56-0x4801a8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076dd64;
extern int    g_007da64c;
extern int    g_007da650;
extern float  g_007da654;
extern int    g_007da658;
extern int    g_007da68c;
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0047ff56(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x14], eax
        mov    dword ptr [ecx + 0x18], edx
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x48], eax
        mov    dword ptr [ecx + 0x4c], edx
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
        mov    eax, dword ptr [ecx + 0x48]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x4c]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
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
        push    ebp
        mov    ebp, esp
        sub    esp, 8
        push    ebx
        mov    ebx, dword ptr [ecx + 0x18]
        test    ebx, ebx
        jle    L_008a
        push    esi
        push    edi
        xor    edi, edi
        xor    esi, esi
L_ffd8:
        mov    eax, dword ptr [ecx + 0x14]
        add    eax, esi
        mov    dword ptr [ebp - 8], eax
        mov    eax, dword ptr [g_007da68c]
        mov    edx, edi
        add    edx, dword ptr [eax]
        mov    dword ptr [ebp - 4], edx
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 8]
        fld    dword ptr [eax]
        fld    dword ptr [eax + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 4]
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
        add    esi, 0xc
        add    edi, 0x10
        dec    ebx
        jne    L_ffd8
        pop    edi
        pop    esi
L_008a:
        pop    ebx
        mov    esp, ebp
        pop    ebp
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
        nop    
        sub    esp, 0x18
        push    ebx
        push    edi
        mov    ebx, ecx
        mov    edi, dword ptr [ebx + 0x24]
        shr    edi, 0x13
        and    edi, 3
        jne    L_00c0
        and    byte ptr [ebx + 0x13], 0xfe
        pop    edi
        xor    al, al
        pop    ebx
        add    esp, 0x18
        ret    0xc
L_00c0:
        dec    edi
        cmp    word ptr [ebx + 0x56], 0
        jne    L_00d2
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 0x98]
L_00d2:
        mov    eax, dword ptr [esp + 0x28]
        fld    dword ptr [g_007da654]
        mov    ecx, dword ptr [eax]
        fmul    dword ptr [g_0076dd64]
        mov    edx, dword ptr [eax + 4]
        fld    dword ptr [g_0076dd64]
        mov    eax, dword ptr [eax + 8]
        push    esi
        fsub st(0), st(1)
        mov    esi, dword ptr [esp + 0x30]
        mov    dword ptr [esi + 0x20], ecx
        mov    dword ptr [esi + 0x24], edx
        mov    dword ptr [esi + 0x28], eax
        shl    edi, 4
        mov    ecx, dword ptr [edi + 0x7da60c]
        mov    edx, dword ptr [edi + 0x7da610]
        mov    eax, dword ptr [edi + 0x7da618]
        mov    dword ptr [esi], ecx
        mov    ecx, dword ptr [g_007da64c]
        mov    dword ptr [esi + 4], edx
        mov    edx, dword ptr [g_007da650]
        mov    dword ptr [esi + 8], eax
        mov    eax, dword ptr [g_007da658]
        mov    dword ptr [esi + 0xc], ecx
        mov    dword ptr [esi + 0x10], edx
        mov    dword ptr [esi + 0x14], eax
        call    FUN_0075db4a
        fmul    dword ptr [esi + 0x14]
        mov    edi, dword ptr [esp + 0x28]
        push    edi
        lea    ecx, [esp + 0x10]
        fstp    dword ptr [esi + 0x18]
        push    ecx
        lea    ecx, [esi + 0x2c]
        mov    byte ptr [esi + 0x1c], al
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_0041c7d0
        push    edi
        lea    edx, [esp + 0x1c]
        push    edx
        lea    ecx, [esi + 0x38]
        mov    dword ptr [esp + 0x20], 0
        mov    dword ptr [esp + 0x24], 0x3f800000
        mov    dword ptr [esp + 0x28], 0
        call    FUN_0041c680
        mov    cl, byte ptr [ebx + 0x13]
        mov    al, 1
        pop    esi
        or    cl, al
        pop    edi
        mov    byte ptr [ebx + 0x13], cl
        pop    ebx
        add    esp, 0x18
        ret    0xc
    }
}
