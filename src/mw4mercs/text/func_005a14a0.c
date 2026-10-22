/*
 * FUN_005a14a0 (268 B) — Distance/sphere intersection test.
 *
 * __thiscall (ECX = this), RET 0x18 (6 stack params).
 * Computes distance between two points and compares against a radius.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041c680(void *, void *);
extern float DAT_00773464;   /* 0x00773464 — constant */

__declspec(naked) int __fastcall FUN_005a14a0(int this_ptr)
{
    __asm {
        sub     esp, 0x24
        mov     eax, dword ptr [esp + 0x28]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        push    esi
        lea     esi, [ecx + 0x80]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        push    esi
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
        call    FUN_0041c680
        fld     dword ptr [esi + 0xc]
        fld     dword ptr [esp + 0x4]
        mov     eax, dword ptr [esi + 0x2c]
        mov     edx, dword ptr [esi + 0x1c]
        fadd    st, st(1)
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], eax
        fstp    dword ptr [esp + 0x4]
        pop     esi
        fstp    st(0)
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x4]
        fst     dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x8]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x8]
        fcomp   dword ptr [DAT_00773464]
        fnstsw  ax
        test    ah, 0x1
        jnz     ret_false_early
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [DAT_00773464]
        fnstsw  ax
        test    ah, 0x1
        jnz     ret_false_early
        mov     al, byte ptr [esp + 0x3c]
        test    al, al
        jz      compute_dist
        mov     dword ptr [esp + 0x4], 0x0
        mov     dword ptr [esp + 0x10], 0x0
compute_dist:
        fld     dword ptr [esp + 0xc]
        /* __emit: MSVC6 collapses zero-disp [esp] to D8 24 24; need D8 64 24 00 */
        __emit 0xD8
        __emit 0x64
        __emit 0x24
        __emit 0x00
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x8]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x38]
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jnz     ret_false
        mov     eax, 0x1
        add     esp, 0x24
        ret     0x18
ret_false:
        xor     eax, eax
        add     esp, 0x24
        ret     0x18
ret_false_early:
        xor     al, al
        add     esp, 0x24
        ret     0x18
    }
}
