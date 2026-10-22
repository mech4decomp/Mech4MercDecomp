/*
 * FUN_00505714 (extent 0x505714-0x505a39) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_00776ea4;
extern void __cdecl FUN_005058e0(void);
extern void __cdecl FUN_00505390(void);

__declspec(naked) void FUN_00505714(void)
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
        mov    dword ptr [ecx], 0x776ea8
        jmp    FUN_00505390
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x24]
        sub    eax, 2
        jne    L_5823
        mov    eax, dword ptr [esi + 0x10]
        fld    dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esi + 0x14]
        fstp    dword ptr [ecx + eax*4]
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esi + 0xc]
        inc    edx
        mov    eax, edx
        cmp    eax, ecx
        mov    dword ptr [esi + 0x10], edx
        jb    L_5766
        mov    dword ptr [esi + 0x10], 0
L_5766:
        mov    ecx, dword ptr [esi + 0x14]
        fld    dword ptr [g_0076c5b0]
        mov    edx, dword ptr [ecx]
        mov    eax, edx
        mov    dword ptr [esp + 4], edx
        mov    edx, dword ptr [esi + 0xc]
        test    edx, edx
        mov    dword ptr [esp + 8], eax
        jbe    L_57b4
        push    edi
        mov    edi, edx
L_5785:
        fadd    dword ptr [ecx]
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        je    L_579a
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 8], eax
L_579a:
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_57ad
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 0xc], eax
L_57ad:
        add    ecx, 4
        dec    edi
        jne    L_5785
        pop    edi
L_57b4:
        fsub    dword ptr [esp + 4]
        add    edx, -2
        mov    dword ptr [esp + 0xc], 0
        mov    ecx, dword ptr [esi + 4]
        fsub    dword ptr [esp + 8]
        mov    dword ptr [esp + 8], edx
        fidiv    dword ptr [esp + 8]
        mov    dword ptr [esp + 8], ecx
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        je    L_57fc
        mov    edx, dword ptr [esi + 0x28]
        mov    eax, dword ptr [esi + 8]
        mov    ecx, dword ptr [esi + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    edx
        jmp    L_581c
L_57fc:
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5823
        mov    eax, dword ptr [esi + 0x28]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esi + 0x2c]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        push    eax
L_581c:
        mov    ecx, esi
        call    FUN_005058e0
L_5823:
        fld    dword ptr [g_0076c5b0]
        fld    dword ptr [esp + 0x14]
        fsub    dword ptr [esi + 0x2c]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_5884
        fadd    dword ptr [esi + 0x1c]
        fst    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_58c7
        fld    dword ptr [esi + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_58c7
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esi + 0x18]
        fchs    
        fcomp    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        jne    L_587b
        fld    dword ptr [g_0076d598]
        jmp    L_58c7
L_587b:
        fld    dword ptr [esp + 0x14]
        fdiv    dword ptr [esi + 0x18]
        jmp    L_58c7
L_5884:
        fsub    dword ptr [esi + 0x34]
        fst    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_58c7
        fld    dword ptr [esi + 0x30]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_58c7
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x14]
        fcomp    dword ptr [esi + 0x30]
        fnstsw  ax
        test    ah, 1
        jne    L_58c0
        fld    dword ptr [g_0076d064]
        jmp    L_58c7
L_58c0:
        fld    dword ptr [esp + 0x14]
        fdiv    dword ptr [esi + 0x30]
L_58c7:
        cmp    dword ptr [esi + 0x20], 1
        pop    esi
        jne    L_58d0
        fchs    
L_58d0:
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
        nop    
        fld    dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x28], eax
        mov    eax, dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [esp + 0xc]
        fst    dword ptr [ecx + 0x1c]
        mov    dword ptr [ecx + 0x2c], eax
        fadd    dword ptr [esp + 4]
        mov    dword ptr [ecx + 8], edx
        fsubr    dword ptr [esp + 8]
        fstp    dword ptr [ecx + 0x18]
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x10]
        fst    dword ptr [ecx + 0x34]
        fld    dword ptr [esp + 0xc]
        fsub st(0), st(1)
        fsub    dword ptr [esp + 8]
        fstp    dword ptr [ecx + 0x30]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [ecx + 0xc]
        fld    dword ptr [g_0076c5b0]
        sub    esp, 8
        test    edx, edx
        jbe    L_595f
        mov    eax, dword ptr [ecx + 0x14]
        push    esi
        mov    esi, edx
L_5956:
        fadd    dword ptr [eax]
        add    eax, 4
        dec    esi
        jne    L_5956
        pop    esi
L_595f:
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
        push    eax
        call    FUN_005058e0
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_0076c5b0]
        sub    esp, 0x10
        push    esi
        mov    esi, dword ptr [ecx + 0xc]
        test    esi, esi
        jbe    L_59ae
        mov    eax, dword ptr [ecx + 0x14]
        mov    edx, esi
L_59a6:
        fadd    dword ptr [eax]
        add    eax, 4
        dec    edx
        jne    L_59a6
L_59ae:
        mov    dword ptr [esp + 0xc], esi
        mov    dword ptr [esp + 0x10], 0
        fild    qword ptr [esp + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        push    eax
        fdivr st(0), st(1)
        fstp    dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [esp + 8]
        fmul    dword ptr [g_00776ea4]
        fsubr    dword ptr [ecx + 8]
        fst    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [esp + 8]
        push    edx
        fsub    dword ptr [ecx + 4]
        push    eax
        fmul    dword ptr [g_00776ea4]
        fadd    dword ptr [ecx + 4]
        fst    dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x18]
        fstp    dword ptr [ecx + 4]
        push    edx
        call    FUN_005058e0
        pop    esi
        add    esp, 0x10
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 8]
        push    eax
        mov    eax, dword ptr [ecx + 0x2c]
        push    edx
        mov    edx, dword ptr [ecx + 4]
        push    eax
        push    edx
        call    FUN_005058e0
        ret    4
    }
}
