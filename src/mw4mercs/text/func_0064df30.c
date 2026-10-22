/* FUN_0064df30 - ABL object virtual dispatch via vtable[7] (22 B, __thiscall) */

__declspec(naked) void FUN_0064df30(void)
{
    __asm {
        mov ecx, dword ptr [ecx + 4]
        test ecx, 0FFFFFFFCh
        jz loc_64df43
        and ecx, 0FFFFFFFCh
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 1ch]
loc_64df43:
        xor al, al
        ret
    }
}
