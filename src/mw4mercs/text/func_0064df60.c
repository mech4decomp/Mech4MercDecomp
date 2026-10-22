/* FUN_0064df60 - ABL object raw pointer accessor (7 B, __thiscall) */

__declspec(naked) void FUN_0064df60(void)
{
    __asm {
        mov eax, dword ptr [ecx + 4]
        and eax, 0FFFFFFFCh
        ret
    }
}
