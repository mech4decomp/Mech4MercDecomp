/*
 * FUN_005ba720 (11 B) — __thiscall (ECX = this), RET 4.
 * Copies *(int*)this into *param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ba720(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
