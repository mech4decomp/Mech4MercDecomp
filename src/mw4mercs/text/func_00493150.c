/*
 * FUN_00493150 (14 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Reads field_08 from *this and writes it to *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00493150(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
