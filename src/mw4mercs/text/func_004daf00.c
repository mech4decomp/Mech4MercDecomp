/*
 * FUN_004DAF00 (21 B) — Assertion stub: calls FUN_006FAB90("Not implemented"),
 * breaks if non-zero, then returns.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *fmt, ...);

__declspec(naked) void __stdcall FUN_004daf00(void)
{
    __asm {
        push    0x76d414
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_skip
        int     3
    l_skip:
        ret     0x10
    }
}
