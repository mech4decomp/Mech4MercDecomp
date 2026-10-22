/*
 * FUN_004FB240 (843 B) — MLR/Adept matrix transform + interpolation.
 *
 * Heavy FPU: per-element exponential interpolation loop, then a 4x4
 * matrix multiply (param_4 * local matrix) writing into param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7b220c;   /* 0x007b220c */
extern float g_76d070;   /* 0x0076d070 */
extern float g_7b8d88;   /* 0x007b8d88 */
extern float g_7b8d8c;   /* 0x007b8d8c */
extern float g_7b8d90;   /* 0x007b8d90 */
extern void __cdecl FUN_0041a250(void);

__declspec(naked) void __stdcall FUN_004fb240(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x4c
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x1c]
        mov     dword ptr [ebp - 0x8], eax
        mov     eax, dword ptr [ebp + 0x20]
        sub     eax, esi
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [ebp + 0x18]
        sub     esi, edx
        mov     dword ptr [ebp + 0x1c], esi
        mov     esi, dword ptr [ebp + 0x10]
        push    edi
        lea     ebx, [ebp - 0x10]
        lea     edi, [ebp - 0x1c]
        sub     esi, edx
        sub     ebx, edx
        sub     edi, edx
        mov     dword ptr [ebp - 0x10], ecx
        mov     ecx, edx
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp + 0x18], edi
        mov     dword ptr [ebp + 0x20], 0x3
        jmp     l_loop1_entry
    l_loop1_top:
        mov     eax, dword ptr [ebp - 0x4]
    l_loop1_entry:
        mov     edi, dword ptr [ebp + 0x1c]
        add     edi, ecx
        fld     dword ptr [edi + eax]
        fld     st(0)
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_loop1_exp
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x18]
        fld     dword ptr [ebp + 0x8]
        fmul    dword ptr [edi]
        fld     st(0)
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ecx]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [ebx + ecx]
        fstp    dword ptr [eax + ecx]
        fadd    dword ptr [ecx]
        fstp    dword ptr [esi + ecx]
        jmp     l_loop1_next
    l_loop1_exp:
        fld     dword ptr [edi]
        mov     eax, dword ptr [ebp + 0x18]
        fdiv    st(0), st(1)
        fld     dword ptr [ecx]
        fsub    st(0), st(1)
        fld     st(2)
        fmul    dword ptr [ebp + 0x8]
        fchs
        fldl2e
        fmulp   st(1), st(0)
        fld     st(0)
        frndint
        fxch
        fsub    st(0), st(1)
        f2xm1
        fld1
        faddp   st(1), st(0)
        fscale
        fstp    st(1)
        fmul    st(0), st(1)
        fld     st(0)
        fadd    st(0), st(3)
        fstp    dword ptr [esi + ecx]
        fxch
        fsub    st(0), st(1)
        fdiv    st(0), st(3)
        fadd    dword ptr [ebx + ecx]
        fxch    st(2)
        fmul    dword ptr [ebp + 0x8]
        faddp   st(2), st(0)
        fxch
        fstp    dword ptr [eax + ecx]
        fstp    st(0)
        fstp    st(0)
    l_loop1_next:
        mov     eax, dword ptr [ebp + 0x20]
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [ebp + 0x20], eax
        jnz     l_loop1_top

        lea     edi, [ebp - 0x10]
        lea     ecx, [edx + 0xc]
        mov     ebx, 0x3
    l_loop2_entry:
        mov     edx, dword ptr [ebp + 0x1c]
        mov     eax, dword ptr [ebp - 0x4]
        add     edx, ecx
        fld     dword ptr [edx + eax]
        fld     st(0)
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_loop2_exp
        fstp    st(0)
        fld     dword ptr [ebp + 0x8]
        fmul    dword ptr [edx]
        fld     st(0)
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ecx]
        fmul    dword ptr [ebp + 0x8]
        fstp    dword ptr [edi]
        fadd    dword ptr [ecx]
        fstp    dword ptr [ecx + esi]
        jmp     l_loop2_next
    l_loop2_exp:
        fld     dword ptr [edx]
        fdiv    st(0), st(1)
        fld     dword ptr [ecx]
        fsub    st(0), st(1)
        fld     st(2)
        fmul    dword ptr [ebp + 0x8]
        fchs
        fldl2e
        fmulp   st(1), st(0)
        fld     st(0)
        frndint
        fxch
        fsub    st(0), st(1)
        f2xm1
        fld1
        faddp   st(1), st(0)
        fscale
        fstp    st(1)
        fmul    st(0), st(1)
        fld     st(0)
        fadd    st(0), st(3)
        fstp    dword ptr [ecx + esi]
        fxch
        fsub    st(0), st(1)
        fdiv    st(0), st(3)
        fxch    st(2)
        fmul    dword ptr [ebp + 0x8]
        faddp   st(2), st(0)
        fxch
        fstp    dword ptr [edi]
        fstp    st(0)
        fstp    st(0)
    l_loop2_next:
        add     ecx, 0x4
        add     edi, 0x4
        dec     ebx
        jnz     l_loop2_entry

        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     ecx, [ebp - 0x4c]
        call    FUN_0041a250
        mov     edx, dword ptr [g_7b8d88]
        mov     ecx, dword ptr [g_7b8d90]
        mov     eax, dword ptr [g_7b8d8c]
        mov     dword ptr [ebp - 0x40], edx
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [ebp + 0xc]
        lea     edx, [ebp - 0x4c]
        mov     dword ptr [ebp - 0x30], eax
        mov     dword ptr [ebp + 0x18], edx
        mov     dword ptr [ebp + 0x8], ecx
        mov     edx, dword ptr [ebp + 0x14]
        push    esi
        mov     esi, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     eax, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [ebp - 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [ecx + 0x1c], edx
        mov     dword ptr [ecx + 0x2c], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
