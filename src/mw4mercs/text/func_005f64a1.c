/*
 * FUN_005f64a1 (extent 0x5f64a1-0x5f6a1e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_007704c0;
extern float  g_00775c18;
extern float  g_0077deac;
extern float  g_0078a308;
extern int    g_007b8ce8;
extern int    g_007b8cec;
extern int    g_007b8cf0;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041ae30(void);
extern void __cdecl FUN_0041ae80(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_005cbe50(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_005f9ab0(void);
extern void __cdecl FUN_005faf30(void);

__declspec(naked) void FUN_005f64a1(void)
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
        nop    
        mov    eax, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d8c]
        mov    dword ptr [ecx + 0x4d4], eax
        mov    eax, dword ptr [g_007b8d90]
        mov    dword ptr [ecx + 0x4d8], edx
        mov    edx, dword ptr [g_007b8cec]
        mov    dword ptr [ecx + 0x4dc], eax
        mov    eax, dword ptr [g_007b8ce8]
        mov    dword ptr [ecx + 0x4e4], edx
        mov    edx, dword ptr [g_007b8cf0]
        mov    dword ptr [ecx + 0x4e0], eax
        xor    eax, eax
        mov    dword ptr [ecx + 0x4e8], edx
        mov    dword ptr [ecx + 0x4ec], eax
        mov    dword ptr [ecx + 0x4f0], eax
        mov    byte ptr [ecx + 0x4d0], al
        mov    byte ptr [ecx + 0x4d1], al
        ret    
        sub    esp, 0x1c
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0xd8]
        push    edi
        lea    edi, [eax + 0x80]
        push    edi
        lea    ecx, [esp + 0x1c]
        call    FUN_0041acb0
        mov    ecx, dword ptr [edi + 0x1c]
        mov    eax, dword ptr [edi + 0xc]
        mov    edx, dword ptr [edi + 0x2c]
        mov    dword ptr [esp + 0x10], ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 0x14], edx
        call    FUN_0041ae80
        lea    ecx, [esp + 0x18]
        call    FUN_0041ae80
        fld    dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x18]
        lea    edi, [esi + 0x4e0]
        mov    ecx, edi
        fstp    dword ptr [edi]
        fld    dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esi + 0x4e4]
        fld    dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esi + 0x4e8]
        call    FUN_0041ae80
        fld    dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0x4d4]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [esi + 0x4d8]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esi + 0x4dc]
        fld    dword ptr [esi + 0x4e8]
        fld    st(0)
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x34]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esi + 0x4e4]
        fld    st(0)
        fmul st(0), st(1)
        fstp    dword ptr [esp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edi]
        fld    st(0)
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x28]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 8]
        fadd    dword ptr [esp + 0x34]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_6604
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 8]
L_6604:
        fld    dword ptr [g_0078a308]
        fmul    dword ptr [g_0077deac]
        fdivp st(1), st(0)
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6629
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_663e
L_6629:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_663e
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_663e:
        fld    dword ptr [g_0076d064]
        fsub st(0), st(1)
        fmul    dword ptr [g_007704c0]
        fxch    st(1)
        fmul    dword ptr [g_0076d070]
        faddp st(1), st(0)
        fstp    dword ptr [esi + 0x4ec]
        fld    dword ptr [esi + 0x4dc]
        fld    dword ptr [esi + 0x4d8]
        fld    dword ptr [esi + 0x4d4]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fmul    dword ptr [g_00775c18]
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_66a1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_66b6
L_66a1:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_66b6
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_66b6:
        fld    dword ptr [g_0076d064]
        mov    al, 1
        fsub st(0), st(1)
        pop    edi
        mov    byte ptr [esi + 0x4d0], al
        mov    byte ptr [esi + 0x4d1], al
        fmul    dword ptr [g_007704c0]
        fxch    st(1)
        fmul    dword ptr [g_0076d070]
        faddp st(1), st(0)
        fstp    dword ptr [esi + 0x4f0]
        pop    esi
        add    esp, 0x1c
        ret    0x30
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        fld    dword ptr [g_007b8d88]
        mov    eax, dword ptr [g_007b8d8c]
        fstp    dword ptr [edx]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [g_007b8d90]
        mov    dword ptr [edx + 4], eax
        mov    eax, dword ptr [g_007b8cec]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    dword ptr [edi + 4], eax
        mov    eax, dword ptr [g_007b8cf0]
        mov    dword ptr [edx + 8], ecx
        mov    ecx, dword ptr [g_007b8ce8]
        mov    dword ptr [edi], ecx
        mov    dword ptr [edi + 8], eax
        mov    al, byte ptr [esi + 0x4d0]
        xor    ebx, ebx
        cmp    al, bl
        je    L_6818
        fld    dword ptr [esi + 0x4f0]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_67cf
        fld    dword ptr [esi + 0x4f0]
        fdiv    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6770
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_6770:
        fld    dword ptr [esi + 0x4d4]
        lea    ecx, [esi + 0x4d4]
        fsub    dword ptr [g_007b8d88]
        push    edx
        push    ecx
        fmul st(0), st(1)
        fadd    dword ptr [g_007b8d88]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [g_007b8d8c]
        fmul st(0), st(1)
        fadd    dword ptr [g_007b8d8c]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [g_007b8d90]
        fmul st(0), st(1)
        fadd    dword ptr [g_007b8d90]
        fstp    dword ptr [edx + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_0040ca10
        fld    dword ptr [esi + 0x4f0]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [esi + 0x4f0]
        jmp    L_6818
L_67cf:
        mov    ecx, dword ptr [esi + 0x4d4]
        mov    eax, dword ptr [esi + 0x4d8]
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [esi + 0x4dc]
        mov    dword ptr [edx + 4], eax
        mov    eax, dword ptr [g_007b8d8c]
        mov    dword ptr [edx + 8], ecx
        mov    edx, dword ptr [g_007b8d88]
        mov    ecx, dword ptr [g_007b8d90]
        mov    dword ptr [esi + 0x4d4], edx
        mov    dword ptr [esi + 0x4d8], eax
        mov    dword ptr [esi + 0x4dc], ecx
        mov    dword ptr [esi + 0x4f0], ebx
        mov    byte ptr [esi + 0x4d0], bl
L_6818:
        cmp    byte ptr [esi + 0x4d1], bl
        je    L_68f7
        fld    dword ptr [esi + 0x4ec]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_68ae
        fld    dword ptr [esi + 0x4ec]
        fdiv    dword ptr [esp + 0x10]
        fst    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_685a
        mov    dword ptr [esp + 0x14], 0x3f800000
L_685a:
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        lea    ebx, [esi + 0x4e0]
        push    ebx
        push    0x7b8ce8
        mov    ecx, edi
        call    FUN_0041ae30
        fld    dword ptr [ebx]
        fsub    dword ptr [edi]
        mov    al, 1
        fstp    dword ptr [ebx]
        fld    dword ptr [edi + 4]
        fsubr    dword ptr [esi + 0x4e4]
        fstp    dword ptr [esi + 0x4e4]
        fld    dword ptr [esi + 0x4e8]
        fsub    dword ptr [edi + 8]
        pop    edi
        fstp    dword ptr [esi + 0x4e8]
        fld    dword ptr [esi + 0x4ec]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0x4ec]
        pop    esi
        pop    ebx
        ret    0xc
L_68ae:
        mov    ecx, dword ptr [esi + 0x4e0]
        mov    eax, dword ptr [esi + 0x4e4]
        mov    edx, dword ptr [esi + 0x4e8]
        mov    dword ptr [edi + 4], eax
        mov    eax, dword ptr [g_007b8cec]
        mov    dword ptr [edi], ecx
        mov    ecx, dword ptr [g_007b8ce8]
        mov    dword ptr [edi + 8], edx
        mov    edx, dword ptr [g_007b8cf0]
        mov    dword ptr [esi + 0x4e4], eax
        mov    dword ptr [esi + 0x4e0], ecx
        mov    dword ptr [esi + 0x4e8], edx
        mov    dword ptr [esi + 0x4ec], ebx
        mov    byte ptr [esi + 0x4d1], bl
L_68f7:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0xc
        nop    
        mov    eax, dword ptr [esp + 4]
        cmp    eax, 3
        jne    L_691d
        xor    edx, edx
        mov    dword ptr [ecx + 0x41c], edx
        mov    dword ptr [ecx + 0x420], edx
        mov    dword ptr [ecx + 0x424], edx
L_691d:
        mov    edx, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_005f9ab0
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x78
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ebx, dword ptr [ebp + 0x4cc]
        cmp    ebx, 8
        push    esi
        mov    esi, dword ptr [esp + 0x88]
        je    L_6a0d
        mov    eax, dword ptr [esp + 0x10]
        push    edi
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        mov    edi, 0x78a7cc
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x78a7cc
        push    ecx
        push    0x78a7cc
        mov    ecx, esi
        call    FUN_005cbf80
        push    ebx
        lea    ecx, [esp + 0x28]
        push    0x76b9a8
        push    ecx
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        lea    edx, [esp + 0x13]
        push    edx
        lea    ecx, [esp + 0x1c]
        call    FUN_005cb1c0
        mov    eax, dword ptr [esp + 0x14]
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        lea    edi, [esp + 0x28]
        repne scasb
        not    ecx
        dec    ecx
        lea    ecx, [esp + ecx + 0x28]
        push    ecx
        lea    edx, [esp + 0x2c]
        push    edx
        lea    ecx, [esp + 0x24]
        call    FUN_00563480
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbe50
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_69e5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_69e5:
        mov    eax, dword ptr [esp + 0x14]
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        mov    edi, 0x78a7c8
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x78a7c8
        push    ecx
        push    0x78a7c8
        mov    ecx, esi
        call    FUN_005cbf80
        pop    edi
L_6a0d:
        push    esi
        mov    ecx, ebp
        call    FUN_005faf30
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x78
        ret    4
    }
}
