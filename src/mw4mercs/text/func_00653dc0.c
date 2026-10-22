/*
 * FUN_00653dc0 (extent 0x653dc0-0x6540e1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0077016c;
extern int    g_007f2464;
extern float  g_0080da54;
extern float  g_0080da58;
extern float  g_0080da5c;
extern float  g_0080da60;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00547bc0(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_005cbb00(void);
extern void __cdecl FUN_00659020(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00653dc0(void)
{
    __asm {
        fld    dword ptr [ecx + 0x44]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_3dd7
        mov    dword ptr [ecx + 0x44], 0x3f800000
L_3dd7:
        fld    dword ptr [g_0080da60]
        fadd    dword ptr [g_0077016c]
        fcom    dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3df2
        fstp    dword ptr [ecx + 8]
        jmp    L_3df4
L_3df2:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3df4:
        fld    dword ptr [g_0080da5c]
        fadd    dword ptr [g_0077016c]
        fcom    dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3e0f
        fstp    dword ptr [ecx + 0x10]
        jmp    L_3e11
L_3e0f:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3e11:
        fld    dword ptr [g_0080da58]
        fsub    dword ptr [g_0077016c]
        fcom    dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 1
        je    L_3e2c
        fstp    dword ptr [ecx + 8]
        jmp    L_3e2e
L_3e2c:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3e2e:
        fld    dword ptr [g_0080da54]
        fsub    dword ptr [g_0077016c]
        fcom    dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_3e49
        fstp    dword ptr [ecx + 0x10]
        jmp    L_3e4b
L_3e49:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3e4b:
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [ecx + 0x44]
        fcomp    dword ptr [g_0080da60]
        fnstsw  ax
        test    ah, 1
        je    L_3e70
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [g_0080da60]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [ecx + 0x44]
L_3e70:
        fld    dword ptr [ecx + 0x10]
        fsub    dword ptr [ecx + 0x44]
        fcomp    dword ptr [g_0080da5c]
        fnstsw  ax
        test    ah, 1
        je    L_3e95
        fld    dword ptr [ecx + 0x10]
        fsub    dword ptr [g_0080da5c]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [ecx + 0x44]
L_3e95:
        fld    dword ptr [ecx + 8]
        fadd    dword ptr [ecx + 0x44]
        fcomp    dword ptr [g_0080da58]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3eba
        fld    dword ptr [g_0080da58]
        fsub    dword ptr [ecx + 8]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [ecx + 0x44]
L_3eba:
        fld    dword ptr [ecx + 0x10]
        fadd    dword ptr [ecx + 0x44]
        fcomp    dword ptr [g_0080da54]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3edf
        fld    dword ptr [g_0080da54]
        fsub    dword ptr [ecx + 0x10]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [ecx + 0x44]
L_3edf:
        ret    
        sub    esp, 0x2c
        mov    eax, dword ptr [g_007f2464]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebx, ecx
        push    eax
        mov    dword ptr [esp + 0x24], ebx
        call    FUN_006f4950
        mov    edx, dword ptr [ebx + 0x20]
        mov    esi, dword ptr [ebx + 0x1c]
        sub    edx, esi
        sar    edx, 2
        test    edx, edx
        mov    dword ptr [esp + 0x14], edx
        jle    L_4005
        mov    ecx, esi
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x1c], edx
L_3f19:
        mov    eax, dword ptr [ecx]
        test    eax, eax
        je    L_3fef
        mov    esi, eax
        add    esi, 0x2c
        mov    ebx, dword ptr [esi + 8]
        lea    edi, [esi + 8]
        mov    byte ptr [eax + 5], 1
        mov    eax, dword ptr [esi]
        sub    ebx, eax
        sar    ebx, 2
        cmp    ebx, edx
        jae    L_3f9c
        mov    ecx, dword ptr [esi + 4]
        mov    ebx, ecx
        sub    ebx, eax
        sar    ebx, 2
        test    eax, eax
        je    L_3f6f
        push    ecx
        push    eax
        push    edx
        mov    ecx, esi
        call    FUN_00659020
        mov    ecx, dword ptr [edi]
        mov    ebp, eax
        mov    eax, dword ptr [esi]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        mov    ecx, edi
        call    FUN_00547bc0
        mov    edx, dword ptr [esp + 0x14]
        jmp    L_3f89
L_3f6f:
        test    edx, edx
        je    L_3f87
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        mov    edx, dword ptr [esp + 0x18]
        add    esp, 4
        mov    ebp, eax
        jmp    L_3f89
L_3f87:
        xor    ebp, ebp
L_3f89:
        lea    ecx, [ebp + edx*4]
        lea    eax, [ebp + ebx*4]
        mov    dword ptr [edi], ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esi], ebp
        mov    dword ptr [esi + 4], eax
L_3f9c:
        mov    ebx, edx
        jmp    L_3fa4
L_3fa0:
        mov    ecx, dword ptr [esp + 0x10]
L_3fa4:
        mov    dword ptr [esp + 0x18], 0x7f7fffff
        mov    esi, dword ptr [ecx]
        mov    edi, dword ptr [esi + 0x30]
        mov    eax, dword ptr [esi + 0x34]
        add    esi, 0x2c
        cmp    edi, eax
        je    L_3fd1
        lea    edx, [esp + 0x18]
        push    edx
        push    edi
        call    FUN_005cbb00
        add    esp, 8
        add    edi, 4
        mov    dword ptr [esi + 4], edi
        jmp    L_3fe0
L_3fd1:
        push    1
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00566570
L_3fe0:
        dec    ebx
        jne    L_3fa0
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [esp + 0x20]
L_3fef:
        mov    eax, dword ptr [esp + 0x1c]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x1c], eax
        jne    L_3f19
L_4005:
        lea    eax, [edx - 1]
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        jle    L_40d4
        xor    esi, esi
        mov    edi, 1
L_401b:
        cmp    edi, edx
        mov    ecx, edi
        jge    L_40c5
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ebx, dword ptr [esi + eax]
L_402b:
        test    ebx, ebx
        jne    L_4035
        cmp    dword ptr [eax + ecx*4], 0
        je    L_40b4
L_4035:
        cmp    dword ptr [esi + eax], 0
        mov    ebp, dword ptr [eax + ecx*4]
        jne    L_404a
        mov    ebp, dword ptr [ebp + 0x2c]
        mov    dword ptr [esi + ebp], 0x7f7fffff
        jmp    L_40b4
L_404a:
        test    ebp, ebp
        jne    L_405e
        mov    ebp, dword ptr [esi + eax]
        mov    ebp, dword ptr [ebp + 0x2c]
        mov    dword ptr [ebp + ecx*4], 0x7f7fffff
        jmp    L_40b4
L_405e:
        mov    edx, dword ptr [esi + eax]
        fld    dword ptr [edx + 8]
        add    edx, 8
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [esp + 0x2c], edx
        mov    edx, dword ptr [eax + ecx*4]
        fld    dword ptr [edx + 8]
        add    edx, 8
        mov    edx, dword ptr [edx + 8]
        fxch    st(1)
        fsub st(0), st(1)
        mov    dword ptr [esp + 0x38], edx
        fxch    st(1)
        mov    edx, dword ptr [esi + eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    edx, dword ptr [edx + 0x2c]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x38]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fsqrt    
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fst    dword ptr [edx + ecx*4]
        mov    edx, dword ptr [eax + ecx*4]
        mov    edx, dword ptr [edx + 0x2c]
        fstp    dword ptr [edx + esi]
        mov    edx, dword ptr [esp + 0x14]
L_40b4:
        inc    ecx
        cmp    ecx, edx
        jl    L_402b
        mov    ebx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
L_40c5:
        inc    edi
        lea    ecx, [edi - 1]
        add    esi, 4
        cmp    ecx, eax
        jl    L_401b
L_40d4:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x2c
        ret    
    }
}
