/*
 * FUN_00674390 (783 B) ? __stdcall, 7 params (RET 0x1c). Heavy FPU math:
 * circle/line intersection solving, writes results back through 4 float*
 * params. Uses _ftol (FUN_0075db4a) and several FPU register ops.
 *
 * __stdcall, RET 0x1c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_0076d064;
extern float g_0076d978;
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void __cdecl FUN_00674390(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [esp + 0x30]
        push    ebp
        mov     ebp, dword ptr [esp + 0x2c]
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        fld     dword ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ebp]
        mov     byte ptr [esp + 0x30], 0x1
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [edi]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ebx]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_743f3
        mov     byte ptr [esp + 0x30], 0x0
    L_743f3:
        fld     dword ptr [esp + 0x1c]
        mov     byte ptr [esp + 0x34], 0x1
        fmul    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_7441a
        mov     byte ptr [esp + 0x34], 0x0
    L_7441a:
        mov     al, byte ptr [esp + 0x30]
        test    al, al
        jz      L_7442e
        mov     al, byte ptr [esp + 0x34]
        test    al, al
        jnz     L_745e1
    L_7442e:
        fld     dword ptr [esi]
        fsub    dword ptr [edi]
        call    FUN_0075db4a
        cdq
        xor     eax, edx
        sub     eax, edx
        cmp     eax, 0x1
        jge     L_744c6
        fld     dword ptr [esp + 0x48]
        fchs
        fcomp   dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jz      L_74545
        fld     dword ptr [esi]
        fcomp   dword ptr [esp + 0x48]
        fnstsw  ax
        test    ah, 0x41
        jz      L_74545
        fld     dword ptr [esi]
        mov     al, byte ptr [esp + 0x30]
        test    al, al
        fld     st(0)
        fmulp   st(1), st(0)
        fsubr   dword ptr [esp + 0x38]
        fsqrt
        jnz     L_74499
        fld     dword ptr [ebp]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_74496
        fld     st(0)
        fchs
        fstp    dword ptr [ebp]
        jmp     L_74499
    L_74496:
        fst     dword ptr [ebp]
    L_74499:
        mov     al, byte ptr [esp + 0x34]
        test    al, al
        jnz     L_745df
        fld     dword ptr [ebx]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_74680
        pop     edi
        fchs
        pop     esi
        fstp    dword ptr [ebx]
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x1c
    L_744c6:
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x28]
        fdiv    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(1)
        fsubr   dword ptr [esp + 0x1c]
        fld     st(0)
        fsub    dword ptr [esp + 0x44]
        fld     st(2)
        fmul    st(0), st(3)
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [esp + 0x48]
        fld     st(0)
        fmul    st(0), st(3)
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x40]
        fadd    st(0), st(0)
        fsubp   st(1), st(0)
        fst     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x3c]
        fld     st(1)
        fmul    st(0), st(2)
        fsub    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x40]
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x48]
        fmul    dword ptr [g_0076d978]
        fsubp   st(1), st(0)
        fstp    st(1)
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_74568
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
    L_74545:
        mov     dword ptr [edi], 0xbf800000
        pop     edi
        mov     dword ptr [esi], 0xbf800000
        pop     esi
        mov     dword ptr [ebp], 0xbf800000
        pop     ebp
        mov     dword ptr [ebx], 0xbf800000
        pop     ebx
        add     esp, 0x1c
        ret     0x1c
    L_74568:
        fsqrt
        mov     cl, byte ptr [esp + 0x30]
        test    cl, cl
        fld     dword ptr [esp + 0x48]
        fadd    st(0), st(0)
        fld     st(1)
        fsub    dword ptr [esp + 0x3c]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x3c]
        fchs
        fsub    st(0), st(2)
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x40]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0x20]
        fdiv    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x40]
        fsub    dword ptr [esp + 0x20]
        fdiv    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x38]
        jnz     L_745eb
        mov     al, byte ptr [esp + 0x34]
        test    al, al
        jnz     L_745eb
        fstp    st(0)
    L_745bc:
        fld     dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x40]
        fmul    st(0), st(2)
        mov     dword ptr [esi], eax
        mov     dword ptr [edi], ecx
        fadd    st(0), st(1)
        fstp    dword ptr [ebp]
        fld     dword ptr [esp + 0x40]
        fmul    st(0), st(2)
        fadd    st(0), st(1)
        fstp    dword ptr [ebx]
        fstp    st(0)
    L_745df:
        fstp    st(0)
    L_745e1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x1c
    L_745eb:
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_7463c
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_7463e
        test    cl, cl
        fld     dword ptr [esp + 0x48]
        fmulp   st(2), st(0)
        fxch
        fadd    st(0), st(1)
        fxch
        fstp    st(0)
        jz      L_74629
        mov     edx, dword ptr [esp + 0x48]
        fstp    dword ptr [ebx]
        mov     dword ptr [edi], edx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x1c
    L_74629:
        mov     eax, dword ptr [esp + 0x48]
        fstp    dword ptr [ebp]
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x1c
    L_7463c:
        fstp    st(0)
    L_7463e:
        fld     dword ptr [esp + 0x38]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_745bc
        fld     dword ptr [esp + 0x38]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_745bc
        test    cl, cl
        fld     dword ptr [esp + 0x40]
        fmulp   st(2), st(0)
        fxch
        fadd    st(0), st(1)
        fxch
        fstp    st(0)
        jz      L_7468c
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [edi], ecx
    L_74680:
        pop     edi
        fstp    dword ptr [ebx]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x1c
    L_7468c:
        mov     edx, dword ptr [esp + 0x40]
        fstp    dword ptr [ebp]
        pop     edi
        mov     dword ptr [esi], edx
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x1c
    }
}
