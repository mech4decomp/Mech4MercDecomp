/*
 * FUN_0065d8a0 (7 B) -- ABL bytecode helper. __fastcall getter:
 * returns byte at this+0x2bd8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char FUN_0065d8a0(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x2bd8]
        ret
    }
}
