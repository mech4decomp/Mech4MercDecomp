/*
 * FUN_10001000 (8 B) — returns 1.
 *
 * __stdcall, RET 0xC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10001000 (8 B) -- __stdcall, RET 0xC. Returns 1.
 * Compiled at /O2 (module default): `mov eax,1; ret 0Ch` (NOT /O1's
 * `push 1/pop eax`), so no opts.txt entry is needed.
 */

__declspec(naked) void __stdcall FUN_10001000(void)
{
    __asm {
        mov     eax, 1
        ret     0xC
    }
}
