/*
 * FUN_100020de (9 B) — section-leave wrapper: calls FUN_10001fa7(9).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_100020de (9 B) -- __stdcall. Section-leave wrapper:
 * forwards to FUN_10001fa7(9).
 */

extern void __cdecl FUN_10001fa7(void);               /* section leave */

__declspec(naked) void __stdcall FUN_100020de(void)
{
    __asm {
        push    9
        call    FUN_10001fa7
        pop     ecx
        ret
    }
}
