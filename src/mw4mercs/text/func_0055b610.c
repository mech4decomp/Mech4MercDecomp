/*
 * FUN_0055b610 (13 B) — Sets byte at [ecx+0x954] from stack param, ret 4.
 * Bytes: 8A 44 24 04 88 81 54 09 00 00 C2 04 00
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055b610(void)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x954], al
        ret     4
    }
}
