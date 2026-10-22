/*
 * FUN_10003670 (4 B) - returns byte at this+0x20.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __cdecl FUN_10003670(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x20]
        ret
    }
}
