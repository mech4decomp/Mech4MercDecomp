/*
 * FUN_004FB710 (530 B) — __thiscall (RET 0x1c). MLR/Adept physics-ish
 * update: dot-product, length check, exponential falloff, matrix/vector
 * accumulation, virtual call, and a final magnitude computation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_7b220c;   /* 0x007b220c */
extern float g_76d064;   /* 0x0076d064 */
extern float g_76d598;   /* 0x0076d598 */
extern float g_775e40;   /* 0x00775e40 */
extern int __cdecl FUN_006fab90(void);

__declspec(naked) void __stdcall FUN_004fb710(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        mov     eax, dword ptr [ebp + 0x14]
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x19c]
        fmul    dword ptr [eax + 0x4]
        fld     dword ptr [esi + 0x1a0]
        fmul    dword ptr [eax + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [eax]
        fmul    dword ptr [esi + 0x198]
        faddp   st(1), st(0)
        fst     dword ptr [ebp + 0x14]
        fmul    dword ptr [eax]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [eax + 0x4]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [esi + 0x198]
        fsub    dword ptr [ebp - 0xc]
        fld     dword ptr [esi + 0x19c]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [esi + 0x1a0]
        fsub    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp + 0x14]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_cont
        fstp    st(0)
        pop     esi
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        mov     esp, ebp
        pop     ebp
        ret     0x1c
    l_cont:
        fld     dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0x18]
        fchs
        fld     dword ptr [ebp + 0xc]
        fmul    dword ptr [ebp + 0x1c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_skip_zero
        mov     dword ptr [ecx], 0x0
    l_skip_zero:
        fld     dword ptr [ebp - 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fld     st(0)
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_len_ok
        mov     eax, dword ptr [ebp + 0x20]
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        mov     dword ptr [eax], 0x0
        jmp     l_merge
    l_len_ok:
        fld     dword ptr [ecx]
        mov     edx, dword ptr [ebp + 0x20]
        fadd    dword ptr [g_76d064]
        fmul    dword ptr [edx]
        fmul    dword ptr [ebp + 0x14]
        fdivrp  st(1), st(0)
        fadd    dword ptr [g_76d064]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_merge
        fstp    st(0)
        mov     dword ptr [edx], 0x0
        fld     dword ptr [g_76c5b0]
    l_merge:
        fld     st(0)
        push    0x76d414
        fsub    dword ptr [g_76d064]
        fld     st(0)
        fmul    dword ptr [esi + 0x198]
        fstp    dword ptr [ebp - 0x18]
        fld     st(0)
        fmul    dword ptr [esi + 0x19c]
        fstp    dword ptr [ebp - 0x14]
        fmul    dword ptr [esi + 0x1a0]
        fstp    dword ptr [ebp - 0x10]
        fadd    dword ptr [ecx]
        fchs
        fld     st(0)
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x8]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ebp - 0x10]
        fld     dword ptr [g_76d598]
        fsub    dword ptr [ecx]
        fld     dword ptr [ebp - 0xc]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        fld     dword ptr [esi + 0x198]
        fadd    st(0), st(0)
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [esi + 0x19c]
        fadd    st(0), st(0)
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [esi + 0x1a0]
        fadd    st(0), st(0)
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x18]
        fadd    dword ptr [esi + 0x198]
        fstp    dword ptr [esi + 0x198]
        fld     dword ptr [ebp - 0x14]
        fadd    dword ptr [esi + 0x19c]
        fstp    dword ptr [esi + 0x19c]
        fadd    dword ptr [esi + 0x1a0]
        fstp    dword ptr [esi + 0x1a0]
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_after_assert
        int     3
    l_after_assert:
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x4]
        pop     esi
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fmul    dword ptr [eax + 0x1c]
        fmul    dword ptr [g_775e40]
        mov     esp, ebp
        pop     ebp
        ret     0x1c
    }
}
