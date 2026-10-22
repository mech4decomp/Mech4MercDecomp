/*
 * FUN_006f7390 (10 B) — __thiscall setter: this->0x1C = param_1
 *
 * Disassembly:
 *   8A 44 24 04    mov al, byte ptr [esp + 4]
 *   88 41 1C       mov byte ptr [ecx + 0x1c], al
 *   C2 04 00       ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f7390(void)
{
    __asm {
        mov al, byte ptr [esp + 4]
        mov byte ptr [ecx + 0x1c], al
        ret 4
    }
}
