/*
 * FUN_006f91b0 (12 B) — Calls FUN_0075dbbe with data pointer 0x6F91C0
 *
 * Disassembly:
 *   68 C0 91 6F 00    push 0x6f91c0
 *   E8 04 4A 06 00    call FUN_0075dbbe
 *   59                pop ecx
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f91b0(void)
{
    __asm {
        push 0x6f91c0
        _emit 0xE8
        _emit 0x04
        _emit 0x4A
        _emit 0x06
        _emit 0x00
        pop ecx
        ret
    }
}
