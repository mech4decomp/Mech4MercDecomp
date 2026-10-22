/*
 * FUN_004CF860 (10 B) — getter: returns the byte at offset 0x20 of the
 * object pointed to by the single argument (__stdcall, ret 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004CF860(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     al, byte ptr [eax+0x20]
        ret     4
    }
}
