/*
 * FUN_5e0112d0 (8 B) — stub returning E_NOTIMPL (0x80004005).
 *
 * __stdcall, RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e0112d0(void)
{
    __asm {
        mov     eax, 0x80004005
        ret     0xc
    }
}
