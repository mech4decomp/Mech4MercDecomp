/*
 * FUN_0069A120 (13 B) — __thiscall, RET 4 (1 stack param).
 * Copies the dword pointed to by the stack param into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0069A120(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     4
    }
}
