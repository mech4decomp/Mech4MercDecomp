/*
 * FUN_005ea310 (extent 0x5ea310-0x5ea83e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0077deac;
extern float  g_00785f2c;
extern float  g_00789868;
extern float  g_007899e0;
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041d780(void);
extern void __cdecl FUN_004dad70(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005ea240(void);
extern void __cdecl FUN_005ea840(void);
extern void __cdecl FUN_005ea8e0(void);
extern void __cdecl FUN_005ea980(void);
extern void __cdecl FUN_005eae20(void);
extern void __cdecl FUN_005eb690(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_005f0820(void);
extern void __cdecl FUN_005f08f0(void);
extern void __cdecl FUN_005f8fa0(void);
extern void __cdecl FUN_005f07e0(void);

__declspec(naked) void FUN_005ea310(void)
{
    __asm {
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005f08f0
        push    edi
        mov    ecx, esi
        call    FUN_005ea240
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx], 0x78992c
        jmp    FUN_005f07e0
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    esi
        mov    esi, ecx
        call    FUN_005f07c0
        mov    eax, dword ptr [eax + 4]
        cmp    dword ptr [eax], 0x429
        jne    L_a375
        mov    ecx, esi
        call    FUN_005f07c0
        mov    eax, dword ptr [eax + 0x9ac]
        test    eax, eax
        je    L_a375
        mov    cl, byte ptr [eax + 0x134]
        test    cl, cl
        je    L_a715
L_a375:
        mov    edx, dword ptr [esi + 0x78]
        push    ebx
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [edx + 4]
        fld    qword ptr [esp + 0x18]
        fsub    qword ptr [esi + 0xe4]
        mov    edi, eax
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [edi + 0x634]
        fmul    dword ptr [esi + 0x1c8]
        fmul    dword ptr [esi + 0x1d8]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x198]
        fst    dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0x198]
        push    eax
        call    FUN_0041d780
        fstp    dword ptr [esi + 0x198]
        mov    ebx, dword ptr [esi + 0x1e0]
        add    esp, 4
        cmp    ebx, 4
        je    L_a417
        cmp    ebx, 5
        je    L_a417
        fld    dword ptr [edi + 0x638]
        fmul    dword ptr [esi + 0x1cc]
        fmul    dword ptr [esi + 0x1d8]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x19c]
        fst    dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0x19c]
        push    ecx
        call    FUN_0041d780
        fstp    dword ptr [esi + 0x19c]
        add    esp, 4
        jmp    L_a4f5
L_a417:
        fld    dword ptr [edi + 0x638]
        fmul    dword ptr [esi + 0x1cc]
        fmul    dword ptr [esi + 0x1d8]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x1b8]
        fst    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0x1b8]
        push    edx
        call    FUN_0041d780
        fst    dword ptr [esi + 0x1b8]
        fld    dword ptr [g_00789868]
        add    esp, 4
        fmul    dword ptr [g_0077deac]
        fstp    dword ptr [esp + 0xc]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a475
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 0x1b8], eax
L_a475:
        fld    dword ptr [g_00789868]
        fmul    dword ptr [g_00785f2c]
        fcom    dword ptr [esi + 0x1b8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a496
        fstp    dword ptr [esi + 0x1b8]
        jmp    L_a498
L_a496:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a498:
        cmp    ebx, 4
        jne    L_a4c0
        fld    dword ptr [esi + 0x20c]
        fadd    dword ptr [esi + 0x19c]
        fsubr    dword ptr [esi + 0x1b8]
        fst    dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0x1c0]
        push    ecx
        jmp    L_a4e7
L_a4c0:
        fld    dword ptr [g_00789868]
        fmul    dword ptr [g_007899e0]
        fsub    dword ptr [esi + 0x19c]
        fadd    dword ptr [esi + 0x1b8]
        fst    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0x1c0]
        push    edx
L_a4e7:
        call    FUN_0041d780
        fstp    dword ptr [esi + 0x1c0]
        add    esp, 4
L_a4f5:
        fld    dword ptr [esi + 0x1b4]
        fcomp    dword ptr [esi + 0x1b0]
        fnstsw  ax
        test    ah, 1
        je    L_a5b5
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x1b4]
        fst    dword ptr [esi + 0x1b4]
        fdiv    dword ptr [esi + 0x1b0]
        fst    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a53b
        mov    dword ptr [esp + 0xc], 0x3f800000
L_a53b:
        fld    dword ptr [g_0076c5b0]
        fld    dword ptr [esi + 0x1a8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_a572
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x1a0]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x1a8]
        faddp st(1), st(0)
L_a572:
        fstp    dword ptr [esi + 0x198]
        fld    dword ptr [g_0076c5b0]
        fld    dword ptr [esi + 0x1ac]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_a5af
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x1a4]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x1ac]
        faddp st(1), st(0)
L_a5af:
        fstp    dword ptr [esi + 0x19c]
L_a5b5:
        fld    dword ptr [esi + 0x198]
        fcomp    dword ptr [edi + 0x63c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a5ed
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        je    L_a5ed
        push    0x18
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
L_a5ed:
        fld    dword ptr [edi + 0x63c]
        fchs    
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esi + 0x198]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_a62f
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        je    L_a62f
        push    0x18
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
L_a62f:
        fld    dword ptr [esi + 0x198]
        fcomp    dword ptr [edi + 0x63c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a64e
        mov    eax, dword ptr [edi + 0x63c]
        mov    dword ptr [esi + 0x198], eax
L_a64e:
        fld    dword ptr [esi + 0x198]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_a669
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 0x198], ecx
L_a669:
        fld    dword ptr [esi + 0x19c]
        fcomp    dword ptr [edi + 0x640]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a688
        mov    edx, dword ptr [edi + 0x640]
        mov    dword ptr [esi + 0x19c], edx
L_a688:
        fld    dword ptr [edi + 0x640]
        pop    edi
        fchs    
        pop    ebx
        fcom    dword ptr [esi + 0x19c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a6a7
        fstp    dword ptr [esi + 0x19c]
        jmp    L_a6a9
L_a6a7:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a6a9:
        mov    eax, dword ptr [esp + 8]
        push    eax
        mov    ecx, esi
        call    FUN_005eb690
        mov    eax, dword ptr [esi + 0x184]
        test    eax, eax
        je    L_a6c8
        mov    ecx, esi
        call    FUN_005eae20
        jmp    L_a704
L_a6c8:
        mov    eax, dword ptr [esi + 0x190]
        test    eax, eax
        je    L_a6e2
        mov    ecx, esi
        call    FUN_005ea840
        mov    ecx, esi
        call    FUN_005ea980
        jmp    L_a704
L_a6e2:
        mov    eax, dword ptr [esi + 0x17c]
        test    eax, eax
        je    L_a6f3
        mov    ecx, esi
        call    FUN_005ea840
L_a6f3:
        mov    eax, dword ptr [esi + 0x180]
        test    eax, eax
        je    L_a704
        mov    ecx, esi
        call    FUN_005ea8e0
L_a704:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_004dad70
L_a715:
        pop    esi
        add    esp, 8
        ret    8
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        call    FUN_005f07c0
        lea    ecx, [esi + 0x78]
        mov    edi, eax
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    ebx, eax
        lea    eax, [ebx + 0x34]
        test    eax, eax
        je    L_a76b
        push    eax
        mov    ecx, edi
        call    FUN_005f8fa0
        mov    ecx, dword ptr [eax + 0xd8]
        add    ecx, 0x50
        push    ecx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esi + 0x17c], eax
        call    FUN_0041acb0
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 0x198], edx
L_a76b:
        lea    eax, [ebx + 0x134]
        test    eax, eax
        je    L_a7a0
        push    eax
        mov    ecx, edi
        call    FUN_005f8fa0
        mov    dword ptr [esi + 0x180], eax
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x50
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_0041acb0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x19c], ecx
L_a7a0:
        mov    cl, byte ptr [ebx + 0x234]
        cmp    cl, 0x30
        lea    eax, [ebx + 0x234]
        je    L_a7bf
        push    eax
        mov    ecx, edi
        call    FUN_005f8fa0
        mov    dword ptr [esi + 0x188], eax
L_a7bf:
        mov    cl, byte ptr [ebx + 0x334]
        cmp    cl, 0x30
        lea    eax, [ebx + 0x334]
        je    L_a7de
        push    eax
        mov    ecx, edi
        call    FUN_005f8fa0
        mov    dword ptr [esi + 0x18c], eax
L_a7de:
        mov    cl, byte ptr [ebx + 0x434]
        cmp    cl, 0x30
        lea    eax, [ebx + 0x434]
        je    L_a7fd
        push    eax
        mov    ecx, edi
        call    FUN_005f8fa0
        mov    dword ptr [esi + 0x190], eax
L_a7fd:
        mov    cl, byte ptr [ebx + 0x534]
        cmp    cl, 0x30
        lea    eax, [ebx + 0x534]
        je    L_a81c
        push    eax
        mov    ecx, edi
        call    FUN_005f8fa0
        mov    dword ptr [esi + 0x194], eax
L_a81c:
        mov    eax, dword ptr [esi + 0x180]
        cmp    eax, dword ptr [esi + 0x17c]
        jne    L_a830
        mov    dword ptr [esi + 0x184], eax
L_a830:
        mov    ecx, esi
        call    FUN_005f0820
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
    }
}
