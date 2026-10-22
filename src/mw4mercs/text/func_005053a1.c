/*
 * FUN_005053a1 (extent 0x5053a1-0x5056c5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_00776ea4;
extern void __cdecl FUN_005055e0(void);

__declspec(naked) void FUN_005053a1(void)
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
        sub    esp, 0xc
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x24]
        dec    eax
        push    edi
        je    L_54b2
        dec    eax
        jne    L_5573
        mov    eax, dword ptr [esi + 0x10]
        fld    dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esi + 0x14]
        fstp    dword ptr [ecx + eax*4]
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esi + 0xc]
        inc    edx
        mov    eax, edx
        cmp    eax, ecx
        mov    dword ptr [esi + 0x10], edx
        jb    L_53ec
        mov    dword ptr [esi + 0x10], 0
L_53ec:
        mov    ecx, dword ptr [esi + 0x14]
        fld    dword ptr [g_0076c5b0]
        mov    edx, dword ptr [ecx]
        mov    eax, edx
        mov    dword ptr [esp + 8], edx
        mov    edx, dword ptr [esi + 0xc]
        test    edx, edx
        mov    dword ptr [esp + 0xc], eax
        jbe    L_5438
        mov    edi, edx
L_540a:
        fadd    dword ptr [ecx]
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        je    L_541f
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 8], eax
L_541f:
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5432
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 0xc], eax
L_5432:
        add    ecx, 4
        dec    edi
        jne    L_540a
L_5438:
        fsub    dword ptr [esp + 8]
        add    edx, -2
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esi + 4]
        fsub    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0xc], edx
        fidiv    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0xc], ecx
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esp + 8]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_5486
        mov    edx, dword ptr [esi + 0x28]
        mov    eax, dword ptr [esi + 8]
        mov    ecx, dword ptr [esp + 8]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005055e0
        jmp    L_5573
L_5486:
        fld    dword ptr [esp + 8]
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5573
        mov    edx, dword ptr [esi + 0x28]
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005055e0
        jmp    L_5573
L_54b2:
        mov    edx, dword ptr [esi + 0x10]
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [esi + 0x14]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esi + 0xc]
        inc    edx
        mov    eax, edx
        cmp    eax, ecx
        mov    dword ptr [esi + 0x10], edx
        jb    L_54d6
        mov    dword ptr [esi + 0x10], 0
L_54d6:
        mov    ecx, dword ptr [esi + 0x14]
        fld    dword ptr [g_0076c5b0]
        mov    edx, dword ptr [ecx]
        mov    eax, edx
        mov    dword ptr [esp + 0xc], edx
        mov    edx, dword ptr [esi + 0xc]
        test    edx, edx
        mov    dword ptr [esp + 8], eax
        jbe    L_5522
        mov    edi, edx
L_54f4:
        fadd    dword ptr [ecx]
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_5509
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 0xc], eax
L_5509:
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_551c
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 8], eax
L_551c:
        add    ecx, 4
        dec    edi
        jne    L_54f4
L_5522:
        fsub    dword ptr [esp + 0xc]
        add    edx, -2
        mov    dword ptr [esp + 0xc], edx
        mov    dword ptr [esp + 0x10], 0
        fsub    dword ptr [esp + 8]
        fidiv    dword ptr [esp + 0xc]
        fcom    dword ptr [esi + 4]
        fnstsw  ax
        test    ah, 1
        je    L_5557
        fld    dword ptr [esi + 4]
        fsub st(0), st(1)
        fsubr    dword ptr [esi + 8]
        fstp    dword ptr [esi + 8]
        fstp    dword ptr [esi + 4]
        jmp    L_5573
L_5557:
        fcom    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5571
        fld    st(0)
        fsub    dword ptr [esi + 8]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [esi + 4]
        fstp    dword ptr [esi + 8]
        jmp    L_5573
L_5571:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_5573:
        fld    dword ptr [g_0076c5b0]
        fld    dword ptr [esi + 0x1c]
        fadd    dword ptr [esi + 4]
        fsubr    dword ptr [esp + 0x18]
        fst    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_55c3
        fld    dword ptr [esi + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_55c3
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [esi + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_55bc
        fld    dword ptr [g_0076d064]
        jmp    L_55c3
L_55bc:
        fld    dword ptr [esp + 0x18]
        fdiv    dword ptr [esi + 0x18]
L_55c3:
        cmp    dword ptr [esi + 0x20], 1
        pop    edi
        pop    esi
        jne    L_55d1
        fsubr    dword ptr [g_0076d064]
L_55d1:
        add    esp, 0xc
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
        fld    dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x28], eax
        mov    eax, dword ptr [esp + 8]
        fmul    dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 4], edx
        mov    dword ptr [ecx + 8], eax
        fadd    dword ptr [g_0076d070]
        fst    dword ptr [ecx + 0x1c]
        fld    dword ptr [esp + 8]
        fsub st(0), st(1)
        fxch    st(1)
        fadd    dword ptr [esp + 4]
        fsubp st(1), st(0)
        fstp    dword ptr [ecx + 0x18]
        ret    0xc
        nop    
        nop    
        mov    edx, dword ptr [ecx + 0xc]
        fld    dword ptr [g_0076c5b0]
        sub    esp, 8
        test    edx, edx
        jbe    L_563f
        mov    eax, dword ptr [ecx + 0x14]
        push    esi
        mov    esi, edx
L_5636:
        fadd    dword ptr [eax]
        add    eax, 4
        dec    esi
        jne    L_5636
        pop    esi
L_563f:
        __emit 0x89  // mov dword ptr [esp], edx - MSVC6 drops 00 disp byte on [esp]
        __emit 0x54
        __emit 0x24
        __emit 0x00
        mov    dword ptr [esp + 4], 0
        __emit 0xDF  // fild qword ptr [esp+0] - MSVC6 drops 00 disp byte (df 2c 24 vs ref df 6c 24 00)
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        mov    eax, dword ptr [ecx + 0x28]
        push    eax
        fdivr st(0), st(1)
        fstp    dword ptr [esp + 4]
        mov    eax, dword ptr [esp + 4]
        push    eax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        call    FUN_005055e0
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        fld    dword ptr [ecx + 8]
        mov    eax, dword ptr [ecx + 0x28]
        fsub    dword ptr [ecx + 4]
        push    eax
        fmul    dword ptr [g_00776ea4]
        fld    dword ptr [ecx + 8]
        fsub st(0), st(1)
        fst    dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 4]
        fstp    dword ptr [ecx + 8]
        push    edx
        fadd    dword ptr [ecx + 4]
        fst    dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + 4]
        push    eax
        call    FUN_005055e0
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 8]
        push    eax
        mov    eax, dword ptr [ecx + 4]
        push    edx
        push    eax
        call    FUN_005055e0
        ret    4
    }
}
