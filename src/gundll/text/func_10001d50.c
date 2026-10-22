/*
 * FUN_10001d50 (11 B) - __cdecl. Thin wrapper calling FUN_10001d20.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * gundll FUN_10001d50 (11 B) -- __cdecl. `mov eax,[esp+4]; push eax;
 * call FUN_10001d20; ret` -- pass-through relay.
 */

extern void __cdecl FUN_10001d20(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10001d50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_10001d20
        ret
    }
}
