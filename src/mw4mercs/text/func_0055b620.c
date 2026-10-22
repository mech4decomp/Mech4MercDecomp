/*
 * FUN_0055b620 (7 B) — Gets byte at [ecx+0x954].
 * Bytes: 8A 81 54 09 00 00 C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055b620(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x954]
        ret
    }
}
