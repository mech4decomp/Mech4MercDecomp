/* FUN_00562AE0 - 22 bytes - copy dword from src1 and byte from src2 to this */
__declspec(naked) void FUN_00562AE0(void)
{
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax], edx
        mov dl, byte ptr [ecx]
        mov byte ptr [eax + 4], dl
        ret 8
    }
}
