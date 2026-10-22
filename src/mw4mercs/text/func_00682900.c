/*
 * func_00682900 - thiscall wrapper (stdcall, ret 4)
 * Calls FUN_005c5f90([esp+4]) with ecx = [ecx+4]
 */

extern void __cdecl FUN_005c5f90(void);

__declspec(naked) void func_00682900()
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c5f90
        ret     4
    }
}
