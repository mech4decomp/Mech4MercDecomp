/*
 * FUN_006f5320 (15 B) — free() wrapper
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   50                push eax
 *   FF 15 D0 B2 76 00 call dword ptr [0x0076b2d0]  ; free
 *   59                pop ecx
 *   C2 04 00          ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f5320(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0xD0
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        pop ecx
        ret 4
    }
}
