/*
 * FUN_005b5ae8 (extent 0x5b5ae8-0x5b5f31) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_007b220c;
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_005fa300(void);

__declspec(naked) void FUN_005b5ae8(void)
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
        sub    esp, 0x24
        mov    edx, dword ptr [ecx + 0xd8]
        mov    eax, dword ptr [edx + 0x8c]
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [edx + 0x9c]
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        fstp    dword ptr [esi]
        mov    dword ptr [esp + 8], eax
        fld    dword ptr [ecx + 0x440]
        mov    dword ptr [esi + 4], eax
        mov    eax, dword ptr [edx + 0xac]
        fabs    
        fld    dword ptr [g_007b220c]
        mov    dword ptr [esp + 0xc], eax
        fcompp    
        mov    dword ptr [esi + 8], eax
        fnstsw  ax
        test    ah, 1
        je    L_5be7
        mov    eax, dword ptr [ecx + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_5be7
        fld    dword ptr [edx + 0x88]
        fld    dword ptr [edx + 0x98]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [edx + 0xa8]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x30]
        fmul    dword ptr [ecx + 0x440]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [edx + 0x80]
        fld    dword ptr [edx + 0x90]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [edx + 0xa0]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x30]
        fmul    dword ptr [ecx + 0x430]
        fstp    dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        fxch    st(1)
        fmul    dword ptr [esp + 0x2c]
        faddp st(1), st(0)
        fadd    dword ptr [esp + 4]
        fstp    dword ptr [esi]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x2c]
        faddp st(1), st(0)
        fadd    dword ptr [esp + 8]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x2c]
        faddp st(1), st(0)
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 8]
L_5be7:
        mov    eax, esi
        pop    esi
        add    esp, 0x24
        ret    0xc
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
        sub    esp, 0x14
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        mov    edi, eax
        mov    ecx, dword ptr [edi + 0x2b4]
        mov    dword ptr [esp + 0x14], ecx
        fld    dword ptr [esp + 0x14]
        mov    ecx, esi
        fmul    dword ptr [edi + 0x304]
        fstp    dword ptr [esp + 8]
        call    dword ptr [edx + 0x114]
        fst    dword ptr [esp + 0x18]
        mov    dword ptr [esi + 0x56c], 0
        fmul    dword ptr [edi + 0x308]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [edi + 0x2b4]
        fmul    dword ptr [esi + 0x430]
        fst    dword ptr [esp + 0xc]
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_5c7c
        fld    dword ptr [esp + 8]
        fchs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5d31
L_5c7c:
        fld    dword ptr [esi + 0x440]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5d31
        fld    dword ptr [esi + 0x440]
        fsub    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x10]
        fdivp st(1), st(0)
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5cba
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_5cba:
        fld    dword ptr [esi + 0x430]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5cf6
        fsub    dword ptr [esp + 8]
        fld    dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 8]
        fdivp st(1), st(0)
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5d1d
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
        jmp    L_5d1d
L_5cf6:
        fchs    
        fsub    dword ptr [esp + 8]
        fld    dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 8]
        fdivp st(1), st(0)
        fchs    
        fcom    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_5d1d
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
L_5d1d:
        fld    dword ptr [edi + 0x300]
        fmul st(0), st(1)
        fmul st(0), st(2)
        fstp    dword ptr [esi + 0x56c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_5d31:
        fld    dword ptr [esi + 0x568]
        fcomp    dword ptr [esi + 0x56c]
        fnstsw  ax
        test    ah, 1
        je    L_5d75
        fld    dword ptr [edi + 0x2fc]
        fmul    dword ptr [esp + 0x20]
        fadd    dword ptr [esi + 0x568]
        fst    dword ptr [esi + 0x568]
        fcomp    dword ptr [esi + 0x56c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5db7
        mov    eax, dword ptr [esi + 0x56c]
        mov    dword ptr [esi + 0x568], eax
        jmp    L_5db7
L_5d75:
        fld    dword ptr [esi + 0x568]
        fcomp    dword ptr [esi + 0x56c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5db7
        fld    dword ptr [edi + 0x2fc]
        fmul    dword ptr [esp + 0x20]
        fsubr    dword ptr [esi + 0x568]
        fst    dword ptr [esi + 0x568]
        fcomp    dword ptr [esi + 0x56c]
        fnstsw  ax
        test    ah, 1
        je    L_5db7
        mov    ecx, dword ptr [esi + 0x56c]
        mov    dword ptr [esi + 0x568], ecx
L_5db7:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x114]
        fld    st(0)
        fmul    dword ptr [edi + 0x314]
        mov    dword ptr [esi + 0x574], 0
        fld    dword ptr [esi + 0x440]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5e19
        fld    dword ptr [esi + 0x440]
        fsub st(0), st(1)
        fxch    st(2)
        fsub st(0), st(1)
        fdivp st(2), st(0)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5e09
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_5e09:
        fld    dword ptr [edi + 0x310]
        fmul st(0), st(1)
        fstp    dword ptr [esi + 0x574]
        jmp    L_5e1b
L_5e19:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_5e1b:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esi + 0x570]
        fcomp    dword ptr [esi + 0x574]
        fnstsw  ax
        test    ah, 1
        je    L_5e67
        fld    dword ptr [edi + 0x30c]
        fmul    dword ptr [esp + 0x20]
        fadd    dword ptr [esi + 0x570]
        fst    dword ptr [esi + 0x570]
        fcomp    dword ptr [esi + 0x574]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5ea9
        mov    eax, dword ptr [esi + 0x574]
        pop    edi
        mov    dword ptr [esi + 0x570], eax
        pop    esi
        add    esp, 0x14
        ret    4
L_5e67:
        fld    dword ptr [esi + 0x570]
        fcomp    dword ptr [esi + 0x574]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5ea9
        fld    dword ptr [edi + 0x30c]
        fmul    dword ptr [esp + 0x20]
        fsubr    dword ptr [esi + 0x570]
        fst    dword ptr [esi + 0x570]
        fcomp    dword ptr [esi + 0x574]
        fnstsw  ax
        test    ah, 1
        je    L_5ea9
        mov    ecx, dword ptr [esi + 0x574]
        mov    dword ptr [esi + 0x570], ecx
L_5ea9:
        pop    edi
        pop    esi
        add    esp, 0x14
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
        cmp    dword ptr [esp + 4], 3
        push    esi
        mov    esi, ecx
        jne    L_5f22
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_5f22
        mov    ecx, dword ptr [esi + 0xe0]
        cmp    dword ptr [ecx + 0x14], 0x12
        je    L_5f22
        mov    edx, dword ptr [ecx]
        push    0
        push    0x12
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        je    L_5efb
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x12c]
L_5efb:
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        push    1
        push    esi
        add    eax, 0x68
        push    eax
        mov    ecx, esi
        call    FUN_005fa300
        test    eax, eax
        je    L_5f22
        push    eax
        lea    ecx, [esi + 0x54c]
        call    FUN_0041fcd0
L_5f22:
        pop    esi
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
        ret    
    }
}
