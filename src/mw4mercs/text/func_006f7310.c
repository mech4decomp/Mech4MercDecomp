/*
 * FUN_006f7310 (17 B) — __thiscall setter: this->0x14 = param_1; this->0x18 = param_2
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   8B 54 24 08       mov edx, dword ptr [esp + 8]
 *   89 41 14          mov dword ptr [ecx + 0x14], eax
 *   89 51 18          mov dword ptr [ecx + 0x18], edx
 *   C2 08 00          ret 8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f7310(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 0x14], eax
        mov dword ptr [ecx + 0x18], edx
        ret 8
    }
}
