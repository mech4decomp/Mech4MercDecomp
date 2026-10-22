/*
 * FUN_0044D050 (30 B) — Scalar deleting destructor.
 *
 * Calls FUN_0044D0A0 (destructor body), then conditionally frees via
 * FUN_004084E0 if (flags & 1).
 *
 * __thiscall, RET 4 (one stack param: flags).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0044D0A0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0044d050(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0044D0A0
        test    byte ptr [esp + 8], 1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
