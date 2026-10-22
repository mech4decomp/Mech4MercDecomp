/* FUN_00562B00 - 19 bytes - copy 5-byte struct (dword + byte) */
__declspec(naked) void FUN_00562B00(void)
{
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [ecx]
        mov cl, byte ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov byte ptr [eax + 4], cl
        ret 4
    }
}
