/*
 * FUN_5e00dfe0 (8 B) — stub returning E_NOTIMPL (0x80004001).
 *
 * __stdcall, RET 0x20 (8 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00dfe0(void)
{
    __asm {
        mov     eax, 0x80004001
        ret     0x20
    }
}
