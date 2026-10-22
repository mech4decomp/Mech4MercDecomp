/*
 * FUN_100012ab (9 B) — calls FUN_10001f46(0xD).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_100012ab (9 B) -- __stdcall. relay to FUN_10001f46(0xD).
 */

extern void __stdcall FUN_10001f46(int);

__declspec(naked) void __stdcall FUN_100012ab(void)
{
    __asm {
        push    0xD
        call    FUN_10001f46
        pop     ecx
        ret
    }
}
