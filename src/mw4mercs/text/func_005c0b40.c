/*
 * FUN_005C0B40 (13 B) — __thiscall (RET 4). Dereferences this twice and
 * stores the result into the stack param: *param = **(this).
 *
 * __thiscall (ECX = this), RET 4.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_005c0b40(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
