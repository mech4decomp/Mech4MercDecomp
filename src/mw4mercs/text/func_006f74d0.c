/*
 * FUN_006f74d0 (10 B) — __thiscall setter: this->0x28 = param_1
 *
 * Disassembly:
 *   8A 44 24 04    mov al, byte ptr [esp + 4]
 *   88 41 28       mov byte ptr [ecx + 0x28], al
 *   C2 04 00       ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f74d0(void)
{
    __asm {
        mov al, byte ptr [esp + 4]
        mov byte ptr [ecx + 0x28], al
        ret 4
    }
}
