/*
 * FUN_5e011ab0 (8 B) — COM E_NOTIMPL stub slot.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e011ab0(void)
{
    __asm {
        mov     eax, 0x80004001
        ret     0xC
    }
}
