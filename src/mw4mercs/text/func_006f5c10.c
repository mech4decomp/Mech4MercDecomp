/*
 * FUN_006f5c10 (17 B) — __stdcall: call vtable[0x14] on param_2 with param_1
 *
 * Disassembly:
 *   8B 4C 24 08       mov ecx, dword ptr [esp + 8]
 *   8B 54 24 04       mov edx, dword ptr [esp + 4]
 *   8B 01             mov eax, dword ptr [ecx]
 *   52                push edx
 *   FF 50 14          call dword ptr [eax + 0x14]
 *   C2 08 00          ret 8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f5c10(void)
{
    __asm {
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x14]
        ret 8
    }
}
