/*
 * FUN_006f73f0 (10 B) — __thiscall setter: this->0x42 = param_1
 *
 * Disassembly:
 *   8A 44 24 04    mov al, byte ptr [esp + 4]
 *   88 41 42       mov byte ptr [ecx + 0x42], al
 *   C2 04 00       ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f73f0(void)
{
    __asm {
        mov al, byte ptr [esp + 4]
        mov byte ptr [ecx + 0x42], al
        ret 4
    }
}
