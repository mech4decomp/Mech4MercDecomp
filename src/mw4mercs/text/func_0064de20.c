/* FUN_0064de20 - ABL object virtual dispatch via vtable[0] (30 B, __thiscall RET 4) */

__declspec(naked) void FUN_0064de20(void)
{
    __asm {
        mov eax, dword ptr [ecx + 4]
        test eax, 0FFFFFFFCh
        jz loc_64de3b
        push esi
        mov esi, dword ptr [esp + 8]
        and eax, 0FFFFFFFCh
        mov edx, dword ptr [eax]
        push esi
        push ecx
        mov ecx, eax
        call dword ptr [edx]
        pop esi
loc_64de3b:
        ret 4
    }
}
