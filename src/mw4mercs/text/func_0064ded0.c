/* FUN_0064ded0 - ABL object virtual dispatch via vtable[1] (31 B, __thiscall RET 4) */

__declspec(naked) void FUN_0064ded0(void)
{
    __asm {
        mov eax, dword ptr [ecx + 4]
        test eax, 0FFFFFFFCh
        jz loc_64deec
        push esi
        mov esi, dword ptr [esp + 8]
        and eax, 0FFFFFFFCh
        mov edx, dword ptr [eax]
        push esi
        push ecx
        mov ecx, eax
        call dword ptr [edx + 4]
        pop esi
loc_64deec:
        ret 4
    }
}
