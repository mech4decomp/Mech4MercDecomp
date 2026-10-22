/*
 * FUN_5e011860 (16 B) — stub: zeroes a global byte, returns E_NOTIMPL (0x80004001).
 *
 * __stdcall, RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_5e011860_global;

__declspec(naked) int __stdcall FUN_5e011860(void)
{
    __asm {
        mov     byte ptr ds:[0], 0  /* 3E C6 05 00000000 00: reference writes a literal NULL (reloc-free) */
        mov     eax, 0x80004001
        ret     0xc
    }
}
