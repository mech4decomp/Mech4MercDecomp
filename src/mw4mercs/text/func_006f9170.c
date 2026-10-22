/*
 * FUN_006f9170 (12 B) — Calls FUN_0075dbbe with data pointer 0x6F9180
 *
 * Disassembly:
 *   68 80 91 6F 00    push 0x6f9180
 *   E8 44 4A 06 00    call FUN_0075dbbe
 *   59                pop ecx
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f9170(void)
{
    __asm {
        push 0x6f9180
        _emit 0xE8
        _emit 0x44
        _emit 0x4A
        _emit 0x06
        _emit 0x00
        pop ecx
        ret
    }
}
