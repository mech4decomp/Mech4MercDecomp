/*
 * FUN_005a78b0 (30 B) — Destructor-like thiscall function.
 *
 * Saves this (ECX) in ESI, calls FUN_005a7920 (sub-object destructor),
 * then conditionally calls operator delete (FUN_004084e0) if param & 1.
 * Returns this (ESI).
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a7920(void);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005a78b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a7920
        test    byte ptr [esp + 0x8], 0x1
        jz      skip_delete
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip_delete:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
