/*
 * FUN_00431249 (extent 0x431249-0x4317a6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076dd60;
extern float  g_0076e2bc;
extern float  g_007b220c;
extern int    g_007b958c;
extern int    g_007b980c;
extern int    g_007b9810;
extern int    g_007b9814;
extern int    g_007b9824;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_00431249(void)
{
    __asm {
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
        sub    esp, 0x20
        push    ebp
        mov    ebp, dword ptr [esp + 0x28]
        push    esi
        mov    esi, ecx
        fld    dword ptr [esi + 0x50]
        mov    ecx, dword ptr [ebp]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esi + 0x60]
        lea    eax, [esi + 0xb0]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esi + 0x70]
        push    eax
        push    ecx
        fstp    dword ptr [esp + 0x20]
        lea    ecx, [esp + 0x24]
        call    FUN_0041c7d0
        mov    edx, dword ptr [esi + 0x9c]
        mov    ecx, dword ptr [esi + 0xa0]
        mov    dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0xc], ecx
        fmul    dword ptr [esi + 0x8c]
        fsub    dword ptr [esp + 0x1c]
        fsub    dword ptr [esi + 0x80]
        fstp    dword ptr [esp + 0x2c]
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x90]
        fsub    dword ptr [esp + 0x24]
        fsub    dword ptr [esi + 0x88]
        fld    dword ptr [esp + 0x2c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_12ed
        mov    dword ptr [esp + 0x2c], 0
L_12ed:
        fld    dword ptr [esp + 0x2c]
        push    ebx
        fmul    dword ptr [esi + 0x94]
        push    edi
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov    ebx, dword ptr [esp + 0x14]
        fcom    dword ptr [g_0076c5b0]
        and    ebx, 0xffff
        mov    dword ptr [esp + 0x10], ebx
        fnstsw  ax
        test    ah, 1
        je    L_132c
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_132c:
        fld    st(0)
        fmul    dword ptr [esi + 0x98]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x14]
        and    edi, 0xffff
        cmp    ebx, edx
        mov    dword ptr [esp + 0x14], edi
        jl    L_135d
        lea    ebx, [edx - 1]
        mov    dword ptr [esp + 0x10], ebx
L_135d:
        cmp    edi, ecx
        jl    L_1368
        lea    edi, [ecx - 1]
        mov    dword ptr [esp + 0x14], edi
L_1368:
        fild    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x8c]
        fsubr    dword ptr [esp + 0x34]
        fmul    dword ptr [esi + 0x94]
        fmul    dword ptr [g_0076e2bc]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x34]
        fild    dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x34]
        and    ecx, 0xffff
        fmul    dword ptr [esi + 0x90]
        fsubr st(0), st(1)
        fmul    dword ptr [esi + 0x98]
        fmul    dword ptr [g_0076e2bc]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x34]
        and    eax, 0xffff
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ecx, ecx
        jge    L_13d7
        xor    ecx, ecx
        jmp    L_13e4
L_13d7:
        cmp    ecx, 0xff
        jle    L_13e4
        mov    ecx, 0xff
L_13e4:
        test    eax, eax
        jge    L_13ec
        xor    eax, eax
        jmp    L_13f8
L_13ec:
        cmp    eax, 0xff
        jle    L_13f8
        mov    eax, 0xff
L_13f8:
        imul    edx, edi
        mov    edi, dword ptr [esi + 0xac]
        add    edx, ebx
        mov    edx, dword ptr [edi + edx*4]
        shl    eax, 5
        add    edx, eax
        mov    eax, ecx
        and    ecx, 7
        mov    ebx, 0x80
        sar    ebx, cl
        sar    eax, 3
        mov    cl, byte ptr [edx + eax]
        pop    edi
        test    cl, bl
        pop    ebx
        je    L_1428
        fld    dword ptr [esi + 8]
        jmp    L_142e
L_1428:
        fld    dword ptr [esi + 0xa8]
L_142e:
        mov    eax, dword ptr [ebp + 8]
        fst    dword ptr [esp + 0x2c]
        test    eax, eax
        je    L_1459
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [eax + 8]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [eax + 4]
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [eax]
        faddp st(1), st(0)
        fmul st(0), st(1)
        fchs    
        fstp    dword ptr [esp + 0x2c]
L_1459:
        add    esi, 0xc
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [esi]
        fld    dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esi + 4]
        fcomp    dword ptr [g_007b220c]
        mov    eax, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x10], ecx
        fnstsw  ax
        mov    dword ptr [esp + 0x14], edx
        test    ah, 0x41
        jne    L_14be
        fld    dword ptr [esp + 0x10]
        mov    eax, dword ptr [ebp + 4]
        fmul    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x18]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
L_14be:
        pop    esi
        pop    ebp
        add    esp, 0x20
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
        sub    esp, 0x18
        mov    edx, ecx
        fld    dword ptr [edx + 0xbc]
        mov    ecx, dword ptr [edx + 0xa0]
        push    ebx
        mov    eax, dword ptr [edx + 0xdc]
        push    esi
        mov    esi, dword ptr [edx + 0x9c]
        mov    dword ptr [esp + 0x10], esi
        fild    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x1c], eax
        push    edi
        fmul    dword ptr [edx + 0x8c]
        fsub st(0), st(1)
        fsub    dword ptr [edx + 0x80]
        fstp    dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fild    dword ptr [esp + 0x14]
        fmul    dword ptr [edx + 0x90]
        fsub    dword ptr [esp + 0x20]
        fsub    dword ptr [edx + 0x88]
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_1541
        mov    dword ptr [esp + 0xc], 0
L_1541:
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [edx + 0x94]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov    ebx, dword ptr [esp + 0x14]
        fcom    dword ptr [g_0076c5b0]
        and    ebx, 0xffff
        mov    dword ptr [esp + 0x10], ebx
        fnstsw  ax
        test    ah, 1
        je    L_157e
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_157e:
        fld    st(0)
        fmul    dword ptr [edx + 0x98]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x14]
        and    edi, 0xffff
        cmp    ebx, esi
        mov    dword ptr [esp + 0x14], edi
        jl    L_15af
        lea    ebx, [esi - 1]
        mov    dword ptr [esp + 0x10], ebx
L_15af:
        cmp    edi, ecx
        jl    L_15ba
        lea    edi, [ecx - 1]
        mov    dword ptr [esp + 0x14], edi
L_15ba:
        fild    dword ptr [esp + 0x10]
        fmul    dword ptr [edx + 0x8c]
        fsubr    dword ptr [esp + 0xc]
        fmul    dword ptr [edx + 0x94]
        fmul    dword ptr [g_0076e2bc]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        and    ecx, 0xffff
        fmul    dword ptr [edx + 0x90]
        fsubr st(0), st(1)
        fmul    dword ptr [edx + 0x98]
        fmul    dword ptr [g_0076e2bc]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x14]
        and    eax, 0xffff
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ecx, ecx
        jge    L_1629
        xor    ecx, ecx
        jmp    L_1636
L_1629:
        cmp    ecx, 0xff
        jle    L_1636
        mov    ecx, 0xff
L_1636:
        test    eax, eax
        jge    L_163e
        xor    eax, eax
        jmp    L_164a
L_163e:
        cmp    eax, 0xff
        jle    L_164a
        mov    eax, 0xff
L_164a:
        imul    esi, edi
        mov    edi, dword ptr [edx + 0xac]
        add    esi, ebx
        mov    esi, dword ptr [edi + esi*4]
        shl    eax, 5
        add    esi, eax
        mov    eax, ecx
        and    ecx, 3
        mov    ebx, 0x80
        sar    ebx, cl
        sar    eax, 3
        mov    cl, byte ptr [esi + eax]
        pop    edi
        pop    esi
        test    cl, bl
        pop    ebx
        je    L_167b
        fld    dword ptr [edx + 8]
        jmp    L_1681
L_167b:
        fld    dword ptr [edx + 0xa8]
L_1681:
        fcom    dword ptr [g_007b220c]
        add    edx, 0xc
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [edx + 4]
        mov    dword ptr [esp + 0x10], eax
        fnstsw  ax
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [edx + 8]
        test    ah, 0x41
        mov    dword ptr [esp + 0x14], ecx
        jne    L_16df
        fld    dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0x1c]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 0x10]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        add    esp, 0x18
        ret    4
L_16df:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        add    esp, 0x18
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
        xor    eax, eax
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
        mov    eax, 5
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
        mov    eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0
        push    0x76e2ec
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007b9814], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_175c
        mov    ecx, dword ptr [g_007b9824]
        push    ecx
        push    0x76e2c8
        push    0x6f
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x431940
        mov    dword ptr [g_007b9810], esi
        jmp    L_1766
L_175c:
        mov    dword ptr [g_007b9810], 0
L_1766:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_179a
        push    0x400
        mov    dword ptr [esi], 0
        mov    dword ptr [esi + 4], 0x100
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007b980c], esi
        pop    esi
        ret    
L_179a:
        mov    dword ptr [g_007b980c], 0
        pop    esi
        ret    
    }
}
