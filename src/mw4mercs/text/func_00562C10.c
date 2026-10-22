/* FUN_00562C10 - 19 bytes - copy 8-byte struct (two dwords) */
__declspec(naked) void FUN_00562C10(void)
{
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        ret 4
    }
}
