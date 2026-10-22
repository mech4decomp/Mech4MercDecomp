/* FUN_00561D80 - 14 bytes - getter: read field at offset 8 via pointer */
__declspec(naked) void FUN_00561D80(void)
{
    __asm {
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esp + 4]
        mov dword ptr [eax], ecx
        ret 4
    }
}
