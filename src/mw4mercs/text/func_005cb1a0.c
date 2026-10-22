/*
 * FUN_005cb1a0 (11 B) — __thiscall, RET 4. Copies *this into *param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cb1a0(void *param)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
