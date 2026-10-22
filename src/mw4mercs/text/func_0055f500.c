/*
 * FUN_0055f500 (7 B) — Sets dword ptr [ecx] to 0.
 * Bytes: C7 01 00 00 00 00 C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055f500(void)
{
    __asm {
        mov     dword ptr [ecx], 0
        ret
    }
}
