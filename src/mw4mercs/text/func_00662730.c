/*
 * FUN_00662730 (52 B) — Weighted sum of three scalar functions.
 *
 * __cdecl, RET 4. Computes
 *   FUN_006621a0(p) + (FUN_00662290(p) + FUN_006622b0(p) * g_0076d070)
 * using the FPU, spilling intermediates to the stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d070;
extern void __cdecl FUN_006622b0(void);
extern void __cdecl FUN_00662290(void);
extern void __cdecl FUN_006621a0(void);

__declspec(naked) void __stdcall FUN_00662730(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_006622b0
        fmul    dword ptr [g_0076d070]
        push    esi
        fstp    dword ptr [esp + 0x10]
        call    FUN_00662290
        fadd    dword ptr [esp + 0x10]
        push    esi
        fstp    dword ptr [esp + 0x14]
        call    FUN_006621a0
        fadd    dword ptr [esp + 0x14]
        add     esp, 0xc
        pop     esi
        ret     4
    }
}
