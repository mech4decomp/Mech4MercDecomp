/*
 * FUN_006f7370 (10 B) — __thiscall setter: this->0x1D = param_1
 *
 * Disassembly:
 *   8A 44 24 04    mov al, byte ptr [esp + 4]
 *   88 41 1D       mov byte ptr [ecx + 0x1d], al
 *   C2 04 00       ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f7370(void)
{
    __asm {
        mov al, byte ptr [esp + 4]
        mov byte ptr [ecx + 0x1d], al
        ret 4
    }
}
