/*
 * FUN_10003550 (4 B) - returns byte at this+0x24.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __cdecl FUN_10003550(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x24]
        ret
    }
}
