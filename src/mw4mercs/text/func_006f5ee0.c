/*
 * FUN_006f5ee0 (12 B) — LeaveCriticalSection wrapper
 *
 * Disassembly:
 *   68 20 AA 8A 00    push 0x8aaa20
 *   FF 15 00 B1 76 00 call dword ptr [0x0076b100]  ; LeaveCriticalSection
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f5ee0(void)
{
    __asm {
        push 0x8aaa20
        _emit 0xFF
        _emit 0x15
        _emit 0x00
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        ret
    }
}
