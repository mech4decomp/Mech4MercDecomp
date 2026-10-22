/*
 * FUN_006B0650 (18 B) — Vtable 0x798C44 slot 11: set three floats to -1.0.
 *
 * Sets three consecutive floats at the output pointer to -1.0 (0xBF800000).
 *
 * __thiscall (ECX = this), RET 8 (one stack param: output float*).
 *
 * Disassembly:
 *   8B 44 24 04       mov     eax, [esp+4]
 *   B9 00 00 80 BF    mov     ecx, 0xBF800000
 *   89 08             mov     [eax], ecx
 *   89 48 04          mov     [eax+4], ecx
 *   89 48 08          mov     [eax+8], ecx
 *   C2 08 00          ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006b0650(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, 0xBF800000
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret     8
    }
}
