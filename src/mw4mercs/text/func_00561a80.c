/* FUN_00561A80 - 13 bytes - copy first dword of struct (thiscall) */
__declspec(naked) void FUN_00561A80(void)
{
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ret 4
    }
}
