/*
 * FUN_100011f7 (15 B) — calls FUN_10001206(0,0,1).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_100011f7 (15 B) -- __stdcall. thin relay to
 */

extern void __cdecl FUN_10001206(unsigned int, int, int);

__declspec(naked) void __stdcall FUN_100011f7(void)
{
    __asm {
        push    1
        push    0
        push    0
        call    FUN_10001206
        add     esp, 0xC
        ret
    }
}
