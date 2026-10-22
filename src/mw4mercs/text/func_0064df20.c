/* FUN_0064df20 - ABL object validity predicate (13 B, __thiscall) */

__declspec(naked) void FUN_0064df20(void)
{
    __asm {
        mov eax, dword ptr [ecx + 4]
        and eax, 0FFFFFFFCh
        neg eax
        sbb eax, eax
        neg eax
        ret
    }
}
