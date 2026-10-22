/*
 * FUN_0041c582 (extent 0x41c582-0x41c67d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007b220c;
extern int    g_007b8d68;
extern int    g_007b8d6c;
extern int    g_007b8d70;

__declspec(naked) void FUN_0041c582(void)
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 8]
        fld    dword ptr [edx + 4]
        fld    dword ptr [edx]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fsqrt    
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    st(0)
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_c5e6
        mov    eax, dword ptr [g_007b8d68]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    edx, dword ptr [g_007b8d6c]
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [g_007b8d70]
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 4], edx
        mov    eax, ecx
        ret    4
L_c5e6:
        fld    dword ptr [edx + 0xc]
        mov    eax, ecx
        fld    st(1)
        fxch    st(1)
        fpatan    
        fadd    st(0), st(0)
        fdivrp st(1), st(0)
        fld    st(0)
        fmul    dword ptr [edx]
        fstp    dword ptr [ecx]
        fld    st(0)
        fmul    dword ptr [edx + 4]
        fstp    dword ptr [ecx + 4]
        fmul    dword ptr [edx + 8]
        fstp    dword ptr [ecx + 8]
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x14
        mov    eax, ecx
        lea    ecx, [ebp - 0x14]
        push    ebx
        mov    dword ptr [ebp - 4], ecx
        push    ebx
        push    edx
        mov    ebx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsincos    
        fstp    dword ptr [ebx + 4]
        fstp    dword ptr [ebx]
        pop    edx
        pop    ebx
        mov    ecx, dword ptr [ebp + 8]
        lea    edx, [ecx + 4]
        mov    dword ptr [ebp + 8], edx
        lea    edx, [ebp - 0xc]
        mov    dword ptr [ebp - 4], edx
        push    ebx
        push    edx
        mov    ebx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsincos    
        fstp    dword ptr [ebx + 4]
        fstp    dword ptr [ebx]
        pop    edx
        pop    ebx
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ecx + 8]
        pop    ebx
        fchs    
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [ecx + 8]
        fld    dword ptr [ebp - 0x14]
        fmul st(0), st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [ebp - 0x10]
        fmul st(0), st(1)
        fstp    dword ptr [eax + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
