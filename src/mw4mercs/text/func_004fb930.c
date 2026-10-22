/*
 * FUN_004FB930 (483 B) — __thiscall (RET 0x14). MLR/Adept two-object
 * interaction update: virtual-call magnitudes, weighted blend factor,
 * vector difference dot-product, and accumulation into both objects'
 * 0x198/0x19c/0x1a0 fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;   /* 0x0076d064 */
extern float g_775e44;   /* 0x00775e44 */
extern int __cdecl FUN_006fab90(void);

__declspec(naked) void __stdcall FUN_004fb930(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x1a0]
        push    edi
        fld     dword ptr [esi + 0x19c]
        mov     edi, dword ptr [ebp + 0x8]
        fld     dword ptr [esi + 0x198]
        mov     eax, dword ptr [esi + 0x78]
        fld     st(0)
        lea     ecx, [esi + 0x78]
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [edi + 0x1a0]
        fld     dword ptr [edi + 0x19c]
        fld     dword ptr [edi + 0x198]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0xc]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        mov     dword ptr [ebp - 0x4], eax
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     eax, dword ptr [ebp - 0x4]
        fld     dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ebp + 0x14]
        fadd    dword ptr [ebx + 0x1c]
        mov     ecx, dword ptr [ebp + 0x18]
        fdivr   dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebp + 0x8]
        fld     dword ptr [edi + 0x198]
        fsub    dword ptr [esi + 0x198]
        fld     dword ptr [edi + 0x19c]
        fsub    dword ptr [esi + 0x19c]
        fld     dword ptr [edi + 0x1a0]
        fsub    dword ptr [esi + 0x1a0]
        fxch
        fmul    dword ptr [eax + 0x4]
        fxch    st(2)
        fmul    dword ptr [eax]
        faddp   st(2), st(0)
        fld     st(0)
        fmul    dword ptr [eax + 0x8]
        faddp   st(2), st(0)
        fld     dword ptr [ecx]
        fadd    dword ptr [g_76d064]
        fmulp   st(2), st(0)
        fstp    st(0)
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [ebp - 0x18]
        fld     st(0)
        fmul    dword ptr [eax + 0x4]
        fstp    dword ptr [ebp - 0x14]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x198]
        push    0x76d414
        fstp    dword ptr [esi + 0x198]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x19c]
        fstp    dword ptr [esi + 0x19c]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x1a0]
        fstp    dword ptr [esi + 0x1a0]
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_after_assert
        int     3
    l_after_assert:
        fld     dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi + 0x198]
        fsub    dword ptr [g_76d064]
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp + 0x14], edx
        fld     st(0)
        fmul    dword ptr [ebp - 0x18]
        fadd    dword ptr [edi + 0x198]
        fstp    dword ptr [edi + 0x198]
        fld     dword ptr [ebp - 0x14]
        fmul    st(0), st(1)
        fadd    dword ptr [edi + 0x19c]
        fstp    dword ptr [edi + 0x19c]
        fld     dword ptr [ebp - 0x10]
        fmul    st(0), st(1)
        fadd    dword ptr [edi + 0x1a0]
        fstp    dword ptr [edi + 0x1a0]
        fstp    st(0)
        fld     dword ptr [edi + 0x1a0]
        fld     dword ptr [edi + 0x19c]
        fld     dword ptr [edi + 0x198]
        pop     edi
        fld     dword ptr [esi + 0x1a0]
        fld     dword ptr [esi + 0x19c]
        pop     esi
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [ebp + 0x14]
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsubr   dword ptr [ebp - 0x8]
        fmul    dword ptr [eax + 0x1c]
        fld     st(3)
        fmul    st(0), st(4)
        fld     st(5)
        fmul    st(0), st(6)
        faddp   st(1), st(0)
        fld     st(6)
        fmul    st(0), st(7)
        faddp   st(1), st(0)
        fsubr   dword ptr [ebp - 0xc]
        fmul    dword ptr [ebx + 0x1c]
        pop     ebx
        faddp   st(1), st(0)
        fmul    dword ptr [ebp + 0x8]
        fmul    dword ptr [g_775e44]
        fstp    st(5)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
