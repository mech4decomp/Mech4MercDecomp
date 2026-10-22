/*
 * FUN_005b28a3 (extent 0x5b28a3-0x5b2bac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076e1ec;
extern float  g_0077deac;
extern float  g_007860c8;
extern float  g_007b220c;
extern int    g_007f2450;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005b28a3(void)
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
        mov    eax, dword ptr [g_007f2450]
        push    ebx
        push    esi
        push    eax
        mov    ebx, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [ebx + 0x6bc]
        mov    ecx, dword ptr [ebx + 0x6c0]
        cmp    eax, ecx
        je    L_2930
        mov    edx, dword ptr [esp + 0xc]
L_28d3:
        cmp    dword ptr [eax], edx
        je    L_28de
        add    eax, 0xc
        cmp    eax, ecx
        jne    L_28d3
L_28de:
        cmp    eax, ecx
        je    L_2930
        push    edi
        mov    edi, dword ptr [ebx + 0x6c0]
        lea    edx, [eax + 0xc]
        cmp    edx, edi
        je    L_2926
        mov    esi, eax
        mov    ecx, edi
        sub    ecx, edx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        test    edx, edx
        jle    L_2926
        push    ebp
L_290b:
        dec    edx
        lea    eax, [esi + 0xc]
        mov    ecx, eax
        mov    ebp, dword ptr [ecx]
        mov    dword ptr [esi], ebp
        mov    ebp, dword ptr [ecx + 4]
        mov    dword ptr [esi + 4], ebp
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [esi + 8], ecx
        mov    esi, eax
        jne    L_290b
        pop    ebp
L_2926:
        add    edi, -0xc
        mov    dword ptr [ebx + 0x6c0], edi
        pop    edi
L_2930:
        call    FUN_006f49a0
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2450]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        mov    ecx, dword ptr [edi + 0x6c0]
        mov    esi, dword ptr [edi + 0x6bc]
        mov    edx, ecx
        sub    edx, ecx
        mov    eax, 0x2aaaaaab
        imul    edx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        test    edx, edx
        jle    L_2994
        push    ebx
        push    ebp
L_2975:
        mov    eax, ecx
        mov    ebp, dword ptr [eax]
        mov    ebx, esi
        mov    dword ptr [ebx], ebp
        mov    ebp, dword ptr [eax + 4]
        mov    dword ptr [ebx + 4], ebp
        mov    eax, dword ptr [eax + 8]
        add    ecx, 0xc
        add    esi, 0xc
        dec    edx
        mov    dword ptr [ebx + 8], eax
        jne    L_2975
        pop    ebp
        pop    ebx
L_2994:
        mov    dword ptr [edi + 0x6c0], esi
        call    FUN_006f49a0
        pop    edi
        pop    esi
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
        sub    esp, 0x1c
        mov    edx, dword ptr [esp + 0x24]
        fld    dword ptr [edx + 4]
        mov    ecx, dword ptr [ecx + 0x35c]
        fsub    dword ptr [edx]
        mov    eax, dword ptr [ecx + 0x128]
        test    eax, eax
        push    esi
        mov    esi, dword ptr [edx + 0x34]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [edx]
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [edx + 8]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [edx + 8]
        fstp    dword ptr [esp + 0x1c]
        jne    L_29ff
        mov    eax, dword ptr [ecx + 0x124]
        test    eax, eax
        jne    L_29ff
        mov    dword ptr [esp + 0x28], 0x41700000
        jmp    L_2a06
L_29ff:
        mov    eax, dword ptr [eax + 0x4c]
        mov    dword ptr [esp + 0x28], eax
L_2a06:
        mov    ecx, dword ptr [esi + 0x35c]
        mov    eax, dword ptr [ecx + 0x128]
        test    eax, eax
        pop    esi
        jne    L_2a29
        mov    eax, dword ptr [ecx + 0x124]
        test    eax, eax
        jne    L_2a29
        fld    dword ptr [g_0077deac]
        jmp    L_2a2c
L_2a29:
        fld    dword ptr [eax + 0x4c]
L_2a2c:
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [g_0076e1ec]
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [g_0076e1ec]
        fld    dword ptr [edx + 0x1c]
        fld    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x14]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fabs    
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_2a88
        fld    dword ptr [g_0076d064]
        mov    dword ptr [esp + 8], 0
        mov    dword ptr [esp + 0xc], 0
        jmp    L_2acc
L_2a88:
        fld    dword ptr [edx + 0x1c]
        fld    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x14]
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
        fdivr    dword ptr [g_0076d064]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        fmul    dword ptr [edx + 0x14]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fmul    dword ptr [edx + 0x18]
        fstp    dword ptr [esp + 8]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fmul    dword ptr [edx + 0x1c]
        fstp    dword ptr [esp + 0xc]
L_2acc:
        fxch    st(1)
        mov    eax, dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x24]
        fst    dword ptr [esp + 0x24]
        fmul st(0), st(1)
        fxch    st(1)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
        fxch    st(1)
        fsub st(0), st(1)
        fxch    st(1)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 8]
        fchs    
        fld    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x18]
        fxch    st(1)
        mov    dword ptr [eax + 8], ecx
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 4]
        add    esp, 0x1c
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
        xor    al, al
        mov    byte ptr [ecx + 0x6d0], al
        mov    byte ptr [ecx + 0x6d1], al
        mov    byte ptr [ecx + 0x6e0], 1
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
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x6d1]
        test    al, al
        jne    L_2b71
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x6c8]
        mov    byte ptr [esi + 0x6d1], 1
L_2b71:
        pop    esi
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
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fsub    qword ptr [g_007860c8]
        mov    eax, dword ptr [esi + 0x6a4]
        mov    byte ptr [esi + 0x6d1], 1
        fstp    qword ptr [esi + 0x6c8]
        mov    byte ptr [eax + 0x548], 0
        pop    esi
        ret    
    }
}
