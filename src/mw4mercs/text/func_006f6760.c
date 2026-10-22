/*
 * FUN_006F6760 (44 B) — Global flag check and reset.
 *
 * If either global byte 0x008493d7 or 0x008493d6 is 1, calls a method
 * on the object pointed to by [0x007b6ed0], then clears both globals.
 *
 * __cdecl, no params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f6760(void)
{
    __asm {
        _emit   0x8A
        _emit   0x0D
        _emit   0xD7
        _emit   0x93
        _emit   0x84
        _emit   0x00
        mov     al, 1
        cmp     cl, al
        jz      l_do_call
        _emit   0x38
        _emit   0x05
        _emit   0xD6
        _emit   0x93
        _emit   0x84
        _emit   0x00
        jnz     l_done
    l_do_call:
        _emit   0xA1
        _emit   0xD0
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 4]
        xor     al, al
        _emit   0xA2
        _emit   0xD7
        _emit   0x93
        _emit   0x84
        _emit   0x00
        _emit   0xA2
        _emit   0xD6
        _emit   0x93
        _emit   0x84
        _emit   0x00
    l_done:
        ret
    }
}
