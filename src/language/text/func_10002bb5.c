/*
 * FUN_10002bb5 (23 B, __thiscall) — wrapper: pushes a trailing 0 and
 * tail-calls FUN_10002bcc(this, param_1, param_2, param_3, 0). ECX = this
 * is preserved through the pushes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10002bb5 (23 B) -- __cdecl (3 args). Thin wrapper that
 * forwards (p1, p2, p3, 0) to the __cdecl FUN_10002bcc parser.
 */

extern void __cdecl FUN_10002bcc(void);

__declspec(naked) void FUN_10002bb5(void)
{
    __asm {
        push    0
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        call    FUN_10002bcc
        add     esp, 0x10
        ret
    }
}
