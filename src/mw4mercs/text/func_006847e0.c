/*
 * FUN_006847e0 (88 B) — HUD aim-check: tests whether the element's
 * forward vector (at +0x24..+0x30) is within a cone (dot-product
 * threshold vs global 0x007b220c). If so, calls FUN_004e2f40 and
 * stores the result at +0x10; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;
extern int g_007dc728;
extern void __cdecl FUN_004e2f40(void);

__declspec(naked) void FUN_006847e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x30]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        __emit 0xDF  /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref needs no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_684834
        fld     dword ptr [esi + 0x2c]
        fld     dword ptr [esi + 0x28]
        fld     dword ptr [esi + 0x24]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [g_007b220c]
        fstp    st(0)
        __emit 0xDF  /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref needs no-WAIT DF E0 */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        fstp    st(0)
        jnz     L_684834
        mov     ecx, dword ptr [g_007dc728]
        push    esi
        call    FUN_004e2f40
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        ret
    L_684834:
        xor     eax, eax
        pop     esi
        ret
    }
}
