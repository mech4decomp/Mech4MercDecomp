/* FUN_00561A90 - 21 bytes - copy byte then dword to this */
__declspec(naked) void FUN_00561A90(void)
{
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dl, byte ptr [ecx]
        mov ecx, dword ptr [esp + 8]
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ret 8
    }
}
