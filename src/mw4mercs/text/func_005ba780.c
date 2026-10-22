/*
 * FUN_005ba780 (13 B) — __thiscall (ECX = this), RET 4.
 * Copies *(int*)*param into *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ba780(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     4
    }
}
