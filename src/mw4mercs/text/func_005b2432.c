/*
 * FUN_005b2432 (extent 0x5b2432-0x5b2b46) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076e1ec;
extern float  g_0077b640;
extern float  g_0077deac;
extern float  g_007b220c;
extern int    g_007f23c8;
extern int    g_007f23cc;
extern int    g_007f2450;
extern int    g_0080da90;
extern int    g_0080daa4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_005b3940(void);
extern void __cdecl FUN_005cec30(void);
extern void __cdecl FUN_005cfde0(void);
extern void __cdecl FUN_005d0ca0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00707f50(void);
extern void __cdecl FUN_005c6c50(void);
extern void __cdecl FUN_005cec20(void);

__declspec(naked) void FUN_005b2432(void)
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
        mov    al, 1
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
        sub    esp, 0x10
        push    ebp
        push    esi
        mov    esi, ecx
        push    edi
        mov    dword ptr [esp + 0xc], esi
        call    FUN_00707f50
        mov    ebp, dword ptr [esi + 0x6b0]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esi + 0x6b4]
        cmp    ebp, eax
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x10], eax
        je    L_2508
        push    ebx
        mov    ebx, dword ptr [g_0080da90]
L_2488:
        mov    ecx, dword ptr [ebp]
        mov    eax, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [ebx + 0xc]
        cmp    eax, edx
        jl    L_24e6
        mov    edi, dword ptr [ebx + 0x10]
        sub    eax, edx
        mov    esi, eax
        cmp    esi, edi
        jge    L_24e2
        mov    eax, dword ptr [ebx + 8]
        lea    edx, [eax + esi]
        cmp    edx, edi
        jl    L_24b0
        sub    eax, edi
        add    eax, esi
        mov    edx, eax
L_24b0:
        cmp    edx, -1
        je    L_24e2
        mov    eax, dword ptr [ebx]
        lea    eax, [eax + edx*4]
        cmp    dword ptr [eax], ecx
        jne    L_24c3
        mov    edx, dword ptr [ecx + 0x2c]
        mov    dword ptr [eax], edx
L_24c3:
        mov    eax, dword ptr [ecx + 0x30]
        xor    esi, esi
        cmp    eax, esi
        je    L_24d2
        mov    edx, dword ptr [ecx + 0x2c]
        mov    dword ptr [eax + 0x2c], edx
L_24d2:
        mov    edx, dword ptr [ecx + 0x2c]
        cmp    edx, esi
        je    L_24dc
        mov    dword ptr [edx + 0x30], eax
L_24dc:
        mov    dword ptr [ecx + 0x30], esi
        mov    dword ptr [ecx + 0x2c], esi
L_24e2:
        mov    esi, dword ptr [esp + 0x10]
L_24e6:
        test    ecx, ecx
        je    L_24fc
        push    ecx
        mov    ecx, dword ptr [g_0080daa4]
        call    FUN_00416130
        mov    ebx, dword ptr [g_0080da90]
L_24fc:
        mov    eax, dword ptr [esp + 0x14]
        add    ebp, 4
        cmp    ebp, eax
        jne    L_2488
        pop    ebx
L_2508:
        mov    eax, dword ptr [esi + 0x6b4]
        mov    edx, dword ptr [esi + 0x6b0]
        mov    ecx, eax
        sub    ecx, eax
        sar    ecx, 2
        test    ecx, ecx
        jle    L_252c
L_251f:
        mov    edi, dword ptr [eax]
        mov    dword ptr [edx], edi
        add    eax, 4
        add    edx, 4
        dec    ecx
        jne    L_251f
L_252c:
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0x6b4], edx
        call    FUN_005cfde0
        call    FUN_00707f50
        mov    edi, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [g_007f23c8]
        sub    eax, edi
        sbb    edx, esi
        add    ecx, eax
        mov    eax, dword ptr [g_007f23cc]
        pop    edi
        adc    eax, edx
        pop    esi
        mov    dword ptr [g_007f23c8], ecx
        mov    dword ptr [g_007f23cc], eax
        pop    ebp
        add    esp, 0x10
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
        push    ebp
        mov    ebp, ecx
        push    esi
        mov    esi, dword ptr [ebp + 0x35c]
        test    esi, esi
        jne    L_2595
        pop    esi
        xor    al, al
        pop    ebp
        ret    8
L_2595:
        push    ebx
        push    edi
        call    FUN_00707f50
        mov    edi, eax
        mov    al, byte ptr [esi + 0x514]
        test    al, al
        mov    ebx, edx
        je    L_25bb
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov    ecx, ebp
        call    FUN_005d0ca0
L_25bb:
        call    FUN_00707f50
        mov    ecx, dword ptr [g_007f23c8]
        sub    eax, edi
        sbb    edx, ebx
        add    ecx, eax
        mov    eax, dword ptr [g_007f23cc]
        pop    edi
        pop    ebx
        adc    eax, edx
        pop    esi
        mov    dword ptr [g_007f23cc], eax
        mov    dword ptr [g_007f23c8], ecx
        xor    al, al
        pop    ebp
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
        jmp    FUN_005c6c50
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
        jmp    FUN_005cec20
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
        push    eax
        call    FUN_005cec30
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_2634
        mov    ecx, dword ptr [g_0080daa4]
        push    eax
        call    FUN_00416130
L_2634:
        xor    al, al
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x6bc]
        mov    ecx, dword ptr [ecx + 0x6c0]
        cmp    eax, ecx
        je    L_265f
        mov    edx, dword ptr [esp + 4]
L_2654:
        cmp    dword ptr [eax], edx
        je    L_2664
        add    eax, 0xc
        cmp    eax, ecx
        jne    L_2654
L_265f:
        xor    al, al
        ret    4
L_2664:
        mov    al, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2450]
        sub    esp, 0x10
        push    ebx
        push    esi
        push    edi
        push    eax
        mov    ebx, ecx
        call    FUN_006f4950
        mov    esi, dword ptr [ebx + 0x6bc]
        mov    eax, dword ptr [ebx + 0x6c0]
        cmp    esi, eax
        mov    edi, dword ptr [esp + 0x20]
        je    L_26a2
L_2697:
        cmp    dword ptr [esi], edi
        je    L_26a2
        add    esi, 0xc
        cmp    esi, eax
        jne    L_2697
L_26a2:
        cmp    esi, eax
        push    0
        jne    L_27ce
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x14]
        mov    esi, dword ptr [ebx + 0x6c0]
        cmp    esi, dword ptr [ebx + 0x6c4]
        mov    eax, edi
        mov    dword ptr [esp + 0x10], eax
        je    L_26f6
        test    esi, esi
        je    L_26df
        mov    ecx, esi
        mov    dword ptr [ecx], eax
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [ecx + 4], edx
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ecx + 8], eax
L_26df:
        add    esi, 0xc
        mov    dword ptr [ebx + 0x6c0], esi
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    4
L_26f6:
        mov    edi, dword ptr [ebx + 0x6bc]
        mov    ecx, esi
        sub    ecx, edi
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        cmp    edx, 1
        mov    dword ptr [esp + 0x20], 1
        mov    dword ptr [esp + 0xc], edx
        lea    eax, [esp + 0x20]
        jb    L_2729
        lea    eax, [esp + 0xc]
L_2729:
        push    ebp
        mov    ebp, dword ptr [eax]
        add    ebp, edx
        je    L_2746
        lea    edx, [ebp + ebp*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x24], eax
        jmp    L_274e
L_2746:
        mov    dword ptr [esp + 0x24], 0
L_274e:
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        push    esi
        push    edi
        call    FUN_005b3940
        add    esp, 0x10
        test    eax, eax
        je    L_277c
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, eax
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [edx + 4], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [edx + 8], ecx
L_277c:
        mov    edx, dword ptr [esp + 0x24]
        push    edx
        add    eax, 0xc
        push    eax
        push    esi
        push    esi
        call    FUN_005b3940
        add    esp, 0x10
        test    edi, edi
        mov    esi, eax
        mov    dword ptr [esp + 0x10], edi
        je    L_27a2
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_27a2:
        mov    eax, dword ptr [esp + 0x24]
        lea    ecx, [ebp + ebp*2]
        lea    edx, [eax + ecx*4]
        pop    ebp
        mov    dword ptr [ebx + 0x6bc], eax
        mov    dword ptr [ebx + 0x6c0], esi
        mov    dword ptr [ebx + 0x6c4], edx
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    4
L_27ce:
        call    FUN_00707e70
        fstp    qword ptr [esi + 4]
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
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
        sub    esp, 8
        mov    eax, dword ptr [g_007f2450]
        push    ebx
        push    esi
        mov    esi, ecx
        push    eax
        mov    dword ptr [esp + 0x10], esi
        call    FUN_006f4950
        push    0
        call    FUN_00707e70
        mov    ebx, dword ptr [esi + 0x6bc]
        cmp    ebx, dword ptr [esi + 0x6c0]
        je    L_2896
        push    ebp
        push    edi
        lea    ebp, [ebx + 0xc]
L_2820:
        fld    qword ptr [ebp - 8]
        fsub st(0), st(1)
        fcomp    qword ptr [g_0077b640]
        fnstsw  ax
        test    ah, 1
        jne    L_2886
        mov    edi, dword ptr [esi + 0x6c0]
        cmp    ebp, edi
        je    L_287b
        mov    ecx, edi
        sub    ecx, ebp
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        test    edx, edx
        mov    esi, ebx
        jle    L_2877
        mov    dword ptr [esp + 0x10], edx
L_285a:
        lea    eax, [esi + 0xc]
        mov    edx, eax
        mov    ecx, dword ptr [edx]
        mov    dword ptr [esi], ecx
        mov    ecx, dword ptr [edx + 4]
        mov    dword ptr [esi + 4], ecx
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [esi + 8], edx
        mov    esi, eax
        dec    dword ptr [esp + 0x10]
        jne    L_285a
L_2877:
        mov    esi, dword ptr [esp + 0x14]
L_287b:
        add    edi, -0xc
        mov    dword ptr [esi + 0x6c0], edi
        jmp    L_288c
L_2886:
        add    ebx, 0xc
        add    ebp, 0xc
L_288c:
        cmp    ebx, dword ptr [esi + 0x6c0]
        jne    L_2820
        pop    edi
        pop    ebp
L_2896:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_006f49a0
        pop    esi
        pop    ebx
        add    esp, 8
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
        fst    dword ptr [esp]
        fmul    dword ptr [edx + 0x14]
        fld    dword ptr [esp]
        fmul    dword ptr [edx + 0x18]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esp]
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
    }
}
