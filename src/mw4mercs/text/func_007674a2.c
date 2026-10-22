/*
 * FUN_007674a2 (extent 0x7674a2-0x7678f0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_007704c4;
extern float  g_007afd24;
extern float  g_007b220c;
extern int    g_008bd600;
extern int    g_008bd604;
extern int    g_008bd608;
extern int    g_008bd610;
extern int    g_008bd614;
extern int    g_008bd618;
extern int    g_008bd620;
extern int    g_008bd624;
extern int    g_008bd628;
extern int    g_008bd630;
extern int    g_008bd634;
extern int    g_008bd638;
extern int    g_008bd640;
extern int    g_008bd644;
extern int    g_008bd648;
extern int    g_008bd650;
extern int    g_008bd654;
extern int    g_008bd658;
extern int    g_008bd660;
extern int    g_008bd664;
extern int    g_008bd668;
extern void __cdecl FUN_0041a2c0(void);
extern void __cdecl FUN_007677b0(void);

__declspec(naked) void FUN_007674a2(void)
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
        fld    dword ptr [esp + 0xc]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 8]
        fmul    dword ptr [ecx]
        fadd    dword ptr [edx]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 4]
        fadd    dword ptr [edx + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 8]
        fadd    dword ptr [edx + 8]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 0xc]
        fadd    dword ptr [edx + 0xc]
        fstp    dword ptr [eax + 0xc]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 0x10]
        fadd    dword ptr [edx + 0x10]
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 0x14]
        fadd    dword ptr [edx + 0x14]
        fstp    dword ptr [eax + 0x14]
        ret    0xc
        nop    
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
        /* __emit: ref uses near-jmp E9 0B 00 00 00; MSVC6 collapses to EB 0B */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7530:
        mov    dword ptr [g_008bd604], 0
        mov    dword ptr [g_008bd600], 0
        mov    dword ptr [g_008bd608], 0
        ret    
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 8]
        fld    dword ptr [edx]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edx + 4]
        fld    st(0)
        fmulp st(1), st(0)
        fadd st(0), st(1)
        fsqrt    
        fst    dword ptr [ecx + 8]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_759a
        mov    dword ptr [ecx], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ecx + 4], 0
        mov    eax, ecx
        ret    4
L_759a:
        fsqrt    
        fld    st(0)
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_75d7
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ecx], 0
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [g_007afd24]
        fnstsw  ax
        test    ah, 0x41
        jne    L_75e9
        fchs    
        mov    eax, ecx
        fstp    dword ptr [ecx + 4]
        ret    4
L_75d7:
        fld    dword ptr [edx]
        fld    dword ptr [edx + 8]
        fpatan    
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fxch    st(1)
        fpatan    
        fchs    
L_75e9:
        fstp    dword ptr [ecx + 4]
        mov    eax, ecx
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
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx + 4]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_7639
        fld    dword ptr [ecx]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_7639
        fld    dword ptr [ecx + 8]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_7639
        mov    eax, 1
        ret    
L_7639:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx + 4]
        mov    edx, dword ptr [esp + 8]
        fsub    dword ptr [edx + 4]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_7685
        fld    dword ptr [ecx]
        fsub    dword ptr [edx]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_7685
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [edx + 8]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_7685
        mov    eax, 1
        ret    
L_7685:
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
        /* __emit: ref uses near-jmp E9 0B 00 00 00; MSVC6 collapses to EB 0B */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_76a0:
        mov    dword ptr [g_008bd660], 0
        mov    dword ptr [g_008bd664], 0
        mov    dword ptr [g_008bd668], 0x3f800000
        ret    
        nop    
        /* __emit: ref uses near-jmp E9 0B 00 00 00; MSVC6 collapses to EB 0B */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_76d0:
        mov    dword ptr [g_008bd650], 0
        mov    dword ptr [g_008bd654], 0
        mov    dword ptr [g_008bd658], 0xbf800000
        ret    
        nop    
        /* __emit: ref uses near-jmp E9 0B 00 00 00; MSVC6 collapses to EB 0B */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7700:
        mov    dword ptr [g_008bd640], 0x3f800000
        mov    dword ptr [g_008bd644], 0
        mov    dword ptr [g_008bd648], 0
        ret    
        nop    
        /* __emit: ref uses near-jmp E9 0B 00 00 00; MSVC6 collapses to EB 0B */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7730:
        mov    dword ptr [g_008bd630], 0xbf800000
        mov    dword ptr [g_008bd634], 0
        mov    dword ptr [g_008bd638], 0
        ret    
        nop    
        /* __emit: ref uses near-jmp E9 0B 00 00 00; MSVC6 collapses to EB 0B */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7760:
        mov    dword ptr [g_008bd620], 0
        mov    dword ptr [g_008bd624], 0x3f800000
        mov    dword ptr [g_008bd628], 0
        ret    
        nop    
        /* __emit: ref uses near-jmp E9 0B 00 00 00; MSVC6 collapses to EB 0B */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7790:
        mov    dword ptr [g_008bd610], 0
        mov    dword ptr [g_008bd614], 0xbf800000
        mov    dword ptr [g_008bd618], 0
        ret    
        nop    
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fld    dword ptr [esi + 0x20]
        mov    eax, ecx
        fmul    dword ptr [edx + 8]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fstp    dword ptr [eax]
        fld    dword ptr [esi + 4]
        fmul    dword ptr [edx]
        fld    dword ptr [esi + 0x24]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x14]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi + 8]
        fmul    dword ptr [edx]
        fld    dword ptr [esi + 0x28]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x18]
        pop    esi
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 8]
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
        sub    esp, 0x30
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x40]
        mov    esi, ecx
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_0041a2c0
        mov    eax, dword ptr [esp + 0x3c]
        push    edi
        push    eax
        mov    ecx, esi
        call    FUN_007677b0
        pop    edi
        pop    esi
        add    esp, 0x30
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        fsub    dword ptr [esi]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        fadd    st(0), st(0)
        fadd    dword ptr [edx]
        fadd    dword ptr [edi]
        fstp    dword ptr [eax]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [esi + 4]
        fadd    st(0), st(0)
        fadd    dword ptr [edx + 4]
        fadd    dword ptr [edi + 4]
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [esi + 8]
        fadd    st(0), st(0)
        fadd    dword ptr [edx + 8]
        fadd    dword ptr [edi + 8]
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [esi]
        fsub    dword ptr [ecx]
        fmul    dword ptr [g_007704c4]
        fld    dword ptr [edx]
        fadd    st(0), st(0)
        fsubp st(1), st(0)
        fsub    dword ptr [edi]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [g_007704c4]
        fld    dword ptr [edx + 4]
        fadd    st(0), st(0)
        fsubp st(1), st(0)
        fsub    dword ptr [edi + 4]
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [esi + 8]
        mov    esi, dword ptr [edx]
        fsub    dword ptr [ecx + 8]
        fmul    dword ptr [g_007704c4]
        fld    dword ptr [edx + 8]
        fadd    st(0), st(0)
        fsubp st(1), st(0)
        fsub    dword ptr [edi + 8]
        pop    edi
        fstp    dword ptr [eax + 0x24]
        mov    dword ptr [eax + 8], esi
        mov    esi, dword ptr [edx + 4]
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [eax + 0x18], esi
        mov    dword ptr [eax + 0x28], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 0x1c], edx
        mov    dword ptr [eax + 0x2c], ecx
        pop    esi
        ret    0x10
    }
}
