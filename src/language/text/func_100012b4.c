/*
 * FUN_100012b4 (9 B) — calls FUN_10001fa7(0xD).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_100012b4 (9 B) -- __stdcall. relay to FUN_10001fa7(0xD).
 */

extern void __stdcall FUN_10001fa7(int);

__declspec(naked) void __stdcall FUN_100012b4(void)
{
    __asm {
        push    0xD
        call    FUN_10001fa7
        pop     ecx
        ret
    }
}
