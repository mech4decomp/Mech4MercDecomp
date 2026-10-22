/*
 * FUN_5e011b00 (8 B) — COM E_NOTIMPL stub slot.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e011b00(void)
{
    __asm {
        mov     eax, 0x80004001
        ret     0x4
    }
}
