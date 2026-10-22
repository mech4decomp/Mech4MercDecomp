/*
 * FUN_5e00fb60 (8 B) — returns E_NOTIMPL (0x80004005).
 *
 * __stdcall, RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00fb60(void)
{
    __asm {
        mov     eax, 0x80004005
        ret     0xc
    }
}
