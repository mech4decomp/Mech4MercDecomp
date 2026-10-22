/*
 * FUN_5e011080 (8 B) — stub returning E_NOTIMPL (0x80004005).
 *
 * __stdcall, RET 0xC (3 stack params, ignored).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e011080(void)
{
    __asm {
        mov     eax, 0x80004005
        ret     0xc
    }
}
