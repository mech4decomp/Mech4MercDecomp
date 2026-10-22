/*
 * func_006827A0 - thiscall wrapper (stdcall, ret 4)
 * Calls FUN_005c6e40([esp+4]) with ecx = [ecx+4]
 */

extern void __cdecl FUN_005c6e40(void);

__declspec(naked) void func_006827A0()
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c6e40
        ret     4
    }
}
