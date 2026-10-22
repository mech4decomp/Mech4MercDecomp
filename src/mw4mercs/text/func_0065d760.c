/*
 * FUN_0065d760 (4 B) -- ABL bytecode helper. __fastcall getter:
 * returns byte at this+0x6.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char FUN_0065d760(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x6]
        ret
    }
}
