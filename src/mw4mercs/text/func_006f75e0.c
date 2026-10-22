/*
 * FUN_006f75e0 (4 B) — __thiscall getter: returns this->0x38
 *
 * Disassembly:
 *   8A 41 38          mov al, byte ptr [ecx + 0x38]
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f75e0(void)
{
    __asm {
        mov al, byte ptr [ecx + 0x38]
        ret
    }
}
