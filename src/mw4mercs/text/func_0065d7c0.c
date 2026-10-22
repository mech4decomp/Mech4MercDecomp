/*
 * FUN_0065d7c0 (11 B) -- ABL bytecode helper. __fastcall: zeroes
 * dword at this+0x2bc8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d7c0(void)
{
    __asm {
        mov     dword ptr [ecx + 0x2bc8], 0x0
        ret
    }
}
